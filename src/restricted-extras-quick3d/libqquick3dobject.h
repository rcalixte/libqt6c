#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html)

/// q_quick3dobject_new constructs a new QQuick3DObject object.
///
QQuick3DObject* q_quick3dobject_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html)

/// q_quick3dobject_new2 constructs a new QQuick3DObject object.
///
/// @param parent QQuick3DObject*
///
QQuick3DObject* q_quick3dobject_new2(void* parent);

/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuick3DObject*
///
QQmlParserStatus* q_quick3dobject_as_q_qml_parser_status(void* self);

/// Downcasts to a QQuick3DObject object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuick3DObject* q_quick3dobject_from_q_qml_parser_status(void* _qqmlparserstatus);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuick3DObject*
///
const QMetaObject* q_quick3dobject_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback const QMetaObject* func()
///
void q_quick3dobject_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
const QMetaObject* q_quick3dobject_super_meta_object(void* self);

/// @param self QQuick3DObject*
/// @param param1 const char*
///
void* q_quick3dobject_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void* func(QQuick3DObject* self, const char* param1)
///
void q_quick3dobject_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuick3DObject*
/// @param param1 const char*
///
void* q_quick3dobject_super_metacast(void* self, const char* param1);

/// @param self QQuick3DObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback int32_t func(QQuick3DObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quick3dobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuick3DObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dobject_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quick3dobject_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuick3DObject*
///
const char* q_quick3dobject_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
///
/// @param self QQuick3DObject*
/// @param state const char*
///
void q_quick3dobject_set_state(void* self, const char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
///
/// @param self QQuick3DObject*
///
/// @return libqt_list of QQuick3DObject*
///
libqt_list q_quick3dobject_child_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
///
/// @param self QQuick3DObject*
///
QQuick3DObject* q_quick3dobject_parent_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
///
/// @param self QQuick3DObject*
/// @param parentItem QQuick3DObject*
///
void q_quick3dobject_set_parent_item(void* self, void* parentItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_parent_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self)
///
void q_quick3dobject_on_parent_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_children_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self)
///
void q_quick3dobject_on_children_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_state_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self)
///
void q_quick3dobject_on_state_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void func()
///
void q_quick3dobject_on_mark_all_dirty(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_super_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// @param self QQuick3DObject*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dobject_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, enum QQuick3DObject__ItemChange param1, QQuick3DObject__ItemChangeData* param2)
///
void q_quick3dobject_on_item_change(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dobject_super_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void func()
///
void q_quick3dobject_on_class_begin(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_super_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void func()
///
void q_quick3dobject_on_component_complete(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_super_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_is_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback bool func()
///
void q_quick3dobject_on_is_component_complete(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_super_is_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_pre_sync(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DObject*
/// @param callback void func()
///
void q_quick3dobject_on_pre_sync(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Base class method implementation
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_super_pre_sync(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quick3dobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quick3dobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuick3DObject*
///
const char* q_quick3dobject_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuick3DObject*
/// @param name const char*
///
void q_quick3dobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuick3DObject*
/// @param b bool
///
bool q_quick3dobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuick3DObject*
///
QThread* q_quick3dobject_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuick3DObject*
/// @param thread QThread*
///
bool q_quick3dobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DObject*
/// @param interval int
///
int32_t q_quick3dobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DObject*
/// @param time int64_t of nanoseconds
///
int32_t q_quick3dobject_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DObject*
/// @param id int
///
void q_quick3dobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DObject*
/// @param id enum Qt__TimerId
///
void q_quick3dobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuick3DObject*
///
/// @return libqt_list of QObject*
///
libqt_list q_quick3dobject_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuick3DObject*
/// @param parent QObject*
///
void q_quick3dobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuick3DObject*
/// @param filterObj QObject*
///
void q_quick3dobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuick3DObject*
/// @param obj QObject*
///
void q_quick3dobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dobject_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quick3dobject_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuick3DObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dobject_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dobject_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quick3dobject_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
///
bool q_quick3dobject_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
/// @param receiver QObject*
///
bool q_quick3dobject_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quick3dobject_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuick3DObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_quick3dobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuick3DObject*
/// @param name const char*
///
QVariant* q_quick3dobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuick3DObject*
///
const char** q_quick3dobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DObject*
///
QBindingStorage* q_quick3dobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DObject*
///
const QBindingStorage* q_quick3dobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self)
///
void q_quick3dobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuick3DObject*
///
QObject* q_quick3dobject_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuick3DObject*
/// @param classname const char*
///
bool q_quick3dobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DObject*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dobject_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quick3dobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quick3dobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuick3DObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quick3dobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
/// @param signal const char*
///
bool q_quick3dobject_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quick3dobject_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dobject_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuick3DObject*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dobject_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DObject*
/// @param param1 QObject*
///
void q_quick3dobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QObject* param1)
///
void q_quick3dobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQmlParserStatus
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
///
/// @param self QQuick3DObject*
/// @param param1 QQmlParserStatus*
///
void q_quick3dobject_operator_assign(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QEvent*
///
bool q_quick3dobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QEvent*
///
bool q_quick3dobject_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback bool func(QQuick3DObject* self, QEvent* event)
///
void q_quick3dobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dobject_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback bool func(QQuick3DObject* self, QObject* watched, QEvent* event)
///
void q_quick3dobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QTimerEvent*
///
void q_quick3dobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QTimerEvent*
///
void q_quick3dobject_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QTimerEvent* event)
///
void q_quick3dobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QChildEvent*
///
void q_quick3dobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QChildEvent*
///
void q_quick3dobject_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QChildEvent* event)
///
void q_quick3dobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QEvent*
///
void q_quick3dobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param event QEvent*
///
void q_quick3dobject_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QEvent* event)
///
void q_quick3dobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
void q_quick3dobject_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
void q_quick3dobject_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QMetaMethod* signal)
///
void q_quick3dobject_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
void q_quick3dobject_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
void q_quick3dobject_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, QMetaMethod* signal)
///
void q_quick3dobject_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
///
QObject* q_quick3dobject_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
///
QObject* q_quick3dobject_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback QObject* func()
///
void q_quick3dobject_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
///
int32_t q_quick3dobject_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
///
int32_t q_quick3dobject_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback int32_t func()
///
void q_quick3dobject_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal const char*
///
int32_t q_quick3dobject_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal const char*
///
int32_t q_quick3dobject_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback int32_t func(QQuick3DObject* self, const char* signal)
///
void q_quick3dobject_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
bool q_quick3dobject_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param signal QMetaMethod*
///
bool q_quick3dobject_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DObject*
/// @param callback bool func(QQuick3DObject* self, QMetaMethod* signal)
///
void q_quick3dobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuick3DObject*
/// @param callback void func(QQuick3DObject* self, const char* objectName)
///
void q_quick3dobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#dtor.QQuick3DObject)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3DObject*
///
void q_quick3dobject_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)

/// q_quick3dobject__itemchangedata_new constructs a new QQuick3DObject::ItemChangeData object.
///
/// @param other QQuick3DObject__ItemChangeData*
///
QQuick3DObject__ItemChangeData* q_quick3dobject__itemchangedata_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)

/// q_quick3dobject__itemchangedata_new2 constructs a new QQuick3DObject::ItemChangeData object and invalidates the source QQuick3DObject::ItemChangeData object.
///
/// @param other QQuick3DObject__ItemChangeData*
///
QQuick3DObject__ItemChangeData* q_quick3dobject__itemchangedata_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)

/// q_quick3dobject__itemchangedata_new3 constructs a new QQuick3DObject::ItemChangeData object.
///
/// @param v QQuick3DObject*
///
QQuick3DObject__ItemChangeData* q_quick3dobject__itemchangedata_new3(void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)

/// q_quick3dobject__itemchangedata_new4 constructs a new QQuick3DObject::ItemChangeData object.
///
/// @param v double
///
QQuick3DObject__ItemChangeData* q_quick3dobject__itemchangedata_new4(double v);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)

/// q_quick3dobject__itemchangedata_new5 constructs a new QQuick3DObject::ItemChangeData object.
///
/// @param v bool
///
QQuick3DObject__ItemChangeData* q_quick3dobject__itemchangedata_new5(bool v);

/// q_quick3dobject__itemchangedata_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuick3DObject__ItemChangeData*
/// @param other QQuick3DObject__ItemChangeData*
///
void q_quick3dobject__itemchangedata_copy_assign(void* self, void* other);

/// q_quick3dobject__itemchangedata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuick3DObject__ItemChangeData*
/// @param other QQuick3DObject__ItemChangeData*
///
void q_quick3dobject__itemchangedata_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#item-var)
///
/// @param self QQuick3DObject__ItemChangeData*
///
QQuick3DObject* q_quick3dobject__itemchangedata_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#item-var)
///
/// @param self QQuick3DObject__ItemChangeData*
/// @param item QQuick3DObject*
///
void q_quick3dobject__itemchangedata_set_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#realValue-var)
///
/// @param self QQuick3DObject__ItemChangeData*
///
double q_quick3dobject__itemchangedata_real_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#realValue-var)
///
/// @param self QQuick3DObject__ItemChangeData*
/// @param realValue double
///
void q_quick3dobject__itemchangedata_set_real_value(void* self, double realValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#boolValue-var)
///
/// @param self QQuick3DObject__ItemChangeData*
///
bool q_quick3dobject__itemchangedata_bool_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#boolValue-var)
///
/// @param self QQuick3DObject__ItemChangeData*
/// @param boolValue bool
///
void q_quick3dobject__itemchangedata_set_bool_value(void* self, bool boolValue);

/// Delete this object from C++ memory.
///
/// @param self QQuick3DObject__ItemChangeData*
///
void q_quick3dobject__itemchangedata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#public-types)

typedef enum {
    QQUICK3DOBJECT_ITEMCHANGE_ITEMCHILDADDEDCHANGE = 0,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMCHILDREMOVEDCHANGE = 1,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMSCENECHANGE = 2,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMVISIBLEHASCHANGED = 3,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMPARENTHASCHANGED = 4,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMOPACITYHASCHANGED = 5,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMACTIVEFOCUSHASCHANGED = 6,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMROTATIONHASCHANGED = 7,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMANTIALIASINGHASCHANGED = 8,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMDEVICEPIXELRATIOHASCHANGED = 9,
    QQUICK3DOBJECT_ITEMCHANGE_ITEMENABLEDHASCHANGED = 10
} QQuick3DObject__ItemChange;

#endif
