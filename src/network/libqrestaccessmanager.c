#include "../libqevent.hpp"
#include "libqhttpmultipart.hpp"
#include "../libqiodevice.hpp"
#include "../libqjsondocument.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqrestaccessmanager.hpp"
#include "libqrestaccessmanager.h"

QRestAccessManager* q_restaccessmanager_new(void* manager) {
    return QRestAccessManager_new((QNetworkAccessManager*)manager);
}

QRestAccessManager* q_restaccessmanager_new2(void* manager, void* parent) {
    return QRestAccessManager_new2((QNetworkAccessManager*)manager, (QObject*)parent);
}

const QMetaObject* q_restaccessmanager_meta_object(void* self) {
    return QRestAccessManager_MetaObject((QRestAccessManager*)self);
}

void* q_restaccessmanager_metacast(void* self, const char* param1) {
    return QRestAccessManager_Metacast((QRestAccessManager*)self, param1);
}

int32_t q_restaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRestAccessManager_Metacall((QRestAccessManager*)self, param1, param2, param3);
}

void q_restaccessmanager_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QRestAccessManager_OnMetacall((QRestAccessManager*)self, (intptr_t)slot);
}

int32_t q_restaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRestAccessManager_QBaseMetacall((QRestAccessManager*)self, param1, param2, param3);
}

const char* q_restaccessmanager_tr(const char* s) {
    libqt_string _str = QRestAccessManager_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QNetworkAccessManager* q_restaccessmanager_network_access_manager(void* self) {
    return QRestAccessManager_NetworkAccessManager((QRestAccessManager*)self);
}

QNetworkReply* q_restaccessmanager_delete_resource(void* self, void* request) {
    return QRestAccessManager_DeleteResource((QRestAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_restaccessmanager_head(void* self, void* request) {
    return QRestAccessManager_Head((QRestAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_restaccessmanager_get(void* self, void* request) {
    return QRestAccessManager_Get((QRestAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_restaccessmanager_get2(void* self, void* request, const char* data) {
    return QRestAccessManager_Get2((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_restaccessmanager_get3(void* self, void* request, void* data) {
    return QRestAccessManager_Get3((QRestAccessManager*)self, (QNetworkRequest*)request, (QJsonDocument*)data);
}

QNetworkReply* q_restaccessmanager_get4(void* self, void* request, void* data) {
    return QRestAccessManager_Get4((QRestAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_post(void* self, void* request, void* data) {
    return QRestAccessManager_Post((QRestAccessManager*)self, (QNetworkRequest*)request, (QJsonDocument*)data);
}

QNetworkReply* q_restaccessmanager_post2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data) {
    return QRestAccessManager_Post2((QRestAccessManager*)self, (QNetworkRequest*)request, data);
}

QNetworkReply* q_restaccessmanager_post3(void* self, void* request, const char* data) {
    return QRestAccessManager_Post3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_restaccessmanager_post4(void* self, void* request, void* data) {
    return QRestAccessManager_Post4((QRestAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)data);
}

QNetworkReply* q_restaccessmanager_post5(void* self, void* request, void* data) {
    return QRestAccessManager_Post5((QRestAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_put(void* self, void* request, void* data) {
    return QRestAccessManager_Put((QRestAccessManager*)self, (QNetworkRequest*)request, (QJsonDocument*)data);
}

QNetworkReply* q_restaccessmanager_put2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data) {
    return QRestAccessManager_Put2((QRestAccessManager*)self, (QNetworkRequest*)request, data);
}

QNetworkReply* q_restaccessmanager_put3(void* self, void* request, const char* data) {
    return QRestAccessManager_Put3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_restaccessmanager_put4(void* self, void* request, void* data) {
    return QRestAccessManager_Put4((QRestAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)data);
}

QNetworkReply* q_restaccessmanager_put5(void* self, void* request, void* data) {
    return QRestAccessManager_Put5((QRestAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_patch(void* self, void* request, void* data) {
    return QRestAccessManager_Patch((QRestAccessManager*)self, (QNetworkRequest*)request, (QJsonDocument*)data);
}

QNetworkReply* q_restaccessmanager_patch2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data) {
    return QRestAccessManager_Patch2((QRestAccessManager*)self, (QNetworkRequest*)request, data);
}

QNetworkReply* q_restaccessmanager_patch3(void* self, void* request, const char* data) {
    return QRestAccessManager_Patch3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_restaccessmanager_patch4(void* self, void* request, void* data) {
    return QRestAccessManager_Patch4((QRestAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_send_custom_request(void* self, void* request, const char* method, const char* data) {
    return QRestAccessManager_SendCustomRequest((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), qstring(data));
}

QNetworkReply* q_restaccessmanager_send_custom_request2(void* self, void* request, const char* method, void* data) {
    return QRestAccessManager_SendCustomRequest2((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_send_custom_request3(void* self, void* request, const char* method, void* data) {
    return QRestAccessManager_SendCustomRequest3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), (QHttpMultiPart*)data);
}

const char* q_restaccessmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QRestAccessManager_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_restaccessmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRestAccessManager_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_restaccessmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_restaccessmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_restaccessmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_restaccessmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_restaccessmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_restaccessmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_restaccessmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_restaccessmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_restaccessmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_restaccessmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_restaccessmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_restaccessmanager_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_restaccessmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_restaccessmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_restaccessmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_restaccessmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_restaccessmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_restaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_restaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_restaccessmanager_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_restaccessmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_restaccessmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_restaccessmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_restaccessmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_restaccessmanager_dynamic_property_names(void* self) {
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

QBindingStorage* q_restaccessmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_restaccessmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_restaccessmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_restaccessmanager_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_restaccessmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_restaccessmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_restaccessmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_restaccessmanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_restaccessmanager_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_restaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_restaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_restaccessmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_restaccessmanager_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_restaccessmanager_event(void* self, void* event) {
    return QRestAccessManager_Event((QRestAccessManager*)self, (QEvent*)event);
}

bool q_restaccessmanager_qbase_event(void* self, void* event) {
    return QRestAccessManager_QBaseEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_on_event(void* self, bool (*slot)(void*, void*)) {
    QRestAccessManager_OnEvent((QRestAccessManager*)self, (intptr_t)slot);
}

bool q_restaccessmanager_event_filter(void* self, void* watched, void* event) {
    return QRestAccessManager_EventFilter((QRestAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

bool q_restaccessmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return QRestAccessManager_QBaseEventFilter((QRestAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

void q_restaccessmanager_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QRestAccessManager_OnEventFilter((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_timer_event(void* self, void* event) {
    QRestAccessManager_TimerEvent((QRestAccessManager*)self, (QTimerEvent*)event);
}

void q_restaccessmanager_qbase_timer_event(void* self, void* event) {
    QRestAccessManager_QBaseTimerEvent((QRestAccessManager*)self, (QTimerEvent*)event);
}

void q_restaccessmanager_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QRestAccessManager_OnTimerEvent((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_child_event(void* self, void* event) {
    QRestAccessManager_ChildEvent((QRestAccessManager*)self, (QChildEvent*)event);
}

void q_restaccessmanager_qbase_child_event(void* self, void* event) {
    QRestAccessManager_QBaseChildEvent((QRestAccessManager*)self, (QChildEvent*)event);
}

void q_restaccessmanager_on_child_event(void* self, void (*slot)(void*, void*)) {
    QRestAccessManager_OnChildEvent((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_custom_event(void* self, void* event) {
    QRestAccessManager_CustomEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_qbase_custom_event(void* self, void* event) {
    QRestAccessManager_QBaseCustomEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QRestAccessManager_OnCustomEvent((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_connect_notify(void* self, void* signal) {
    QRestAccessManager_ConnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_qbase_connect_notify(void* self, void* signal) {
    QRestAccessManager_QBaseConnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QRestAccessManager_OnConnectNotify((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_disconnect_notify(void* self, void* signal) {
    QRestAccessManager_DisconnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_qbase_disconnect_notify(void* self, void* signal) {
    QRestAccessManager_QBaseDisconnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QRestAccessManager_OnDisconnectNotify((QRestAccessManager*)self, (intptr_t)slot);
}

QObject* q_restaccessmanager_sender(void* self) {
    return QRestAccessManager_Sender((QRestAccessManager*)self);
}

QObject* q_restaccessmanager_qbase_sender(void* self) {
    return QRestAccessManager_QBaseSender((QRestAccessManager*)self);
}

void q_restaccessmanager_on_sender(void* self, QObject* (*slot)()) {
    QRestAccessManager_OnSender((QRestAccessManager*)self, (intptr_t)slot);
}

int32_t q_restaccessmanager_sender_signal_index(void* self) {
    return QRestAccessManager_SenderSignalIndex((QRestAccessManager*)self);
}

int32_t q_restaccessmanager_qbase_sender_signal_index(void* self) {
    return QRestAccessManager_QBaseSenderSignalIndex((QRestAccessManager*)self);
}

void q_restaccessmanager_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QRestAccessManager_OnSenderSignalIndex((QRestAccessManager*)self, (intptr_t)slot);
}

int32_t q_restaccessmanager_receivers(void* self, const char* signal) {
    return QRestAccessManager_Receivers((QRestAccessManager*)self, signal);
}

int32_t q_restaccessmanager_qbase_receivers(void* self, const char* signal) {
    return QRestAccessManager_QBaseReceivers((QRestAccessManager*)self, signal);
}

void q_restaccessmanager_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QRestAccessManager_OnReceivers((QRestAccessManager*)self, (intptr_t)slot);
}

bool q_restaccessmanager_is_signal_connected(void* self, void* signal) {
    return QRestAccessManager_IsSignalConnected((QRestAccessManager*)self, (QMetaMethod*)signal);
}

bool q_restaccessmanager_qbase_is_signal_connected(void* self, void* signal) {
    return QRestAccessManager_QBaseIsSignalConnected((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QRestAccessManager_OnIsSignalConnected((QRestAccessManager*)self, (intptr_t)slot);
}

void q_restaccessmanager_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_restaccessmanager_delete(void* self) {
    QRestAccessManager_Delete((QRestAccessManager*)(self));
}
