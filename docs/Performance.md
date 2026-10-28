# Performance Budget & Editor Baseline

## Performance Budget

| Metric             |                      Budget | Consequence if Exceeded                                     |
| ------------------ | --------------------------: | ----------------------------------------------------------- |
| **Framerate**      |               60 FPS stable | Motion discomfort and poor input response                   |
| **APK / AAB Size** |                Under 150 MB | Reduced install conversion on the Play Store                |
| **Polygon Count**  | Under 80,000 tris per frame | Potential GPU bottleneck on target Adreno and Mali chipsets |
| **Draw Calls**     |         Under 100 per frame | Increased CPU overhead and potential thermal throttling     |
| **Texture Size**   |         1024 × 1024 maximum | Increased memory pressure, particularly on 3 GB devices     |

## Individual Asset Budgets

| Asset                          | Proposed Budget | Revised Budget |
| ------------------------------ | --------------: | -------------: |
| **Wall / Floor Module**        |        200 tris |   **100 tris** |
| **Box**                        |        100 tris |   **200 tris** |
| **Product Prop**               |        300 tris |   **300 tris** |
| **Shelf**                      |        600 tris |   **200 tris** |
| **Terminal (Checkout)**        |      1,500 tris | **1,500 tris** |
| **Truck**                      |      3,000 tris | **3,000 tris** |
| **Rider (Delivery Character)** |      3,000 tris | **3,000 tris** |

## Editor Baseline — Empty Scene (Week 1)

The following measurements were recorded in the Unity Editor with an empty scene:

| Metric             | Current Editor Value |                          Target Budget |
| ------------------ | -------------------: | -------------------------------------: |
| **Framerate**      |           90–120 FPS |                          60 FPS stable |
| **APK / AAB Size** |            35–40 MB* |                           Under 150 MB |
| **Polygon Count**  |           ~1.7K tris |                Under 80,000 tris/frame |
| **Draw Calls**     |       2 (1 instance) |                        Under 100/frame |
| **Texture Memory** |              41.9 MB | 1024 × 1024 maximum texture resolution |

*The 35–40 MB figure is the current project/build estimate and should be confirmed using the final Android build rather than the empty-scene Editor baseline.

### Week 2 Risks

* **Combined Triangle Count:** Individual assets may remain within their revised budgets, but the total visible triangle count could become high when multiple wall/floor modules, boxes, product props, and shelves are combined in the warehouse.

* **Wall / Floor Module Count:** The revised budget is **100 tris per module**. Since multiple modules may be required to construct the warehouse, the total number of modules and their combined triangle count should be monitored.

* **Box Complexity:** The revised budget is **200 tris per box**, increased from 100 tris. The number of boxes visible at once should be monitored to ensure their combined geometry remains within the overall performance target.

* **Product Prop Design:** The budget remains **300 tris**. The final product designs may vary in shape and detail, so each design should be checked against the budget once finalized.

* **Shelf Design:** The revised budget is **600 tris** for the shelf unit. The initial estimate assumed a single shelf, whereas the final asset consists of multiple shelves. The final shelf design should be validated to ensure the complete shelf group meets the required visual and functional needs within the 600-tris geometry budget.

* **Large Asset Complexity:** The budgets remain **1,500 tris for the terminal**, **3,000 tris for the truck**, and **3,000 tris for the rider**. Their final designs should be validated against these limits once the models are available.


## Phone Performance Baseline (Week 1)

| Metric           |                Result |
| ---------------- | --------------------: |
| **Timestamp**    | 27 Sep 2026, 00:26:22 |
| **FPS**          |         **30.16 FPS** |
| **Draw Calls**   |                 **0** |
| **Triangles**    |             **1,971** |
| **Memory Usage** |         **149.76 MB** |


## Memory Test After Package Removal

| Time     | Memory Usage |
| -------- | -----------: |
| 11:18 AM |       923 MB |
| 11:38 AM |       904 MB |

**Result:** Memory usage decreased by **19 MB** after package removal after 20 mins.


## Phone Performance Main Scene with Stage (Week 2)

| Metric           |                Result |
| ---------------- | --------------------: |
| **Timestamp**    |    04 Oct 2026, 10:34 |
| **FPS**          |         **60.32 FPS** |
| **Draw Calls**   |               **N/A** |
| **Triangles**    |            **14,430** |
| **Memory Usage** |         **214.51 MB** |



## MGR_Pool Usage

//Get() retrieves an object from the pool using Dequeue().
GameObject box = MGR_Pool.Instance.Get(boxPrefab);

//Release() returns the object to the pool using Enqueue().
MGR_Pool.Instance.Release(box);


## IPoolable Usage

public void OnSpawn()
{
    // Reset/setup object when retrieved from pool. OnSpawn() is called when an object is retrieved.
}

public void OnDespawn()
{
    // Reset/cleanup object before returning to pool. OnDespawn() is called when an object is released.
}


## Active Orders Performance (Week 3)

| Metric           |                Result |
| ---------------- | --------------------: |
| **Timestamp**    | 10 Oct 2026, 14:23:00 |
| **FPS**          |         **29.81 FPS** |
| **Draw Calls**   |               **N/A** |
| **Triangles**    |            **12,062** |
| **Memory Usage** |         **273.81 MB** |

FPS went from 60.32 (Week 2) to 29.81 (Week 3). This a real drop with the full order queue, there was no capping at 30 FPS (Android's default when Application.targetFrameRate isn't set).


## Main Scene (Week 4)

| Metric           |                Result |
| ---------------- | --------------------: |
| **Timestamp**    |    19 Oct 2026, 19:32 |
| **FPS**          |         **40.75 FPS** |
| **Draw Calls**   |               **N/A** |
| **Triangles**    |            **11,054** |
| **Memory Usage** |         **276.89 MB** |

Avg FPS has increased by 10 and total triangles reduced by 1000 because of updated drink products, draw calls as per Editor are above 100, they are ~150.


# Phone Performance Test (Week 5)

**Test Duration:** 40 minutes  
**Test Date:** 22 October 2026
**Test Phone Model:** Motorola Moto G54 5G

| Elapsed Time (min) | Timestamp        | FPS  | Battery Temp (°C) | Draw Calls | Triangles | Memory (MB) |
|-------------------:|:-----------------|-----:|------------------:|-----------:|----------:|------------:|
| 0                  | 22-10-2026 00:59 | 60.2 | 33                | 0          | 12,616    | 272.2       |
| 10                 | 22-10-2026 01:09 | 30.1 | 35                | 0          | 12,816    | 282.8       |
| 20                 | 22-10-2026 01:19 | 30.1 | 36                | 0          | 12,794    | 281.8       |
| 30                 | 22-10-2026 01:29 | 30.1 | 36                | 0          | 12,794    | 282.6       |
| 40                 | 22-10-2026 01:39 | 30.1 | 36                | 0          | 12,918    | 281.8       |

### Test Summary

1. **FPS:** Dropped from 60.2 to 30.1 after 10 minutes, then remained stable.
2. **Battery Temperature:** Increased from 33°C to 36°C.
3. **Memory Usage:** Stabilized at approximately 282 MB.
4. **Triangle Count:** Remained within the range of 12,616–12,918.
5. **Draw Calls:** Starts off as 150, as orders are created and expired, draw calls reaches 155-158 in the Editor.


# Phone Performance Test after Optimization (Week 5)

# 1. Static Batching

Applied **Static Batching** to the following Stage 0 gameobjects:
- Ceiling
- Columns
- Corners
- East_Wall
- North_Wall
- Floor
- South_Wall
- West_Wall
**Stage 1:** Static Batching was already applied.

**Result:** Draw calls reduced to **105** from *158*.

## 2. Material Optimization

Applied single shared M_Palette_Shared.mat to the following prefabs:
- SM_SNK-01_PotatoChips
- SM_SNK-02_Pretzels   
- SM_SNK-03_ChocolateBar   
- SM_SNK-04_GummyBears   
- SM_SNK-05_TrailMix   
- SM_SNK-06_Popcorn   
- SM_BAK-01_SlicedBread   
- SM_BAK-02_Bagels   
- SM_BAK-03_Croissants   
- SM_BAK-04_Muffins   
- SM_BAK-05_ChocolateCake   
- SM_BAK-06_Cookies

**Result:** Draw calls still **105**.

## 3. Shadow Optimization

Applied the shadow settings for mobile performance optimization.

**Result:** Draw calls reduced from 105 to **56**.


## Performance Test Results on Motorola G54 5G Phone

| Elapsed Seconds | Timestamp | FPS | BatteryTempC | DrawCalls | Triangles | MemoryMB |
|---:|---|---:|---:|---:|---:|---:|
| 0 | 22-10-2026 20:15:00 | 60.3 | 34 | 0 | 6288 | 278.5 |
| 1 | 22-10-2026 20:15:01 | 60.3 | 34 | 0 | 6288 | 279.1 |
| 2 | 22-10-2026 20:15:02 | 60.3 | 34 | 0 | 6288 | 279.7 |
| 3 | 22-10-2026 20:15:03 | 60.3 | 34 | 0 | 6288 | 278.8 |
| 4 | 22-10-2026 20:15:04 | 60.3 | 34 | 0 | 6288 | 279.4 |
| 5 | 22-10-2026 20:15:05 | 60.3 | 34 | 0 | 6288 | 280.0 |
| 6 | 22-10-2026 20:15:06 | 60.3 | 34 | 0 | 6288 | 279.0 |
| 7 | 22-10-2026 20:15:07 | 60.3 | 34 | 0 | 6288 | 279.6 |
| 8 | 22-10-2026 20:15:08 | 60.3 | 34 | 0 | 6288 | 278.9 |
| 9 | 22-10-2026 20:15:09 | 60.3 | 34 | 0 | 6288 | 279.2 |
| 10 | 22-10-2026 20:15:10 | 60.3 | 34 | 0 | 6288 | 279.8 |

> Average FPS was around 60 and Draw Calls are under 60 as per Editor Profiler


# Performance Test for Full Loop without errors Motorola G54 5G Phone (Week 5)

| Elapsed Time (min) | Timestamp        | Window Start (s) | Window End (s) | Average FPS | Minimum FPS | Avg. Draw Calls | Min. Draw Calls | Battery Temp (°C) | Triangles | Memory (MB) |
|-------------------:|------------------|----------------:|--------------:|------------:|------------:|----------------:|----------------:|------------------:|----------:|------------:|
| 0  | 23-10-2026 14:54 | 0    | 0    | 60.3 | 60.3 | 0 | 0 | 32 | 7,090  | 272.2 |
| 5  | 23-10-2026 14:59 | 290  | 300  | 60.3 | 60.1 | 0 | 0 | 34 | 9,086  | 279.7 |
| 10 | 23-10-2026 15:04 | 590  | 600  | 60.3 | 60.0 | 0 | 0 | 34 | 8,520  | 280.8 |
| 15 | 23-10-2026 15:09 | 890  | 900  | 30.6 | 20.1 | 0 | 0 | 36 | 5,842  | 280.1 |
| 20 | 23-10-2026 15:14 | 1,190 | 1,200 | 49.7 | 30.1 | 0 | 0 | 36 | 6,172  | 280.8 |
| 25 | 23-10-2026 15:19 | 1,490 | 1,500 | 49.7 | 30.1 | 0 | 0 | 36 | 6,120  | 279.7 |
| 30 | 23-10-2026 15:24 | 1,790 | 1,800 | 49.7 | 30.0 | 0 | 0 | 36 | 6,132  | 280.5 |
| 35 | 23-10-2026 15:29 | 2,090 | 2,100 | 49.7 | 30.1 | 0 | 0 | 36 | 6,120  | 280.9 |
| 40 | 23-10-2026 15:34 | 2,390 | 2,400 | 49.7 | 30.1 | 0 | 0 | 36 | 6,206  | 280.4 |

## Key Observations

1. **Frame Rate:** Maintained approximately 60 FPS during the first 10 minutes. At 15 minutes, performance dropped significantly, with an average of 30.6 FPS and a minimum of 20.1 FPS. From 20 to 40 minutes, the average stabilized at 49.7 FPS.
2. **Battery Temperature:** Increased from 32°C to 36°C, then remained stable for the rest of the test.
3. **Memory Usage:** Increased from 272.2 MB to approximately 280 MB and remained relatively stable.
4. **Triangle Count:** Varied between 5,842 and 9,086 triangles, with no sustained upward trend.
5. **Draw Calls:** Reported as 0 throughout the test on Mobile phone. Editor reported increase in draw calls from 58 to 75 over 5 minutes.

## Performance Test: Shelf Stock Visuals and Updated Stages (Week 6)

**Device:** Motorola G54 5G  
**Test duration:** 3 minutes per run

| Run | Scene conditions | FPS | Draw calls |
|---|---|---:|---:|
| Before | Dock roll-up door closed, shelves empty, two riders idle on screen | ~60 | ~334 |
| After | Dock roll-up door open, shelf props visible, two riders idle on screen | ~60 | Up to ~331 |
