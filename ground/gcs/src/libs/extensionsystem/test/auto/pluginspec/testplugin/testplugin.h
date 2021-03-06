/**
 ******************************************************************************
 *
 * @file       testplugin.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 *             Parts by Nokia Corporation (qt-info@nokia.com) Copyright (C) 2009.
 * @brief      
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   
 * @{
 * 
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

#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include "testplugin_global.h"
#include <extensionsystem/iplugin.h>

#include <QtCore/QObject>

namespace MyPlugin {

class MYPLUGIN_EXPORT MyPluginImpl : public ExtensionSystem::IPlugin
{
    Q_OBJECT

public:
    MyPluginImpl();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();

    bool isInitialized() { return m_isInitialized; }
    bool isExtensionsInitialized() { return m_isExtensionsInitialized; }
private:
    bool m_isInitialized;
    bool m_isExtensionsInitialized;
};

} // namespace

#endif // TESTPLUGIN_H
