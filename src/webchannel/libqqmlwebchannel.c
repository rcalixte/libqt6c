#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqwebchannel.hpp"
#include "libqqmlwebchannel.hpp"
#include "libqqmlwebchannel.h"

QQmlWebChannel* q_qmlwebchannel_new() {
    return QQmlWebChannel_New();
}

QQmlWebChannel* q_qmlwebchannel_new2(void* parent) {
    return QQmlWebChannel_New2((QObject*)parent);
}

const QMetaObject* q_qmlwebchannel_meta_object(const void* self) {
    return QQmlWebChannel_MetaObject((QQmlWebChannel*)self);
}

void q_qmlwebchannel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QQmlWebChannel_OnMetaObject((QQmlWebChannel*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlwebchannel_super_meta_object(const void* self) {
    return QQmlWebChannel_SuperMetaObject((QQmlWebChannel*)self);
}

void* q_qmlwebchannel_metacast(void* self, const char* param1) {
    return QQmlWebChannel_Metacast((QQmlWebChannel*)self, param1);
}

void q_qmlwebchannel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlWebChannel_OnMetacast((QQmlWebChannel*)self, (intptr_t)callback);
}

void* q_qmlwebchannel_super_metacast(void* self, const char* param1) {
    return QQmlWebChannel_SuperMetacast((QQmlWebChannel*)self, param1);
}

int32_t q_qmlwebchannel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlWebChannel_Metacall((QQmlWebChannel*)self, param1, param2, param3);
}

void q_qmlwebchannel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlWebChannel_OnMetacall((QQmlWebChannel*)self, (intptr_t)callback);
}

int32_t q_qmlwebchannel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlWebChannel_SuperMetacall((QQmlWebChannel*)self, param1, param2, param3);
}

const char* q_qmlwebchannel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlwebchannel_register_objects(void* self, libqt_map /* of const char* to QVariant* */ objects) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map objects_ret;
    objects_ret.len = objects.len;
    objects_ret.keys = (libqt_string*)malloc(objects_ret.len * sizeof(libqt_string));
    if (objects_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlwebchannel_register_objects\n");
        abort();
    }
    objects_ret.values = (QVariant**)malloc(objects_ret.len * sizeof(QVariant*));
    if (objects_ret.values == NULL) {
        free(objects_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlwebchannel_register_objects\n");
        abort();
    }
    const char** objects_karr = (const char**)objects.keys;
    libqt_string* objects_kdest = (libqt_string*)objects_ret.keys;
    QVariant** objects_varr = (QVariant**)objects.values;
    QVariant** objects_vdest = (QVariant**)objects_ret.values;
    for (size_t i = 0; i < objects_ret.len; ++i) {
        objects_kdest[i] = qstring(objects_karr[i]);
        objects_vdest[i] = objects_varr[i];
    }
    QQmlWebChannel_RegisterObjects((QQmlWebChannel*)self, objects_ret);
    free(objects_ret.keys);
    free(objects_ret.values);
}

void q_qmlwebchannel_connect_to(void* self, void* transport) {
    QQmlWebChannel_ConnectTo((QQmlWebChannel*)self, (QObject*)transport);
}

void q_qmlwebchannel_disconnect_from(void* self, void* transport) {
    QQmlWebChannel_DisconnectFrom((QQmlWebChannel*)self, (QObject*)transport);
}

const char* q_qmlwebchannel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlwebchannel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QObject* */ q_qmlwebchannel_registered_objects(const void* self) {
    // Convert QHash<QString,QObject> to libqt_map
    libqt_map _out = QWebChannel_RegisteredObjects((QWebChannel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_qmlwebchannel_registered_objects\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_qmlwebchannel_registered_objects\n");
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

void q_qmlwebchannel_register_object(void* self, const char* id, void* object) {
    QWebChannel_RegisterObject((QWebChannel*)self, qstring(id), (QObject*)object);
}

void q_qmlwebchannel_deregister_object(void* self, void* object) {
    QWebChannel_DeregisterObject((QWebChannel*)self, (QObject*)object);
}

bool q_qmlwebchannel_block_updates(const void* self) {
    return QWebChannel_BlockUpdates((QWebChannel*)self);
}

void q_qmlwebchannel_set_block_updates(void* self, bool block) {
    QWebChannel_SetBlockUpdates((QWebChannel*)self, block);
}

int32_t q_qmlwebchannel_property_update_interval(const void* self) {
    return QWebChannel_PropertyUpdateInterval((QWebChannel*)self);
}

void q_qmlwebchannel_set_property_update_interval(void* self, int ms) {
    QWebChannel_SetPropertyUpdateInterval((QWebChannel*)self, ms);
}

void q_qmlwebchannel_block_updates_changed(void* self, bool block) {
    QWebChannel_BlockUpdatesChanged((QWebChannel*)self, block);
}

void q_qmlwebchannel_on_block_updates_changed(void* self, void (*callback)(void*, bool)) {
    QWebChannel_Connect_BlockUpdatesChanged((QWebChannel*)self, (intptr_t)callback);
}

const char* q_qmlwebchannel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlwebchannel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlwebchannel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlwebchannel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlwebchannel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlwebchannel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlwebchannel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlwebchannel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlwebchannel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlwebchannel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlwebchannel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlwebchannel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlwebchannel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlwebchannel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlwebchannel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlwebchannel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlwebchannel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlwebchannel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlwebchannel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlwebchannel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlwebchannel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlwebchannel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlwebchannel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlwebchannel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlwebchannel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlwebchannel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlwebchannel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlwebchannel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlwebchannel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlwebchannel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlwebchannel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_qmlwebchannel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlwebchannel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlwebchannel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlwebchannel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlwebchannel_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlwebchannel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlwebchannel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlwebchannel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlwebchannel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlwebchannel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlwebchannel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlwebchannel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlwebchannel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlwebchannel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlwebchannel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlwebchannel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlwebchannel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlwebchannel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlwebchannel_event(void* self, void* event) {
    return QQmlWebChannel_Event((QQmlWebChannel*)self, (QEvent*)event);
}

bool q_qmlwebchannel_super_event(void* self, void* event) {
    return QQmlWebChannel_SuperEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlWebChannel_OnEvent((QQmlWebChannel*)self, (intptr_t)callback);
}

bool q_qmlwebchannel_event_filter(void* self, void* watched, void* event) {
    return QQmlWebChannel_EventFilter((QQmlWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlwebchannel_super_event_filter(void* self, void* watched, void* event) {
    return QQmlWebChannel_SuperEventFilter((QQmlWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlwebchannel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlWebChannel_OnEventFilter((QQmlWebChannel*)self, (intptr_t)callback);
}

void q_qmlwebchannel_timer_event(void* self, void* event) {
    QQmlWebChannel_TimerEvent((QQmlWebChannel*)self, (QTimerEvent*)event);
}

void q_qmlwebchannel_super_timer_event(void* self, void* event) {
    QQmlWebChannel_SuperTimerEvent((QQmlWebChannel*)self, (QTimerEvent*)event);
}

void q_qmlwebchannel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlWebChannel_OnTimerEvent((QQmlWebChannel*)self, (intptr_t)callback);
}

void q_qmlwebchannel_child_event(void* self, void* event) {
    QQmlWebChannel_ChildEvent((QQmlWebChannel*)self, (QChildEvent*)event);
}

void q_qmlwebchannel_super_child_event(void* self, void* event) {
    QQmlWebChannel_SuperChildEvent((QQmlWebChannel*)self, (QChildEvent*)event);
}

void q_qmlwebchannel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlWebChannel_OnChildEvent((QQmlWebChannel*)self, (intptr_t)callback);
}

void q_qmlwebchannel_custom_event(void* self, void* event) {
    QQmlWebChannel_CustomEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_super_custom_event(void* self, void* event) {
    QQmlWebChannel_SuperCustomEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlWebChannel_OnCustomEvent((QQmlWebChannel*)self, (intptr_t)callback);
}

void q_qmlwebchannel_connect_notify(void* self, const void* signal) {
    QQmlWebChannel_ConnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_super_connect_notify(void* self, const void* signal) {
    QQmlWebChannel_SuperConnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQmlWebChannel_OnConnectNotify((QQmlWebChannel*)self, (intptr_t)callback);
}

void q_qmlwebchannel_disconnect_notify(void* self, const void* signal) {
    QQmlWebChannel_DisconnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_super_disconnect_notify(void* self, const void* signal) {
    QQmlWebChannel_SuperDisconnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQmlWebChannel_OnDisconnectNotify((QQmlWebChannel*)self, (intptr_t)callback);
}

QObject* q_qmlwebchannel_sender(const void* self) {
    return QQmlWebChannel_Sender((QQmlWebChannel*)self);
}

int32_t q_qmlwebchannel_sender_signal_index(const void* self) {
    return QQmlWebChannel_SenderSignalIndex((QQmlWebChannel*)self);
}

int32_t q_qmlwebchannel_receivers(const void* self, const char* signal) {
    return QQmlWebChannel_Receivers((QQmlWebChannel*)self, signal);
}

bool q_qmlwebchannel_is_signal_connected(const void* self, const void* signal) {
    return QQmlWebChannel_IsSignalConnected((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlwebchannel_delete(void* self) {
    QQmlWebChannel_Delete((QQmlWebChannel*)(self));
}
