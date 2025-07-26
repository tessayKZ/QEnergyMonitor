#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "energyMonitorSimulator.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    qmlRegisterType<EnergyMonitorSimulator>("QEnergyMonitor", 1, 0, "EnergyMonitorSimulator");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/qml/Main.qml")));
    return app.exec();
}
