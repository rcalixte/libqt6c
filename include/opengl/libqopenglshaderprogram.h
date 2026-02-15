#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLSHADERPROGRAM_H
#define SRC_OPENGL_QT6C_LIBQOPENGLSHADERPROGRAM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html)

/// q_openglshader_new constructs a new QOpenGLShader object.
///
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
///
QOpenGLShader* q_openglshader_new(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html)

/// q_openglshader_new2 constructs a new QOpenGLShader object.
///
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param parent QObject*
///
QOpenGLShader* q_openglshader_new2(int32_t type, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLShader*
///
const QMetaObject* q_openglshader_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLShader*
/// @param callback const QMetaObject* func()
///
void q_openglshader_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QOpenGLShader*
///
const QMetaObject* q_openglshader_qbase_meta_object(void* self);

/// @param self QOpenGLShader*
/// @param param1 const char*
///
void* q_openglshader_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QOpenGLShader*
/// @param callback void* func(QOpenGLShader* self, const char* param1)
///
void q_openglshader_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QOpenGLShader*
/// @param param1 const char*
///
void* q_openglshader_qbase_metacast(void* self, const char* param1);

/// @param self QOpenGLShader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglshader_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLShader*
/// @param callback int32_t func(QOpenGLShader* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_openglshader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLShader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglshader_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_openglshader_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#shaderType)
///
/// @param self QOpenGLShader*
///
/// @return flag of enum QOpenGLShader__ShaderTypeBit
///
int32_t q_openglshader_shader_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
///
/// @param self QOpenGLShader*
/// @param source const char*
///
bool q_openglshader_compile_source_code(void* self, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
///
/// @param self QOpenGLShader*
/// @param source char*
///
bool q_openglshader_compile_source_code2(void* self, char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
///
/// @param self QOpenGLShader*
/// @param source const char*
///
bool q_openglshader_compile_source_code3(void* self, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceFile)
///
/// @param self QOpenGLShader*
/// @param fileName const char*
///
bool q_openglshader_compile_source_file(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#sourceCode)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOpenGLShader*
///
char* q_openglshader_source_code(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#isCompiled)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_is_compiled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#log)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLShader*
///
const char* q_openglshader_log(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#shaderId)
///
/// @param self QOpenGLShader*
///
uint32_t q_openglshader_shader_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
///
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
///
bool q_openglshader_has_open_g_l_shaders(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_openglshader_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_openglshader_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
///
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param context QOpenGLContext*
///
bool q_openglshader_has_open_g_l_shaders2(int32_t type, void* context);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLShader*
///
const char* q_openglshader_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLShader*
/// @param name const char*
///
void q_openglshader_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLShader*
/// @param b bool
///
bool q_openglshader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLShader*
///
QThread* q_openglshader_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLShader*
/// @param thread QThread*
///
bool q_openglshader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShader*
/// @param interval int
///
int32_t q_openglshader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShader*
/// @param time int64_t of nanoseconds
///
int32_t q_openglshader_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLShader*
/// @param id int
///
void q_openglshader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLShader*
/// @param id enum Qt__TimerId
///
void q_openglshader_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLShader*
///
/// @return libqt_list of QObject*
///
libqt_list q_openglshader_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLShader*
/// @param parent QObject*
///
void q_openglshader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLShader*
/// @param filterObj QObject*
///
void q_openglshader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLShader*
/// @param obj QObject*
///
void q_openglshader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_openglshader_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_openglshader_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLShader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_openglshader_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshader_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_openglshader_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
///
bool q_openglshader_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
/// @param receiver QObject*
///
bool q_openglshader_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_openglshader_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLShader*
///
void q_openglshader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLShader*
///
void q_openglshader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLShader*
/// @param name const char*
/// @param value QVariant*
///
bool q_openglshader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLShader*
/// @param name const char*
///
QVariant* q_openglshader_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOpenGLShader*
///
const char** q_openglshader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLShader*
///
QBindingStorage* q_openglshader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLShader*
///
const QBindingStorage* q_openglshader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShader*
///
void q_openglshader_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self)
///
void q_openglshader_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOpenGLShader*
///
QObject* q_openglshader_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLShader*
/// @param classname const char*
///
bool q_openglshader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLShader*
///
void q_openglshader_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShader*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_openglshader_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShader*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_openglshader_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_openglshader_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_openglshader_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLShader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_openglshader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
/// @param signal const char*
///
bool q_openglshader_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_openglshader_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshader_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShader*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshader_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShader*
/// @param param1 QObject*
///
void q_openglshader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QObject* param1)
///
void q_openglshader_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QEvent*
///
bool q_openglshader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QEvent*
///
bool q_openglshader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback bool func(QOpenGLShader* self, QEvent* event)
///
void q_openglshader_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglshader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglshader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback bool func(QOpenGLShader* self, QObject* watched, QEvent* event)
///
void q_openglshader_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QTimerEvent*
///
void q_openglshader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QTimerEvent*
///
void q_openglshader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QTimerEvent* event)
///
void q_openglshader_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QChildEvent*
///
void q_openglshader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QChildEvent*
///
void q_openglshader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QChildEvent* event)
///
void q_openglshader_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QEvent*
///
void q_openglshader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param event QEvent*
///
void q_openglshader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QEvent* event)
///
void q_openglshader_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
void q_openglshader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
void q_openglshader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QMetaMethod* signal)
///
void q_openglshader_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
void q_openglshader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
void q_openglshader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, QMetaMethod* signal)
///
void q_openglshader_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
///
QObject* q_openglshader_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
///
QObject* q_openglshader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback QObject* func()
///
void q_openglshader_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
///
int32_t q_openglshader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
///
int32_t q_openglshader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback int32_t func()
///
void q_openglshader_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal const char*
///
int32_t q_openglshader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal const char*
///
int32_t q_openglshader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback int32_t func(QOpenGLShader* self, const char* signal)
///
void q_openglshader_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
bool q_openglshader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param signal QMetaMethod*
///
bool q_openglshader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShader*
/// @param callback bool func(QOpenGLShader* self, QMetaMethod* signal)
///
void q_openglshader_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLShader*
/// @param callback void func(QOpenGLShader* self, const char* objectName)
///
void q_openglshader_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#dtor.QOpenGLShader)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLShader*
///
void q_openglshader_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html)

/// q_openglshaderprogram_new constructs a new QOpenGLShaderProgram object.
///
QOpenGLShaderProgram* q_openglshaderprogram_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html)

/// q_openglshaderprogram_new2 constructs a new QOpenGLShaderProgram object.
///
/// @param parent QObject*
///
QOpenGLShaderProgram* q_openglshaderprogram_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLShaderProgram*
///
const QMetaObject* q_openglshaderprogram_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLShaderProgram*
/// @param callback const QMetaObject* func()
///
void q_openglshaderprogram_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QOpenGLShaderProgram*
///
const QMetaObject* q_openglshaderprogram_qbase_meta_object(void* self);

/// @param self QOpenGLShaderProgram*
/// @param param1 const char*
///
void* q_openglshaderprogram_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void* func(QOpenGLShaderProgram* self, const char* param1)
///
void q_openglshaderprogram_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QOpenGLShaderProgram*
/// @param param1 const char*
///
void* q_openglshaderprogram_qbase_metacast(void* self, const char* param1);

/// @param self QOpenGLShaderProgram*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglshaderprogram_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLShaderProgram*
/// @param callback int32_t func(QOpenGLShaderProgram* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_openglshaderprogram_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLShaderProgram*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_openglshaderprogram_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_openglshaderprogram_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShader)
///
/// @param self QOpenGLShaderProgram*
/// @param shader QOpenGLShader*
///
bool q_openglshaderprogram_add_shader(void* self, void* shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeShader)
///
/// @param self QOpenGLShaderProgram*
/// @param shader QOpenGLShader*
///
void q_openglshaderprogram_remove_shader(void* self, void* shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#shaders)
///
/// @param self QOpenGLShaderProgram*
///
/// @return libqt_list of QOpenGLShader*
///
libqt_list q_openglshaderprogram_shaders(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source const char*
///
bool q_openglshaderprogram_add_shader_from_source_code(void* self, int32_t type, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source char*
///
bool q_openglshaderprogram_add_shader_from_source_code2(void* self, int32_t type, char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source const char*
///
bool q_openglshaderprogram_add_shader_from_source_code3(void* self, int32_t type, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceFile)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param fileName const char*
///
bool q_openglshaderprogram_add_shader_from_source_file(void* self, int32_t type, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source const char*
///
bool q_openglshaderprogram_add_cacheable_shader_from_source_code(void* self, int32_t type, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source char*
///
bool q_openglshaderprogram_add_cacheable_shader_from_source_code2(void* self, int32_t type, char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param source const char*
///
bool q_openglshaderprogram_add_cacheable_shader_from_source_code3(void* self, int32_t type, const char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceFile)
///
/// @param self QOpenGLShaderProgram*
/// @param type flag of enum QOpenGLShader__ShaderTypeBit
/// @param fileName const char*
///
bool q_openglshaderprogram_add_cacheable_shader_from_source_file(void* self, int32_t type, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeAllShaders)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_remove_all_shaders(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_link(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLShaderProgram*
/// @param callback bool func()
///
void q_openglshaderprogram_on_link(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
///
/// Base class method implementation
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_qbase_link(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#isLinked)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_is_linked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#log)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLShaderProgram*
///
const char* q_openglshaderprogram_log(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bind)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_bind(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#release)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_release(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#create)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#programId)
///
/// @param self QOpenGLShaderProgram*
///
uint32_t q_openglshaderprogram_program_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#maxGeometryOutputVertices)
///
/// @param self QOpenGLShaderProgram*
///
int32_t q_openglshaderprogram_max_geometry_output_vertices(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setPatchVertexCount)
///
/// @param self QOpenGLShaderProgram*
/// @param count int
///
void q_openglshaderprogram_set_patch_vertex_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#patchVertexCount)
///
/// @param self QOpenGLShaderProgram*
///
int32_t q_openglshaderprogram_patch_vertex_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultOuterTessellationLevels)
///
/// @param self QOpenGLShaderProgram*
/// @param levels libqt_list of float
///
void q_openglshaderprogram_set_default_outer_tessellation_levels(void* self, libqt_list levels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultOuterTessellationLevels)
///
/// @param self QOpenGLShaderProgram*
///
/// @return libqt_list of float
///
libqt_list q_openglshaderprogram_default_outer_tessellation_levels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultInnerTessellationLevels)
///
/// @param self QOpenGLShaderProgram*
/// @param levels libqt_list of float
///
void q_openglshaderprogram_set_default_inner_tessellation_levels(void* self, libqt_list levels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultInnerTessellationLevels)
///
/// @param self QOpenGLShaderProgram*
///
/// @return libqt_list of float
///
libqt_list q_openglshaderprogram_default_inner_tessellation_levels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param location int
///
void q_openglshaderprogram_bind_attribute_location(void* self, const char* name, int location);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name char*
/// @param location int
///
void q_openglshaderprogram_bind_attribute_location2(void* self, char* name, int location);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param location int
///
void q_openglshaderprogram_bind_attribute_location3(void* self, const char* name, int location);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
int32_t q_openglshaderprogram_attribute_location(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name char*
///
int32_t q_openglshaderprogram_attribute_location2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
int32_t q_openglshaderprogram_attribute_location3(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value float
///
void q_openglshaderprogram_set_attribute_value(void* self, int location, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
///
void q_openglshaderprogram_set_attribute_value2(void* self, int location, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
/// @param z float
///
void q_openglshaderprogram_set_attribute_value3(void* self, int location, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglshaderprogram_set_attribute_value4(void* self, int location, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector2D*
///
void q_openglshaderprogram_set_attribute_value5(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector3D*
///
void q_openglshaderprogram_set_attribute_value6(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector4D*
///
void q_openglshaderprogram_set_attribute_value7(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QColor*
///
void q_openglshaderprogram_set_attribute_value8(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values float*
/// @param columns int
/// @param rows int
///
void q_openglshaderprogram_set_attribute_value9(void* self, int location, float* values, int columns, int rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value float
///
void q_openglshaderprogram_set_attribute_value10(void* self, const char* name, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
///
void q_openglshaderprogram_set_attribute_value11(void* self, const char* name, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglshaderprogram_set_attribute_value12(void* self, const char* name, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglshaderprogram_set_attribute_value13(void* self, const char* name, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector2D*
///
void q_openglshaderprogram_set_attribute_value14(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector3D*
///
void q_openglshaderprogram_set_attribute_value15(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector4D*
///
void q_openglshaderprogram_set_attribute_value16(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QColor*
///
void q_openglshaderprogram_set_attribute_value17(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values float*
/// @param columns int
/// @param rows int
///
void q_openglshaderprogram_set_attribute_value18(void* self, const char* name, float* values, int columns, int rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values float*
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_array(void* self, int location, float* values, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector2D*
///
void q_openglshaderprogram_set_attribute_array2(void* self, int location, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector3D*
///
void q_openglshaderprogram_set_attribute_array3(void* self, int location, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector4D*
///
void q_openglshaderprogram_set_attribute_array4(void* self, int location, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param type uint32_t
/// @param values void*
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_array5(void* self, int location, uint32_t type, void* values, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values float*
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_array6(void* self, const char* name, float* values, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector2D*
///
void q_openglshaderprogram_set_attribute_array7(void* self, const char* name, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector3D*
///
void q_openglshaderprogram_set_attribute_array8(void* self, const char* name, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector4D*
///
void q_openglshaderprogram_set_attribute_array9(void* self, const char* name, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param type uint32_t
/// @param values void*
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_array10(void* self, const char* name, uint32_t type, void* values, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param type uint32_t
/// @param offset int
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_buffer(void* self, int location, uint32_t type, int offset, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param type uint32_t
/// @param offset int
/// @param tupleSize int
///
void q_openglshaderprogram_set_attribute_buffer2(void* self, const char* name, uint32_t type, int offset, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
///
void q_openglshaderprogram_enable_attribute_array(void* self, int location);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
void q_openglshaderprogram_enable_attribute_array2(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
///
void q_openglshaderprogram_disable_attribute_array(void* self, int location);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
void q_openglshaderprogram_disable_attribute_array2(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
int32_t q_openglshaderprogram_uniform_location(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name char*
///
int32_t q_openglshaderprogram_uniform_location2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
int32_t q_openglshaderprogram_uniform_location3(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value float
///
void q_openglshaderprogram_set_uniform_value(void* self, int location, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value int32_t
///
void q_openglshaderprogram_set_uniform_value2(void* self, int location, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value uint32_t
///
void q_openglshaderprogram_set_uniform_value3(void* self, int location, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
///
void q_openglshaderprogram_set_uniform_value4(void* self, int location, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
/// @param z float
///
void q_openglshaderprogram_set_uniform_value5(void* self, int location, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglshaderprogram_set_uniform_value6(void* self, int location, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector2D*
///
void q_openglshaderprogram_set_uniform_value7(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector3D*
///
void q_openglshaderprogram_set_uniform_value8(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QVector4D*
///
void q_openglshaderprogram_set_uniform_value9(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param color QColor*
///
void q_openglshaderprogram_set_uniform_value10(void* self, int location, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param point QPoint*
///
void q_openglshaderprogram_set_uniform_value11(void* self, int location, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param point QPointF*
///
void q_openglshaderprogram_set_uniform_value12(void* self, int location, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param size QSize*
///
void q_openglshaderprogram_set_uniform_value13(void* self, int location, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param size QSizeF*
///
void q_openglshaderprogram_set_uniform_value14(void* self, int location, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QMatrix4x4*
///
void q_openglshaderprogram_set_uniform_value23(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param value QTransform*
///
void q_openglshaderprogram_set_uniform_value27(void* self, int location, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value float
///
void q_openglshaderprogram_set_uniform_value28(void* self, const char* name, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value int32_t
///
void q_openglshaderprogram_set_uniform_value29(void* self, const char* name, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value uint32_t
///
void q_openglshaderprogram_set_uniform_value30(void* self, const char* name, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
///
void q_openglshaderprogram_set_uniform_value31(void* self, const char* name, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglshaderprogram_set_uniform_value32(void* self, const char* name, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglshaderprogram_set_uniform_value33(void* self, const char* name, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector2D*
///
void q_openglshaderprogram_set_uniform_value34(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector3D*
///
void q_openglshaderprogram_set_uniform_value35(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVector4D*
///
void q_openglshaderprogram_set_uniform_value36(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param color QColor*
///
void q_openglshaderprogram_set_uniform_value37(void* self, const char* name, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param point QPoint*
///
void q_openglshaderprogram_set_uniform_value38(void* self, const char* name, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param point QPointF*
///
void q_openglshaderprogram_set_uniform_value39(void* self, const char* name, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param size QSize*
///
void q_openglshaderprogram_set_uniform_value40(void* self, const char* name, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param size QSizeF*
///
void q_openglshaderprogram_set_uniform_value41(void* self, const char* name, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QMatrix4x4*
///
void q_openglshaderprogram_set_uniform_value50(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QTransform*
///
void q_openglshaderprogram_set_uniform_value54(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values float*
/// @param count int
/// @param tupleSize int
///
void q_openglshaderprogram_set_uniform_value_array(void* self, int location, float* values, int count, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values int32_t*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array2(void* self, int location, int32_t* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values uint32_t*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array3(void* self, int location, uint32_t* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector2D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array4(void* self, int location, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector3D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array5(void* self, int location, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector4D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array6(void* self, int location, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QMatrix4x4*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array15(void* self, int location, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values float*
/// @param count int
/// @param tupleSize int
///
void q_openglshaderprogram_set_uniform_value_array16(void* self, const char* name, float* values, int count, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values int32_t*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array17(void* self, const char* name, int32_t* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values uint32_t*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array18(void* self, const char* name, uint32_t* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector2D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array19(void* self, const char* name, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector3D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array20(void* self, const char* name, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector4D*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array21(void* self, const char* name, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QMatrix4x4*
/// @param count int
///
void q_openglshaderprogram_set_uniform_value_array30(void* self, const char* name, void* values, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
///
bool q_openglshaderprogram_has_open_g_l_shader_programs();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_openglshaderprogram_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_openglshaderprogram_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values float*
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array42(void* self, int location, float* values, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector2D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array32(void* self, int location, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector3D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array33(void* self, int location, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param values QVector4D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array34(void* self, int location, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param type uint32_t
/// @param values void*
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array52(void* self, int location, uint32_t type, void* values, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values float*
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array43(void* self, const char* name, float* values, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector2D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array35(void* self, const char* name, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector3D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array36(void* self, const char* name, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param values QVector4D*
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array37(void* self, const char* name, void* values, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param type uint32_t
/// @param values void*
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_array53(void* self, const char* name, uint32_t type, void* values, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
///
/// @param self QOpenGLShaderProgram*
/// @param location int
/// @param type uint32_t
/// @param offset int
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_buffer5(void* self, int location, uint32_t type, int offset, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param type uint32_t
/// @param offset int
/// @param tupleSize int
/// @param stride int
///
void q_openglshaderprogram_set_attribute_buffer52(void* self, const char* name, uint32_t type, int offset, int tupleSize, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
///
/// @param context QOpenGLContext*
///
bool q_openglshaderprogram_has_open_g_l_shader_programs1(void* context);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QOpenGLShaderProgram*
///
const char* q_openglshaderprogram_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
void q_openglshaderprogram_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLShaderProgram*
/// @param b bool
///
bool q_openglshaderprogram_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLShaderProgram*
///
QThread* q_openglshaderprogram_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLShaderProgram*
/// @param thread QThread*
///
bool q_openglshaderprogram_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param interval int
///
int32_t q_openglshaderprogram_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param time int64_t of nanoseconds
///
int32_t q_openglshaderprogram_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param id int
///
void q_openglshaderprogram_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param id enum Qt__TimerId
///
void q_openglshaderprogram_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLShaderProgram*
///
/// @return libqt_list of QObject*
///
libqt_list q_openglshaderprogram_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLShaderProgram*
/// @param parent QObject*
///
void q_openglshaderprogram_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLShaderProgram*
/// @param filterObj QObject*
///
void q_openglshaderprogram_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLShaderProgram*
/// @param obj QObject*
///
void q_openglshaderprogram_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_openglshaderprogram_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_openglshaderprogram_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLShaderProgram*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_openglshaderprogram_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshaderprogram_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_openglshaderprogram_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
///
bool q_openglshaderprogram_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
/// @param receiver QObject*
///
bool q_openglshaderprogram_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_openglshaderprogram_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
/// @param value QVariant*
///
bool q_openglshaderprogram_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLShaderProgram*
/// @param name const char*
///
QVariant* q_openglshaderprogram_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QOpenGLShaderProgram*
///
const char** q_openglshaderprogram_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLShaderProgram*
///
QBindingStorage* q_openglshaderprogram_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLShaderProgram*
///
const QBindingStorage* q_openglshaderprogram_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self)
///
void q_openglshaderprogram_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOpenGLShaderProgram*
///
QObject* q_openglshaderprogram_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLShaderProgram*
/// @param classname const char*
///
bool q_openglshaderprogram_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_openglshaderprogram_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLShaderProgram*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_openglshaderprogram_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_openglshaderprogram_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_openglshaderprogram_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLShaderProgram*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_openglshaderprogram_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
/// @param signal const char*
///
bool q_openglshaderprogram_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_openglshaderprogram_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshaderprogram_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QOpenGLShaderProgram*
/// @param receiver QObject*
/// @param member const char*
///
bool q_openglshaderprogram_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShaderProgram*
/// @param param1 QObject*
///
void q_openglshaderprogram_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QObject* param1)
///
void q_openglshaderprogram_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QEvent*
///
bool q_openglshaderprogram_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QEvent*
///
bool q_openglshaderprogram_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback bool func(QOpenGLShaderProgram* self, QEvent* event)
///
void q_openglshaderprogram_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglshaderprogram_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_openglshaderprogram_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback bool func(QOpenGLShaderProgram* self, QObject* watched, QEvent* event)
///
void q_openglshaderprogram_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QTimerEvent*
///
void q_openglshaderprogram_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QTimerEvent*
///
void q_openglshaderprogram_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QTimerEvent* event)
///
void q_openglshaderprogram_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QChildEvent*
///
void q_openglshaderprogram_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QChildEvent*
///
void q_openglshaderprogram_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QChildEvent* event)
///
void q_openglshaderprogram_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QEvent*
///
void q_openglshaderprogram_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param event QEvent*
///
void q_openglshaderprogram_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QEvent* event)
///
void q_openglshaderprogram_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
void q_openglshaderprogram_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
void q_openglshaderprogram_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QMetaMethod* signal)
///
void q_openglshaderprogram_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
void q_openglshaderprogram_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
void q_openglshaderprogram_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, QMetaMethod* signal)
///
void q_openglshaderprogram_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
///
QObject* q_openglshaderprogram_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
///
QObject* q_openglshaderprogram_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback QObject* func()
///
void q_openglshaderprogram_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
///
int32_t q_openglshaderprogram_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
///
int32_t q_openglshaderprogram_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback int32_t func()
///
void q_openglshaderprogram_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal const char*
///
int32_t q_openglshaderprogram_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal const char*
///
int32_t q_openglshaderprogram_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback int32_t func(QOpenGLShaderProgram* self, const char* signal)
///
void q_openglshaderprogram_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
bool q_openglshaderprogram_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param signal QMetaMethod*
///
bool q_openglshaderprogram_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLShaderProgram*
/// @param callback bool func(QOpenGLShaderProgram* self, QMetaMethod* signal)
///
void q_openglshaderprogram_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLShaderProgram*
/// @param callback void func(QOpenGLShaderProgram* self, const char* objectName)
///
void q_openglshaderprogram_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#dtor.QOpenGLShaderProgram)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLShaderProgram*
///
void q_openglshaderprogram_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#public-types)

typedef enum {
    QOPENGLSHADER_SHADERTYPEBIT_VERTEX = 1,
    QOPENGLSHADER_SHADERTYPEBIT_FRAGMENT = 2,
    QOPENGLSHADER_SHADERTYPEBIT_GEOMETRY = 4,
    QOPENGLSHADER_SHADERTYPEBIT_TESSELLATIONCONTROL = 8,
    QOPENGLSHADER_SHADERTYPEBIT_TESSELLATIONEVALUATION = 16,
    QOPENGLSHADER_SHADERTYPEBIT_COMPUTE = 32
} QOpenGLShader__ShaderTypeBit;

#endif
