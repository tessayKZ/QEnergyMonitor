import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property string status: "NORMAL"
    width: implicitWidth; height: implicitHeight

    Rectangle {
        anchors.fill: parent
        radius: 4
        color: status == "OVERLOAD" ? "red"
               : status == "CRITICAL_LOW_VOLTAGE" ? "orange"
               : "green"
    }

    Text {
        anchors.centerIn: parent
        text: status
        color: "white"
        font.bold: true
    }
}
