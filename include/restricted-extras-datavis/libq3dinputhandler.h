#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html)

/// q_3dinputhandler_new constructs a new Q3DInputHandler object.
///
Q3DInputHandler* q_3dinputhandler_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html)

/// q_3dinputhandler_new2 constructs a new Q3DInputHandler object.
///
/// @param parent QObject*
///
Q3DInputHandler* q_3dinputhandler_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DInputHandler*
///
const QMetaObject* q_3dinputhandler_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback const QMetaObject* func(const Q3DInputHandler* self)
///
void q_3dinputhandler_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DInputHandler*
///
const QMetaObject* q_3dinputhandler_super_meta_object(const void* self);

/// @param self Q3DInputHandler*
/// @param param1 const char*
///
void* q_3dinputhandler_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback void* func(Q3DInputHandler* self, const char* param1)
///
void q_3dinputhandler_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param param1 const char*
///
void* q_3dinputhandler_super_metacast(void* self, const char* param1);

/// @param self Q3DInputHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dinputhandler_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback int32_t func(Q3DInputHandler* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dinputhandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dinputhandler_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dinputhandler_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#setRotationEnabled)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_set_rotation_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#isRotationEnabled)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_rotation_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#setZoomEnabled)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_set_zoom_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#isZoomEnabled)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_zoom_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#setSelectionEnabled)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_set_selection_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#isSelectionEnabled)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_selection_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#setZoomAtTargetEnabled)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_set_zoom_at_target_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#isZoomAtTargetEnabled)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_zoom_at_target_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mousePressEvent)
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_mouse_press_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMouseEvent* event, QPoint* mousePos)
///
void q_3dinputhandler_on_mouse_press_event(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_super_mouse_press_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseReleaseEvent)
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_mouse_release_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMouseEvent* event, QPoint* mousePos)
///
void q_3dinputhandler_on_mouse_release_event(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_super_mouse_release_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseMoveEvent)
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_mouse_move_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMouseEvent* event, QPoint* mousePos)
///
void q_3dinputhandler_on_mouse_move_event(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_3dinputhandler_super_mouse_move_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#wheelEvent)
///
/// @param self Q3DInputHandler*
/// @param event QWheelEvent*
///
void q_3dinputhandler_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QWheelEvent* event)
///
void q_3dinputhandler_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self Q3DInputHandler*
/// @param event QWheelEvent*
///
void q_3dinputhandler_super_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#rotationEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_rotation_enabled_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#rotationEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, bool enable)
///
void q_3dinputhandler_on_rotation_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#zoomEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_zoom_enabled_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#zoomEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, bool enable)
///
void q_3dinputhandler_on_zoom_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#selectionEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_selection_enabled_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#selectionEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, bool enable)
///
void q_3dinputhandler_on_selection_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#zoomAtTargetEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param enable bool
///
void q_3dinputhandler_zoom_at_target_enabled_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#zoomAtTargetEnabledChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, bool enable)
///
void q_3dinputhandler_on_zoom_at_target_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dinputhandler_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dinputhandler_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputView)
///
/// @param self const Q3DInputHandler*
///
/// @return enum QAbstract3DInputHandler__InputView
///
int32_t q_3dinputhandler_input_view(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setInputView)
///
/// @param self Q3DInputHandler*
/// @param inputView enum QAbstract3DInputHandler__InputView
///
void q_3dinputhandler_set_input_view(void* self, int32_t inputView);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputPosition)
///
/// @param self const Q3DInputHandler*
///
QPoint* q_3dinputhandler_input_position(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setInputPosition)
///
/// @param self Q3DInputHandler*
/// @param position QPoint*
///
void q_3dinputhandler_set_input_position(void* self, const void* position);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#scene)
///
/// @param self const Q3DInputHandler*
///
Q3DScene* q_3dinputhandler_scene(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setScene)
///
/// @param self Q3DInputHandler*
/// @param scene Q3DScene*
///
void q_3dinputhandler_set_scene(void* self, void* scene);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#positionChanged)
///
/// @param self Q3DInputHandler*
/// @param position QPoint*
///
void q_3dinputhandler_position_changed(void* self, const void* position);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#positionChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QPoint* position)
///
void q_3dinputhandler_on_position_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputViewChanged)
///
/// @param self Q3DInputHandler*
/// @param view enum QAbstract3DInputHandler__InputView
///
void q_3dinputhandler_input_view_changed(void* self, int32_t view);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputViewChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, enum QAbstract3DInputHandler__InputView view)
///
void q_3dinputhandler_on_input_view_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#sceneChanged)
///
/// @param self Q3DInputHandler*
/// @param scene Q3DScene*
///
void q_3dinputhandler_scene_changed(void* self, void* scene);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#sceneChanged)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, Q3DScene* scene)
///
void q_3dinputhandler_on_scene_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DInputHandler*
///
const char* q_3dinputhandler_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DInputHandler*
/// @param name const char*
///
void q_3dinputhandler_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DInputHandler*
/// @param b bool
///
bool q_3dinputhandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DInputHandler*
///
QThread* q_3dinputhandler_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DInputHandler*
/// @param thread QThread*
///
bool q_3dinputhandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DInputHandler*
/// @param interval int
///
int32_t q_3dinputhandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DInputHandler*
/// @param time int64_t of nanoseconds
///
int32_t q_3dinputhandler_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DInputHandler*
/// @param id int
///
void q_3dinputhandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DInputHandler*
/// @param id enum Qt__TimerId
///
void q_3dinputhandler_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DInputHandler*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dinputhandler_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Q3DInputHandler*
/// @param parent QObject*
///
void q_3dinputhandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DInputHandler*
/// @param filterObj QObject*
///
void q_3dinputhandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DInputHandler*
/// @param obj QObject*
///
void q_3dinputhandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dinputhandler_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dinputhandler_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DInputHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dinputhandler_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dinputhandler_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dinputhandler_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
///
bool q_3dinputhandler_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
/// @param receiver QObject*
///
bool q_3dinputhandler_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dinputhandler_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DInputHandler*
///
void q_3dinputhandler_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DInputHandler*
///
void q_3dinputhandler_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DInputHandler*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dinputhandler_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DInputHandler*
/// @param name const char*
///
QVariant* q_3dinputhandler_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DInputHandler*
///
const char** q_3dinputhandler_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DInputHandler*
///
QBindingStorage* q_3dinputhandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DInputHandler*
///
const QBindingStorage* q_3dinputhandler_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DInputHandler*
///
void q_3dinputhandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self)
///
void q_3dinputhandler_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Q3DInputHandler*
///
QObject* q_3dinputhandler_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DInputHandler*
/// @param classname const char*
///
bool q_3dinputhandler_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DInputHandler*
///
void q_3dinputhandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DInputHandler*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dinputhandler_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DInputHandler*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dinputhandler_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_3dinputhandler_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_3dinputhandler_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DInputHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dinputhandler_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
/// @param signal const char*
///
bool q_3dinputhandler_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dinputhandler_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dinputhandler_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DInputHandler*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dinputhandler_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DInputHandler*
/// @param param1 QObject*
///
void q_3dinputhandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QObject* param1)
///
void q_3dinputhandler_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
///
void q_3dinputhandler_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QMouseEvent*
///
void q_3dinputhandler_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMouseEvent* event)
///
void q_3dinputhandler_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QTouchEvent*
///
void q_3dinputhandler_touch_event(void* self, void* event);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QTouchEvent*
///
void q_3dinputhandler_super_touch_event(void* self, void* event);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QTouchEvent* event)
///
void q_3dinputhandler_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QEvent*
///
bool q_3dinputhandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QEvent*
///
bool q_3dinputhandler_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback bool func(Q3DInputHandler* self, QEvent* event)
///
void q_3dinputhandler_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dinputhandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dinputhandler_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback bool func(Q3DInputHandler* self, QObject* watched, QEvent* event)
///
void q_3dinputhandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QTimerEvent*
///
void q_3dinputhandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QTimerEvent*
///
void q_3dinputhandler_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QTimerEvent* event)
///
void q_3dinputhandler_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QChildEvent*
///
void q_3dinputhandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QChildEvent*
///
void q_3dinputhandler_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QChildEvent* event)
///
void q_3dinputhandler_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QEvent*
///
void q_3dinputhandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param event QEvent*
///
void q_3dinputhandler_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QEvent* event)
///
void q_3dinputhandler_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param signal QMetaMethod*
///
void q_3dinputhandler_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param signal QMetaMethod*
///
void q_3dinputhandler_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMetaMethod* signal)
///
void q_3dinputhandler_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param signal QMetaMethod*
///
void q_3dinputhandler_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param signal QMetaMethod*
///
void q_3dinputhandler_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QMetaMethod* signal)
///
void q_3dinputhandler_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPrevDistance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param distance int
///
void q_3dinputhandler_set_prev_distance(void* self, int distance);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPrevDistance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param distance int
///
void q_3dinputhandler_super_set_prev_distance(void* self, int distance);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPrevDistance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, int distance)
///
void q_3dinputhandler_on_set_prev_distance(void* self, void (*callback)(void*, int));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#prevDistance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
///
int32_t q_3dinputhandler_prev_distance(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#prevDistance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
///
int32_t q_3dinputhandler_super_prev_distance(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#prevDistance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback int32_t func(Q3DInputHandler* self)
///
void q_3dinputhandler_on_prev_distance(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPreviousInputPos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param position QPoint*
///
void q_3dinputhandler_set_previous_input_pos(void* self, const void* position);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPreviousInputPos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param position QPoint*
///
void q_3dinputhandler_super_set_previous_input_pos(void* self, const void* position);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPreviousInputPos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, QPoint* position)
///
void q_3dinputhandler_on_set_previous_input_pos(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#previousInputPos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
///
QPoint* q_3dinputhandler_previous_input_pos(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#previousInputPos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
///
QPoint* q_3dinputhandler_super_previous_input_pos(const void* self);

/// Inherited from QAbstract3DInputHandler
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#previousInputPos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback QPoint* func(Q3DInputHandler* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_3dinputhandler_on_previous_input_pos(void* self, QPoint* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
///
QObject* q_3dinputhandler_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
///
QObject* q_3dinputhandler_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback QObject* func(Q3DInputHandler* self)
///
void q_3dinputhandler_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
///
int32_t q_3dinputhandler_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
///
int32_t q_3dinputhandler_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback int32_t func(Q3DInputHandler* self)
///
void q_3dinputhandler_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
/// @param signal const char*
///
int32_t q_3dinputhandler_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
/// @param signal const char*
///
int32_t q_3dinputhandler_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback int32_t func(Q3DInputHandler* self, const char* signal)
///
void q_3dinputhandler_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DInputHandler*
/// @param signal QMetaMethod*
///
bool q_3dinputhandler_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DInputHandler*
/// @param signal QMetaMethod*
///
bool q_3dinputhandler_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DInputHandler*
/// @param callback bool func(Q3DInputHandler* self, QMetaMethod* signal)
///
void q_3dinputhandler_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DInputHandler*
/// @param callback void func(Q3DInputHandler* self, const char* objectName)
///
void q_3dinputhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler-qtdatavis.html#dtor.Q3DInputHandler)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DInputHandler*
///
void q_3dinputhandler_delete(void* self);

#endif
