///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#include "MenuItem.hpp"

MenuItem::MenuItem(QObject *parent, QString id, QString imageSource, QString target)
  : QObject(parent),
    m_id(id),
    m_imageSource(imageSource),
    m_target(target)
{
}

QVariant MenuItem::getProperty(int prop)
{
  switch (prop)
  {
    case Property::Id:
      return m_id;
    case Property::ImageSource:
      return m_imageSource;
    case Property::Target:
      return m_target;
    default:
      return QVariant();
  }
}
