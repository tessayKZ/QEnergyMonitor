import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property real value: 0
    width: 100; height: 100

    Rectangle {
        anchors.fill: parent
        color: "#eee"
        radius: width / 2

        Rectangle {
            width: parent.width
            height: parent.height * (value / 10)
            anchors.bottom: parent.bottom
            color: "blue"
        }
    }

    Text {
        anchors.centerIn: parent
        text: value.toFixed(1) + " A"
    }
}
