#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libgrammalectegenerateconfigoptionjob.hpp"
#include "libgrammalectegenerateconfigoptionjob.h"

TextGrammarCheck__GrammalecteGenerateConfigOptionJob* k_textgrammarcheck__grammalectegenerateconfigoptionjob_new() {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_new();
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob* k_textgrammarcheck__grammalectegenerateconfigoptionjob_new2(void* parent) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_new2((QObject*)parent);
}

const QMetaObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetaObject((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetaObject((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

void* k_textgrammarcheck__grammalectegenerateconfigoptionjob_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, param1);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetacast((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetacast((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, param1);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, param1, param2, param3);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetacall((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetacall((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_start(void* self) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Start((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_can_start(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CanStart((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_python_path(void* self) {
    libqt_string _str = TextGrammarCheck__GrammalecteGenerateConfigOptionJob_PythonPath((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_python_path(void* self, const char* pythonPath) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SetPythonPath((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, qstring(pythonPath));
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_grammarlecte_cli_path(void* self) {
    libqt_string _str = TextGrammarCheck__GrammalecteGenerateConfigOptionJob_GrammarlecteCliPath((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_grammarlecte_cli_path(void* self, const char* grammarlecteCliPath) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SetGrammarlecteCliPath((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, qstring(grammarlecteCliPath));
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_error(void* self) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Error((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_error(void* self, void (*callback)(void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Connect_Error((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_finished(void* self, libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */ result) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Finished((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, result);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_finished(void* self, void (*callback)(void*, libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Connect_Finished((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__grammalectegenerateconfigoptionjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__grammalectegenerateconfigoptionjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__grammalectegenerateconfigoptionjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__grammalectegenerateconfigoptionjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammalectegenerateconfigoptionjob_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__grammalectegenerateconfigoptionjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__grammalectegenerateconfigoptionjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QEvent*)event);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperEventFilter((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnEventFilter((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperTimerEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnTimerEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperChildEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnChildEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperCustomEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnCustomEvent((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperConnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnConnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperDisconnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnDisconnectNotify((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_sender(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSender((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnSender((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSenderSignalIndex((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnSenderSignalIndex((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, signal);
}

int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperReceivers((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnReceivers((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperIsSignalConnected((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnIsSignalConnected((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob_delete(void* self) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Delete((TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)(self));
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new(void* param1) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_new((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)param1);
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new2() {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_new2();
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_option_name(void* self) {
    libqt_string optionName_str = TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_OptionName((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self);
    char* optionName_ret = qstring_to_char(optionName_str);
    libqt_string_free(&optionName_str);
    return optionName_ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_option_name(void* self, const char* optionName) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetOptionName((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self, qstring(optionName));
}

const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_description(void* self) {
    libqt_string description_str = TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_Description((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self);
    char* description_ret = qstring_to_char(description_str);
    libqt_string_free(&description_str);
    return description_ret;
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_description(void* self, const char* description) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetDescription((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self, qstring(description));
}

bool k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_default_value(void* self) {
    return TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_DefaultValue((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_default_value(void* self, bool defaultValue) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetDefaultValue((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self, defaultValue);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_operator_assign(void* self, void* param1) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_OperatorAssign((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)self, (TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)param1);
}

void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_delete(void* self) {
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_Delete((TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*)(self));
}
