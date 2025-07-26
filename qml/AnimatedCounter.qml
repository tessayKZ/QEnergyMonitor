import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property real value: 0
    property string prefix: ""
    width: implicitWidth; height: implicitHeight

    Text {
        id: counter
        text: prefix + value.toFixed(3)
        font.pixelSize: 24
    }

    Behavior on value {
        NumberAnimation { duration: 300 }
    }
}
