using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Profiling;
using UnityEngine.UI;
using Unity.Profiling;
using TMPro;

public class PerformanceOverlay : MonoBehaviour
{
    [SerializeField] private TMP_Text performanceText;
    [SerializeField] private Button recordButton;

    private const float Duration = 10f;       // 10s
    private const float SampleInterval = 1f; // 1s

    private ProfilerRecorder drawCalls;
    private ProfilerRecorder triangles;
    private ProfilerRecorder memory;

    private float elapsed;
    private float sampleTimer;
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

        if (recordButton != null)
            recordButton.onClick.AddListener(StartRecording);
    }

    private void Update()
    {
        float fps = 1f / Mathf.Max(Time.unscaledDeltaTime, 0.0001f);

        if (performanceText != null)
        {
            performanceText.text =
                $"FPS: {fps:F1}\n" +
                $"Battery Temp: {GetBatteryTemperature():F1} °C\n" +
                $"Draw Calls: {drawCalls.LastValue}\n" +
                $"Triangles: {triangles.LastValue}\n" +
                $"Memory: {memory.LastValue / (1024f * 1024f):F1} MB";
        }

        if (!recording)
            return;

        float previousElapsed = elapsed;
        elapsed += Time.unscaledDeltaTime;
        sampleTimer += Time.unscaledDeltaTime;

        if (elapsed >= Duration)
        {
            elapsed = Duration;
            SaveSample(fps);

            recording = false;
            Debug.Log($"{Duration}-seconds performance test completed: " + filePath);
            return;
        }

        if (sampleTimer >= SampleInterval)
        {
            sampleTimer -= SampleInterval;
            SaveSample(fps);
        }
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
                   new AndroidJavaObject("android.content.IntentFilter",
                       "android.intent.action.BATTERY_CHANGED"))
            using (AndroidJavaObject intent =
                   activity.Call<AndroidJavaObject>("registerReceiver",
                       null, filter))
            {
                // Android reports battery temperature in tenths of a degree Celsius.
                int temperature = intent.Call<int>("getIntExtra",
                    "temperature", -1);

                return temperature >= 0 ? temperature / 10f : -1f;
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

    private void StartRecording()
    {
        if (recording)
            return;

        elapsed = 0f;
        sampleTimer = 0f;

        filePath = Path.Combine(
            Application.persistentDataPath,
            "PerformanceTest.csv");

        File.WriteAllText(filePath,
            "ElapsedSeconds,Timestamp,FPS,BatteryTempC,DrawCalls,Triangles,MemoryMB\n");

        recording = true;

        // Record the baseline at minute 0.
        SaveSample(1f / Mathf.Max(Time.unscaledDeltaTime, 0.0001f));

        Debug.Log("Performance test started. CSV: " + filePath);
    }

    private void SaveSample(float fps)
    {
        float temperature = GetBatteryTemperature();
        float memoryMB = memory.LastValue / (1024f * 1024f);

        string line =
            $"{elapsed / 60f:F1}," +
            $"{DateTime.Now:yyyy-MM-dd HH:mm:ss}," +
            $"{fps:F1}," +
            $"{temperature:F1}," +
            $"{drawCalls.LastValue}," +
            $"{triangles.LastValue}," +
            $"{memoryMB:F1}\n";

        File.AppendAllText(filePath, line);
        Debug.Log("Performance sample saved: " + line);
    }

    private void OnDestroy()
    {
        if (recordButton != null)
            recordButton.onClick.RemoveListener(StartRecording);

        drawCalls.Dispose();
        triangles.Dispose();
        memory.Dispose();
    }
}