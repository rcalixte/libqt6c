#pragma once
#ifndef SRCQT6C_LIBQSETTINGS_H
#define SRCQT6C_LIBQSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsettings.html

/// q_settings_new constructs a new QSettings object.
///
/// ``` const char* organization ```
QSettings* q_settings_new(const char* organization);

/// q_settings_new2 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization ```
QSettings* q_settings_new2(int64_t scope, const char* organization);

/// q_settings_new3 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization ```
QSettings* q_settings_new3(int64_t format, int64_t scope, const char* organization);

/// q_settings_new4 constructs a new QSettings object.
///
/// ``` const char* fileName, enum QSettings__Format format ```
QSettings* q_settings_new4(const char* fileName, int64_t format);

/// q_settings_new5 constructs a new QSettings object.
///
///
QSettings* q_settings_new5();

/// q_settings_new6 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope ```
QSettings* q_settings_new6(int64_t scope);

/// q_settings_new7 constructs a new QSettings object.
///
/// ``` const char* organization, const char* application ```
QSettings* q_settings_new7(const char* organization, const char* application);

/// q_settings_new8 constructs a new QSettings object.
///
/// ``` const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new8(const char* organization, const char* application, void* parent);

/// q_settings_new9 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization, const char* application ```
QSettings* q_settings_new9(int64_t scope, const char* organization, const char* application);

/// q_settings_new10 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new10(int64_t scope, const char* organization, const char* application, void* parent);

/// q_settings_new11 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization, const char* application ```
QSettings* q_settings_new11(int64_t format, int64_t scope, const char* organization, const char* application);

/// q_settings_new12 constructs a new QSettings object.
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* organization, const char* application, QObject* parent ```
QSettings* q_settings_new12(int64_t format, int64_t scope, const char* organization, const char* application, void* parent);

/// q_settings_new13 constructs a new QSettings object.
///
/// ``` const char* fileName, enum QSettings__Format format, QObject* parent ```
QSettings* q_settings_new13(const char* fileName, int64_t format, void* parent);

/// q_settings_new14 constructs a new QSettings object.
///
/// ``` QObject* parent ```
QSettings* q_settings_new14(void* parent);

/// q_settings_new15 constructs a new QSettings object.
///
/// ``` enum QSettings__Scope scope, QObject* parent ```
QSettings* q_settings_new15(int64_t scope, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSettings* self ```
const QMetaObject* q_settings_meta_object(void* self);

/// ``` QSettings* self, const char* param1 ```
void* q_settings_metacast(void* self, const char* param1);

/// ``` QSettings* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_settings_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSettings* self, int32_t (*slot)(QSettings*, enum QMetaObject__Call, int, void*) ```
void q_settings_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSettings* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_settings_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_settings_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#clear)
///
/// ``` QSettings* self ```
void q_settings_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#sync)
///
/// ``` QSettings* self ```
void q_settings_sync(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#status)
///
/// ``` QSettings* self ```
int64_t q_settings_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
///
/// ``` QSettings* self ```
bool q_settings_is_atomic_sync_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
///
/// ``` QSettings* self, bool enable ```
void q_settings_set_atomic_sync_required(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
///
/// ``` QSettings* self, char* prefix ```
void q_settings_begin_group(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endGroup)
///
/// ``` QSettings* self ```
void q_settings_end_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#group)
///
/// ``` QSettings* self ```
const char* q_settings_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
///
/// ``` QSettings* self, char* prefix ```
int32_t q_settings_begin_read_array(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// ``` QSettings* self, char* prefix ```
void q_settings_begin_write_array(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endArray)
///
/// ``` QSettings* self ```
void q_settings_end_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
///
/// ``` QSettings* self, int i ```
void q_settings_set_array_index(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#allKeys)
///
/// ``` QSettings* self ```
const char** q_settings_all_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childKeys)
///
/// ``` QSettings* self ```
const char** q_settings_child_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childGroups)
///
/// ``` QSettings* self ```
const char** q_settings_child_groups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isWritable)
///
/// ``` QSettings* self ```
bool q_settings_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setValue)
///
/// ``` QSettings* self, char* key, QVariant* value ```
void q_settings_set_value(void* self, char* key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// ``` QSettings* self, char* key, QVariant* defaultValue ```
QVariant* q_settings_value(void* self, char* key, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// ``` QSettings* self, char* key ```
QVariant* q_settings_value_with_key(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#remove)
///
/// ``` QSettings* self, char* key ```
void q_settings_remove(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#contains)
///
/// ``` QSettings* self, char* key ```
bool q_settings_contains(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
///
/// ``` QSettings* self, bool b ```
void q_settings_set_fallbacks_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
///
/// ``` QSettings* self ```
bool q_settings_fallbacks_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fileName)
///
/// ``` QSettings* self ```
const char* q_settings_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#format)
///
/// ``` QSettings* self ```
int64_t q_settings_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#scope)
///
/// ``` QSettings* self ```
int64_t q_settings_scope(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#organizationName)
///
/// ``` QSettings* self ```
const char* q_settings_organization_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#applicationName)
///
/// ``` QSettings* self ```
const char* q_settings_application_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
///
/// ``` enum QSettings__Format format ```
void q_settings_set_default_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
///
///
int64_t q_settings_default_format();

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setPath)
///
/// ``` enum QSettings__Format format, enum QSettings__Scope scope, const char* path ```
void q_settings_set_path(int64_t format, int64_t scope, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// ``` QSettings* self, QEvent* event ```
bool q_settings_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QEvent*) ```
void q_settings_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// Base class method implementation
///
/// ``` QSettings* self, QEvent* event ```
bool q_settings_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_settings_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_settings_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// ``` QSettings* self, char* prefix, int size ```
void q_settings_begin_write_array2(void* self, char* prefix, int size);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSettings* self ```
const char* q_settings_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSettings* self, char* name ```
void q_settings_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSettings* self ```
bool q_settings_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSettings* self ```
bool q_settings_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSettings* self ```
bool q_settings_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSettings* self ```
bool q_settings_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSettings* self, bool b ```
bool q_settings_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSettings* self ```
QThread* q_settings_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSettings* self, QThread* thread ```
bool q_settings_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSettings* self, int interval ```
int32_t q_settings_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSettings* self, int id ```
void q_settings_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSettings* self, enum Qt__TimerId id ```
void q_settings_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSettings* self ```
libqt_list /* of QObject* */ q_settings_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSettings* self, QObject* parent ```
void q_settings_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSettings* self, QObject* filterObj ```
void q_settings_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSettings* self, QObject* obj ```
void q_settings_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_settings_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSettings* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_settings_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_settings_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_settings_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSettings* self ```
void q_settings_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSettings* self ```
void q_settings_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSettings* self, const char* name, QVariant* value ```
bool q_settings_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSettings* self, const char* name ```
QVariant* q_settings_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSettings* self ```
const char** q_settings_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSettings* self ```
QBindingStorage* q_settings_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSettings* self ```
const QBindingStorage* q_settings_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self ```
void q_settings_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self, void (*slot)(QObject*) ```
void q_settings_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSettings* self ```
QObject* q_settings_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSettings* self, const char* classname ```
bool q_settings_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSettings* self ```
void q_settings_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSettings* self, QThread* thread, Disambiguated_t* param2 ```
bool q_settings_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSettings* self, int interval, enum Qt__TimerType timerType ```
int32_t q_settings_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_settings_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSettings* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_settings_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self, QObject* param1 ```
void q_settings_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSettings* self, void (*slot)(QObject*, QObject*) ```
void q_settings_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QObject* watched, QEvent* event ```
bool q_settings_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QObject* watched, QEvent* event ```
bool q_settings_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QObject*, QEvent*) ```
void q_settings_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QTimerEvent* event ```
void q_settings_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QTimerEvent* event ```
void q_settings_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QTimerEvent*) ```
void q_settings_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QChildEvent* event ```
void q_settings_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QChildEvent* event ```
void q_settings_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QChildEvent*) ```
void q_settings_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QEvent* event ```
void q_settings_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QEvent* event ```
void q_settings_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QEvent*) ```
void q_settings_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
void q_settings_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, void (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self ```
QObject* q_settings_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self ```
QObject* q_settings_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, QObject* (*slot)() ```
void q_settings_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self ```
int32_t q_settings_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self ```
int32_t q_settings_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, int32_t (*slot)() ```
void q_settings_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, const char* signal ```
int32_t q_settings_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, const char* signal ```
int32_t q_settings_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, int32_t (*slot)(QSettings*, const char*) ```
void q_settings_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
bool q_settings_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSettings* self, QMetaMethod* signal ```
bool q_settings_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSettings* self, bool (*slot)(QSettings*, QMetaMethod*) ```
void q_settings_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSettings* self, void (*slot)(QObject*, const char*) ```
void q_settings_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#dtor.QSettings)
///
/// Delete this object from C++ memory.
///
/// ``` QSettings* self ```
void q_settings_delete(void* self);

/// https://doc.qt.io/qt-6/qsettings.html#types

typedef enum {
    QSETTINGS_STATUS_NOERROR = 0,
    QSETTINGS_STATUS_ACCESSERROR = 1,
    QSETTINGS_STATUS_FORMATERROR = 2
} QSettings__Status;

typedef enum {
    QSETTINGS_FORMAT_NATIVEFORMAT = 0,
    QSETTINGS_FORMAT_INIFORMAT = 1,
    QSETTINGS_FORMAT_INVALIDFORMAT = 16,
    QSETTINGS_FORMAT_CUSTOMFORMAT1 = 17,
    QSETTINGS_FORMAT_CUSTOMFORMAT2 = 18,
    QSETTINGS_FORMAT_CUSTOMFORMAT3 = 19,
    QSETTINGS_FORMAT_CUSTOMFORMAT4 = 20,
    QSETTINGS_FORMAT_CUSTOMFORMAT5 = 21,
    QSETTINGS_FORMAT_CUSTOMFORMAT6 = 22,
    QSETTINGS_FORMAT_CUSTOMFORMAT7 = 23,
    QSETTINGS_FORMAT_CUSTOMFORMAT8 = 24,
    QSETTINGS_FORMAT_CUSTOMFORMAT9 = 25,
    QSETTINGS_FORMAT_CUSTOMFORMAT10 = 26,
    QSETTINGS_FORMAT_CUSTOMFORMAT11 = 27,
    QSETTINGS_FORMAT_CUSTOMFORMAT12 = 28,
    QSETTINGS_FORMAT_CUSTOMFORMAT13 = 29,
    QSETTINGS_FORMAT_CUSTOMFORMAT14 = 30,
    QSETTINGS_FORMAT_CUSTOMFORMAT15 = 31,
    QSETTINGS_FORMAT_CUSTOMFORMAT16 = 32
} QSettings__Format;

typedef enum {
    QSETTINGS_SCOPE_USERSCOPE = 0,
    QSETTINGS_SCOPE_SYSTEMSCOPE = 1
} QSettings__Scope;

#endif
