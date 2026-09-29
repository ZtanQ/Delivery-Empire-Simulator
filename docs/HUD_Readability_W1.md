# HUD Readability Check — Week 1

## Test

Checked the HUD in `Sandbox_ui` at phone resolution (750 × 1334).

I focused on text size, contrast, buttons, icons, and numbers.

## Findings

| Element | Problem | Proposed Fix | Priority |
|---|---|---|---|
| Product cards | Product names and prices are a bit small on phone size. | Increase the text size slightly. | Must-fix |
| Quantity controls | The `- 0 +` controls are small and close together. | Increase their size and spacing. | Must-fix |
| Product cards | Cards feel a little crowded. | Add some spacing between cards. | Nice-to-have |
| BUY / STAFF / UPGRADES | Labels are clear and readable. | No change needed. | — |
| Total | Easy to see and updates correctly. | No change needed. | — |
| Order button | Clear and usable. | No change needed. | — |

## Terminal Test

I could not complete the full GDD §4.4 test in `Sandbox_gp` because the player could not move/interact due to runtime errors.

So I did not make any assumptions about shelf-category or low-stock readability.

## Notes

The HUD was checked at phone size. The main readability issues found were the small product text and small quantity controls.