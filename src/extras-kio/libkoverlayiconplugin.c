#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkoverlayiconplugin.hpp"
#include "libkoverlayiconplugin.h"

KOverlayIconPlugin* k_overlayiconplugin_new() {
    return KOverlayIconPlugin_new();
}

KOverlayIconPlugin* k_overlayiconplugin_new2(void* parent) {
    return KOverlayIconPlugin_new2((QObject*)parent);
}

const QMetaObject* k_overlayiconplugin_meta_object(void* self) {
    return KOverlayIconPlugin_MetaObject((KOverlayIconPlugin*)self);
}

void* k_overlayiconplugin_metacast(void* self, const char* param1) {
    return KOverlayIconPlugin_Metacast((KOverlayIconPlugin*)self, param1);
}

int32_t k_overlayiconplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KOverlayIconPlugin_Metacall((KOverlayIconPlugin*)self, param1, param2, param3);
}

void k_overlayiconplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KOverlayIconPlugin_OnMetacall((KOverlayIconPlugin*)self, (intptr_t)callback);
}

int32_t k_overlayiconplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KOverlayIconPlugin_QBaseMetacall((KOverlayIconPlugin*)self, param1, param2, param3);
}

const char* k_overlayiconplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_overlayiconplugin_get_overlays(void* self, void* item) {
    libqt_list _arr = KOverlayIconPlugin_GetOverlays((KOverlayIconPlugin*)self, (QUrl*)item);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_overlayiconplugin_get_overlays\n");
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

void k_overlayiconplugin_on_get_overlays(void* self, const char** (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnGetOverlays((KOverlayIconPlugin*)self, (intptr_t)callback);
}

const char** k_overlayiconplugin_qbase_get_overlays(void* self, void* item) {
    libqt_list _arr = KOverlayIconPlugin_QBaseGetOverlays((KOverlayIconPlugin*)self, (QUrl*)item);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_overlayiconplugin_get_overlays\n");
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

void k_overlayiconplugin_overlays_changed(void* self, void* url, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_overlayiconplugin_overlays_changed\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    KOverlayIconPlugin_OverlaysChanged((KOverlayIconPlugin*)self, (QUrl*)url, overlays_list);
    free(overlays_qstr);
}

void k_overlayiconplugin_on_overlays_changed(void* self, void (*callback)(void*, void*, const char**)) {
    KOverlayIconPlugin_Connect_OverlaysChanged((KOverlayIconPlugin*)self, (intptr_t)callback);
}

const char* k_overlayiconplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_overlayiconplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_overlayiconplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_overlayiconplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_overlayiconplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_overlayiconplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_overlayiconplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_overlayiconplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_overlayiconplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_overlayiconplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_overlayiconplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_overlayiconplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_overlayiconplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_overlayiconplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_overlayiconplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_overlayiconplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_overlayiconplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_overlayiconplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_overlayiconplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_overlayiconplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_overlayiconplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_overlayiconplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_overlayiconplugin_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_overlayiconplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_overlayiconplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_overlayiconplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_overlayiconplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_overlayiconplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_overlayiconplugin_dynamic_property_names\n");
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

QBindingStorage* k_overlayiconplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_overlayiconplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_overlayiconplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_overlayiconplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_overlayiconplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_overlayiconplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_overlayiconplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_overlayiconplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_overlayiconplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_overlayiconplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_overlayiconplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_overlayiconplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_overlayiconplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_overlayiconplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_overlayiconplugin_event(void* self, void* event) {
    return KOverlayIconPlugin_Event((KOverlayIconPlugin*)self, (QEvent*)event);
}

bool k_overlayiconplugin_qbase_event(void* self, void* event) {
    return KOverlayIconPlugin_QBaseEvent((KOverlayIconPlugin*)self, (QEvent*)event);
}

void k_overlayiconplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnEvent((KOverlayIconPlugin*)self, (intptr_t)callback);
}

bool k_overlayiconplugin_event_filter(void* self, void* watched, void* event) {
    return KOverlayIconPlugin_EventFilter((KOverlayIconPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_overlayiconplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return KOverlayIconPlugin_QBaseEventFilter((KOverlayIconPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_overlayiconplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KOverlayIconPlugin_OnEventFilter((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_timer_event(void* self, void* event) {
    KOverlayIconPlugin_TimerEvent((KOverlayIconPlugin*)self, (QTimerEvent*)event);
}

void k_overlayiconplugin_qbase_timer_event(void* self, void* event) {
    KOverlayIconPlugin_QBaseTimerEvent((KOverlayIconPlugin*)self, (QTimerEvent*)event);
}

void k_overlayiconplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnTimerEvent((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_child_event(void* self, void* event) {
    KOverlayIconPlugin_ChildEvent((KOverlayIconPlugin*)self, (QChildEvent*)event);
}

void k_overlayiconplugin_qbase_child_event(void* self, void* event) {
    KOverlayIconPlugin_QBaseChildEvent((KOverlayIconPlugin*)self, (QChildEvent*)event);
}

void k_overlayiconplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnChildEvent((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_custom_event(void* self, void* event) {
    KOverlayIconPlugin_CustomEvent((KOverlayIconPlugin*)self, (QEvent*)event);
}

void k_overlayiconplugin_qbase_custom_event(void* self, void* event) {
    KOverlayIconPlugin_QBaseCustomEvent((KOverlayIconPlugin*)self, (QEvent*)event);
}

void k_overlayiconplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnCustomEvent((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_connect_notify(void* self, void* signal) {
    KOverlayIconPlugin_ConnectNotify((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

void k_overlayiconplugin_qbase_connect_notify(void* self, void* signal) {
    KOverlayIconPlugin_QBaseConnectNotify((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

void k_overlayiconplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnConnectNotify((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_disconnect_notify(void* self, void* signal) {
    KOverlayIconPlugin_DisconnectNotify((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

void k_overlayiconplugin_qbase_disconnect_notify(void* self, void* signal) {
    KOverlayIconPlugin_QBaseDisconnectNotify((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

void k_overlayiconplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnDisconnectNotify((KOverlayIconPlugin*)self, (intptr_t)callback);
}

QObject* k_overlayiconplugin_sender(void* self) {
    return KOverlayIconPlugin_Sender((KOverlayIconPlugin*)self);
}

QObject* k_overlayiconplugin_qbase_sender(void* self) {
    return KOverlayIconPlugin_QBaseSender((KOverlayIconPlugin*)self);
}

void k_overlayiconplugin_on_sender(void* self, QObject* (*callback)()) {
    KOverlayIconPlugin_OnSender((KOverlayIconPlugin*)self, (intptr_t)callback);
}

int32_t k_overlayiconplugin_sender_signal_index(void* self) {
    return KOverlayIconPlugin_SenderSignalIndex((KOverlayIconPlugin*)self);
}

int32_t k_overlayiconplugin_qbase_sender_signal_index(void* self) {
    return KOverlayIconPlugin_QBaseSenderSignalIndex((KOverlayIconPlugin*)self);
}

void k_overlayiconplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KOverlayIconPlugin_OnSenderSignalIndex((KOverlayIconPlugin*)self, (intptr_t)callback);
}

int32_t k_overlayiconplugin_receivers(void* self, const char* signal) {
    return KOverlayIconPlugin_Receivers((KOverlayIconPlugin*)self, signal);
}

int32_t k_overlayiconplugin_qbase_receivers(void* self, const char* signal) {
    return KOverlayIconPlugin_QBaseReceivers((KOverlayIconPlugin*)self, signal);
}

void k_overlayiconplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KOverlayIconPlugin_OnReceivers((KOverlayIconPlugin*)self, (intptr_t)callback);
}

bool k_overlayiconplugin_is_signal_connected(void* self, void* signal) {
    return KOverlayIconPlugin_IsSignalConnected((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

bool k_overlayiconplugin_qbase_is_signal_connected(void* self, void* signal) {
    return KOverlayIconPlugin_QBaseIsSignalConnected((KOverlayIconPlugin*)self, (QMetaMethod*)signal);
}

void k_overlayiconplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KOverlayIconPlugin_OnIsSignalConnected((KOverlayIconPlugin*)self, (intptr_t)callback);
}

void k_overlayiconplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_overlayiconplugin_delete(void* self) {
    KOverlayIconPlugin_Delete((KOverlayIconPlugin*)(self));
}
