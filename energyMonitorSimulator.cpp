#include "energyMonitorSimulator.h"
#include <QRandomGenerator>
#include <QTimer>

EnergyMonitorSimulator::EnergyMonitorSimulator(QObject* parent)
    : QObject(parent)
{
    m_timer.setInterval(500);
    connect(&m_timer, &QTimer::timeout, this, &EnergyMonitorSimulator::updateValues);
}

void EnergyMonitorSimulator::startSimulation() {
    if (!m_timer.isActive())
        m_timer.start();
}

void EnergyMonitorSimulator::stopSimulation() {
    if (m_timer.isActive())
        m_timer.stop();
}

void EnergyMonitorSimulator::updateValues() {
    // 1) Напряжение
    const double vMin = 220.0, vMax = 240.0;
    m_currentVoltage = QRandomGenerator::global()->generateDouble() * (vMax - vMin) + vMin;
    emit currentVoltageChanged();

    // 2) Ток
    const double iMin = 0.5, iMax = 10.0;
    m_currentAmperage = QRandomGenerator::global()->generateDouble() * (iMax - iMin) + iMin;
    emit currentAmperageChanged();

    // 3) Мощность
    emit powerConsumptionChanged();

    // 4) Энергопотребление
    double hours = m_timer.interval()/1000.0/3600.0;
    m_energyUsage += m_currentVoltage * m_currentAmperage * hours;
    emit energyUsageChanged();

    // 5) Статус
    QString newStatus;
    double power = m_currentVoltage * m_currentAmperage;
    if (power > 2000.0)             newStatus = "OVERLOAD";
    else if (m_currentVoltage < 225.0) newStatus = "CRITICAL_LOW_VOLTAGE";
    else                            newStatus = "NORMAL";
    if (newStatus != m_systemStatus) {
        m_systemStatus = newStatus;
        emit systemStatusChanged();
    }
}
