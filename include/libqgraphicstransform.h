#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSTRANSFORM_H
#define SRCQT6C_LIBQGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicstransform.html

/// q_graphicstransform_new constructs a new QGraphicsTransform object.
///
QGraphicsTransform* q_graphicstransform_new();

/// q_graphicstransform_new2 constructs a new QGraphicsTransform object.
///
/// @param parent QObject*
QGraphicsTransform* q_graphicstransform_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsTransform*
const QMetaObject* q_graphicstransform_meta_object(void* self);

/// @param self QGraphicsTransform*
/// @param param1 const char*
void* q_graphicstransform_metacast(void* self, const char* param1);

/// @param self QGraphicsTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicstransform_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsTransform*
/// @param callback int32_t fn(QGraphicsTransform*, enum QMetaObject__Call, int, void*)
void q_graphicstransform_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicstransform_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicstransform_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// @param self QGraphicsTransform*
/// @param matrix QMatrix4x4*
void q_graphicstransform_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QMatrix4x4*)
void q_graphicstransform_on_apply_to(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// Base class method implementation
///
/// @param self QGraphicsTransform*
/// @param matrix QMatrix4x4*
void q_graphicstransform_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// @param self QGraphicsTransform*
void q_graphicstransform_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsTransform*
/// @param callback void fn()
void q_graphicstransform_on_update(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Base class method implementation
///
/// @param self QGraphicsTransform*
void q_graphicstransform_qbase_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicstransform_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicstransform_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsTransform*
const char* q_graphicstransform_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsTransform*
/// @param name char*
void q_graphicstransform_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsTransform*
bool q_graphicstransform_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsTransform*
bool q_graphicstransform_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsTransform*
bool q_graphicstransform_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsTransform*
bool q_graphicstransform_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsTransform*
/// @param b bool
bool q_graphicstransform_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsTransform*
QThread* q_graphicstransform_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsTransform*
/// @param thread QThread*
bool q_graphicstransform_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param interval int
int32_t q_graphicstransform_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsTransform*
/// @param id int
void q_graphicstransform_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsTransform*
/// @param id enum Qt__TimerId
void q_graphicstransform_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsTransform*
libqt_list /* of QObject* */ q_graphicstransform_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsTransform*
/// @param parent QObject*
void q_graphicstransform_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsTransform*
/// @param filterObj QObject*
void q_graphicstransform_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsTransform*
/// @param obj QObject*
void q_graphicstransform_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicstransform_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicstransform_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicstransform_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicstransform_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsTransform*
void q_graphicstransform_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsTransform*
void q_graphicstransform_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsTransform*
/// @param name const char*
/// @param value QVariant*
bool q_graphicstransform_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsTransform*
/// @param name const char*
QVariant* q_graphicstransform_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsTransform*
const char** q_graphicstransform_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsTransform*
QBindingStorage* q_graphicstransform_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsTransform*
const QBindingStorage* q_graphicstransform_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
void q_graphicstransform_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*)
void q_graphicstransform_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsTransform*
QObject* q_graphicstransform_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsTransform*
/// @param classname const char*
bool q_graphicstransform_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsTransform*
void q_graphicstransform_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsTransform*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicstransform_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicstransform_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicstransform_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicstransform_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param param1 QObject*
void q_graphicstransform_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QObject*)
void q_graphicstransform_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
bool q_graphicstransform_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
bool q_graphicstransform_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback bool fn(QGraphicsTransform*, QEvent*)
void q_graphicstransform_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicstransform_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicstransform_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback bool fn(QGraphicsTransform*, QObject*, QEvent*)
void q_graphicstransform_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QTimerEvent*
void q_graphicstransform_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QTimerEvent*
void q_graphicstransform_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QTimerEvent*)
void q_graphicstransform_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QChildEvent*
void q_graphicstransform_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QChildEvent*
void q_graphicstransform_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QChildEvent*)
void q_graphicstransform_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
void q_graphicstransform_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
void q_graphicstransform_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QEvent*)
void q_graphicstransform_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
void q_graphicstransform_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
void q_graphicstransform_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QMetaMethod*)
void q_graphicstransform_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
void q_graphicstransform_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
void q_graphicstransform_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, QMetaMethod*)
void q_graphicstransform_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
QObject* q_graphicstransform_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
QObject* q_graphicstransform_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback QObject* fn()
void q_graphicstransform_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
int32_t q_graphicstransform_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
int32_t q_graphicstransform_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback int32_t fn()
void q_graphicstransform_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal const char*
int32_t q_graphicstransform_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal const char*
int32_t q_graphicstransform_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback int32_t fn(QGraphicsTransform*, const char*)
void q_graphicstransform_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
bool q_graphicstransform_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
bool q_graphicstransform_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback bool fn(QGraphicsTransform*, QMetaMethod*)
void q_graphicstransform_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsTransform*
/// @param callback void fn(QGraphicsTransform*, const char*)
void q_graphicstransform_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#dtor.QGraphicsTransform)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsTransform*
void q_graphicstransform_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscale.html

/// q_graphicsscale_new constructs a new QGraphicsScale object.
///
QGraphicsScale* q_graphicsscale_new();

/// q_graphicsscale_new2 constructs a new QGraphicsScale object.
///
/// @param parent QObject*
QGraphicsScale* q_graphicsscale_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsScale*
const QMetaObject* q_graphicsscale_meta_object(void* self);

/// @param self QGraphicsScale*
/// @param param1 const char*
void* q_graphicsscale_metacast(void* self, const char* param1);

/// @param self QGraphicsScale*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsscale_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsScale*
/// @param callback int32_t fn(QGraphicsScale*, enum QMetaObject__Call, int, void*)
void q_graphicsscale_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsScale*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsscale_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicsscale_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#origin)
///
/// @param self QGraphicsScale*
QVector3D* q_graphicsscale_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setOrigin)
///
/// @param self QGraphicsScale*
/// @param point QVector3D*
void q_graphicsscale_set_origin(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScale)
///
/// @param self QGraphicsScale*
double q_graphicsscale_x_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setXScale)
///
/// @param self QGraphicsScale*
/// @param xScale double
void q_graphicsscale_set_x_scale(void* self, double xScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScale)
///
/// @param self QGraphicsScale*
double q_graphicsscale_y_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setYScale)
///
/// @param self QGraphicsScale*
/// @param yScale double
void q_graphicsscale_set_y_scale(void* self, double yScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScale)
///
/// @param self QGraphicsScale*
double q_graphicsscale_z_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setZScale)
///
/// @param self QGraphicsScale*
/// @param zScale double
void q_graphicsscale_set_z_scale(void* self, double zScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// @param self QGraphicsScale*
/// @param matrix QMatrix4x4*
void q_graphicsscale_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QMatrix4x4*)
void q_graphicsscale_on_apply_to(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Base class method implementation
///
/// @param self QGraphicsScale*
/// @param matrix QMatrix4x4*
void q_graphicsscale_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// @param self QGraphicsScale*
void q_graphicsscale_origin_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_origin_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// @param self QGraphicsScale*
void q_graphicsscale_x_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_x_scale_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// @param self QGraphicsScale*
void q_graphicsscale_y_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_y_scale_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// @param self QGraphicsScale*
void q_graphicsscale_z_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_z_scale_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// @param self QGraphicsScale*
void q_graphicsscale_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_scale_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicsscale_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicsscale_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsScale*
const char* q_graphicsscale_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsScale*
/// @param name char*
void q_graphicsscale_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsScale*
bool q_graphicsscale_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsScale*
bool q_graphicsscale_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsScale*
bool q_graphicsscale_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsScale*
bool q_graphicsscale_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsScale*
/// @param b bool
bool q_graphicsscale_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsScale*
QThread* q_graphicsscale_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsScale*
/// @param thread QThread*
bool q_graphicsscale_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param interval int
int32_t q_graphicsscale_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScale*
/// @param id int
void q_graphicsscale_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScale*
/// @param id enum Qt__TimerId
void q_graphicsscale_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsScale*
libqt_list /* of QObject* */ q_graphicsscale_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsScale*
/// @param parent QObject*
void q_graphicsscale_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsScale*
/// @param filterObj QObject*
void q_graphicsscale_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsScale*
/// @param obj QObject*
void q_graphicsscale_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicsscale_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsScale*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicsscale_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicsscale_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicsscale_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsScale*
void q_graphicsscale_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsScale*
void q_graphicsscale_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsScale*
/// @param name const char*
/// @param value QVariant*
bool q_graphicsscale_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsScale*
/// @param name const char*
QVariant* q_graphicsscale_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsScale*
const char** q_graphicsscale_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsScale*
QBindingStorage* q_graphicsscale_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsScale*
const QBindingStorage* q_graphicsscale_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
void q_graphicsscale_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*)
void q_graphicsscale_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsScale*
QObject* q_graphicsscale_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsScale*
/// @param classname const char*
bool q_graphicsscale_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsScale*
void q_graphicsscale_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsScale*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicsscale_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicsscale_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsscale_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsScale*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsscale_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param param1 QObject*
void q_graphicsscale_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QObject*)
void q_graphicsscale_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
bool q_graphicsscale_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
bool q_graphicsscale_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback bool fn(QGraphicsScale*, QEvent*)
void q_graphicsscale_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsscale_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsscale_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback bool fn(QGraphicsScale*, QObject*, QEvent*)
void q_graphicsscale_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QTimerEvent*
void q_graphicsscale_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QTimerEvent*
void q_graphicsscale_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QTimerEvent*)
void q_graphicsscale_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QChildEvent*
void q_graphicsscale_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QChildEvent*
void q_graphicsscale_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QChildEvent*)
void q_graphicsscale_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
void q_graphicsscale_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
void q_graphicsscale_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QEvent*)
void q_graphicsscale_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
void q_graphicsscale_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
void q_graphicsscale_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QMetaMethod*)
void q_graphicsscale_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
void q_graphicsscale_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
void q_graphicsscale_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, QMetaMethod*)
void q_graphicsscale_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
void q_graphicsscale_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
void q_graphicsscale_qbase_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void fn()
void q_graphicsscale_on_update(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
QObject* q_graphicsscale_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
QObject* q_graphicsscale_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback QObject* fn()
void q_graphicsscale_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
int32_t q_graphicsscale_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
int32_t q_graphicsscale_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback int32_t fn()
void q_graphicsscale_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal const char*
int32_t q_graphicsscale_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal const char*
int32_t q_graphicsscale_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback int32_t fn(QGraphicsScale*, const char*)
void q_graphicsscale_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
bool q_graphicsscale_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
bool q_graphicsscale_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback bool fn(QGraphicsScale*, QMetaMethod*)
void q_graphicsscale_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsScale*
/// @param callback void fn(QGraphicsScale*, const char*)
void q_graphicsscale_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#dtor.QGraphicsScale)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsScale*
void q_graphicsscale_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsrotation.html

/// q_graphicsrotation_new constructs a new QGraphicsRotation object.
///
QGraphicsRotation* q_graphicsrotation_new();

/// q_graphicsrotation_new2 constructs a new QGraphicsRotation object.
///
/// @param parent QObject*
QGraphicsRotation* q_graphicsrotation_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsRotation*
const QMetaObject* q_graphicsrotation_meta_object(void* self);

/// @param self QGraphicsRotation*
/// @param param1 const char*
void* q_graphicsrotation_metacast(void* self, const char* param1);

/// @param self QGraphicsRotation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsrotation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsRotation*
/// @param callback int32_t fn(QGraphicsRotation*, enum QMetaObject__Call, int, void*)
void q_graphicsrotation_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsRotation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsrotation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicsrotation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#origin)
///
/// @param self QGraphicsRotation*
QVector3D* q_graphicsrotation_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setOrigin)
///
/// @param self QGraphicsRotation*
/// @param point QVector3D*
void q_graphicsrotation_set_origin(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angle)
///
/// @param self QGraphicsRotation*
double q_graphicsrotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAngle)
///
/// @param self QGraphicsRotation*
/// @param angle double
void q_graphicsrotation_set_angle(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axis)
///
/// @param self QGraphicsRotation*
QVector3D* q_graphicsrotation_axis(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// @param self QGraphicsRotation*
/// @param axis QVector3D*
void q_graphicsrotation_set_axis(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// @param self QGraphicsRotation*
/// @param axis enum Qt__Axis
void q_graphicsrotation_set_axis2(void* self, int64_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// @param self QGraphicsRotation*
/// @param matrix QMatrix4x4*
void q_graphicsrotation_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QMatrix4x4*)
void q_graphicsrotation_on_apply_to(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Base class method implementation
///
/// @param self QGraphicsRotation*
/// @param matrix QMatrix4x4*
void q_graphicsrotation_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_origin_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*)
void q_graphicsrotation_on_origin_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_angle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*)
void q_graphicsrotation_on_angle_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_axis_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*)
void q_graphicsrotation_on_axis_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicsrotation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicsrotation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsRotation*
const char* q_graphicsrotation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsRotation*
/// @param name char*
void q_graphicsrotation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsRotation*
bool q_graphicsrotation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsRotation*
bool q_graphicsrotation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsRotation*
bool q_graphicsrotation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsRotation*
bool q_graphicsrotation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsRotation*
/// @param b bool
bool q_graphicsrotation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsRotation*
QThread* q_graphicsrotation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsRotation*
/// @param thread QThread*
bool q_graphicsrotation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param interval int
int32_t q_graphicsrotation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsRotation*
/// @param id int
void q_graphicsrotation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsRotation*
/// @param id enum Qt__TimerId
void q_graphicsrotation_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsRotation*
libqt_list /* of QObject* */ q_graphicsrotation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsRotation*
/// @param parent QObject*
void q_graphicsrotation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsRotation*
/// @param filterObj QObject*
void q_graphicsrotation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsRotation*
/// @param obj QObject*
void q_graphicsrotation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicsrotation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsRotation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicsrotation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicsrotation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicsrotation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsRotation*
/// @param name const char*
/// @param value QVariant*
bool q_graphicsrotation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsRotation*
/// @param name const char*
QVariant* q_graphicsrotation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsRotation*
const char** q_graphicsrotation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsRotation*
QBindingStorage* q_graphicsrotation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsRotation*
const QBindingStorage* q_graphicsrotation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*)
void q_graphicsrotation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsRotation*
QObject* q_graphicsrotation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsRotation*
/// @param classname const char*
bool q_graphicsrotation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsRotation*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicsrotation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicsrotation_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsrotation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsRotation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsrotation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param param1 QObject*
void q_graphicsrotation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QObject*)
void q_graphicsrotation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
bool q_graphicsrotation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
bool q_graphicsrotation_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback bool fn(QGraphicsRotation*, QEvent*)
void q_graphicsrotation_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsrotation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsrotation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback bool fn(QGraphicsRotation*, QObject*, QEvent*)
void q_graphicsrotation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QTimerEvent*
void q_graphicsrotation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QTimerEvent*
void q_graphicsrotation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QTimerEvent*)
void q_graphicsrotation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QChildEvent*
void q_graphicsrotation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QChildEvent*
void q_graphicsrotation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QChildEvent*)
void q_graphicsrotation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
void q_graphicsrotation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
void q_graphicsrotation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QEvent*)
void q_graphicsrotation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
void q_graphicsrotation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
void q_graphicsrotation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QMetaMethod*)
void q_graphicsrotation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
void q_graphicsrotation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
void q_graphicsrotation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, QMetaMethod*)
void q_graphicsrotation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_qbase_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void fn()
void q_graphicsrotation_on_update(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
QObject* q_graphicsrotation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
QObject* q_graphicsrotation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback QObject* fn()
void q_graphicsrotation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
int32_t q_graphicsrotation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
int32_t q_graphicsrotation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback int32_t fn()
void q_graphicsrotation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal const char*
int32_t q_graphicsrotation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal const char*
int32_t q_graphicsrotation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback int32_t fn(QGraphicsRotation*, const char*)
void q_graphicsrotation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
bool q_graphicsrotation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
bool q_graphicsrotation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback bool fn(QGraphicsRotation*, QMetaMethod*)
void q_graphicsrotation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsRotation*
/// @param callback void fn(QGraphicsRotation*, const char*)
void q_graphicsrotation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#dtor.QGraphicsRotation)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsRotation*
void q_graphicsrotation_delete(void* self);

#endif
