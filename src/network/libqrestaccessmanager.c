#include "../libqcoreevent.hpp"
#include "libqhttpmultipart.hpp"
#include "../libqiodevice.hpp"
#include "../libqjsondocument.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
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

void q_restaccessmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QRestAccessManager_OnMetaObject((QRestAccessManager*)self, (intptr_t)callback);
}

const QMetaObject* q_restaccessmanager_qbase_meta_object(void* self) {
    return QRestAccessManager_QBaseMetaObject((QRestAccessManager*)self);
}

void* q_restaccessmanager_metacast(void* self, const char* param1) {
    return QRestAccessManager_Metacast((QRestAccessManager*)self, param1);
}

void q_restaccessmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QRestAccessManager_OnMetacast((QRestAccessManager*)self, (intptr_t)callback);
}

void* q_restaccessmanager_qbase_metacast(void* self, const char* param1) {
    return QRestAccessManager_QBaseMetacast((QRestAccessManager*)self, param1);
}

int32_t q_restaccessmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRestAccessManager_Metacall((QRestAccessManager*)self, param1, param2, param3);
}

void q_restaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QRestAccessManager_OnMetacall((QRestAccessManager*)self, (intptr_t)callback);
}

int32_t q_restaccessmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRestAccessManager_QBaseMetacall((QRestAccessManager*)self, param1, param2, param3);
}

const char* q_restaccessmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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

QNetworkReply* q_restaccessmanager_get2(void* self, void* request, char* data) {
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
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = (libqt_string*)malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_restaccessmanager_post2\n");
        abort();
    }
    data_ret.values = (QVariant**)malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_restaccessmanager_post2\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }
    QNetworkReply* _out = QRestAccessManager_Post2((QRestAccessManager*)self, (QNetworkRequest*)request, data_ret);
    free(data_ret.keys);
    free(data_ret.values);
    return _out;
}

QNetworkReply* q_restaccessmanager_post3(void* self, void* request, char* data) {
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
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = (libqt_string*)malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_restaccessmanager_put2\n");
        abort();
    }
    data_ret.values = (QVariant**)malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_restaccessmanager_put2\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }
    QNetworkReply* _out = QRestAccessManager_Put2((QRestAccessManager*)self, (QNetworkRequest*)request, data_ret);
    free(data_ret.keys);
    free(data_ret.values);
    return _out;
}

QNetworkReply* q_restaccessmanager_put3(void* self, void* request, char* data) {
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
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = (libqt_string*)malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_restaccessmanager_patch2\n");
        abort();
    }
    data_ret.values = (QVariant**)malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_restaccessmanager_patch2\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }
    QNetworkReply* _out = QRestAccessManager_Patch2((QRestAccessManager*)self, (QNetworkRequest*)request, data_ret);
    free(data_ret.keys);
    free(data_ret.values);
    return _out;
}

QNetworkReply* q_restaccessmanager_patch3(void* self, void* request, char* data) {
    return QRestAccessManager_Patch3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_restaccessmanager_patch4(void* self, void* request, void* data) {
    return QRestAccessManager_Patch4((QRestAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_send_custom_request(void* self, void* request, char* method, char* data) {
    return QRestAccessManager_SendCustomRequest((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), qstring(data));
}

QNetworkReply* q_restaccessmanager_send_custom_request2(void* self, void* request, char* method, void* data) {
    return QRestAccessManager_SendCustomRequest2((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), (QIODevice*)data);
}

QNetworkReply* q_restaccessmanager_send_custom_request3(void* self, void* request, char* method, void* data) {
    return QRestAccessManager_SendCustomRequest3((QRestAccessManager*)self, (QNetworkRequest*)request, qstring(method), (QHttpMultiPart*)data);
}

const char* q_restaccessmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_restaccessmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void q_restaccessmanager_set_object_name(void* self, const char* name) {
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

int32_t q_restaccessmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_restaccessmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_restaccessmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
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

QMetaObject__Connection* q_restaccessmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_restaccessmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_restaccessmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_restaccessmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_restaccessmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_restaccessmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_restaccessmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_restaccessmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_restaccessmanager_dynamic_property_names\n");
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

QBindingStorage* q_restaccessmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_restaccessmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_restaccessmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_restaccessmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
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

int32_t q_restaccessmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_restaccessmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_restaccessmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_restaccessmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_restaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_restaccessmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_restaccessmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_restaccessmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_restaccessmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_restaccessmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_restaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_restaccessmanager_event(void* self, void* event) {
    return QRestAccessManager_Event((QRestAccessManager*)self, (QEvent*)event);
}

bool q_restaccessmanager_qbase_event(void* self, void* event) {
    return QRestAccessManager_QBaseEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    QRestAccessManager_OnEvent((QRestAccessManager*)self, (intptr_t)callback);
}

bool q_restaccessmanager_event_filter(void* self, void* watched, void* event) {
    return QRestAccessManager_EventFilter((QRestAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

bool q_restaccessmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return QRestAccessManager_QBaseEventFilter((QRestAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

void q_restaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QRestAccessManager_OnEventFilter((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_timer_event(void* self, void* event) {
    QRestAccessManager_TimerEvent((QRestAccessManager*)self, (QTimerEvent*)event);
}

void q_restaccessmanager_qbase_timer_event(void* self, void* event) {
    QRestAccessManager_QBaseTimerEvent((QRestAccessManager*)self, (QTimerEvent*)event);
}

void q_restaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QRestAccessManager_OnTimerEvent((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_child_event(void* self, void* event) {
    QRestAccessManager_ChildEvent((QRestAccessManager*)self, (QChildEvent*)event);
}

void q_restaccessmanager_qbase_child_event(void* self, void* event) {
    QRestAccessManager_QBaseChildEvent((QRestAccessManager*)self, (QChildEvent*)event);
}

void q_restaccessmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    QRestAccessManager_OnChildEvent((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_custom_event(void* self, void* event) {
    QRestAccessManager_CustomEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_qbase_custom_event(void* self, void* event) {
    QRestAccessManager_QBaseCustomEvent((QRestAccessManager*)self, (QEvent*)event);
}

void q_restaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QRestAccessManager_OnCustomEvent((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_connect_notify(void* self, void* signal) {
    QRestAccessManager_ConnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_qbase_connect_notify(void* self, void* signal) {
    QRestAccessManager_QBaseConnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QRestAccessManager_OnConnectNotify((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_disconnect_notify(void* self, void* signal) {
    QRestAccessManager_DisconnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_qbase_disconnect_notify(void* self, void* signal) {
    QRestAccessManager_QBaseDisconnectNotify((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QRestAccessManager_OnDisconnectNotify((QRestAccessManager*)self, (intptr_t)callback);
}

QObject* q_restaccessmanager_sender(void* self) {
    return QRestAccessManager_Sender((QRestAccessManager*)self);
}

QObject* q_restaccessmanager_qbase_sender(void* self) {
    return QRestAccessManager_QBaseSender((QRestAccessManager*)self);
}

void q_restaccessmanager_on_sender(void* self, QObject* (*callback)()) {
    QRestAccessManager_OnSender((QRestAccessManager*)self, (intptr_t)callback);
}

int32_t q_restaccessmanager_sender_signal_index(void* self) {
    return QRestAccessManager_SenderSignalIndex((QRestAccessManager*)self);
}

int32_t q_restaccessmanager_qbase_sender_signal_index(void* self) {
    return QRestAccessManager_QBaseSenderSignalIndex((QRestAccessManager*)self);
}

void q_restaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QRestAccessManager_OnSenderSignalIndex((QRestAccessManager*)self, (intptr_t)callback);
}

int32_t q_restaccessmanager_receivers(void* self, const char* signal) {
    return QRestAccessManager_Receivers((QRestAccessManager*)self, signal);
}

int32_t q_restaccessmanager_qbase_receivers(void* self, const char* signal) {
    return QRestAccessManager_QBaseReceivers((QRestAccessManager*)self, signal);
}

void q_restaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QRestAccessManager_OnReceivers((QRestAccessManager*)self, (intptr_t)callback);
}

bool q_restaccessmanager_is_signal_connected(void* self, void* signal) {
    return QRestAccessManager_IsSignalConnected((QRestAccessManager*)self, (QMetaMethod*)signal);
}

bool q_restaccessmanager_qbase_is_signal_connected(void* self, void* signal) {
    return QRestAccessManager_QBaseIsSignalConnected((QRestAccessManager*)self, (QMetaMethod*)signal);
}

void q_restaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QRestAccessManager_OnIsSignalConnected((QRestAccessManager*)self, (intptr_t)callback);
}

void q_restaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_restaccessmanager_delete(void* self) {
    QRestAccessManager_Delete((QRestAccessManager*)(self));
}
