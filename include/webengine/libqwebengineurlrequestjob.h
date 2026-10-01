#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEURLREQUESTJOB_H
#define WEBENGINE_LIBQWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebEngineUrlRequestJob*
///
const QMetaObject* q_webengineurlrequestjob_meta_object(const void* self);

/// @param self QWebEngineUrlRequestJob*
/// @param param1 const char*
///
void* q_webengineurlrequestjob_metacast(void* self, const char* param1);

/// @param self QWebEngineUrlRequestJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineurlrequestjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webengineurlrequestjob_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestUrl)
///
/// @param self const QWebEngineUrlRequestJob*
///
QUrl* q_webengineurlrequestjob_request_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestMethod)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineUrlRequestJob*
///
char* q_webengineurlrequestjob_request_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#initiator)
///
/// @param self const QWebEngineUrlRequestJob*
///
QUrl* q_webengineurlrequestjob_initiator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestHeaders)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of char* to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QWebEngineUrlRequestJob*
///
/// @return libqt_map of char* to char*
///
libqt_map q_webengineurlrequestjob_request_headers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestBody)
///
/// @param self const QWebEngineUrlRequestJob*
///
QIODevice* q_webengineurlrequestjob_request_body(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#reply)
///
/// @param self QWebEngineUrlRequestJob*
/// @param contentType char*
/// @param device QIODevice*
///
void q_webengineurlrequestjob_reply(void* self, char* contentType, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#fail)
///
/// @param self QWebEngineUrlRequestJob*
/// @param error enum QWebEngineUrlRequestJob__Error
///
void q_webengineurlrequestjob_fail(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#redirect)
///
/// @param self QWebEngineUrlRequestJob*
/// @param url QUrl*
///
void q_webengineurlrequestjob_redirect(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#setAdditionalResponseHeaders)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param additionalResponseHeaders libqt_map of char* to char**
///
void q_webengineurlrequestjob_set_additional_response_headers(const void* self, libqt_map additionalResponseHeaders);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webengineurlrequestjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineUrlRequestJob*
/// @param event QEvent*
///
bool q_webengineurlrequestjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineUrlRequestJob*
///
const char* q_webengineurlrequestjob_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineUrlRequestJob*
/// @param name const char*
///
void q_webengineurlrequestjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineUrlRequestJob*
///
bool q_webengineurlrequestjob_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineUrlRequestJob*
///
bool q_webengineurlrequestjob_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineUrlRequestJob*
///
bool q_webengineurlrequestjob_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineUrlRequestJob*
///
bool q_webengineurlrequestjob_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineUrlRequestJob*
/// @param b bool
///
bool q_webengineurlrequestjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebEngineUrlRequestJob*
///
QThread* q_webengineurlrequestjob_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineUrlRequestJob*
/// @param thread QThread*
///
bool q_webengineurlrequestjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param interval int
///
int32_t q_webengineurlrequestjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param time int64_t of nanoseconds
///
int32_t q_webengineurlrequestjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param id int
///
void q_webengineurlrequestjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param id enum Qt__TimerId
///
void q_webengineurlrequestjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebEngineUrlRequestJob*
///
/// @return libqt_list of QObject*
///
libqt_list q_webengineurlrequestjob_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineUrlRequestJob*
/// @param parent QObject*
///
void q_webengineurlrequestjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param filterObj QObject*
///
void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param obj QObject*
///
void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webengineurlrequestjob_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webengineurlrequestjob_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webengineurlrequestjob_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineurlrequestjob_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webengineurlrequestjob_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
///
bool q_webengineurlrequestjob_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param receiver QObject*
///
bool q_webengineurlrequestjob_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webengineurlrequestjob_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineUrlRequestJob*
///
void q_webengineurlrequestjob_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineUrlRequestJob*
///
void q_webengineurlrequestjob_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineUrlRequestJob*
/// @param name const char*
/// @param value QVariant*
///
bool q_webengineurlrequestjob_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param name const char*
///
QVariant* q_webengineurlrequestjob_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineUrlRequestJob*
///
const char** q_webengineurlrequestjob_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineUrlRequestJob*
///
QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebEngineUrlRequestJob*
///
const QBindingStorage* q_webengineurlrequestjob_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
///
void q_webengineurlrequestjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void func(QWebEngineUrlRequestJob* self)
///
void q_webengineurlrequestjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebEngineUrlRequestJob*
///
QObject* q_webengineurlrequestjob_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param classname const char*
///
bool q_webengineurlrequestjob_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineUrlRequestJob*
///
void q_webengineurlrequestjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineurlrequestjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineurlrequestjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webengineurlrequestjob_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webengineurlrequestjob_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webengineurlrequestjob_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param signal const char*
///
bool q_webengineurlrequestjob_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webengineurlrequestjob_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineurlrequestjob_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineUrlRequestJob*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineurlrequestjob_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param param1 QObject*
///
void q_webengineurlrequestjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void func(QWebEngineUrlRequestJob* self, QObject* param1)
///
void q_webengineurlrequestjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void func(QWebEngineUrlRequestJob* self, const char* objectName)
///
void q_webengineurlrequestjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#dtor.QWebEngineUrlRequestJob)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineUrlRequestJob*
///
void q_webengineurlrequestjob_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#public-types)

typedef enum {
    QWEBENGINEURLREQUESTJOB_ERROR_NOERROR = 0,
    QWEBENGINEURLREQUESTJOB_ERROR_URLNOTFOUND = 1,
    QWEBENGINEURLREQUESTJOB_ERROR_URLINVALID = 2,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTABORTED = 3,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTDENIED = 4,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTFAILED = 5
} QWebEngineUrlRequestJob__Error;

#endif
