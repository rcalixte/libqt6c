#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqscilexer.hpp"
#include "libqsciabstractapis.hpp"
#include "libqsciabstractapis.h"

QsciAbstractAPIs* q_sciabstractapis_new(void* lexer) {
    return QsciAbstractAPIs_new((QsciLexer*)lexer);
}

const QMetaObject* q_sciabstractapis_meta_object(void* self) {
    return QsciAbstractAPIs_MetaObject((QsciAbstractAPIs*)self);
}

void* q_sciabstractapis_metacast(void* self, const char* param1) {
    return QsciAbstractAPIs_Metacast((QsciAbstractAPIs*)self, param1);
}

int32_t q_sciabstractapis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAbstractAPIs_Metacall((QsciAbstractAPIs*)self, param1, param2, param3);
}

void q_sciabstractapis_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QsciAbstractAPIs_OnMetacall((QsciAbstractAPIs*)self, (intptr_t)callback);
}

int32_t q_sciabstractapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciAbstractAPIs_QBaseMetacall((QsciAbstractAPIs*)self, param1, param2, param3);
}

const char* q_sciabstractapis_tr(const char* s) {
    libqt_string _str = QsciAbstractAPIs_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciLexer* q_sciabstractapis_lexer(void* self) {
    return QsciAbstractAPIs_Lexer((QsciAbstractAPIs*)self);
}

void q_sciabstractapis_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QsciAbstractAPIs_UpdateAutoCompletionList((QsciAbstractAPIs*)self, context_list, list_list);
    free(context_qstr);

    free(list_qstr);
}

void q_sciabstractapis_on_update_auto_completion_list(void* self, void (*callback)(void*, const char**, const char**)) {
    QsciAbstractAPIs_OnUpdateAutoCompletionList((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QsciAbstractAPIs_QBaseUpdateAutoCompletionList((QsciAbstractAPIs*)self, context_list, list_list);
}

void q_sciabstractapis_auto_completion_selected(void* self, const char* selection) {
    QsciAbstractAPIs_AutoCompletionSelected((QsciAbstractAPIs*)self, qstring(selection));
}

void q_sciabstractapis_on_auto_completion_selected(void* self, void (*callback)(void*, const char*)) {
    QsciAbstractAPIs_OnAutoCompletionSelected((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_qbase_auto_completion_selected(void* self, const char* selection) {
    QsciAbstractAPIs_QBaseAutoCompletionSelected((QsciAbstractAPIs*)self, qstring(selection));
}

const char** q_sciabstractapis_call_tips(void* self, const char* context[], int commas, int64_t style, libqt_list shifts) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_call_tips");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    libqt_list _arr = QsciAbstractAPIs_CallTips((QsciAbstractAPIs*)self, context_list, commas, style, shifts);
    free(context_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_call_tips");
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

void q_sciabstractapis_on_call_tips(void* self, const char** (*callback)(void*, const char**, int, int64_t, libqt_list)) {
    QsciAbstractAPIs_OnCallTips((QsciAbstractAPIs*)self, (intptr_t)callback);
}

const char** q_sciabstractapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, libqt_list shifts) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_call_tips");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    libqt_list _arr = QsciAbstractAPIs_QBaseCallTips((QsciAbstractAPIs*)self, context_list, commas, style, shifts);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_call_tips");
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

const char* q_sciabstractapis_tr2(const char* s, const char* c) {
    libqt_string _str = QsciAbstractAPIs_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciabstractapis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciAbstractAPIs_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciabstractapis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciabstractapis_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sciabstractapis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sciabstractapis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sciabstractapis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sciabstractapis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sciabstractapis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sciabstractapis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sciabstractapis_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sciabstractapis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sciabstractapis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sciabstractapis_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sciabstractapis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sciabstractapis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sciabstractapis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sciabstractapis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sciabstractapis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sciabstractapis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sciabstractapis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sciabstractapis_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sciabstractapis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sciabstractapis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sciabstractapis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sciabstractapis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sciabstractapis_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciabstractapis_dynamic_property_names");
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

QBindingStorage* q_sciabstractapis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sciabstractapis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sciabstractapis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sciabstractapis_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sciabstractapis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sciabstractapis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sciabstractapis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sciabstractapis_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sciabstractapis_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sciabstractapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_sciabstractapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_sciabstractapis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sciabstractapis_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sciabstractapis_event(void* self, void* event) {
    return QsciAbstractAPIs_Event((QsciAbstractAPIs*)self, (QEvent*)event);
}

bool q_sciabstractapis_qbase_event(void* self, void* event) {
    return QsciAbstractAPIs_QBaseEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

void q_sciabstractapis_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnEvent((QsciAbstractAPIs*)self, (intptr_t)callback);
}

bool q_sciabstractapis_event_filter(void* self, void* watched, void* event) {
    return QsciAbstractAPIs_EventFilter((QsciAbstractAPIs*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sciabstractapis_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciAbstractAPIs_QBaseEventFilter((QsciAbstractAPIs*)self, (QObject*)watched, (QEvent*)event);
}

void q_sciabstractapis_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciAbstractAPIs_OnEventFilter((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_timer_event(void* self, void* event) {
    QsciAbstractAPIs_TimerEvent((QsciAbstractAPIs*)self, (QTimerEvent*)event);
}

void q_sciabstractapis_qbase_timer_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseTimerEvent((QsciAbstractAPIs*)self, (QTimerEvent*)event);
}

void q_sciabstractapis_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnTimerEvent((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_child_event(void* self, void* event) {
    QsciAbstractAPIs_ChildEvent((QsciAbstractAPIs*)self, (QChildEvent*)event);
}

void q_sciabstractapis_qbase_child_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseChildEvent((QsciAbstractAPIs*)self, (QChildEvent*)event);
}

void q_sciabstractapis_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnChildEvent((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_custom_event(void* self, void* event) {
    QsciAbstractAPIs_CustomEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

void q_sciabstractapis_qbase_custom_event(void* self, void* event) {
    QsciAbstractAPIs_QBaseCustomEvent((QsciAbstractAPIs*)self, (QEvent*)event);
}

void q_sciabstractapis_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnCustomEvent((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_connect_notify(void* self, void* signal) {
    QsciAbstractAPIs_ConnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

void q_sciabstractapis_qbase_connect_notify(void* self, void* signal) {
    QsciAbstractAPIs_QBaseConnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

void q_sciabstractapis_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnConnectNotify((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_disconnect_notify(void* self, void* signal) {
    QsciAbstractAPIs_DisconnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

void q_sciabstractapis_qbase_disconnect_notify(void* self, void* signal) {
    QsciAbstractAPIs_QBaseDisconnectNotify((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

void q_sciabstractapis_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnDisconnectNotify((QsciAbstractAPIs*)self, (intptr_t)callback);
}

QObject* q_sciabstractapis_sender(void* self) {
    return QsciAbstractAPIs_Sender((QsciAbstractAPIs*)self);
}

QObject* q_sciabstractapis_qbase_sender(void* self) {
    return QsciAbstractAPIs_QBaseSender((QsciAbstractAPIs*)self);
}

void q_sciabstractapis_on_sender(void* self, QObject* (*callback)()) {
    QsciAbstractAPIs_OnSender((QsciAbstractAPIs*)self, (intptr_t)callback);
}

int32_t q_sciabstractapis_sender_signal_index(void* self) {
    return QsciAbstractAPIs_SenderSignalIndex((QsciAbstractAPIs*)self);
}

int32_t q_sciabstractapis_qbase_sender_signal_index(void* self) {
    return QsciAbstractAPIs_QBaseSenderSignalIndex((QsciAbstractAPIs*)self);
}

void q_sciabstractapis_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciAbstractAPIs_OnSenderSignalIndex((QsciAbstractAPIs*)self, (intptr_t)callback);
}

int32_t q_sciabstractapis_receivers(void* self, const char* signal) {
    return QsciAbstractAPIs_Receivers((QsciAbstractAPIs*)self, signal);
}

int32_t q_sciabstractapis_qbase_receivers(void* self, const char* signal) {
    return QsciAbstractAPIs_QBaseReceivers((QsciAbstractAPIs*)self, signal);
}

void q_sciabstractapis_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciAbstractAPIs_OnReceivers((QsciAbstractAPIs*)self, (intptr_t)callback);
}

bool q_sciabstractapis_is_signal_connected(void* self, void* signal) {
    return QsciAbstractAPIs_IsSignalConnected((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

bool q_sciabstractapis_qbase_is_signal_connected(void* self, void* signal) {
    return QsciAbstractAPIs_QBaseIsSignalConnected((QsciAbstractAPIs*)self, (QMetaMethod*)signal);
}

void q_sciabstractapis_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciAbstractAPIs_OnIsSignalConnected((QsciAbstractAPIs*)self, (intptr_t)callback);
}

void q_sciabstractapis_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sciabstractapis_delete(void* self) {
    QsciAbstractAPIs_Delete((QsciAbstractAPIs*)(self));
}
