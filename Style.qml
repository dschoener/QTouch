import QtQuick 2.0
pragma Singleton

QtObject {
    // Color styles
    property color colorBackground: "#000000"
    property color colorActive: "#90c4ea"
    property color colorText: "#5ea7e1"

    // Text styles
    property string fontFamily: "Arial"
    property real fontPointSize: 18

    // Position style
    property int marginDefault: 40
    property int marginLeft: marginDefault
    property int spacingDefault: 10
    property int heightTextDefault: 40
}
