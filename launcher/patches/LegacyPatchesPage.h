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

#include <QWidget>
#include "BaseInstance.h"
#include "ui/pages/BasePage.h"

namespace Ui {
class LegacyPatchesPage;
}

class LegacyPatchesPage : public QWidget, public BasePage {
    Q_OBJECT

   public:
    explicit LegacyPatchesPage(BaseInstance* inst, QWidget* parent = nullptr);
    virtual ~LegacyPatchesPage();
    
    virtual QString displayName() const override { return tr("Legacy Patches"); }
    virtual QIcon icon() const override { return QIcon::fromTheme("settings"); }
    virtual QString id() const override { return "legacy-patches"; }
    virtual bool apply() override;
    virtual QString helpPage() const override { return "Legacy-Patches"; }
    void retranslate() override;

   private:
    Ui::LegacyPatchesPage* ui;
    BaseInstance* m_inst;
};
