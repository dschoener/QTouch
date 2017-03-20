import QtQuick 2.0
import QtGraphicalEffects 1.0
import org.mirror.components 1.0
import "."

Rectangle {
    color: Style.colorBackground

    MenuController {
        id: menu

        // force menu items to be reloaded!
        Component.onCompleted: menu.reload()
    }

    ListView {
        id: mainMenu

        anchors.fill: parent
        interactive: true
        spacing: 80

        orientation: ListView.Horizontal
        boundsBehavior: Flickable.DragOverBounds

        model: menu.model
        delegate: MenuItem {
            anchors.verticalCenter: parent.verticalCenter
        }
    }

    LinearGradient {
        anchors.fill: parent
        start: Qt.point(0, 0)
        end: Qt.point(1900, 0)

        //TODO add colors to style
        gradient: Gradient {
         GradientStop {
              position: 0.0
              color: "#ee000000"
            }
          GradientStop {
            position: 0.1
            color: "#55000000"
          }
          GradientStop {
            position: 0.5
            color: "#00000000"
          }
          GradientStop {
            position: 0.9
            color: "#55000000"
          }
          GradientStop {
            position: 1.0
            color: "#ee000000"
          }
        }
    }
}
