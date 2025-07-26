import QtQuick 2.15
import QtQuick.Controls 2.15

Text {
    id: counterText
    property real value: 0
    font.pixelSize: 16
    Behavior on text { NumberAnimation { duration: 400; easing.type: Easing.InOutQuad }}
    text: value.toFixed(3) + " kWh"
}
