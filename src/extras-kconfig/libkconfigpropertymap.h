#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_H
#define EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html)

/// k_configpropertymap_new constructs a new KConfigPropertyMap object.
///
/// @param config KCoreConfigSkeleton*
///
KConfigPropertyMap* k_configpropertymap_new(void* config);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html)

/// k_configpropertymap_new2 constructs a new KConfigPropertyMap object.
///
/// @param config KCoreConfigSkeleton*
/// @param parent QObject*
///
KConfigPropertyMap* k_configpropertymap_new2(void* config, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KConfigPropertyMap*
///
const QMetaObject* k_configpropertymap_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KConfigPropertyMap*
/// @param callback const QMetaObject* func(const KConfigPropertyMap* self)
///
void k_configpropertymap_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KConfigPropertyMap*
///
const QMetaObject* k_configpropertymap_super_meta_object(const void* self);

/// @param self KConfigPropertyMap*
/// @param param1 const char*
///
void* k_configpropertymap_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KConfigPropertyMap*
/// @param callback void* func(KConfigPropertyMap* self, const char* param1)
///
void k_configpropertymap_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KConfigPropertyMap*
/// @param param1 const char*
///
void* k_configpropertymap_super_metacast(void* self, const char* param1);

/// @param self KConfigPropertyMap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configpropertymap_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KConfigPropertyMap*
/// @param callback int32_t func(KConfigPropertyMap* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_configpropertymap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KConfigPropertyMap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configpropertymap_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_configpropertymap_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#isNotify)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_is_notify(const void* self);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#setNotify)
///
/// @param self KConfigPropertyMap*
/// @param notify bool
///
void k_configpropertymap_set_notify(void* self, bool notify);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#isImmutable)
///
/// @param self const KConfigPropertyMap*
/// @param key const char*
///
bool k_configpropertymap_is_immutable(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#writeConfig)
///
/// @param self KConfigPropertyMap*
///
void k_configpropertymap_write_config(void* self);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#updateValue)
///
/// @param self KConfigPropertyMap*
/// @param key const char*
/// @param input QVariant*
///
QVariant* k_configpropertymap_update_value(void* self, const char* key, const void* input);

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#updateValue)
///
/// Allows for overriding the related default method
///
/// @param self KConfigPropertyMap*
/// @param callback QVariant* func(KConfigPropertyMap* self, const char* key, QVariant* input)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_configpropertymap_on_update_value(void* self, QVariant* (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#updateValue)
///
/// Base class method implementation
///
/// @param self KConfigPropertyMap*
/// @param key const char*
/// @param input QVariant*
///
QVariant* k_configpropertymap_super_update_value(void* self, const char* key, const void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_configpropertymap_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_configpropertymap_tr3(const char* s, const char* c, int n);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#value)
///
/// @param self const KConfigPropertyMap*
/// @param key const char*
///
QVariant* k_configpropertymap_value(const void* self, const char* key);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
///
/// @param self KConfigPropertyMap*
/// @param key const char*
/// @param value QVariant*
///
void k_configpropertymap_insert(void* self, const char* key, const void* value);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
///
/// @param self KConfigPropertyMap*
/// @param values libqt_map of const char* to QVariant*
///
void k_configpropertymap_insert2(void* self, libqt_map values);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#clear)
///
/// @param self KConfigPropertyMap*
/// @param key const char*
///
void k_configpropertymap_clear(void* self, const char* key);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#freeze)
///
/// @param self KConfigPropertyMap*
///
void k_configpropertymap_freeze(void* self);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigPropertyMap*
///
const char** k_configpropertymap_keys(const void* self);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#count)
///
/// @param self const KConfigPropertyMap*
///
int32_t k_configpropertymap_count(const void* self);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#size)
///
/// @param self const KConfigPropertyMap*
///
int32_t k_configpropertymap_size(const void* self);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#isEmpty)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_is_empty(const void* self);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#contains)
///
/// @param self const KConfigPropertyMap*
/// @param key const char*
///
bool k_configpropertymap_contains(const void* self, const char* key);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
///
/// @param self KConfigPropertyMap*
/// @param key const char*
///
QVariant* k_configpropertymap_operator_subscript(void* self, const char* key);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
///
/// @param self const KConfigPropertyMap*
/// @param key const char*
///
QVariant* k_configpropertymap_operator_subscript2(const void* self, const char* key);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
///
/// @param self KConfigPropertyMap*
/// @param key const char*
/// @param value QVariant*
///
void k_configpropertymap_value_changed(void* self, const char* key, const void* value);

/// Inherited from QQmlPropertyMap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, const char* key, QVariant* value)
///
void k_configpropertymap_on_value_changed(void* self, void (*callback)(void*, const char*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigPropertyMap*
///
const char* k_configpropertymap_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KConfigPropertyMap*
/// @param name const char*
///
void k_configpropertymap_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KConfigPropertyMap*
/// @param b bool
///
bool k_configpropertymap_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KConfigPropertyMap*
///
QThread* k_configpropertymap_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigPropertyMap*
/// @param thread QThread*
///
bool k_configpropertymap_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigPropertyMap*
/// @param interval int
///
int32_t k_configpropertymap_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigPropertyMap*
/// @param time int64_t of nanoseconds
///
int32_t k_configpropertymap_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigPropertyMap*
/// @param id int
///
void k_configpropertymap_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigPropertyMap*
/// @param id enum Qt__TimerId
///
void k_configpropertymap_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KConfigPropertyMap*
///
/// @return libqt_list of QObject*
///
libqt_list k_configpropertymap_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KConfigPropertyMap*
/// @param parent QObject*
///
void k_configpropertymap_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KConfigPropertyMap*
/// @param filterObj QObject*
///
void k_configpropertymap_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KConfigPropertyMap*
/// @param obj QObject*
///
void k_configpropertymap_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_configpropertymap_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_configpropertymap_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KConfigPropertyMap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_configpropertymap_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configpropertymap_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_configpropertymap_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
///
bool k_configpropertymap_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
/// @param receiver QObject*
///
bool k_configpropertymap_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_configpropertymap_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KConfigPropertyMap*
///
void k_configpropertymap_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KConfigPropertyMap*
///
void k_configpropertymap_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KConfigPropertyMap*
/// @param name const char*
/// @param value QVariant*
///
bool k_configpropertymap_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KConfigPropertyMap*
/// @param name const char*
///
QVariant* k_configpropertymap_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigPropertyMap*
///
const char** k_configpropertymap_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigPropertyMap*
///
QBindingStorage* k_configpropertymap_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KConfigPropertyMap*
///
const QBindingStorage* k_configpropertymap_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigPropertyMap*
///
void k_configpropertymap_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self)
///
void k_configpropertymap_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KConfigPropertyMap*
///
QObject* k_configpropertymap_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KConfigPropertyMap*
/// @param classname const char*
///
bool k_configpropertymap_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KConfigPropertyMap*
///
void k_configpropertymap_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigPropertyMap*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_configpropertymap_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigPropertyMap*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_configpropertymap_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_configpropertymap_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_configpropertymap_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KConfigPropertyMap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_configpropertymap_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
/// @param signal const char*
///
bool k_configpropertymap_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_configpropertymap_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configpropertymap_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigPropertyMap*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configpropertymap_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigPropertyMap*
/// @param param1 QObject*
///
void k_configpropertymap_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QObject* param1)
///
void k_configpropertymap_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QEvent*
///
bool k_configpropertymap_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QEvent*
///
bool k_configpropertymap_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback bool func(KConfigPropertyMap* self, QEvent* event)
///
void k_configpropertymap_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configpropertymap_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configpropertymap_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback bool func(KConfigPropertyMap* self, QObject* watched, QEvent* event)
///
void k_configpropertymap_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QTimerEvent*
///
void k_configpropertymap_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QTimerEvent*
///
void k_configpropertymap_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QTimerEvent* event)
///
void k_configpropertymap_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QChildEvent*
///
void k_configpropertymap_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QChildEvent*
///
void k_configpropertymap_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QChildEvent* event)
///
void k_configpropertymap_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QEvent*
///
void k_configpropertymap_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param event QEvent*
///
void k_configpropertymap_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QEvent* event)
///
void k_configpropertymap_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param signal QMetaMethod*
///
void k_configpropertymap_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param signal QMetaMethod*
///
void k_configpropertymap_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QMetaMethod* signal)
///
void k_configpropertymap_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param signal QMetaMethod*
///
void k_configpropertymap_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param signal QMetaMethod*
///
void k_configpropertymap_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, QMetaMethod* signal)
///
void k_configpropertymap_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigPropertyMap*
///
QObject* k_configpropertymap_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigPropertyMap*
///
QObject* k_configpropertymap_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback QObject* func(KConfigPropertyMap* self)
///
void k_configpropertymap_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigPropertyMap*
///
int32_t k_configpropertymap_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigPropertyMap*
///
int32_t k_configpropertymap_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback int32_t func(KConfigPropertyMap* self)
///
void k_configpropertymap_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigPropertyMap*
/// @param signal const char*
///
int32_t k_configpropertymap_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigPropertyMap*
/// @param signal const char*
///
int32_t k_configpropertymap_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback int32_t func(KConfigPropertyMap* self, const char* signal)
///
void k_configpropertymap_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigPropertyMap*
/// @param signal QMetaMethod*
///
bool k_configpropertymap_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigPropertyMap*
/// @param signal QMetaMethod*
///
bool k_configpropertymap_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigPropertyMap*
/// @param callback bool func(KConfigPropertyMap* self, QMetaMethod* signal)
///
void k_configpropertymap_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KConfigPropertyMap*
/// @param callback void func(KConfigPropertyMap* self, const char* objectName)
///
void k_configpropertymap_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfigpropertymap.html#dtor.KConfigPropertyMap)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigPropertyMap*
///
void k_configpropertymap_delete(void* self);

#endif
