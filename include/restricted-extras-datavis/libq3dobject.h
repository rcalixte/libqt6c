#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html)

/// q_3dobject_new constructs a new Q3DObject object.
///
Q3DObject* q_3dobject_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html)

/// q_3dobject_new2 constructs a new Q3DObject object.
///
/// @param parent QObject*
///
Q3DObject* q_3dobject_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DObject*
///
const QMetaObject* q_3dobject_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DObject*
/// @param callback const QMetaObject* func(const Q3DObject* self)
///
void q_3dobject_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DObject*
///
const QMetaObject* q_3dobject_super_meta_object(const void* self);

/// @param self Q3DObject*
/// @param param1 const char*
///
void* q_3dobject_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DObject*
/// @param callback void* func(Q3DObject* self, const char* param1)
///
void q_3dobject_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DObject*
/// @param param1 const char*
///
void* q_3dobject_super_metacast(void* self, const char* param1);

/// @param self Q3DObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DObject*
/// @param callback int32_t func(Q3DObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dobject_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dobject_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#copyValuesFrom)
///
/// @param self Q3DObject*
/// @param source Q3DObject*
///
void q_3dobject_copy_values_from(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#copyValuesFrom)
///
/// Allows for overriding the related default method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, Q3DObject* source)
///
void q_3dobject_on_copy_values_from(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#copyValuesFrom)
///
/// Base class method implementation
///
/// @param self Q3DObject*
/// @param source Q3DObject*
///
void q_3dobject_super_copy_values_from(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#parentScene)
///
/// @param self Q3DObject*
///
Q3DScene* q_3dobject_parent_scene(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#position)
///
/// @param self const Q3DObject*
///
QVector3D* q_3dobject_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#setPosition)
///
/// @param self Q3DObject*
/// @param position QVector3D*
///
void q_3dobject_set_position(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#positionChanged)
///
/// @param self Q3DObject*
/// @param position QVector3D*
///
void q_3dobject_position_changed(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#positionChanged)
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QVector3D* position)
///
void q_3dobject_on_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#setDirty)
///
/// @param self Q3DObject*
/// @param dirty bool
///
void q_3dobject_set_dirty(void* self, bool dirty);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#isDirty)
///
/// @param self const Q3DObject*
///
bool q_3dobject_is_dirty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DObject*
///
const char* q_3dobject_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DObject*
/// @param name const char*
///
void q_3dobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DObject*
///
bool q_3dobject_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DObject*
///
bool q_3dobject_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DObject*
///
bool q_3dobject_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DObject*
///
bool q_3dobject_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DObject*
/// @param b bool
///
bool q_3dobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DObject*
///
QThread* q_3dobject_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DObject*
/// @param thread QThread*
///
bool q_3dobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DObject*
/// @param interval int
///
int32_t q_3dobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DObject*
/// @param time int64_t of nanoseconds
///
int32_t q_3dobject_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DObject*
/// @param id int
///
void q_3dobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DObject*
/// @param id enum Qt__TimerId
///
void q_3dobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DObject*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dobject_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Q3DObject*
/// @param parent QObject*
///
void q_3dobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DObject*
/// @param filterObj QObject*
///
void q_3dobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DObject*
/// @param obj QObject*
///
void q_3dobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dobject_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dobject_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dobject_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dobject_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dobject_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
///
bool q_3dobject_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
/// @param receiver QObject*
///
bool q_3dobject_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dobject_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DObject*
///
void q_3dobject_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DObject*
///
void q_3dobject_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dobject_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DObject*
/// @param name const char*
///
QVariant* q_3dobject_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DObject*
///
const char** q_3dobject_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DObject*
///
QBindingStorage* q_3dobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DObject*
///
const QBindingStorage* q_3dobject_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DObject*
///
void q_3dobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self)
///
void q_3dobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Q3DObject*
///
QObject* q_3dobject_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DObject*
/// @param classname const char*
///
bool q_3dobject_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DObject*
///
void q_3dobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DObject*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dobject_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_3dobject_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_3dobject_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dobject_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
/// @param signal const char*
///
bool q_3dobject_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dobject_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dobject_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DObject*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dobject_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DObject*
/// @param param1 QObject*
///
void q_3dobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QObject* param1)
///
void q_3dobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param event QEvent*
///
bool q_3dobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param event QEvent*
///
bool q_3dobject_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback bool func(Q3DObject* self, QEvent* event)
///
void q_3dobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dobject_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback bool func(Q3DObject* self, QObject* watched, QEvent* event)
///
void q_3dobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param event QTimerEvent*
///
void q_3dobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param event QTimerEvent*
///
void q_3dobject_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QTimerEvent* event)
///
void q_3dobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param event QChildEvent*
///
void q_3dobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param event QChildEvent*
///
void q_3dobject_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QChildEvent* event)
///
void q_3dobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param event QEvent*
///
void q_3dobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param event QEvent*
///
void q_3dobject_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QEvent* event)
///
void q_3dobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param signal QMetaMethod*
///
void q_3dobject_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param signal QMetaMethod*
///
void q_3dobject_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QMetaMethod* signal)
///
void q_3dobject_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DObject*
/// @param signal QMetaMethod*
///
void q_3dobject_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DObject*
/// @param signal QMetaMethod*
///
void q_3dobject_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, QMetaMethod* signal)
///
void q_3dobject_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DObject*
///
QObject* q_3dobject_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DObject*
///
QObject* q_3dobject_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback QObject* func(Q3DObject* self)
///
void q_3dobject_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DObject*
///
int32_t q_3dobject_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DObject*
///
int32_t q_3dobject_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback int32_t func(Q3DObject* self)
///
void q_3dobject_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DObject*
/// @param signal const char*
///
int32_t q_3dobject_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DObject*
/// @param signal const char*
///
int32_t q_3dobject_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback int32_t func(Q3DObject* self, const char* signal)
///
void q_3dobject_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DObject*
/// @param signal QMetaMethod*
///
bool q_3dobject_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DObject*
/// @param signal QMetaMethod*
///
bool q_3dobject_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DObject*
/// @param callback bool func(Q3DObject* self, QMetaMethod* signal)
///
void q_3dobject_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DObject*
/// @param callback void func(Q3DObject* self, const char* objectName)
///
void q_3dobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject-qtdatavis.html#dtor.Q3DObject)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DObject*
///
void q_3dobject_delete(void* self);

#endif
