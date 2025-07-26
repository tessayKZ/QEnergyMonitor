import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: 120; height: 20; radius: 4; color: "#eee"
    property real value: 0
    property real minValue: 0.5
    property real maxValue: 10.0

    Rectangle {
        anchors.fill: parent
        anchors.margins: 2
        width: (value-minValue)/(maxValue-minValue) * (parent.width-4)
        color: "#4CAF50"
        radius: 2
    }
    Text {
        anchors.centerIn: parent
        text: value.toFixed(2) + " A"
        font.pixelSize: 14
    }
}
