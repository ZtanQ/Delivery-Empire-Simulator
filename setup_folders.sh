#!/usr/bin/env bash
# Creates the Assets folder structure from GDD Section 55.
# Run this ONCE, from the root of the Unity project, after creating the empty project.
#   bash setup_folders.sh
set -e

DIRS=(
  "Assets/Art/Materials"
  "Assets/Art/Models/Environment"
  "Assets/Art/Models/Products"
  "Assets/Art/Models/Characters"
  "Assets/Art/Textures"
  "Assets/Audio/Music"
  "Assets/Audio/SFX"
  "Assets/Data/Products"
  "Assets/Prefabs/Environment"
  "Assets/Prefabs/Characters"
  "Assets/Prefabs/Player"
  "Assets/Prefabs/UI"
  "Assets/Scripts/Core"
  "Assets/Scripts/Managers"
  "Assets/Scripts/Controllers"
  "Assets/Scripts/States"
  "Assets/Scripts/Data"
  "Assets/Scripts/UI"
  "Assets/Scripts/Utilities"
  "Assets/Scenes"
  "Assets/Settings/URP"
  "Docs"
)

for d in "${DIRS[@]}"; do
  mkdir -p "$d"
  if [ -z "$(ls -A "$d")" ]; then
    touch "$d/.gitkeep"
  fi
done

echo "Folder structure created."
echo
echo "Now do this inside Unity, in order:"
echo "  1. Edit > Project Settings > Editor:"
echo "       Asset Serialization  -> Force Text"
echo "       Version Control Mode -> Visible Meta Files"
echo "  2. Create these scenes in Assets/Scenes and save them empty:"
echo "       Boot.unity  MainLevel.unity"
echo "       Sandbox_SYS.unity  Sandbox_GP.unity  Sandbox_UI.unity  Sandbox_DES.unity"
echo "  3. File > Build Settings > switch platform to Android, orientation Landscape Left."
echo "  4. Close Unity BEFORE committing, so it writes every .meta file."
echo "  5. git add . && git commit -m 'chore: project skeleton' && git push"
