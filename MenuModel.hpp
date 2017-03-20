///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#ifndef MENUMODEL_HPP
#define MENUMODEL_HPP

#include "MenuItem.hpp"

#include <QAbstractListModel>
#include <QHash>
#include <QByteArray>

class MenuModel : public QAbstractListModel
{
  Q_OBJECT

public:
  // Types
  using MenuItemList = QList<MenuItem*>;
  using MenuItemMap = QMap<QString, MenuItem*>;

  explicit MenuModel(QObject* parent = nullptr);

  void setMenuItems(const MenuModel::MenuItemList& list);

  int rowCount(const QModelIndex &parent = QModelIndex()) const override {
    Q_UNUSED(parent);
    return m_menuItemMap.count();
  }
  QVariant data(const QModelIndex &index, int role) const override;
  QHash<int, QByteArray> roleNames() const override;

public slots:
  void itemClicked(QString id);

private:
  MenuItemMap m_menuItemMap;
};

#endif // MENUMODEL_HPP
