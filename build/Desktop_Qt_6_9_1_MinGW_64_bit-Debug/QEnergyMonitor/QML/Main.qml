import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import EnergyMonitor 1.0

ApplicationWindow {
    id: window
    visible: true
    width: 360
    height: 640
    title: "Панель мониторинга энергии"

    Material.theme: Material.Light
    Material.primary: Material.Blue
    Material.accent: Material.DeepOrange

    EnergyMonitorSimulator { id: sim }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 16

        RowLayout {
            spacing: 8
            Label {
                text: "Симуляция:"
                Layout.alignment: Qt.AlignVLeft
                font.pixelSize: 20
                font.bold: true
            }
            Item { Layout.fillWidth: true }
            Button {
                text: "Старт"
                Layout.preferredWidth: 80
                onClicked: sim.startSimulation()
            }
            Button {
                text: "Стоп"
                Layout.preferredWidth: 80
                onClicked: sim.stopSimulation()
            }
        }

        RowLayout {
            spacing: 16
            VoltageGauge {
                value: sim.currentVoltage
                Layout.preferredWidth: 120
                Layout.preferredHeight: 120
            }
            AmperageGauge {
                value: sim.currentAmperage
                Layout.fillWidth: true
                Layout.preferredHeight: 24
            }
        }

        RowLayout {
            spacing: 8
            Label { text: "Power:"; font.pixelSize: 16 }
            Label {
                text: sim.powerConsumption.toFixed(1) + " W"
                font.pixelSize: 16
                color: Material.accent
                font.bold: true
            }
        }

        RowLayout {
            spacing: 8
            Label { text: "Energy Usage:"; font.pixelSize: 16 }
            EnergyCounter { value: sim.energyUsage }
        }

        ColumnLayout {
            spacing: 4
            Layout.alignment: Qt.AlignHCenter
            BatteryIndicator { percentage: (sim.energyUsage * 10) % 100 }
            StatusIndicator { status: sim.systemStatus }
        }
    }

    Connections {
        target: sim
        function onSystemStatusChanged() {
            console.log("[Signal] Status changed:", sim.systemStatus)
        }
    }
}
