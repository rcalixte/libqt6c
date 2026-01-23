#pragma once
#ifndef SRC_QT6C_LIBQDRAG_H
#define SRC_QT6C_LIBQDRAG_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html)

/// q_drag_new constructs a new QDrag object.
///
/// @param dragSource QObject*
///
QDrag* q_drag_new(void* dragSource);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDrag*
///
const QMetaObject* q_drag_meta_object(void* self);

/// @param self QDrag*
/// @param param1 const char*
///
void* q_drag_metacast(void* self, const char* param1);

/// @param self QDrag*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_drag_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDrag*
/// @param callback int32_t func(QDrag* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_drag_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDrag*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_drag_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_drag_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#setMimeData)
///
/// @param self QDrag*
/// @param data QMimeData*
///
void q_drag_set_mime_data(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#mimeData)
///
/// @param self QDrag*
///
QMimeData* q_drag_mime_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#setPixmap)
///
/// @param self QDrag*
/// @param pixmap QPixmap*
///
void q_drag_set_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#pixmap)
///
/// @param self QDrag*
///
QPixmap* q_drag_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#setHotSpot)
///
/// @param self QDrag*
/// @param hotspot QPoint*
///
void q_drag_set_hot_spot(void* self, void* hotspot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#hotSpot)
///
/// @param self QDrag*
///
QPoint* q_drag_hot_spot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#source)
///
/// @param self QDrag*
///
QObject* q_drag_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#target)
///
/// @param self QDrag*
///
QObject* q_drag_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// @param self QDrag*
///
/// @return enum Qt__DropAction
///
int32_t q_drag_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// @param self QDrag*
/// @param supportedActions flag of enum Qt__DropAction
/// @param defaultAction enum Qt__DropAction
///
/// @return enum Qt__DropAction
///
int32_t q_drag_exec2(void* self, int32_t supportedActions, int32_t defaultAction);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#setDragCursor)
///
/// @param self QDrag*
/// @param cursor QPixmap*
/// @param action enum Qt__DropAction
///
void q_drag_set_drag_cursor(void* self, void* cursor, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#dragCursor)
///
/// @param self QDrag*
/// @param action enum Qt__DropAction
///
QPixmap* q_drag_drag_cursor(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#supportedActions)
///
/// @param self QDrag*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_drag_supported_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#defaultAction)
///
/// @param self QDrag*
///
/// @return enum Qt__DropAction
///
int32_t q_drag_default_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#cancel)
///
void q_drag_cancel();

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#actionChanged)
///
/// @param self QDrag*
/// @param action enum Qt__DropAction
///
void q_drag_action_changed(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#actionChanged)
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, enum Qt__DropAction action)
///
void q_drag_on_action_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#targetChanged)
///
/// @param self QDrag*
/// @param newTarget QObject*
///
void q_drag_target_changed(void* self, void* newTarget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#targetChanged)
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QObject* newTarget)
///
void q_drag_on_target_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_drag_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_drag_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// @param self QDrag*
/// @param supportedActions flag of enum Qt__DropAction
///
/// @return enum Qt__DropAction
///
int32_t q_drag_exec1(void* self, int32_t supportedActions);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDrag*
///
const char* q_drag_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDrag*
/// @param name char*
///
void q_drag_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDrag*
///
bool q_drag_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDrag*
///
bool q_drag_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDrag*
///
bool q_drag_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDrag*
///
bool q_drag_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDrag*
/// @param b bool
///
bool q_drag_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDrag*
///
QThread* q_drag_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDrag*
/// @param thread QThread*
///
bool q_drag_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDrag*
/// @param interval int
///
int32_t q_drag_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDrag*
/// @param time int64_t of nanoseconds
///
int32_t q_drag_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDrag*
/// @param id int
///
void q_drag_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDrag*
/// @param id enum Qt__TimerId
///
void q_drag_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDrag*
///
/// @return libqt_list of QObject*
///
libqt_list q_drag_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDrag*
/// @param parent QObject*
///
void q_drag_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDrag*
/// @param filterObj QObject*
///
void q_drag_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDrag*
/// @param obj QObject*
///
void q_drag_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_drag_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDrag*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_drag_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_drag_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_drag_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDrag*
///
void q_drag_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDrag*
///
void q_drag_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDrag*
/// @param name const char*
/// @param value QVariant*
///
bool q_drag_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDrag*
/// @param name const char*
///
QVariant* q_drag_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDrag*
///
const char** q_drag_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDrag*
///
QBindingStorage* q_drag_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDrag*
///
const QBindingStorage* q_drag_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDrag*
///
void q_drag_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDrag*
/// @param callback void func(QDrag* self)
///
void q_drag_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDrag*
///
QObject* q_drag_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDrag*
/// @param classname const char*
///
bool q_drag_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDrag*
///
void q_drag_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDrag*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_drag_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDrag*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_drag_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDrag*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_drag_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_drag_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDrag*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_drag_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDrag*
/// @param param1 QObject*
///
void q_drag_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QObject* param1)
///
void q_drag_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param event QEvent*
///
bool q_drag_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param event QEvent*
///
bool q_drag_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback bool func(QDrag* self, QEvent* event)
///
void q_drag_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_drag_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_drag_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback bool func(QDrag* self, QObject* watched, QEvent* event)
///
void q_drag_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param event QTimerEvent*
///
void q_drag_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param event QTimerEvent*
///
void q_drag_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QTimerEvent* event)
///
void q_drag_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param event QChildEvent*
///
void q_drag_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param event QChildEvent*
///
void q_drag_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QChildEvent* event)
///
void q_drag_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param event QEvent*
///
void q_drag_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param event QEvent*
///
void q_drag_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QEvent* event)
///
void q_drag_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
void q_drag_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
void q_drag_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QMetaMethod* signal)
///
void q_drag_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
void q_drag_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
void q_drag_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, QMetaMethod* signal)
///
void q_drag_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
///
QObject* q_drag_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
///
QObject* q_drag_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback QObject* func()
///
void q_drag_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
///
int32_t q_drag_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
///
int32_t q_drag_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback int32_t func()
///
void q_drag_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param signal const char*
///
int32_t q_drag_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param signal const char*
///
int32_t q_drag_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback int32_t func(QDrag* self, const char* signal)
///
void q_drag_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
bool q_drag_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDrag*
/// @param signal QMetaMethod*
///
bool q_drag_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDrag*
/// @param callback bool func(QDrag* self, QMetaMethod* signal)
///
void q_drag_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDrag*
/// @param callback void func(QDrag* self, const char* objectName)
///
void q_drag_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdrag.html#dtor.QDrag)
///
/// Delete this object from C++ memory.
///
/// @param self QDrag*
///
void q_drag_delete(void* self);

#endif
