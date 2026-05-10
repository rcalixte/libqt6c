#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libgrammalecteresultjob.hpp"
#include "libgrammalecteresultjob.h"

TextGrammarCheck__GrammalecteResultJob* k_textgrammarcheck__grammalecteresultjob_new() {
    return TextGrammarCheck__GrammalecteResultJob_new();
}

TextGrammarCheck__GrammalecteResultJob* k_textgrammarcheck__grammalecteresultjob_new2(void* parent) {
    return TextGrammarCheck__GrammalecteResultJob_new2((QObject*)parent);
}

const QMetaObject* k_textgrammarcheck__grammalecteresultjob_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_MetaObject((TextGrammarCheck__GrammalecteResultJob*)self);
}

void k_textgrammarcheck__grammalecteresultjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__GrammalecteResultJob_OnMetaObject((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__grammalecteresultjob_super_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_SuperMetaObject((TextGrammarCheck__GrammalecteResultJob*)self);
}

void* k_textgrammarcheck__grammalecteresultjob_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteResultJob_Metacast((TextGrammarCheck__GrammalecteResultJob*)self, param1);
}

void k_textgrammarcheck__grammalecteresultjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteResultJob_OnMetacast((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__grammalecteresultjob_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteResultJob_SuperMetacast((TextGrammarCheck__GrammalecteResultJob*)self, param1);
}

int32_t k_textgrammarcheck__grammalecteresultjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteResultJob_Metacall((TextGrammarCheck__GrammalecteResultJob*)self, param1, param2, param3);
}

void k_textgrammarcheck__grammalecteresultjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnMetacall((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteresultjob_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteResultJob_SuperMetacall((TextGrammarCheck__GrammalecteResultJob*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__grammalecteresultjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteresultjob_start(void* self) {
    TextGrammarCheck__GrammalecteResultJob_Start((TextGrammarCheck__GrammalecteResultJob*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_can_start(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_CanStart((TextGrammarCheck__GrammalecteResultJob*)self);
}

const char* k_textgrammarcheck__grammalecteresultjob_text(void* self) {
    libqt_string _str = TextGrammarCheck__GrammalecteResultJob_Text((TextGrammarCheck__GrammalecteResultJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteresultjob_set_text(void* self, const char* text) {
    TextGrammarCheck__GrammalecteResultJob_SetText((TextGrammarCheck__GrammalecteResultJob*)self, qstring(text));
}

const char* k_textgrammarcheck__grammalecteresultjob_python_path(void* self) {
    libqt_string _str = TextGrammarCheck__GrammalecteResultJob_PythonPath((TextGrammarCheck__GrammalecteResultJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteresultjob_set_python_path(void* self, const char* pythonPath) {
    TextGrammarCheck__GrammalecteResultJob_SetPythonPath((TextGrammarCheck__GrammalecteResultJob*)self, qstring(pythonPath));
}

const char* k_textgrammarcheck__grammalecteresultjob_grammarlecte_cli_path(void* self) {
    libqt_string _str = TextGrammarCheck__GrammalecteResultJob_GrammarlecteCliPath((TextGrammarCheck__GrammalecteResultJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteresultjob_set_grammarlecte_cli_path(void* self, const char* grammarlecteCliPath) {
    TextGrammarCheck__GrammalecteResultJob_SetGrammarlecteCliPath((TextGrammarCheck__GrammalecteResultJob*)self, qstring(grammarlecteCliPath));
}

const char** k_textgrammarcheck__grammalecteresultjob_arguments(void* self) {
    libqt_list _arr = TextGrammarCheck__GrammalecteResultJob_Arguments((TextGrammarCheck__GrammalecteResultJob*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammalecteresultjob_arguments\n");
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

void k_textgrammarcheck__grammalecteresultjob_set_arguments(void* self, const char* arguments[static 1]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammalecteresultjob_set_arguments\n");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    TextGrammarCheck__GrammalecteResultJob_SetArguments((TextGrammarCheck__GrammalecteResultJob*)self, arguments_list);
    free(arguments_qstr);
}

void k_textgrammarcheck__grammalecteresultjob_finished(void* self, const char* result) {
    TextGrammarCheck__GrammalecteResultJob_Finished((TextGrammarCheck__GrammalecteResultJob*)self, qstring(result));
}

void k_textgrammarcheck__grammalecteresultjob_on_finished(void* self, void (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteResultJob_Connect_Finished((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_error(void* self, int32_t type) {
    TextGrammarCheck__GrammalecteResultJob_Error((TextGrammarCheck__GrammalecteResultJob*)self, type);
}

void k_textgrammarcheck__grammalecteresultjob_on_error(void* self, void (*callback)(void*, int32_t)) {
    TextGrammarCheck__GrammalecteResultJob_Connect_Error((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

const char* k_textgrammarcheck__grammalecteresultjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteresultjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteresultjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteresultjob_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__grammalecteresultjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__grammalecteresultjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__grammalecteresultjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__grammalecteresultjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__grammalecteresultjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__grammalecteresultjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__grammalecteresultjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__grammalecteresultjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textgrammarcheck__grammalecteresultjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__grammalecteresultjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__grammalecteresultjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__grammalecteresultjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__grammalecteresultjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__grammalecteresultjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammalecteresultjob_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__grammalecteresultjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__grammalecteresultjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__grammalecteresultjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__grammalecteresultjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalecteresultjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__grammalecteresultjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__grammalecteresultjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__grammalecteresultjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__grammalecteresultjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteresultjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalecteresultjob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__grammalecteresultjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__grammalecteresultjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteresultjob_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteResultJob_Event((TextGrammarCheck__GrammalecteResultJob*)self, (QEvent*)event);
}

bool k_textgrammarcheck__grammalecteresultjob_super_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteResultJob_SuperEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnEvent((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteresultjob_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__GrammalecteResultJob_EventFilter((TextGrammarCheck__GrammalecteResultJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textgrammarcheck__grammalecteresultjob_super_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__GrammalecteResultJob_SuperEventFilter((TextGrammarCheck__GrammalecteResultJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnEventFilter((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_TimerEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_super_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_SuperTimerEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnTimerEvent((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_ChildEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_super_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_SuperChildEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnChildEvent((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_CustomEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_super_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteResultJob_SuperCustomEvent((TextGrammarCheck__GrammalecteResultJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteresultjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnCustomEvent((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteResultJob_ConnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteresultjob_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteResultJob_SuperConnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteresultjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnConnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteResultJob_DisconnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteresultjob_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteResultJob_SuperDisconnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteresultjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnDisconnectNotify((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalecteresultjob_sender(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_Sender((TextGrammarCheck__GrammalecteResultJob*)self);
}

QObject* k_textgrammarcheck__grammalecteresultjob_super_sender(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_SuperSender((TextGrammarCheck__GrammalecteResultJob*)self);
}

void k_textgrammarcheck__grammalecteresultjob_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__GrammalecteResultJob_OnSender((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteresultjob_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex((TextGrammarCheck__GrammalecteResultJob*)self);
}

int32_t k_textgrammarcheck__grammalecteresultjob_super_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteResultJob_SuperSenderSignalIndex((TextGrammarCheck__GrammalecteResultJob*)self);
}

void k_textgrammarcheck__grammalecteresultjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammalecteResultJob_OnSenderSignalIndex((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteresultjob_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteResultJob_Receivers((TextGrammarCheck__GrammalecteResultJob*)self, signal);
}

int32_t k_textgrammarcheck__grammalecteresultjob_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteResultJob_SuperReceivers((TextGrammarCheck__GrammalecteResultJob*)self, signal);
}

void k_textgrammarcheck__grammalecteresultjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteResultJob_OnReceivers((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteresultjob_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteResultJob_IsSignalConnected((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__grammalecteresultjob_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteResultJob_SuperIsSignalConnected((TextGrammarCheck__GrammalecteResultJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteresultjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteResultJob_OnIsSignalConnected((TextGrammarCheck__GrammalecteResultJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteresultjob_delete(void* self) {
    TextGrammarCheck__GrammalecteResultJob_Delete((TextGrammarCheck__GrammalecteResultJob*)(self));
}
