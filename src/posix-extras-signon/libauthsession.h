#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBAUTHSESSION_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBAUTHSESSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self SignOn__AuthSession*
///
const QMetaObject* q_signon__authsession_meta_object(void* self);

/// @param self SignOn__AuthSession*
/// @param param1 const char*
///
void* q_signon__authsession_metacast(void* self, const char* param1);

/// @param self SignOn__AuthSession*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_signon__authsession_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_signon__authsession_tr(const char* s);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__AuthSession*
///
const char* q_signon__authsession_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_query_available_mechanisms(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
///
void q_signon__authsession_process(void* self, void* sessionData);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
///
void q_signon__authsession_challenge(void* self, void* sessionData);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
///
void q_signon__authsession_request(void* self, void* sessionData);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_cancel(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param params SignOn__SessionData*
///
void q_signon__authsession_sign_message(void* self, void* params);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param err SignOn__Error*
///
void q_signon__authsession_error(void* self, void* err);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, SignOn__Error* err)
///
void q_signon__authsession_on_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param mechanisms const char**
///
void q_signon__authsession_mechanisms_available(void* self, const char* mechanisms[static 1]);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, const char** mechanisms)
///
void q_signon__authsession_on_mechanisms_available(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
///
void q_signon__authsession_response(void* self, void* sessionData);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, SignOn__SessionData* sessionData)
///
void q_signon__authsession_on_response(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param state enum SignOn__AuthSession__AuthSessionState
/// @param message const char*
///
void q_signon__authsession_state_changed(void* self, int32_t state, const char* message);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, enum SignOn__AuthSession__AuthSessionState state, const char* message)
///
void q_signon__authsession_on_state_changed(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_signon__authsession_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_signon__authsession_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param wantedMechanisms const char**
///
void q_signon__authsession_query_available_mechanisms1(void* self, const char* wantedMechanisms[static 1]);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
/// @param mechanism const char*
///
void q_signon__authsession_process2(void* self, void* sessionData, const char* mechanism);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
/// @param mechanism const char*
///
void q_signon__authsession_challenge2(void* self, void* sessionData, const char* mechanism);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param sessionData SignOn__SessionData*
/// @param mechanism const char*
///
void q_signon__authsession_request2(void* self, void* sessionData, const char* mechanism);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
///
/// @param self SignOn__AuthSession*
/// @param params SignOn__SessionData*
/// @param mechanism const char*
///
void q_signon__authsession_sign_message2(void* self, void* params, const char* mechanism);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self SignOn__AuthSession*
/// @param event QEvent*
///
bool q_signon__authsession_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self SignOn__AuthSession*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_signon__authsession_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__AuthSession*
///
const char* q_signon__authsession_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self SignOn__AuthSession*
/// @param name char*
///
void q_signon__authsession_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self SignOn__AuthSession*
///
bool q_signon__authsession_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self SignOn__AuthSession*
///
bool q_signon__authsession_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self SignOn__AuthSession*
///
bool q_signon__authsession_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self SignOn__AuthSession*
///
bool q_signon__authsession_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self SignOn__AuthSession*
/// @param b bool
///
bool q_signon__authsession_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self SignOn__AuthSession*
///
QThread* q_signon__authsession_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self SignOn__AuthSession*
/// @param thread QThread*
///
bool q_signon__authsession_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthSession*
/// @param interval int
///
int32_t q_signon__authsession_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthSession*
/// @param time int64_t of nanoseconds
///
int32_t q_signon__authsession_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__AuthSession*
/// @param id int
///
void q_signon__authsession_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__AuthSession*
/// @param id enum Qt__TimerId
///
void q_signon__authsession_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self SignOn__AuthSession*
///
/// @return libqt_list of QObject*
///
libqt_list q_signon__authsession_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self SignOn__AuthSession*
/// @param parent QObject*
///
void q_signon__authsession_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self SignOn__AuthSession*
/// @param filterObj QObject*
///
void q_signon__authsession_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self SignOn__AuthSession*
/// @param obj QObject*
///
void q_signon__authsession_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_signon__authsession_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_signon__authsession_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__AuthSession*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_signon__authsession_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signon__authsession_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_signon__authsession_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
///
bool q_signon__authsession_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
/// @param receiver QObject*
///
bool q_signon__authsession_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_signon__authsession_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self SignOn__AuthSession*
/// @param name const char*
/// @param value QVariant*
///
bool q_signon__authsession_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self SignOn__AuthSession*
/// @param name const char*
///
QVariant* q_signon__authsession_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self SignOn__AuthSession*
///
const char** q_signon__authsession_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__AuthSession*
///
QBindingStorage* q_signon__authsession_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__AuthSession*
///
const QBindingStorage* q_signon__authsession_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self)
///
void q_signon__authsession_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self SignOn__AuthSession*
///
QObject* q_signon__authsession_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self SignOn__AuthSession*
/// @param classname const char*
///
bool q_signon__authsession_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self SignOn__AuthSession*
///
void q_signon__authsession_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthSession*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_signon__authsession_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthSession*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_signon__authsession_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_signon__authsession_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_signon__authsession_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__AuthSession*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_signon__authsession_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
/// @param signal const char*
///
bool q_signon__authsession_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_signon__authsession_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signon__authsession_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self SignOn__AuthSession*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signon__authsession_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthSession*
/// @param param1 QObject*
///
void q_signon__authsession_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, QObject* param1)
///
void q_signon__authsession_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self SignOn__AuthSession*
/// @param callback void func(SignOn__AuthSession* self, const char* objectName)
///
void q_signon__authsession_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authsession.html)

typedef enum {
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_UNKNOWNERROR = 1,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_INTERNALSERVERERROR = 2,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_INTERNALCOMMUNICATIONERROR = 3,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_PERMISSIONDENIEDERROR = 4,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_AUTHSESSIONERR = 300,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_MECHANISMNOTAVAILABLEERROR = 301,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_MISSINGDATAERROR = 302,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_INVALIDCREDENTIALSERROR = 303,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_WRONGSTATEERROR = 304,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_OPERATIONNOTSUPPORTEDERROR = 305,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_NOCONNECTIONERROR = 306,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_NETWORKERROR = 307,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_SSLERROR = 308,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_RUNTIMEERROR = 309,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_CANCELEDERROR = 310,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_TIMEDOUTERROR = 311,
    SIGNON_AUTHSESSION_AUTHSESSIONERROR_USERINTERACTIONERROR = 312
} SignOn__AuthSession__AuthSessionError;

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authsession.html)

typedef enum {
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_SESSIONNOTSTARTED = 0,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_HOSTRESOLVING = 1,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_SERVERCONNECTING = 2,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_DATASENDING = 3,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_REPLYWAITING = 4,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_USERPENDING = 5,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_UIREFRESHING = 6,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_PROCESSPENDING = 7,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_SESSIONSTARTED = 8,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_PROCESSCANCELING = 9,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_PROCESSDONE = 10,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_CUSTOMSTATE = 11,
    SIGNON_AUTHSESSION_AUTHSESSIONSTATE_MAXSTATE = 12
} SignOn__AuthSession__AuthSessionState;

#endif
