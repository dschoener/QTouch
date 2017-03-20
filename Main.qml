import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    id: window
    objectName: "mainWindow"
    visible: true
    visibility: "FullScreen"
    title: qsTr("QTouch")

    MainForm {
        id: mainForm

        anchors.fill: parent
    }
}
