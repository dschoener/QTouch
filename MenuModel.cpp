///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#include "MenuModel.hpp"

#include <QDebug>

MenuModel::MenuModel(QObject* parent)
  :QAbstractListModel (parent)
{
}

void MenuModel::setMenuItems(const MenuModel::MenuItemList& list)
{
  beginInsertRows(QModelIndex(), 0, list.count() -1);
  m_menuItemMap.clear();
  for (auto item : list)
  {
    m_menuItemMap.insert(item->getId(), item);
  }
  endInsertRows();
}

QVariant MenuModel::data(const QModelIndex& index, int role) const
{
  const int row = index.row();

  if (row < 0 || row >= m_menuItemMap.count())
    return QVariant();

  return m_menuItemMap.values().at(row)->getProperty(role);
}

QHash<int, QByteArray> MenuModel::roleNames() const
{
  QHash<int, QByteArray> roles;
  roles[MenuItem::Property::Id] = "id";
  roles[MenuItem::Property::ImageSource] = "imageSource";
  roles[MenuItem::Property::Target] = "target";
  return roles;
}

void MenuModel::itemClicked(QString id)
{
  qDebug() << "item clicked:" << id;
  Q_ASSERT(m_menuItemMap.contains(id));
  QObject* item = m_menuItemMap[id];
  qobject_cast<MenuItem*>(item)->itemClicked();
}

