#include "../libqcoreevent.hpp"
#include "../libqcompleter.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqplaintextedit.hpp"
#include "../libqtextedit.hpp"
#include "libtexteditorcompleter.hpp"
#include "libtexteditorcompleter.h"

TextCustomEditor__TextEditorCompleter* k_textcustomeditor__texteditorcompleter_new(void* editor, void* parent) {
    return TextCustomEditor__TextEditorCompleter_new((QTextEdit*)editor, (QObject*)parent);
}

TextCustomEditor__TextEditorCompleter* k_textcustomeditor__texteditorcompleter_new2(void* editor, void* parent) {
    return TextCustomEditor__TextEditorCompleter_new2((QPlainTextEdit*)editor, (QObject*)parent);
}

const QMetaObject* k_textcustomeditor__texteditorcompleter_meta_object(void* self) {
    return TextCustomEditor__TextEditorCompleter_MetaObject((TextCustomEditor__TextEditorCompleter*)self);
}

void k_textcustomeditor__texteditorcompleter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__TextEditorCompleter_OnMetaObject((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__texteditorcompleter_super_meta_object(void* self) {
    return TextCustomEditor__TextEditorCompleter_SuperMetaObject((TextCustomEditor__TextEditorCompleter*)self);
}

void* k_textcustomeditor__texteditorcompleter_metacast(void* self, const char* param1) {
    return TextCustomEditor__TextEditorCompleter_Metacast((TextCustomEditor__TextEditorCompleter*)self, param1);
}

void k_textcustomeditor__texteditorcompleter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__TextEditorCompleter_OnMetacast((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void* k_textcustomeditor__texteditorcompleter_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__TextEditorCompleter_SuperMetacast((TextCustomEditor__TextEditorCompleter*)self, param1);
}

int32_t k_textcustomeditor__texteditorcompleter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__TextEditorCompleter_Metacall((TextCustomEditor__TextEditorCompleter*)self, param1, param2, param3);
}

void k_textcustomeditor__texteditorcompleter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__TextEditorCompleter_OnMetacall((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__texteditorcompleter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__TextEditorCompleter_SuperMetacall((TextCustomEditor__TextEditorCompleter*)self, param1, param2, param3);
}

const char* k_textcustomeditor__texteditorcompleter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__texteditorcompleter_set_completer_string_list(void* self, const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__texteditorcompleter_set_completer_string_list\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    TextCustomEditor__TextEditorCompleter_SetCompleterStringList((TextCustomEditor__TextEditorCompleter*)self, list_list);
    free(list_qstr);
}

QCompleter* k_textcustomeditor__texteditorcompleter_completer(void* self) {
    return TextCustomEditor__TextEditorCompleter_Completer((TextCustomEditor__TextEditorCompleter*)self);
}

void k_textcustomeditor__texteditorcompleter_complete_text(void* self) {
    TextCustomEditor__TextEditorCompleter_CompleteText((TextCustomEditor__TextEditorCompleter*)self);
}

void k_textcustomeditor__texteditorcompleter_set_exclude_of_characters(void* self, const char* excludes) {
    TextCustomEditor__TextEditorCompleter_SetExcludeOfCharacters((TextCustomEditor__TextEditorCompleter*)self, qstring(excludes));
}

const char* k_textcustomeditor__texteditorcompleter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__texteditorcompleter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__texteditorcompleter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__texteditorcompleter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__texteditorcompleter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__texteditorcompleter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__texteditorcompleter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__texteditorcompleter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__texteditorcompleter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__texteditorcompleter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__texteditorcompleter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__texteditorcompleter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textcustomeditor__texteditorcompleter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__texteditorcompleter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__texteditorcompleter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__texteditorcompleter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__texteditorcompleter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__texteditorcompleter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__texteditorcompleter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__texteditorcompleter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__texteditorcompleter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__texteditorcompleter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__texteditorcompleter_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__texteditorcompleter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__texteditorcompleter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__texteditorcompleter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__texteditorcompleter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__texteditorcompleter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__texteditorcompleter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__texteditorcompleter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__texteditorcompleter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__texteditorcompleter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__texteditorcompleter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__texteditorcompleter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__texteditorcompleter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__texteditorcompleter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__texteditorcompleter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__texteditorcompleter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__texteditorcompleter_event(void* self, void* event) {
    return TextCustomEditor__TextEditorCompleter_Event((TextCustomEditor__TextEditorCompleter*)self, (QEvent*)event);
}

bool k_textcustomeditor__texteditorcompleter_super_event(void* self, void* event) {
    return TextCustomEditor__TextEditorCompleter_SuperEvent((TextCustomEditor__TextEditorCompleter*)self, (QEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnEvent((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__texteditorcompleter_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__TextEditorCompleter_EventFilter((TextCustomEditor__TextEditorCompleter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textcustomeditor__texteditorcompleter_super_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__TextEditorCompleter_SuperEventFilter((TextCustomEditor__TextEditorCompleter*)self, (QObject*)watched, (QEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnEventFilter((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_timer_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_TimerEvent((TextCustomEditor__TextEditorCompleter*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_super_timer_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_SuperTimerEvent((TextCustomEditor__TextEditorCompleter*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnTimerEvent((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_child_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_ChildEvent((TextCustomEditor__TextEditorCompleter*)self, (QChildEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_super_child_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_SuperChildEvent((TextCustomEditor__TextEditorCompleter*)self, (QChildEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnChildEvent((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_custom_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_CustomEvent((TextCustomEditor__TextEditorCompleter*)self, (QEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_super_custom_event(void* self, void* event) {
    TextCustomEditor__TextEditorCompleter_SuperCustomEvent((TextCustomEditor__TextEditorCompleter*)self, (QEvent*)event);
}

void k_textcustomeditor__texteditorcompleter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnCustomEvent((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_connect_notify(void* self, void* signal) {
    TextCustomEditor__TextEditorCompleter_ConnectNotify((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__texteditorcompleter_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__TextEditorCompleter_SuperConnectNotify((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__texteditorcompleter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnConnectNotify((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__TextEditorCompleter_DisconnectNotify((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__texteditorcompleter_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__TextEditorCompleter_SuperDisconnectNotify((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__texteditorcompleter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnDisconnectNotify((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__texteditorcompleter_sender(void* self) {
    return TextCustomEditor__TextEditorCompleter_Sender((TextCustomEditor__TextEditorCompleter*)self);
}

QObject* k_textcustomeditor__texteditorcompleter_super_sender(void* self) {
    return TextCustomEditor__TextEditorCompleter_SuperSender((TextCustomEditor__TextEditorCompleter*)self);
}

void k_textcustomeditor__texteditorcompleter_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__TextEditorCompleter_OnSender((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__texteditorcompleter_sender_signal_index(void* self) {
    return TextCustomEditor__TextEditorCompleter_SenderSignalIndex((TextCustomEditor__TextEditorCompleter*)self);
}

int32_t k_textcustomeditor__texteditorcompleter_super_sender_signal_index(void* self) {
    return TextCustomEditor__TextEditorCompleter_SuperSenderSignalIndex((TextCustomEditor__TextEditorCompleter*)self);
}

void k_textcustomeditor__texteditorcompleter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__TextEditorCompleter_OnSenderSignalIndex((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__texteditorcompleter_receivers(void* self, const char* signal) {
    return TextCustomEditor__TextEditorCompleter_Receivers((TextCustomEditor__TextEditorCompleter*)self, signal);
}

int32_t k_textcustomeditor__texteditorcompleter_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__TextEditorCompleter_SuperReceivers((TextCustomEditor__TextEditorCompleter*)self, signal);
}

void k_textcustomeditor__texteditorcompleter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__TextEditorCompleter_OnReceivers((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__texteditorcompleter_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__TextEditorCompleter_IsSignalConnected((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__texteditorcompleter_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__TextEditorCompleter_SuperIsSignalConnected((TextCustomEditor__TextEditorCompleter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__texteditorcompleter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__TextEditorCompleter_OnIsSignalConnected((TextCustomEditor__TextEditorCompleter*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__texteditorcompleter_delete(void* self) {
    TextCustomEditor__TextEditorCompleter_Delete((TextCustomEditor__TextEditorCompleter*)(self));
}
