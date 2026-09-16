#pragma once
#ifndef QUICK_LIBQQUICKRENDERCONTROL_H
#define QUICK_LIBQQUICKRENDERCONTROL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html)

/// q_quickrendercontrol_new constructs a new QQuickRenderControl object.
///
QQuickRenderControl* q_quickrendercontrol_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html)

/// q_quickrendercontrol_new2 constructs a new QQuickRenderControl object.
///
/// @param parent QObject*
///
QQuickRenderControl* q_quickrendercontrol_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickRenderControl*
///
const QMetaObject* q_quickrendercontrol_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRenderControl*
/// @param callback const QMetaObject* func()
///
void q_quickrendercontrol_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickRenderControl*
///
const QMetaObject* q_quickrendercontrol_super_meta_object(void* self);

/// @param self QQuickRenderControl*
/// @param param1 const char*
///
void* q_quickrendercontrol_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickRenderControl*
/// @param callback void* func(QQuickRenderControl* self, const char* param1)
///
void q_quickrendercontrol_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickRenderControl*
/// @param param1 const char*
///
void* q_quickrendercontrol_super_metacast(void* self, const char* param1);

/// @param self QQuickRenderControl*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickrendercontrol_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickRenderControl*
/// @param callback int32_t func(QQuickRenderControl* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickrendercontrol_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickRenderControl*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickrendercontrol_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickrendercontrol_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#prepareThread)
///
/// @param self QQuickRenderControl*
/// @param targetThread QThread*
///
void q_quickrendercontrol_prepare_thread(void* self, void* targetThread);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#setSamples)
///
/// @param self QQuickRenderControl*
/// @param sampleCount int
///
void q_quickrendercontrol_set_samples(void* self, int sampleCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#samples)
///
/// @param self QQuickRenderControl*
///
int32_t q_quickrendercontrol_samples(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#initialize)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#invalidate)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#beginFrame)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_begin_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#endFrame)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_end_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#polishItems)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_polish_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#sync)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_sync(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#render)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_render(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderWindowFor)
///
/// @param win QQuickWindow*
///
QWindow* q_quickrendercontrol_render_window_for(void* win);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderWindow)
///
/// @param self QQuickRenderControl*
/// @param offset QPoint*
///
QWindow* q_quickrendercontrol_render_window(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderWindow)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRenderControl*
/// @param callback QWindow* func(QQuickRenderControl* self, QPoint* offset)
///
void q_quickrendercontrol_on_render_window(void* self, QWindow* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderWindow)
///
/// Base class method implementation
///
/// @param self QQuickRenderControl*
/// @param offset QPoint*
///
QWindow* q_quickrendercontrol_super_render_window(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#window)
///
/// @param self QQuickRenderControl*
///
QQuickWindow* q_quickrendercontrol_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderRequested)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_render_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderRequested)
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self)
///
void q_quickrendercontrol_on_render_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#sceneChanged)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_scene_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#sceneChanged)
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self)
///
void q_quickrendercontrol_on_scene_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickrendercontrol_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickrendercontrol_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#renderWindowFor)
///
/// @param win QQuickWindow*
/// @param offset QPoint*
///
QWindow* q_quickrendercontrol_render_window_for2(void* win, void* offset);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickRenderControl*
///
const char* q_quickrendercontrol_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickRenderControl*
/// @param name const char*
///
void q_quickrendercontrol_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickRenderControl*
/// @param b bool
///
bool q_quickrendercontrol_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickRenderControl*
///
QThread* q_quickrendercontrol_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickRenderControl*
/// @param thread QThread*
///
bool q_quickrendercontrol_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRenderControl*
/// @param interval int
///
int32_t q_quickrendercontrol_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRenderControl*
/// @param time int64_t of nanoseconds
///
int32_t q_quickrendercontrol_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickRenderControl*
/// @param id int
///
void q_quickrendercontrol_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickRenderControl*
/// @param id enum Qt__TimerId
///
void q_quickrendercontrol_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickRenderControl*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickrendercontrol_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickRenderControl*
/// @param parent QObject*
///
void q_quickrendercontrol_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickRenderControl*
/// @param filterObj QObject*
///
void q_quickrendercontrol_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickRenderControl*
/// @param obj QObject*
///
void q_quickrendercontrol_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickrendercontrol_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickrendercontrol_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickRenderControl*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickrendercontrol_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrendercontrol_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickrendercontrol_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
///
bool q_quickrendercontrol_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
/// @param receiver QObject*
///
bool q_quickrendercontrol_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickrendercontrol_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickRenderControl*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickrendercontrol_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickRenderControl*
/// @param name const char*
///
QVariant* q_quickrendercontrol_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickRenderControl*
///
const char** q_quickrendercontrol_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickRenderControl*
///
QBindingStorage* q_quickrendercontrol_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickRenderControl*
///
const QBindingStorage* q_quickrendercontrol_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self)
///
void q_quickrendercontrol_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickRenderControl*
///
QObject* q_quickrendercontrol_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickRenderControl*
/// @param classname const char*
///
bool q_quickrendercontrol_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRenderControl*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickrendercontrol_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRenderControl*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickrendercontrol_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickrendercontrol_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickrendercontrol_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickRenderControl*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickrendercontrol_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
/// @param signal const char*
///
bool q_quickrendercontrol_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickrendercontrol_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrendercontrol_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRenderControl*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrendercontrol_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRenderControl*
/// @param param1 QObject*
///
void q_quickrendercontrol_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QObject* param1)
///
void q_quickrendercontrol_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QEvent*
///
bool q_quickrendercontrol_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QEvent*
///
bool q_quickrendercontrol_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback bool func(QQuickRenderControl* self, QEvent* event)
///
void q_quickrendercontrol_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickrendercontrol_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickrendercontrol_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback bool func(QQuickRenderControl* self, QObject* watched, QEvent* event)
///
void q_quickrendercontrol_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QTimerEvent*
///
void q_quickrendercontrol_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QTimerEvent*
///
void q_quickrendercontrol_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QTimerEvent* event)
///
void q_quickrendercontrol_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QChildEvent*
///
void q_quickrendercontrol_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QChildEvent*
///
void q_quickrendercontrol_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QChildEvent* event)
///
void q_quickrendercontrol_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QEvent*
///
void q_quickrendercontrol_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param event QEvent*
///
void q_quickrendercontrol_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QEvent* event)
///
void q_quickrendercontrol_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
void q_quickrendercontrol_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
void q_quickrendercontrol_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QMetaMethod* signal)
///
void q_quickrendercontrol_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
void q_quickrendercontrol_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
void q_quickrendercontrol_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, QMetaMethod* signal)
///
void q_quickrendercontrol_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
///
QObject* q_quickrendercontrol_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
///
QObject* q_quickrendercontrol_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback QObject* func()
///
void q_quickrendercontrol_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
///
int32_t q_quickrendercontrol_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
///
int32_t q_quickrendercontrol_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback int32_t func()
///
void q_quickrendercontrol_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal const char*
///
int32_t q_quickrendercontrol_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal const char*
///
int32_t q_quickrendercontrol_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback int32_t func(QQuickRenderControl* self, const char* signal)
///
void q_quickrendercontrol_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
bool q_quickrendercontrol_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param signal QMetaMethod*
///
bool q_quickrendercontrol_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRenderControl*
/// @param callback bool func(QQuickRenderControl* self, QMetaMethod* signal)
///
void q_quickrendercontrol_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickRenderControl*
/// @param callback void func(QQuickRenderControl* self, const char* objectName)
///
void q_quickrendercontrol_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendercontrol.html#dtor.QQuickRenderControl)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickRenderControl*
///
void q_quickrendercontrol_delete(void* self);

#endif
