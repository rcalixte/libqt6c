#pragma once
#ifndef EXTRAS_KUNITCONVERSION_LIBUNITCATEGORY_H
#define EXTRAS_KUNITCONVERSION_LIBUNITCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html)

/// k_unitconversion__unitcategory_new constructs a new KUnitConversion::UnitCategory object.
///
KUnitConversion__UnitCategory* k_unitconversion__unitcategory_new();

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html)

/// k_unitconversion__unitcategory_new2 constructs a new KUnitConversion::UnitCategory object.
///
/// @param other KUnitConversion__UnitCategory*
///
KUnitConversion__UnitCategory* k_unitconversion__unitcategory_new2(const void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-eq)
///
/// @param self KUnitConversion__UnitCategory*
/// @param other KUnitConversion__UnitCategory*
///
void k_unitconversion__unitcategory_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-eq-eq)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param other KUnitConversion__UnitCategory*
///
bool k_unitconversion__unitcategory_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-not-eq)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param other KUnitConversion__UnitCategory*
///
bool k_unitconversion__unitcategory_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#isNull)
///
/// @param self const KUnitConversion__UnitCategory*
///
bool k_unitconversion__unitcategory_is_null(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#id)
///
/// @param self const KUnitConversion__UnitCategory*
///
/// @return enum KUnitConversion__CategoryId
///
int32_t k_unitconversion__unitcategory_id(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KUnitConversion__UnitCategory*
///
const char* k_unitconversion__unitcategory_name(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KUnitConversion__UnitCategory*
///
const char* k_unitconversion__unitcategory_description(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#defaultUnit)
///
/// @param self const KUnitConversion__UnitCategory*
///
KUnitConversion__Unit* k_unitconversion__unitcategory_default_unit(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#hasUnit)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param unit const char*
///
bool k_unitconversion__unitcategory_has_unit(const void* self, const char* unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#unit)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param s const char*
///
KUnitConversion__Unit* k_unitconversion__unitcategory_unit(const void* self, const char* s);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#unit)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param unitId enum KUnitConversion__UnitId
///
KUnitConversion__Unit* k_unitconversion__unitcategory_unit2(const void* self, int32_t unitId);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#units)
///
/// @param self const KUnitConversion__UnitCategory*
///
/// @return libqt_list of KUnitConversion__Unit*
///
libqt_list k_unitconversion__unitcategory_units(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#mostCommonUnits)
///
/// @param self const KUnitConversion__UnitCategory*
///
/// @return libqt_list of KUnitConversion__Unit*
///
libqt_list k_unitconversion__unitcategory_most_common_units(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#allUnits)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUnitConversion__UnitCategory*
///
const char** k_unitconversion__unitcategory_all_units(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param value KUnitConversion__Value*
///
KUnitConversion__Value* k_unitconversion__unitcategory_convert(const void* self, const void* value);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param value KUnitConversion__Value*
/// @param toUnit enum KUnitConversion__UnitId
///
KUnitConversion__Value* k_unitconversion__unitcategory_convert2(const void* self, const void* value, int32_t toUnit);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param value KUnitConversion__Value*
/// @param toUnit KUnitConversion__Unit*
///
KUnitConversion__Value* k_unitconversion__unitcategory_convert3(const void* self, const void* value, const void* toUnit);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#hasOnlineConversionTable)
///
/// @param self const KUnitConversion__UnitCategory*
///
bool k_unitconversion__unitcategory_has_online_conversion_table(const void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#syncConversionTable)
///
/// @param self KUnitConversion__UnitCategory*
///
KUnitConversion__UpdateJob* k_unitconversion__unitcategory_sync_conversion_table(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
///
/// @param self const KUnitConversion__UnitCategory*
/// @param value KUnitConversion__Value*
/// @param toUnit const char*
///
KUnitConversion__Value* k_unitconversion__unitcategory_convert22(const void* self, const void* value, const char* toUnit);

/// [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#syncConversionTable)
///
/// @param self KUnitConversion__UnitCategory*
/// @param updateSkipPeriod int64_t of seconds
///
KUnitConversion__UpdateJob* k_unitconversion__unitcategory_sync_conversion_table1(void* self, int64_t updateSkipPeriod);

/// Delete this object from C++ memory.
///
/// @param self KUnitConversion__UnitCategory*
///
void k_unitconversion__unitcategory_delete(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KUnitConversion__UpdateJob*
///
const QMetaObject* k_unitconversion__updatejob_meta_object(const void* self);

/// @param self KUnitConversion__UpdateJob*
/// @param param1 const char*
///
void* k_unitconversion__updatejob_metacast(void* self, const char* param1);

/// @param self KUnitConversion__UpdateJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_unitconversion__updatejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_unitconversion__updatejob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html#finished)
///
/// @param self KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_finished(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html#finished)
///
/// @param self KUnitConversion__UpdateJob*
/// @param callback void func(KUnitConversion__UpdateJob* self)
///
void k_unitconversion__updatejob_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_unitconversion__updatejob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_unitconversion__updatejob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KUnitConversion__UpdateJob*
/// @param event QEvent*
///
bool k_unitconversion__updatejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KUnitConversion__UpdateJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_unitconversion__updatejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KUnitConversion__UpdateJob*
///
const char* k_unitconversion__updatejob_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUnitConversion__UpdateJob*
/// @param name const char*
///
void k_unitconversion__updatejob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KUnitConversion__UpdateJob*
///
bool k_unitconversion__updatejob_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KUnitConversion__UpdateJob*
///
bool k_unitconversion__updatejob_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KUnitConversion__UpdateJob*
///
bool k_unitconversion__updatejob_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KUnitConversion__UpdateJob*
///
bool k_unitconversion__updatejob_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUnitConversion__UpdateJob*
/// @param b bool
///
bool k_unitconversion__updatejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KUnitConversion__UpdateJob*
///
QThread* k_unitconversion__updatejob_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUnitConversion__UpdateJob*
/// @param thread QThread*
///
bool k_unitconversion__updatejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param interval int
///
int32_t k_unitconversion__updatejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param time int64_t of nanoseconds
///
int32_t k_unitconversion__updatejob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param id int
///
void k_unitconversion__updatejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param id enum Qt__TimerId
///
void k_unitconversion__updatejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KUnitConversion__UpdateJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_unitconversion__updatejob_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUnitConversion__UpdateJob*
/// @param parent QObject*
///
void k_unitconversion__updatejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUnitConversion__UpdateJob*
/// @param filterObj QObject*
///
void k_unitconversion__updatejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUnitConversion__UpdateJob*
/// @param obj QObject*
///
void k_unitconversion__updatejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_unitconversion__updatejob_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_unitconversion__updatejob_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_unitconversion__updatejob_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_unitconversion__updatejob_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_unitconversion__updatejob_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
///
bool k_unitconversion__updatejob_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param receiver QObject*
///
bool k_unitconversion__updatejob_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_unitconversion__updatejob_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUnitConversion__UpdateJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_unitconversion__updatejob_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param name const char*
///
QVariant* k_unitconversion__updatejob_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUnitConversion__UpdateJob*
///
const char** k_unitconversion__updatejob_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUnitConversion__UpdateJob*
///
QBindingStorage* k_unitconversion__updatejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KUnitConversion__UpdateJob*
///
const QBindingStorage* k_unitconversion__updatejob_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUnitConversion__UpdateJob*
/// @param callback void func(KUnitConversion__UpdateJob* self)
///
void k_unitconversion__updatejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KUnitConversion__UpdateJob*
///
QObject* k_unitconversion__updatejob_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param classname const char*
///
bool k_unitconversion__updatejob_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_unitconversion__updatejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUnitConversion__UpdateJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_unitconversion__updatejob_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_unitconversion__updatejob_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_unitconversion__updatejob_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_unitconversion__updatejob_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param signal const char*
///
bool k_unitconversion__updatejob_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_unitconversion__updatejob_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_unitconversion__updatejob_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUnitConversion__UpdateJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_unitconversion__updatejob_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUnitConversion__UpdateJob*
/// @param param1 QObject*
///
void k_unitconversion__updatejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUnitConversion__UpdateJob*
/// @param callback void func(KUnitConversion__UpdateJob* self, QObject* param1)
///
void k_unitconversion__updatejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUnitConversion__UpdateJob*
/// @param callback void func(KUnitConversion__UpdateJob* self, const char* objectName)
///
void k_unitconversion__updatejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KUnitConversion__UpdateJob*
///
void k_unitconversion__updatejob_delete(void* self);

#endif
