import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property real level: 0
    width: 100; height: 50

    Rectangle {
        width: 80; height: 40
        border.width: 2; radius: 4
        color: "transparent"; border.color: "black"

        Rectangle {
            width: (level / 100) * parent.width
            height: parent.height
            color: level > 75 ? "green"
                   : level > 50 ? "yellow"
                   : level > 25 ? "orange"
                   : "red"
        }
    }

    Rectangle {
        x: width; width: 6; height: 20
        anchors.verticalCenter: parent.verticalCenter
        color: "black"
    }

    Text {
        anchors.left: parent.right; anchors.leftMargin: 8
        text: Math.round(level) + "%"
    }
}
