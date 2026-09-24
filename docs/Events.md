# Game Event Contracts

This document contains the cross-system game events defined in **GDD §48
(Event Contracts)**.

These events provide communication between managers, UI systems, and
gameplay systems without requiring direct access to another manager's
internal state.

------------------------------------------------------------------------

## 1. Event Contract Table

  -------------------------------------------------------------------------------------------------------
  Event                  Emitted By        Payload      Expected Listeners    Status          Target Week
  ---------------------- ----------------- ------------ --------------------- --------------- -----------
  `OnInventoryChanged`   `MGR_Inventory`   ProductID,   `MGR_UI`, gameplay    Implemented\*   Current
                                           new quantity systems requiring                     
                                                        inventory updates                     

  `OnShelfUpdated`       `MGR_Inventory`   Shelf ID,    `MGR_UI`, gameplay    Implemented     Current
                                           category,    systems requiring                     
                                           quantity     shelf updates                         

  `OnOrderCreated`       `MGR_Order`       OrderData    `MGR_UI`, systems     Planned         TBD
                                                        requiring order                       
                                                        information                           

  `OnOrderFulfilled`     `MGR_Order`       OrderData,   `MGR_UI`,             Planned         TBD
                                           cash earned, economy/progression                   
                                           XP earned    systems                               

  `OnOrderExpired`       `MGR_Order`       OrderData    `MGR_UI`, systems     Planned         TBD
                                                        requiring order                       
                                                        expiry information                    

  `OnCashChanged`        `MGR_Game`        New balance, `MGR_UI`, systems     Planned         TBD
                                           delta        requiring cash                        
                                                        information                           

  `OnXPChanged`          `MGR_Game`        New XP,      `MGR_UI`, systems     Planned         TBD
                                           current      requiring XP                          
                                           level        information                           

  `OnLevelUp`            `MGR_Game`        New level    `MGR_UI`, progression Planned         TBD
                                                        systems                               

  `OnRatingChanged`      `MGR_Game`        New rating,  `MGR_UI`, systems     Planned         TBD
                                           previous     requiring rating                      
                                           rating       information                           

  `OnHiringLocked`       `MGR_Game`        Locked state `MGR_UI`,             Planned         TBD
                                                        hiring-related                        
                                                        systems                               

  `OnStageChanged`       `MGR_Game`        New          `MGR_UI`,             Planned         TBD
                                           warehouse    warehouse/gameplay                    
                                           stage        systems                               

  `OnRiderDispatched`    `MGR_Delivery`    Rider        `MGR_UI`,             Planned         TBD
                                           reference,   rider/delivery                        
                                           target shelf gameplay systems                      

  `OnRiderReturned`      `MGR_Delivery`    Rider        `MGR_UI`,             Planned         TBD
                                           reference    rider/delivery                        
                                                        gameplay systems                      

  `OnTruckArrived`       `MGR_Truck`       Box count    `MGR_UI`,             Planned         TBD
                                                        truck/warehouse                       
                                                        gameplay systems                      

  `OnTruckDeparted`      `MGR_Truck`       Unclaimed    `MGR_UI`,             Planned         TBD
                                           box count    truck/warehouse                       
                                                        gameplay systems                      

  `OnDayTick`            `MGR_Game`        Day number,  `MGR_UI`,             Planned         TBD
                                           total salary time/economy systems                  
                                           deducted                                           
  -------------------------------------------------------------------------------------------------------

**Note:** GDD §48 defines the event names, emitting managers, and
payloads. It does not define individual development weeks or assign
specific listeners to every event. Therefore, target weeks are marked
`TBD` where no team schedule has been assigned.

------------------------------------------------------------------------

## 2. Currently Implemented Events

### `OnInventoryChanged`

**Manager:** `MGR_Inventory`

**GDD Payload:** - ProductID - New quantity

**Current Status:** Implemented

The current implementation raises the event when product stock is added
or removed.

**Current code payload:**

``` text
DATA_ProductSO, int
```

**GDD payload:**

``` text
ProductID, new quantity
```

This is a payload difference between the current implementation and the
GDD contract. The difference should be confirmed with the UI/gameplay
owners before changing the implementation.

------------------------------------------------------------------------

### `OnShelfUpdated`

**Manager:** `MGR_Inventory`

**GDD Payload:** - Shelf ID - Category - Quantity

**Current Status:** Implemented

The event is raised when shelf contents are updated.

------------------------------------------------------------------------

## 3. Planned Events

The following events are defined by GDD §48 but are not currently
implemented in the project.

### Order Events

``` text
OnOrderCreated
OnOrderFulfilled
OnOrderExpired
```

**Manager:** `MGR_Order`

  Event                Payload
  -------------------- -----------------------------------
  `OnOrderCreated`     OrderData
  `OnOrderFulfilled`   OrderData, cash earned, XP earned
  `OnOrderExpired`     OrderData

------------------------------------------------------------------------

### Economy and Progression Events

``` text
OnCashChanged
OnXPChanged
OnLevelUp
OnRatingChanged
OnHiringLocked
OnStageChanged
```

**Manager:** `MGR_Game`

  Event               Payload
  ------------------- -----------------------------
  `OnCashChanged`     New balance, delta
  `OnXPChanged`       New XP, current level
  `OnLevelUp`         New level
  `OnRatingChanged`   New rating, previous rating
  `OnHiringLocked`    Locked state
  `OnStageChanged`    New warehouse stage

------------------------------------------------------------------------

### Delivery Events

``` text
OnRiderDispatched
OnRiderReturned
```

**Manager:** `MGR_Delivery`

  Event                 Payload
  --------------------- -------------------------------
  `OnRiderDispatched`   Rider reference, target shelf
  `OnRiderReturned`     Rider reference

------------------------------------------------------------------------

### Truck Events

``` text
OnTruckArrived
OnTruckDeparted
```

**Manager:** `MGR_Truck`

  Event               Payload
  ------------------- ---------------------
  `OnTruckArrived`    Box count
  `OnTruckDeparted`   Unclaimed box count

------------------------------------------------------------------------

### Time Event

``` text
OnDayTick
```

**Manager:** `MGR_Game`

  Event         Payload
  ------------- -----------------------------------
  `OnDayTick`   Day number, total salary deducted

------------------------------------------------------------------------

## 4. Listener Responsibilities

The GDD specifies that `MGR_UI` listens to manager events and updates
the HUD. `MGR_UI` contains no gameplay logic.

Gameplay systems may also subscribe to events when they require
information provided by an event.

The exact gameplay/UI listener for each event should be confirmed when
that system is implemented.

### UI

`MGR_UI` is the primary UI event consumer.

Potential UI uses include:

-   Inventory and shelf updates
-   Order creation and expiry
-   Cash changes
-   XP and level changes
-   Rating changes
-   Hiring state
-   Warehouse stage changes
-   Rider status
-   Truck status
-   Day progression

### Gameplay

Gameplay systems may subscribe to the relevant events when they need to
react to changes from the manager that owns the event.

Gameplay systems should use the event contract instead of directly
accessing another manager's internal state when the required information
is available through an event.

------------------------------------------------------------------------

## 5. Subscription Policy

All event subscriptions must follow the subscription pattern defined in
GDD §48.1.

Example:

``` csharp
private void OnEnable()
{
    MGR_Inventory.OnInventoryChanged += HandleInventoryChanged;
}

private void OnDisable()
{
    MGR_Inventory.OnInventoryChanged -= HandleInventoryChanged;
}
```

### Rules

1.  Subscribe in `OnEnable()`.
2.  Unsubscribe in `OnDisable()`.
3.  Do not subscribe in `Awake()`.
4.  Do not subscribe in `Start()`.
5.  Do not use anonymous lambdas for event subscriptions.

This is particularly important for pooled objects because pooled objects
may be disabled and reused instead of being destroyed.

------------------------------------------------------------------------

## 6. Complete GDD §48 Event List

### `MGR_Inventory`

  Event                  Payload
  ---------------------- ------------------------------
  `OnInventoryChanged`   ProductID, new quantity
  `OnShelfUpdated`       Shelf ID, category, quantity

### `MGR_Order`

  Event                Payload
  -------------------- -----------------------------------
  `OnOrderCreated`     OrderData
  `OnOrderFulfilled`   OrderData, cash earned, XP earned
  `OnOrderExpired`     OrderData

### `MGR_Game`

  Event               Payload
  ------------------- -----------------------------------
  `OnCashChanged`     New balance, delta
  `OnXPChanged`       New XP, current level
  `OnLevelUp`         New level
  `OnRatingChanged`   New rating, previous rating
  `OnHiringLocked`    Locked state
  `OnStageChanged`    New warehouse stage
  `OnDayTick`         Day number, total salary deducted

### `MGR_Delivery`

  Event                 Payload
  --------------------- -------------------------------
  `OnRiderDispatched`   Rider reference, target shelf
  `OnRiderReturned`     Rider reference

### `MGR_Truck`

  Event               Payload
  ------------------- ---------------------
  `OnTruckArrived`    Box count
  `OnTruckDeparted`   Unclaimed box count

------------------------------------------------------------------------

## 7. Implementation Status Summary

### Implemented

-   `OnInventoryChanged`
-   `OnShelfUpdated`

### Planned

-   `OnOrderCreated`
-   `OnOrderFulfilled`
-   `OnOrderExpired`
-   `OnCashChanged`
-   `OnXPChanged`
-   `OnLevelUp`
-   `OnRatingChanged`
-   `OnHiringLocked`
-   `OnStageChanged`
-   `OnRiderDispatched`
-   `OnRiderReturned`
-   `OnTruckArrived`
-   `OnTruckDeparted`
-   `OnDayTick`

**Total GDD §48 events: 16**

**Currently implemented: 2**

**Planned: 14**

------------------------------------------------------------------------

## 8. Current Inventory Event Note

The GDD defines the `OnInventoryChanged` payload as:

``` text
ProductID, new quantity
```

The current implementation uses:

``` text
DATA_ProductSO, int
```

The current implementation is working with the inventory HUD test, but
the payload difference should be confirmed with the UI and gameplay
owners before making a contract change.

No change is made to the current implementation by this document.

------------------------------------------------------------------------

## 9. Team Confirmation

Will and Arnab should confirm the following before the event contracts
are considered final:

-   Event names are suitable for their UI/gameplay subscriptions.
-   Payloads contain the information required by their systems.
-   Expected listener responsibilities are correct.
-   The `OnInventoryChanged` payload difference between the GDD and
    current implementation is acceptable or should be changed.

Any required event-name or payload change should be agreed with the
relevant system owners before implementation.

------------------------------------------------------------------------

## Source

**Delivery Empire Simulator --- Game Design Document**

-   §48 --- Event Contracts
-   §48.1 --- Subscription Policy

This document records the event contracts defined by the GDD and the
current project implementation status. Development weeks and specific
listener ownership are marked as `TBD` where they are not specified by
the GDD.