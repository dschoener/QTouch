import QtQuick 2.0
import QtGraphicalEffects 1.0
import "."

Item {
    id: menuItem

    width: 280
    height: 280

    MouseArea {
        hoverEnabled: true
        anchors.fill: parent
        onEntered: background.color = Style.colorActive
        onExited: background.color = Style.colorText
        onClicked: {
            menu.model.itemClicked(model.id)
            if (model.target !== "") {
                mainViewStack.push(Qt.resolvedUrl(model.target))
            }
        }
    }

    Component {
        Settings {
            id: settings
        }
    }

    Rectangle {
        id: background
        color: Style.colorText
        opacity: 0
        anchors.fill: parent
    }
    Image {
        id: mask
        opacity: 1
        fillMode: Image.PreserveAspectFit
        smooth: true
        source: model.imageSource
        visible: true
        anchors.fill: parent
    }
    OpacityMask {
        maskSource: mask
        source: background
        anchors.fill: background
    }
}
