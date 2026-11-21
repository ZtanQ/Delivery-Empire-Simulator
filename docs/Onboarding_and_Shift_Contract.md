# First minutes, Buy tab and shift contract (20 Nov 2026)

Branch `lead/onboarding-ux` (Gabriel). Goal: Build B0 (Mon 23 Nov) is a game a new
player understands without help and plays for a reason. Rules and numbers live in
GDD v3 (Release block, R3 and R8); this page explains the code and who continues it.

## What we want (release criteria)

- **R3** First delivery in under 60 s for someone who never played.
- **R5** Readable: the player sees what each order needs and what is on the shelves.
- **R6** No stuck rider, no stale order card.
- **R8** Start, goal and end: the 5-shift trial contract.

## What we saw (Gabriel's editor playtests, 20 Nov)

1. The player starts in an empty room and does not know what to do or why.
2. The terminal shows only text; nothing tells how many of each product we have.
3. A rider sometimes appears from nowhere and stands still.
4. Orders vanish (terminal open) or a rider takes them before the player can read them.
5. The truck message after buying is red and looks like an error.
6. The game has no purpose: buy and place boxes forever.

## What exists now

### First minutes (1120-LEAD, 1120-LEAD-3)
- `UI_FirstTimeHints.cs`: hints teach by doing. Saved steps:
  0 pick up the starter box, 1 put it on the shelf of its colour,
  2 a rider takes it (a customer ordered it), 3 buy stock at the computer.
  A 6 s controls hint comes first. The buy hint names the missing product.
- A free truck brings one starter box (`CTRL_TruckDelivery.DeliverFreeBoxes`,
  3 units of a product with no stock). If the box is lost, another comes.
- `MGR_Order.cs` (first-time player only): no order until the starter box is on a
  shelf (safety 90 s); then an order for that product after 2 s; the second order
  asks for a product with no stock. Values: `firstOrderDelayNewPlayer`,
  `firstOrderMaxWait`. Written in GDD v3 R8.
- `UI_GuideMarker.cs`: an atlas v3 action icon floats over the next target
  (starter box, the right shelf, the computer). Created at runtime, no scene change.

### Order cards (1120-LEAD-2)
- `OrderItemUI.cs`: an item missing on the shelves is faded and red.
- `OrderCardUI.cs`: card tint by state: red = needs stock, green = ready,
  blue + "Rider out" = a rider took it; "+$N" or "Expired" for 1.5 s at the end.
- `MGR_Delivery.cs`: an order waits at least 4 s on screen before a rider takes it
  (`minOrderVisibleSeconds`).

### Bugs (1120-LEAD-4, Team log row 336)
- `MGR_Delivery.GetOrActivateRider`: no new rider from the pool beyond the hired count.
- `OrderQueueUI.cs`: cards are rebuilt from the real orders when the HUD turns on
  again (it is off while the terminal is open).

### Terminal Buy tab (1123-UI-3)
- `TerminalStockInfoUI.cs` (built at runtime, `Terminal_Canvas.prefab` not touched):
  product icon, category colour strip, "On shelves: N" (red with "need N" when an
  order is short), a strip "Orders need: Cola x2, Bread x1" with **Add missing**,
  "Riders delivering: N orders", "Boxes N/6". The purchase button says **Buy**.
- `TerminalBuyUI.cs`: the dock-busy message is light blue
  ("Your truck is at the dock: unload N boxes first").

### Shift contract (1121-GP Arnab, pair part 1121-LEAD Gabriel)
- `MGR_Shift.cs`, created at runtime when Main_level loads. 5 shifts of 300 s with
  the GDD R8 targets; the shift ends 2 s after the target is met ("Goal reached!") or
  when the time runs out; stars (1 met, 2 also <= 1 expired, 3 also rating 4.0+); fail
  at the end or at once at rating 1.0; Retry; one emergency box per shift when the
  player has no cash and no stock; Free play after shift 5; saves at shift start;
  the game pauses on every card.
- Events for the final screens: `OnShiftBriefing`, `OnShiftStarted`,
  `OnShiftProgress`, `OnShiftEnded(ShiftResult)`, `OnContractWon`, `OnEmergencyBox`.
  Button calls: `StartShift`, `NextShift`, `RetryShift`, `StartFreePlay`, `SaveAndExit`.
- `DATA_ShiftContractSO.cs`: all contract values. **Tools/DES/Shift/Create shift
  contract asset** makes `Resources/ShiftContract.asset` to tune them in the Inspector.
- `UI_ShiftPlaceholder.cs`: PLACEHOLDER screens (goal widget, briefing with the intro
  text on a new game, summary with stars, contract won, emergency toast).

## Placeholders to replace (owners)

| What | Today | Final | Owner |
| --- | --- | --- | --- |
| Shift screens | `UI_ShiftPlaceholder` built in code | Final screens on the same events; remove the `AddComponent<UI_ShiftPlaceholder>()` line in `MGR_Shift.HandleSceneLoaded` | Willyans, 1121-UI |
| Retry | Restores cash and rating only | Shift start snapshot (stock, orders) | Priyanka, 1124-SYS |
| Contract progress | PlayerPrefs `DES_Contract_*` | Save v2 | Priyanka, 1124-SYS |
| Shift targets | GDD R8 first proposal | Tuned on B0 | Arnab with Gabriel, Mon 23 |
| HUD Level / XP | Still shown | Removed, goal widget there | Willyans, 1121-UI |
| Level-up banner | Not done | Banner + SFX_LevelUp | Gabriel, 1123-LEAD-2 |

## How to test in the editor

1. Open `Assets/Scenes/Boot.unity`, Game view in **Simulator** (the mouse acts as a finger).
2. **Tools/DES/Start a new game (back up save)** before Play (not while playing).
   **Tools/DES/Replay first-time hints** keeps the save and restarts the hints.
3. Play: intro card, Start shift 1, controls hint, starter truck, place the box,
   rider takes it, buy hint and Buy tab.
4. While playing, **Tools/DES/Shift**: Leave 10 seconds, End shift now (win / fail),
   Add one delivered order. **Reset contract progress** (not while playing).
5. Check: first delivery time with a stopwatch (R3), cards match the orders after
   2 minutes in the terminal, only the hired riders in the warehouse, the Buy tab at
   16:9 and 20:9 (nothing overlaps).

## Known limits

- An old save in the middle of the hints may show the wrong hint once (step order changed).
- The Buy tab layout was built without the prefab; check it on 16:9 and 20:9.
- Not played on a phone yet.
