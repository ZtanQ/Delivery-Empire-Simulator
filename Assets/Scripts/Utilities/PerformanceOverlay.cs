
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;
using Unity.Profiling;
using UnityEngine.UI;
using TMPro;

public class PerformanceOverlay : MonoBehaviour
{
    [Header("Main Overlay")]
    [SerializeField] private TMP_Text performanceText;
    [SerializeField] private Button recordButton;
    [SerializeField] private Button settingsButton;

    [Header("Settings Panel")]
    [SerializeField] private GameObject settingsPanel;
    [SerializeField] private TMP_InputField durationInput;
    [SerializeField] private TMP_InputField sampleIntervalInput;
    [SerializeField] private TMP_InputField measurementWindowInput;
    [SerializeField] private Button saveButton;
    [SerializeField] private Button cancelButton;

    private float durationMinutes = 40f;
    private float sampleIntervalSeconds = 300f;
    private float measurementWindowSeconds = 10f;

    private readonly List<float> fpsSamples = new();
    private readonly List<float> drawCallSamples = new();

    private ProfilerRecorder drawCalls;
    private ProfilerRecorder triangles;
    private ProfilerRecorder memory;

    private float elapsed;
    private float nextSampleTime;
    private float temperatureTimer;
    private float batteryTemperature = -1f;

    private bool recording;
    private bool settingsApplied = true;
    private string filePath;

    private void Start()
    {
        drawCalls = ProfilerRecorder.StartNew(
            ProfilerCategory.Render, "Draw Calls Count");

        triangles = ProfilerRecorder.StartNew(
            ProfilerCategory.Render, "Triangles Count");

        memory = ProfilerRecorder.StartNew(
            ProfilerCategory.Memory, "Total Used Memory");

        batteryTemperature = GetBatteryTemperature();

        RefreshSettingsInputs();

        if (settingsPanel != null)
            settingsPanel.SetActive(false);

        if (settingsButton != null)
            settingsButton.onClick.AddListener(OpenSettings);

        if (saveButton != null)
            saveButton.onClick.AddListener(SaveSettings);

        if (cancelButton != null)
            cancelButton.onClick.AddListener(CloseSettings);

        if (recordButton != null)
            recordButton.onClick.AddListener(StartRecording);
    }

    private void Update()
    {
        float deltaTime = Time.unscaledDeltaTime;
        float fps = 1f / Mathf.Max(deltaTime, 0.0001f);

        temperatureTimer += deltaTime;

        if (temperatureTimer >= 5f)
        {
            temperatureTimer = 0f;
            batteryTemperature = GetBatteryTemperature();
        }

        if (performanceText != null)
        {
            performanceText.text =
                $"FPS: {fps:F1}\n" +
                $"Battery Temp: {FormatMetric(batteryTemperature)}" +
                (batteryTemperature >= 0f ? " °C" : "") + "\n" +
                $"Draw Calls: {GetDrawCalls()}\n" +
                $"Triangles: {GetTriangles()}\n" +
                $"Memory: {FormatMetric(GetMemoryMB())} MB\n" +
                $"Duration: {durationMinutes:F2} min\n" +
                $"Sample Interval: {sampleIntervalSeconds:F1} s\n" +
                $"Measurement Window: {measurementWindowSeconds:F1} s\n" +
                $"Elapsed: {elapsed / 60f:F1} min\n" +
                $"Recording: {(recording ? "Yes" : "No")}";
        }

        if (!recording)
            return;

        elapsed = Mathf.Min(
            elapsed + deltaTime,
            durationMinutes * 60f);

        float windowStart =
            nextSampleTime - measurementWindowSeconds;

        if (elapsed >= windowStart && elapsed < nextSampleTime)
        {
            fpsSamples.Add(fps);

            long currentDrawCalls = GetDrawCalls();

            if (currentDrawCalls >= 0)
                drawCallSamples.Add(currentDrawCalls);
        }

        if (elapsed >= nextSampleTime)
        {
            SaveSample();

            if (elapsed >= durationMinutes * 60f)
            {
                recording = false;

                Debug.Log(
                    $"Performance test completed: {filePath}");

                return;
            }

            nextSampleTime = Mathf.Min(
                nextSampleTime + sampleIntervalSeconds,
                durationMinutes * 60f);

            fpsSamples.Clear();
            drawCallSamples.Clear();
        }
    }

    // Opens the settings panel and loads the currently applied values.
    private void OpenSettings()
    {
        if (recording)
        {
            Debug.LogWarning(
                "Stop the current test before changing settings.");
            return;
        }

        RefreshSettingsInputs();
        settingsApplied = false;

        if (settingsPanel != null)
            settingsPanel.SetActive(true);
    }

    // Applies valid settings and closes the panel.
    private void SaveSettings()
    {
        if (recording)
            return;

        if (!TryReadPositiveFloat(
                durationInput, out float minutes) ||
            !TryReadPositiveFloat(
                sampleIntervalInput, out float interval) ||
            !TryReadPositiveFloat(
                measurementWindowInput, out float window))
        {
            Debug.LogWarning(
                "Enter valid positive numbers in all settings.");
            return;
        }

        if (minutes > 1440f)
        {
            Debug.LogWarning(
                "Duration cannot exceed 1440 minutes.");
            return;
        }

        float durationSeconds = minutes * 60f;

        if (interval < 1f || interval > durationSeconds)
        {
            Debug.LogWarning(
                "Sample interval must be between 1 second " +
                "and the total test duration.");
            return;
        }

        if (window < 1f || window > interval)
        {
            Debug.LogWarning(
                "Measurement window must be between 1 second " +
                "and the sample interval.");
            return;
        }

        durationMinutes = minutes;
        sampleIntervalSeconds = interval;
        measurementWindowSeconds = window;

        settingsApplied = true;

        if (settingsPanel != null)
            settingsPanel.SetActive(false);

        Debug.Log(
            $"Settings saved. Duration: {durationMinutes} min, " +
            $"Interval: {sampleIntervalSeconds} sec, " +
            $"Window: {measurementWindowSeconds} sec");
    }

    // Closes the panel without applying unsaved edits.
    private void CloseSettings()
    {
        RefreshSettingsInputs();

        settingsApplied = true;

        if (settingsPanel != null)
            settingsPanel.SetActive(false);
    }

    private void RefreshSettingsInputs()
    {
        if (durationInput != null)
        {
            durationInput.SetTextWithoutNotify(
                durationMinutes.ToString(
                    "0.##", CultureInfo.InvariantCulture));
        }

        if (sampleIntervalInput != null)
        {
            sampleIntervalInput.SetTextWithoutNotify(
                sampleIntervalSeconds.ToString(
                    "0.##", CultureInfo.InvariantCulture));
        }

        if (measurementWindowInput != null)
        {
            measurementWindowInput.SetTextWithoutNotify(
                measurementWindowSeconds.ToString(
                    "0.##", CultureInfo.InvariantCulture));
        }
    }

    private bool TryReadPositiveFloat(
        TMP_InputField input,
        out float value)
    {
        value = 0f;

        return input != null &&
               float.TryParse(
                   input.text,
                   NumberStyles.Float,
                   CultureInfo.InvariantCulture,
                   out value) &&
               !float.IsNaN(value) &&
               !float.IsInfinity(value) &&
               value > 0f;
    }

    private void StartRecording()
    {
        if (recording)
            return;

        if (!settingsApplied)
        {
            Debug.LogWarning(
                "Save or cancel the settings panel before recording.");
            return;
        }

        elapsed = 0f;
        temperatureTimer = 0f;

        nextSampleTime = Mathf.Min(
            sampleIntervalSeconds,
            durationMinutes * 60f);

        fpsSamples.Clear();
        drawCallSamples.Clear();

        string timestamp = DateTime.Now.ToString(
            "yyyy-MM-dd_HH-mm-ss",
            CultureInfo.InvariantCulture);

        filePath = Path.Combine(
            Application.persistentDataPath,
            $"PerformanceTest_{timestamp}.csv");

        File.WriteAllText(
            filePath,
            "ElapsedMinutes,Timestamp,WindowStartSeconds,WindowEndSeconds," +
            "AverageFPS,MinimumFPS,AverageDrawCalls,MinimumDrawCalls," +
            "BatteryTempC,Triangles,MemoryMB\n");

        SaveBaseline();

        recording = true;

        Debug.Log(
            $"Performance test started: {filePath}");
    }

    private void SaveBaseline()
    {
        float currentFPS =
            1f / Mathf.Max(Time.unscaledDeltaTime, 0.0001f);

        long currentDrawCalls = GetDrawCalls();

        string line = string.Join(",",
            "0.0",
            DateTime.Now.ToString(
                "yyyy-MM-dd HH:mm:ss",
                CultureInfo.InvariantCulture),
            "0.0",
            "0.0",
            FormatCsvMetric(currentFPS),
            FormatCsvMetric(currentFPS),
            FormatCsvMetric(currentDrawCalls),
            FormatCsvMetric(currentDrawCalls),
            FormatCsvMetric(batteryTemperature),
            GetTriangles().ToString(CultureInfo.InvariantCulture),
            FormatCsvMetric(GetMemoryMB()));

        File.AppendAllText(filePath, line + "\n");

        Debug.Log("Baseline saved: " + line);
    }

    private void SaveSample()
    {
        float averageFPS = -1f;
        float minimumFPS = -1f;
        float averageDrawCalls = -1f;
        float minimumDrawCalls = -1f;

        if (fpsSamples.Count > 0)
        {
            float totalFPS = 0f;
            minimumFPS = float.MaxValue;

            foreach (float fps in fpsSamples)
            {
                totalFPS += fps;
                minimumFPS = Mathf.Min(minimumFPS, fps);
            }

            averageFPS = totalFPS / fpsSamples.Count;
        }

        if (drawCallSamples.Count > 0)
        {
            float totalCalls = 0f;
            minimumDrawCalls = float.MaxValue;

            foreach (float calls in drawCallSamples)
            {
                totalCalls += calls;
                minimumDrawCalls = Mathf.Min(
                    minimumDrawCalls, calls);
            }

            averageDrawCalls =
                totalCalls / drawCallSamples.Count;
        }

        float windowStart = Mathf.Max(
            0f, nextSampleTime - measurementWindowSeconds);

        string line = string.Join(",",
            (elapsed / 60f).ToString(
                "F1", CultureInfo.InvariantCulture),
            DateTime.Now.ToString(
                "yyyy-MM-dd HH:mm:ss",
                CultureInfo.InvariantCulture),
            windowStart.ToString(
                "F1", CultureInfo.InvariantCulture),
            nextSampleTime.ToString(
                "F1", CultureInfo.InvariantCulture),
            FormatCsvMetric(averageFPS),
            FormatCsvMetric(minimumFPS),
            FormatCsvMetric(averageDrawCalls),
            FormatCsvMetric(minimumDrawCalls),
            FormatCsvMetric(batteryTemperature),
            GetTriangles().ToString(CultureInfo.InvariantCulture),
            FormatCsvMetric(GetMemoryMB()));

        File.AppendAllText(filePath, line + "\n");

        Debug.Log("Performance sample saved: " + line);
    }

    private long GetDrawCalls()
    {
        return drawCalls.Valid ? drawCalls.LastValue : -1;
    }

    private long GetTriangles()
    {
        return triangles.Valid ? triangles.LastValue : -1;
    }

    private float GetMemoryMB()
    {
        return memory.Valid
            ? memory.LastValue / (1024f * 1024f)
            : -1f;
    }

    private float GetBatteryTemperature()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        try
        {
            using (AndroidJavaClass unityPlayer =
                   new AndroidJavaClass(
                       "com.unity3d.player.UnityPlayer"))
            using (AndroidJavaObject activity =
                   unityPlayer.GetStatic<AndroidJavaObject>(
                       "currentActivity"))
            using (AndroidJavaObject filter =
                   new AndroidJavaObject(
                       "android.content.IntentFilter",
                       "android.intent.action.BATTERY_CHANGED"))
            using (AndroidJavaObject intent =
                   activity.Call<AndroidJavaObject>(
                       "registerReceiver", null, filter))
            {
                int temperature = intent.Call<int>(
                    "getIntExtra", "temperature", -1);

                return temperature >= 0
                    ? temperature / 10f
                    : -1f;
            }
        }
        catch (Exception)
        {
            return -1f;
        }
#else
        return -1f;
#endif
    }

    private string FormatMetric(float value)
    {
        return value < 0f
            ? "N/A"
            : value.ToString(
                "F1", CultureInfo.InvariantCulture);
    }

    private string FormatCsvMetric(float value)
    {
        return value < 0f
            ? ""
            : value.ToString(
                "F1", CultureInfo.InvariantCulture);
    }

    private string FormatCsvMetric(long value)
    {
        return value < 0
            ? ""
            : value.ToString(CultureInfo.InvariantCulture);
    }

    private void OnDestroy()
    {
        if (settingsButton != null)
            settingsButton.onClick.RemoveListener(OpenSettings);

        if (saveButton != null)
            saveButton.onClick.RemoveListener(SaveSettings);

        if (cancelButton != null)
            cancelButton.onClick.RemoveListener(CloseSettings);

        if (recordButton != null)
            recordButton.onClick.RemoveListener(StartRecording);

        if (drawCalls.Valid)
            drawCalls.Dispose();

        if (triangles.Valid)
            triangles.Dispose();

        if (memory.Valid)
            memory.Dispose();
    }
}
