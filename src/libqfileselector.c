#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqurl.hpp"
#include "libqfileselector.hpp"
#include "libqfileselector.h"

QFileSelector* q_fileselector_new() {
    return QFileSelector_new();
}

QFileSelector* q_fileselector_new2(void* parent) {
    return QFileSelector_new2((QObject*)parent);
}

const QMetaObject* q_fileselector_meta_object(void* self) {
    return QFileSelector_MetaObject((QFileSelector*)self);
}

void* q_fileselector_metacast(void* self, const char* param1) {
    return QFileSelector_Metacast((QFileSelector*)self, param1);
}

int32_t q_fileselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileSelector_Metacall((QFileSelector*)self, param1, param2, param3);
}

void q_fileselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFileSelector_OnMetacall((QFileSelector*)self, (intptr_t)callback);
}

int32_t q_fileselector_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileSelector_QBaseMetacall((QFileSelector*)self, param1, param2, param3);
}

const char* q_fileselector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileselector_select(void* self, const char* filePath) {
    libqt_string _str = QFileSelector_Select((QFileSelector*)self, qstring(filePath));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_fileselector_select2(void* self, void* filePath) {
    return QFileSelector_Select2((QFileSelector*)self, (QUrl*)filePath);
}

const char** q_fileselector_extra_selectors(void* self) {
    libqt_list _arr = QFileSelector_ExtraSelectors((QFileSelector*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fileselector_extra_selectors\n");
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

void q_fileselector_set_extra_selectors(void* self, const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fileselector_set_extra_selectors\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QFileSelector_SetExtraSelectors((QFileSelector*)self, list_list);
    free(list_qstr);
}

const char** q_fileselector_all_selectors(void* self) {
    libqt_list _arr = QFileSelector_AllSelectors((QFileSelector*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fileselector_all_selectors\n");
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

const char* q_fileselector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fileselector_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_fileselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_fileselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_fileselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_fileselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_fileselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_fileselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_fileselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_fileselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_fileselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_fileselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_fileselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_fileselector_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_fileselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_fileselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_fileselector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_fileselector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_fileselector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_fileselector_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_fileselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_fileselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_fileselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_fileselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_fileselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fileselector_dynamic_property_names\n");
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

QBindingStorage* q_fileselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_fileselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_fileselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_fileselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_fileselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_fileselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_fileselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_fileselector_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_fileselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_fileselector_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_fileselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_fileselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_fileselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_fileselector_event(void* self, void* event) {
    return QFileSelector_Event((QFileSelector*)self, (QEvent*)event);
}

bool q_fileselector_qbase_event(void* self, void* event) {
    return QFileSelector_QBaseEvent((QFileSelector*)self, (QEvent*)event);
}

void q_fileselector_on_event(void* self, bool (*callback)(void*, void*)) {
    QFileSelector_OnEvent((QFileSelector*)self, (intptr_t)callback);
}

bool q_fileselector_event_filter(void* self, void* watched, void* event) {
    return QFileSelector_EventFilter((QFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool q_fileselector_qbase_event_filter(void* self, void* watched, void* event) {
    return QFileSelector_QBaseEventFilter((QFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

void q_fileselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFileSelector_OnEventFilter((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_timer_event(void* self, void* event) {
    QFileSelector_TimerEvent((QFileSelector*)self, (QTimerEvent*)event);
}

void q_fileselector_qbase_timer_event(void* self, void* event) {
    QFileSelector_QBaseTimerEvent((QFileSelector*)self, (QTimerEvent*)event);
}

void q_fileselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFileSelector_OnTimerEvent((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_child_event(void* self, void* event) {
    QFileSelector_ChildEvent((QFileSelector*)self, (QChildEvent*)event);
}

void q_fileselector_qbase_child_event(void* self, void* event) {
    QFileSelector_QBaseChildEvent((QFileSelector*)self, (QChildEvent*)event);
}

void q_fileselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFileSelector_OnChildEvent((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_custom_event(void* self, void* event) {
    QFileSelector_CustomEvent((QFileSelector*)self, (QEvent*)event);
}

void q_fileselector_qbase_custom_event(void* self, void* event) {
    QFileSelector_QBaseCustomEvent((QFileSelector*)self, (QEvent*)event);
}

void q_fileselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFileSelector_OnCustomEvent((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_connect_notify(void* self, void* signal) {
    QFileSelector_ConnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

void q_fileselector_qbase_connect_notify(void* self, void* signal) {
    QFileSelector_QBaseConnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

void q_fileselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFileSelector_OnConnectNotify((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_disconnect_notify(void* self, void* signal) {
    QFileSelector_DisconnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

void q_fileselector_qbase_disconnect_notify(void* self, void* signal) {
    QFileSelector_QBaseDisconnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

void q_fileselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFileSelector_OnDisconnectNotify((QFileSelector*)self, (intptr_t)callback);
}

QObject* q_fileselector_sender(void* self) {
    return QFileSelector_Sender((QFileSelector*)self);
}

QObject* q_fileselector_qbase_sender(void* self) {
    return QFileSelector_QBaseSender((QFileSelector*)self);
}

void q_fileselector_on_sender(void* self, QObject* (*callback)()) {
    QFileSelector_OnSender((QFileSelector*)self, (intptr_t)callback);
}

int32_t q_fileselector_sender_signal_index(void* self) {
    return QFileSelector_SenderSignalIndex((QFileSelector*)self);
}

int32_t q_fileselector_qbase_sender_signal_index(void* self) {
    return QFileSelector_QBaseSenderSignalIndex((QFileSelector*)self);
}

void q_fileselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFileSelector_OnSenderSignalIndex((QFileSelector*)self, (intptr_t)callback);
}

int32_t q_fileselector_receivers(void* self, const char* signal) {
    return QFileSelector_Receivers((QFileSelector*)self, signal);
}

int32_t q_fileselector_qbase_receivers(void* self, const char* signal) {
    return QFileSelector_QBaseReceivers((QFileSelector*)self, signal);
}

void q_fileselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFileSelector_OnReceivers((QFileSelector*)self, (intptr_t)callback);
}

bool q_fileselector_is_signal_connected(void* self, void* signal) {
    return QFileSelector_IsSignalConnected((QFileSelector*)self, (QMetaMethod*)signal);
}

bool q_fileselector_qbase_is_signal_connected(void* self, void* signal) {
    return QFileSelector_QBaseIsSignalConnected((QFileSelector*)self, (QMetaMethod*)signal);
}

void q_fileselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFileSelector_OnIsSignalConnected((QFileSelector*)self, (intptr_t)callback);
}

void q_fileselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_fileselector_delete(void* self) {
    QFileSelector_Delete((QFileSelector*)(self));
}
