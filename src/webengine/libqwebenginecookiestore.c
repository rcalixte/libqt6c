#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkcookie.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginecookiestore.h"

const QMetaObject* q_webenginecookiestore_meta_object(void* self) {
    return QWebEngineCookieStore_MetaObject((QWebEngineCookieStore*)self);
}

void* q_webenginecookiestore_metacast(void* self, const char* param1) {
    return QWebEngineCookieStore_Metacast((QWebEngineCookieStore*)self, param1);
}

int32_t q_webenginecookiestore_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineCookieStore_Metacall((QWebEngineCookieStore*)self, param1, param2, param3);
}

const char* q_webenginecookiestore_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginecookiestore_set_cookie(void* self, void* cookie) {
    QWebEngineCookieStore_SetCookie((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie);
}

void q_webenginecookiestore_delete_cookie(void* self, void* cookie) {
    QWebEngineCookieStore_DeleteCookie((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie);
}

void q_webenginecookiestore_delete_session_cookies(void* self) {
    QWebEngineCookieStore_DeleteSessionCookies((QWebEngineCookieStore*)self);
}

void q_webenginecookiestore_delete_all_cookies(void* self) {
    QWebEngineCookieStore_DeleteAllCookies((QWebEngineCookieStore*)self);
}

void q_webenginecookiestore_load_all_cookies(void* self) {
    QWebEngineCookieStore_LoadAllCookies((QWebEngineCookieStore*)self);
}

void q_webenginecookiestore_cookie_added(void* self, void* cookie) {
    QWebEngineCookieStore_CookieAdded((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie);
}

void q_webenginecookiestore_on_cookie_added(void* self, void (*callback)(void*, void*)) {
    QWebEngineCookieStore_Connect_CookieAdded((QWebEngineCookieStore*)self, (intptr_t)callback);
}

void q_webenginecookiestore_cookie_removed(void* self, void* cookie) {
    QWebEngineCookieStore_CookieRemoved((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie);
}

void q_webenginecookiestore_on_cookie_removed(void* self, void (*callback)(void*, void*)) {
    QWebEngineCookieStore_Connect_CookieRemoved((QWebEngineCookieStore*)self, (intptr_t)callback);
}

const char* q_webenginecookiestore_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginecookiestore_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginecookiestore_set_cookie2(void* self, void* cookie, void* origin) {
    QWebEngineCookieStore_SetCookie2((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie, (QUrl*)origin);
}

void q_webenginecookiestore_delete_cookie2(void* self, void* cookie, void* origin) {
    QWebEngineCookieStore_DeleteCookie2((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie, (QUrl*)origin);
}

bool q_webenginecookiestore_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginecookiestore_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginecookiestore_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginecookiestore_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginecookiestore_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginecookiestore_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginecookiestore_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginecookiestore_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginecookiestore_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginecookiestore_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginecookiestore_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginecookiestore_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webenginecookiestore_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webenginecookiestore_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginecookiestore_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginecookiestore_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginecookiestore_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginecookiestore_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginecookiestore_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginecookiestore_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_webenginecookiestore_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginecookiestore_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginecookiestore_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_webenginecookiestore_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginecookiestore_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_webenginecookiestore_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_webenginecookiestore_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_webenginecookiestore_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginecookiestore_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginecookiestore_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginecookiestore_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginecookiestore_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginecookiestore_dynamic_property_names\n");
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

QBindingStorage* q_webenginecookiestore_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginecookiestore_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginecookiestore_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginecookiestore_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webenginecookiestore_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginecookiestore_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginecookiestore_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webenginecookiestore_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webenginecookiestore_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webenginecookiestore_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_webenginecookiestore_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webenginecookiestore_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_webenginecookiestore_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_webenginecookiestore_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_webenginecookiestore_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_webenginecookiestore_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_webenginecookiestore_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginecookiestore_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webenginecookiestore_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webenginecookiestore_delete(void* self) {
    QWebEngineCookieStore_Delete((QWebEngineCookieStore*)(self));
}

QWebEngineCookieStore__FilterRequest* q_webenginecookiestore__filterrequest_new(void* param1) {
    return QWebEngineCookieStore__FilterRequest_new((QWebEngineCookieStore__FilterRequest*)param1);
}

QUrl* q_webenginecookiestore__filterrequest_first_party_url(void* self) {
    return QWebEngineCookieStore__FilterRequest_FirstPartyUrl((QWebEngineCookieStore__FilterRequest*)self);
}

void q_webenginecookiestore__filterrequest_set_first_party_url(void* self, void* firstPartyUrl) {
    QWebEngineCookieStore__FilterRequest_SetFirstPartyUrl((QWebEngineCookieStore__FilterRequest*)self, (QUrl*)firstPartyUrl);
}

QUrl* q_webenginecookiestore__filterrequest_origin(void* self) {
    return QWebEngineCookieStore__FilterRequest_Origin((QWebEngineCookieStore__FilterRequest*)self);
}

void q_webenginecookiestore__filterrequest_set_origin(void* self, void* origin) {
    QWebEngineCookieStore__FilterRequest_SetOrigin((QWebEngineCookieStore__FilterRequest*)self, (QUrl*)origin);
}

bool q_webenginecookiestore__filterrequest_third_party(void* self) {
    return QWebEngineCookieStore__FilterRequest_ThirdParty((QWebEngineCookieStore__FilterRequest*)self);
}

void q_webenginecookiestore__filterrequest_set_third_party(void* self, bool thirdParty) {
    QWebEngineCookieStore__FilterRequest_SetThirdParty((QWebEngineCookieStore__FilterRequest*)self, thirdParty);
}

bool q_webenginecookiestore__filterrequest_reserved_flag(void* self) {
    return QWebEngineCookieStore__FilterRequest_ReservedFlag((QWebEngineCookieStore__FilterRequest*)self);
}

void q_webenginecookiestore__filterrequest_set_reserved_flag(void* self, bool _reservedFlag) {
    QWebEngineCookieStore__FilterRequest_SetReservedFlag((QWebEngineCookieStore__FilterRequest*)self, _reservedFlag);
}

unsigned short q_webenginecookiestore__filterrequest_reserved_type(void* self) {
    return QWebEngineCookieStore__FilterRequest_ReservedType((QWebEngineCookieStore__FilterRequest*)self);
}

void q_webenginecookiestore__filterrequest_set_reserved_type(void* self, unsigned short _reservedType) {
    QWebEngineCookieStore__FilterRequest_SetReservedType((QWebEngineCookieStore__FilterRequest*)self, _reservedType);
}

void q_webenginecookiestore__filterrequest_operator_assign(void* self, void* param1) {
    QWebEngineCookieStore__FilterRequest_OperatorAssign((QWebEngineCookieStore__FilterRequest*)self, (QWebEngineCookieStore__FilterRequest*)param1);
}

void q_webenginecookiestore__filterrequest_delete(void* self) {
    QWebEngineCookieStore__FilterRequest_Delete((QWebEngineCookieStore__FilterRequest*)(self));
}
