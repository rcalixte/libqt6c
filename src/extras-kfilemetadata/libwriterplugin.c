#include "libwritedata.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libwriterplugin.hpp"
#include "libwriterplugin.h"

KFileMetaData__WriterPlugin* k_filemetadata__writerplugin_new(void* parent) {
    return KFileMetaData__WriterPlugin_new((QObject*)parent);
}

const QMetaObject* k_filemetadata__writerplugin_meta_object(void* self) {
    return KFileMetaData__WriterPlugin_MetaObject((KFileMetaData__WriterPlugin*)self);
}

void k_filemetadata__writerplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFileMetaData__WriterPlugin_OnMetaObject((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

const QMetaObject* k_filemetadata__writerplugin_super_meta_object(void* self) {
    return KFileMetaData__WriterPlugin_SuperMetaObject((KFileMetaData__WriterPlugin*)self);
}

void* k_filemetadata__writerplugin_metacast(void* self, const char* param1) {
    return KFileMetaData__WriterPlugin_Metacast((KFileMetaData__WriterPlugin*)self, param1);
}

void k_filemetadata__writerplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFileMetaData__WriterPlugin_OnMetacast((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void* k_filemetadata__writerplugin_super_metacast(void* self, const char* param1) {
    return KFileMetaData__WriterPlugin_SuperMetacast((KFileMetaData__WriterPlugin*)self, param1);
}

int32_t k_filemetadata__writerplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileMetaData__WriterPlugin_Metacall((KFileMetaData__WriterPlugin*)self, param1, param2, param3);
}

void k_filemetadata__writerplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileMetaData__WriterPlugin_OnMetacall((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__writerplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileMetaData__WriterPlugin_SuperMetacall((KFileMetaData__WriterPlugin*)self, param1, param2, param3);
}

const char* k_filemetadata__writerplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_filemetadata__writerplugin_write_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__WriterPlugin_WriteMimetypes((KFileMetaData__WriterPlugin*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__writerplugin_write_mimetypes\n");
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

void k_filemetadata__writerplugin_on_write_mimetypes(void* self, const char** (*callback)()) {
    KFileMetaData__WriterPlugin_OnWriteMimetypes((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

const char** k_filemetadata__writerplugin_super_write_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__WriterPlugin_SuperWriteMimetypes((KFileMetaData__WriterPlugin*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__writerplugin_write_mimetypes\n");
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

void k_filemetadata__writerplugin_write(void* self, void* data) {
    KFileMetaData__WriterPlugin_Write((KFileMetaData__WriterPlugin*)self, (KFileMetaData__WriteData*)data);
}

void k_filemetadata__writerplugin_on_write(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnWrite((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_super_write(void* self, void* data) {
    KFileMetaData__WriterPlugin_SuperWrite((KFileMetaData__WriterPlugin*)self, (KFileMetaData__WriteData*)data);
}

const char* k_filemetadata__writerplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__writerplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__writerplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filemetadata__writerplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_filemetadata__writerplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_filemetadata__writerplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_filemetadata__writerplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_filemetadata__writerplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_filemetadata__writerplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_filemetadata__writerplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_filemetadata__writerplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_filemetadata__writerplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_filemetadata__writerplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_filemetadata__writerplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_filemetadata__writerplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_filemetadata__writerplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_filemetadata__writerplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_filemetadata__writerplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_filemetadata__writerplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_filemetadata__writerplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_filemetadata__writerplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_filemetadata__writerplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_filemetadata__writerplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_filemetadata__writerplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_filemetadata__writerplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_filemetadata__writerplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_filemetadata__writerplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_filemetadata__writerplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_filemetadata__writerplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__writerplugin_dynamic_property_names\n");
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

QBindingStorage* k_filemetadata__writerplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_filemetadata__writerplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_filemetadata__writerplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_filemetadata__writerplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_filemetadata__writerplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_filemetadata__writerplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_filemetadata__writerplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_filemetadata__writerplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_filemetadata__writerplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_filemetadata__writerplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_filemetadata__writerplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_filemetadata__writerplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_filemetadata__writerplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_filemetadata__writerplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_filemetadata__writerplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_filemetadata__writerplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_filemetadata__writerplugin_event(void* self, void* event) {
    return KFileMetaData__WriterPlugin_Event((KFileMetaData__WriterPlugin*)self, (QEvent*)event);
}

bool k_filemetadata__writerplugin_super_event(void* self, void* event) {
    return KFileMetaData__WriterPlugin_SuperEvent((KFileMetaData__WriterPlugin*)self, (QEvent*)event);
}

void k_filemetadata__writerplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnEvent((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

bool k_filemetadata__writerplugin_event_filter(void* self, void* watched, void* event) {
    return KFileMetaData__WriterPlugin_EventFilter((KFileMetaData__WriterPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_filemetadata__writerplugin_super_event_filter(void* self, void* watched, void* event) {
    return KFileMetaData__WriterPlugin_SuperEventFilter((KFileMetaData__WriterPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_filemetadata__writerplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileMetaData__WriterPlugin_OnEventFilter((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_timer_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_TimerEvent((KFileMetaData__WriterPlugin*)self, (QTimerEvent*)event);
}

void k_filemetadata__writerplugin_super_timer_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_SuperTimerEvent((KFileMetaData__WriterPlugin*)self, (QTimerEvent*)event);
}

void k_filemetadata__writerplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnTimerEvent((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_child_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_ChildEvent((KFileMetaData__WriterPlugin*)self, (QChildEvent*)event);
}

void k_filemetadata__writerplugin_super_child_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_SuperChildEvent((KFileMetaData__WriterPlugin*)self, (QChildEvent*)event);
}

void k_filemetadata__writerplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnChildEvent((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_custom_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_CustomEvent((KFileMetaData__WriterPlugin*)self, (QEvent*)event);
}

void k_filemetadata__writerplugin_super_custom_event(void* self, void* event) {
    KFileMetaData__WriterPlugin_SuperCustomEvent((KFileMetaData__WriterPlugin*)self, (QEvent*)event);
}

void k_filemetadata__writerplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnCustomEvent((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_connect_notify(void* self, void* signal) {
    KFileMetaData__WriterPlugin_ConnectNotify((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__writerplugin_super_connect_notify(void* self, void* signal) {
    KFileMetaData__WriterPlugin_SuperConnectNotify((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__writerplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnConnectNotify((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_disconnect_notify(void* self, void* signal) {
    KFileMetaData__WriterPlugin_DisconnectNotify((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__writerplugin_super_disconnect_notify(void* self, void* signal) {
    KFileMetaData__WriterPlugin_SuperDisconnectNotify((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__writerplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnDisconnectNotify((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

QObject* k_filemetadata__writerplugin_sender(void* self) {
    return KFileMetaData__WriterPlugin_Sender((KFileMetaData__WriterPlugin*)self);
}

QObject* k_filemetadata__writerplugin_super_sender(void* self) {
    return KFileMetaData__WriterPlugin_SuperSender((KFileMetaData__WriterPlugin*)self);
}

void k_filemetadata__writerplugin_on_sender(void* self, QObject* (*callback)()) {
    KFileMetaData__WriterPlugin_OnSender((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__writerplugin_sender_signal_index(void* self) {
    return KFileMetaData__WriterPlugin_SenderSignalIndex((KFileMetaData__WriterPlugin*)self);
}

int32_t k_filemetadata__writerplugin_super_sender_signal_index(void* self) {
    return KFileMetaData__WriterPlugin_SuperSenderSignalIndex((KFileMetaData__WriterPlugin*)self);
}

void k_filemetadata__writerplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileMetaData__WriterPlugin_OnSenderSignalIndex((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__writerplugin_receivers(void* self, const char* signal) {
    return KFileMetaData__WriterPlugin_Receivers((KFileMetaData__WriterPlugin*)self, signal);
}

int32_t k_filemetadata__writerplugin_super_receivers(void* self, const char* signal) {
    return KFileMetaData__WriterPlugin_SuperReceivers((KFileMetaData__WriterPlugin*)self, signal);
}

void k_filemetadata__writerplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileMetaData__WriterPlugin_OnReceivers((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

bool k_filemetadata__writerplugin_is_signal_connected(void* self, void* signal) {
    return KFileMetaData__WriterPlugin_IsSignalConnected((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

bool k_filemetadata__writerplugin_super_is_signal_connected(void* self, void* signal) {
    return KFileMetaData__WriterPlugin_SuperIsSignalConnected((KFileMetaData__WriterPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__writerplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileMetaData__WriterPlugin_OnIsSignalConnected((KFileMetaData__WriterPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_filemetadata__writerplugin_delete(void* self) {
    KFileMetaData__WriterPlugin_Delete((KFileMetaData__WriterPlugin*)(self));
}
