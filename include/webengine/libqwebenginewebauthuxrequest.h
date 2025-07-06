#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEWEBAUTHUXREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEWEBAUTHUXREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const QMetaObject* q_webenginewebauthuxrequest_meta_object(void* self);

/// ``` QWebEngineWebAuthUxRequest* self, const char* param1 ```
void* q_webenginewebauthuxrequest_metacast(void* self, const char* param1);

/// ``` QWebEngineWebAuthUxRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginewebauthuxrequest_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginewebauthuxrequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#userNames)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const char** q_webenginewebauthuxrequest_user_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#relyingPartyId)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const char* q_webenginewebauthuxrequest_relying_party_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#pinRequest)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
QWebEngineWebAuthPinRequest* q_webenginewebauthuxrequest_pin_request(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#state)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
int64_t q_webenginewebauthuxrequest_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#requestFailureReason)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
int64_t q_webenginewebauthuxrequest_request_failure_reason(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
///
/// ``` QWebEngineWebAuthUxRequest* self, enum QWebEngineWebAuthUxRequest__WebAuthUxState state ```
void q_webenginewebauthuxrequest_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
///
/// ``` QWebEngineWebAuthUxRequest* self, void (*slot)(QWebEngineWebAuthUxRequest*, enum QWebEngineWebAuthUxRequest__WebAuthUxState) ```
void q_webenginewebauthuxrequest_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#cancel)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#retry)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_retry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setSelectedAccount)
///
/// ``` QWebEngineWebAuthUxRequest* self, const char* selectedAccount ```
void q_webenginewebauthuxrequest_set_selected_account(void* self, const char* selectedAccount);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setPin)
///
/// ``` QWebEngineWebAuthUxRequest* self, const char* pin ```
void q_webenginewebauthuxrequest_set_pin(void* self, const char* pin);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginewebauthuxrequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginewebauthuxrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineWebAuthUxRequest* self, QEvent* event ```
bool q_webenginewebauthuxrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* watched, QEvent* event ```
bool q_webenginewebauthuxrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const char* q_webenginewebauthuxrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineWebAuthUxRequest* self, char* name ```
void q_webenginewebauthuxrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
bool q_webenginewebauthuxrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
bool q_webenginewebauthuxrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
bool q_webenginewebauthuxrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
bool q_webenginewebauthuxrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineWebAuthUxRequest* self, bool b ```
bool q_webenginewebauthuxrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
QThread* q_webenginewebauthuxrequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineWebAuthUxRequest* self, QThread* thread ```
bool q_webenginewebauthuxrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineWebAuthUxRequest* self, int interval ```
int32_t q_webenginewebauthuxrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineWebAuthUxRequest* self, int id ```
void q_webenginewebauthuxrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineWebAuthUxRequest* self, enum Qt__TimerId id ```
void q_webenginewebauthuxrequest_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
libqt_list /* of QObject* */ q_webenginewebauthuxrequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* parent ```
void q_webenginewebauthuxrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* filterObj ```
void q_webenginewebauthuxrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* obj ```
void q_webenginewebauthuxrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginewebauthuxrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginewebauthuxrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginewebauthuxrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginewebauthuxrequest_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineWebAuthUxRequest* self, const char* name, QVariant* value ```
bool q_webenginewebauthuxrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineWebAuthUxRequest* self, const char* name ```
QVariant* q_webenginewebauthuxrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const char** q_webenginewebauthuxrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
QBindingStorage* q_webenginewebauthuxrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
const QBindingStorage* q_webenginewebauthuxrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineWebAuthUxRequest* self, void (*slot)(QObject*) ```
void q_webenginewebauthuxrequest_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
QObject* q_webenginewebauthuxrequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineWebAuthUxRequest* self, const char* classname ```
bool q_webenginewebauthuxrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineWebAuthUxRequest* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webenginewebauthuxrequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineWebAuthUxRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginewebauthuxrequest_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginewebauthuxrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginewebauthuxrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineWebAuthUxRequest* self, QObject* param1 ```
void q_webenginewebauthuxrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineWebAuthUxRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginewebauthuxrequest_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineWebAuthUxRequest* self, void (*slot)(QObject*, const char*) ```
void q_webenginewebauthuxrequest_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#dtor.QWebEngineWebAuthUxRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineWebAuthUxRequest* self ```
void q_webenginewebauthuxrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#types

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_NOTSTARTED = 0,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_SELECTACCOUNT = 1,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_COLLECTPIN = 2,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_FINISHTOKENCOLLECTION = 3,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_REQUESTFAILED = 4,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_CANCELLED = 5,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_COMPLETED = 6
} QWebEngineWebAuthUxRequest__WebAuthUxState;

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_SET = 0,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_CHANGE = 1,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_CHALLENGE = 2
} QWebEngineWebAuthUxRequest__PinEntryReason;

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_NOERROR = 0,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_INTERNALUVLOCKED = 1,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_WRONGPIN = 2,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_TOOSHORT = 3,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_INVALIDCHARACTERS = 4,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_SAMEASCURRENTPIN = 5
} QWebEngineWebAuthUxRequest__PinEntryError;

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_TIMEOUT = 0,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_KEYNOTREGISTERED = 1,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_KEYALREADYREGISTERED = 2,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_SOFTPINBLOCK = 3,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_HARDPINBLOCK = 4,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_AUTHENTICATORREMOVEDDURINGPINENTRY = 5,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_AUTHENTICATORMISSINGRESIDENTKEYS = 6,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_AUTHENTICATORMISSINGUSERVERIFICATION = 7,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_AUTHENTICATORMISSINGLARGEBLOB = 8,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_NOCOMMONALGORITHMS = 9,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_STORAGEFULL = 10,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_USERCONSENTDENIED = 11,
    QWEBENGINEWEBAUTHUXREQUEST_REQUESTFAILUREREASON_WINUSERCANCELLED = 12
} QWebEngineWebAuthUxRequest__RequestFailureReason;

#endif
