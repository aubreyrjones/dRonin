/**
 ******************************************************************************
 * @file       pathplannergadget.cpp
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup PathPlannerGadgetPlugin Path Planner Gadget Plugin
 * @{
 * @brief A gadget to edit a list of waypoints
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */
#include "pathplannergadget.h"
#include "pathplannergadgetwidget.h"

#include "extensionsystem/pluginmanager.h"
#include "uavobjects/uavobjectmanager.h"
#include "uavobjects/uavobject.h"

PathPlannerGadget::PathPlannerGadget(QString classId, PathPlannerGadgetWidget *widget,
                                     QWidget *parent)
    : IUAVGadget(classId, parent)
    , m_widget(widget)
{
}

PathPlannerGadget::~PathPlannerGadget()
{
    delete m_widget;
}

void PathPlannerGadget::loadConfiguration(IUAVGadgetConfiguration *config)
{
    Q_UNUSED(config);
}
