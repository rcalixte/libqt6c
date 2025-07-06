#include "../libqmetaobject.hpp"
#include "../network/libqnetworkcookie.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginecookiestore.h"

const QMetaObject* q_webenginecookiestore_meta_object(void* self) {
    return QWebEngineCookieStore_MetaObject((QWebEngineCookieStore*)self);
}

void* q_webenginecookiestore_metacast(void* self, const char* param1) {
    return QWebEngineCookieStore_Metacast((QWebEngineCookieStore*)self, param1);
}

int32_t q_webenginecookiestore_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineCookieStore_Metacall((QWebEngineCookieStore*)self, param1, param2, param3);
}

const char* q_webenginecookiestore_tr(const char* s) {
    libqt_string _str = QWebEngineCookieStore_Tr(s);
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

void q_webenginecookiestore_on_cookie_added(void* self, void (*slot)(void*, void*)) {
    QWebEngineCookieStore_Connect_CookieAdded((QWebEngineCookieStore*)self, (intptr_t)slot);
}

void q_webenginecookiestore_cookie_removed(void* self, void* cookie) {
    QWebEngineCookieStore_CookieRemoved((QWebEngineCookieStore*)self, (QNetworkCookie*)cookie);
}

void q_webenginecookiestore_on_cookie_removed(void* self, void (*slot)(void*, void*)) {
    QWebEngineCookieStore_Connect_CookieRemoved((QWebEngineCookieStore*)self, (intptr_t)slot);
}

const char* q_webenginecookiestore_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineCookieStore_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginecookiestore_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineCookieStore_Tr3(s, c, n);
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

void q_webenginecookiestore_set_object_name(void* self, char* name) {
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

void q_webenginecookiestore_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginecookiestore_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
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

QMetaObject__Connection* q_webenginecookiestore_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginecookiestore_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginecookiestore_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginecookiestore_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
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

void q_webenginecookiestore_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
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

bool q_webenginecookiestore_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginecookiestore_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginecookiestore_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webenginecookiestore_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webenginecookiestore_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginecookiestore_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_webenginecookiestore_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_webenginecookiestore_delete(void* self) {
    QWebEngineCookieStore_Delete((QWebEngineCookieStore*)(self));
}

QWebEngineCookieStore__FilterRequest* q_webenginecookiestore__filterrequest_new(void* param1) {
    return QWebEngineCookieStore__FilterRequest_new((QWebEngineCookieStore__FilterRequest*)param1);
}

void q_webenginecookiestore__filterrequest_operator_assign(void* self, void* param1) {
    QWebEngineCookieStore__FilterRequest_OperatorAssign((QWebEngineCookieStore__FilterRequest*)self, (QWebEngineCookieStore__FilterRequest*)param1);
}

void q_webenginecookiestore__filterrequest_delete(void* self) {
    QWebEngineCookieStore__FilterRequest_Delete((QWebEngineCookieStore__FilterRequest*)(self));
}
