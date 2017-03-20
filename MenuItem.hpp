///////////////////////////////////////////////////////////////////////////////
/** @file
 * @license: GPLv2
 *
 * @author: %user%
 *
 */
///////////////////////////////////////////////////////////////////////////////
#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <QObject>
#include <QString>
#include <QVariant>

class MenuItem : public QObject
{
  Q_OBJECT

public:
  // Types
  enum Property {
     Id = Qt::UserRole + 1,
     ImageSource,
     Target
  };

  explicit MenuItem(QObject *parent, QString id, QString imageSource, QString target = "");
  virtual ~MenuItem() {}

  QVariant getProperty (int property);

  QString getImageSource() const { return m_imageSource; }
  QString getId() const { return m_id; }
  QString getTarget() const { return m_target; }

public slots:
  virtual void itemClicked() {}

private:
  const QString m_id;
  const QString m_imageSource;
  const QString m_target;
};

#endif // MENUITEM_HPP
