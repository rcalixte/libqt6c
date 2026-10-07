#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html)

/// q_quick3dinstancing_new constructs a new QQuick3DInstancing object.
///
QQuick3DInstancing* q_quick3dinstancing_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html)

/// q_quick3dinstancing_new2 constructs a new QQuick3DInstancing object.
///
/// @param parent QQuick3DObject*
///
QQuick3DInstancing* q_quick3dinstancing_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuick3DInstancing*
///
const QMetaObject* q_quick3dinstancing_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DInstancing*
/// @param callback const QMetaObject* func(const QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuick3DInstancing*
///
const QMetaObject* q_quick3dinstancing_super_meta_object(const void* self);

/// @param self QQuick3DInstancing*
/// @param param1 const char*
///
void* q_quick3dinstancing_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuick3DInstancing*
/// @param callback void* func(QQuick3DInstancing* self, const char* param1)
///
void q_quick3dinstancing_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuick3DInstancing*
/// @param param1 const char*
///
void* q_quick3dinstancing_super_metacast(void* self, const char* param1);

/// @param self QQuick3DInstancing*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dinstancing_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuick3DInstancing*
/// @param callback int32_t func(QQuick3DInstancing* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quick3dinstancing_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuick3DInstancing*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dinstancing_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quick3dinstancing_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceBuffer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuick3DInstancing*
/// @param instanceCount int*
///
const char* q_quick3dinstancing_instance_buffer(void* self, int* instanceCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverride)
///
/// @param self const QQuick3DInstancing*
///
int32_t q_quick3dinstancing_instance_count_override(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparency)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_has_transparency(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabled)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_depth_sorting_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instancePosition)
///
/// @param self QQuick3DInstancing*
/// @param index int
///
QVector3D* q_quick3dinstancing_instance_position(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceScale)
///
/// @param self QQuick3DInstancing*
/// @param index int
///
QVector3D* q_quick3dinstancing_instance_scale(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceRotation)
///
/// @param self QQuick3DInstancing*
/// @param index int
///
QQuaternion* q_quick3dinstancing_instance_rotation(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceColor)
///
/// @param self QQuick3DInstancing*
/// @param index int
///
QColor* q_quick3dinstancing_instance_color(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCustomData)
///
/// @param self QQuick3DInstancing*
/// @param index int
///
QVector4D* q_quick3dinstancing_instance_custom_data(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setInstanceCountOverride)
///
/// @param self QQuick3DInstancing*
/// @param instanceCountOverride int
///
void q_quick3dinstancing_set_instance_count_override(void* self, int instanceCountOverride);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setHasTransparency)
///
/// @param self QQuick3DInstancing*
/// @param hasTransparency bool
///
void q_quick3dinstancing_set_has_transparency(void* self, bool hasTransparency);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setDepthSortingEnabled)
///
/// @param self QQuick3DInstancing*
/// @param enabled bool
///
void q_quick3dinstancing_set_depth_sorting_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceTableChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_instance_table_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceTableChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_instance_table_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceNodeDirty)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_instance_node_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceNodeDirty)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_instance_node_dirty(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverrideChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_instance_count_override_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverrideChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_instance_count_override_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparencyChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_has_transparency_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparencyChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_has_transparency_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabledChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_depth_sorting_enabled_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabledChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_depth_sorting_enabled_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#getInstanceBuffer)
///
/// @warning This method must be implemented with `q_quick3dinstancing_on_get_instance_buffer` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuick3DInstancing*
/// @param instanceCount int*
///
const char* q_quick3dinstancing_get_instance_buffer(void* self, int* instanceCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#getInstanceBuffer)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DInstancing*
/// @param callback libqt_string func(QQuick3DInstancing* self, int* instanceCount)
///
void q_quick3dinstancing_on_get_instance_buffer(void* self, libqt_string (*callback)(void*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#markDirty)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_mark_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntry)
///
/// @param self QQuick3DInstancing*
/// @param position QVector3D*
/// @param scale QVector3D*
/// @param eulerRotation QVector3D*
/// @param color QColor*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry(void* self, const void* position, const void* scale, const void* eulerRotation, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntryFromQuaternion)
///
/// @param self QQuick3DInstancing*
/// @param position QVector3D*
/// @param scale QVector3D*
/// @param rotation QQuaternion*
/// @param color QColor*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry_from_quaternion(void* self, const void* position, const void* scale, const void* rotation, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quick3dinstancing_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quick3dinstancing_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntry)
///
/// @param self QQuick3DInstancing*
/// @param position QVector3D*
/// @param scale QVector3D*
/// @param eulerRotation QVector3D*
/// @param color QColor*
/// @param customData QVector4D*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry5(void* self, const void* position, const void* scale, const void* eulerRotation, const void* color, const void* customData);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntryFromQuaternion)
///
/// @param self QQuick3DInstancing*
/// @param position QVector3D*
/// @param scale QVector3D*
/// @param rotation QQuaternion*
/// @param color QColor*
/// @param customData QVector4D*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry_from_quaternion5(void* self, const void* position, const void* scale, const void* rotation, const void* color, const void* customData);

/// Inherited from QQuick3DObject
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self const QQuick3DInstancing*
///
QQmlParserStatus* q_quick3dinstancing_as_q_qml_parser_status(const void* self);

/// Inherited from QQuick3DObject
///
/// Downcasts to a QQuick3DInstancing object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuick3DInstancing* q_quick3dinstancing_from_q_qml_parser_status(const void* _qqmlparserstatus);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DInstancing*
///
const char* q_quick3dinstancing_state(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
///
/// @param self QQuick3DInstancing*
/// @param state const char*
///
void q_quick3dinstancing_set_state(void* self, const char* state);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
///
/// @param self const QQuick3DInstancing*
///
/// @return libqt_list of QQuick3DObject*
///
libqt_list q_quick3dinstancing_child_items(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
///
/// @param self const QQuick3DInstancing*
///
QQuick3DObject* q_quick3dinstancing_parent_item(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_update(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
///
/// @param self QQuick3DInstancing*
/// @param parentItem QQuick3DObject*
///
void q_quick3dinstancing_set_parent_item(void* self, void* parentItem);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_parent_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_children_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_state_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_state_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DInstancing*
///
const char* q_quick3dinstancing_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuick3DInstancing*
/// @param name const char*
///
void q_quick3dinstancing_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuick3DInstancing*
/// @param b bool
///
bool q_quick3dinstancing_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuick3DInstancing*
///
QThread* q_quick3dinstancing_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuick3DInstancing*
/// @param thread QThread*
///
bool q_quick3dinstancing_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DInstancing*
/// @param interval int
///
int32_t q_quick3dinstancing_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DInstancing*
/// @param time int64_t of nanoseconds
///
int32_t q_quick3dinstancing_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DInstancing*
/// @param id int
///
void q_quick3dinstancing_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DInstancing*
/// @param id enum Qt__TimerId
///
void q_quick3dinstancing_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuick3DInstancing*
///
/// @return libqt_list of QObject*
///
libqt_list q_quick3dinstancing_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuick3DInstancing*
/// @param parent QObject*
///
void q_quick3dinstancing_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuick3DInstancing*
/// @param filterObj QObject*
///
void q_quick3dinstancing_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuick3DInstancing*
/// @param obj QObject*
///
void q_quick3dinstancing_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dinstancing_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quick3dinstancing_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DInstancing*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dinstancing_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dinstancing_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quick3dinstancing_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
/// @param receiver QObject*
///
bool q_quick3dinstancing_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quick3dinstancing_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuick3DInstancing*
///
void q_quick3dinstancing_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuick3DInstancing*
///
void q_quick3dinstancing_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuick3DInstancing*
/// @param name const char*
/// @param value QVariant*
///
bool q_quick3dinstancing_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuick3DInstancing*
/// @param name const char*
///
QVariant* q_quick3dinstancing_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DInstancing*
///
const char** q_quick3dinstancing_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DInstancing*
///
QBindingStorage* q_quick3dinstancing_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuick3DInstancing*
///
const QBindingStorage* q_quick3dinstancing_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuick3DInstancing*
///
QObject* q_quick3dinstancing_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuick3DInstancing*
/// @param classname const char*
///
bool q_quick3dinstancing_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DInstancing*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dinstancing_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DInstancing*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dinstancing_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quick3dinstancing_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quick3dinstancing_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DInstancing*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quick3dinstancing_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
/// @param signal const char*
///
bool q_quick3dinstancing_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quick3dinstancing_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dinstancing_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DInstancing*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dinstancing_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DInstancing*
/// @param param1 QObject*
///
void q_quick3dinstancing_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QObject* param1)
///
void q_quick3dinstancing_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_mark_all_dirty(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_super_mark_all_dirty(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_mark_all_dirty(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dinstancing_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dinstancing_super_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, enum QQuick3DObject__ItemChange param1, QQuick3DObject__ItemChangeData* param2)
///
void q_quick3dinstancing_on_item_change(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_super_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_class_begin(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_super_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_component_complete(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_super_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_pre_sync(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QEvent*
///
bool q_quick3dinstancing_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QEvent*
///
bool q_quick3dinstancing_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback bool func(QQuick3DInstancing* self, QEvent* event)
///
void q_quick3dinstancing_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dinstancing_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dinstancing_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback bool func(QQuick3DInstancing* self, QObject* watched, QEvent* event)
///
void q_quick3dinstancing_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QTimerEvent*
///
void q_quick3dinstancing_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QTimerEvent*
///
void q_quick3dinstancing_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QTimerEvent* event)
///
void q_quick3dinstancing_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QChildEvent*
///
void q_quick3dinstancing_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QChildEvent*
///
void q_quick3dinstancing_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QChildEvent* event)
///
void q_quick3dinstancing_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QEvent*
///
void q_quick3dinstancing_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param event QEvent*
///
void q_quick3dinstancing_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QEvent* event)
///
void q_quick3dinstancing_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param signal QMetaMethod*
///
void q_quick3dinstancing_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param signal QMetaMethod*
///
void q_quick3dinstancing_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QMetaMethod* signal)
///
void q_quick3dinstancing_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param signal QMetaMethod*
///
void q_quick3dinstancing_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param signal QMetaMethod*
///
void q_quick3dinstancing_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, QMetaMethod* signal)
///
void q_quick3dinstancing_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
bool q_quick3dinstancing_super_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback bool func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_is_component_complete(void* self, bool (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
QObject* q_quick3dinstancing_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
QObject* q_quick3dinstancing_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback QObject* func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
int32_t q_quick3dinstancing_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DInstancing*
///
int32_t q_quick3dinstancing_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback int32_t func(QQuick3DInstancing* self)
///
void q_quick3dinstancing_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DInstancing*
/// @param signal const char*
///
int32_t q_quick3dinstancing_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DInstancing*
/// @param signal const char*
///
int32_t q_quick3dinstancing_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback int32_t func(QQuick3DInstancing* self, const char* signal)
///
void q_quick3dinstancing_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DInstancing*
/// @param signal QMetaMethod*
///
bool q_quick3dinstancing_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DInstancing*
/// @param signal QMetaMethod*
///
bool q_quick3dinstancing_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DInstancing*
/// @param callback bool func(QQuick3DInstancing* self, QMetaMethod* signal)
///
void q_quick3dinstancing_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuick3DInstancing*
/// @param callback void func(QQuick3DInstancing* self, const char* objectName)
///
void q_quick3dinstancing_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#dtor.QQuick3DInstancing)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3DInstancing*
///
void q_quick3dinstancing_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html)

/// q_quick3dinstancing__instancetableentry_new constructs a new QQuick3DInstancing::InstanceTableEntry object.
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html)

/// q_quick3dinstancing__instancetableentry_new2 constructs a new QQuick3DInstancing::InstanceTableEntry object.
///
/// @param other QQuick3DInstancing__InstanceTableEntry*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html)

/// q_quick3dinstancing__instancetableentry_new3 constructs a new QQuick3DInstancing::InstanceTableEntry object and invalidates the source QQuick3DInstancing::InstanceTableEntry object.
///
/// @param other QQuick3DInstancing__InstanceTableEntry*
///
QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new3(void* other);

/// q_quick3dinstancing__instancetableentry_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param other QQuick3DInstancing__InstanceTableEntry*
///
void q_quick3dinstancing__instancetableentry_copy_assign(void* self, void* other);

/// q_quick3dinstancing__instancetableentry_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param other QQuick3DInstancing__InstanceTableEntry*
///
void q_quick3dinstancing__instancetableentry_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row0-var)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector4D* q_quick3dinstancing__instancetableentry_row0(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row0-var)
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param row0 QVector4D*
///
void q_quick3dinstancing__instancetableentry_set_row0(void* self, void* row0);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row1-var)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector4D* q_quick3dinstancing__instancetableentry_row1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row1-var)
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param row1 QVector4D*
///
void q_quick3dinstancing__instancetableentry_set_row1(void* self, void* row1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row2-var)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector4D* q_quick3dinstancing__instancetableentry_row2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row2-var)
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param row2 QVector4D*
///
void q_quick3dinstancing__instancetableentry_set_row2(void* self, void* row2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#color-var)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector4D* q_quick3dinstancing__instancetableentry_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#color-var)
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param color QVector4D*
///
void q_quick3dinstancing__instancetableentry_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#instanceData-var)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector4D* q_quick3dinstancing__instancetableentry_instance_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#instanceData-var)
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
/// @param instanceData QVector4D*
///
void q_quick3dinstancing__instancetableentry_set_instance_data(void* self, void* instanceData);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getPosition)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector3D* q_quick3dinstancing__instancetableentry_get_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getScale)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QVector3D* q_quick3dinstancing__instancetableentry_get_scale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getRotation)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QQuaternion* q_quick3dinstancing__instancetableentry_get_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getColor)
///
/// @param self const QQuick3DInstancing__InstanceTableEntry*
///
QColor* q_quick3dinstancing__instancetableentry_get_color(const void* self);

/// Delete this object from C++ memory.
///
/// @param self QQuick3DInstancing__InstanceTableEntry*
///
void q_quick3dinstancing__instancetableentry_delete(void* self);

#endif
