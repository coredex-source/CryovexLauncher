# CryovexLauncher Patches
# This CMakeLists.txt file contains Cryovex-specific customizations
# to maintain separation from upstream Prism Launcher code

set(CRYOVEX_PATCHES_SOURCES
    patches/LegacyPatchesPage.cpp
    patches/LegacyPatchesPage.h
    patches/CryovexInstancePageProvider.h
    patches/InstancePageProviderConfig.h
)

set(CRYOVEX_PATCHES_UI
    patches/LegacyPatchesPage.ui
)

# Add sources to parent scope
set(CRYOVEX_PATCHES_SOURCES ${CRYOVEX_PATCHES_SOURCES} PARENT_SCOPE)
set(CRYOVEX_PATCHES_UI ${CRYOVEX_PATCHES_UI} PARENT_SCOPE)
