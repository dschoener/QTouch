import QtQuick 2.5
import QtQuick.Controls 2.0
import "."

Item {

    StackView {
        id: mainViewStack

        anchors.fill: parent
        initialItem: MainMenu {}
    }

    Rectangle {
        id: areaTop

        visible: false
        anchors.top: parent.top
        color: Style.colorBackground
        width: parent.width
        implicitHeight: 200
        z: 1
    }

    Rectangle {
        id: areaBottom

        anchors.bottom: parent.bottom
        color: Style.colorBackground
        width: parent.width
        implicitHeight: 200
        z: 1
    }
}
