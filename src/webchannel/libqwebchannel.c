#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebchannelabstracttransport.hpp"
#include "libqwebchannel.hpp"
#include "libqwebchannel.h"

QWebChannel* q_webchannel_new() {
    return QWebChannel_new();
}

QWebChannel* q_webchannel_new2(void* parent) {
    return QWebChannel_new2((QObject*)parent);
}

const QMetaObject* q_webchannel_meta_object(void* self) {
    return QWebChannel_MetaObject((QWebChannel*)self);
}

void q_webchannel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebChannel_OnMetaObject((QWebChannel*)self, (intptr_t)callback);
}

const QMetaObject* q_webchannel_super_meta_object(void* self) {
    return QWebChannel_SuperMetaObject((QWebChannel*)self);
}

void* q_webchannel_metacast(void* self, const char* param1) {
    return QWebChannel_Metacast((QWebChannel*)self, param1);
}

void q_webchannel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebChannel_OnMetacast((QWebChannel*)self, (intptr_t)callback);
}

void* q_webchannel_super_metacast(void* self, const char* param1) {
    return QWebChannel_SuperMetacast((QWebChannel*)self, param1);
}

int32_t q_webchannel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebChannel_Metacall((QWebChannel*)self, param1, param2, param3);
}

void q_webchannel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebChannel_OnMetacall((QWebChannel*)self, (intptr_t)callback);
}

int32_t q_webchannel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebChannel_SuperMetacall((QWebChannel*)self, param1, param2, param3);
}

const char* q_webchannel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannel_register_objects(void* self, libqt_map /* of const char* to QObject* */ objects) {
    // Convert libqt_map to QHash<QString,QObject>
    libqt_map objects_ret;
    objects_ret.len = objects.len;
    objects_ret.keys = (libqt_string*)malloc(objects_ret.len * sizeof(libqt_string));
    if (objects_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_webchannel_register_objects\n");
        abort();
    }
    objects_ret.values = (QObject**)malloc(objects_ret.len * sizeof(QObject*));
    if (objects_ret.values == NULL) {
        free(objects_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_webchannel_register_objects\n");
        abort();
    }
    const char** objects_karr = (const char**)objects.keys;
    libqt_string* objects_kdest = (libqt_string*)objects_ret.keys;
    QObject** objects_varr = (QObject**)objects.values;
    QObject** objects_vdest = (QObject**)objects_ret.values;
    for (size_t i = 0; i < objects_ret.len; ++i) {
        objects_kdest[i] = qstring(objects_karr[i]);
        objects_vdest[i] = objects_varr[i];
    }
    QWebChannel_RegisterObjects((QWebChannel*)self, objects_ret);
    free(objects_ret.keys);
    free(objects_ret.values);
}

libqt_map /* of const char* to QObject* */ q_webchannel_registered_objects(void* self) {
    // Convert QHash<QString,QObject> to libqt_map
    libqt_map _out = QWebChannel_RegisteredObjects((QWebChannel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_webchannel_registered_objects\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_webchannel_registered_objects\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

void q_webchannel_register_object(void* self, const char* id, void* object) {
    QWebChannel_RegisterObject((QWebChannel*)self, qstring(id), (QObject*)object);
}

void q_webchannel_deregister_object(void* self, void* object) {
    QWebChannel_DeregisterObject((QWebChannel*)self, (QObject*)object);
}

bool q_webchannel_block_updates(void* self) {
    return QWebChannel_BlockUpdates((QWebChannel*)self);
}

void q_webchannel_set_block_updates(void* self, bool block) {
    QWebChannel_SetBlockUpdates((QWebChannel*)self, block);
}

int32_t q_webchannel_property_update_interval(void* self) {
    return QWebChannel_PropertyUpdateInterval((QWebChannel*)self);
}

void q_webchannel_set_property_update_interval(void* self, int ms) {
    QWebChannel_SetPropertyUpdateInterval((QWebChannel*)self, ms);
}

void q_webchannel_block_updates_changed(void* self, bool block) {
    QWebChannel_BlockUpdatesChanged((QWebChannel*)self, block);
}

void q_webchannel_on_block_updates_changed(void* self, void (*callback)(void*, bool)) {
    QWebChannel_Connect_BlockUpdatesChanged((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_connect_to(void* self, void* transport) {
    QWebChannel_ConnectTo((QWebChannel*)self, (QWebChannelAbstractTransport*)transport);
}

void q_webchannel_disconnect_from(void* self, void* transport) {
    QWebChannel_DisconnectFrom((QWebChannel*)self, (QWebChannelAbstractTransport*)transport);
}

const char* q_webchannel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webchannel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webchannel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webchannel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webchannel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webchannel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webchannel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webchannel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webchannel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webchannel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webchannel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webchannel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webchannel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webchannel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webchannel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webchannel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webchannel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_webchannel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webchannel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webchannel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_webchannel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webchannel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_webchannel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_webchannel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_webchannel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webchannel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webchannel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webchannel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webchannel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webchannel_dynamic_property_names\n");
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

QBindingStorage* q_webchannel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webchannel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webchannel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webchannel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webchannel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webchannel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webchannel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webchannel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webchannel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webchannel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_webchannel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webchannel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_webchannel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_webchannel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_webchannel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_webchannel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_webchannel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webchannel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webchannel_event(void* self, void* event) {
    return QWebChannel_Event((QWebChannel*)self, (QEvent*)event);
}

bool q_webchannel_super_event(void* self, void* event) {
    return QWebChannel_SuperEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebChannel_OnEvent((QWebChannel*)self, (intptr_t)callback);
}

bool q_webchannel_event_filter(void* self, void* watched, void* event) {
    return QWebChannel_EventFilter((QWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webchannel_super_event_filter(void* self, void* watched, void* event) {
    return QWebChannel_SuperEventFilter((QWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

void q_webchannel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebChannel_OnEventFilter((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_timer_event(void* self, void* event) {
    QWebChannel_TimerEvent((QWebChannel*)self, (QTimerEvent*)event);
}

void q_webchannel_super_timer_event(void* self, void* event) {
    QWebChannel_SuperTimerEvent((QWebChannel*)self, (QTimerEvent*)event);
}

void q_webchannel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebChannel_OnTimerEvent((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_child_event(void* self, void* event) {
    QWebChannel_ChildEvent((QWebChannel*)self, (QChildEvent*)event);
}

void q_webchannel_super_child_event(void* self, void* event) {
    QWebChannel_SuperChildEvent((QWebChannel*)self, (QChildEvent*)event);
}

void q_webchannel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebChannel_OnChildEvent((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_custom_event(void* self, void* event) {
    QWebChannel_CustomEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_super_custom_event(void* self, void* event) {
    QWebChannel_SuperCustomEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebChannel_OnCustomEvent((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_connect_notify(void* self, void* signal) {
    QWebChannel_ConnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_super_connect_notify(void* self, void* signal) {
    QWebChannel_SuperConnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebChannel_OnConnectNotify((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_disconnect_notify(void* self, void* signal) {
    QWebChannel_DisconnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_super_disconnect_notify(void* self, void* signal) {
    QWebChannel_SuperDisconnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebChannel_OnDisconnectNotify((QWebChannel*)self, (intptr_t)callback);
}

QObject* q_webchannel_sender(void* self) {
    return QWebChannel_Sender((QWebChannel*)self);
}

QObject* q_webchannel_super_sender(void* self) {
    return QWebChannel_SuperSender((QWebChannel*)self);
}

void q_webchannel_on_sender(void* self, QObject* (*callback)()) {
    QWebChannel_OnSender((QWebChannel*)self, (intptr_t)callback);
}

int32_t q_webchannel_sender_signal_index(void* self) {
    return QWebChannel_SenderSignalIndex((QWebChannel*)self);
}

int32_t q_webchannel_super_sender_signal_index(void* self) {
    return QWebChannel_SuperSenderSignalIndex((QWebChannel*)self);
}

void q_webchannel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebChannel_OnSenderSignalIndex((QWebChannel*)self, (intptr_t)callback);
}

int32_t q_webchannel_receivers(void* self, const char* signal) {
    return QWebChannel_Receivers((QWebChannel*)self, signal);
}

int32_t q_webchannel_super_receivers(void* self, const char* signal) {
    return QWebChannel_SuperReceivers((QWebChannel*)self, signal);
}

void q_webchannel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebChannel_OnReceivers((QWebChannel*)self, (intptr_t)callback);
}

bool q_webchannel_is_signal_connected(void* self, void* signal) {
    return QWebChannel_IsSignalConnected((QWebChannel*)self, (QMetaMethod*)signal);
}

bool q_webchannel_super_is_signal_connected(void* self, void* signal) {
    return QWebChannel_SuperIsSignalConnected((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebChannel_OnIsSignalConnected((QWebChannel*)self, (intptr_t)callback);
}

void q_webchannel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webchannel_delete(void* self) {
    QWebChannel_Delete((QWebChannel*)(self));
}
