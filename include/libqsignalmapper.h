#pragma once
#ifndef SRCQT6C_LIBQSIGNALMAPPER_H
#define SRCQT6C_LIBQSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsignalmapper.html

/// q_signalmapper_new constructs a new QSignalMapper object.
///
QSignalMapper* q_signalmapper_new();

/// q_signalmapper_new2 constructs a new QSignalMapper object.
///
/// @param parent QObject*
QSignalMapper* q_signalmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSignalMapper*
const QMetaObject* q_signalmapper_meta_object(void* self);

/// @param self QSignalMapper*
/// @param param1 const char*
void* q_signalmapper_metacast(void* self, const char* param1);

/// @param self QSignalMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_signalmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSignalMapper*
/// @param callback int32_t fn(QSignalMapper*, enum QMetaObject__Call, int, void*)
void q_signalmapper_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSignalMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_signalmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_signalmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param id int
void q_signalmapper_set_mapping(void* self, void* sender, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param text const char*
void q_signalmapper_set_mapping2(void* self, void* sender, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param object QObject*
void q_signalmapper_set_mapping3(void* self, void* sender, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#removeMappings)
///
/// @param self QSignalMapper*
/// @param sender QObject*
void q_signalmapper_remove_mappings(void* self, void* sender);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self QSignalMapper*
/// @param id int
QObject* q_signalmapper_mapping(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self QSignalMapper*
/// @param text const char*
QObject* q_signalmapper_mapping2(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self QSignalMapper*
/// @param object QObject*
QObject* q_signalmapper_mapping3(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// @param self QSignalMapper*
/// @param param1 int
void q_signalmapper_mapped_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, int)
void q_signalmapper_on_mapped_int(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// @param self QSignalMapper*
/// @param param1 const char*
void q_signalmapper_mapped_string(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, const char*)
void q_signalmapper_on_mapped_string(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// @param self QSignalMapper*
/// @param param1 QObject*
void q_signalmapper_mapped_object(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QObject*)
void q_signalmapper_on_mapped_object(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// @param self QSignalMapper*
void q_signalmapper_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// @param self QSignalMapper*
/// @param sender QObject*
void q_signalmapper_map2(void* self, void* sender);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_signalmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_signalmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSignalMapper*
const char* q_signalmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSignalMapper*
/// @param name char*
void q_signalmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSignalMapper*
bool q_signalmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSignalMapper*
bool q_signalmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSignalMapper*
bool q_signalmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSignalMapper*
bool q_signalmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSignalMapper*
/// @param b bool
bool q_signalmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSignalMapper*
QThread* q_signalmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSignalMapper*
/// @param thread QThread*
bool q_signalmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param interval int
int32_t q_signalmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalMapper*
/// @param id int
void q_signalmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalMapper*
/// @param id enum Qt__TimerId
void q_signalmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSignalMapper*
libqt_list /* of QObject* */ q_signalmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSignalMapper*
/// @param parent QObject*
void q_signalmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSignalMapper*
/// @param filterObj QObject*
void q_signalmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSignalMapper*
/// @param obj QObject*
void q_signalmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_signalmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_signalmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_signalmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_signalmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSignalMapper*
void q_signalmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSignalMapper*
void q_signalmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSignalMapper*
/// @param name const char*
/// @param value QVariant*
bool q_signalmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSignalMapper*
/// @param name const char*
QVariant* q_signalmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSignalMapper*
const char** q_signalmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSignalMapper*
QBindingStorage* q_signalmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSignalMapper*
const QBindingStorage* q_signalmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
void q_signalmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*)
void q_signalmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSignalMapper*
QObject* q_signalmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSignalMapper*
/// @param classname const char*
bool q_signalmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSignalMapper*
void q_signalmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSignalMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_signalmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_signalmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_signalmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_signalmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param param1 QObject*
void q_signalmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QObject*)
void q_signalmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
bool q_signalmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
bool q_signalmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback bool fn(QSignalMapper*, QEvent*)
void q_signalmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_signalmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_signalmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback bool fn(QSignalMapper*, QObject*, QEvent*)
void q_signalmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QTimerEvent*
void q_signalmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QTimerEvent*
void q_signalmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QTimerEvent*)
void q_signalmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QChildEvent*
void q_signalmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QChildEvent*
void q_signalmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QChildEvent*)
void q_signalmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
void q_signalmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
void q_signalmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QEvent*)
void q_signalmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
void q_signalmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
void q_signalmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QMetaMethod*)
void q_signalmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
void q_signalmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
void q_signalmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, QMetaMethod*)
void q_signalmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
QObject* q_signalmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
QObject* q_signalmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback QObject* fn()
void q_signalmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
int32_t q_signalmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
int32_t q_signalmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback int32_t fn()
void q_signalmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal const char*
int32_t q_signalmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal const char*
int32_t q_signalmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback int32_t fn(QSignalMapper*, const char*)
void q_signalmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
bool q_signalmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
bool q_signalmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback bool fn(QSignalMapper*, QMetaMethod*)
void q_signalmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalMapper*
/// @param callback void fn(QSignalMapper*, const char*)
void q_signalmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#dtor.QSignalMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QSignalMapper*
void q_signalmapper_delete(void* self);

#endif
