/****************************************************************************
** Meta object code from reading C++ file 'energyMonitorSimulator.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../energyMonitorSimulator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'energyMonitorSimulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN22EnergyMonitorSimulatorE_t {};
} // unnamed namespace

template <> constexpr inline auto EnergyMonitorSimulator::qt_create_metaobjectdata<qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EnergyMonitorSimulator",
        "currentVoltageChanged",
        "",
        "currentAmperageChanged",
        "powerConsumptionChanged",
        "energyUsageChanged",
        "systemStatusChanged",
        "updateValues",
        "startSimulation",
        "stopSimulation",
        "currentVoltage",
        "currentAmperage",
        "powerConsumption",
        "energyUsage",
        "systemStatus"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentVoltageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentAmperageChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'powerConsumptionChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'energyUsageChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'systemStatusChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateValues'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'startSimulation'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'stopSimulation'
        QtMocHelpers::MethodData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentVoltage'
        QtMocHelpers::PropertyData<double>(10, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentAmperage'
        QtMocHelpers::PropertyData<double>(11, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'powerConsumption'
        QtMocHelpers::PropertyData<double>(12, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'energyUsage'
        QtMocHelpers::PropertyData<double>(13, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'systemStatus'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EnergyMonitorSimulator, qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EnergyMonitorSimulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>.metaTypes,
    nullptr
} };

void EnergyMonitorSimulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EnergyMonitorSimulator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentVoltageChanged(); break;
        case 1: _t->currentAmperageChanged(); break;
        case 2: _t->powerConsumptionChanged(); break;
        case 3: _t->energyUsageChanged(); break;
        case 4: _t->systemStatusChanged(); break;
        case 5: _t->updateValues(); break;
        case 6: _t->startSimulation(); break;
        case 7: _t->stopSimulation(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EnergyMonitorSimulator::*)()>(_a, &EnergyMonitorSimulator::currentVoltageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EnergyMonitorSimulator::*)()>(_a, &EnergyMonitorSimulator::currentAmperageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EnergyMonitorSimulator::*)()>(_a, &EnergyMonitorSimulator::powerConsumptionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EnergyMonitorSimulator::*)()>(_a, &EnergyMonitorSimulator::energyUsageChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EnergyMonitorSimulator::*)()>(_a, &EnergyMonitorSimulator::systemStatusChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->currentVoltage(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->currentAmperage(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->powerConsumption(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->energyUsage(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->systemStatus(); break;
        default: break;
        }
    }
}

const QMetaObject *EnergyMonitorSimulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnergyMonitorSimulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EnergyMonitorSimulatorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EnergyMonitorSimulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EnergyMonitorSimulator::currentVoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EnergyMonitorSimulator::currentAmperageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EnergyMonitorSimulator::powerConsumptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EnergyMonitorSimulator::energyUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EnergyMonitorSimulator::systemStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
