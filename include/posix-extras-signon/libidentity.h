#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBIDENTITY_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBIDENTITY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self SignOn__Identity*
const QMetaObject* q_signon__identity_meta_object(void* self);

/// @param self SignOn__Identity*
/// @param param1 const char*
void* q_signon__identity_metacast(void* self, const char* param1);

/// @param self SignOn__Identity*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_signon__identity_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_signon__identity_tr(const char* s);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
SignOn__Identity* q_signon__identity_new_identity();

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param id uint32_t
SignOn__Identity* q_signon__identity_existing_identity(uint32_t id);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
uint32_t q_signon__identity_id(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_query_available_methods(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_request_credentials_update(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_store_credentials(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_remove(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_add_reference(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_remove_reference(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_query_info(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_verify_user(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param params libqt_map /* of const char* to QVariant* */
void q_signon__identity_verify_user2(void* self, libqt_map /* of const char* to QVariant* */ params);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param secret const char*
void q_signon__identity_verify_secret(void* self, const char* secret);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_sign_out(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param err SignOn__Error*
void q_signon__identity_error(void* self, void* err);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, SignOn__Error* err)
void q_signon__identity_on_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param methods const char**
void q_signon__identity_methods_available(void* self, const char* methods[static 1]);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, const char** methods)
void q_signon__identity_on_methods_available(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param id uint32_t
void q_signon__identity_credentials_stored(void* self, uint32_t id);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, uint32_t id)
void q_signon__identity_on_credentials_stored(void* self, void (*callback)(void*, uint32_t));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_reference_added(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self)
void q_signon__identity_on_reference_added(void* self, void (*callback)(void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_reference_removed(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self)
void q_signon__identity_on_reference_removed(void* self, void (*callback)(void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param info SignOn__IdentityInfo*
void q_signon__identity_info(void* self, void* info);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, SignOn__IdentityInfo* info)
void q_signon__identity_on_info(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param valid bool
void q_signon__identity_user_verified(void* self, bool valid);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, bool valid)
void q_signon__identity_on_user_verified(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param valid bool
void q_signon__identity_secret_verified(void* self, bool valid);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, bool valid)
void q_signon__identity_on_secret_verified(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_signed_out(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self)
void q_signon__identity_on_signed_out(void* self, void (*callback)(void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
void q_signon__identity_removed(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self)
void q_signon__identity_on_removed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_signon__identity_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_signon__identity_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param info SignOn__IdentityInfo*
SignOn__Identity* q_signon__identity_new_identity1(void* info);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param info SignOn__IdentityInfo*
/// @param parent QObject*
SignOn__Identity* q_signon__identity_new_identity2(void* info, void* parent);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param id uint32_t
/// @param parent QObject*
SignOn__Identity* q_signon__identity_existing_identity2(uint32_t id, void* parent);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param message const char*
void q_signon__identity_request_credentials_update1(void* self, const char* message);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param info SignOn__IdentityInfo*
void q_signon__identity_store_credentials1(void* self, void* info);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param reference const char*
void q_signon__identity_add_reference1(void* self, const char* reference);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param reference const char*
void q_signon__identity_remove_reference1(void* self, const char* reference);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// @param self SignOn__Identity*
/// @param message const char*
void q_signon__identity_verify_user1(void* self, const char* message);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self SignOn__Identity*
/// @param event QEvent*
bool q_signon__identity_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self SignOn__Identity*
/// @param watched QObject*
/// @param event QEvent*
bool q_signon__identity_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__Identity*
const char* q_signon__identity_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self SignOn__Identity*
/// @param name char*
void q_signon__identity_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self SignOn__Identity*
bool q_signon__identity_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self SignOn__Identity*
bool q_signon__identity_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self SignOn__Identity*
bool q_signon__identity_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self SignOn__Identity*
bool q_signon__identity_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self SignOn__Identity*
/// @param b bool
bool q_signon__identity_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self SignOn__Identity*
QThread* q_signon__identity_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self SignOn__Identity*
/// @param thread QThread*
bool q_signon__identity_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__Identity*
/// @param interval int
int32_t q_signon__identity_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__Identity*
/// @param id int
void q_signon__identity_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__Identity*
/// @param id enum Qt__TimerId
void q_signon__identity_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self SignOn__Identity*
libqt_list /* of QObject* */ q_signon__identity_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self SignOn__Identity*
/// @param parent QObject*
void q_signon__identity_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self SignOn__Identity*
/// @param filterObj QObject*
void q_signon__identity_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self SignOn__Identity*
/// @param obj QObject*
void q_signon__identity_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_signon__identity_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__Identity*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_signon__identity_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_signon__identity_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_signon__identity_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self SignOn__Identity*
void q_signon__identity_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self SignOn__Identity*
void q_signon__identity_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self SignOn__Identity*
/// @param name const char*
/// @param value QVariant*
bool q_signon__identity_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self SignOn__Identity*
/// @param name const char*
QVariant* q_signon__identity_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__Identity*
const char** q_signon__identity_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__Identity*
QBindingStorage* q_signon__identity_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__Identity*
const QBindingStorage* q_signon__identity_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__Identity*
void q_signon__identity_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self)
void q_signon__identity_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self SignOn__Identity*
QObject* q_signon__identity_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self SignOn__Identity*
/// @param classname const char*
bool q_signon__identity_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self SignOn__Identity*
void q_signon__identity_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self SignOn__Identity*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_signon__identity_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__Identity*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_signon__identity_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_signon__identity_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__Identity*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_signon__identity_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__Identity*
/// @param param1 QObject*
void q_signon__identity_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, QObject* param1)
void q_signon__identity_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self SignOn__Identity*
/// @param callback void func(SignOn__Identity* self, const char* objectName)
void q_signon__identity_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__Identity*
void q_signon__identity_delete(void* self);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html

typedef enum {
    SIGNON_IDENTITY_IDENTITYERROR_UNKNOWNERROR = 1,
    SIGNON_IDENTITY_IDENTITYERROR_INTERNALSERVERERROR = 2,
    SIGNON_IDENTITY_IDENTITYERROR_INTERNALCOMMUNICATIONERROR = 3,
    SIGNON_IDENTITY_IDENTITYERROR_PERMISSIONDENIEDERROR = 4,
    SIGNON_IDENTITY_IDENTITYERROR_IDENTITYERR = 200,
    SIGNON_IDENTITY_IDENTITYERROR_METHODNOTAVAILABLEERROR = 201,
    SIGNON_IDENTITY_IDENTITYERROR_NOTFOUNDERROR = 202,
    SIGNON_IDENTITY_IDENTITYERROR_STOREFAILEDERROR = 203,
    SIGNON_IDENTITY_IDENTITYERROR_REMOVEFAILEDERROR = 204,
    SIGNON_IDENTITY_IDENTITYERROR_SIGNOUTFAILEDERROR = 205,
    SIGNON_IDENTITY_IDENTITYERROR_CANCELEDERROR = 206,
    SIGNON_IDENTITY_IDENTITYERROR_CREDENTIALSNOTAVAILABLEERROR = 207
} SignOn__Identity__IdentityError;

#endif
