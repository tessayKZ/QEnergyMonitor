#pragma once
#include <QObject>
#include <QTimer>
#include <QString>

class EnergyMonitorSimulator : public QObject {
    Q_OBJECT
    Q_PROPERTY(double   currentVoltage    READ currentVoltage    NOTIFY currentVoltageChanged)
    Q_PROPERTY(double   currentAmperage   READ currentAmperage   NOTIFY currentAmperageChanged)
    Q_PROPERTY(double   powerConsumption  READ powerConsumption  NOTIFY powerConsumptionChanged)
    Q_PROPERTY(double   energyUsage       READ energyUsage       NOTIFY energyUsageChanged)
    Q_PROPERTY(QString  systemStatus      READ systemStatus      NOTIFY systemStatusChanged)

public:
    explicit EnergyMonitorSimulator(QObject* parent = nullptr);

    double currentVoltage()   const;
    double currentAmperage()  const;
    double powerConsumption() const;
    double energyUsage()      const;
    QString systemStatus()    const;

    Q_INVOKABLE void startSimulation();
    Q_INVOKABLE void stopSimulation();
    Q_INVOKABLE void resetEnergyUsage();

signals:
    void currentVoltageChanged(double newVoltage);
    void currentAmperageChanged(double newAmperage);
    void powerConsumptionChanged(double newPower);
    void energyUsageChanged(double newEnergy);
    void systemStatusChanged(const QString &newStatus);

private:
    void updateValues();
    QTimer*  m_timer;
    double   m_voltage     = 0;
    double   m_amperage    = 0;
    double   m_power       = 0;
    double   m_energyUsage = 0;
    QString  m_systemStatus;
};
