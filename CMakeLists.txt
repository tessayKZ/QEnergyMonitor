cmake_minimum_required(VERSION 3.16)
project(QEnergyMonitor VERSION 0.1 LANGUAGES CXX)

if(POLICY QTP0004)
    qt_policy(QTP0004 OLD)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick Qml)

qt_add_executable(appQEnergyMonitor
    main.cpp
    energyMonitorSimulator.h
    energyMonitorSimulator.cpp
)

qt_add_qml_module(appQEnergyMonitor
    URI QEnergyMonitor
    VERSION 1.0
    QML_FILES
        qml/Main.qml
        qml/VoltageGauge.qml
        qml/AmperageGauge.qml
        qml/EnergyCounter.qml
        qml/BatteryIndicator.qml
        qml/StatusIndicator.qml
    NO_RESOURCE_TARGET_PATH
)

target_link_libraries(appQEnergyMonitor
    PRIVATE Qt6::Core Qt6::Quick Qt6::Qml
)
