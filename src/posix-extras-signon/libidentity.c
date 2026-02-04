#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libsignonerror.hpp"
#include "libidentityinfo.hpp"
#include "libidentity.hpp"
#include "libidentity.h"

const QMetaObject* q_signon__identity_meta_object(void* self) {
    return SignOn__Identity_MetaObject((SignOn__Identity*)self);
}

void* q_signon__identity_metacast(void* self, const char* param1) {
    return SignOn__Identity_Metacast((SignOn__Identity*)self, param1);
}

int32_t q_signon__identity_metacall(void* self, int32_t param1, int param2, void* param3) {
    return SignOn__Identity_Metacall((SignOn__Identity*)self, param1, param2, param3);
}

const char* q_signon__identity_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

SignOn__Identity* q_signon__identity_new_identity() {
    return SignOn__Identity_NewIdentity();
}

SignOn__Identity* q_signon__identity_existing_identity(uint32_t id) {
    return SignOn__Identity_ExistingIdentity(id);
}

uint32_t q_signon__identity_id(void* self) {
    return SignOn__Identity_Id((SignOn__Identity*)self);
}

void q_signon__identity_query_available_methods(void* self) {
    SignOn__Identity_QueryAvailableMethods((SignOn__Identity*)self);
}

void q_signon__identity_request_credentials_update(void* self) {
    SignOn__Identity_RequestCredentialsUpdate((SignOn__Identity*)self);
}

void q_signon__identity_store_credentials(void* self) {
    SignOn__Identity_StoreCredentials((SignOn__Identity*)self);
}

void q_signon__identity_remove(void* self) {
    SignOn__Identity_Remove((SignOn__Identity*)self);
}

void q_signon__identity_add_reference(void* self) {
    SignOn__Identity_AddReference((SignOn__Identity*)self);
}

void q_signon__identity_remove_reference(void* self) {
    SignOn__Identity_RemoveReference((SignOn__Identity*)self);
}

void q_signon__identity_query_info(void* self) {
    SignOn__Identity_QueryInfo((SignOn__Identity*)self);
}

void q_signon__identity_verify_user(void* self) {
    SignOn__Identity_VerifyUser((SignOn__Identity*)self);
}

void q_signon__identity_verify_user2(void* self, libqt_map /* of const char* to QVariant* */ params) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map params_ret;
    params_ret.len = params.len;
    params_ret.keys = (libqt_string*)malloc(params_ret.len * sizeof(libqt_string));
    if (params_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_signon__identity_verify_user2\n");
        abort();
    }
    params_ret.values = (QVariant**)malloc(params_ret.len * sizeof(QVariant*));
    if (params_ret.values == NULL) {
        free(params_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_signon__identity_verify_user2\n");
        abort();
    }
    const char** params_karr = (const char**)params.keys;
    libqt_string* params_kdest = (libqt_string*)params_ret.keys;
    QVariant** params_varr = (QVariant**)params.values;
    QVariant** params_vdest = (QVariant**)params_ret.values;
    for (size_t i = 0; i < params_ret.len; ++i) {
        params_kdest[i] = qstring(params_karr[i]);
        params_vdest[i] = params_varr[i];
    }
    SignOn__Identity_VerifyUser2((SignOn__Identity*)self, params_ret);
    free(params_ret.keys);
    free(params_ret.values);
}

void q_signon__identity_verify_secret(void* self, const char* secret) {
    SignOn__Identity_VerifySecret((SignOn__Identity*)self, qstring(secret));
}

void q_signon__identity_sign_out(void* self) {
    SignOn__Identity_SignOut((SignOn__Identity*)self);
}

void q_signon__identity_error(void* self, void* err) {
    SignOn__Identity_Error((SignOn__Identity*)self, (SignOn__Error*)err);
}

void q_signon__identity_on_error(void* self, void (*callback)(void*, void*)) {
    SignOn__Identity_Connect_Error((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_methods_available(void* self, const char* methods[static 1]) {
    size_t methods_len = libqt_strv_length(methods);
    libqt_string* methods_qstr = (libqt_string*)malloc(methods_len * sizeof(libqt_string));
    if (methods_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__identity_methods_available\n");
        abort();
    }
    for (size_t i = 0; i < methods_len; ++i) {
        methods_qstr[i] = qstring(methods[i]);
    }
    libqt_list methods_list = qlist(methods_qstr, methods_len);
    SignOn__Identity_MethodsAvailable((SignOn__Identity*)self, methods_list);
    free(methods_qstr);
}

void q_signon__identity_on_methods_available(void* self, void (*callback)(void*, const char***)) {
    SignOn__Identity_Connect_MethodsAvailable((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_credentials_stored(void* self, uint32_t id) {
    SignOn__Identity_CredentialsStored((SignOn__Identity*)self, id);
}

void q_signon__identity_on_credentials_stored(void* self, void (*callback)(void*, uint32_t)) {
    SignOn__Identity_Connect_CredentialsStored((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_reference_added(void* self) {
    SignOn__Identity_ReferenceAdded((SignOn__Identity*)self);
}

void q_signon__identity_on_reference_added(void* self, void (*callback)(void*)) {
    SignOn__Identity_Connect_ReferenceAdded((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_reference_removed(void* self) {
    SignOn__Identity_ReferenceRemoved((SignOn__Identity*)self);
}

void q_signon__identity_on_reference_removed(void* self, void (*callback)(void*)) {
    SignOn__Identity_Connect_ReferenceRemoved((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_info(void* self, void* info) {
    SignOn__Identity_Info((SignOn__Identity*)self, (SignOn__IdentityInfo*)info);
}

void q_signon__identity_on_info(void* self, void (*callback)(void*, void*)) {
    SignOn__Identity_Connect_Info((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_user_verified(void* self, bool valid) {
    SignOn__Identity_UserVerified((SignOn__Identity*)self, valid);
}

void q_signon__identity_on_user_verified(void* self, void (*callback)(void*, bool)) {
    SignOn__Identity_Connect_UserVerified((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_secret_verified(void* self, bool valid) {
    SignOn__Identity_SecretVerified((SignOn__Identity*)self, valid);
}

void q_signon__identity_on_secret_verified(void* self, void (*callback)(void*, bool)) {
    SignOn__Identity_Connect_SecretVerified((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_signed_out(void* self) {
    SignOn__Identity_SignedOut((SignOn__Identity*)self);
}

void q_signon__identity_on_signed_out(void* self, void (*callback)(void*)) {
    SignOn__Identity_Connect_SignedOut((SignOn__Identity*)self, (intptr_t)callback);
}

void q_signon__identity_removed(void* self) {
    SignOn__Identity_Removed((SignOn__Identity*)self);
}

void q_signon__identity_on_removed(void* self, void (*callback)(void*)) {
    SignOn__Identity_Connect_Removed((SignOn__Identity*)self, (intptr_t)callback);
}

const char* q_signon__identity_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signon__identity_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

SignOn__Identity* q_signon__identity_new_identity1(void* info) {
    return SignOn__Identity_NewIdentity1((SignOn__IdentityInfo*)info);
}

SignOn__Identity* q_signon__identity_new_identity2(void* info, void* parent) {
    return SignOn__Identity_NewIdentity2((SignOn__IdentityInfo*)info, (QObject*)parent);
}

SignOn__Identity* q_signon__identity_existing_identity2(uint32_t id, void* parent) {
    return SignOn__Identity_ExistingIdentity2(id, (QObject*)parent);
}

void q_signon__identity_request_credentials_update1(void* self, const char* message) {
    SignOn__Identity_RequestCredentialsUpdate1((SignOn__Identity*)self, qstring(message));
}

void q_signon__identity_store_credentials1(void* self, void* info) {
    SignOn__Identity_StoreCredentials1((SignOn__Identity*)self, (SignOn__IdentityInfo*)info);
}

void q_signon__identity_add_reference1(void* self, const char* reference) {
    SignOn__Identity_AddReference1((SignOn__Identity*)self, qstring(reference));
}

void q_signon__identity_remove_reference1(void* self, const char* reference) {
    SignOn__Identity_RemoveReference1((SignOn__Identity*)self, qstring(reference));
}

void q_signon__identity_verify_user1(void* self, const char* message) {
    SignOn__Identity_VerifyUser1((SignOn__Identity*)self, qstring(message));
}

bool q_signon__identity_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_signon__identity_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_signon__identity_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__identity_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_signon__identity_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_signon__identity_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_signon__identity_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_signon__identity_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_signon__identity_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_signon__identity_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_signon__identity_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_signon__identity_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_signon__identity_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_signon__identity_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_signon__identity_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_signon__identity_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_signon__identity_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_signon__identity_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_signon__identity_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_signon__identity_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_signon__identity_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_signon__identity_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_signon__identity_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_signon__identity_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_signon__identity_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_signon__identity_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_signon__identity_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_signon__identity_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_signon__identity_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_signon__identity_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_signon__identity_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_signon__identity_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__identity_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_signon__identity_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_signon__identity_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_signon__identity_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_signon__identity_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_signon__identity_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_signon__identity_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_signon__identity_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_signon__identity_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_signon__identity_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_signon__identity_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_signon__identity_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_signon__identity_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_signon__identity_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_signon__identity_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_signon__identity_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_signon__identity_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_signon__identity_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_signon__identity_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_signon__identity_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_signon__identity_delete(void* self) {
    SignOn__Identity_Delete((SignOn__Identity*)(self));
}
