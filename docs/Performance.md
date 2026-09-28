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

## Editor Baseline — Empty Scene

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

* **Shelf Design:** The revised budget is **200 tris**, reduced from 600 tris. The final shelf design should be validated to ensure it meets the required visual and functional needs within the reduced geometry budget.

* **Large Asset Complexity:** The budgets remain **1,500 tris for the terminal**, **3,000 tris for the truck**, and **3,000 tris for the rider**. Their final designs should be validated against these limits once the models are available.
