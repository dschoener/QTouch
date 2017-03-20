///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#ifndef MENUEXIT_HPP
#define MENUEXIT_HPP

#include "MenuItem.hpp"

#include <QObject>

class MenuExit : public MenuItem
{
  Q_OBJECT

public:
  MenuExit(QObject* parent);

public slots:
  void itemClicked() override;

};

#endif // MENUEXIT_HPP
