#pragma once
#ifndef SRC_QT6C_LIBQOFFSCREENSURFACE_H
#define SRC_QT6C_LIBQOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html)

/// q_offscreensurface_new constructs a new QOffscreenSurface object.
///
QOffscreenSurface* q_offscreensurface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html)

/// q_offscreensurface_new2 constructs a new QOffscreenSurface object.
///
/// @param screen QScreen*
///
QOffscreenSurface* q_offscreensurface_new2(void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html)

/// q_offscreensurface_new3 constructs a new QOffscreenSurface object.
///
/// @param screen QScreen*
/// @param parent QObject*
///
QOffscreenSurface* q_offscreensurface_new3(void* screen, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOffscreenSurface*
///
const QMetaObject* q_offscreensurface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback const QMetaObject* func()
///
void q_offscreensurface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_offscreensurface_super_meta_object` instead
///
#define q_offscreensurface_qbase_meta_object q_offscreensurface_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QOffscreenSurface*
///
const QMetaObject* q_offscreensurface_super_meta_object(void* self);

/// @param self QOffscreenSurface*
/// @param param1 const char*
///
void* q_offscreensurface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback void* func(QOffscreenSurface* self, const char* param1)
///
void q_offscreensurface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_offscreensurface_super_metacast` instead
///
#define q_offscreensurface_qbase_metacast q_offscreensurface_super_metacast

/// Base class method implementation
///
/// @param self QOffscreenSurface*
/// @param param1 const char*
///
void* q_offscreensurface_super_metacast(void* self, const char* param1);

/// @param self QOffscreenSurface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_offscreensurface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback int32_t func(QOffscreenSurface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_offscreensurface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_offscreensurface_super_metacall` instead
///
#define q_offscreensurface_qbase_metacall q_offscreensurface_super_metacall

/// Base class method implementation
///
/// @param self QOffscreenSurface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_offscreensurface_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_offscreensurface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#surfaceType)
///
/// @param self QOffscreenSurface*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_offscreensurface_surface_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#surfaceType)
///
/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback int32_t func()
///
void q_offscreensurface_on_surface_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_offscreensurface_super_surface_type` instead
///
#define q_offscreensurface_qbase_surface_type q_offscreensurface_super_surface_type

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#surfaceType)
///
/// Base class method implementation
///
/// @param self QOffscreenSurface*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_offscreensurface_super_surface_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#create)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#destroy)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#isValid)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#setFormat)
///
/// @param self QOffscreenSurface*
/// @param format QSurfaceFormat*
///
void q_offscreensurface_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#format)
///
/// @param self QOffscreenSurface*
///
QSurfaceFormat* q_offscreensurface_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#format)
///
/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback QSurfaceFormat* func()
///
void q_offscreensurface_on_format(void* self, QSurfaceFormat* (*callback)());

/// @warning DEPRECATED: Use `q_offscreensurface_super_format` instead
///
#define q_offscreensurface_qbase_format q_offscreensurface_super_format

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#format)
///
/// Base class method implementation
///
/// @param self QOffscreenSurface*
///
QSurfaceFormat* q_offscreensurface_super_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#requestedFormat)
///
/// @param self QOffscreenSurface*
///
QSurfaceFormat* q_offscreensurface_requested_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#size)
///
/// @param self QOffscreenSurface*
///
QSize* q_offscreensurface_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback QSize* func()
///
void q_offscreensurface_on_size(void* self, QSize* (*callback)());

/// @warning DEPRECATED: Use `q_offscreensurface_super_size` instead
///
#define q_offscreensurface_qbase_size q_offscreensurface_super_size

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#size)
///
/// Base class method implementation
///
/// @param self QOffscreenSurface*
///
QSize* q_offscreensurface_super_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#screen)
///
/// @param self QOffscreenSurface*
///
QScreen* q_offscreensurface_screen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#setScreen)
///
/// @param self QOffscreenSurface*
/// @param screen QScreen*
///
void q_offscreensurface_set_screen(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#resolveInterface)
///
/// @param self QOffscreenSurface*
/// @param name const char*
/// @param revision int
///
void* q_offscreensurface_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QOffscreenSurface*
/// @param callback void* func(QOffscreenSurface* self, const char* name, int revision)
///
void q_offscreensurface_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// @warning DEPRECATED: Use `q_offscreensurface_super_resolve_interface` instead
///
#define q_offscreensurface_qbase_resolve_interface q_offscreensurface_super_resolve_interface

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QOffscreenSurface*
/// @param name const char*
/// @param revision int
///
void* q_offscreensurface_super_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#screenChanged)
///
/// @param self QOffscreenSurface*
/// @param screen QScreen*
///
void q_offscreensurface_screen_changed(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#screenChanged)
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QScreen* screen)
///
void q_offscreensurface_on_screen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_offscreensurface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_offscreensurface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOffscreenSurface*
///
const char* q_offscreensurface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOffscreenSurface*
/// @param name const char*
///
void q_offscreensurface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOffscreenSurface*
/// @param b bool
///
bool q_offscreensurface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOffscreenSurface*
///
QThread* q_offscreensurface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOffscreenSurface*
/// @param thread QThread*
///
bool q_offscreensurface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOffscreenSurface*
/// @param interval int
///
int32_t q_offscreensurface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOffscreenSurface*
/// @param time int64_t of nanoseconds
///
int32_t q_offscreensurface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOffscreenSurface*
/// @param id int
///
void q_offscreensurface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOffscreenSurface*
/// @param id enum Qt__TimerId
///
void q_offscreensurface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOffscreenSurface*
///
/// @return libqt_list of QObject*
///
libqt_list q_offscreensurface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOffscreenSurface*
/// @param parent QObject*
///
void q_offscreensurface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOffscreenSurface*
/// @param filterObj QObject*
///
void q_offscreensurface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOffscreenSurface*
/// @param obj QObject*
///
void q_offscreensurface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_offscreensurface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_offscreensurface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOffscreenSurface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_offscreensurface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_offscreensurface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_offscreensurface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
/// @param receiver QObject*
///
bool q_offscreensurface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_offscreensurface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOffscreenSurface*
/// @param name const char*
/// @param value QVariant*
///
bool q_offscreensurface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOffscreenSurface*
/// @param name const char*
///
QVariant* q_offscreensurface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOffscreenSurface*
///
const char** q_offscreensurface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOffscreenSurface*
///
QBindingStorage* q_offscreensurface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOffscreenSurface*
///
const QBindingStorage* q_offscreensurface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self)
///
void q_offscreensurface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOffscreenSurface*
///
QObject* q_offscreensurface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOffscreenSurface*
/// @param classname const char*
///
bool q_offscreensurface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOffscreenSurface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_offscreensurface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOffscreenSurface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_offscreensurface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_offscreensurface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_offscreensurface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOffscreenSurface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_offscreensurface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
/// @param signal const char*
///
bool q_offscreensurface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_offscreensurface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_offscreensurface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOffscreenSurface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_offscreensurface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOffscreenSurface*
/// @param param1 QObject*
///
void q_offscreensurface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QObject* param1)
///
void q_offscreensurface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QOffscreenSurface*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_offscreensurface_surface_class(void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QOffscreenSurface*
///
bool q_offscreensurface_supports_open_g_l(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QEvent*
///
bool q_offscreensurface_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_offscreensurface_super_event` instead
///
#define q_offscreensurface_qbase_event q_offscreensurface_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QEvent*
///
bool q_offscreensurface_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback bool func(QOffscreenSurface* self, QEvent* event)
///
void q_offscreensurface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_offscreensurface_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_offscreensurface_super_event_filter` instead
///
#define q_offscreensurface_qbase_event_filter q_offscreensurface_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_offscreensurface_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback bool func(QOffscreenSurface* self, QObject* watched, QEvent* event)
///
void q_offscreensurface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QTimerEvent*
///
void q_offscreensurface_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_offscreensurface_super_timer_event` instead
///
#define q_offscreensurface_qbase_timer_event q_offscreensurface_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QTimerEvent*
///
void q_offscreensurface_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QTimerEvent* event)
///
void q_offscreensurface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QChildEvent*
///
void q_offscreensurface_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_offscreensurface_super_child_event` instead
///
#define q_offscreensurface_qbase_child_event q_offscreensurface_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QChildEvent*
///
void q_offscreensurface_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QChildEvent* event)
///
void q_offscreensurface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QEvent*
///
void q_offscreensurface_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_offscreensurface_super_custom_event` instead
///
#define q_offscreensurface_qbase_custom_event q_offscreensurface_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param event QEvent*
///
void q_offscreensurface_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QEvent* event)
///
void q_offscreensurface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
void q_offscreensurface_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_offscreensurface_super_connect_notify` instead
///
#define q_offscreensurface_qbase_connect_notify q_offscreensurface_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
void q_offscreensurface_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QMetaMethod* signal)
///
void q_offscreensurface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
void q_offscreensurface_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_offscreensurface_super_disconnect_notify` instead
///
#define q_offscreensurface_qbase_disconnect_notify q_offscreensurface_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
void q_offscreensurface_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, QMetaMethod* signal)
///
void q_offscreensurface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
///
QObject* q_offscreensurface_sender(void* self);

/// @warning DEPRECATED: Use `q_offscreensurface_super_sender` instead
///
#define q_offscreensurface_qbase_sender q_offscreensurface_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
///
QObject* q_offscreensurface_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback QObject* func()
///
void q_offscreensurface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
///
int32_t q_offscreensurface_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_offscreensurface_super_sender_signal_index` instead
///
#define q_offscreensurface_qbase_sender_signal_index q_offscreensurface_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
///
int32_t q_offscreensurface_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback int32_t func()
///
void q_offscreensurface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal const char*
///
int32_t q_offscreensurface_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_offscreensurface_super_receivers` instead
///
#define q_offscreensurface_qbase_receivers q_offscreensurface_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal const char*
///
int32_t q_offscreensurface_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback int32_t func(QOffscreenSurface* self, const char* signal)
///
void q_offscreensurface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
bool q_offscreensurface_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_offscreensurface_super_is_signal_connected` instead
///
#define q_offscreensurface_qbase_is_signal_connected q_offscreensurface_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param signal QMetaMethod*
///
bool q_offscreensurface_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOffscreenSurface*
/// @param callback bool func(QOffscreenSurface* self, QMetaMethod* signal)
///
void q_offscreensurface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOffscreenSurface*
/// @param callback void func(QOffscreenSurface* self, const char* objectName)
///
void q_offscreensurface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qoffscreensurface.html#dtor.QOffscreenSurface)
///
/// Delete this object from C++ memory.
///
/// @param self QOffscreenSurface*
///
void q_offscreensurface_delete(void* self);

#endif
