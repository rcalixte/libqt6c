#pragma once
#ifndef SRCQT6C_LIBQSETTINGS_H
#define SRCQT6C_LIBQSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsettings.html

/// q_settings_new constructs a new QSettings object.
///
/// @param organization const char*
QSettings* q_settings_new(const char* organization);

/// q_settings_new2 constructs a new QSettings object.
///
/// @param scope enum QSettings__Scope
/// @param organization const char*
QSettings* q_settings_new2(int64_t scope, const char* organization);

/// q_settings_new3 constructs a new QSettings object.
///
/// @param format enum QSettings__Format
/// @param scope enum QSettings__Scope
/// @param organization const char*
QSettings* q_settings_new3(int64_t format, int64_t scope, const char* organization);

/// q_settings_new4 constructs a new QSettings object.
///
/// @param fileName const char*
/// @param format enum QSettings__Format
QSettings* q_settings_new4(const char* fileName, int64_t format);

/// q_settings_new5 constructs a new QSettings object.
///
QSettings* q_settings_new5();

/// q_settings_new6 constructs a new QSettings object.
///
/// @param scope enum QSettings__Scope
QSettings* q_settings_new6(int64_t scope);

/// q_settings_new7 constructs a new QSettings object.
///
/// @param organization const char*
/// @param application const char*
QSettings* q_settings_new7(const char* organization, const char* application);

/// q_settings_new8 constructs a new QSettings object.
///
/// @param organization const char*
/// @param application const char*
/// @param parent QObject*
QSettings* q_settings_new8(const char* organization, const char* application, void* parent);

/// q_settings_new9 constructs a new QSettings object.
///
/// @param scope enum QSettings__Scope
/// @param organization const char*
/// @param application const char*
QSettings* q_settings_new9(int64_t scope, const char* organization, const char* application);

/// q_settings_new10 constructs a new QSettings object.
///
/// @param scope enum QSettings__Scope
/// @param organization const char*
/// @param application const char*
/// @param parent QObject*
QSettings* q_settings_new10(int64_t scope, const char* organization, const char* application, void* parent);

/// q_settings_new11 constructs a new QSettings object.
///
/// @param format enum QSettings__Format
/// @param scope enum QSettings__Scope
/// @param organization const char*
/// @param application const char*
QSettings* q_settings_new11(int64_t format, int64_t scope, const char* organization, const char* application);

/// q_settings_new12 constructs a new QSettings object.
///
/// @param format enum QSettings__Format
/// @param scope enum QSettings__Scope
/// @param organization const char*
/// @param application const char*
/// @param parent QObject*
QSettings* q_settings_new12(int64_t format, int64_t scope, const char* organization, const char* application, void* parent);

/// q_settings_new13 constructs a new QSettings object.
///
/// @param fileName const char*
/// @param format enum QSettings__Format
/// @param parent QObject*
QSettings* q_settings_new13(const char* fileName, int64_t format, void* parent);

/// q_settings_new14 constructs a new QSettings object.
///
/// @param parent QObject*
QSettings* q_settings_new14(void* parent);

/// q_settings_new15 constructs a new QSettings object.
///
/// @param scope enum QSettings__Scope
/// @param parent QObject*
QSettings* q_settings_new15(int64_t scope, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSettings*
const QMetaObject* q_settings_meta_object(void* self);

/// @param self QSettings*
/// @param param1 const char*
void* q_settings_metacast(void* self, const char* param1);

/// @param self QSettings*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_settings_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSettings*
/// @param callback int32_t fn(QSettings*, enum QMetaObject__Call, int, void*)
void q_settings_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSettings*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_settings_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_settings_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#clear)
///
/// @param self QSettings*
void q_settings_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#sync)
///
/// @param self QSettings*
void q_settings_sync(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#status)
///
/// @param self QSettings*
///
/// @return enum QSettings__Status
int64_t q_settings_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
///
/// @param self QSettings*
bool q_settings_is_atomic_sync_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
///
/// @param self QSettings*
/// @param enable bool
void q_settings_set_atomic_sync_required(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
///
/// @param self QSettings*
/// @param prefix char*
void q_settings_begin_group(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endGroup)
///
/// @param self QSettings*
void q_settings_end_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char* q_settings_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
///
/// @param self QSettings*
/// @param prefix char*
int32_t q_settings_begin_read_array(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// @param self QSettings*
/// @param prefix char*
void q_settings_begin_write_array(void* self, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endArray)
///
/// @param self QSettings*
void q_settings_end_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
///
/// @param self QSettings*
/// @param i int
void q_settings_set_array_index(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#allKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char** q_settings_all_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char** q_settings_child_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childGroups)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char** q_settings_child_groups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isWritable)
///
/// @param self QSettings*
bool q_settings_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setValue)
///
/// @param self QSettings*
/// @param key char*
/// @param value QVariant*
void q_settings_set_value(void* self, char* key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// @param self QSettings*
/// @param key char*
/// @param defaultValue QVariant*
QVariant* q_settings_value(void* self, char* key, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
///
/// @param self QSettings*
/// @param key char*
QVariant* q_settings_value2(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#remove)
///
/// @param self QSettings*
/// @param key char*
void q_settings_remove(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#contains)
///
/// @param self QSettings*
/// @param key char*
bool q_settings_contains(void* self, char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
///
/// @param self QSettings*
/// @param b bool
void q_settings_set_fallbacks_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
///
/// @param self QSettings*
bool q_settings_fallbacks_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char* q_settings_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#format)
///
/// @param self QSettings*
///
/// @return enum QSettings__Format
int64_t q_settings_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#scope)
///
/// @param self QSettings*
///
/// @return enum QSettings__Scope
int64_t q_settings_scope(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#organizationName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char* q_settings_organization_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#applicationName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char* q_settings_application_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
///
/// @param format enum QSettings__Format
void q_settings_set_default_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
///
///
/// @return enum QSettings__Format
int64_t q_settings_default_format();

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setPath)
///
/// @param format enum QSettings__Format
/// @param scope enum QSettings__Scope
/// @param path const char*
void q_settings_set_path(int64_t format, int64_t scope, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// @param self QSettings*
/// @param event QEvent*
bool q_settings_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSettings*
/// @param callback bool fn(QSettings*, QEvent*)
void q_settings_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
///
/// Base class method implementation
///
/// @param self QSettings*
/// @param event QEvent*
bool q_settings_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_settings_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_settings_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
///
/// @param self QSettings*
/// @param prefix char*
/// @param size int
void q_settings_begin_write_array2(void* self, char* prefix, int size);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char* q_settings_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSettings*
/// @param name char*
void q_settings_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSettings*
bool q_settings_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSettings*
bool q_settings_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSettings*
bool q_settings_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSettings*
bool q_settings_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSettings*
/// @param b bool
bool q_settings_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSettings*
QThread* q_settings_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSettings*
/// @param thread QThread*
bool q_settings_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSettings*
/// @param interval int
int32_t q_settings_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSettings*
/// @param id int
void q_settings_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSettings*
/// @param id enum Qt__TimerId
void q_settings_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSettings*
libqt_list /* of QObject* */ q_settings_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSettings*
/// @param parent QObject*
void q_settings_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSettings*
/// @param filterObj QObject*
void q_settings_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSettings*
/// @param obj QObject*
void q_settings_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_settings_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSettings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_settings_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_settings_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_settings_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSettings*
void q_settings_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSettings*
void q_settings_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSettings*
/// @param name const char*
/// @param value QVariant*
bool q_settings_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSettings*
/// @param name const char*
QVariant* q_settings_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSettings*
const char** q_settings_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSettings*
QBindingStorage* q_settings_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSettings*
const QBindingStorage* q_settings_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSettings*
void q_settings_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSettings*
/// @param callback void fn(QSettings*)
void q_settings_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSettings*
QObject* q_settings_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSettings*
/// @param classname const char*
bool q_settings_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSettings*
void q_settings_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSettings*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_settings_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSettings*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_settings_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_settings_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSettings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_settings_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSettings*
/// @param param1 QObject*
void q_settings_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QObject*)
void q_settings_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param watched QObject*
/// @param event QEvent*
bool q_settings_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param watched QObject*
/// @param event QEvent*
bool q_settings_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback bool fn(QSettings*, QObject*, QEvent*)
void q_settings_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param event QTimerEvent*
void q_settings_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param event QTimerEvent*
void q_settings_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QTimerEvent*)
void q_settings_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param event QChildEvent*
void q_settings_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param event QChildEvent*
void q_settings_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QChildEvent*)
void q_settings_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param event QEvent*
void q_settings_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param event QEvent*
void q_settings_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QEvent*)
void q_settings_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
void q_settings_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
void q_settings_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QMetaMethod*)
void q_settings_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
void q_settings_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
void q_settings_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, QMetaMethod*)
void q_settings_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
QObject* q_settings_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
QObject* q_settings_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback QObject* fn()
void q_settings_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
int32_t q_settings_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
int32_t q_settings_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback int32_t fn()
void q_settings_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param signal const char*
int32_t q_settings_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param signal const char*
int32_t q_settings_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback int32_t fn(QSettings*, const char*)
void q_settings_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
bool q_settings_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSettings*
/// @param signal QMetaMethod*
bool q_settings_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSettings*
/// @param callback bool fn(QSettings*, QMetaMethod*)
void q_settings_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSettings*
/// @param callback void fn(QSettings*, const char*)
void q_settings_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#dtor.QSettings)
///
/// Delete this object from C++ memory.
///
/// @param self QSettings*
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
