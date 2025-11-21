#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsciabstractapis.hpp"
#include "libqscilexer.hpp"
#include "libqsciapis.hpp"
#include "libqsciapis.h"

QsciAPIs* q_sciapis_new(void* lexer) {
    return QsciAPIs_new((QsciLexer*)lexer);
}

const QMetaObject* q_sciapis_meta_object(void* self) {
    return QsciAPIs_MetaObject((QsciAPIs*)self);
}

void* q_sciapis_metacast(void* self, const char* param1) {
    return QsciAPIs_Metacast((QsciAPIs*)self, param1);
}

int32_t q_sciapis_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciAPIs_Metacall((QsciAPIs*)self, param1, param2, param3);
}

void q_sciapis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciAPIs_OnMetacall((QsciAPIs*)self, (intptr_t)callback);
}

int32_t q_sciapis_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciAPIs_QBaseMetacall((QsciAPIs*)self, param1, param2, param3);
}

const char* q_sciapis_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciapis_add(void* self, const char* entry) {
    QsciAPIs_Add((QsciAPIs*)self, qstring(entry));
}

void q_sciapis_clear(void* self) {
    QsciAPIs_Clear((QsciAPIs*)self);
}

bool q_sciapis_load(void* self, const char* filename) {
    return QsciAPIs_Load((QsciAPIs*)self, qstring(filename));
}

void q_sciapis_remove(void* self, const char* entry) {
    QsciAPIs_Remove((QsciAPIs*)self, qstring(entry));
}

void q_sciapis_prepare(void* self) {
    QsciAPIs_Prepare((QsciAPIs*)self);
}

void q_sciapis_cancel_preparation(void* self) {
    QsciAPIs_CancelPreparation((QsciAPIs*)self);
}

const char* q_sciapis_default_prepared_name(void* self) {
    libqt_string _str = QsciAPIs_DefaultPreparedName((QsciAPIs*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciapis_is_prepared(void* self) {
    return QsciAPIs_IsPrepared((QsciAPIs*)self);
}

bool q_sciapis_load_prepared(void* self) {
    return QsciAPIs_LoadPrepared((QsciAPIs*)self);
}

bool q_sciapis_save_prepared(void* self) {
    return QsciAPIs_SavePrepared((QsciAPIs*)self);
}

void q_sciapis_update_auto_completion_list(void* self, const char* context[static 1], const char* list[static 1]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QsciAPIs_UpdateAutoCompletionList((QsciAPIs*)self, context_list, list_list);
    free(context_qstr);

    free(list_qstr);
}

void q_sciapis_on_update_auto_completion_list(void* self, void (*callback)(void*, const char**, const char**)) {
    QsciAPIs_OnUpdateAutoCompletionList((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_qbase_update_auto_completion_list(void* self, const char* context[static 1], const char* list[static 1]) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_update_auto_completion_list");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QsciAPIs_QBaseUpdateAutoCompletionList((QsciAPIs*)self, context_list, list_list);
}

void q_sciapis_auto_completion_selected(void* self, const char* sel) {
    QsciAPIs_AutoCompletionSelected((QsciAPIs*)self, qstring(sel));
}

void q_sciapis_on_auto_completion_selected(void* self, void (*callback)(void*, const char*)) {
    QsciAPIs_OnAutoCompletionSelected((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_qbase_auto_completion_selected(void* self, const char* sel) {
    QsciAPIs_QBaseAutoCompletionSelected((QsciAPIs*)self, qstring(sel));
}

const char** q_sciapis_call_tips(void* self, const char* context[static 1], int commas, int32_t style, libqt_list shifts) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_call_tips");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    libqt_list _arr = QsciAPIs_CallTips((QsciAPIs*)self, context_list, commas, style, shifts);
    free(context_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_call_tips");
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

void q_sciapis_on_call_tips(void* self, const char** (*callback)(void*, const char**, int, int32_t, int*)) {
    QsciAPIs_OnCallTips((QsciAPIs*)self, (intptr_t)callback);
}

const char** q_sciapis_qbase_call_tips(void* self, const char* context[static 1], int commas, int32_t style, libqt_list shifts) {
    size_t context_len = libqt_strv_length(context);
    libqt_string* context_qstr = (libqt_string*)malloc(context_len * sizeof(libqt_string));
    if (context_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_call_tips");
        abort();
    }
    for (size_t i = 0; i < context_len; ++i) {
        context_qstr[i] = qstring(context[i]);
    }
    libqt_list context_list = qlist(context_qstr, context_len);
    libqt_list _arr = QsciAPIs_QBaseCallTips((QsciAPIs*)self, context_list, commas, style, shifts);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_call_tips");
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

bool q_sciapis_event(void* self, void* e) {
    return QsciAPIs_Event((QsciAPIs*)self, (QEvent*)e);
}

void q_sciapis_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciAPIs_OnEvent((QsciAPIs*)self, (intptr_t)callback);
}

bool q_sciapis_qbase_event(void* self, void* e) {
    return QsciAPIs_QBaseEvent((QsciAPIs*)self, (QEvent*)e);
}

const char** q_sciapis_installed_a_p_i_files(void* self) {
    libqt_list _arr = QsciAPIs_InstalledAPIFiles((QsciAPIs*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_installed_a_p_i_files");
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

void q_sciapis_api_preparation_cancelled(void* self) {
    QsciAPIs_ApiPreparationCancelled((QsciAPIs*)self);
}

void q_sciapis_on_api_preparation_cancelled(void* self, void (*callback)(void*)) {
    QsciAPIs_Connect_ApiPreparationCancelled((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_api_preparation_started(void* self) {
    QsciAPIs_ApiPreparationStarted((QsciAPIs*)self);
}

void q_sciapis_on_api_preparation_started(void* self, void (*callback)(void*)) {
    QsciAPIs_Connect_ApiPreparationStarted((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_api_preparation_finished(void* self) {
    QsciAPIs_ApiPreparationFinished((QsciAPIs*)self);
}

void q_sciapis_on_api_preparation_finished(void* self, void (*callback)(void*)) {
    QsciAPIs_Connect_ApiPreparationFinished((QsciAPIs*)self, (intptr_t)callback);
}

const char* q_sciapis_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciapis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciapis_is_prepared1(void* self, const char* filename) {
    return QsciAPIs_IsPrepared1((QsciAPIs*)self, qstring(filename));
}

bool q_sciapis_load_prepared1(void* self, const char* filename) {
    return QsciAPIs_LoadPrepared1((QsciAPIs*)self, qstring(filename));
}

bool q_sciapis_save_prepared1(void* self, const char* filename) {
    return QsciAPIs_SavePrepared1((QsciAPIs*)self, qstring(filename));
}

QsciLexer* q_sciapis_lexer(void* self) {
    return QsciAbstractAPIs_Lexer((QsciAbstractAPIs*)self);
}

const char* q_sciapis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciapis_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sciapis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sciapis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sciapis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sciapis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sciapis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sciapis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sciapis_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sciapis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sciapis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sciapis_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sciapis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sciapis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sciapis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sciapis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sciapis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sciapis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sciapis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sciapis_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sciapis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sciapis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sciapis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sciapis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sciapis_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sciapis_dynamic_property_names");
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

QBindingStorage* q_sciapis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sciapis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sciapis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sciapis_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sciapis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sciapis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sciapis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sciapis_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sciapis_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sciapis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sciapis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sciapis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sciapis_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sciapis_event_filter(void* self, void* watched, void* event) {
    return QsciAPIs_EventFilter((QsciAPIs*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sciapis_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciAPIs_QBaseEventFilter((QsciAPIs*)self, (QObject*)watched, (QEvent*)event);
}

void q_sciapis_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciAPIs_OnEventFilter((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_timer_event(void* self, void* event) {
    QsciAPIs_TimerEvent((QsciAPIs*)self, (QTimerEvent*)event);
}

void q_sciapis_qbase_timer_event(void* self, void* event) {
    QsciAPIs_QBaseTimerEvent((QsciAPIs*)self, (QTimerEvent*)event);
}

void q_sciapis_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciAPIs_OnTimerEvent((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_child_event(void* self, void* event) {
    QsciAPIs_ChildEvent((QsciAPIs*)self, (QChildEvent*)event);
}

void q_sciapis_qbase_child_event(void* self, void* event) {
    QsciAPIs_QBaseChildEvent((QsciAPIs*)self, (QChildEvent*)event);
}

void q_sciapis_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciAPIs_OnChildEvent((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_custom_event(void* self, void* event) {
    QsciAPIs_CustomEvent((QsciAPIs*)self, (QEvent*)event);
}

void q_sciapis_qbase_custom_event(void* self, void* event) {
    QsciAPIs_QBaseCustomEvent((QsciAPIs*)self, (QEvent*)event);
}

void q_sciapis_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciAPIs_OnCustomEvent((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_connect_notify(void* self, void* signal) {
    QsciAPIs_ConnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

void q_sciapis_qbase_connect_notify(void* self, void* signal) {
    QsciAPIs_QBaseConnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

void q_sciapis_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciAPIs_OnConnectNotify((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_disconnect_notify(void* self, void* signal) {
    QsciAPIs_DisconnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

void q_sciapis_qbase_disconnect_notify(void* self, void* signal) {
    QsciAPIs_QBaseDisconnectNotify((QsciAPIs*)self, (QMetaMethod*)signal);
}

void q_sciapis_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciAPIs_OnDisconnectNotify((QsciAPIs*)self, (intptr_t)callback);
}

QObject* q_sciapis_sender(void* self) {
    return QsciAPIs_Sender((QsciAPIs*)self);
}

QObject* q_sciapis_qbase_sender(void* self) {
    return QsciAPIs_QBaseSender((QsciAPIs*)self);
}

void q_sciapis_on_sender(void* self, QObject* (*callback)()) {
    QsciAPIs_OnSender((QsciAPIs*)self, (intptr_t)callback);
}

int32_t q_sciapis_sender_signal_index(void* self) {
    return QsciAPIs_SenderSignalIndex((QsciAPIs*)self);
}

int32_t q_sciapis_qbase_sender_signal_index(void* self) {
    return QsciAPIs_QBaseSenderSignalIndex((QsciAPIs*)self);
}

void q_sciapis_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciAPIs_OnSenderSignalIndex((QsciAPIs*)self, (intptr_t)callback);
}

int32_t q_sciapis_receivers(void* self, const char* signal) {
    return QsciAPIs_Receivers((QsciAPIs*)self, signal);
}

int32_t q_sciapis_qbase_receivers(void* self, const char* signal) {
    return QsciAPIs_QBaseReceivers((QsciAPIs*)self, signal);
}

void q_sciapis_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciAPIs_OnReceivers((QsciAPIs*)self, (intptr_t)callback);
}

bool q_sciapis_is_signal_connected(void* self, void* signal) {
    return QsciAPIs_IsSignalConnected((QsciAPIs*)self, (QMetaMethod*)signal);
}

bool q_sciapis_qbase_is_signal_connected(void* self, void* signal) {
    return QsciAPIs_QBaseIsSignalConnected((QsciAPIs*)self, (QMetaMethod*)signal);
}

void q_sciapis_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciAPIs_OnIsSignalConnected((QsciAPIs*)self, (intptr_t)callback);
}

void q_sciapis_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sciapis_delete(void* self) {
    QsciAPIs_Delete((QsciAPIs*)(self));
}
