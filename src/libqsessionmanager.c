#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqsessionmanager.hpp"
#include "libqsessionmanager.h"

const QMetaObject* q_sessionmanager_meta_object(void* self) {
    return QSessionManager_MetaObject((QSessionManager*)self);
}

void* q_sessionmanager_metacast(void* self, const char* param1) {
    return QSessionManager_Metacast((QSessionManager*)self, param1);
}

int32_t q_sessionmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSessionManager_Metacall((QSessionManager*)self, param1, param2, param3);
}

const char* q_sessionmanager_tr(const char* s) {
    libqt_string _str = QSessionManager_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sessionmanager_session_id(void* self) {
    libqt_string _str = QSessionManager_SessionId((QSessionManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sessionmanager_session_key(void* self) {
    libqt_string _str = QSessionManager_SessionKey((QSessionManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sessionmanager_allows_interaction(void* self) {
    return QSessionManager_AllowsInteraction((QSessionManager*)self);
}

bool q_sessionmanager_allows_error_interaction(void* self) {
    return QSessionManager_AllowsErrorInteraction((QSessionManager*)self);
}

void q_sessionmanager_release(void* self) {
    QSessionManager_Release((QSessionManager*)self);
}

void q_sessionmanager_cancel(void* self) {
    QSessionManager_Cancel((QSessionManager*)self);
}

void q_sessionmanager_set_restart_hint(void* self, int32_t restartHint) {
    QSessionManager_SetRestartHint((QSessionManager*)self, restartHint);
}

int32_t q_sessionmanager_restart_hint(void* self) {
    return QSessionManager_RestartHint((QSessionManager*)self);
}

void q_sessionmanager_set_restart_command(void* self, const char* restartCommand[static 1]) {
    size_t restartCommand_len = libqt_strv_length(restartCommand);
    libqt_string* restartCommand_qstr = (libqt_string*)malloc(restartCommand_len * sizeof(libqt_string));
    if (restartCommand_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_set_restart_command");
        abort();
    }
    for (size_t i = 0; i < restartCommand_len; ++i) {
        restartCommand_qstr[i] = qstring(restartCommand[i]);
    }
    libqt_list restartCommand_list = qlist(restartCommand_qstr, restartCommand_len);
    QSessionManager_SetRestartCommand((QSessionManager*)self, restartCommand_list);
    free(restartCommand_qstr);
}

const char** q_sessionmanager_restart_command(void* self) {
    libqt_list _arr = QSessionManager_RestartCommand((QSessionManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_restart_command");
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

void q_sessionmanager_set_discard_command(void* self, const char* discardCommand[static 1]) {
    size_t discardCommand_len = libqt_strv_length(discardCommand);
    libqt_string* discardCommand_qstr = (libqt_string*)malloc(discardCommand_len * sizeof(libqt_string));
    if (discardCommand_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_set_discard_command");
        abort();
    }
    for (size_t i = 0; i < discardCommand_len; ++i) {
        discardCommand_qstr[i] = qstring(discardCommand[i]);
    }
    libqt_list discardCommand_list = qlist(discardCommand_qstr, discardCommand_len);
    QSessionManager_SetDiscardCommand((QSessionManager*)self, discardCommand_list);
    free(discardCommand_qstr);
}

const char** q_sessionmanager_discard_command(void* self) {
    libqt_list _arr = QSessionManager_DiscardCommand((QSessionManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_discard_command");
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

void q_sessionmanager_set_manager_property(void* self, const char* name, const char* value) {
    QSessionManager_SetManagerProperty((QSessionManager*)self, qstring(name), qstring(value));
}

void q_sessionmanager_set_manager_property2(void* self, const char* name, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_set_manager_property2");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    QSessionManager_SetManagerProperty2((QSessionManager*)self, qstring(name), value_list);
    free(value_qstr);
}

bool q_sessionmanager_is_phase2(void* self) {
    return QSessionManager_IsPhase2((QSessionManager*)self);
}

void q_sessionmanager_request_phase2(void* self) {
    QSessionManager_RequestPhase2((QSessionManager*)self);
}

const char* q_sessionmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QSessionManager_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sessionmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSessionManager_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sessionmanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_sessionmanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_sessionmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sessionmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sessionmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sessionmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sessionmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sessionmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sessionmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sessionmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sessionmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sessionmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sessionmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sessionmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sessionmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sessionmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sessionmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sessionmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sessionmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sessionmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sessionmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sessionmanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sessionmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sessionmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sessionmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sessionmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sessionmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sessionmanager_dynamic_property_names");
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

QBindingStorage* q_sessionmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sessionmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sessionmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sessionmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sessionmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sessionmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sessionmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sessionmanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sessionmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sessionmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sessionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sessionmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sessionmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_sessionmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
