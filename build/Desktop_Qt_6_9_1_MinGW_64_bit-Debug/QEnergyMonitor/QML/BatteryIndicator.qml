import QtQuick 2.15
import QtQuick.Controls 2.15

Row {
    spacing: 4
    property real percentage: 0

    Rectangle {
        width: 40; height: 20; radius: 2; border.color: "#333"; border.width: 2; color: "transparent"
        Rectangle {
            anchors.left: parent.left; anchors.top: parent.top; anchors.bottom: parent.bottom
            width: percentage/100 * (parent.width-4)
            color: percentage>20?"#8BC34A":"#F44336"
            radius: 1
            anchors.leftMargin: 2
        }
    }
    Text { text: percentage.toFixed(0) + "%"; font.pixelSize: 14 }
}
