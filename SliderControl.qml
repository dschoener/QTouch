import QtQuick 2.5
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import "."

Rectangle {
    id: sliderControl

    property alias value: slider.value
    property alias label: label.text

    color: Style.colorBackground

    RowLayout {
        id: layout

        spacing: Style.spacingDefault
        anchors.fill: parent

        StyledText {
            id: label

            Layout.minimumHeight: Style.heightTextDefault
            verticalAlignment: Text.AlignVCenter
        }

        Slider {
            id: slider

            Layout.minimumHeight: label.height
            Layout.fillWidth: true

            transformOrigin: Item.Center
            orientation: Qt.Horizontal
        }
    }
}
