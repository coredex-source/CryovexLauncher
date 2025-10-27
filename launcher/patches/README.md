# CryovexLauncher Patches

This folder contains Cryovex-specific customizations to maintain separation from the upstream Prism Launcher codebase. This approach makes it easier to pull updates from Prism while preserving Cryovex features.

## Structure

- **LegacyPatchesPage.h/cpp/ui** - A custom instance page that provides "Legacy Patches" functionality
- **CryovexInstancePageProvider.h** - Extends the default InstancePageProvider to add custom pages
- **InstancePageProviderConfig.h** - Configuration header that defines which page provider to use
- **CMakeLists.txt** - Build configuration for the patches

## Adding New Custom Pages

To add more custom pages:

1. Create your page files (.h, .cpp, .ui) in this `patches/` folder
2. Add them to `CMakeLists.txt` in the appropriate `CRYOVEX_PATCHES_SOURCES` or `CRYOVEX_PATCHES_UI` lists
3. Update `CryovexInstancePageProvider.h` to include and instantiate your page

## Minimal Core Changes

To keep the codebase pullable from upstream, only minimal changes are made to core files:

- `launcher/CMakeLists.txt` - Includes this patches folder and adds sources to build
- `launcher/ui/InstanceWindow.cpp` - Uses the Cryovex page provider instead of default

These changes are clearly marked with `// CRYOVEX:` comments for easy identification and maintenance.
