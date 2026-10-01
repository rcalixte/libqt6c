#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3drenderextension.html)

/// q_quick3drenderextension_new constructs a new QQuick3DRenderExtension object.
///
QQuick3DRenderExtension* q_quick3drenderextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3drenderextension.html)

/// q_quick3drenderextension_new2 constructs a new QQuick3DRenderExtension object.
///
/// @param parent QQuick3DObject*
///
QQuick3DRenderExtension* q_quick3drenderextension_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuick3DRenderExtension*
///
const QMetaObject* q_quick3drenderextension_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback const QMetaObject* func(const QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuick3DRenderExtension*
///
const QMetaObject* q_quick3drenderextension_super_meta_object(const void* self);

/// @param self QQuick3DRenderExtension*
/// @param param1 const char*
///
void* q_quick3drenderextension_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void* func(QQuick3DRenderExtension* self, const char* param1)
///
void q_quick3drenderextension_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuick3DRenderExtension*
/// @param param1 const char*
///
void* q_quick3drenderextension_super_metacast(void* self, const char* param1);

/// @param self QQuick3DRenderExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3drenderextension_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuick3DRenderExtension*
/// @param callback int32_t func(QQuick3DRenderExtension* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quick3drenderextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuick3DRenderExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3drenderextension_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quick3drenderextension_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quick3drenderextension_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quick3drenderextension_tr3(const char* s, const char* c, int n);

/// Inherited from QQuick3DObject
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuick3DRenderExtension*
///
QQmlParserStatus* q_quick3drenderextension_as_q_qml_parser_status(void* self);

/// Inherited from QQuick3DObject
///
/// Downcasts to a QQuick3DRenderExtension object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuick3DRenderExtension* q_quick3drenderextension_from_q_qml_parser_status(void* _qqmlparserstatus);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DRenderExtension*
///
const char* q_quick3drenderextension_state(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
///
/// @param self QQuick3DRenderExtension*
/// @param state const char*
///
void q_quick3drenderextension_set_state(void* self, const char* state);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
///
/// @param self const QQuick3DRenderExtension*
///
/// @return libqt_list of QQuick3DObject*
///
libqt_list q_quick3drenderextension_child_items(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
///
/// @param self const QQuick3DRenderExtension*
///
QQuick3DObject* q_quick3drenderextension_parent_item(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_update(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
///
/// @param self QQuick3DRenderExtension*
/// @param parentItem QQuick3DObject*
///
void q_quick3drenderextension_set_parent_item(void* self, void* parentItem);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_parent_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_children_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_state_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_state_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DRenderExtension*
///
const char* q_quick3drenderextension_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuick3DRenderExtension*
/// @param name const char*
///
void q_quick3drenderextension_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuick3DRenderExtension*
/// @param b bool
///
bool q_quick3drenderextension_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuick3DRenderExtension*
///
QThread* q_quick3drenderextension_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuick3DRenderExtension*
/// @param thread QThread*
///
bool q_quick3drenderextension_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param interval int
///
int32_t q_quick3drenderextension_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param time int64_t of nanoseconds
///
int32_t q_quick3drenderextension_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param id int
///
void q_quick3drenderextension_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param id enum Qt__TimerId
///
void q_quick3drenderextension_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuick3DRenderExtension*
///
/// @return libqt_list of QObject*
///
libqt_list q_quick3drenderextension_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuick3DRenderExtension*
/// @param parent QObject*
///
void q_quick3drenderextension_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuick3DRenderExtension*
/// @param filterObj QObject*
///
void q_quick3drenderextension_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuick3DRenderExtension*
/// @param obj QObject*
///
void q_quick3drenderextension_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quick3drenderextension_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quick3drenderextension_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DRenderExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quick3drenderextension_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3drenderextension_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quick3drenderextension_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
/// @param receiver QObject*
///
bool q_quick3drenderextension_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quick3drenderextension_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuick3DRenderExtension*
///
void q_quick3drenderextension_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuick3DRenderExtension*
///
void q_quick3drenderextension_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuick3DRenderExtension*
/// @param name const char*
/// @param value QVariant*
///
bool q_quick3drenderextension_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuick3DRenderExtension*
/// @param name const char*
///
QVariant* q_quick3drenderextension_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DRenderExtension*
///
const char** q_quick3drenderextension_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DRenderExtension*
///
QBindingStorage* q_quick3drenderextension_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuick3DRenderExtension*
///
const QBindingStorage* q_quick3drenderextension_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuick3DRenderExtension*
///
QObject* q_quick3drenderextension_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuick3DRenderExtension*
/// @param classname const char*
///
bool q_quick3drenderextension_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3drenderextension_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DRenderExtension*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3drenderextension_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quick3drenderextension_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quick3drenderextension_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DRenderExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quick3drenderextension_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
/// @param signal const char*
///
bool q_quick3drenderextension_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quick3drenderextension_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3drenderextension_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DRenderExtension*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3drenderextension_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DRenderExtension*
/// @param param1 QObject*
///
void q_quick3drenderextension_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QObject* param1)
///
void q_quick3drenderextension_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQmlParserStatus
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
///
/// @param self QQuick3DRenderExtension*
/// @param param1 QQmlParserStatus*
///
void q_quick3drenderextension_operator_assign(void* self, const void* param1);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_mark_all_dirty(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_super_mark_all_dirty(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_mark_all_dirty(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3drenderextension_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3drenderextension_super_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, enum QQuick3DObject__ItemChange param1, QQuick3DObject__ItemChangeData* param2)
///
void q_quick3drenderextension_on_item_change(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_super_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_class_begin(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_super_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_component_complete(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_super_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_pre_sync(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QEvent*
///
bool q_quick3drenderextension_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QEvent*
///
bool q_quick3drenderextension_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback bool func(QQuick3DRenderExtension* self, QEvent* event)
///
void q_quick3drenderextension_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3drenderextension_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3drenderextension_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback bool func(QQuick3DRenderExtension* self, QObject* watched, QEvent* event)
///
void q_quick3drenderextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QTimerEvent*
///
void q_quick3drenderextension_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QTimerEvent*
///
void q_quick3drenderextension_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QTimerEvent* event)
///
void q_quick3drenderextension_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QChildEvent*
///
void q_quick3drenderextension_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QChildEvent*
///
void q_quick3drenderextension_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QChildEvent* event)
///
void q_quick3drenderextension_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QEvent*
///
void q_quick3drenderextension_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param event QEvent*
///
void q_quick3drenderextension_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QEvent* event)
///
void q_quick3drenderextension_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
void q_quick3drenderextension_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
void q_quick3drenderextension_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QMetaMethod* signal)
///
void q_quick3drenderextension_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
void q_quick3drenderextension_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
void q_quick3drenderextension_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, QMetaMethod* signal)
///
void q_quick3drenderextension_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
bool q_quick3drenderextension_super_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback bool func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_is_component_complete(const void* self, bool (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
QObject* q_quick3drenderextension_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
QObject* q_quick3drenderextension_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback QObject* func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
int32_t q_quick3drenderextension_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
///
int32_t q_quick3drenderextension_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback int32_t func(QQuick3DRenderExtension* self)
///
void q_quick3drenderextension_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param signal const char*
///
int32_t q_quick3drenderextension_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param signal const char*
///
int32_t q_quick3drenderextension_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback int32_t func(QQuick3DRenderExtension* self, const char* signal)
///
void q_quick3drenderextension_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
bool q_quick3drenderextension_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param signal QMetaMethod*
///
bool q_quick3drenderextension_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQuick3DRenderExtension*
/// @param callback bool func(QQuick3DRenderExtension* self, QMetaMethod* signal)
///
void q_quick3drenderextension_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuick3DRenderExtension*
/// @param callback void func(QQuick3DRenderExtension* self, const char* objectName)
///
void q_quick3drenderextension_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3drenderextension.html#dtor.QQuick3DRenderExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3DRenderExtension*
///
void q_quick3drenderextension_delete(void* self);

#endif
