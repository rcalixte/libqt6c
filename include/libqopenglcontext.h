#pragma once
#ifndef SRC_QT6C_LIBQOPENGLCONTEXT_H
#define SRC_QT6C_LIBQOPENGLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontextgroup.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLContextGroup*
///
const QMetaObject* q_openglcontextgroup_meta_object(void* self);

/// @param self QOpenGLContextGroup*
/// @param param1 const char*
///
void* q_openglcontextgroup_metacast(void* self, const char* param1);

/// @param self QOpenGLContextGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglcontextgroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_openglcontextgroup_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontextgroup.html#shares)
///
/// @param self QOpenGLContextGroup*
///
/// @return libqt_list of QOpenGLContext*
///
libqt_list q_openglcontextgroup_shares(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontextgroup.html#currentContextGroup)
///
QOpenGLContextGroup* q_openglcontextgroup_current_context_group();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_openglcontextgroup_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_openglcontextgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QOpenGLContextGroup*
/// @param event QEvent*
///
bool q_openglcontextgroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QOpenGLContextGroup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglcontextgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLContextGroup*
///
const char* q_openglcontextgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLContextGroup*
/// @param name char*
///
void q_openglcontextgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLContextGroup*
///
bool q_openglcontextgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLContextGroup*
///
bool q_openglcontextgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLContextGroup*
///
bool q_openglcontextgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLContextGroup*
///
bool q_openglcontextgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLContextGroup*
/// @param b bool
///
bool q_openglcontextgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLContextGroup*
///
QThread* q_openglcontextgroup_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLContextGroup*
/// @param thread QThread*
///
bool q_openglcontextgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContextGroup*
/// @param interval int
///
int32_t q_openglcontextgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContextGroup*
/// @param time int64_t of nanoseconds
///
int32_t q_openglcontextgroup_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLContextGroup*
/// @param id int
///
void q_openglcontextgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLContextGroup*
/// @param id enum Qt__TimerId
///
void q_openglcontextgroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLContextGroup*
///
/// @return libqt_list of QObject*
///
libqt_list q_openglcontextgroup_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLContextGroup*
/// @param parent QObject*
///
void q_openglcontextgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLContextGroup*
/// @param filterObj QObject*
///
void q_openglcontextgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLContextGroup*
/// @param obj QObject*
///
void q_openglcontextgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_openglcontextgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLContextGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_openglcontextgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_openglcontextgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_openglcontextgroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLContextGroup*
///
void q_openglcontextgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLContextGroup*
///
void q_openglcontextgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLContextGroup*
/// @param name const char*
/// @param value QVariant*
///
bool q_openglcontextgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLContextGroup*
/// @param name const char*
///
QVariant* q_openglcontextgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOpenGLContextGroup*
///
const char** q_openglcontextgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLContextGroup*
///
QBindingStorage* q_openglcontextgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLContextGroup*
///
const QBindingStorage* q_openglcontextgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContextGroup*
///
void q_openglcontextgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContextGroup*
/// @param callback void func(QOpenGLContextGroup* self)
///
void q_openglcontextgroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOpenGLContextGroup*
///
QObject* q_openglcontextgroup_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLContextGroup*
/// @param classname const char*
///
bool q_openglcontextgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLContextGroup*
///
void q_openglcontextgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLContextGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_openglcontextgroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContextGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_openglcontextgroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContextGroup*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_openglcontextgroup_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_openglcontextgroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLContextGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_openglcontextgroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContextGroup*
/// @param param1 QObject*
///
void q_openglcontextgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContextGroup*
/// @param callback void func(QOpenGLContextGroup* self, QObject* param1)
///
void q_openglcontextgroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLContextGroup*
/// @param callback void func(QOpenGLContextGroup* self, const char* objectName)
///
void q_openglcontextgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontextgroup.html#dtor.QOpenGLContextGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLContextGroup*
///
void q_openglcontextgroup_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html)

/// q_openglcontext_new constructs a new QOpenGLContext object.
///
QOpenGLContext* q_openglcontext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html)

/// q_openglcontext_new2 constructs a new QOpenGLContext object.
///
/// @param parent QObject*
///
QOpenGLContext* q_openglcontext_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLContext*
///
const QMetaObject* q_openglcontext_meta_object(void* self);

/// @param self QOpenGLContext*
/// @param param1 const char*
///
void* q_openglcontext_metacast(void* self, const char* param1);

/// @param self QOpenGLContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglcontext_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLContext*
/// @param callback int32_t func(QOpenGLContext* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_openglcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_openglcontext_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#setFormat)
///
/// @param self QOpenGLContext*
/// @param format QSurfaceFormat*
///
void q_openglcontext_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#setShareContext)
///
/// @param self QOpenGLContext*
/// @param shareContext QOpenGLContext*
///
void q_openglcontext_set_share_context(void* self, void* shareContext);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#setScreen)
///
/// @param self QOpenGLContext*
/// @param screen QScreen*
///
void q_openglcontext_set_screen(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#create)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#isValid)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#format)
///
/// @param self QOpenGLContext*
///
QSurfaceFormat* q_openglcontext_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#shareContext)
///
/// @param self QOpenGLContext*
///
QOpenGLContext* q_openglcontext_share_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#shareGroup)
///
/// @param self QOpenGLContext*
///
QOpenGLContextGroup* q_openglcontext_share_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#screen)
///
/// @param self QOpenGLContext*
///
QScreen* q_openglcontext_screen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#defaultFramebufferObject)
///
/// @param self QOpenGLContext*
///
uint32_t q_openglcontext_default_framebuffer_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#makeCurrent)
///
/// @param self QOpenGLContext*
/// @param surface QSurface*
///
bool q_openglcontext_make_current(void* self, void* surface);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#doneCurrent)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_done_current(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#swapBuffers)
///
/// @param self QOpenGLContext*
/// @param surface QSurface*
///
void q_openglcontext_swap_buffers(void* self, void* surface);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#surface)
///
/// @param self QOpenGLContext*
///
QSurface* q_openglcontext_surface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#currentContext)
///
QOpenGLContext* q_openglcontext_current_context();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#areSharing)
///
/// @param first QOpenGLContext*
/// @param second QOpenGLContext*
///
bool q_openglcontext_are_sharing(void* first, void* second);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#functions)
///
/// @param self QOpenGLContext*
///
QOpenGLFunctions* q_openglcontext_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#extraFunctions)
///
/// @param self QOpenGLContext*
///
QOpenGLExtraFunctions* q_openglcontext_extra_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#extensions)
///
/// @param self QOpenGLContext*
///
/// @return libqt_list set of char*
///
libqt_list q_openglcontext_extensions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#hasExtension)
///
/// @param self QOpenGLContext*
/// @param extension const char*
///
bool q_openglcontext_has_extension(void* self, const char* extension);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#openGLModuleType)
///
/// @return enum QOpenGLContext__OpenGLModuleType
///
int32_t q_openglcontext_open_g_l_module_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#isOpenGLES)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_is_open_g_l_e_s(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#supportsThreadedOpenGL)
///
bool q_openglcontext_supports_threaded_open_g_l();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#globalShareContext)
///
QOpenGLContext* q_openglcontext_global_share_context();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#resolveInterface)
///
/// @param self QOpenGLContext*
/// @param name const char*
/// @param revision int
///
void* q_openglcontext_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLContext*
/// @param callback void* func(QOpenGLContext* self, const char* name, int revision)
///
void q_openglcontext_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QOpenGLContext*
/// @param name const char*
/// @param revision int
///
void* q_openglcontext_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#aboutToBeDestroyed)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_about_to_be_destroyed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#aboutToBeDestroyed)
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self)
///
void q_openglcontext_on_about_to_be_destroyed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_openglcontext_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_openglcontext_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLContext*
///
const char* q_openglcontext_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLContext*
/// @param name char*
///
void q_openglcontext_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLContext*
///
bool q_openglcontext_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLContext*
/// @param b bool
///
bool q_openglcontext_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLContext*
///
QThread* q_openglcontext_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLContext*
/// @param thread QThread*
///
bool q_openglcontext_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContext*
/// @param interval int
///
int32_t q_openglcontext_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContext*
/// @param time int64_t of nanoseconds
///
int32_t q_openglcontext_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLContext*
/// @param id int
///
void q_openglcontext_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLContext*
/// @param id enum Qt__TimerId
///
void q_openglcontext_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLContext*
///
/// @return libqt_list of QObject*
///
libqt_list q_openglcontext_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLContext*
/// @param parent QObject*
///
void q_openglcontext_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLContext*
/// @param filterObj QObject*
///
void q_openglcontext_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLContext*
/// @param obj QObject*
///
void q_openglcontext_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_openglcontext_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_openglcontext_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_openglcontext_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_openglcontext_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLContext*
/// @param name const char*
/// @param value QVariant*
///
bool q_openglcontext_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLContext*
/// @param name const char*
///
QVariant* q_openglcontext_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOpenGLContext*
///
const char** q_openglcontext_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLContext*
///
QBindingStorage* q_openglcontext_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLContext*
///
const QBindingStorage* q_openglcontext_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self)
///
void q_openglcontext_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOpenGLContext*
///
QObject* q_openglcontext_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLContext*
/// @param classname const char*
///
bool q_openglcontext_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLContext*
///
void q_openglcontext_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLContext*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_openglcontext_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContext*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_openglcontext_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLContext*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_openglcontext_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_openglcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_openglcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContext*
/// @param param1 QObject*
///
void q_openglcontext_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QObject* param1)
///
void q_openglcontext_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QEvent*
///
bool q_openglcontext_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QEvent*
///
bool q_openglcontext_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback bool func(QOpenGLContext* self, QEvent* event)
///
void q_openglcontext_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglcontext_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglcontext_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback bool func(QOpenGLContext* self, QObject* watched, QEvent* event)
///
void q_openglcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QTimerEvent*
///
void q_openglcontext_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QTimerEvent*
///
void q_openglcontext_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QTimerEvent* event)
///
void q_openglcontext_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QChildEvent*
///
void q_openglcontext_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QChildEvent*
///
void q_openglcontext_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QChildEvent* event)
///
void q_openglcontext_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QEvent*
///
void q_openglcontext_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param event QEvent*
///
void q_openglcontext_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QEvent* event)
///
void q_openglcontext_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
void q_openglcontext_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
void q_openglcontext_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QMetaMethod* signal)
///
void q_openglcontext_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
void q_openglcontext_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
void q_openglcontext_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, QMetaMethod* signal)
///
void q_openglcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
///
QObject* q_openglcontext_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
///
QObject* q_openglcontext_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback QObject* func()
///
void q_openglcontext_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
///
int32_t q_openglcontext_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
///
int32_t q_openglcontext_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback int32_t func()
///
void q_openglcontext_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal const char*
///
int32_t q_openglcontext_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal const char*
///
int32_t q_openglcontext_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback int32_t func(QOpenGLContext* self, const char* signal)
///
void q_openglcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
bool q_openglcontext_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param signal QMetaMethod*
///
bool q_openglcontext_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLContext*
/// @param callback bool func(QOpenGLContext* self, QMetaMethod* signal)
///
void q_openglcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLContext*
/// @param callback void func(QOpenGLContext* self, const char* objectName)
///
void q_openglcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#dtor.QOpenGLContext)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLContext*
///
void q_openglcontext_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglcontext.html#public-types)

typedef enum {
    QOPENGLCONTEXT_OPENGLMODULETYPE_LIBGL = 0,
    QOPENGLCONTEXT_OPENGLMODULETYPE_LIBGLES = 1
} QOpenGLContext__OpenGLModuleType;

#endif
