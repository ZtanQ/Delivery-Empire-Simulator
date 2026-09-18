# Delivery Empire Simulator

First-person fulfilment simulator for Android. Unity + URP.
MVP window: 21 September - 17 October 2026.

---

## 1. Before you write a single line

1. Install **Unity `6000.6.1f1` (Unity 6.6)**. Not a newer one, not an older one.
   A different version rewrites `ProjectSettings` and breaks everyone else's project.
2. Install **Git LFS** and run `git lfs install` once.
   Also install the **Android Build Support** module for this exact Unity version
   (it includes OpenJDK 17 and the Android SDK/NDK the project needs).
3. Clone the repo and open it in Unity. If Unity asks to upgrade the project version, **close it and install the correct version instead**.
4. Read section 3 of this file before your first commit.

---

## 2. Who owns what

Nobody edits another person's folders without telling them first.

| Role | Code | Owns these folders | Owns this scene |
|---|---|---|---|
| System Programmer | SYS | `Scripts/Core`, `Scripts/Managers`, `Scripts/Data`, `Data/Products` | `Scenes/Sandbox_SYS.unity` |
| Gameplay Programmer | GP | `Scripts/Controllers`, `Prefabs/Player` | `Scenes/Sandbox_GP.unity` |
| AI & Navigation | AI | `Scripts/States`, `Prefabs/Characters`, `Art/Models/Environment` | `Scenes/MainLevel.unity` |
| UI Programmer | UI | `Scripts/UI`, `Prefabs/UI` | `Scenes/Sandbox_UI.unity` |
| Mobile & Performance | PERF | `Scripts/Utilities`, `Settings`, build configuration | `Scenes/Boot.unity` |
| Systems & Economy Designer | DES | `Data`, `Docs` | `Scenes/Sandbox_DES.unity` |

**MainLevel.unity has one owner: AI.** If you need something in it, build it as a prefab in your own folder and ask AI to place it. This single rule prevents most merge conflicts in Unity.

---

## 3. Scene and prefab rules

Unity scenes and prefabs merge badly. These rules exist so we never have to resolve one.

- **Work in your own sandbox scene.** Test everything there first.
- **Everything you build is a prefab**, saved in your own folder. Scenes only reference prefabs.
- **Never open a scene you do not own.** If you must, say so in the channel first and close it when you are done.
- **Never edit `ProjectSettings/` or `Packages/manifest.json`** unless you are PERF. If you need a package, ask.
- Commit the `.meta` file together with the asset it belongs to. Always.

---

## 4. Branches

- `main` is protected. No direct pushes.
- One branch per task, named `role/short-description`:
  `sys/inventory-manager`, `gp/first-person-controller`, `ui/order-card`, `ai/rider-navmesh`, `perf/object-pool`, `des/product-data`.
- A branch lives **one to two days maximum**. Long branches become impossible to merge.
- Open a pull request as soon as the task works, even if it is not polished.
- Do not create a permanent personal branch. It will drift and break.

**Daily rhythm:** pull from `main` when you start, commit as you go, open the PR before you finish your day.

---

## 5. Pull requests

- Small. One task from the schedule per PR.
- Fill in the template. It takes two minutes and saves an hour of questions.
- The lead reviews during his morning (your evening) and merges.
- If your PR touches a scene or `ProjectSettings`, say so in the description in capital letters.

---

## 6. Time zones and daily handoff

| 9:00 pm | 7:30 am | 11:00 pm | Lead posts the **start-of-day brief** with each person's task |
| 8:30 am | 7:00 pm | 10:30 am | Team has posted the **end-of-day report**; lead reviews PRs |

Use `docs/DAILY_HANDOFF.md` as the template for your end-of-day report. Post it even on a day where nothing worked. Especially on that day.

---

## 7. Blocked?

1. Re-read the task's deliverable in the schedule. It defines what "done" means.
2. Work around it with a placeholder (a fake value, an empty method, a grey cube) and keep moving.
3. Write the blocker in the channel with the word **BLOCKED** and carry on with the next day's task.

---

## 8. Unity version note

The project is pinned to **6000.6.1f1**, a Supported Update rather than an LTS release.
Two consequences everyone should know:

- Some Asset Store packages are published only against the latest LTS. If a package
  will not import, say so in the channel instead of upgrading or downgrading Unity.
- Nobody accepts the Unity Hub prompt to upgrade the project, ever. If Unity asks,
  close it and check your installed version.

---

## 9. Definition of done

A task is done when all four are true:

- It works in your sandbox scene.
- It is a prefab or a script in your own folder.
- The project opens with no console errors.
- The PR is open with the template filled in.
