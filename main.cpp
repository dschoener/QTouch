#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QUrl>

#include "MenuController.hpp"

int main(int argc, char *argv[])
{
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine qmlEngine;

  qmlRegisterType<MenuController>("org.mirror.components", 1, 0, "MenuController");

  qmlEngine.load(QUrl(QStringLiteral("qrc:/Main.qml")));

  return app.exec();
}
