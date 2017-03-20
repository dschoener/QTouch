///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#include "MenuSettings.hpp"

#include <QDebug>

MenuSettings::MenuSettings(QObject* parent)
  :MenuItem(parent, "settings", "images/sett_big.svg", "Settings.qml")
{

}

void MenuSettings::itemClicked()
{

}
