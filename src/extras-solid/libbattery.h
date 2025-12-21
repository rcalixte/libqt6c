#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBBATTERY_H
#define SRC_EXTRAS_SOLID_QT6C_LIBBATTERY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-battery.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__Battery*
///
const QMetaObject* k_solid__battery_meta_object(void* self);

/// @param self Solid__Battery*
/// @param param1 const char*
///
void* k_solid__battery_metacast(void* self, const char* param1);

/// @param self Solid__Battery*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__battery_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_solid__battery_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-battery.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__battery_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-battery.html#isPresent)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_present(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#type)
///
/// @param self Solid__Battery*
///
/// @return enum Solid__Battery__BatteryType
///
int32_t k_solid__battery_type(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargePercent)
///
/// @param self Solid__Battery*
///
int32_t k_solid__battery_charge_percent(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#capacity)
///
/// @param self Solid__Battery*
///
int32_t k_solid__battery_capacity(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#cycleCount)
///
/// @param self Solid__Battery*
///
int32_t k_solid__battery_cycle_count(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#isRechargeable)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_rechargeable(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#isPowerSupply)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_power_supply(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargeState)
///
/// @param self Solid__Battery*
///
/// @return enum Solid__Battery__ChargeState
///
int32_t k_solid__battery_charge_state(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmpty)
///
/// @param self Solid__Battery*
///
long long k_solid__battery_time_to_empty(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToFull)
///
/// @param self Solid__Battery*
///
long long k_solid__battery_time_to_full(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#technology)
///
/// @param self Solid__Battery*
///
/// @return enum Solid__Battery__Technology
///
int32_t k_solid__battery_technology(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energy)
///
/// @param self Solid__Battery*
///
double k_solid__battery_energy(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFull)
///
/// @param self Solid__Battery*
///
double k_solid__battery_energy_full(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesign)
///
/// @param self Solid__Battery*
///
double k_solid__battery_energy_full_design(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyRate)
///
/// @param self Solid__Battery*
///
double k_solid__battery_energy_rate(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#voltage)
///
/// @param self Solid__Battery*
///
double k_solid__battery_voltage(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#temperature)
///
/// @param self Solid__Battery*
///
double k_solid__battery_temperature(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#serial)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Solid__Battery*
///
const char* k_solid__battery_serial(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#remainingTime)
///
/// @param self Solid__Battery*
///
long long k_solid__battery_remaining_time(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
///
/// @param self Solid__Battery*
/// @param newState bool
/// @param udi const char*
///
void k_solid__battery_present_state_changed(void* self, bool newState, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, bool newState, const char* udi)
///
void k_solid__battery_on_present_state_changed(void* self, void (*callback)(void*, bool, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
///
/// @param self Solid__Battery*
/// @param value int
/// @param udi const char*
///
void k_solid__battery_charge_percent_changed(void* self, int value, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, int value, const char* udi)
///
void k_solid__battery_on_charge_percent_changed(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
///
/// @param self Solid__Battery*
/// @param value int
/// @param udi const char*
///
void k_solid__battery_capacity_changed(void* self, int value, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, int value, const char* udi)
///
void k_solid__battery_on_capacity_changed(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
///
/// @param self Solid__Battery*
/// @param value int
/// @param udi const char*
///
void k_solid__battery_cycle_count_changed(void* self, int value, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, int value, const char* udi)
///
void k_solid__battery_on_cycle_count_changed(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
///
/// @param self Solid__Battery*
/// @param newState bool
/// @param udi const char*
///
void k_solid__battery_power_supply_state_changed(void* self, bool newState, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, bool newState, const char* udi)
///
void k_solid__battery_on_power_supply_state_changed(void* self, void (*callback)(void*, bool, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
///
/// @param self Solid__Battery*
/// @param newState int
///
void k_solid__battery_charge_state_changed(void* self, int newState);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, int newState)
///
void k_solid__battery_on_charge_state_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
///
/// @param self Solid__Battery*
/// @param time long long
/// @param udi const char*
///
void k_solid__battery_time_to_empty_changed(void* self, long long time, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, long long time, const char* udi)
///
void k_solid__battery_on_time_to_empty_changed(void* self, void (*callback)(void*, long long, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
///
/// @param self Solid__Battery*
/// @param time long long
/// @param udi const char*
///
void k_solid__battery_time_to_full_changed(void* self, long long time, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, long long time, const char* udi)
///
void k_solid__battery_on_time_to_full_changed(void* self, void (*callback)(void*, long long, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
///
/// @param self Solid__Battery*
/// @param energy double
/// @param udi const char*
///
void k_solid__battery_energy_changed(void* self, double energy, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double energy, const char* udi)
///
void k_solid__battery_on_energy_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
///
/// @param self Solid__Battery*
/// @param energy double
/// @param udi const char*
///
void k_solid__battery_energy_full_changed(void* self, double energy, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double energy, const char* udi)
///
void k_solid__battery_on_energy_full_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
///
/// @param self Solid__Battery*
/// @param energy double
/// @param udi const char*
///
void k_solid__battery_energy_full_design_changed(void* self, double energy, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double energy, const char* udi)
///
void k_solid__battery_on_energy_full_design_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
///
/// @param self Solid__Battery*
/// @param energyRate double
/// @param udi const char*
///
void k_solid__battery_energy_rate_changed(void* self, double energyRate, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double energyRate, const char* udi)
///
void k_solid__battery_on_energy_rate_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
///
/// @param self Solid__Battery*
/// @param voltage double
/// @param udi const char*
///
void k_solid__battery_voltage_changed(void* self, double voltage, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double voltage, const char* udi)
///
void k_solid__battery_on_voltage_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
///
/// @param self Solid__Battery*
/// @param temperature double
/// @param udi const char*
///
void k_solid__battery_temperature_changed(void* self, double temperature, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, double temperature, const char* udi)
///
void k_solid__battery_on_temperature_changed(void* self, void (*callback)(void*, double, const char*));

/// [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
///
/// @param self Solid__Battery*
/// @param time long long
/// @param udi const char*
///
void k_solid__battery_remaining_time_changed(void* self, long long time, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, long long time, const char* udi)
///
void k_solid__battery_on_remaining_time_changed(void* self, void (*callback)(void*, long long, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__battery_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__battery_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
///
/// @param self Solid__Battery*
/// @param newState int
/// @param udi const char*
///
void k_solid__battery_charge_state_changed2(void* self, int newState, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, int newState, const char* udi)
///
void k_solid__battery_on_charge_state_changed2(void* self, void (*callback)(void*, int, const char*));

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__battery_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__battery_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__battery_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__Battery*
/// @param event QEvent*
///
bool k_solid__battery_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__Battery*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__battery_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Solid__Battery*
///
const char* k_solid__battery_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__Battery*
/// @param name char*
///
void k_solid__battery_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__Battery*
///
bool k_solid__battery_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__Battery*
/// @param b bool
///
bool k_solid__battery_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__Battery*
///
QThread* k_solid__battery_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Battery*
/// @param thread QThread*
///
bool k_solid__battery_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Battery*
/// @param interval int
///
int32_t k_solid__battery_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Battery*
/// @param id int
///
void k_solid__battery_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Battery*
/// @param id enum Qt__TimerId
///
void k_solid__battery_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__Battery*
///
libqt_list /* of QObject* */ k_solid__battery_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__Battery*
/// @param parent QObject*
///
void k_solid__battery_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__Battery*
/// @param filterObj QObject*
///
void k_solid__battery_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__Battery*
/// @param obj QObject*
///
void k_solid__battery_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__battery_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Battery*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__battery_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__battery_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__battery_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__Battery*
///
void k_solid__battery_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__Battery*
///
void k_solid__battery_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__Battery*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__battery_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__Battery*
/// @param name const char*
///
QVariant* k_solid__battery_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Solid__Battery*
///
const char** k_solid__battery_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Battery*
///
QBindingStorage* k_solid__battery_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Battery*
///
const QBindingStorage* k_solid__battery_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Battery*
///
void k_solid__battery_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self)
///
void k_solid__battery_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__Battery*
///
QObject* k_solid__battery_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__Battery*
/// @param classname const char*
///
bool k_solid__battery_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__Battery*
///
void k_solid__battery_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Battery*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_solid__battery_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Battery*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__battery_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__battery_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Battery*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__battery_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Battery*
/// @param param1 QObject*
///
void k_solid__battery_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, QObject* param1)
///
void k_solid__battery_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__Battery*
/// @param callback void func(Solid__Battery* self, const char* objectName)
///
void k_solid__battery_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__Battery*
///
void k_solid__battery_delete(void* self);

/// [Upstream resources](https://api.kde.org/solid-battery.html#public-types)

typedef enum {
    SOLID_BATTERY_BATTERYTYPE_UNKNOWNBATTERY = 0,
    SOLID_BATTERY_BATTERYTYPE_PDABATTERY = 1,
    SOLID_BATTERY_BATTERYTYPE_UPSBATTERY = 2,
    SOLID_BATTERY_BATTERYTYPE_PRIMARYBATTERY = 3,
    SOLID_BATTERY_BATTERYTYPE_MOUSEBATTERY = 4,
    SOLID_BATTERY_BATTERYTYPE_KEYBOARDBATTERY = 5,
    SOLID_BATTERY_BATTERYTYPE_KEYBOARDMOUSEBATTERY = 6,
    SOLID_BATTERY_BATTERYTYPE_CAMERABATTERY = 7,
    SOLID_BATTERY_BATTERYTYPE_PHONEBATTERY = 8,
    SOLID_BATTERY_BATTERYTYPE_MONITORBATTERY = 9,
    SOLID_BATTERY_BATTERYTYPE_GAMINGINPUTBATTERY = 10,
    SOLID_BATTERY_BATTERYTYPE_BLUETOOTHBATTERY = 11,
    SOLID_BATTERY_BATTERYTYPE_TABLETBATTERY = 12,
    SOLID_BATTERY_BATTERYTYPE_HEADPHONEBATTERY = 13,
    SOLID_BATTERY_BATTERYTYPE_HEADSETBATTERY = 14,
    SOLID_BATTERY_BATTERYTYPE_TOUCHPADBATTERY = 15
} Solid__Battery__BatteryType;

/// [Upstream resources](https://api.kde.org/solid-battery.html#public-types)

typedef enum {
    SOLID_BATTERY_CHARGESTATE_NOCHARGE = 0,
    SOLID_BATTERY_CHARGESTATE_CHARGING = 1,
    SOLID_BATTERY_CHARGESTATE_DISCHARGING = 2,
    SOLID_BATTERY_CHARGESTATE_FULLYCHARGED = 3
} Solid__Battery__ChargeState;

/// [Upstream resources](https://api.kde.org/solid-battery.html#public-types)

typedef enum {
    SOLID_BATTERY_TECHNOLOGY_UNKNOWNTECHNOLOGY = 0,
    SOLID_BATTERY_TECHNOLOGY_LITHIUMION = 1,
    SOLID_BATTERY_TECHNOLOGY_LITHIUMPOLYMER = 2,
    SOLID_BATTERY_TECHNOLOGY_LITHIUMIRONPHOSPHATE = 3,
    SOLID_BATTERY_TECHNOLOGY_LEADACID = 4,
    SOLID_BATTERY_TECHNOLOGY_NICKELCADMIUM = 5,
    SOLID_BATTERY_TECHNOLOGY_NICKELMETALHYDRIDE = 6
} Solid__Battery__Technology;

#endif
