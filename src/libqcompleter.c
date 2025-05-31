#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqcompleter.hpp"
#include "libqcompleter.h"

QCompleter* q_completer_new() {
    return QCompleter_new();
}

QCompleter* q_completer_new2(void* model) {
    return QCompleter_new2((QAbstractItemModel*)model);
}

QCompleter* q_completer_new3(const char* completions[]) {
    size_t completions_len = libqt_strv_length(completions);
    libqt_string* completions_qstr = malloc(completions_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < completions_len; ++_i) {
        completions_qstr[_i] = qstring(completions[_i]);
    }
    libqt_list completions_list = qlist(completions_qstr, completions_len);

    return QCompleter_new3(completions_list);
}

QCompleter* q_completer_new4(void* parent) {
    return QCompleter_new4((QObject*)parent);
}

QCompleter* q_completer_new5(void* model, void* parent) {
    return QCompleter_new5((QAbstractItemModel*)model, (QObject*)parent);
}

QCompleter* q_completer_new6(const char* completions[], void* parent) {
    size_t completions_len = libqt_strv_length(completions);
    libqt_string* completions_qstr = malloc(completions_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < completions_len; ++_i) {
        completions_qstr[_i] = qstring(completions[_i]);
    }
    libqt_list completions_list = qlist(completions_qstr, completions_len);

    return QCompleter_new6(completions_list, (QObject*)parent);
}

const QMetaObject* q_completer_meta_object(void* self) {
    return QCompleter_MetaObject((QCompleter*)self);
}

void* q_completer_metacast(void* self, const char* param1) {
    return QCompleter_Metacast((QCompleter*)self, param1);
}

int32_t q_completer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCompleter_Metacall((QCompleter*)self, param1, param2, param3);
}

void q_completer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCompleter_OnMetacall((QCompleter*)self, (intptr_t)slot);
}

int32_t q_completer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCompleter_QBaseMetacall((QCompleter*)self, param1, param2, param3);
}

const char* q_completer_tr(const char* s) {
    libqt_string _str = QCompleter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_completer_set_widget(void* self, void* widget) {
    QCompleter_SetWidget((QCompleter*)self, (QWidget*)widget);
}

QWidget* q_completer_widget(void* self) {
    return QCompleter_Widget((QCompleter*)self);
}

void q_completer_set_model(void* self, void* c) {
    QCompleter_SetModel((QCompleter*)self, (QAbstractItemModel*)c);
}

QAbstractItemModel* q_completer_model(void* self) {
    return QCompleter_Model((QCompleter*)self);
}

void q_completer_set_completion_mode(void* self, int64_t mode) {
    QCompleter_SetCompletionMode((QCompleter*)self, mode);
}

int64_t q_completer_completion_mode(void* self) {
    return QCompleter_CompletionMode((QCompleter*)self);
}

void q_completer_set_filter_mode(void* self, int64_t filterMode) {
    QCompleter_SetFilterMode((QCompleter*)self, filterMode);
}

int64_t q_completer_filter_mode(void* self) {
    return QCompleter_FilterMode((QCompleter*)self);
}

QAbstractItemView* q_completer_popup(void* self) {
    return QCompleter_Popup((QCompleter*)self);
}

void q_completer_set_popup(void* self, void* popup) {
    QCompleter_SetPopup((QCompleter*)self, (QAbstractItemView*)popup);
}

void q_completer_set_case_sensitivity(void* self, int64_t caseSensitivity) {
    QCompleter_SetCaseSensitivity((QCompleter*)self, caseSensitivity);
}

int64_t q_completer_case_sensitivity(void* self) {
    return QCompleter_CaseSensitivity((QCompleter*)self);
}

void q_completer_set_model_sorting(void* self, int64_t sorting) {
    QCompleter_SetModelSorting((QCompleter*)self, sorting);
}

int64_t q_completer_model_sorting(void* self) {
    return QCompleter_ModelSorting((QCompleter*)self);
}

void q_completer_set_completion_column(void* self, int column) {
    QCompleter_SetCompletionColumn((QCompleter*)self, column);
}

int32_t q_completer_completion_column(void* self) {
    return QCompleter_CompletionColumn((QCompleter*)self);
}

void q_completer_set_completion_role(void* self, int role) {
    QCompleter_SetCompletionRole((QCompleter*)self, role);
}

int32_t q_completer_completion_role(void* self) {
    return QCompleter_CompletionRole((QCompleter*)self);
}

bool q_completer_wrap_around(void* self) {
    return QCompleter_WrapAround((QCompleter*)self);
}

int32_t q_completer_max_visible_items(void* self) {
    return QCompleter_MaxVisibleItems((QCompleter*)self);
}

void q_completer_set_max_visible_items(void* self, int maxItems) {
    QCompleter_SetMaxVisibleItems((QCompleter*)self, maxItems);
}

int32_t q_completer_completion_count(void* self) {
    return QCompleter_CompletionCount((QCompleter*)self);
}

bool q_completer_set_current_row(void* self, int row) {
    return QCompleter_SetCurrentRow((QCompleter*)self, row);
}

int32_t q_completer_current_row(void* self) {
    return QCompleter_CurrentRow((QCompleter*)self);
}

QModelIndex* q_completer_current_index(void* self) {
    return QCompleter_CurrentIndex((QCompleter*)self);
}

const char* q_completer_current_completion(void* self) {
    libqt_string _str = QCompleter_CurrentCompletion((QCompleter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_completer_completion_model(void* self) {
    return QCompleter_CompletionModel((QCompleter*)self);
}

const char* q_completer_completion_prefix(void* self) {
    libqt_string _str = QCompleter_CompletionPrefix((QCompleter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_completer_set_completion_prefix(void* self, const char* prefix) {
    QCompleter_SetCompletionPrefix((QCompleter*)self, qstring(prefix));
}

void q_completer_complete(void* self) {
    QCompleter_Complete((QCompleter*)self);
}

void q_completer_set_wrap_around(void* self, bool wrap) {
    QCompleter_SetWrapAround((QCompleter*)self, wrap);
}

const char* q_completer_path_from_index(void* self, void* index) {
    libqt_string _str = QCompleter_PathFromIndex((QCompleter*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_completer_on_path_from_index(void* self, const char* (*slot)(void*, void*)) {
    QCompleter_OnPathFromIndex((QCompleter*)self, (intptr_t)slot);
}

const char* q_completer_qbase_path_from_index(void* self, void* index) {
    libqt_string _str = QCompleter_QBasePathFromIndex((QCompleter*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_completer_split_path(void* self, const char* path) {
    libqt_list _arr = QCompleter_SplitPath((QCompleter*)self, qstring(path));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_completer_on_split_path(void* self, const char** (*slot)(void*, const char*)) {
    QCompleter_OnSplitPath((QCompleter*)self, (intptr_t)slot);
}

const char** q_completer_qbase_split_path(void* self, const char* path) {
    libqt_list _arr = QCompleter_QBaseSplitPath((QCompleter*)self, qstring(path));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

bool q_completer_event_filter(void* self, void* o, void* e) {
    return QCompleter_EventFilter((QCompleter*)self, (QObject*)o, (QEvent*)e);
}

void q_completer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCompleter_OnEventFilter((QCompleter*)self, (intptr_t)slot);
}

bool q_completer_qbase_event_filter(void* self, void* o, void* e) {
    return QCompleter_QBaseEventFilter((QCompleter*)self, (QObject*)o, (QEvent*)e);
}

bool q_completer_event(void* self, void* param1) {
    return QCompleter_Event((QCompleter*)self, (QEvent*)param1);
}

void q_completer_on_event(void* self, bool (*slot)(void*, void*)) {
    QCompleter_OnEvent((QCompleter*)self, (intptr_t)slot);
}

bool q_completer_qbase_event(void* self, void* param1) {
    return QCompleter_QBaseEvent((QCompleter*)self, (QEvent*)param1);
}

void q_completer_activated(void* self, const char* text) {
    QCompleter_Activated((QCompleter*)self, qstring(text));
}

void q_completer_activated_with_index(void* self, void* index) {
    QCompleter_ActivatedWithIndex((QCompleter*)self, (QModelIndex*)index);
}

void q_completer_highlighted(void* self, const char* text) {
    QCompleter_Highlighted((QCompleter*)self, qstring(text));
}

void q_completer_highlighted_with_index(void* self, void* index) {
    QCompleter_HighlightedWithIndex((QCompleter*)self, (QModelIndex*)index);
}

const char* q_completer_tr2(const char* s, const char* c) {
    libqt_string _str = QCompleter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_completer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCompleter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_completer_complete1(void* self, void* rect) {
    QCompleter_Complete1((QCompleter*)self, (QRect*)rect);
}

const char* q_completer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_completer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_completer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_completer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_completer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_completer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_completer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_completer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_completer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_completer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_completer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_completer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_completer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_completer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_completer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_completer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_completer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_completer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_completer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_completer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_completer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_completer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_completer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_completer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_completer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_completer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_completer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_completer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_completer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_completer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_completer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_completer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_completer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_completer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_completer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_completer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_completer_timer_event(void* self, void* event) {
    QCompleter_TimerEvent((QCompleter*)self, (QTimerEvent*)event);
}

void q_completer_qbase_timer_event(void* self, void* event) {
    QCompleter_QBaseTimerEvent((QCompleter*)self, (QTimerEvent*)event);
}

void q_completer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnTimerEvent((QCompleter*)self, (intptr_t)slot);
}

void q_completer_child_event(void* self, void* event) {
    QCompleter_ChildEvent((QCompleter*)self, (QChildEvent*)event);
}

void q_completer_qbase_child_event(void* self, void* event) {
    QCompleter_QBaseChildEvent((QCompleter*)self, (QChildEvent*)event);
}

void q_completer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnChildEvent((QCompleter*)self, (intptr_t)slot);
}

void q_completer_custom_event(void* self, void* event) {
    QCompleter_CustomEvent((QCompleter*)self, (QEvent*)event);
}

void q_completer_qbase_custom_event(void* self, void* event) {
    QCompleter_QBaseCustomEvent((QCompleter*)self, (QEvent*)event);
}

void q_completer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnCustomEvent((QCompleter*)self, (intptr_t)slot);
}

void q_completer_connect_notify(void* self, void* signal) {
    QCompleter_ConnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

void q_completer_qbase_connect_notify(void* self, void* signal) {
    QCompleter_QBaseConnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

void q_completer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnConnectNotify((QCompleter*)self, (intptr_t)slot);
}

void q_completer_disconnect_notify(void* self, void* signal) {
    QCompleter_DisconnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

void q_completer_qbase_disconnect_notify(void* self, void* signal) {
    QCompleter_QBaseDisconnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

void q_completer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnDisconnectNotify((QCompleter*)self, (intptr_t)slot);
}

QObject* q_completer_sender(void* self) {
    return QCompleter_Sender((QCompleter*)self);
}

QObject* q_completer_qbase_sender(void* self) {
    return QCompleter_QBaseSender((QCompleter*)self);
}

void q_completer_on_sender(void* self, QObject* (*slot)()) {
    QCompleter_OnSender((QCompleter*)self, (intptr_t)slot);
}

int32_t q_completer_sender_signal_index(void* self) {
    return QCompleter_SenderSignalIndex((QCompleter*)self);
}

int32_t q_completer_qbase_sender_signal_index(void* self) {
    return QCompleter_QBaseSenderSignalIndex((QCompleter*)self);
}

void q_completer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCompleter_OnSenderSignalIndex((QCompleter*)self, (intptr_t)slot);
}

int32_t q_completer_receivers(void* self, const char* signal) {
    return QCompleter_Receivers((QCompleter*)self, signal);
}

int32_t q_completer_qbase_receivers(void* self, const char* signal) {
    return QCompleter_QBaseReceivers((QCompleter*)self, signal);
}

void q_completer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCompleter_OnReceivers((QCompleter*)self, (intptr_t)slot);
}

bool q_completer_is_signal_connected(void* self, void* signal) {
    return QCompleter_IsSignalConnected((QCompleter*)self, (QMetaMethod*)signal);
}

bool q_completer_qbase_is_signal_connected(void* self, void* signal) {
    return QCompleter_QBaseIsSignalConnected((QCompleter*)self, (QMetaMethod*)signal);
}

void q_completer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCompleter_OnIsSignalConnected((QCompleter*)self, (intptr_t)slot);
}

void q_completer_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_completer_delete(void* self) {
    QCompleter_Delete((QCompleter*)(self));
}
