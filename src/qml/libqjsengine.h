#pragma once
#ifndef QML_LIBQJSENGINE_H
#define QML_LIBQJSENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html)

/// q_jsengine_new constructs a new QJSEngine object.
///
QJSEngine* q_jsengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html)

/// q_jsengine_new2 constructs a new QJSEngine object.
///
/// @param parent QObject*
///
QJSEngine* q_jsengine_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QJSEngine*
///
const QMetaObject* q_jsengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QJSEngine*
/// @param callback const QMetaObject* func()
///
void q_jsengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QJSEngine*
///
const QMetaObject* q_jsengine_super_meta_object(void* self);

/// @param self QJSEngine*
/// @param param1 const char*
///
void* q_jsengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QJSEngine*
/// @param callback void* func(QJSEngine* self, const char* param1)
///
void q_jsengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QJSEngine*
/// @param param1 const char*
///
void* q_jsengine_super_metacast(void* self, const char* param1);

/// @param self QJSEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_jsengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QJSEngine*
/// @param callback int32_t func(QJSEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_jsengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QJSEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_jsengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_jsengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#globalObject)
///
/// @param self QJSEngine*
///
QJSValue* q_jsengine_global_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QJSEngine*
/// @param program const char*
///
QJSValue* q_jsengine_evaluate(void* self, const char* program);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#importModule)
///
/// @param self QJSEngine*
/// @param fileName const char*
///
QJSValue* q_jsengine_import_module(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#registerModule)
///
/// @param self QJSEngine*
/// @param moduleName const char*
/// @param value QJSValue*
///
bool q_jsengine_register_module(void* self, const char* moduleName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newObject)
///
/// @param self QJSEngine*
///
QJSValue* q_jsengine_new_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newSymbol)
///
/// @param self QJSEngine*
/// @param name const char*
///
QJSValue* q_jsengine_new_symbol(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QJSEngine*
///
QJSValue* q_jsengine_new_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQObject)
///
/// @param self QJSEngine*
/// @param object QObject*
///
QJSValue* q_jsengine_new_q_object(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQMetaObject)
///
/// @param self QJSEngine*
/// @param metaObject QMetaObject*
///
QJSValue* q_jsengine_new_q_meta_object(void* self, void* metaObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QJSEngine*
/// @param errorType enum QJSValue__ErrorType
///
QJSValue* q_jsengine_new_error_object(void* self, int32_t errorType);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#collectGarbage)
///
/// @param self QJSEngine*
///
void q_jsengine_collect_garbage(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setObjectOwnership)
///
/// @param param1 QObject*
/// @param param2 enum QJSEngine__ObjectOwnership
///
void q_jsengine_set_object_ownership(void* param1, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#objectOwnership)
///
/// @param param1 QObject*
///
/// @return enum QJSEngine__ObjectOwnership
///
int32_t q_jsengine_object_ownership(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QJSEngine*
/// @param extensions flag of enum QJSEngine__Extension
///
void q_jsengine_install_extensions(void* self, int32_t extensions);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setInterrupted)
///
/// @param self QJSEngine*
/// @param interrupted bool
///
void q_jsengine_set_interrupted(void* self, bool interrupted);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#isInterrupted)
///
/// @param self QJSEngine*
///
bool q_jsengine_is_interrupted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QJSEngine*
/// @param message const char*
///
void q_jsengine_throw_error(void* self, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QJSEngine*
/// @param errorType enum QJSValue__ErrorType
///
void q_jsengine_throw_error2(void* self, int32_t errorType);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QJSEngine*
/// @param error QJSValue*
///
void q_jsengine_throw_error3(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#hasError)
///
/// @param self QJSEngine*
///
bool q_jsengine_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#catchError)
///
/// @param self QJSEngine*
///
QJSValue* q_jsengine_catch_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSEngine*
///
const char* q_jsengine_ui_language(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setUiLanguage)
///
/// @param self QJSEngine*
/// @param language const char*
///
void q_jsengine_set_ui_language(void* self, const char* language);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QJSEngine*
///
void q_jsengine_ui_language_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self)
///
void q_jsengine_on_ui_language_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_jsengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_jsengine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QJSEngine*
/// @param program const char*
/// @param fileName const char*
///
QJSValue* q_jsengine_evaluate2(void* self, const char* program, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QJSEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
///
QJSValue* q_jsengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QJSEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
/// @param exceptionStackTrace const char**
///
QJSValue* q_jsengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QJSEngine*
/// @param length uint32_t
///
QJSValue* q_jsengine_new_array1(void* self, uint32_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QJSEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
QJSValue* q_jsengine_new_error_object2(void* self, int32_t errorType, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QJSEngine*
/// @param extensions flag of enum QJSEngine__Extension
/// @param object QJSValue*
///
void q_jsengine_install_extensions2(void* self, int32_t extensions, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QJSEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
void q_jsengine_throw_error22(void* self, int32_t errorType, const char* message);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSEngine*
///
const char* q_jsengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QJSEngine*
/// @param name const char*
///
void q_jsengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QJSEngine*
///
bool q_jsengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QJSEngine*
///
bool q_jsengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QJSEngine*
///
bool q_jsengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QJSEngine*
///
bool q_jsengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QJSEngine*
/// @param b bool
///
bool q_jsengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QJSEngine*
///
QThread* q_jsengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QJSEngine*
/// @param thread QThread*
///
bool q_jsengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QJSEngine*
/// @param interval int
///
int32_t q_jsengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QJSEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_jsengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QJSEngine*
/// @param id int
///
void q_jsengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QJSEngine*
/// @param id enum Qt__TimerId
///
void q_jsengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QJSEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_jsengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QJSEngine*
/// @param parent QObject*
///
void q_jsengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QJSEngine*
/// @param filterObj QObject*
///
void q_jsengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QJSEngine*
/// @param obj QObject*
///
void q_jsengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_jsengine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_jsengine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QJSEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_jsengine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_jsengine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_jsengine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
///
bool q_jsengine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
/// @param receiver QObject*
///
bool q_jsengine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_jsengine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QJSEngine*
///
void q_jsengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QJSEngine*
///
void q_jsengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QJSEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_jsengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QJSEngine*
/// @param name const char*
///
QVariant* q_jsengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QJSEngine*
///
const char** q_jsengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QJSEngine*
///
QBindingStorage* q_jsengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QJSEngine*
///
const QBindingStorage* q_jsengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QJSEngine*
///
void q_jsengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self)
///
void q_jsengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QJSEngine*
///
QObject* q_jsengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QJSEngine*
/// @param classname const char*
///
bool q_jsengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QJSEngine*
///
void q_jsengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QJSEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_jsengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QJSEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_jsengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_jsengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_jsengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QJSEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_jsengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
/// @param signal const char*
///
bool q_jsengine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_jsengine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_jsengine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QJSEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_jsengine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QJSEngine*
/// @param param1 QObject*
///
void q_jsengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QObject* param1)
///
void q_jsengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param event QEvent*
///
bool q_jsengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param event QEvent*
///
bool q_jsengine_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback bool func(QJSEngine* self, QEvent* event)
///
void q_jsengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_jsengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_jsengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback bool func(QJSEngine* self, QObject* watched, QEvent* event)
///
void q_jsengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param event QTimerEvent*
///
void q_jsengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param event QTimerEvent*
///
void q_jsengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QTimerEvent* event)
///
void q_jsengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param event QChildEvent*
///
void q_jsengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param event QChildEvent*
///
void q_jsengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QChildEvent* event)
///
void q_jsengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param event QEvent*
///
void q_jsengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param event QEvent*
///
void q_jsengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QEvent* event)
///
void q_jsengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
void q_jsengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
void q_jsengine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QMetaMethod* signal)
///
void q_jsengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
void q_jsengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
void q_jsengine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, QMetaMethod* signal)
///
void q_jsengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
///
QObject* q_jsengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
///
QObject* q_jsengine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback QObject* func()
///
void q_jsengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
///
int32_t q_jsengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
///
int32_t q_jsengine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback int32_t func()
///
void q_jsengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param signal const char*
///
int32_t q_jsengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param signal const char*
///
int32_t q_jsengine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback int32_t func(QJSEngine* self, const char* signal)
///
void q_jsengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
bool q_jsengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QJSEngine*
/// @param signal QMetaMethod*
///
bool q_jsengine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QJSEngine*
/// @param callback bool func(QJSEngine* self, QMetaMethod* signal)
///
void q_jsengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QJSEngine*
/// @param callback void func(QJSEngine* self, const char* objectName)
///
void q_jsengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#dtor.QJSEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QJSEngine*
///
void q_jsengine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine-h.html#qjsEngine)
///
/// @param param1 QObject*
///
QJSEngine* q_qjsengine_h_qjs_engine(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#public-types)

typedef enum {
    QJSENGINE_OBJECTOWNERSHIP_CPPOWNERSHIP = 0,
    QJSENGINE_OBJECTOWNERSHIP_JAVASCRIPTOWNERSHIP = 1
} QJSEngine__ObjectOwnership;

/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#public-types)

typedef enum {
    QJSENGINE_EXTENSION_TRANSLATIONEXTENSION = 1,
    QJSENGINE_EXTENSION_CONSOLEEXTENSION = 2,
    QJSENGINE_EXTENSION_GARBAGECOLLECTIONEXTENSION = 4,
    QJSENGINE_EXTENSION_ALLEXTENSIONS = -1
} QJSEngine__Extension;

#endif
