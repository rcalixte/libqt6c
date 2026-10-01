#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEWEBAUTHUXREQUEST_H
#define WEBENGINE_LIBQWEBENGINEWEBAUTHUXREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const QMetaObject* q_webenginewebauthuxrequest_meta_object(const void* self);

/// @param self QWebEngineWebAuthUxRequest*
/// @param param1 const char*
///
void* q_webenginewebauthuxrequest_metacast(void* self, const char* param1);

/// @param self QWebEngineWebAuthUxRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginewebauthuxrequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webenginewebauthuxrequest_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#userNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const char** q_webenginewebauthuxrequest_user_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#relyingPartyId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const char* q_webenginewebauthuxrequest_relying_party_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#pinRequest)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
QWebEngineWebAuthPinRequest* q_webenginewebauthuxrequest_pin_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#state)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
/// @return enum QWebEngineWebAuthUxRequest__WebAuthUxState
///
int32_t q_webenginewebauthuxrequest_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#requestFailureReason)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
/// @return enum QWebEngineWebAuthUxRequest__RequestFailureReason
///
int32_t q_webenginewebauthuxrequest_request_failure_reason(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param state enum QWebEngineWebAuthUxRequest__WebAuthUxState
///
void q_webenginewebauthuxrequest_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param callback void func(QWebEngineWebAuthUxRequest* self, enum QWebEngineWebAuthUxRequest__WebAuthUxState state)
///
void q_webenginewebauthuxrequest_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#cancel)
///
/// @param self QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#retry)
///
/// @param self QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_retry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setSelectedAccount)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param selectedAccount const char*
///
void q_webenginewebauthuxrequest_set_selected_account(void* self, const char* selectedAccount);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setPin)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param pin const char*
///
void q_webenginewebauthuxrequest_set_pin(void* self, const char* pin);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginewebauthuxrequest_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginewebauthuxrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param event QEvent*
///
bool q_webenginewebauthuxrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginewebauthuxrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const char* q_webenginewebauthuxrequest_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param name const char*
///
void q_webenginewebauthuxrequest_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
bool q_webenginewebauthuxrequest_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
bool q_webenginewebauthuxrequest_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
bool q_webenginewebauthuxrequest_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
bool q_webenginewebauthuxrequest_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param b bool
///
bool q_webenginewebauthuxrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
QThread* q_webenginewebauthuxrequest_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param thread QThread*
///
bool q_webenginewebauthuxrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param interval int
///
int32_t q_webenginewebauthuxrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param time int64_t of nanoseconds
///
int32_t q_webenginewebauthuxrequest_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param id int
///
void q_webenginewebauthuxrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param id enum Qt__TimerId
///
void q_webenginewebauthuxrequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginewebauthuxrequest_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param parent QObject*
///
void q_webenginewebauthuxrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param filterObj QObject*
///
void q_webenginewebauthuxrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param obj QObject*
///
void q_webenginewebauthuxrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webenginewebauthuxrequest_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginewebauthuxrequest_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginewebauthuxrequest_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginewebauthuxrequest_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginewebauthuxrequest_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
bool q_webenginewebauthuxrequest_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param receiver QObject*
///
bool q_webenginewebauthuxrequest_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginewebauthuxrequest_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginewebauthuxrequest_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param name const char*
///
QVariant* q_webenginewebauthuxrequest_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const char** q_webenginewebauthuxrequest_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineWebAuthUxRequest*
///
QBindingStorage* q_webenginewebauthuxrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
const QBindingStorage* q_webenginewebauthuxrequest_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param callback void func(QWebEngineWebAuthUxRequest* self)
///
void q_webenginewebauthuxrequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebEngineWebAuthUxRequest*
///
QObject* q_webenginewebauthuxrequest_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param classname const char*
///
bool q_webenginewebauthuxrequest_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginewebauthuxrequest_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginewebauthuxrequest_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webenginewebauthuxrequest_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webenginewebauthuxrequest_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginewebauthuxrequest_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param signal const char*
///
bool q_webenginewebauthuxrequest_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webenginewebauthuxrequest_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginewebauthuxrequest_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineWebAuthUxRequest*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginewebauthuxrequest_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param param1 QObject*
///
void q_webenginewebauthuxrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param callback void func(QWebEngineWebAuthUxRequest* self, QObject* param1)
///
void q_webenginewebauthuxrequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineWebAuthUxRequest*
/// @param callback void func(QWebEngineWebAuthUxRequest* self, const char* objectName)
///
void q_webenginewebauthuxrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#dtor.QWebEngineWebAuthUxRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineWebAuthUxRequest*
///
void q_webenginewebauthuxrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#reason-var)
///
/// @param self const QWebEngineWebAuthPinRequest*
///
/// @return enum QWebEngineWebAuthUxRequest__PinEntryReason
///
int32_t q_webenginewebauthpinrequest_reason(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#reason-var)
///
/// @param self QWebEngineWebAuthPinRequest*
/// @param reason enum QWebEngineWebAuthUxRequest__PinEntryReason
///
void q_webenginewebauthpinrequest_set_reason(void* self, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#error-var)
///
/// @param self const QWebEngineWebAuthPinRequest*
///
/// @return enum QWebEngineWebAuthUxRequest__PinEntryError
///
int32_t q_webenginewebauthpinrequest_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#error-var)
///
/// @param self QWebEngineWebAuthPinRequest*
/// @param error enum QWebEngineWebAuthUxRequest__PinEntryError
///
void q_webenginewebauthpinrequest_set_error(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
///
/// @param self const QWebEngineWebAuthPinRequest*
///
int32_t q_webenginewebauthpinrequest_min_pin_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
///
/// @param self QWebEngineWebAuthPinRequest*
/// @param minPinLength int32_t
///
void q_webenginewebauthpinrequest_set_min_pin_length(void* self, int32_t minPinLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
///
/// @param self const QWebEngineWebAuthPinRequest*
///
int32_t q_webenginewebauthpinrequest_remaining_attempts(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
///
/// @param self QWebEngineWebAuthPinRequest*
/// @param remainingAttempts int
///
void q_webenginewebauthpinrequest_set_remaining_attempts(void* self, int remainingAttempts);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#dtor.QWebEngineWebAuthPinRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineWebAuthPinRequest*
///
void q_webenginewebauthpinrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_NOTSTARTED = 0,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_SELECTACCOUNT = 1,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_COLLECTPIN = 2,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_FINISHTOKENCOLLECTION = 3,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_REQUESTFAILED = 4,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_CANCELLED = 5,
    QWEBENGINEWEBAUTHUXREQUEST_WEBAUTHUXSTATE_COMPLETED = 6
} QWebEngineWebAuthUxRequest__WebAuthUxState;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_SET = 0,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_CHANGE = 1,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYREASON_CHALLENGE = 2
} QWebEngineWebAuthUxRequest__PinEntryReason;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)

typedef enum {
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_NOERROR = 0,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_INTERNALUVLOCKED = 1,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_WRONGPIN = 2,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_TOOSHORT = 3,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_INVALIDCHARACTERS = 4,
    QWEBENGINEWEBAUTHUXREQUEST_PINENTRYERROR_SAMEASCURRENTPIN = 5
} QWebEngineWebAuthUxRequest__PinEntryError;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)

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
