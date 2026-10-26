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
    [Header("UI")]
    [SerializeField] private TMP_Text performanceText;
    [SerializeField] private Button recordButton;

    [Header("Long Test Settings")]
    [SerializeField] private float durationSeconds = 2400f;          // 40 minutes
    [SerializeField] private float sampleIntervalSeconds = 300f;     // 5 minutes
    [SerializeField] private float measurementWindowSeconds = 10f;  // 10 seconds

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

        if (recordButton != null)
            recordButton.onClick.AddListener(StartRecording);
    }

    private void Update()
    {
        float deltaTime = Time.unscaledDeltaTime;
        float fps = 1f / Mathf.Max(deltaTime, 0.0001f);

        // Refresh battery temperature every 5 seconds.
        temperatureTimer += deltaTime;

        if (temperatureTimer >= 5f)
        {
            temperatureTimer = 0f;
            batteryTemperature = GetBatteryTemperature();
        }

        // Update the on-screen overlay.
        if (performanceText != null)
        {
            performanceText.text =
                $"FPS: {fps:F1}\n" +
                $"Battery Temp: {FormatMetric(batteryTemperature)}" +
                (batteryTemperature >= 0f ? " °C" : "") + "\n" +
                $"Draw Calls: {GetDrawCalls()}\n" +
                $"Triangles: {GetTriangles()}\n" +
                $"Memory: {FormatMetric(GetMemoryMB())} MB";
        }

        if (!recording)
            return;

        elapsed = Mathf.Min(elapsed + deltaTime, durationSeconds);

        // Collect only during the 10 seconds before the next sample.
        float windowStart = nextSampleTime - measurementWindowSeconds;

        if (elapsed >= windowStart && elapsed < nextSampleTime)
        {
            fpsSamples.Add(fps);

            long currentDrawCalls = GetDrawCalls();

            if (currentDrawCalls >= 0)
                drawCallSamples.Add(currentDrawCalls);
        }

        // Save when the scheduled sample time is reached.
        if (elapsed >= nextSampleTime)
        {
            SaveSample();

            if (elapsed >= durationSeconds)
            {
                recording = false;
                Debug.Log($"Performance test completed: {filePath}");
                return;
            }

            nextSampleTime = Mathf.Min(
                nextSampleTime + sampleIntervalSeconds,
                durationSeconds);

            fpsSamples.Clear();
            drawCallSamples.Clear();
        }
    }

    private void StartRecording()
    {
        if (recording)
            return;

        durationSeconds = Mathf.Max(1f, durationSeconds);
        sampleIntervalSeconds = Mathf.Max(1f, sampleIntervalSeconds);
        measurementWindowSeconds = Mathf.Clamp(
            measurementWindowSeconds, 1f, sampleIntervalSeconds);

        elapsed = 0f;
        temperatureTimer = 0f;
        nextSampleTime = sampleIntervalSeconds;

        fpsSamples.Clear();
        drawCallSamples.Clear();

        string timestamp = DateTime.Now.ToString(
            "yyyy-MM-dd_HH-mm-ss", CultureInfo.InvariantCulture);

        filePath = Path.Combine(
            Application.persistentDataPath,
            $"PerformanceTest_{timestamp}.csv");

        File.WriteAllText(
            filePath,
            "ElapsedMinutes,Timestamp,WindowStartSeconds,WindowEndSeconds," +
            "AverageFPS,MinimumFPS,AverageDrawCalls,MinimumDrawCalls," +
            "BatteryTempC,Triangles,MemoryMB\n");

        // Write baseline immediately at 0 minutes.
        SaveBaseline();

        recording = true;

        Debug.Log($"Performance test started: {filePath}");
    }

    private void SaveBaseline()
    {
        float currentFPS =
            1f / Mathf.Max(Time.unscaledDeltaTime, 0.0001f);

        string line = string.Join(",",
            "0.0",
            DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"),
            "0.0",
            "0.0",
            FormatCsvMetric(currentFPS),
            FormatCsvMetric(currentFPS),
            FormatCsvMetric(GetDrawCalls()),
            FormatCsvMetric(GetDrawCalls()),
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
                minimumDrawCalls = Mathf.Min(minimumDrawCalls, calls);
            }

            averageDrawCalls = totalCalls / drawCallSamples.Count;
        }

        float windowStart = Mathf.Max(
            0f, nextSampleTime - measurementWindowSeconds);

        string line = string.Join(",",
            (elapsed / 60f).ToString("F1", CultureInfo.InvariantCulture),
            DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"),
            windowStart.ToString("F1", CultureInfo.InvariantCulture),
            nextSampleTime.ToString("F1", CultureInfo.InvariantCulture),
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
                   new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
            using (AndroidJavaObject activity =
                   unityPlayer.GetStatic<AndroidJavaObject>("currentActivity"))
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
            : value.ToString("F1", CultureInfo.InvariantCulture);
    }

    private string FormatCsvMetric(float value)
    {
        return value < 0f
            ? ""
            : value.ToString("F1", CultureInfo.InvariantCulture);
    }

    private void OnDestroy()
    {
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
