#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html)

/// q_quick3dgeometry_new constructs a new QQuick3DGeometry object.
///
QQuick3DGeometry* q_quick3dgeometry_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html)

/// q_quick3dgeometry_new2 constructs a new QQuick3DGeometry object.
///
/// @param parent QQuick3DObject*
///
QQuick3DGeometry* q_quick3dgeometry_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuick3DGeometry*
///
const QMetaObject* q_quick3dgeometry_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DGeometry*
/// @param callback const QMetaObject* func(const QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuick3DGeometry*
///
const QMetaObject* q_quick3dgeometry_super_meta_object(const void* self);

/// @param self QQuick3DGeometry*
/// @param param1 const char*
///
void* q_quick3dgeometry_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuick3DGeometry*
/// @param callback void* func(QQuick3DGeometry* self, const char* param1)
///
void q_quick3dgeometry_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuick3DGeometry*
/// @param param1 const char*
///
void* q_quick3dgeometry_super_metacast(void* self, const char* param1);

/// @param self QQuick3DGeometry*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dgeometry_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuick3DGeometry*
/// @param callback int32_t func(QQuick3DGeometry* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quick3dgeometry_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuick3DGeometry*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dgeometry_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quick3dgeometry_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#vertexData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DGeometry*
///
char* q_quick3dgeometry_vertex_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#indexData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DGeometry*
///
char* q_quick3dgeometry_index_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#attributeCount)
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_attribute_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#attribute)
///
/// @param self const QQuick3DGeometry*
/// @param index int
///
QQuick3DGeometry__Attribute* q_quick3dgeometry_attribute(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#primitiveType)
///
/// @param self const QQuick3DGeometry*
///
/// @return enum QQuick3DGeometry__PrimitiveType
///
int32_t q_quick3dgeometry_primitive_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#boundsMin)
///
/// @param self const QQuick3DGeometry*
///
QVector3D* q_quick3dgeometry_bounds_min(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#boundsMax)
///
/// @param self const QQuick3DGeometry*
///
QVector3D* q_quick3dgeometry_bounds_max(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#stride)
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_stride(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setVertexData)
///
/// @param self QQuick3DGeometry*
/// @param data char*
///
void q_quick3dgeometry_set_vertex_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setVertexData)
///
/// @param self QQuick3DGeometry*
/// @param offset int
/// @param data char*
///
void q_quick3dgeometry_set_vertex_data2(void* self, int offset, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setIndexData)
///
/// @param self QQuick3DGeometry*
/// @param data char*
///
void q_quick3dgeometry_set_index_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setIndexData)
///
/// @param self QQuick3DGeometry*
/// @param offset int
/// @param data char*
///
void q_quick3dgeometry_set_index_data2(void* self, int offset, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setStride)
///
/// @param self QQuick3DGeometry*
/// @param stride int
///
void q_quick3dgeometry_set_stride(void* self, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setBounds)
///
/// @param self QQuick3DGeometry*
/// @param min QVector3D*
/// @param max QVector3D*
///
void q_quick3dgeometry_set_bounds(void* self, const void* min, const void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setPrimitiveType)
///
/// @param self QQuick3DGeometry*
/// @param type enum QQuick3DGeometry__PrimitiveType
///
void q_quick3dgeometry_set_primitive_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addAttribute)
///
/// @param self QQuick3DGeometry*
/// @param semantic enum QQuick3DGeometry__Attribute__Semantic
/// @param offset int
/// @param componentType enum QQuick3DGeometry__Attribute__ComponentType
///
void q_quick3dgeometry_add_attribute(void* self, int32_t semantic, int offset, int32_t componentType);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addAttribute)
///
/// @param self QQuick3DGeometry*
/// @param att QQuick3DGeometry__Attribute*
///
void q_quick3dgeometry_add_attribute2(void* self, const void* att);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetCount)
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_subset_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetBoundsMin)
///
/// @param self const QQuick3DGeometry*
/// @param subset int
///
QVector3D* q_quick3dgeometry_subset_bounds_min(const void* self, int subset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetBoundsMax)
///
/// @param self const QQuick3DGeometry*
/// @param subset int
///
QVector3D* q_quick3dgeometry_subset_bounds_max(const void* self, int subset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetOffset)
///
/// @param self const QQuick3DGeometry*
/// @param subset int
///
int32_t q_quick3dgeometry_subset_offset(const void* self, int subset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetCount)
///
/// @param self const QQuick3DGeometry*
/// @param subset int
///
int32_t q_quick3dgeometry_subset_count2(const void* self, int subset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DGeometry*
/// @param subset int
///
const char* q_quick3dgeometry_subset_name(const void* self, int subset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addSubset)
///
/// @param self QQuick3DGeometry*
/// @param offset int
/// @param count int
/// @param boundsMin QVector3D*
/// @param boundsMax QVector3D*
///
void q_quick3dgeometry_add_subset(void* self, int offset, int count, const void* boundsMin, const void* boundsMax);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DGeometry*
///
char* q_quick3dgeometry_target_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setTargetData)
///
/// @param self QQuick3DGeometry*
/// @param data char*
///
void q_quick3dgeometry_set_target_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setTargetData)
///
/// @param self QQuick3DGeometry*
/// @param offset int
/// @param data char*
///
void q_quick3dgeometry_set_target_data2(void* self, int offset, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetAttribute)
///
/// @param self const QQuick3DGeometry*
/// @param index int
///
QQuick3DGeometry__TargetAttribute* q_quick3dgeometry_target_attribute(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetAttributeCount)
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_target_attribute_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
///
/// @param self QQuick3DGeometry*
/// @param targetId uint32_t
/// @param semantic enum QQuick3DGeometry__Attribute__Semantic
/// @param offset int
///
void q_quick3dgeometry_add_target_attribute(void* self, uint32_t targetId, int32_t semantic, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
///
/// @param self QQuick3DGeometry*
/// @param att QQuick3DGeometry__TargetAttribute*
///
void q_quick3dgeometry_add_target_attribute2(void* self, const void* att);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#clear)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryNodeDirty)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_geometry_node_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryNodeDirty)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_geometry_node_dirty(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryChanged)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_geometry_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryChanged)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_geometry_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_mark_all_dirty(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
///
/// Base class method implementation
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_super_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quick3dgeometry_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quick3dgeometry_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addSubset)
///
/// @param self QQuick3DGeometry*
/// @param offset int
/// @param count int
/// @param boundsMin QVector3D*
/// @param boundsMax QVector3D*
/// @param name const char*
///
void q_quick3dgeometry_add_subset5(void* self, int offset, int count, const void* boundsMin, const void* boundsMax, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
///
/// @param self QQuick3DGeometry*
/// @param targetId uint32_t
/// @param semantic enum QQuick3DGeometry__Attribute__Semantic
/// @param offset int
/// @param stride int
///
void q_quick3dgeometry_add_target_attribute4(void* self, uint32_t targetId, int32_t semantic, int offset, int stride);

/// Inherited from QQuick3DObject
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self const QQuick3DGeometry*
///
QQmlParserStatus* q_quick3dgeometry_as_q_qml_parser_status(const void* self);

/// Inherited from QQuick3DObject
///
/// Downcasts to a QQuick3DGeometry object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuick3DGeometry* q_quick3dgeometry_from_q_qml_parser_status(const void* _qqmlparserstatus);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DGeometry*
///
const char* q_quick3dgeometry_state(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
///
/// @param self QQuick3DGeometry*
/// @param state const char*
///
void q_quick3dgeometry_set_state(void* self, const char* state);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
///
/// @param self const QQuick3DGeometry*
///
/// @return libqt_list of QQuick3DObject*
///
libqt_list q_quick3dgeometry_child_items(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
///
/// @param self const QQuick3DGeometry*
///
QQuick3DObject* q_quick3dgeometry_parent_item(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_update(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
///
/// @param self QQuick3DGeometry*
/// @param parentItem QQuick3DObject*
///
void q_quick3dgeometry_set_parent_item(void* self, void* parentItem);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_parent_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_children_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_state_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_state_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DGeometry*
///
const char* q_quick3dgeometry_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuick3DGeometry*
/// @param name const char*
///
void q_quick3dgeometry_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuick3DGeometry*
/// @param b bool
///
bool q_quick3dgeometry_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuick3DGeometry*
///
QThread* q_quick3dgeometry_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuick3DGeometry*
/// @param thread QThread*
///
bool q_quick3dgeometry_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DGeometry*
/// @param interval int
///
int32_t q_quick3dgeometry_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DGeometry*
/// @param time int64_t of nanoseconds
///
int32_t q_quick3dgeometry_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DGeometry*
/// @param id int
///
void q_quick3dgeometry_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DGeometry*
/// @param id enum Qt__TimerId
///
void q_quick3dgeometry_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuick3DGeometry*
///
/// @return libqt_list of QObject*
///
libqt_list q_quick3dgeometry_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuick3DGeometry*
/// @param parent QObject*
///
void q_quick3dgeometry_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuick3DGeometry*
/// @param filterObj QObject*
///
void q_quick3dgeometry_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuick3DGeometry*
/// @param obj QObject*
///
void q_quick3dgeometry_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dgeometry_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quick3dgeometry_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DGeometry*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dgeometry_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dgeometry_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quick3dgeometry_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
/// @param receiver QObject*
///
bool q_quick3dgeometry_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quick3dgeometry_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuick3DGeometry*
///
void q_quick3dgeometry_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuick3DGeometry*
///
void q_quick3dgeometry_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuick3DGeometry*
/// @param name const char*
/// @param value QVariant*
///
bool q_quick3dgeometry_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuick3DGeometry*
/// @param name const char*
///
QVariant* q_quick3dgeometry_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DGeometry*
///
const char** q_quick3dgeometry_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DGeometry*
///
QBindingStorage* q_quick3dgeometry_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuick3DGeometry*
///
const QBindingStorage* q_quick3dgeometry_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuick3DGeometry*
///
QObject* q_quick3dgeometry_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuick3DGeometry*
/// @param classname const char*
///
bool q_quick3dgeometry_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DGeometry*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dgeometry_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DGeometry*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dgeometry_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quick3dgeometry_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quick3dgeometry_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DGeometry*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quick3dgeometry_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
/// @param signal const char*
///
bool q_quick3dgeometry_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quick3dgeometry_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dgeometry_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DGeometry*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dgeometry_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DGeometry*
/// @param param1 QObject*
///
void q_quick3dgeometry_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QObject* param1)
///
void q_quick3dgeometry_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dgeometry_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dgeometry_super_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, enum QQuick3DObject__ItemChange param1, QQuick3DObject__ItemChangeData* param2)
///
void q_quick3dgeometry_on_item_change(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_super_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_class_begin(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_super_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_component_complete(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_super_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_pre_sync(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QEvent*
///
bool q_quick3dgeometry_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QEvent*
///
bool q_quick3dgeometry_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback bool func(QQuick3DGeometry* self, QEvent* event)
///
void q_quick3dgeometry_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dgeometry_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dgeometry_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback bool func(QQuick3DGeometry* self, QObject* watched, QEvent* event)
///
void q_quick3dgeometry_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QTimerEvent*
///
void q_quick3dgeometry_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QTimerEvent*
///
void q_quick3dgeometry_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QTimerEvent* event)
///
void q_quick3dgeometry_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QChildEvent*
///
void q_quick3dgeometry_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QChildEvent*
///
void q_quick3dgeometry_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QChildEvent* event)
///
void q_quick3dgeometry_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QEvent*
///
void q_quick3dgeometry_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param event QEvent*
///
void q_quick3dgeometry_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QEvent* event)
///
void q_quick3dgeometry_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param signal QMetaMethod*
///
void q_quick3dgeometry_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param signal QMetaMethod*
///
void q_quick3dgeometry_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QMetaMethod* signal)
///
void q_quick3dgeometry_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param signal QMetaMethod*
///
void q_quick3dgeometry_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param signal QMetaMethod*
///
void q_quick3dgeometry_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, QMetaMethod* signal)
///
void q_quick3dgeometry_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
bool q_quick3dgeometry_super_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback bool func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_is_component_complete(void* self, bool (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
QObject* q_quick3dgeometry_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
QObject* q_quick3dgeometry_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback QObject* func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DGeometry*
///
int32_t q_quick3dgeometry_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback int32_t func(QQuick3DGeometry* self)
///
void q_quick3dgeometry_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DGeometry*
/// @param signal const char*
///
int32_t q_quick3dgeometry_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DGeometry*
/// @param signal const char*
///
int32_t q_quick3dgeometry_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback int32_t func(QQuick3DGeometry* self, const char* signal)
///
void q_quick3dgeometry_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DGeometry*
/// @param signal QMetaMethod*
///
bool q_quick3dgeometry_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DGeometry*
/// @param signal QMetaMethod*
///
bool q_quick3dgeometry_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DGeometry*
/// @param callback bool func(QQuick3DGeometry* self, QMetaMethod* signal)
///
void q_quick3dgeometry_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuick3DGeometry*
/// @param callback void func(QQuick3DGeometry* self, const char* objectName)
///
void q_quick3dgeometry_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#dtor.QQuick3DGeometry)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3DGeometry*
///
void q_quick3dgeometry_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html)

/// q_quick3dgeometry__attribute_new constructs a new QQuick3DGeometry::Attribute object.
///
QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html)

/// q_quick3dgeometry__attribute_new2 constructs a new QQuick3DGeometry::Attribute object.
///
/// @param other QQuick3DGeometry__Attribute*
///
QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html)

/// q_quick3dgeometry__attribute_new3 constructs a new QQuick3DGeometry::Attribute object and invalidates the source QQuick3DGeometry::Attribute object.
///
/// @param other QQuick3DGeometry__Attribute*
///
QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new3(void* other);

/// q_quick3dgeometry__attribute_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuick3DGeometry__Attribute*
/// @param other QQuick3DGeometry__Attribute*
///
void q_quick3dgeometry__attribute_copy_assign(void* self, void* other);

/// q_quick3dgeometry__attribute_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuick3DGeometry__Attribute*
/// @param other QQuick3DGeometry__Attribute*
///
void q_quick3dgeometry__attribute_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#semantic-var)
///
/// @param self const QQuick3DGeometry__Attribute*
///
/// @return enum QQuick3DGeometry__Attribute__Semantic
///
int32_t q_quick3dgeometry__attribute_semantic(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#semantic-var)
///
/// @param self QQuick3DGeometry__Attribute*
/// @param semantic enum QQuick3DGeometry__Attribute__Semantic
///
void q_quick3dgeometry__attribute_set_semantic(void* self, int32_t semantic);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#offset-var)
///
/// @param self const QQuick3DGeometry__Attribute*
///
int32_t q_quick3dgeometry__attribute_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#offset-var)
///
/// @param self QQuick3DGeometry__Attribute*
/// @param offset int
///
void q_quick3dgeometry__attribute_set_offset(void* self, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#componentType-var)
///
/// @param self const QQuick3DGeometry__Attribute*
///
/// @return enum QQuick3DGeometry__Attribute__ComponentType
///
int32_t q_quick3dgeometry__attribute_component_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#componentType-var)
///
/// @param self QQuick3DGeometry__Attribute*
/// @param componentType enum QQuick3DGeometry__Attribute__ComponentType
///
void q_quick3dgeometry__attribute_set_component_type(void* self, int32_t componentType);

/// Delete this object from C++ memory.
///
/// @param self QQuick3DGeometry__Attribute*
///
void q_quick3dgeometry__attribute_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html)

/// q_quick3dgeometry__targetattribute_new constructs a new QQuick3DGeometry::TargetAttribute object.
///
QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html)

/// q_quick3dgeometry__targetattribute_new2 constructs a new QQuick3DGeometry::TargetAttribute object.
///
/// @param other QQuick3DGeometry__TargetAttribute*
///
QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html)

/// q_quick3dgeometry__targetattribute_new3 constructs a new QQuick3DGeometry::TargetAttribute object and invalidates the source QQuick3DGeometry::TargetAttribute object.
///
/// @param other QQuick3DGeometry__TargetAttribute*
///
QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new3(void* other);

/// q_quick3dgeometry__targetattribute_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuick3DGeometry__TargetAttribute*
/// @param other QQuick3DGeometry__TargetAttribute*
///
void q_quick3dgeometry__targetattribute_copy_assign(void* self, void* other);

/// q_quick3dgeometry__targetattribute_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuick3DGeometry__TargetAttribute*
/// @param other QQuick3DGeometry__TargetAttribute*
///
void q_quick3dgeometry__targetattribute_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#targetId-var)
///
/// @param self const QQuick3DGeometry__TargetAttribute*
///
uint32_t q_quick3dgeometry__targetattribute_target_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#targetId-var)
///
/// @param self QQuick3DGeometry__TargetAttribute*
/// @param targetId uint32_t
///
void q_quick3dgeometry__targetattribute_set_target_id(void* self, uint32_t targetId);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#attr-var)
///
/// @param self const QQuick3DGeometry__TargetAttribute*
///
QQuick3DGeometry__Attribute* q_quick3dgeometry__targetattribute_attr(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#attr-var)
///
/// @param self QQuick3DGeometry__TargetAttribute*
/// @param attr QQuick3DGeometry__Attribute*
///
void q_quick3dgeometry__targetattribute_set_attr(void* self, void* attr);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#stride-var)
///
/// @param self const QQuick3DGeometry__TargetAttribute*
///
int32_t q_quick3dgeometry__targetattribute_stride(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#stride-var)
///
/// @param self QQuick3DGeometry__TargetAttribute*
/// @param stride int
///
void q_quick3dgeometry__targetattribute_set_stride(void* self, int stride);

/// Delete this object from C++ memory.
///
/// @param self QQuick3DGeometry__TargetAttribute*
///
void q_quick3dgeometry__targetattribute_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#public-types)

typedef enum {
    QQUICK3DGEOMETRY_PRIMITIVETYPE_POINTS = 0,
    QQUICK3DGEOMETRY_PRIMITIVETYPE_LINESTRIP = 1,
    QQUICK3DGEOMETRY_PRIMITIVETYPE_LINES = 2,
    QQUICK3DGEOMETRY_PRIMITIVETYPE_TRIANGLESTRIP = 3,
    QQUICK3DGEOMETRY_PRIMITIVETYPE_TRIANGLEFAN = 4,
    QQUICK3DGEOMETRY_PRIMITIVETYPE_TRIANGLES = 5
} QQuick3DGeometry__PrimitiveType;

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#public-types)

typedef enum {
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_INDEXSEMANTIC = 0,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_POSITIONSEMANTIC = 1,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_NORMALSEMANTIC = 2,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TEXCOORDSEMANTIC = 3,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TANGENTSEMANTIC = 4,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_BINORMALSEMANTIC = 5,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_JOINTSEMANTIC = 6,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_WEIGHTSEMANTIC = 7,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_COLORSEMANTIC = 8,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TARGETPOSITIONSEMANTIC = 9,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TARGETNORMALSEMANTIC = 10,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TARGETTANGENTSEMANTIC = 11,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TARGETBINORMALSEMANTIC = 12,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TEXCOORD1SEMANTIC = 13,
    QQUICK3DGEOMETRY_ATTRIBUTE_SEMANTIC_TEXCOORD0SEMANTIC = 3
} QQuick3DGeometry__Attribute__Semantic;

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#public-types)

typedef enum {
    QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_U16TYPE = 0,
    QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_U32TYPE = 1,
    QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_I32TYPE = 2,
    QQUICK3DGEOMETRY_ATTRIBUTE_COMPONENTTYPE_F32TYPE = 3
} QQuick3DGeometry__Attribute__ComponentType;

#endif
