import QtQuick 2.15
import QtQuick.Controls 2.15
import QEnergyMonitor 1.0

ApplicationWindow {
    visible: true
    width: 360; height: 640
    title: "Динамическая панель мониторинга энергии."

    EnergyMonitorSimulator { id: simulator }

    Column {
        anchors.fill: parent; anchors.margins: 16; spacing: 12

        Row { spacing: 12
            VoltageGauge { value: simulator.currentVoltage }
            CurrentGauge { value: simulator.currentAmperage }
        }

        Text { text: "Power: " + simulator.powerConsumption.toFixed(2) + " W" }

        AnimatedCounter { value: simulator.energyUsage; prefix: "Energy (kWh): " }

        BatteryIndicator { level: (simulator.currentVoltage - 220) / 20 * 100 }

        SystemStatusIndicator { status: simulator.systemStatus }

        Row { spacing: 20; anchors.horizontalCenter: parent.horizontalCenter
            Button { text: "Старт симуляции"; onClicked: simulator.startSimulation() }
            Button { text: "Стоп симуляции"; onClicked: simulator.stopSimulation() }
        }
    }
}
