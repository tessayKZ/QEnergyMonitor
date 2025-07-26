import QtQuick 2.15

Item {
    id: root; width: 120; height: 120
    property real value: 0
    property real minValue: 220
    property real maxValue: 240

    Canvas {
        id: dialCanvas
        anchors.fill: parent
        renderStrategy: Canvas.Threaded
        onPaint: {
            var ctx = getContext("2d");
            ctx.clearRect(0,0,width,height);
            // фон циферблата
            ctx.beginPath();
            ctx.arc(width/2, height/2, width/2-4, 0, 2*Math.PI);
            ctx.fillStyle = "#ddd";
            ctx.fill();
            // стрелка
            var angle = Math.PI*1.25 + (value-minValue)/(maxValue-minValue)*Math.PI*1.5;
            ctx.beginPath();
            ctx.moveTo(width/2, height/2);
            ctx.lineTo(
                width/2 + Math.cos(angle)*(width/2-10),
                height/2 + Math.sin(angle)*(height/2-10)
            );
            ctx.lineWidth = 4;
            ctx.strokeStyle = "#2196F3";
            ctx.stroke();
        }
    }

    // Запрос перерисовки при изменении value
    onValueChanged: dialCanvas.requestPaint()

    Text {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom; anchors.bottomMargin: 4
        text: value.toFixed(1) + " V"
        font.pixelSize: 14
    }
}
