// SPDX-License-Identifier: GPL-3.0-only
/*
 *  CryovexLauncher - Minecraft Launcher
 *  Copyright (c) 2025 Cryovex
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "InstancePageProvider.h"
#include "patches/LegacyPatchesPage.h"

/**
 * CryovexInstancePageProvider extends the default InstancePageProvider
 * to add custom Cryovex-specific instance pages while maintaining
 * compatibility with upstream Prism Launcher.
 */
class CryovexInstancePageProvider : public InstancePageProvider {
   public:
    explicit CryovexInstancePageProvider(InstancePtr parent) : InstancePageProvider(parent) {}

    virtual ~CryovexInstancePageProvider() = default;

    virtual QList<BasePage*> getPages() override
    {
        // Get all the standard pages from the base provider
        QList<BasePage*> values = InstancePageProvider::getPages();
        
        // Add Cryovex-specific pages
        std::shared_ptr<MinecraftInstance> onesix = std::dynamic_pointer_cast<MinecraftInstance>(inst);
        if (onesix) {
            // Add Legacy Patches page before the last page (Other Logs)
            // This places it after Settings but before Other Logs
            values.insert(values.count() - 1, new LegacyPatchesPage(onesix.get()));
        }
        
        return values;
    }
};
