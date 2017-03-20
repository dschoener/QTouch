///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#ifndef MENUSETTINGS_HPP
#define MENUSETTINGS_HPP

#include "MenuItem.hpp"

#include <QObject>

class MenuSettings : public MenuItem
{
  Q_OBJECT

public:
  MenuSettings(QObject *parent);

public slots:
  void itemClicked() override;

};

#endif // MENUSETTINGS_HPP
