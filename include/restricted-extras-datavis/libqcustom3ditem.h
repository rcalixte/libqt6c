#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)

/// q_custom3ditem_new constructs a new QCustom3DItem object.
///
QCustom3DItem* q_custom3ditem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)

/// q_custom3ditem_new2 constructs a new QCustom3DItem object.
///
/// @param meshFile const char*
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
/// @param texture QImage*
///
QCustom3DItem* q_custom3ditem_new2(const char* meshFile, const void* position, const void* scaling, const void* rotation, const void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)

/// q_custom3ditem_new3 constructs a new QCustom3DItem object.
///
/// @param parent QObject*
///
QCustom3DItem* q_custom3ditem_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)

/// q_custom3ditem_new4 constructs a new QCustom3DItem object.
///
/// @param meshFile const char*
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
/// @param texture QImage*
/// @param parent QObject*
///
QCustom3DItem* q_custom3ditem_new4(const char* meshFile, const void* position, const void* scaling, const void* rotation, const void* texture, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCustom3DItem*
///
const QMetaObject* q_custom3ditem_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCustom3DItem*
/// @param callback const QMetaObject* func(const QCustom3DItem* self)
///
void q_custom3ditem_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCustom3DItem*
///
const QMetaObject* q_custom3ditem_super_meta_object(const void* self);

/// @param self QCustom3DItem*
/// @param param1 const char*
///
void* q_custom3ditem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCustom3DItem*
/// @param callback void* func(QCustom3DItem* self, const char* param1)
///
void q_custom3ditem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCustom3DItem*
/// @param param1 const char*
///
void* q_custom3ditem_super_metacast(void* self, const char* param1);

/// @param self QCustom3DItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3ditem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCustom3DItem*
/// @param callback int32_t func(QCustom3DItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_custom3ditem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCustom3DItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3ditem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_custom3ditem_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setMeshFile)
///
/// @param self QCustom3DItem*
/// @param meshFile const char*
///
void q_custom3ditem_set_mesh_file(void* self, const char* meshFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DItem*
///
const char* q_custom3ditem_mesh_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setTextureFile)
///
/// @param self QCustom3DItem*
/// @param textureFile const char*
///
void q_custom3ditem_set_texture_file(void* self, const char* textureFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DItem*
///
const char* q_custom3ditem_texture_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setPosition)
///
/// @param self QCustom3DItem*
/// @param position QVector3D*
///
void q_custom3ditem_set_position(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#position)
///
/// @param self const QCustom3DItem*
///
QVector3D* q_custom3ditem_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setPositionAbsolute)
///
/// @param self QCustom3DItem*
/// @param positionAbsolute bool
///
void q_custom3ditem_set_position_absolute(void* self, bool positionAbsolute);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isPositionAbsolute)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_position_absolute(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setScaling)
///
/// @param self QCustom3DItem*
/// @param scaling QVector3D*
///
void q_custom3ditem_set_scaling(void* self, const void* scaling);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scaling)
///
/// @param self const QCustom3DItem*
///
QVector3D* q_custom3ditem_scaling(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setScalingAbsolute)
///
/// @param self QCustom3DItem*
/// @param scalingAbsolute bool
///
void q_custom3ditem_set_scaling_absolute(void* self, bool scalingAbsolute);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isScalingAbsolute)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_scaling_absolute(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setRotation)
///
/// @param self QCustom3DItem*
/// @param rotation QQuaternion*
///
void q_custom3ditem_set_rotation(void* self, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotation)
///
/// @param self QCustom3DItem*
///
QQuaternion* q_custom3ditem_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setVisible)
///
/// @param self QCustom3DItem*
/// @param visible bool
///
void q_custom3ditem_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isVisible)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setShadowCasting)
///
/// @param self QCustom3DItem*
/// @param enabled bool
///
void q_custom3ditem_set_shadow_casting(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isShadowCasting)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_shadow_casting(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setRotationAxisAndAngle)
///
/// @param self QCustom3DItem*
/// @param axis QVector3D*
/// @param angle float
///
void q_custom3ditem_set_rotation_axis_and_angle(void* self, const void* axis, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setTextureImage)
///
/// @param self QCustom3DItem*
/// @param textureImage QImage*
///
void q_custom3ditem_set_texture_image(void* self, const void* textureImage);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFileChanged)
///
/// @param self QCustom3DItem*
/// @param meshFile const char*
///
void q_custom3ditem_mesh_file_changed(void* self, const char* meshFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFileChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, const char* meshFile)
///
void q_custom3ditem_on_mesh_file_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFileChanged)
///
/// @param self QCustom3DItem*
/// @param textureFile const char*
///
void q_custom3ditem_texture_file_changed(void* self, const char* textureFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFileChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, const char* textureFile)
///
void q_custom3ditem_on_texture_file_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionChanged)
///
/// @param self QCustom3DItem*
/// @param position QVector3D*
///
void q_custom3ditem_position_changed(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QVector3D* position)
///
void q_custom3ditem_on_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionAbsoluteChanged)
///
/// @param self QCustom3DItem*
/// @param positionAbsolute bool
///
void q_custom3ditem_position_absolute_changed(void* self, bool positionAbsolute);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionAbsoluteChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, bool positionAbsolute)
///
void q_custom3ditem_on_position_absolute_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingChanged)
///
/// @param self QCustom3DItem*
/// @param scaling QVector3D*
///
void q_custom3ditem_scaling_changed(void* self, const void* scaling);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QVector3D* scaling)
///
void q_custom3ditem_on_scaling_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotationChanged)
///
/// @param self QCustom3DItem*
/// @param rotation QQuaternion*
///
void q_custom3ditem_rotation_changed(void* self, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotationChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QQuaternion* rotation)
///
void q_custom3ditem_on_rotation_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#visibleChanged)
///
/// @param self QCustom3DItem*
/// @param visible bool
///
void q_custom3ditem_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#visibleChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, bool visible)
///
void q_custom3ditem_on_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#shadowCastingChanged)
///
/// @param self QCustom3DItem*
/// @param shadowCasting bool
///
void q_custom3ditem_shadow_casting_changed(void* self, bool shadowCasting);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#shadowCastingChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, bool shadowCasting)
///
void q_custom3ditem_on_shadow_casting_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DItem*
/// @param scalingAbsolute bool
///
void q_custom3ditem_scaling_absolute_changed(void* self, bool scalingAbsolute);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, bool scalingAbsolute)
///
void q_custom3ditem_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_custom3ditem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_custom3ditem_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DItem*
///
const char* q_custom3ditem_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCustom3DItem*
/// @param name const char*
///
void q_custom3ditem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCustom3DItem*
/// @param b bool
///
bool q_custom3ditem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCustom3DItem*
///
QThread* q_custom3ditem_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCustom3DItem*
/// @param thread QThread*
///
bool q_custom3ditem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DItem*
/// @param interval int
///
int32_t q_custom3ditem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DItem*
/// @param time int64_t of nanoseconds
///
int32_t q_custom3ditem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DItem*
/// @param id int
///
void q_custom3ditem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DItem*
/// @param id enum Qt__TimerId
///
void q_custom3ditem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCustom3DItem*
///
/// @return libqt_list of QObject*
///
libqt_list q_custom3ditem_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCustom3DItem*
/// @param parent QObject*
///
void q_custom3ditem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCustom3DItem*
/// @param filterObj QObject*
///
void q_custom3ditem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCustom3DItem*
/// @param obj QObject*
///
void q_custom3ditem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_custom3ditem_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_custom3ditem_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_custom3ditem_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3ditem_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_custom3ditem_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
///
bool q_custom3ditem_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
/// @param receiver QObject*
///
bool q_custom3ditem_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_custom3ditem_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCustom3DItem*
///
void q_custom3ditem_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCustom3DItem*
///
void q_custom3ditem_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCustom3DItem*
/// @param name const char*
/// @param value QVariant*
///
bool q_custom3ditem_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCustom3DItem*
/// @param name const char*
///
QVariant* q_custom3ditem_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCustom3DItem*
///
const char** q_custom3ditem_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCustom3DItem*
///
QBindingStorage* q_custom3ditem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCustom3DItem*
///
const QBindingStorage* q_custom3ditem_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DItem*
///
void q_custom3ditem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self)
///
void q_custom3ditem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCustom3DItem*
///
QObject* q_custom3ditem_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCustom3DItem*
/// @param classname const char*
///
bool q_custom3ditem_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCustom3DItem*
///
void q_custom3ditem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3ditem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3ditem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_custom3ditem_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_custom3ditem_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_custom3ditem_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
/// @param signal const char*
///
bool q_custom3ditem_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_custom3ditem_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3ditem_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DItem*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3ditem_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DItem*
/// @param param1 QObject*
///
void q_custom3ditem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QObject* param1)
///
void q_custom3ditem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QEvent*
///
bool q_custom3ditem_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QEvent*
///
bool q_custom3ditem_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback bool func(QCustom3DItem* self, QEvent* event)
///
void q_custom3ditem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3ditem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3ditem_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback bool func(QCustom3DItem* self, QObject* watched, QEvent* event)
///
void q_custom3ditem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QTimerEvent*
///
void q_custom3ditem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QTimerEvent*
///
void q_custom3ditem_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QTimerEvent* event)
///
void q_custom3ditem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QChildEvent*
///
void q_custom3ditem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QChildEvent*
///
void q_custom3ditem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QChildEvent* event)
///
void q_custom3ditem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QEvent*
///
void q_custom3ditem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param event QEvent*
///
void q_custom3ditem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QEvent* event)
///
void q_custom3ditem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param signal QMetaMethod*
///
void q_custom3ditem_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param signal QMetaMethod*
///
void q_custom3ditem_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QMetaMethod* signal)
///
void q_custom3ditem_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DItem*
/// @param signal QMetaMethod*
///
void q_custom3ditem_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param signal QMetaMethod*
///
void q_custom3ditem_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, QMetaMethod* signal)
///
void q_custom3ditem_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DItem*
///
QObject* q_custom3ditem_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DItem*
///
QObject* q_custom3ditem_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback QObject* func(QCustom3DItem* self)
///
void q_custom3ditem_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DItem*
///
int32_t q_custom3ditem_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DItem*
///
int32_t q_custom3ditem_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback int32_t func(QCustom3DItem* self)
///
void q_custom3ditem_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DItem*
/// @param signal const char*
///
int32_t q_custom3ditem_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DItem*
/// @param signal const char*
///
int32_t q_custom3ditem_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback int32_t func(QCustom3DItem* self, const char* signal)
///
void q_custom3ditem_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DItem*
/// @param signal QMetaMethod*
///
bool q_custom3ditem_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DItem*
/// @param signal QMetaMethod*
///
bool q_custom3ditem_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DItem*
/// @param callback bool func(QCustom3DItem* self, QMetaMethod* signal)
///
void q_custom3ditem_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCustom3DItem*
/// @param callback void func(QCustom3DItem* self, const char* objectName)
///
void q_custom3ditem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#dtor.QCustom3DItem)
///
/// Delete this object from C++ memory.
///
/// @param self QCustom3DItem*
///
void q_custom3ditem_delete(void* self);

#endif
