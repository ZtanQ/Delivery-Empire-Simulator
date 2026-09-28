# Mobile Performance Overlay — Setup & Usage Guide

## Purpose

The `MobilePerformanceOverlay` displays key runtime performance metrics directly in the Unity scene:

* **FPS** — averaged over approximately 1 second
* **Draw Calls** — value from Unity's selected Profiler Recorder counter
* **Triangles** — current triangle count from the Profiler Recorder
* **Memory** — total used memory in MB
* **CSV Recording** — continuously records performance data for a configurable duration

---

# 1. Scene Setup Summary

The hierarchy can look like:

```text
Scene
│
├── Main Camera
├── Player
├── Environment
├── Gameplay
│
├── Canvas
│   ├── PerformanceText
│   └── RecordButton
│       └── Text (TMP)
│
├── EventSystem
│
└── MobilePerformanceOverlay
```

The `MobilePerformanceOverlay` Inspector should contain:

```text
Mobile Performance Overlay
────────────────────────────────
Performance Text      → PerformanceText
Record Button         → RecordButton
Recording Duration    → 600
```

The **Recording Duration** is measured in seconds.

For example:

```text
30 = 30-second recording
60 = 60-second recording
```

---

# 2. Configure the Record Button

Select `RecordButton` in the Hierarchy.

In the Button component, under **On Click()**:

1. Click **+**
2. Drag the `MobilePerformanceOverlay` GameObject into the object field.
3. Select:

```text
MobilePerformanceOverlay
    → RecordData()
```

The button should therefore look like:

```text
RecordButton
└── On Click()
      └── MobilePerformanceOverlay
              └── RecordData()
```

When the button is pressed, the performance recording starts.

---

# 3. Test on the Android Device

For mobile performance testing, use the actual target Android device rather than relying only on the Unity Editor.

Build and run the scene on the device.

Check that:

* The overlay is visible.
* FPS is updating.
* Draw Calls are updating.
* Triangles are updating.
* Memory is updating.
* The Record button responds to touch.
* The recording status changes to `ON` when recording starts.

Ideally, use a **Development Build** when diagnosing performance.

---

# 4. Performance Overlay

While the game is running, the overlay displays information similar to:

```text
FPS: 59.82
Draw Calls: 42
Triangles: 76,432 tris
Memory: 312.50 MB

Recording: OFF
```

When recording is active:

```text
FPS: 59.82
Draw Calls: 42
Triangles: 76,432 tris
Memory: 312.50 MB

Recording: ON
```

The FPS displayed on the overlay is calculated using approximately a **1-second average** to reduce fluctuations caused by individual frames.

---

# 5. Recording Performance Data

Press:

```text
RECORD
```

The script starts a continuous performance recording.

The recording duration is controlled by:

```text
Recording Duration
```

in the Inspector.

The default duration is:

```text
30 seconds
```

During this period, the script continuously writes performance samples to the CSV file.

The recording automatically stops when the selected duration has elapsed.

---

# 6. CSV File Location

The CSV file is saved to:

```text
Application.persistentDataPath 
 
```

The filename has this format:

```text
performance_YYYY-MM-DD_HH-mm-ss.csv
```

For example:

```text
performance_2026-09-26_17-30-15.csv
```

The exact physical location of `Application.persistentDataPath` is 

This PC\{your phone}\Internal shared storage\Android\data\com.RuralGames.DeliverEmpireSimulator\files\performance_YYYY-MM-DD_HH-mm-ss.csv

This .csv file can only be accessed by connecting it to computer

```text
Performance recording finished.
CSV saved to: [path]
```

---

# 7. CSV Data

Unlike the previous snapshot version, the current implementation records **continuously while recording is active**.

The CSV begins with:

```text
Timestamp,FPS,DrawCalls,Triangles,MemoryMB
```

It then contains multiple performance samples:

```text
Timestamp,FPS,DrawCalls,Triangles,MemoryMB
2026-09-26 17:30:01.123,59.82,42,76432,312.50
2026-09-26 17:30:01.140,59.82,42,76432,312.51
2026-09-26 17:30:01.157,59.82,43,76432,312.51
...
2026-09-26 17:30:30.982,58.91,47,81234,318.20
```

Because data is written during every `Update()` while recording, the number of rows will depend on the frame rate and recording duration.

For example, a 30-second recording at approximately 60 FPS can produce around **1,800 samples**.

---

# 8. Starting a Recording

The recording workflow is:

```text
Press RECORD
      ↓
CSV file created
      ↓
Recording = ON
      ↓
Performance samples written continuously
      ↓
Recording duration reached
      ↓
Recording = OFF
      ↓
CSV file closed and saved
```

The button does not create a new snapshot each time.

It starts a timed recording session.

---

# 9. Preventing Multiple Recordings

If the recording is already running, pressing `RECORD` again does not start another recording.

The script checks:

```csharp
if (recording)
    return;
```

This prevents multiple recording sessions from attempting to write to the same `StreamWriter`.

---

# 10. Recommended Test Procedure

To compare different scenes or asset configurations, use the same test procedure each time.

### Step 1 — Load the scene

Start from the same scene and configuration.

### Step 2 — Allow the scene to stabilize

Wait a few seconds after loading before starting the benchmark.

This avoids including loading and initialization performance in the normal gameplay measurement.

### Step 3 — Move through the same area

Use the same:

* Camera position
* Player position
* Gameplay sequence
* Quality settings
* Resolution
* Device

where possible.

Consistency makes comparisons between tests more meaningful.

### Step 4 — Start the recording

Press:

```text
RECORD
```

The overlay should change to:

```text
Recording: ON
```

### Step 5 — Perform the test

Continue through the predefined test area while the recording is active.

Do not change the test conditions during the recording.

### Step 6 — Wait for the recording to finish

After the configured duration, the overlay changes back to:

```text
Recording: OFF
```

The CSV is automatically closed and saved.

### Step 7 — Repeat

Run the same test multiple times if you need more reliable results.

---

# 11. Performance Metrics

The CSV records the following metrics:

| Metric         | Description                                                    |
| -------------- | -------------------------------------------------------------- |
| **Timestamp**  | Time when the sample was recorded                              |
| **FPS**        | Current 1-second averaged FPS value                            |
| **Draw Calls** | Value reported by the selected Unity Profiler Recorder counter |
| **Triangles**  | Current triangle count reported by the Profiler Recorder       |
| **MemoryMB**   | Total used memory converted to MB                              |

---

# 12. Important Draw Call Consideration

The script currently uses:

```csharp
drawCalls = ProfilerRecorder.StartNew(
    ProfilerCategory.Render,
    "Draw Calls Count"
);
```

Before using the draw-call value for an official performance report, verify that this counter corresponds to the intended rendering metric in the target Unity version and platform.

Unity can expose multiple counters with similar names.

For example:

```text
Draw Calls Count | UI Toolkit
```

is associated specifically with UI Toolkit and should not automatically be interpreted as the total draw calls for the entire game.

The draw-call counter should therefore be validated using the **Unity Profiler/Frame Debugger** before using it as the project's official draw-call measurement.

---

# 13. Cleanup

The script uses `OnDestroy()` to dispose of the `ProfilerRecorder` objects:

```csharp
private void OnDestroy()
{
    drawCalls.Dispose();
    triangles.Dispose();
    totalMemory.Dispose();
}
```

This releases the profiler resources when the `MobilePerformanceOverlay` GameObject is destroyed.

The script also closes the CSV writer if the overlay is destroyed while a recording is in progress.

---

# 14. Performance Testing Checklist

Before submitting performance numbers, verify:

* [ ] Testing on the target Android device
* [ ] Correct scene loaded
* [ ] Scene has finished loading
* [ ] Scene has been allowed to stabilize
* [ ] Same test area used for comparisons
* [ ] Same quality settings
* [ ] Same resolution/device configuration
* [ ] FPS is updating
* [ ] Draw-call counter has been verified
* [ ] Triangle counter has been verified
* [ ] Memory counter has been verified
* [ ] Record button starts the recording
* [ ] `Recording: ON` appears during recording
* [ ] Recording automatically stops after the configured duration
* [ ] `Recording: OFF` appears after recording
* [ ] CSV is successfully created
* [ ] CSV contains multiple performance samples
* [ ] Recorded values can be opened and analyzed

---

# 15. Recommended Workflow

```text
Build
  ↓
Install on Android device
  ↓
Load test scene
  ↓
Wait for scene to stabilize
  ↓
Move to predefined test area
  ↓
Press RECORD
  ↓
Performance recording starts
  ↓
Run predefined test for 30 seconds
  ↓
Recording automatically stops
  ↓
CSV is saved
  ↓
Repeat test if required
  ↓
Analyze CSV data
  ↓
Compare against performance budget
```
