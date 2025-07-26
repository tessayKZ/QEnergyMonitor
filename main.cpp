#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "energyMonitorSimulator.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    // Регистрация типа для QML
    qmlRegisterType<EnergyMonitorSimulator>("EnergyMonitor", 1, 0, "EnergyMonitorSimulator");

    QQmlApplicationEngine engine;
    // Загружаем главный QML-файл
    engine.load(QUrl(QStringLiteral("qrc:/qml/Main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
