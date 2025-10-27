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

// This file defines which InstancePageProvider to use
// To maintain separation from upstream Prism Launcher, Cryovex uses
// a custom page provider that extends the base provider

#include "patches/CryovexInstancePageProvider.h"

// Define the provider type that should be used throughout the application
#define ACTIVE_INSTANCE_PAGE_PROVIDER CryovexInstancePageProvider
