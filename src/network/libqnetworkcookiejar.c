#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkcookie.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqnetworkcookiejar.hpp"
#include "libqnetworkcookiejar.h"

QNetworkCookieJar* q_networkcookiejar_new() {
    return QNetworkCookieJar_new();
}

QNetworkCookieJar* q_networkcookiejar_new2(void* parent) {
    return QNetworkCookieJar_new2((QObject*)parent);
}

QMetaObject* q_networkcookiejar_meta_object(void* self) {
    return QNetworkCookieJar_MetaObject((QNetworkCookieJar*)self);
}

void* q_networkcookiejar_metacast(void* self, const char* param1) {
    return QNetworkCookieJar_Metacast((QNetworkCookieJar*)self, param1);
}

int32_t q_networkcookiejar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkCookieJar_Metacall((QNetworkCookieJar*)self, param1, param2, param3);
}

void q_networkcookiejar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QNetworkCookieJar_OnMetacall((QNetworkCookieJar*)self, (intptr_t)slot);
}

int32_t q_networkcookiejar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkCookieJar_QBaseMetacall((QNetworkCookieJar*)self, param1, param2, param3);
}

const char* q_networkcookiejar_tr(const char* s) {
    libqt_string _str = QNetworkCookieJar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QNetworkCookie* */ q_networkcookiejar_cookies_for_url(void* self, void* url) {
    libqt_list _arr = QNetworkCookieJar_CookiesForUrl((QNetworkCookieJar*)self, (QUrl*)url);
    return _arr;
}

void q_networkcookiejar_on_cookies_for_url(void* self, libqt_list /* of QNetworkCookie* */ (*slot)(void*, void*)) {
    QNetworkCookieJar_OnCookiesForUrl((QNetworkCookieJar*)self, (intptr_t)slot);
}

libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_cookies_for_url(void* self, void* url) {
    libqt_list _arr = QNetworkCookieJar_QBaseCookiesForUrl((QNetworkCookieJar*)self, (QUrl*)url);
    return _arr;
}

bool q_networkcookiejar_set_cookies_from_url(void* self, void* cookieList[], void* url) {
    QNetworkCookie** cookieList_arr = (QNetworkCookie**)cookieList;
    size_t cookieList_len = 0;
    while (cookieList_arr[cookieList_len] != NULL) {
        cookieList_len++;
    }
    libqt_list cookieList_list = {
        .len = cookieList_len,
        .data = {(QNetworkCookie*)cookieList},
    };
    return QNetworkCookieJar_SetCookiesFromUrl((QNetworkCookieJar*)self, cookieList_list, (QUrl*)url);
}

void q_networkcookiejar_on_set_cookies_from_url(void* self, bool (*slot)(void*, void*, void*)) {
    QNetworkCookieJar_OnSetCookiesFromUrl((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_qbase_set_cookies_from_url(void* self, void* cookieList[], void* url) {
    QNetworkCookie** cookieList_arr = (QNetworkCookie**)cookieList;
    size_t cookieList_len = 0;
    while (cookieList_arr[cookieList_len] != NULL) {
        cookieList_len++;
    }
    libqt_list cookieList_list = {
        .len = cookieList_len,
        .data = {(QNetworkCookie*)cookieList},
    };
    return QNetworkCookieJar_QBaseSetCookiesFromUrl((QNetworkCookieJar*)self, cookieList_list, (QUrl*)url);
}

bool q_networkcookiejar_insert_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_InsertCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

void q_networkcookiejar_on_insert_cookie(void* self, bool (*slot)(void*, void*)) {
    QNetworkCookieJar_OnInsertCookie((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_qbase_insert_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_QBaseInsertCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

bool q_networkcookiejar_update_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_UpdateCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

void q_networkcookiejar_on_update_cookie(void* self, bool (*slot)(void*, void*)) {
    QNetworkCookieJar_OnUpdateCookie((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_qbase_update_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_QBaseUpdateCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

bool q_networkcookiejar_delete_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_DeleteCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

void q_networkcookiejar_on_delete_cookie(void* self, bool (*slot)(void*, void*)) {
    QNetworkCookieJar_OnDeleteCookie((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_qbase_delete_cookie(void* self, void* cookie) {
    return QNetworkCookieJar_QBaseDeleteCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie);
}

libqt_list /* of QNetworkCookie* */ q_networkcookiejar_all_cookies(void* self) {
    libqt_list _arr = QNetworkCookieJar_AllCookies((QNetworkCookieJar*)self);
    return _arr;
}

void q_networkcookiejar_on_all_cookies(void* self, libqt_list /* of QNetworkCookie* */ (*slot)()) {
    QNetworkCookieJar_OnAllCookies((QNetworkCookieJar*)self, (intptr_t)slot);
}

libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_all_cookies(void* self) {
    libqt_list _arr = QNetworkCookieJar_QBaseAllCookies((QNetworkCookieJar*)self);
    return _arr;
}

void q_networkcookiejar_set_all_cookies(void* self, void* cookieList[]) {
    QNetworkCookie** cookieList_arr = (QNetworkCookie**)cookieList;
    size_t cookieList_len = 0;
    while (cookieList_arr[cookieList_len] != NULL) {
        cookieList_len++;
    }
    libqt_list cookieList_list = {
        .len = cookieList_len,
        .data = {(QNetworkCookie*)cookieList},
    };
    QNetworkCookieJar_SetAllCookies((QNetworkCookieJar*)self, cookieList_list);
}

void q_networkcookiejar_on_set_all_cookies(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnSetAllCookies((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_qbase_set_all_cookies(void* self, void* cookieList[]) {
    QNetworkCookie** cookieList_arr = (QNetworkCookie**)cookieList;
    size_t cookieList_len = 0;
    while (cookieList_arr[cookieList_len] != NULL) {
        cookieList_len++;
    }
    libqt_list cookieList_list = {
        .len = cookieList_len,
        .data = {(QNetworkCookie*)cookieList},
    };
    QNetworkCookieJar_QBaseSetAllCookies((QNetworkCookieJar*)self, cookieList_list);
}

bool q_networkcookiejar_validate_cookie(void* self, void* cookie, void* url) {
    return QNetworkCookieJar_ValidateCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie, (QUrl*)url);
}

void q_networkcookiejar_on_validate_cookie(void* self, bool (*slot)(void*, void*, void*)) {
    QNetworkCookieJar_OnValidateCookie((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_qbase_validate_cookie(void* self, void* cookie, void* url) {
    return QNetworkCookieJar_QBaseValidateCookie((QNetworkCookieJar*)self, (QNetworkCookie*)cookie, (QUrl*)url);
}

const char* q_networkcookiejar_tr2(const char* s, const char* c) {
    libqt_string _str = QNetworkCookieJar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkcookiejar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QNetworkCookieJar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkcookiejar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookiejar_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_networkcookiejar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_networkcookiejar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_networkcookiejar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_networkcookiejar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_networkcookiejar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_networkcookiejar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_networkcookiejar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_networkcookiejar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_networkcookiejar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_networkcookiejar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_networkcookiejar_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_networkcookiejar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_networkcookiejar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_networkcookiejar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_networkcookiejar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_networkcookiejar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_networkcookiejar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_networkcookiejar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_networkcookiejar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_networkcookiejar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_networkcookiejar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_networkcookiejar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_networkcookiejar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_networkcookiejar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_networkcookiejar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_networkcookiejar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_networkcookiejar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_networkcookiejar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_networkcookiejar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_networkcookiejar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_networkcookiejar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_networkcookiejar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_networkcookiejar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_networkcookiejar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_networkcookiejar_event(void* self, void* event) {
    return QNetworkCookieJar_Event((QNetworkCookieJar*)self, (QEvent*)event);
}

bool q_networkcookiejar_qbase_event(void* self, void* event) {
    return QNetworkCookieJar_QBaseEvent((QNetworkCookieJar*)self, (QEvent*)event);
}

void q_networkcookiejar_on_event(void* self, bool (*slot)(void*, void*)) {
    QNetworkCookieJar_OnEvent((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_event_filter(void* self, void* watched, void* event) {
    return QNetworkCookieJar_EventFilter((QNetworkCookieJar*)self, (QObject*)watched, (QEvent*)event);
}

bool q_networkcookiejar_qbase_event_filter(void* self, void* watched, void* event) {
    return QNetworkCookieJar_QBaseEventFilter((QNetworkCookieJar*)self, (QObject*)watched, (QEvent*)event);
}

void q_networkcookiejar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QNetworkCookieJar_OnEventFilter((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_timer_event(void* self, void* event) {
    QNetworkCookieJar_TimerEvent((QNetworkCookieJar*)self, (QTimerEvent*)event);
}

void q_networkcookiejar_qbase_timer_event(void* self, void* event) {
    QNetworkCookieJar_QBaseTimerEvent((QNetworkCookieJar*)self, (QTimerEvent*)event);
}

void q_networkcookiejar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnTimerEvent((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_child_event(void* self, void* event) {
    QNetworkCookieJar_ChildEvent((QNetworkCookieJar*)self, (QChildEvent*)event);
}

void q_networkcookiejar_qbase_child_event(void* self, void* event) {
    QNetworkCookieJar_QBaseChildEvent((QNetworkCookieJar*)self, (QChildEvent*)event);
}

void q_networkcookiejar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnChildEvent((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_custom_event(void* self, void* event) {
    QNetworkCookieJar_CustomEvent((QNetworkCookieJar*)self, (QEvent*)event);
}

void q_networkcookiejar_qbase_custom_event(void* self, void* event) {
    QNetworkCookieJar_QBaseCustomEvent((QNetworkCookieJar*)self, (QEvent*)event);
}

void q_networkcookiejar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnCustomEvent((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_connect_notify(void* self, void* signal) {
    QNetworkCookieJar_ConnectNotify((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

void q_networkcookiejar_qbase_connect_notify(void* self, void* signal) {
    QNetworkCookieJar_QBaseConnectNotify((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

void q_networkcookiejar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnConnectNotify((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_disconnect_notify(void* self, void* signal) {
    QNetworkCookieJar_DisconnectNotify((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

void q_networkcookiejar_qbase_disconnect_notify(void* self, void* signal) {
    QNetworkCookieJar_QBaseDisconnectNotify((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

void q_networkcookiejar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkCookieJar_OnDisconnectNotify((QNetworkCookieJar*)self, (intptr_t)slot);
}

QObject* q_networkcookiejar_sender(void* self) {
    return QNetworkCookieJar_Sender((QNetworkCookieJar*)self);
}

QObject* q_networkcookiejar_qbase_sender(void* self) {
    return QNetworkCookieJar_QBaseSender((QNetworkCookieJar*)self);
}

void q_networkcookiejar_on_sender(void* self, QObject* (*slot)()) {
    QNetworkCookieJar_OnSender((QNetworkCookieJar*)self, (intptr_t)slot);
}

int32_t q_networkcookiejar_sender_signal_index(void* self) {
    return QNetworkCookieJar_SenderSignalIndex((QNetworkCookieJar*)self);
}

int32_t q_networkcookiejar_qbase_sender_signal_index(void* self) {
    return QNetworkCookieJar_QBaseSenderSignalIndex((QNetworkCookieJar*)self);
}

void q_networkcookiejar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QNetworkCookieJar_OnSenderSignalIndex((QNetworkCookieJar*)self, (intptr_t)slot);
}

int32_t q_networkcookiejar_receivers(void* self, const char* signal) {
    return QNetworkCookieJar_Receivers((QNetworkCookieJar*)self, signal);
}

int32_t q_networkcookiejar_qbase_receivers(void* self, const char* signal) {
    return QNetworkCookieJar_QBaseReceivers((QNetworkCookieJar*)self, signal);
}

void q_networkcookiejar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QNetworkCookieJar_OnReceivers((QNetworkCookieJar*)self, (intptr_t)slot);
}

bool q_networkcookiejar_is_signal_connected(void* self, void* signal) {
    return QNetworkCookieJar_IsSignalConnected((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

bool q_networkcookiejar_qbase_is_signal_connected(void* self, void* signal) {
    return QNetworkCookieJar_QBaseIsSignalConnected((QNetworkCookieJar*)self, (QMetaMethod*)signal);
}

void q_networkcookiejar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QNetworkCookieJar_OnIsSignalConnected((QNetworkCookieJar*)self, (intptr_t)slot);
}

void q_networkcookiejar_delete(void* self) {
    QNetworkCookieJar_Delete((QNetworkCookieJar*)(self));
}
