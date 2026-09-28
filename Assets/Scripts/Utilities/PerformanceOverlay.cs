using System;
using System.IO;
using System.Text;
using TMPro;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

public class PerformanceOverlay : MonoBehaviour
{
    private float fps;
    private float fpsTimer;
    private int frameCount;

    private ProfilerRecorder drawCalls;
    private ProfilerRecorder triangles;
    private ProfilerRecorder totalMemory;

    [SerializeField] private TMP_Text performanceText;
    [SerializeField] private Button recordButton;

    // Recording settings
    [SerializeField] private float recordingDuration = 600f;

    private bool recording;
    private float recordingTimer;
    private float csvTimer;

    private StreamWriter csvWriter;
    private string csvPath;

    private void Start()
    {
        // Profile markers for draw calls, triangles, and total memory usage
        drawCalls = ProfilerRecorder.StartNew(
            ProfilerCategory.Render,
            "Draw Calls Count"
        );

        triangles = ProfilerRecorder.StartNew(
            ProfilerCategory.Render,
            "Triangles Count"
        );

        totalMemory = ProfilerRecorder.StartNew(
            ProfilerCategory.Memory,
            "Total Used Memory"
        );

        recordButton.onClick.AddListener(RecordData);
    }

    private void Update()
    {
        // Average FPS over 1 second
        fpsTimer += Time.unscaledDeltaTime;
        frameCount++;

        if (fpsTimer >= 1.0f)
        {
            fps = frameCount / fpsTimer;

            fpsTimer = 0f;
            frameCount = 0;
        }

        long drawCallsCount = drawCalls.LastValue;
        long trianglesCount = triangles.LastValue;
        float memory = totalMemory.LastValue / (1024f * 1024f);

        // Display performance information
        performanceText.text =
            $"FPS: {fps:F2}\n" +
            $"Draw Calls: {drawCallsCount}\n" +
            $"Triangles: {trianglesCount:N0} tris\n" +
            $"Memory: {memory:F2} MB\n\n" +
            $"Recording: {(recording ? "ON" : "OFF")}";

        if (recording)
        {
            recordingTimer += Time.unscaledDeltaTime;
            csvTimer += Time.unscaledDeltaTime;

            // Write exactly one sample approximately every second
            if (csvTimer >= 1.0f)
            {
                csvWriter.WriteLine(
                    $"{DateTime.Now:yyyy-MM-dd HH:mm:ss}," +
                    $"{fps:F2}," +
                    $"{drawCallsCount}," +
                    $"{trianglesCount}," +
                    $"{memory:F2}"
                );

                csvWriter.Flush();

                csvTimer = 0f;
            }

            // Stop automatically after the selected duration
            if (recordingTimer >= recordingDuration)
            {
                StopRecording();
            }
        }
    }

    public void RecordData()
    {
        // Prevent starting another recording while already recording
        if (recording)
            return;

        string timestamp = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss");

        csvPath = Path.Combine(
            Application.persistentDataPath,
            $"performance_{timestamp}.csv"
        );

        csvWriter = new StreamWriter(
            csvPath,
            false,
            Encoding.UTF8
        );

        csvWriter.WriteLine(
            "Timestamp,FPS,DrawCalls,Triangles,MemoryMB"
        );

        recording = true;
        recordingTimer = 0f;
        csvTimer = 0f;

        Debug.Log(
            $"Performance recording started for {recordingDuration} seconds."
        );
    }

    private void StopRecording()
    {
        recording = false;

        if (csvWriter != null)
        {
            csvWriter.Flush();
            csvWriter.Close();
            csvWriter.Dispose();
            csvWriter = null;
        }

        Debug.Log(
            $"Performance recording finished. CSV saved to: {csvPath}"
        );
    }

    private void OnDestroy()
    {
        // Make sure the CSV is closed if the object is destroyed
        if (csvWriter != null)
        {
            csvWriter.Flush();
            csvWriter.Close();
            csvWriter.Dispose();
            csvWriter = null;
        }

        drawCalls.Dispose();
        triangles.Dispose();
        totalMemory.Dispose();
    }
}