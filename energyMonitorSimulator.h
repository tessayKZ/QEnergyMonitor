#pragma once
#include <QObject>
#include <QTimer>

class EnergyMonitorSimulator : public QObject {
    Q_OBJECT
    Q_PROPERTY(double currentVoltage READ currentVoltage NOTIFY currentVoltageChanged)
    Q_PROPERTY(double currentAmperage READ currentAmperage NOTIFY currentAmperageChanged)
    Q_PROPERTY(double powerConsumption READ powerConsumption NOTIFY powerConsumptionChanged)
    Q_PROPERTY(double energyUsage READ energyUsage NOTIFY energyUsageChanged)
    Q_PROPERTY(QString systemStatus READ systemStatus NOTIFY systemStatusChanged)

public:
    explicit EnergyMonitorSimulator(QObject* parent = nullptr);
    Q_INVOKABLE void startSimulation();
    Q_INVOKABLE void stopSimulation();

    double currentVoltage() const { return m_currentVoltage; }
    double currentAmperage() const { return m_currentAmperage; }
    double powerConsumption() const { return m_currentVoltage * m_currentAmperage; }
    double energyUsage() const { return m_energyUsage; }
    QString systemStatus() const { return m_systemStatus; }

signals:
    void currentVoltageChanged();
    void currentAmperageChanged();
    void powerConsumptionChanged();
    void energyUsageChanged();
    void systemStatusChanged();

private slots:
    void updateValues();

private:
    QTimer m_timer;
    double m_currentVoltage = 230.0;
    double m_currentAmperage = 1.0;
    double m_energyUsage = 0.0;
    QString m_systemStatus = "NORMAL";
};
