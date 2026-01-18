#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libsignonerror.hpp"
#include "libsessiondata.hpp"
#include "libauthsession.hpp"
#include "libauthsession.h"

const QMetaObject* q_signon__authsession_meta_object(void* self) {
    return SignOn__AuthSession_MetaObject((SignOn__AuthSession*)self);
}

void* q_signon__authsession_metacast(void* self, const char* param1) {
    return SignOn__AuthSession_Metacast((SignOn__AuthSession*)self, param1);
}

int32_t q_signon__authsession_metacall(void* self, int32_t param1, int param2, void* param3) {
    return SignOn__AuthSession_Metacall((SignOn__AuthSession*)self, param1, param2, param3);
}

const char* q_signon__authsession_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signon__authsession_name(void* self) {
    libqt_string _str = SignOn__AuthSession_Name((SignOn__AuthSession*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authsession_query_available_mechanisms(void* self) {
    SignOn__AuthSession_QueryAvailableMechanisms((SignOn__AuthSession*)self);
}

void q_signon__authsession_process(void* self, void* sessionData) {
    SignOn__AuthSession_Process((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData);
}

void q_signon__authsession_challenge(void* self, void* sessionData) {
    SignOn__AuthSession_Challenge((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData);
}

void q_signon__authsession_request(void* self, void* sessionData) {
    SignOn__AuthSession_Request((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData);
}

void q_signon__authsession_cancel(void* self) {
    SignOn__AuthSession_Cancel((SignOn__AuthSession*)self);
}

void q_signon__authsession_sign_message(void* self, void* params) {
    SignOn__AuthSession_SignMessage((SignOn__AuthSession*)self, (SignOn__SessionData*)params);
}

void q_signon__authsession_error(void* self, void* err) {
    SignOn__AuthSession_Error((SignOn__AuthSession*)self, (SignOn__Error*)err);
}

void q_signon__authsession_on_error(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthSession_Connect_Error((SignOn__AuthSession*)self, (intptr_t)callback);
}

void q_signon__authsession_mechanisms_available(void* self, const char* mechanisms[static 1]) {
    size_t mechanisms_len = libqt_strv_length(mechanisms);
    libqt_string* mechanisms_qstr = (libqt_string*)malloc(mechanisms_len * sizeof(libqt_string));
    if (mechanisms_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authsession_mechanisms_available\n");
        abort();
    }
    for (size_t i = 0; i < mechanisms_len; ++i) {
        mechanisms_qstr[i] = qstring(mechanisms[i]);
    }
    libqt_list mechanisms_list = qlist(mechanisms_qstr, mechanisms_len);
    SignOn__AuthSession_MechanismsAvailable((SignOn__AuthSession*)self, mechanisms_list);
    free(mechanisms_qstr);
}

void q_signon__authsession_on_mechanisms_available(void* self, void (*callback)(void*, const char**)) {
    SignOn__AuthSession_Connect_MechanismsAvailable((SignOn__AuthSession*)self, (intptr_t)callback);
}

void q_signon__authsession_response(void* self, void* sessionData) {
    SignOn__AuthSession_Response((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData);
}

void q_signon__authsession_on_response(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthSession_Connect_Response((SignOn__AuthSession*)self, (intptr_t)callback);
}

void q_signon__authsession_state_changed(void* self, int32_t state, const char* message) {
    SignOn__AuthSession_StateChanged((SignOn__AuthSession*)self, state, qstring(message));
}

void q_signon__authsession_on_state_changed(void* self, void (*callback)(void*, int32_t, const char*)) {
    SignOn__AuthSession_Connect_StateChanged((SignOn__AuthSession*)self, (intptr_t)callback);
}

const char* q_signon__authsession_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signon__authsession_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authsession_query_available_mechanisms1(void* self, const char* wantedMechanisms[static 1]) {
    size_t wantedMechanisms_len = libqt_strv_length(wantedMechanisms);
    libqt_string* wantedMechanisms_qstr = (libqt_string*)malloc(wantedMechanisms_len * sizeof(libqt_string));
    if (wantedMechanisms_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authsession_query_available_mechanisms1\n");
        abort();
    }
    for (size_t i = 0; i < wantedMechanisms_len; ++i) {
        wantedMechanisms_qstr[i] = qstring(wantedMechanisms[i]);
    }
    libqt_list wantedMechanisms_list = qlist(wantedMechanisms_qstr, wantedMechanisms_len);
    SignOn__AuthSession_QueryAvailableMechanisms1((SignOn__AuthSession*)self, wantedMechanisms_list);
    free(wantedMechanisms_qstr);
}

void q_signon__authsession_process2(void* self, void* sessionData, const char* mechanism) {
    SignOn__AuthSession_Process2((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData, qstring(mechanism));
}

void q_signon__authsession_challenge2(void* self, void* sessionData, const char* mechanism) {
    SignOn__AuthSession_Challenge2((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData, qstring(mechanism));
}

void q_signon__authsession_request2(void* self, void* sessionData, const char* mechanism) {
    SignOn__AuthSession_Request2((SignOn__AuthSession*)self, (SignOn__SessionData*)sessionData, qstring(mechanism));
}

void q_signon__authsession_sign_message2(void* self, void* params, const char* mechanism) {
    SignOn__AuthSession_SignMessage2((SignOn__AuthSession*)self, (SignOn__SessionData*)params, qstring(mechanism));
}

bool q_signon__authsession_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_signon__authsession_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_signon__authsession_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authsession_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_signon__authsession_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_signon__authsession_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_signon__authsession_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_signon__authsession_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_signon__authsession_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_signon__authsession_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_signon__authsession_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_signon__authsession_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_signon__authsession_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_signon__authsession_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_signon__authsession_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_signon__authsession_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_signon__authsession_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_signon__authsession_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_signon__authsession_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_signon__authsession_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_signon__authsession_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_signon__authsession_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_signon__authsession_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_signon__authsession_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_signon__authsession_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_signon__authsession_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_signon__authsession_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authsession_dynamic_property_names\n");
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

QBindingStorage* q_signon__authsession_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_signon__authsession_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_signon__authsession_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_signon__authsession_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_signon__authsession_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_signon__authsession_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_signon__authsession_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_signon__authsession_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_signon__authsession_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_signon__authsession_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_signon__authsession_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_signon__authsession_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_signon__authsession_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_signon__authsession_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
