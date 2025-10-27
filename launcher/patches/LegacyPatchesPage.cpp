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

#include "LegacyPatchesPage.h"
#include "ui_LegacyPatchesPage.h"
#include <QTabBar>

LegacyPatchesPage::LegacyPatchesPage(BaseInstance* inst, QWidget* parent) 
    : QWidget(parent), ui(new Ui::LegacyPatchesPage), m_inst(inst)
{
    ui->setupUi(this);
    // TODO: Initialize with instance-specific patch data
}

LegacyPatchesPage::~LegacyPatchesPage()
{
    delete ui;
}

bool LegacyPatchesPage::apply()
{
    // TODO: Save patch settings to instance
    return true;
}

void LegacyPatchesPage::retranslate()
{
    ui->retranslateUi(this);
}
