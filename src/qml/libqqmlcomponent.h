#pragma once
#ifndef QML_LIBQQMLCOMPONENT_H
#define QML_LIBQQMLCOMPONENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new constructs a new QQmlComponent object.
///
QQmlComponent* q_qmlcomponent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new2 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
///
QQmlComponent* q_qmlcomponent_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new3 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param fileName const char*
///
QQmlComponent* q_qmlcomponent_new3(void* param1, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new4 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param fileName const char*
/// @param mode enum QQmlComponent__CompilationMode
///
QQmlComponent* q_qmlcomponent_new4(void* param1, const char* fileName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new5 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param url QUrl*
///
QQmlComponent* q_qmlcomponent_new5(void* param1, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new6 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param url QUrl*
/// @param mode enum QQmlComponent__CompilationMode
///
QQmlComponent* q_qmlcomponent_new6(void* param1, const void* url, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new7 constructs a new QQmlComponent object.
///
/// @param engine QQmlEngine*
/// @param uri const char*
/// @param typeName const char*
///
QQmlComponent* q_qmlcomponent_new7(void* engine, const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new8 constructs a new QQmlComponent object.
///
/// @param engine QQmlEngine*
/// @param uri const char*
/// @param typeName const char*
/// @param mode enum QQmlComponent__CompilationMode
///
QQmlComponent* q_qmlcomponent_new8(void* engine, const char* uri, const char* typeName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new9 constructs a new QQmlComponent object.
///
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new9(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new10 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new10(void* param1, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new11 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param fileName const char*
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new11(void* param1, const char* fileName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new12 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param fileName const char*
/// @param mode enum QQmlComponent__CompilationMode
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new12(void* param1, const char* fileName, int32_t mode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new13 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param url QUrl*
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new13(void* param1, const void* url, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new14 constructs a new QQmlComponent object.
///
/// @param param1 QQmlEngine*
/// @param url QUrl*
/// @param mode enum QQmlComponent__CompilationMode
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new14(void* param1, const void* url, int32_t mode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new15 constructs a new QQmlComponent object.
///
/// @param engine QQmlEngine*
/// @param uri const char*
/// @param typeName const char*
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new15(void* engine, const char* uri, const char* typeName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)

/// q_qmlcomponent_new16 constructs a new QQmlComponent object.
///
/// @param engine QQmlEngine*
/// @param uri const char*
/// @param typeName const char*
/// @param mode enum QQmlComponent__CompilationMode
/// @param parent QObject*
///
QQmlComponent* q_qmlcomponent_new16(void* engine, const char* uri, const char* typeName, int32_t mode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQmlComponent*
///
const QMetaObject* q_qmlcomponent_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback const QMetaObject* func(const QQmlComponent* self)
///
void q_qmlcomponent_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQmlComponent*
///
const QMetaObject* q_qmlcomponent_super_meta_object(const void* self);

/// @param self QQmlComponent*
/// @param param1 const char*
///
void* q_qmlcomponent_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback void* func(QQmlComponent* self, const char* param1)
///
void q_qmlcomponent_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlComponent*
/// @param param1 const char*
///
void* q_qmlcomponent_super_metacast(void* self, const char* param1);

/// @param self QQmlComponent*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlcomponent_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback int32_t func(QQmlComponent* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlcomponent_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlComponent*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlcomponent_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlcomponent_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#status)
///
/// @param self const QQmlComponent*
///
/// @return enum QQmlComponent__Status
///
int32_t q_qmlcomponent_status(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isNull)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isReady)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_ready(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isError)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isLoading)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_loading(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isBound)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_bound(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#errors)
///
/// @param self const QQmlComponent*
///
/// @return libqt_list of QQmlError*
///
libqt_list q_qmlcomponent_errors(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlComponent*
///
const char* q_qmlcomponent_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progress)
///
/// @param self const QQmlComponent*
///
double q_qmlcomponent_progress(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#url)
///
/// @param self const QQmlComponent*
///
QUrl* q_qmlcomponent_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// @param self QQmlComponent*
/// @param context QQmlContext*
///
QObject* q_qmlcomponent_create(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback QObject* func(QQmlComponent* self, QQmlContext* context)
///
void q_qmlcomponent_on_create(void* self, QObject* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// Base class method implementation
///
/// @param self QQmlComponent*
/// @param context QQmlContext*
///
QObject* q_qmlcomponent_super_create(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createWithInitialProperties)
///
/// @param self QQmlComponent*
/// @param initialProperties libqt_map of const char* to QVariant*
///
QObject* q_qmlcomponent_create_with_initial_properties(void* self, libqt_map initialProperties);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#setInitialProperties)
///
/// @param self QQmlComponent*
/// @param component QObject*
/// @param properties libqt_map of const char* to QVariant*
///
void q_qmlcomponent_set_initial_properties(void* self, void* component, libqt_map properties);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
///
/// @param self QQmlComponent*
/// @param param1 QQmlContext*
///
QObject* q_qmlcomponent_begin_create(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
///
/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback QObject* func(QQmlComponent* self, QQmlContext* param1)
///
void q_qmlcomponent_on_begin_create(void* self, QObject* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
///
/// Base class method implementation
///
/// @param self QQmlComponent*
/// @param param1 QQmlContext*
///
QObject* q_qmlcomponent_super_begin_create(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
///
/// @param self QQmlComponent*
///
void q_qmlcomponent_complete_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
///
/// Allows for overriding the related default method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self)
///
void q_qmlcomponent_on_complete_create(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
///
/// Base class method implementation
///
/// @param self QQmlComponent*
///
void q_qmlcomponent_super_complete_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// @param self QQmlComponent*
/// @param param1 QQmlIncubator*
///
void q_qmlcomponent_create2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#creationContext)
///
/// @param self const QQmlComponent*
///
QQmlContext* q_qmlcomponent_creation_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#engine)
///
/// @param self const QQmlComponent*
///
QQmlEngine* q_qmlcomponent_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadUrl)
///
/// @param self QQmlComponent*
/// @param url QUrl*
///
void q_qmlcomponent_load_url(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadUrl)
///
/// @param self QQmlComponent*
/// @param url QUrl*
/// @param mode enum QQmlComponent__CompilationMode
///
void q_qmlcomponent_load_url2(void* self, const void* url, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadFromModule)
///
/// @param self QQmlComponent*
/// @param uri const char*
/// @param typeName const char*
///
void q_qmlcomponent_load_from_module(void* self, const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#setData)
///
/// @param self QQmlComponent*
/// @param param1 char*
/// @param baseUrl QUrl*
///
void q_qmlcomponent_set_data(void* self, char* param1, const void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#statusChanged)
///
/// @param self QQmlComponent*
/// @param param1 enum QQmlComponent__Status
///
void q_qmlcomponent_status_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#statusChanged)
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, enum QQmlComponent__Status param1)
///
void q_qmlcomponent_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progressChanged)
///
/// @param self QQmlComponent*
/// @param param1 double
///
void q_qmlcomponent_progress_changed(void* self, double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progressChanged)
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, double param1)
///
void q_qmlcomponent_on_progress_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
///
/// @param self QQmlComponent*
///
QObject* q_qmlcomponent_create_object2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlcomponent_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlcomponent_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createWithInitialProperties)
///
/// @param self QQmlComponent*
/// @param initialProperties libqt_map of const char* to QVariant*
/// @param context QQmlContext*
///
QObject* q_qmlcomponent_create_with_initial_properties2(void* self, libqt_map initialProperties, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// @param self QQmlComponent*
/// @param param1 QQmlIncubator*
/// @param context QQmlContext*
///
void q_qmlcomponent_create22(void* self, void* param1, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
///
/// @param self QQmlComponent*
/// @param param1 QQmlIncubator*
/// @param context QQmlContext*
/// @param forContext QQmlContext*
///
void q_qmlcomponent_create3(void* self, void* param1, void* context, void* forContext);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadFromModule)
///
/// @param self QQmlComponent*
/// @param uri const char*
/// @param typeName const char*
/// @param mode enum QQmlComponent__CompilationMode
///
void q_qmlcomponent_load_from_module3(void* self, const char* uri, const char* typeName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
///
/// @param self QQmlComponent*
/// @param parent QObject*
///
QObject* q_qmlcomponent_create_object1(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
///
/// @param self QQmlComponent*
/// @param parent QObject*
/// @param properties libqt_map of const char* to QVariant*
///
QObject* q_qmlcomponent_create_object22(void* self, void* parent, libqt_map properties);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlComponent*
///
const char* q_qmlcomponent_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlComponent*
/// @param name const char*
///
void q_qmlcomponent_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlComponent*
/// @param b bool
///
bool q_qmlcomponent_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQmlComponent*
///
QThread* q_qmlcomponent_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlComponent*
/// @param thread QThread*
///
bool q_qmlcomponent_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlComponent*
/// @param interval int
///
int32_t q_qmlcomponent_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlComponent*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlcomponent_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlComponent*
/// @param id int
///
void q_qmlcomponent_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlComponent*
/// @param id enum Qt__TimerId
///
void q_qmlcomponent_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQmlComponent*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlcomponent_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlComponent*
/// @param parent QObject*
///
void q_qmlcomponent_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlComponent*
/// @param filterObj QObject*
///
void q_qmlcomponent_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlComponent*
/// @param obj QObject*
///
void q_qmlcomponent_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlcomponent_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlcomponent_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlComponent*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlcomponent_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcomponent_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlcomponent_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
///
bool q_qmlcomponent_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
/// @param receiver QObject*
///
bool q_qmlcomponent_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlcomponent_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQmlComponent*
///
void q_qmlcomponent_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQmlComponent*
///
void q_qmlcomponent_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlComponent*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlcomponent_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQmlComponent*
/// @param name const char*
///
QVariant* q_qmlcomponent_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQmlComponent*
///
const char** q_qmlcomponent_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlComponent*
///
QBindingStorage* q_qmlcomponent_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQmlComponent*
///
const QBindingStorage* q_qmlcomponent_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlComponent*
///
void q_qmlcomponent_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self)
///
void q_qmlcomponent_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQmlComponent*
///
QObject* q_qmlcomponent_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQmlComponent*
/// @param classname const char*
///
bool q_qmlcomponent_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlComponent*
///
void q_qmlcomponent_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlComponent*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlcomponent_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlComponent*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlcomponent_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlcomponent_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlcomponent_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlComponent*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlcomponent_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
/// @param signal const char*
///
bool q_qmlcomponent_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlcomponent_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcomponent_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlComponent*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcomponent_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlComponent*
/// @param param1 QObject*
///
void q_qmlcomponent_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QObject* param1)
///
void q_qmlcomponent_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QEvent*
///
bool q_qmlcomponent_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QEvent*
///
bool q_qmlcomponent_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback bool func(QQmlComponent* self, QEvent* event)
///
void q_qmlcomponent_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlcomponent_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlcomponent_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback bool func(QQmlComponent* self, QObject* watched, QEvent* event)
///
void q_qmlcomponent_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QTimerEvent*
///
void q_qmlcomponent_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QTimerEvent*
///
void q_qmlcomponent_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QTimerEvent* event)
///
void q_qmlcomponent_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QChildEvent*
///
void q_qmlcomponent_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QChildEvent*
///
void q_qmlcomponent_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QChildEvent* event)
///
void q_qmlcomponent_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QEvent*
///
void q_qmlcomponent_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param event QEvent*
///
void q_qmlcomponent_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QEvent* event)
///
void q_qmlcomponent_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param signal QMetaMethod*
///
void q_qmlcomponent_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param signal QMetaMethod*
///
void q_qmlcomponent_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QMetaMethod* signal)
///
void q_qmlcomponent_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlComponent*
/// @param signal QMetaMethod*
///
void q_qmlcomponent_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param signal QMetaMethod*
///
void q_qmlcomponent_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, QMetaMethod* signal)
///
void q_qmlcomponent_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlComponent*
///
QObject* q_qmlcomponent_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlComponent*
///
QObject* q_qmlcomponent_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback QObject* func(QQmlComponent* self)
///
void q_qmlcomponent_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlComponent*
///
int32_t q_qmlcomponent_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlComponent*
///
int32_t q_qmlcomponent_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback int32_t func(QQmlComponent* self)
///
void q_qmlcomponent_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlComponent*
/// @param signal const char*
///
int32_t q_qmlcomponent_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlComponent*
/// @param signal const char*
///
int32_t q_qmlcomponent_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback int32_t func(QQmlComponent* self, const char* signal)
///
void q_qmlcomponent_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlComponent*
/// @param signal QMetaMethod*
///
bool q_qmlcomponent_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlComponent*
/// @param signal QMetaMethod*
///
bool q_qmlcomponent_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlComponent*
/// @param callback bool func(QQmlComponent* self, QMetaMethod* signal)
///
void q_qmlcomponent_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlComponent*
/// @param callback void func(QQmlComponent* self, const char* objectName)
///
void q_qmlcomponent_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#dtor.QQmlComponent)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlComponent*
///
void q_qmlcomponent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#public-types)

typedef enum {
    QQMLCOMPONENT_COMPILATIONMODE_PREFERSYNCHRONOUS = 0,
    QQMLCOMPONENT_COMPILATIONMODE_ASYNCHRONOUS = 1
} QQmlComponent__CompilationMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#public-types)

typedef enum {
    QQMLCOMPONENT_STATUS_NULL = 0,
    QQMLCOMPONENT_STATUS_READY = 1,
    QQMLCOMPONENT_STATUS_LOADING = 2,
    QQMLCOMPONENT_STATUS_ERROR = 3
} QQmlComponent__Status;

#endif
