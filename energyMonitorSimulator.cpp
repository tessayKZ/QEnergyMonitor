#include "energyMonitorSimulator.h"
#include <QRandomGenerator>

EnergyMonitorSimulator::EnergyMonitorSimulator(QObject* parent)
    : QObject(parent)
    , m_timer(new QTimer(this))
    , m_energyUsage(0)
{
    m_timer->setInterval(500);
    connect(m_timer, &QTimer::timeout, this, &EnergyMonitorSimulator::updateValues);
}

// Геттеры
double EnergyMonitorSimulator::currentVoltage()   const { return m_voltage; }
double EnergyMonitorSimulator::currentAmperage()  const { return m_amperage; }
double EnergyMonitorSimulator::powerConsumption() const { return m_power; }
double EnergyMonitorSimulator::energyUsage()      const { return m_energyUsage; }
QString EnergyMonitorSimulator::systemStatus()    const { return m_systemStatus; }

void EnergyMonitorSimulator::updateValues() {
    // random double between 220.0 and 240.0
    double r1 = QRandomGenerator::global()->generateDouble();
    m_voltage = 220.0 + r1 * (240.0 - 220.0);
    emit currentVoltageChanged(m_voltage);

    // random double between 0.5 and 10.0
    double r2 = QRandomGenerator::global()->generateDouble();
    m_amperage = 0.5 + r2 * (10.0 - 0.5);
    emit currentAmperageChanged(m_amperage);

    m_power = m_voltage * m_amperage;
    emit powerConsumptionChanged(m_power);

    m_energyUsage += m_power * 0.5 / 3600.0; // kWh per 0.5s
    emit energyUsageChanged(m_energyUsage);

    if (m_voltage < 225.0)
        m_systemStatus = "CRITICAL_LOW_VOLTAGE";
    else if (m_power > 2000.0)
        m_systemStatus = "OVERLOAD";
    else
        m_systemStatus = "NORMAL";
    emit systemStatusChanged(m_systemStatus);
}

void EnergyMonitorSimulator::startSimulation() {
    m_timer->start();
}

void EnergyMonitorSimulator::stopSimulation() {
    m_timer->stop();
}

void EnergyMonitorSimulator::resetEnergyUsage() {
    m_energyUsage = 0;
    emit energyUsageChanged(m_energyUsage);
}
