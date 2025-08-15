#pragma once
#ifndef SRCQT6C_LIBQSOCKETNOTIFIER_H
#define SRCQT6C_LIBQSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsocketnotifier.html

/// q_socketnotifier_new constructs a new QSocketNotifier object.
///
/// @param param1 enum QSocketNotifier__Type
QSocketNotifier* q_socketnotifier_new(int64_t param1);

/// q_socketnotifier_new2 constructs a new QSocketNotifier object.
///
/// @param socket intptr_t
/// @param param2 enum QSocketNotifier__Type
QSocketNotifier* q_socketnotifier_new2(intptr_t socket, int64_t param2);

/// q_socketnotifier_new3 constructs a new QSocketNotifier object.
///
/// @param param1 enum QSocketNotifier__Type
/// @param parent QObject*
QSocketNotifier* q_socketnotifier_new3(int64_t param1, void* parent);

/// q_socketnotifier_new4 constructs a new QSocketNotifier object.
///
/// @param socket intptr_t
/// @param param2 enum QSocketNotifier__Type
/// @param parent QObject*
QSocketNotifier* q_socketnotifier_new4(intptr_t socket, int64_t param2, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSocketNotifier*
const QMetaObject* q_socketnotifier_meta_object(void* self);

/// @param self QSocketNotifier*
/// @param param1 const char*
void* q_socketnotifier_metacast(void* self, const char* param1);

/// @param self QSocketNotifier*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_socketnotifier_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSocketNotifier*
/// @param callback int32_t fn(QSocketNotifier*, enum QMetaObject__Call, int, void*)
void q_socketnotifier_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSocketNotifier*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_socketnotifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_socketnotifier_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setSocket)
///
/// @param self QSocketNotifier*
/// @param socket intptr_t
void q_socketnotifier_set_socket(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#socket)
///
/// @param self QSocketNotifier*
intptr_t q_socketnotifier_socket(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#type)
///
/// @param self QSocketNotifier*
///
/// @return enum QSocketNotifier__Type
int64_t q_socketnotifier_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isValid)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isEnabled)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setEnabled)
///
/// @param self QSocketNotifier*
/// @param enabled bool
void q_socketnotifier_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// @param self QSocketNotifier*
/// @param param1 QEvent*
bool q_socketnotifier_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSocketNotifier*
/// @param callback bool fn(QSocketNotifier*, QEvent*)
void q_socketnotifier_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// Base class method implementation
///
/// @param self QSocketNotifier*
/// @param param1 QEvent*
bool q_socketnotifier_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_socketnotifier_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_socketnotifier_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSocketNotifier*
const char* q_socketnotifier_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSocketNotifier*
/// @param name char*
void q_socketnotifier_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSocketNotifier*
bool q_socketnotifier_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSocketNotifier*
/// @param b bool
bool q_socketnotifier_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSocketNotifier*
QThread* q_socketnotifier_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSocketNotifier*
/// @param thread QThread*
bool q_socketnotifier_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSocketNotifier*
/// @param interval int
int32_t q_socketnotifier_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSocketNotifier*
/// @param id int
void q_socketnotifier_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSocketNotifier*
/// @param id enum Qt__TimerId
void q_socketnotifier_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSocketNotifier*
libqt_list /* of QObject* */ q_socketnotifier_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSocketNotifier*
/// @param parent QObject*
void q_socketnotifier_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSocketNotifier*
/// @param filterObj QObject*
void q_socketnotifier_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSocketNotifier*
/// @param obj QObject*
void q_socketnotifier_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_socketnotifier_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSocketNotifier*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_socketnotifier_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_socketnotifier_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_socketnotifier_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSocketNotifier*
void q_socketnotifier_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSocketNotifier*
void q_socketnotifier_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSocketNotifier*
/// @param name const char*
/// @param value QVariant*
bool q_socketnotifier_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSocketNotifier*
/// @param name const char*
QVariant* q_socketnotifier_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSocketNotifier*
const char** q_socketnotifier_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSocketNotifier*
QBindingStorage* q_socketnotifier_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSocketNotifier*
const QBindingStorage* q_socketnotifier_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSocketNotifier*
void q_socketnotifier_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*)
void q_socketnotifier_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSocketNotifier*
QObject* q_socketnotifier_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSocketNotifier*
/// @param classname const char*
bool q_socketnotifier_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSocketNotifier*
void q_socketnotifier_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSocketNotifier*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_socketnotifier_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSocketNotifier*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_socketnotifier_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_socketnotifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSocketNotifier*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_socketnotifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSocketNotifier*
/// @param param1 QObject*
void q_socketnotifier_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QObject*)
void q_socketnotifier_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param watched QObject*
/// @param event QEvent*
bool q_socketnotifier_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param watched QObject*
/// @param event QEvent*
bool q_socketnotifier_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback bool fn(QSocketNotifier*, QObject*, QEvent*)
void q_socketnotifier_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QTimerEvent*
void q_socketnotifier_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QTimerEvent*
void q_socketnotifier_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QTimerEvent*)
void q_socketnotifier_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QChildEvent*
void q_socketnotifier_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QChildEvent*
void q_socketnotifier_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QChildEvent*)
void q_socketnotifier_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QEvent*
void q_socketnotifier_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param event QEvent*
void q_socketnotifier_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QEvent*)
void q_socketnotifier_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
void q_socketnotifier_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
void q_socketnotifier_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QMetaMethod*)
void q_socketnotifier_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
void q_socketnotifier_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
void q_socketnotifier_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QMetaMethod*)
void q_socketnotifier_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
QObject* q_socketnotifier_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
QObject* q_socketnotifier_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback QObject* fn()
void q_socketnotifier_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
int32_t q_socketnotifier_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
int32_t q_socketnotifier_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback int32_t fn()
void q_socketnotifier_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal const char*
int32_t q_socketnotifier_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal const char*
int32_t q_socketnotifier_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback int32_t fn(QSocketNotifier*, const char*)
void q_socketnotifier_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
bool q_socketnotifier_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param signal QMetaMethod*
bool q_socketnotifier_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSocketNotifier*
/// @param callback bool fn(QSocketNotifier*, QMetaMethod*)
void q_socketnotifier_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#activated)
///
/// Wrapper to allow calling private signal
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, QSocketDescriptor*, enum QSocketNotifier__Type)
void q_socketnotifier_on_activated(void* self, void (*callback)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSocketNotifier*
/// @param callback void fn(QSocketNotifier*, const char*)
void q_socketnotifier_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#dtor.QSocketNotifier)
///
/// Delete this object from C++ memory.
///
/// @param self QSocketNotifier*
void q_socketnotifier_delete(void* self);

/// https://doc.qt.io/qt-6/qsocketdescriptor.html

/// q_socketdescriptor_new constructs a new QSocketDescriptor object.
///
/// @param other QSocketDescriptor*
QSocketDescriptor* q_socketdescriptor_new(void* other);

/// q_socketdescriptor_new2 constructs a new QSocketDescriptor object and invalidates the source QSocketDescriptor object.
///
/// @param other QSocketDescriptor*
QSocketDescriptor* q_socketdescriptor_new2(void* other);

/// q_socketdescriptor_new3 constructs a new QSocketDescriptor object.
///
QSocketDescriptor* q_socketdescriptor_new3();

/// q_socketdescriptor_new4 constructs a new QSocketDescriptor object.
///
/// @param param1 QSocketDescriptor*
QSocketDescriptor* q_socketdescriptor_new4(void* param1);

/// q_socketdescriptor_new5 constructs a new QSocketDescriptor object.
///
/// @param descriptor int
QSocketDescriptor* q_socketdescriptor_new5(int descriptor);

/// q_socketdescriptor_copy_assign shallow copies `other` into `self`.
///
/// @param self QSocketDescriptor*
/// @param other QSocketDescriptor*
void q_socketdescriptor_copy_assign(void* self, void* other);

/// q_socketdescriptor_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSocketDescriptor*
/// @param other QSocketDescriptor*
void q_socketdescriptor_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#operator)
///
/// @param self QSocketDescriptor*
int32_t q_socketdescriptor_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#isValid)
///
/// @param self QSocketDescriptor*
bool q_socketdescriptor_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#dtor.QSocketDescriptor)
///
/// Delete this object from C++ memory.
///
/// @param self QSocketDescriptor*
void q_socketdescriptor_delete(void* self);

/// https://doc.qt.io/qt-6/qsocketnotifier.html#types

typedef enum {
    QSOCKETNOTIFIER_TYPE_READ = 0,
    QSOCKETNOTIFIER_TYPE_WRITE = 1,
    QSOCKETNOTIFIER_TYPE_EXCEPTION = 2
} QSocketNotifier__Type;

#endif
