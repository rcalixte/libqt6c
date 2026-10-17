#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html)

/// q_3dscene_new constructs a new Q3DScene object.
///
Q3DScene* q_3dscene_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html)

/// q_3dscene_new2 constructs a new Q3DScene object.
///
/// @param parent QObject*
///
Q3DScene* q_3dscene_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DScene*
///
const QMetaObject* q_3dscene_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DScene*
/// @param callback const QMetaObject* func(const Q3DScene* self)
///
void q_3dscene_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DScene*
///
const QMetaObject* q_3dscene_super_meta_object(const void* self);

/// @param self Q3DScene*
/// @param param1 const char*
///
void* q_3dscene_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DScene*
/// @param callback void* func(Q3DScene* self, const char* param1)
///
void q_3dscene_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DScene*
/// @param param1 const char*
///
void* q_3dscene_super_metacast(void* self, const char* param1);

/// @param self Q3DScene*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dscene_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DScene*
/// @param callback int32_t func(Q3DScene* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dscene_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DScene*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dscene_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dscene_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewport)
///
/// @param self const Q3DScene*
///
QRect* q_3dscene_viewport(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewport)
///
/// @param self const Q3DScene*
///
QRect* q_3dscene_primary_sub_viewport(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setPrimarySubViewport)
///
/// @param self Q3DScene*
/// @param primarySubViewport QRect*
///
void q_3dscene_set_primary_sub_viewport(void* self, const void* primarySubViewport);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isPointInPrimarySubView)
///
/// @param self Q3DScene*
/// @param point QPoint*
///
bool q_3dscene_is_point_in_primary_sub_view(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewport)
///
/// @param self const Q3DScene*
///
QRect* q_3dscene_secondary_sub_viewport(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSecondarySubViewport)
///
/// @param self Q3DScene*
/// @param secondarySubViewport QRect*
///
void q_3dscene_set_secondary_sub_viewport(void* self, const void* secondarySubViewport);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isPointInSecondarySubView)
///
/// @param self Q3DScene*
/// @param point QPoint*
///
bool q_3dscene_is_point_in_secondary_sub_view(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSelectionQueryPosition)
///
/// @param self Q3DScene*
/// @param point QPoint*
///
void q_3dscene_set_selection_query_position(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPosition)
///
/// @param self const Q3DScene*
///
QPoint* q_3dscene_selection_query_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#invalidSelectionPoint)
///
QPoint* q_3dscene_invalid_selection_point();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setGraphPositionQuery)
///
/// @param self Q3DScene*
/// @param point QPoint*
///
void q_3dscene_set_graph_position_query(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQuery)
///
/// @param self const Q3DScene*
///
QPoint* q_3dscene_graph_position_query(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSlicingActive)
///
/// @param self Q3DScene*
/// @param isSlicing bool
///
void q_3dscene_set_slicing_active(void* self, bool isSlicing);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isSlicingActive)
///
/// @param self const Q3DScene*
///
bool q_3dscene_is_slicing_active(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSecondarySubviewOnTop)
///
/// @param self Q3DScene*
/// @param isSecondaryOnTop bool
///
void q_3dscene_set_secondary_subview_on_top(void* self, bool isSecondaryOnTop);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isSecondarySubviewOnTop)
///
/// @param self const Q3DScene*
///
bool q_3dscene_is_secondary_subview_on_top(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCamera)
///
/// @param self const Q3DScene*
///
Q3DCamera* q_3dscene_active_camera(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setActiveCamera)
///
/// @param self Q3DScene*
/// @param camera Q3DCamera*
///
void q_3dscene_set_active_camera(void* self, void* camera);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLight)
///
/// @param self const Q3DScene*
///
Q3DLight* q_3dscene_active_light(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setActiveLight)
///
/// @param self Q3DScene*
/// @param light Q3DLight*
///
void q_3dscene_set_active_light(void* self, void* light);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatio)
///
/// @param self const Q3DScene*
///
float q_3dscene_device_pixel_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setDevicePixelRatio)
///
/// @param self Q3DScene*
/// @param pixelRatio float
///
void q_3dscene_set_device_pixel_ratio(void* self, float pixelRatio);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewportChanged)
///
/// @param self Q3DScene*
/// @param viewport QRect*
///
void q_3dscene_viewport_changed(void* self, const void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewportChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QRect* viewport)
///
void q_3dscene_on_viewport_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewportChanged)
///
/// @param self Q3DScene*
/// @param subViewport QRect*
///
void q_3dscene_primary_sub_viewport_changed(void* self, const void* subViewport);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewportChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QRect* subViewport)
///
void q_3dscene_on_primary_sub_viewport_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewportChanged)
///
/// @param self Q3DScene*
/// @param subViewport QRect*
///
void q_3dscene_secondary_sub_viewport_changed(void* self, const void* subViewport);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewportChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QRect* subViewport)
///
void q_3dscene_on_secondary_sub_viewport_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubviewOnTopChanged)
///
/// @param self Q3DScene*
/// @param isSecondaryOnTop bool
///
void q_3dscene_secondary_subview_on_top_changed(void* self, bool isSecondaryOnTop);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubviewOnTopChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, bool isSecondaryOnTop)
///
void q_3dscene_on_secondary_subview_on_top_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#slicingActiveChanged)
///
/// @param self Q3DScene*
/// @param isSlicingActive bool
///
void q_3dscene_slicing_active_changed(void* self, bool isSlicingActive);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#slicingActiveChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, bool isSlicingActive)
///
void q_3dscene_on_slicing_active_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCameraChanged)
///
/// @param self Q3DScene*
/// @param camera Q3DCamera*
///
void q_3dscene_active_camera_changed(void* self, void* camera);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCameraChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, Q3DCamera* camera)
///
void q_3dscene_on_active_camera_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLightChanged)
///
/// @param self Q3DScene*
/// @param light Q3DLight*
///
void q_3dscene_active_light_changed(void* self, void* light);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLightChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, Q3DLight* light)
///
void q_3dscene_on_active_light_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatioChanged)
///
/// @param self Q3DScene*
/// @param pixelRatio float
///
void q_3dscene_device_pixel_ratio_changed(void* self, float pixelRatio);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatioChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, float pixelRatio)
///
void q_3dscene_on_device_pixel_ratio_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPositionChanged)
///
/// @param self Q3DScene*
/// @param position QPoint*
///
void q_3dscene_selection_query_position_changed(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPositionChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QPoint* position)
///
void q_3dscene_on_selection_query_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQueryChanged)
///
/// @param self Q3DScene*
/// @param position QPoint*
///
void q_3dscene_graph_position_query_changed(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQueryChanged)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QPoint* position)
///
void q_3dscene_on_graph_position_query_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dscene_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dscene_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DScene*
///
const char* q_3dscene_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DScene*
/// @param name const char*
///
void q_3dscene_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DScene*
///
bool q_3dscene_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DScene*
///
bool q_3dscene_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DScene*
///
bool q_3dscene_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DScene*
///
bool q_3dscene_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DScene*
/// @param b bool
///
bool q_3dscene_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DScene*
///
QThread* q_3dscene_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DScene*
/// @param thread QThread*
///
bool q_3dscene_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScene*
/// @param interval int
///
int32_t q_3dscene_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScene*
/// @param time int64_t of nanoseconds
///
int32_t q_3dscene_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DScene*
/// @param id int
///
void q_3dscene_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DScene*
/// @param id enum Qt__TimerId
///
void q_3dscene_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DScene*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dscene_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Q3DScene*
/// @param parent QObject*
///
void q_3dscene_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DScene*
/// @param filterObj QObject*
///
void q_3dscene_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DScene*
/// @param obj QObject*
///
void q_3dscene_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dscene_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dscene_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dscene_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscene_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dscene_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
///
bool q_3dscene_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
/// @param receiver QObject*
///
bool q_3dscene_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dscene_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DScene*
///
void q_3dscene_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DScene*
///
void q_3dscene_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DScene*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dscene_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DScene*
/// @param name const char*
///
QVariant* q_3dscene_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DScene*
///
const char** q_3dscene_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DScene*
///
QBindingStorage* q_3dscene_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DScene*
///
const QBindingStorage* q_3dscene_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScene*
///
void q_3dscene_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self)
///
void q_3dscene_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Q3DScene*
///
QObject* q_3dscene_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DScene*
/// @param classname const char*
///
bool q_3dscene_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DScene*
///
void q_3dscene_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScene*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dscene_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScene*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dscene_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_3dscene_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_3dscene_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dscene_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
/// @param signal const char*
///
bool q_3dscene_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dscene_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscene_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScene*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscene_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScene*
/// @param param1 QObject*
///
void q_3dscene_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QObject* param1)
///
void q_3dscene_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param event QEvent*
///
bool q_3dscene_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param event QEvent*
///
bool q_3dscene_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback bool func(Q3DScene* self, QEvent* event)
///
void q_3dscene_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dscene_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dscene_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback bool func(Q3DScene* self, QObject* watched, QEvent* event)
///
void q_3dscene_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param event QTimerEvent*
///
void q_3dscene_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param event QTimerEvent*
///
void q_3dscene_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QTimerEvent* event)
///
void q_3dscene_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param event QChildEvent*
///
void q_3dscene_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param event QChildEvent*
///
void q_3dscene_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QChildEvent* event)
///
void q_3dscene_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param event QEvent*
///
void q_3dscene_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param event QEvent*
///
void q_3dscene_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QEvent* event)
///
void q_3dscene_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param signal QMetaMethod*
///
void q_3dscene_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param signal QMetaMethod*
///
void q_3dscene_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QMetaMethod* signal)
///
void q_3dscene_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScene*
/// @param signal QMetaMethod*
///
void q_3dscene_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScene*
/// @param signal QMetaMethod*
///
void q_3dscene_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, QMetaMethod* signal)
///
void q_3dscene_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScene*
///
QObject* q_3dscene_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScene*
///
QObject* q_3dscene_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback QObject* func(Q3DScene* self)
///
void q_3dscene_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScene*
///
int32_t q_3dscene_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScene*
///
int32_t q_3dscene_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback int32_t func(Q3DScene* self)
///
void q_3dscene_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScene*
/// @param signal const char*
///
int32_t q_3dscene_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScene*
/// @param signal const char*
///
int32_t q_3dscene_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback int32_t func(Q3DScene* self, const char* signal)
///
void q_3dscene_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScene*
/// @param signal QMetaMethod*
///
bool q_3dscene_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScene*
/// @param signal QMetaMethod*
///
bool q_3dscene_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScene*
/// @param callback bool func(Q3DScene* self, QMetaMethod* signal)
///
void q_3dscene_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DScene*
/// @param callback void func(Q3DScene* self, const char* objectName)
///
void q_3dscene_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#dtor.Q3DScene)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DScene*
///
void q_3dscene_delete(void* self);

#endif
