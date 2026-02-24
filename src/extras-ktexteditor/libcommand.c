#include "../extras-kcompletion/libkcompletion.hpp"
#include "librange.hpp"
#include "libview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libcommand.hpp"
#include "libcommand.h"

KTextEditor__Command* k_texteditor__command_new(const char* cmds[static 1]) {
    size_t cmds_len = libqt_strv_length(cmds);
    libqt_string* cmds_qstr = (libqt_string*)malloc(cmds_len * sizeof(libqt_string));
    if (cmds_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__command_new\n");
        abort();
    }
    for (size_t i = 0; i < cmds_len; ++i) {
        cmds_qstr[i] = qstring(cmds[i]);
    }
    libqt_list cmds_list = qlist(cmds_qstr, cmds_len);

    KTextEditor__Command* _out = KTextEditor__Command_new(cmds_list);
    free(cmds_qstr);
    return _out;
}

KTextEditor__Command* k_texteditor__command_new2(const char* cmds[static 1], void* parent) {
    size_t cmds_len = libqt_strv_length(cmds);
    libqt_string* cmds_qstr = (libqt_string*)malloc(cmds_len * sizeof(libqt_string));
    if (cmds_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__command_new2\n");
        abort();
    }
    for (size_t i = 0; i < cmds_len; ++i) {
        cmds_qstr[i] = qstring(cmds[i]);
    }
    libqt_list cmds_list = qlist(cmds_qstr, cmds_len);

    KTextEditor__Command* _out = KTextEditor__Command_new2(cmds_list, (QObject*)parent);
    free(cmds_qstr);
    return _out;
}

const QMetaObject* k_texteditor__command_meta_object(void* self) {
    return KTextEditor__Command_MetaObject((KTextEditor__Command*)self);
}

void k_texteditor__command_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTextEditor__Command_OnMetaObject((KTextEditor__Command*)self, (intptr_t)callback);
}

const QMetaObject* k_texteditor__command_super_meta_object(void* self) {
    return KTextEditor__Command_SuperMetaObject((KTextEditor__Command*)self);
}

void* k_texteditor__command_metacast(void* self, const char* param1) {
    return KTextEditor__Command_Metacast((KTextEditor__Command*)self, param1);
}

void k_texteditor__command_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTextEditor__Command_OnMetacast((KTextEditor__Command*)self, (intptr_t)callback);
}

void* k_texteditor__command_super_metacast(void* self, const char* param1) {
    return KTextEditor__Command_SuperMetacast((KTextEditor__Command*)self, param1);
}

int32_t k_texteditor__command_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Command_Metacall((KTextEditor__Command*)self, param1, param2, param3);
}

void k_texteditor__command_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__Command_OnMetacall((KTextEditor__Command*)self, (intptr_t)callback);
}

int32_t k_texteditor__command_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Command_SuperMetacall((KTextEditor__Command*)self, param1, param2, param3);
}

const char* k_texteditor__command_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_texteditor__command_cmds(void* self) {
    libqt_list _arr = KTextEditor__Command_Cmds((KTextEditor__Command*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__command_cmds\n");
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

bool k_texteditor__command_supports_range(void* self, const char* cmd) {
    return KTextEditor__Command_SupportsRange((KTextEditor__Command*)self, qstring(cmd));
}

void k_texteditor__command_on_supports_range(void* self, bool (*callback)(void*, const char*)) {
    KTextEditor__Command_OnSupportsRange((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_super_supports_range(void* self, const char* cmd) {
    return KTextEditor__Command_SuperSupportsRange((KTextEditor__Command*)self, qstring(cmd));
}

bool k_texteditor__command_exec(void* self, void* view, const char* cmd, const char* msg, void* range) {
    return KTextEditor__Command_Exec((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmd), qstring(msg), (KTextEditor__Range*)range);
}

void k_texteditor__command_on_exec(void* self, bool (*callback)(void*, void*, const char*, const char*, void*)) {
    KTextEditor__Command_OnExec((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_super_exec(void* self, void* view, const char* cmd, const char* msg, void* range) {
    return KTextEditor__Command_SuperExec((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmd), qstring(msg), (KTextEditor__Range*)range);
}

bool k_texteditor__command_help(void* self, void* view, const char* cmd, const char* msg) {
    return KTextEditor__Command_Help((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmd), qstring(msg));
}

void k_texteditor__command_on_help(void* self, bool (*callback)(void*, void*, const char*, const char*)) {
    KTextEditor__Command_OnHelp((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_super_help(void* self, void* view, const char* cmd, const char* msg) {
    return KTextEditor__Command_SuperHelp((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmd), qstring(msg));
}

KCompletion* k_texteditor__command_completion_object(void* self, void* view, const char* cmdname) {
    return KTextEditor__Command_CompletionObject((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmdname));
}

void k_texteditor__command_on_completion_object(void* self, KCompletion* (*callback)(void*, void*, const char*)) {
    KTextEditor__Command_OnCompletionObject((KTextEditor__Command*)self, (intptr_t)callback);
}

KCompletion* k_texteditor__command_super_completion_object(void* self, void* view, const char* cmdname) {
    return KTextEditor__Command_SuperCompletionObject((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(cmdname));
}

bool k_texteditor__command_wants_to_process_text(void* self, const char* cmdname) {
    return KTextEditor__Command_WantsToProcessText((KTextEditor__Command*)self, qstring(cmdname));
}

void k_texteditor__command_on_wants_to_process_text(void* self, bool (*callback)(void*, const char*)) {
    KTextEditor__Command_OnWantsToProcessText((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_super_wants_to_process_text(void* self, const char* cmdname) {
    return KTextEditor__Command_SuperWantsToProcessText((KTextEditor__Command*)self, qstring(cmdname));
}

void k_texteditor__command_process_text(void* self, void* view, const char* text) {
    KTextEditor__Command_ProcessText((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(text));
}

void k_texteditor__command_on_process_text(void* self, void (*callback)(void*, void*, const char*)) {
    KTextEditor__Command_OnProcessText((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_super_process_text(void* self, void* view, const char* text) {
    KTextEditor__Command_SuperProcessText((KTextEditor__Command*)self, (KTextEditor__View*)view, qstring(text));
}

const char* k_texteditor__command_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__command_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__command_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__command_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__command_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__command_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__command_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__command_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__command_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__command_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__command_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__command_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__command_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__command_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__command_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__command_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__command_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__command_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__command_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__command_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texteditor__command_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__command_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__command_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texteditor__command_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__command_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texteditor__command_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texteditor__command_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texteditor__command_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__command_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__command_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__command_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__command_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__command_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__command_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__command_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__command_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__command_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__command_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__command_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__command_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texteditor__command_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__command_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__command_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texteditor__command_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__command_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texteditor__command_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texteditor__command_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texteditor__command_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texteditor__command_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texteditor__command_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__command_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__command_event(void* self, void* event) {
    return KTextEditor__Command_Event((KTextEditor__Command*)self, (QEvent*)event);
}

bool k_texteditor__command_super_event(void* self, void* event) {
    return KTextEditor__Command_SuperEvent((KTextEditor__Command*)self, (QEvent*)event);
}

void k_texteditor__command_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Command_OnEvent((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Command_EventFilter((KTextEditor__Command*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__command_super_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Command_SuperEventFilter((KTextEditor__Command*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__command_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__Command_OnEventFilter((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_timer_event(void* self, void* event) {
    KTextEditor__Command_TimerEvent((KTextEditor__Command*)self, (QTimerEvent*)event);
}

void k_texteditor__command_super_timer_event(void* self, void* event) {
    KTextEditor__Command_SuperTimerEvent((KTextEditor__Command*)self, (QTimerEvent*)event);
}

void k_texteditor__command_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Command_OnTimerEvent((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_child_event(void* self, void* event) {
    KTextEditor__Command_ChildEvent((KTextEditor__Command*)self, (QChildEvent*)event);
}

void k_texteditor__command_super_child_event(void* self, void* event) {
    KTextEditor__Command_SuperChildEvent((KTextEditor__Command*)self, (QChildEvent*)event);
}

void k_texteditor__command_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Command_OnChildEvent((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_custom_event(void* self, void* event) {
    KTextEditor__Command_CustomEvent((KTextEditor__Command*)self, (QEvent*)event);
}

void k_texteditor__command_super_custom_event(void* self, void* event) {
    KTextEditor__Command_SuperCustomEvent((KTextEditor__Command*)self, (QEvent*)event);
}

void k_texteditor__command_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Command_OnCustomEvent((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_connect_notify(void* self, void* signal) {
    KTextEditor__Command_ConnectNotify((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

void k_texteditor__command_super_connect_notify(void* self, void* signal) {
    KTextEditor__Command_SuperConnectNotify((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

void k_texteditor__command_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Command_OnConnectNotify((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_disconnect_notify(void* self, void* signal) {
    KTextEditor__Command_DisconnectNotify((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

void k_texteditor__command_super_disconnect_notify(void* self, void* signal) {
    KTextEditor__Command_SuperDisconnectNotify((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

void k_texteditor__command_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Command_OnDisconnectNotify((KTextEditor__Command*)self, (intptr_t)callback);
}

QObject* k_texteditor__command_sender(void* self) {
    return KTextEditor__Command_Sender((KTextEditor__Command*)self);
}

QObject* k_texteditor__command_super_sender(void* self) {
    return KTextEditor__Command_SuperSender((KTextEditor__Command*)self);
}

void k_texteditor__command_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__Command_OnSender((KTextEditor__Command*)self, (intptr_t)callback);
}

int32_t k_texteditor__command_sender_signal_index(void* self) {
    return KTextEditor__Command_SenderSignalIndex((KTextEditor__Command*)self);
}

int32_t k_texteditor__command_super_sender_signal_index(void* self) {
    return KTextEditor__Command_SuperSenderSignalIndex((KTextEditor__Command*)self);
}

void k_texteditor__command_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__Command_OnSenderSignalIndex((KTextEditor__Command*)self, (intptr_t)callback);
}

int32_t k_texteditor__command_receivers(void* self, const char* signal) {
    return KTextEditor__Command_Receivers((KTextEditor__Command*)self, signal);
}

int32_t k_texteditor__command_super_receivers(void* self, const char* signal) {
    return KTextEditor__Command_SuperReceivers((KTextEditor__Command*)self, signal);
}

void k_texteditor__command_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__Command_OnReceivers((KTextEditor__Command*)self, (intptr_t)callback);
}

bool k_texteditor__command_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Command_IsSignalConnected((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

bool k_texteditor__command_super_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Command_SuperIsSignalConnected((KTextEditor__Command*)self, (QMetaMethod*)signal);
}

void k_texteditor__command_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Command_OnIsSignalConnected((KTextEditor__Command*)self, (intptr_t)callback);
}

void k_texteditor__command_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__command_delete(void* self) {
    KTextEditor__Command_Delete((KTextEditor__Command*)(self));
}
