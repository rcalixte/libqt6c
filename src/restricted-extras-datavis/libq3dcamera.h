#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html)

/// q_3dcamera_new constructs a new Q3DCamera object.
///
Q3DCamera* q_3dcamera_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html)

/// q_3dcamera_new2 constructs a new Q3DCamera object.
///
/// @param parent QObject*
///
Q3DCamera* q_3dcamera_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DCamera*
///
const QMetaObject* q_3dcamera_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DCamera*
/// @param callback const QMetaObject* func(const Q3DCamera* self)
///
void q_3dcamera_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DCamera*
///
const QMetaObject* q_3dcamera_super_meta_object(const void* self);

/// @param self Q3DCamera*
/// @param param1 const char*
///
void* q_3dcamera_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DCamera*
/// @param callback void* func(Q3DCamera* self, const char* param1)
///
void q_3dcamera_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DCamera*
/// @param param1 const char*
///
void* q_3dcamera_super_metacast(void* self, const char* param1);

/// @param self Q3DCamera*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dcamera_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DCamera*
/// @param callback int32_t func(Q3DCamera* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dcamera_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DCamera*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dcamera_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dcamera_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotation)
///
/// @param self const Q3DCamera*
///
float q_3dcamera_x_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setXRotation)
///
/// @param self Q3DCamera*
/// @param rotation float
///
void q_3dcamera_set_x_rotation(void* self, float rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotation)
///
/// @param self const Q3DCamera*
///
float q_3dcamera_y_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setYRotation)
///
/// @param self Q3DCamera*
/// @param rotation float
///
void q_3dcamera_set_y_rotation(void* self, float rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotation)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_wrap_x_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setWrapXRotation)
///
/// @param self Q3DCamera*
/// @param isEnabled bool
///
void q_3dcamera_set_wrap_x_rotation(void* self, bool isEnabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotation)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_wrap_y_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setWrapYRotation)
///
/// @param self Q3DCamera*
/// @param isEnabled bool
///
void q_3dcamera_set_wrap_y_rotation(void* self, bool isEnabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
///
/// @param self Q3DCamera*
/// @param source Q3DObject*
///
void q_3dcamera_copy_values_from(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
///
/// Allows for overriding the related default method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, Q3DObject* source)
///
void q_3dcamera_on_copy_values_from(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
///
/// Base class method implementation
///
/// @param self Q3DCamera*
/// @param source Q3DObject*
///
void q_3dcamera_super_copy_values_from(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPreset)
///
/// @param self const Q3DCamera*
///
/// @return enum Q3DCamera__CameraPreset
///
int32_t q_3dcamera_camera_preset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPreset)
///
/// @param self Q3DCamera*
/// @param preset enum Q3DCamera__CameraPreset
///
void q_3dcamera_set_camera_preset(void* self, int32_t preset);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevel)
///
/// @param self const Q3DCamera*
///
float q_3dcamera_zoom_level(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setZoomLevel)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_set_zoom_level(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevel)
///
/// @param self const Q3DCamera*
///
float q_3dcamera_min_zoom_level(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setMinZoomLevel)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_set_min_zoom_level(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevel)
///
/// @param self const Q3DCamera*
///
float q_3dcamera_max_zoom_level(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setMaxZoomLevel)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_set_max_zoom_level(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPosition)
///
/// @param self Q3DCamera*
/// @param horizontal float
/// @param vertical float
///
void q_3dcamera_set_camera_position(void* self, float horizontal, float vertical);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#target)
///
/// @param self const Q3DCamera*
///
QVector3D* q_3dcamera_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setTarget)
///
/// @param self Q3DCamera*
/// @param target QVector3D*
///
void q_3dcamera_set_target(void* self, const void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotationChanged)
///
/// @param self Q3DCamera*
/// @param rotation float
///
void q_3dcamera_x_rotation_changed(void* self, float rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotationChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, float rotation)
///
void q_3dcamera_on_x_rotation_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotationChanged)
///
/// @param self Q3DCamera*
/// @param rotation float
///
void q_3dcamera_y_rotation_changed(void* self, float rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotationChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, float rotation)
///
void q_3dcamera_on_y_rotation_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_zoom_level_changed(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, float zoomLevel)
///
void q_3dcamera_on_zoom_level_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPresetChanged)
///
/// @param self Q3DCamera*
/// @param preset enum Q3DCamera__CameraPreset
///
void q_3dcamera_camera_preset_changed(void* self, int32_t preset);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPresetChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, enum Q3DCamera__CameraPreset preset)
///
void q_3dcamera_on_camera_preset_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotationChanged)
///
/// @param self Q3DCamera*
/// @param isEnabled bool
///
void q_3dcamera_wrap_x_rotation_changed(void* self, bool isEnabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotationChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, bool isEnabled)
///
void q_3dcamera_on_wrap_x_rotation_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotationChanged)
///
/// @param self Q3DCamera*
/// @param isEnabled bool
///
void q_3dcamera_wrap_y_rotation_changed(void* self, bool isEnabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotationChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, bool isEnabled)
///
void q_3dcamera_on_wrap_y_rotation_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#targetChanged)
///
/// @param self Q3DCamera*
/// @param target QVector3D*
///
void q_3dcamera_target_changed(void* self, const void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#targetChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QVector3D* target)
///
void q_3dcamera_on_target_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_min_zoom_level_changed(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, float zoomLevel)
///
void q_3dcamera_on_min_zoom_level_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param zoomLevel float
///
void q_3dcamera_max_zoom_level_changed(void* self, float zoomLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevelChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, float zoomLevel)
///
void q_3dcamera_on_max_zoom_level_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dcamera_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dcamera_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPosition)
///
/// @param self Q3DCamera*
/// @param horizontal float
/// @param vertical float
/// @param zoom float
///
void q_3dcamera_set_camera_position3(void* self, float horizontal, float vertical, float zoom);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#parentScene)
///
/// @param self Q3DCamera*
///
Q3DScene* q_3dcamera_parent_scene(void* self);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#position)
///
/// @param self const Q3DCamera*
///
QVector3D* q_3dcamera_position(const void* self);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setPosition)
///
/// @param self Q3DCamera*
/// @param position QVector3D*
///
void q_3dcamera_set_position(void* self, const void* position);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#positionChanged)
///
/// @param self Q3DCamera*
/// @param position QVector3D*
///
void q_3dcamera_position_changed(void* self, const void* position);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#positionChanged)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QVector3D* position)
///
void q_3dcamera_on_position_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DCamera*
///
const char* q_3dcamera_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DCamera*
/// @param name const char*
///
void q_3dcamera_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DCamera*
/// @param b bool
///
bool q_3dcamera_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DCamera*
///
QThread* q_3dcamera_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DCamera*
/// @param thread QThread*
///
bool q_3dcamera_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DCamera*
/// @param interval int
///
int32_t q_3dcamera_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DCamera*
/// @param time int64_t of nanoseconds
///
int32_t q_3dcamera_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DCamera*
/// @param id int
///
void q_3dcamera_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DCamera*
/// @param id enum Qt__TimerId
///
void q_3dcamera_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DCamera*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dcamera_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Q3DCamera*
/// @param parent QObject*
///
void q_3dcamera_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DCamera*
/// @param filterObj QObject*
///
void q_3dcamera_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DCamera*
/// @param obj QObject*
///
void q_3dcamera_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dcamera_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dcamera_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DCamera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dcamera_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dcamera_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dcamera_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
/// @param receiver QObject*
///
bool q_3dcamera_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dcamera_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DCamera*
///
void q_3dcamera_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DCamera*
///
void q_3dcamera_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DCamera*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dcamera_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DCamera*
/// @param name const char*
///
QVariant* q_3dcamera_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DCamera*
///
const char** q_3dcamera_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DCamera*
///
QBindingStorage* q_3dcamera_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DCamera*
///
const QBindingStorage* q_3dcamera_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DCamera*
///
void q_3dcamera_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self)
///
void q_3dcamera_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Q3DCamera*
///
QObject* q_3dcamera_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DCamera*
/// @param classname const char*
///
bool q_3dcamera_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DCamera*
///
void q_3dcamera_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DCamera*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dcamera_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DCamera*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dcamera_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_3dcamera_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_3dcamera_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DCamera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dcamera_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
/// @param signal const char*
///
bool q_3dcamera_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dcamera_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dcamera_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DCamera*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dcamera_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DCamera*
/// @param param1 QObject*
///
void q_3dcamera_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QObject* param1)
///
void q_3dcamera_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QEvent*
///
bool q_3dcamera_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QEvent*
///
bool q_3dcamera_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback bool func(Q3DCamera* self, QEvent* event)
///
void q_3dcamera_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dcamera_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dcamera_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback bool func(Q3DCamera* self, QObject* watched, QEvent* event)
///
void q_3dcamera_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QTimerEvent*
///
void q_3dcamera_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QTimerEvent*
///
void q_3dcamera_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QTimerEvent* event)
///
void q_3dcamera_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QChildEvent*
///
void q_3dcamera_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QChildEvent*
///
void q_3dcamera_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QChildEvent* event)
///
void q_3dcamera_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QEvent*
///
void q_3dcamera_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param event QEvent*
///
void q_3dcamera_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QEvent* event)
///
void q_3dcamera_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param signal QMetaMethod*
///
void q_3dcamera_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param signal QMetaMethod*
///
void q_3dcamera_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QMetaMethod* signal)
///
void q_3dcamera_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param signal QMetaMethod*
///
void q_3dcamera_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param signal QMetaMethod*
///
void q_3dcamera_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, QMetaMethod* signal)
///
void q_3dcamera_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DCamera*
/// @param dirty bool
///
void q_3dcamera_set_dirty(void* self, bool dirty);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param dirty bool
///
void q_3dcamera_super_set_dirty(void* self, bool dirty);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, bool dirty)
///
void q_3dcamera_on_set_dirty(void* self, void (*callback)(void*, bool));

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#isDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_is_dirty(const void* self);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#isDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DCamera*
///
bool q_3dcamera_super_is_dirty(const void* self);

/// Inherited from Q3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#isDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback bool func(Q3DCamera* self)
///
void q_3dcamera_on_is_dirty(void* self, bool (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DCamera*
///
QObject* q_3dcamera_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DCamera*
///
QObject* q_3dcamera_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback QObject* func(Q3DCamera* self)
///
void q_3dcamera_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DCamera*
///
int32_t q_3dcamera_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DCamera*
///
int32_t q_3dcamera_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback int32_t func(Q3DCamera* self)
///
void q_3dcamera_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DCamera*
/// @param signal const char*
///
int32_t q_3dcamera_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DCamera*
/// @param signal const char*
///
int32_t q_3dcamera_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback int32_t func(Q3DCamera* self, const char* signal)
///
void q_3dcamera_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DCamera*
/// @param signal QMetaMethod*
///
bool q_3dcamera_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DCamera*
/// @param signal QMetaMethod*
///
bool q_3dcamera_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DCamera*
/// @param callback bool func(Q3DCamera* self, QMetaMethod* signal)
///
void q_3dcamera_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DCamera*
/// @param callback void func(Q3DCamera* self, const char* objectName)
///
void q_3dcamera_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#dtor.Q3DCamera)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DCamera*
///
void q_3dcamera_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#public-types)

typedef enum {
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETNONE = -1,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETFRONTLOW = 0,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETFRONT = 1,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETFRONTHIGH = 2,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETLEFTLOW = 3,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETLEFT = 4,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETLEFTHIGH = 5,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETRIGHTLOW = 6,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETRIGHT = 7,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETRIGHTHIGH = 8,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETBEHINDLOW = 9,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETBEHIND = 10,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETBEHINDHIGH = 11,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETISOMETRICLEFT = 12,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETISOMETRICLEFTHIGH = 13,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETISOMETRICRIGHT = 14,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETISOMETRICRIGHTHIGH = 15,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETDIRECTLYABOVE = 16,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETDIRECTLYABOVECW45 = 17,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETDIRECTLYABOVECCW45 = 18,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETFRONTBELOW = 19,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETLEFTBELOW = 20,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETRIGHTBELOW = 21,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETBEHINDBELOW = 22,
    Q3DCAMERA_CAMERAPRESET_CAMERAPRESETDIRECTLYBELOW = 23
} Q3DCamera__CameraPreset;

#endif
