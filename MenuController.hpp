///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#ifndef MENUCONTROLLER_HPP
#define MENUCONTROLLER_HPP

#include "MenuItem.hpp"
#include "MenuModel.hpp"

#include <QObject>
#include <QList>
#include <QMap>
#include <QAbstractListModel>

//#include <memory>

//struct QObjectDeleter {
//    void operator()(QObject* obj) { obj->deleteLater(); }
//};

class MenuController : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QAbstractListModel* model READ getMenuModel NOTIFY menuModelChanged)

public:

  explicit MenuController(QObject *parent = 0);

  QAbstractListModel* getMenuModel() { return &m_mainMenuModel; }

signals:
  void menuModelChanged();

public slots:
  void reload();

private:

  MenuModel m_mainMenuModel;
};

#endif // MENUCONTROLLER_HPP
