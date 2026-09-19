#!/usr/bin/env bash
# Creates Week 1 labels and issues in the GitHub repo.
# Needs the GitHub CLI (https://cli.github.com). Run "gh auth login" once, then:
#   bash create_week1_issues.sh      (from inside the cloned repository)
set -e

echo "Creating labels..."
gh label create "SYS" --color 1D76DB --description "Owned by SYS" --force
gh label create "GP" --color 0E8A16 --description "Owned by GP" --force
gh label create "AI" --color 5319E7 --description "Owned by AI" --force
gh label create "UI" --color D93F0B --description "Owned by UI" --force
gh label create "PERF" --color B60205 --description "Owned by PERF" --force
gh label create "DES" --color FBCA04 --description "Owned by DES" --force
gh label create "week-1" --color C5DEF5 --description "Week 1 - Foundation" --force
gh label create "blocked" --color E11D21 --description "Waiting on something" --force

echo "Creating 36 issues..."

gh issue create --title "[SYS] Monday 21 Sep - Manager<T> base class and the Boot scene wiring (repo a" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Manager<T> base class and the Boot scene wiring (repo and folders are already in place)

### Deliverable for the day
Project opens from the Boot scene with no console errors

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Monday 21 Sep - Fixed invisible joystick and movement with CharacterCon" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Fixed invisible joystick and movement with CharacterController in Sandbox_GP

### Deliverable for the day
The player moves with the left thumb

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Monday 21 Sep - Stage 0 blockout in ProBuilder at real scale 10x10 m: f" --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Stage 0 blockout in ProBuilder at real scale 10x10 m: floor, walls, door, loading dock

### Deliverable for the day
MainLevel scene with a walkable grey warehouse

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Monday 21 Sep - Landscape canvas with anchors for different screen size" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Landscape canvas with anchors for different screen sizes, HUD wireframe from Section 31

### Deliverable for the day
HUD visible and correctly proportioned in 16:9 and 20:9

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Monday 21 Sep - Set up the Android build (API 26, AAB, landscape) and i" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Set up the Android build (API 26, AAB, landscape) and install an empty build on a real phone

### Deliverable for the day
Empty build running on a physical device

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Monday 21 Sep - Decide the demand signal (Section 22.3) and write a one" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Monday 21 Sep (Week 1 - Foundation)

### Task
Decide the demand signal (Section 22.3) and write a one-page spec for it

### Deliverable for the day
Document with the chosen option and how it is shown to the player

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

gh issue create --title "[SYS] Tuesday 22 Sep - Implement the startup order of the 9 managers from Sect" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
Implement the startup order of the 9 managers from Section 46 and the Initialise method

### Deliverable for the day
All 9 managers initialise in order and load MainLevel

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Tuesday 22 Sep - First-person camera: drag on the right half, 75 FOV, da" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
First-person camera: drag on the right half, 75 FOV, damping with no shake

### Deliverable for the day
Looking around feels comfortable on a phone

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Tuesday 22 Sep - Blockout collisions; mark positions for terminal, dock," --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
Blockout collisions; mark positions for terminal, dock, 6 shelves and dispatch zone

### Deliverable for the day
No part of the warehouse lets the player walk through walls

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Tuesday 22 Sep - Build the full HUD with placeholder data: level, XP, ca" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
Build the full HUD with placeholder data: level, XP, cash, rating, order queue

### Deliverable for the day
HUD readable at arm's length on the phone

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Tuesday 22 Sep - Configure URP for mobile, ASTC compression, profile the" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
Configure URP for mobile, ASTC compression, profile the empty build

### Deliverable for the day
Baseline FPS, draw calls and memory recorded

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Tuesday 22 Sep - Spreadsheet with the 24 products: ID, category, name, b" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Tuesday 22 Sep (Week 1 - Foundation)

### Task
Spreadsheet with the 24 products: ID, category, name, base cost and colour

### Deliverable for the day
Table ready for SYS to generate the ProductSO assets

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

gh issue create --title "[SYS] Wednesday 23 Sep - Create DATA_ProductSO and generate the 24 product asset" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Create DATA_ProductSO and generate the 24 product assets from the design sheet

### Deliverable for the day
24 ScriptableObjects in Assets/Data/Products

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Wednesday 23 Sep - Continuous raycast from camera centre, 3 unit limit, hi" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Continuous raycast from camera centre, 3 unit limit, highlight material overlay

### Deliverable for the day
Looking at a box highlights it; moving away clears it

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Wednesday 23 Sep - Bake the NavMesh on Stage 0 and test an agent that walk" --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Bake the NavMesh on Stage 0 and test an agent that walks to a point and back

### Deliverable for the day
Test agent crosses the warehouse without getting stuck

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Wednesday 23 Sep - Integrate joystick and the single contextual button int" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Integrate joystick and the single contextual button into the HUD, with label switching

### Deliverable for the day
One action button in the bottom right corner

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Wednesday 23 Sep - Object pool system with the IPoolable interface, tested" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Object pool system with the IPoolable interface, tested with 12 boxes per Section 51

### Deliverable for the day
No Instantiate calls during gameplay

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Wednesday 23 Sep - Level 1 order template: item counts, categories and fre" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Wednesday 23 Sep (Week 1 - Foundation)

### Task
Level 1 order template: item counts, categories and frequency

### Deliverable for the day
Written rules ready to implement

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

gh issue create --title "[SYS] Thursday 24 Sep - MGR_Inventory with the OnInventoryChanged and OnShelfUp" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
MGR_Inventory with the OnInventoryChanged and OnShelfUpdated events

### Deliverable for the day
Changing stock in code updates the HUD

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Thursday 24 Sep - Contextual button that changes text and icon based on t" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
Contextual button that changes text and icon based on the raycast target

### Deliverable for the day
The button reads Pick up, Place or Use as appropriate

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Thursday 24 Sep - Build Stage 1 geometry (10x20 m) with its 12 shelves" --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
Build Stage 1 geometry (10x20 m) with its 12 shelves

### Deliverable for the day
Second warehouse stage is walkable

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Thursday 24 Sep - Order card with item list and a depleting timer bar" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
Order card with item list and a depleting timer bar

### Deliverable for the day
4 stacked cards on the right edge, readable

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Thursday 24 Sep - First blockout build on a phone: measure FPS, draw call" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
First blockout build on a phone: measure FPS, draw calls and triangles

### Deliverable for the day
Report against the Section 37 budget

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Thursday 24 Sep - Define shelf allocation and the category colour code" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Thursday 24 Sep (Week 1 - Foundation)

### Task
Define shelf allocation and the category colour code

### Deliverable for the day
Warehouse plan showing which category goes on each shelf

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

gh issue create --title "[SYS] Friday 25 Sep - Publish the full event list from Section 48 so UI and g" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Publish the full event list from Section 48 so UI and gameplay can subscribe

### Deliverable for the day
Event document shared with the team

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Friday 25 Sep - Pick up and drop a test box, with the box visible in th" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Pick up and drop a test box, with the box visible in the player's hands

### Deliverable for the day
The player lifts a box, walks with it and drops it

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Friday 25 Sep - Rider state machine using an enum, without real navigat" --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Rider state machine using an enum, without real navigation yet

### Deliverable for the day
States print to console in the correct order

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Friday 25 Sep - Terminal: Buy tab with the 24 product grid and placehol" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Terminal: Buy tab with the 24 product grid and placeholder data

### Deliverable for the day
A purchase can be built with plus and minus, showing a running total

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Friday 25 Sep - Review the performance budget with the whole team and r" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Review the performance budget with the whole team and record risks

### Deliverable for the day
List of items to watch during week 2

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Friday 25 Sep - Check the HUD against the Pillar 4.4 readability test a" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Friday 25 Sep (Week 1 - Foundation)

### Task
Check the HUD against the Pillar 4.4 readability test and request fixes

### Deliverable for the day
Concrete fix list for UI

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

gh issue create --title "[SYS] Saturday 26 Sep - Merge everything into main and fix the week's errors" --label "SYS" --label "week-1" --body "**Role:** SYS
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Merge everything into main and fix the week's errors

### Deliverable for the day
The game opens and runs with no console errors

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`sys/short-description\`"

gh issue create --title "[GP] Saturday 26 Sep - Integration and fixes" --label "GP" --label "week-1" --body "**Role:** GP
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Integration and fixes

### Deliverable for the day
No errors in their area

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`gp/short-description\`"

gh issue create --title "[AI] Saturday 26 Sep - Integration and fixes" --label "AI" --label "week-1" --body "**Role:** AI
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Integration and fixes

### Deliverable for the day
No errors in their area

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ai/short-description\`"

gh issue create --title "[UI] Saturday 26 Sep - Integration and fixes" --label "UI" --label "week-1" --body "**Role:** UI
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Integration and fixes

### Deliverable for the day
No errors in their area

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`ui/short-description\`"

gh issue create --title "[PERF] Saturday 26 Sep - Produce the weekly review build and install it on the p" --label "PERF" --label "week-1" --body "**Role:** PERF
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Produce the weekly review build and install it on the phone

### Deliverable for the day
Week 1 build installed and measured

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`perf/short-description\`"

gh issue create --title "[DES] Saturday 26 Sep - Run the 30 minute team playtest and record findings" --label "DES" --label "week-1" --body "**Role:** DES
**Day:** Saturday 26 Sep (Week 1 - Foundation)

### Task
Run the 30 minute team playtest and record findings

### Deliverable for the day
Prioritised problem list for week 2

### Definition of done
- [ ] Works in my sandbox scene
- [ ] Prefab or script lives in my own folder
- [ ] Project opens with no console errors
- [ ] PR open with the template filled in

Branch: \`des/short-description\`"

echo "Done. 36 issues created."
