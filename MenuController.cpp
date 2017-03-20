///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#include "MenuController.hpp"
#include "MenuSettings.hpp"
#include "MenuExit.hpp"

#include <QDebug>
#include <QGuiApplication>

MenuController::MenuController(QObject *parent)
  : QObject(parent)
{
}

void MenuController::reload()
{
  qDebug() << "menu controller reloading...";
  MenuModel::MenuItemList itemList;
  itemList.append(new MenuItem(&m_mainMenuModel, "calendar", "images/calendar.svg"));
  itemList.append(new MenuItem(&m_mainMenuModel, "search",   "images/search.svg"));
  itemList.append(new MenuItem(&m_mainMenuModel, "home",     "images/home.svg"));
  itemList.append(new MenuItem(&m_mainMenuModel, "info",     "images/info.svg"));
  itemList.append(new MenuSettings(&m_mainMenuModel));
  itemList.append(new MenuExit(&m_mainMenuModel));
  m_mainMenuModel.setMenuItems(itemList);
  menuModelChanged();
}

