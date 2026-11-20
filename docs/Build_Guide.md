# Build Guide — Delivery Empire Simulator (Android APK)

Who uses this: whoever builds the APK that the team installs (Gabriel: Build A0 Wed 18, Build B0 Mon 23; Priyanka: Build A Fri 20, RC1 Wed 25, final Sat 28).
Goal: anyone can build the same APK from `dev`, upload it and tell the team, in about 30-45 minutes.

If a step fails, write it in the WhatsApp group with the step number and add the fix to this guide in the same PR.

---

## 1. What you need (one time)

- Unity **6000.6.1f1** (the version in `ProjectSettings/ProjectVersion.txt`). Do not open the project with another version.
- In Unity Hub > Installs > 6000.6.1f1 > Add modules: **Android Build Support** with **OpenJDK** and **Android SDK & NDK Tools**.
- Git Bash with Git LFS (`git lfs install` once).
- An Android phone (Android 8.0 / API 26 or newer) to check the build before you share it.

## 2. Get the latest `dev`

Build only from `dev`, never from a feature branch.

```bash
cd "<your project folder>"
git status            # must say: nothing to commit, working tree clean
git checkout dev
git pull              # also downloads the LFS files (png, fbx, wav)
git log -1 --oneline  # write down this commit: it goes in the build log (section 9)
```

If `git status` shows changes you did not make (often `.meta` or LFS files), stop and ask in the WhatsApp group before you build.

## 3. Open the project and check it

1. Open the project in Unity 6000.6.1f1 and wait for the import to finish.
2. Console: **no red errors**. Yellow warnings are OK. A red error means the build will fail or the game is broken: tell the author of the last PR.
3. **File > Build Profiles**: the active platform must be **Android**. If not, select Android and click **Switch Platform** (the first switch can take 10-20 minutes).
4. Scene list, in this order, nothing else:
   - 0 `Assets/Scenes/Boot.unity`
   - 1 `Assets/Scenes/Main_level.unity`

## 4. Player Settings: check, change only the version code

**Edit > Project Settings > Player > Android tab.** These values come from `dev`. Check them and do not change them:

| Setting | Value on dev (16 Nov) |
|---|---|
| Company Name | Rural Games |
| Product Name | Delivery Empire Simulator |
| Package Name | com.RuralGames.DeliveryEmpireSimulator |
| Version | 0.1.0 (GDD v3 section 12 owns this number; RC is 0.9.0, release 1.0.0) |
| Minimum API Level | 26 (Android 8.0) |
| Scripting Backend | IL2CPP |
| Target Architectures | ARM64 only |
| Default Orientation | Landscape Left |
| Custom Keystore | Off (debug key, see section 8) |

**Change only one thing: Bundle Version Code = last code in the build log (section 9) + 1.** Every APK gets a new code, so phones install it as an update.

Changing the code edits `ProjectSettings/ProjectSettings.asset`. That change goes to `dev` in your build PR (section 7), so the next builder starts from the right number.

## 5. Build the APK

1. **File > Build Profiles > Android**.
2. **Development Build: OFF** and **Build Type: Release** for the team APK. A development build is slower and shows a watermark, so FPS numbers from it are not real.
   - On `dev` (16 Nov) the Android profile still has Development Build ON (`Assets/Settings/Build Profiles/Android™.asset`). Turn it off before every build until the build PR that fixes it is merged. That PR includes the profile change (section 7).
   - The draw-call counter of the performance overlay only works in a development build: in the Sprint 1 APK it read 0 the whole run (PR #177). If you need draw calls or the Profiler on the phone, make a second build with Development Build ON, name it `..._dev.apk`, do not share it with the team and do not commit the profile change.
3. Click **Build** (not Build and Run). Save it in the `Builds/` folder at the project root (git ignores `Builds/`).
4. File name: `DES_<Sprint>_<DDMM>.apk`, using the date in IST (the same names as in the tasks):

   | Build | Task | File name | Drive folder |
   |---|---|---|---|
   | Build A0, Wed 18 | 1118-LEAD | `DES_Sprint3_1811.apk` | Dev_Inbox/Builds/Sprint3 |
   | Build A, Fri 20 | 1120-SYS | `DES_Sprint3_2011.apk` | Dev_Inbox/Builds/Sprint3 |
   | Build B0, Mon 23 | 1123-LEAD | `DES_Sprint4_2311.apk` | Dev_Inbox/Builds/Sprint4 |
   | RC1, Wed 25 | 1125-SYS | `DES_RC1_2511.apk` | Dev_Inbox/Builds/Sprint4 |
   | Final 1.0.0, Sat 28 | 1128-SYS | `DES_Release_2811.apk` | Dev_Inbox/Builds/Release |
5. The first IL2CPP build can take 15-30 minutes. Later builds are faster.
6. Optional, without opening the Editor (Unity must be closed). From Git Bash in the project folder:

   ```bash
   "/c/Program Files/Unity/Hub/Editor/6000.6.1f1/Editor/Unity.exe" -batchmode -quit -projectPath . \
     -activeBuildProfile "Assets/Settings/Build Profiles/Android™.asset" \
     -build "Builds/DES_Sprint3_1811.apk" -logFile Builds/build.log
   ```

   Success when `Builds/build.log` ends with `Build Finished, Result: Success.` and the log lists `Level 0 'Assets/Scenes/Boot.unity'` and `Level 1 'Assets/Scenes/Main_level.unity'`.

Never put an APK in git.

## 6. Check it on a phone (5 minutes, before you share it)

1. **Uninstall the old app first** (see section 8).
2. Install the APK (USB cable or copy the file to the phone and open it; allow "install unknown apps" once).
3. New save, play 5 minutes:
   - [ ] The game opens on the title screen, in landscape.
   - [ ] Buy at the terminal, the truck comes, pick up a box, place it on a shelf of the same colour.
   - [ ] An order is delivered by the rider and the cash goes up.
   - [ ] Pause > Save, close the app, open it again: the save loads.
   - [ ] No frozen screen and no crash.
4. If a box is not ticked, do not share the APK: write what failed in the WhatsApp group with the task ID of the last PR that touched it.

## 7. Share it and close the build

1. Upload the APK to the Drive folder in the table of section 5 (for example `Dev_Inbox/Builds/Sprint3`). Sharing: anyone in the team with the link can view.
2. Post in the WhatsApp group:

```
<Build name> APK is ready: <Drive link>
Commit <short hash> on dev. Version code <N>. Size <MB>.
Please uninstall the old app first, then install this one.
Play 15 minutes from a new save and write what you see in the 'APK review' tab (art sheet).
```

3. Open a small PR to `dev` named `build: <Build name> APK (version code N)` with:
   - the version code change in `ProjectSettings/ProjectSettings.asset` (nothing else in that file),
   - the Android Build Profile only if it was still on Development (first build PR only; after that it must already be Release),
   - nothing else: unstage other files Unity touched (for example `.vscode/settings.json` or `ProjectSettings/Packages/...`),
   - a new row in the build log (section 9),
   - the phone numbers in `docs/Performance.md` if this build has a phone run (Fri builds: time to first delivery, FPS at start and at minute 15 or 20).

## 8. Common problems

| What you see | Why | What to do |
|---|---|---|
| "App not installed" on the phone | Each computer signs the APK with its own debug key, so an APK from Priyanka cannot update one from Gabriel. | Uninstall the old app, then install. Tell testers to always uninstall first. |
| Build fails with `The type or namespace name 'UnityEditor' could not be found` | An editor-only script is outside an `Editor` folder. | Move the script into an `Editor` folder (or wrap it in `#if UNITY_EDITOR`). Tell the PR author. |
| Gradle, JDK or SDK error | Android modules missing or broken. | Unity Hub > Installs > 6000.6.1f1 > Add modules > Android Build Support (OpenJDK + SDK & NDK). Restart Unity. |
| Pink or missing models in the APK | LFS files were not downloaded (pointer files). | Run `git lfs pull`, reopen Unity, build again. |
| The game opens on a black screen | Boot is not scene 0, or a scene is missing from the list. | Check section 3, step 4. |
| The build is much bigger than the last one | A large texture or audio file was added without compression. | Note the size in the WhatsApp group; the author checks the import settings. |

## 9. Build log

One row per APK shared with the team. The next version code is the last one + 1.

| Date (IST) | Build | Built by | Commit on dev | Version code | File | Size |
|---|---|---|---|---|---|---|
| 06/11/2026 | Sprint 1 | Murtaza | (see PR #177) | 1 | Dev_Inbox/Builds/Sprint1 | 41.6 MB |
| 18/11/2026 | Build A0 | Gabriel | 8081f32 | 2 | Dev_Inbox/Builds/Sprint3/DES_Sprint3_1811.apk | 41.7 MB |
| 20/11/2026 | Build A | Priyanka | 6a145ba | 3 | Dev_Inbox/Builds/Sprint3/DES_Sprint3_2011.apk | 39.8 MB |