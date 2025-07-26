#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineUrlRequestJob* self ```
const QMetaObject* q_webengineurlrequestjob_meta_object(void* self);

/// ``` QWebEngineUrlRequestJob* self, const char* param1 ```
void* q_webengineurlrequestjob_metacast(void* self, const char* param1);

/// ``` QWebEngineUrlRequestJob* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlrequestjob_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineurlrequestjob_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestUrl)
///
/// ``` QWebEngineUrlRequestJob* self ```
QUrl* q_webengineurlrequestjob_request_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestMethod)
///
/// ``` QWebEngineUrlRequestJob* self ```
char* q_webengineurlrequestjob_request_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#initiator)
///
/// ``` QWebEngineUrlRequestJob* self ```
QUrl* q_webengineurlrequestjob_initiator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestBody)
///
/// ``` QWebEngineUrlRequestJob* self ```
QIODevice* q_webengineurlrequestjob_request_body(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#reply)
///
/// ``` QWebEngineUrlRequestJob* self, const char* contentType, QIODevice* device ```
void q_webengineurlrequestjob_reply(void* self, const char* contentType, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#fail)
///
/// ``` QWebEngineUrlRequestJob* self, enum QWebEngineUrlRequestJob__Error errorVal ```
void q_webengineurlrequestjob_fail(void* self, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#redirect)
///
/// ``` QWebEngineUrlRequestJob* self, QUrl* url ```
void q_webengineurlrequestjob_redirect(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineurlrequestjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineUrlRequestJob* self, QEvent* event ```
bool q_webengineurlrequestjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* watched, QEvent* event ```
bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineUrlRequestJob* self ```
const char* q_webengineurlrequestjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineUrlRequestJob* self, char* name ```
void q_webengineurlrequestjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineUrlRequestJob* self, bool b ```
bool q_webengineurlrequestjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineUrlRequestJob* self ```
QThread* q_webengineurlrequestjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlRequestJob* self, QThread* thread ```
bool q_webengineurlrequestjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int interval ```
int32_t q_webengineurlrequestjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int id ```
void q_webengineurlrequestjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlRequestJob* self, enum Qt__TimerId id ```
void q_webengineurlrequestjob_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineUrlRequestJob* self ```
libqt_list /* of QObject* */ q_webengineurlrequestjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* parent ```
void q_webengineurlrequestjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* filterObj ```
void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* obj ```
void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineurlrequestjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineurlrequestjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineurlrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineurlrequestjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineUrlRequestJob* self, const char* name, QVariant* value ```
bool q_webengineurlrequestjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineUrlRequestJob* self, const char* name ```
QVariant* q_webengineurlrequestjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineUrlRequestJob* self ```
const char** q_webengineurlrequestjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlRequestJob* self ```
QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlRequestJob* self ```
const QBindingStorage* q_webengineurlrequestjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self, void (*slot)(QWebEngineUrlRequestJob*) ```
void q_webengineurlrequestjob_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineUrlRequestJob* self ```
QObject* q_webengineurlrequestjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineUrlRequestJob* self, const char* classname ```
bool q_webengineurlrequestjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlRequestJob* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webengineurlrequestjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineurlrequestjob_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* param1 ```
void q_webengineurlrequestjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self, void (*slot)(QWebEngineUrlRequestJob*, QObject*) ```
void q_webengineurlrequestjob_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineUrlRequestJob* self, void (*slot)(QWebEngineUrlRequestJob*, const char*) ```
void q_webengineurlrequestjob_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#dtor.QWebEngineUrlRequestJob)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlRequestJob* self ```
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
