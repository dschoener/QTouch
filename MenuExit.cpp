///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#include "MenuExit.hpp"

#include <QGuiApplication>
#include <QDebug>

MenuExit::MenuExit(QObject* parent)
  :MenuItem (parent, "exit", "images/shut_down.svg")
{}

void MenuExit::itemClicked()
{
  qDebug() << "exit on event";
  QGuiApplication::exit(0);
}
