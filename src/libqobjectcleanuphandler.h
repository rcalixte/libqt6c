#pragma once
#ifndef SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H
#define SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qobjectcleanuphandler.html

/// q_objectcleanuphandler_new constructs a new QObjectCleanupHandler object.
///
QObjectCleanupHandler* q_objectcleanuphandler_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QObjectCleanupHandler*
const QMetaObject* q_objectcleanuphandler_meta_object(void* self);

/// @param self QObjectCleanupHandler*
/// @param param1 const char*
void* q_objectcleanuphandler_metacast(void* self, const char* param1);

/// @param self QObjectCleanupHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_objectcleanuphandler_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QObjectCleanupHandler*
/// @param callback int32_t fn(QObjectCleanupHandler*, enum QMetaObject__Call, int, void*)
void q_objectcleanuphandler_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QObjectCleanupHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_objectcleanuphandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_objectcleanuphandler_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#add)
///
/// @param self QObjectCleanupHandler*
/// @param object QObject*
QObject* q_objectcleanuphandler_add(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#remove)
///
/// @param self QObjectCleanupHandler*
/// @param object QObject*
void q_objectcleanuphandler_remove(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#isEmpty)
///
/// @param self QObjectCleanupHandler*
bool q_objectcleanuphandler_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#clear)
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_objectcleanuphandler_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QObjectCleanupHandler*
const char* q_objectcleanuphandler_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QObjectCleanupHandler*
/// @param name char*
void q_objectcleanuphandler_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QObjectCleanupHandler*
bool q_objectcleanuphandler_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QObjectCleanupHandler*
bool q_objectcleanuphandler_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QObjectCleanupHandler*
bool q_objectcleanuphandler_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QObjectCleanupHandler*
bool q_objectcleanuphandler_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QObjectCleanupHandler*
/// @param b bool
bool q_objectcleanuphandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QObjectCleanupHandler*
QThread* q_objectcleanuphandler_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObjectCleanupHandler*
/// @param thread QThread*
bool q_objectcleanuphandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param interval int
int32_t q_objectcleanuphandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObjectCleanupHandler*
/// @param id int
void q_objectcleanuphandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObjectCleanupHandler*
/// @param id enum Qt__TimerId
void q_objectcleanuphandler_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QObjectCleanupHandler*
libqt_list /* of QObject* */ q_objectcleanuphandler_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QObjectCleanupHandler*
/// @param parent QObject*
void q_objectcleanuphandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QObjectCleanupHandler*
/// @param filterObj QObject*
void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QObjectCleanupHandler*
/// @param obj QObject*
void q_objectcleanuphandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObjectCleanupHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_objectcleanuphandler_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_objectcleanuphandler_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_objectcleanuphandler_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QObjectCleanupHandler*
/// @param name const char*
/// @param value QVariant*
bool q_objectcleanuphandler_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QObjectCleanupHandler*
/// @param name const char*
QVariant* q_objectcleanuphandler_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QObjectCleanupHandler*
const char** q_objectcleanuphandler_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObjectCleanupHandler*
QBindingStorage* q_objectcleanuphandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObjectCleanupHandler*
const QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*)
void q_objectcleanuphandler_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QObjectCleanupHandler*
QObject* q_objectcleanuphandler_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QObjectCleanupHandler*
/// @param classname const char*
bool q_objectcleanuphandler_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObjectCleanupHandler*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_objectcleanuphandler_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_objectcleanuphandler_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObjectCleanupHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param param1 QObject*
void q_objectcleanuphandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QObject*)
void q_objectcleanuphandler_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
bool q_objectcleanuphandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
bool q_objectcleanuphandler_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback bool fn(QObjectCleanupHandler*, QEvent*)
void q_objectcleanuphandler_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param watched QObject*
/// @param event QEvent*
bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param watched QObject*
/// @param event QEvent*
bool q_objectcleanuphandler_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback bool fn(QObjectCleanupHandler*, QObject*, QEvent*)
void q_objectcleanuphandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QTimerEvent*
void q_objectcleanuphandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QTimerEvent*
void q_objectcleanuphandler_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QTimerEvent*)
void q_objectcleanuphandler_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QChildEvent*
void q_objectcleanuphandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QChildEvent*
void q_objectcleanuphandler_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QChildEvent*)
void q_objectcleanuphandler_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
void q_objectcleanuphandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
void q_objectcleanuphandler_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QEvent*)
void q_objectcleanuphandler_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
void q_objectcleanuphandler_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
void q_objectcleanuphandler_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QMetaMethod*)
void q_objectcleanuphandler_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
void q_objectcleanuphandler_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
void q_objectcleanuphandler_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, QMetaMethod*)
void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
QObject* q_objectcleanuphandler_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
QObject* q_objectcleanuphandler_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback QObject* fn()
void q_objectcleanuphandler_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
int32_t q_objectcleanuphandler_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
int32_t q_objectcleanuphandler_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback int32_t fn()
void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal const char*
int32_t q_objectcleanuphandler_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal const char*
int32_t q_objectcleanuphandler_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback int32_t fn(QObjectCleanupHandler*, const char*)
void q_objectcleanuphandler_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
bool q_objectcleanuphandler_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback bool fn(QObjectCleanupHandler*, QMetaMethod*)
void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QObjectCleanupHandler*
/// @param callback void fn(QObjectCleanupHandler*, const char*)
void q_objectcleanuphandler_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#dtor.QObjectCleanupHandler)
///
/// Delete this object from C++ memory.
///
/// @param self QObjectCleanupHandler*
void q_objectcleanuphandler_delete(void* self);

#endif
