import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: parent? parent.width:200; height:30; radius:6
    property string status: "NORMAL"
    color: status=="OVERLOAD"?"#FFCDD2": status=="CRITICAL_LOW_VOLTAGE"?"#FFE0B2":"#C8E6C9"
    Text { anchors.centerIn: parent; text: status; font.bold: true; color: "#333" }
}
