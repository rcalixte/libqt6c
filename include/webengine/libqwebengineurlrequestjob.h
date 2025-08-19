#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineUrlRequestJob*
const QMetaObject* q_webengineurlrequestjob_meta_object(void* self);

/// @param self QWebEngineUrlRequestJob*
/// @param param1 const char*
void* q_webengineurlrequestjob_metacast(void* self, const char* param1);

/// @param self QWebEngineUrlRequestJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webengineurlrequestjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webengineurlrequestjob_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestUrl)
///
/// @param self QWebEngineUrlRequestJob*
QUrl* q_webengineurlrequestjob_request_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestMethod)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineUrlRequestJob*
char* q_webengineurlrequestjob_request_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#initiator)
///
/// @param self QWebEngineUrlRequestJob*
QUrl* q_webengineurlrequestjob_initiator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestBody)
///
/// @param self QWebEngineUrlRequestJob*
QIODevice* q_webengineurlrequestjob_request_body(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#reply)
///
/// @param self QWebEngineUrlRequestJob*
/// @param contentType const char*
/// @param device QIODevice*
void q_webengineurlrequestjob_reply(void* self, const char* contentType, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#fail)
///
/// @param self QWebEngineUrlRequestJob*
/// @param errorVal enum QWebEngineUrlRequestJob__Error
void q_webengineurlrequestjob_fail(void* self, int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#redirect)
///
/// @param self QWebEngineUrlRequestJob*
/// @param url QUrl*
void q_webengineurlrequestjob_redirect(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webengineurlrequestjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineUrlRequestJob*
/// @param event QEvent*
bool q_webengineurlrequestjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param watched QObject*
/// @param event QEvent*
bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineUrlRequestJob*
const char* q_webengineurlrequestjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineUrlRequestJob*
/// @param name char*
void q_webengineurlrequestjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineUrlRequestJob*
bool q_webengineurlrequestjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineUrlRequestJob*
bool q_webengineurlrequestjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineUrlRequestJob*
bool q_webengineurlrequestjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineUrlRequestJob*
bool q_webengineurlrequestjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineUrlRequestJob*
/// @param b bool
bool q_webengineurlrequestjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineUrlRequestJob*
QThread* q_webengineurlrequestjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineUrlRequestJob*
/// @param thread QThread*
bool q_webengineurlrequestjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param interval int
int32_t q_webengineurlrequestjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param id int
void q_webengineurlrequestjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param id enum Qt__TimerId
void q_webengineurlrequestjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineUrlRequestJob*
libqt_list /* of QObject* */ q_webengineurlrequestjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineUrlRequestJob*
/// @param parent QObject*
void q_webengineurlrequestjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param filterObj QObject*
void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineUrlRequestJob*
/// @param obj QObject*
void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webengineurlrequestjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineUrlRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webengineurlrequestjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webengineurlrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webengineurlrequestjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineUrlRequestJob*
void q_webengineurlrequestjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineUrlRequestJob*
void q_webengineurlrequestjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineUrlRequestJob*
/// @param name const char*
/// @param value QVariant*
bool q_webengineurlrequestjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineUrlRequestJob*
/// @param name const char*
QVariant* q_webengineurlrequestjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineUrlRequestJob*
const char** q_webengineurlrequestjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineUrlRequestJob*
QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineUrlRequestJob*
const QBindingStorage* q_webengineurlrequestjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
void q_webengineurlrequestjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void fn(QWebEngineUrlRequestJob*)
void q_webengineurlrequestjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineUrlRequestJob*
QObject* q_webengineurlrequestjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineUrlRequestJob*
/// @param classname const char*
bool q_webengineurlrequestjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineUrlRequestJob*
void q_webengineurlrequestjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineUrlRequestJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webengineurlrequestjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webengineurlrequestjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_webengineurlrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineUrlRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_webengineurlrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param param1 QObject*
void q_webengineurlrequestjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void fn(QWebEngineUrlRequestJob*, QObject*)
void q_webengineurlrequestjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineUrlRequestJob*
/// @param callback void fn(QWebEngineUrlRequestJob*, const char*)
void q_webengineurlrequestjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#dtor.QWebEngineUrlRequestJob)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineUrlRequestJob*
void q_webengineurlrequestjob_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#types

typedef enum {
    QWEBENGINEURLREQUESTJOB_ERROR_NOERROR = 0,
    QWEBENGINEURLREQUESTJOB_ERROR_URLNOTFOUND = 1,
    QWEBENGINEURLREQUESTJOB_ERROR_URLINVALID = 2,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTABORTED = 3,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTDENIED = 4,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTFAILED = 5
} QWebEngineUrlRequestJob__Error;

#endif
