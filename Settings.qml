import QtQuick 2.0
import QtQuick.Layouts 1.1
import "."

Rectangle {
    id: settings

    color: Style.colorBackground

    RowLayout {
        id: layout

        spacing: Style.spacingDefault
        anchors.fill: parent
        anchors.margins: Style.marginDefault

        SliderControl {
            label: "Brightness:"

            Layout.preferredWidth: 600
            Layout.minimumHeight: Style.heightTextDefault
        }
    }
}
