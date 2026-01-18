#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplacereply.hpp"
#include "libqplacesearchsuggestionreply.hpp"
#include "libqplacesearchsuggestionreply.h"

QPlaceSearchSuggestionReply* q_placesearchsuggestionreply_new() {
    return QPlaceSearchSuggestionReply_new();
}

QPlaceSearchSuggestionReply* q_placesearchsuggestionreply_new2(void* parent) {
    return QPlaceSearchSuggestionReply_new2((QObject*)parent);
}

const QMetaObject* q_placesearchsuggestionreply_meta_object(void* self) {
    return QPlaceSearchSuggestionReply_MetaObject((QPlaceSearchSuggestionReply*)self);
}

void* q_placesearchsuggestionreply_metacast(void* self, const char* param1) {
    return QPlaceSearchSuggestionReply_Metacast((QPlaceSearchSuggestionReply*)self, param1);
}

int32_t q_placesearchsuggestionreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceSearchSuggestionReply_Metacall((QPlaceSearchSuggestionReply*)self, param1, param2, param3);
}

void q_placesearchsuggestionreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceSearchSuggestionReply_OnMetacall((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

int32_t q_placesearchsuggestionreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceSearchSuggestionReply_QBaseMetacall((QPlaceSearchSuggestionReply*)self, param1, param2, param3);
}

const char* q_placesearchsuggestionreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_placesearchsuggestionreply_suggestions(void* self) {
    libqt_list _arr = QPlaceSearchSuggestionReply_Suggestions((QPlaceSearchSuggestionReply*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placesearchsuggestionreply_suggestions\n");
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

int32_t q_placesearchsuggestionreply_type(void* self) {
    return QPlaceSearchSuggestionReply_Type((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceSearchSuggestionReply_OnType((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

int32_t q_placesearchsuggestionreply_qbase_type(void* self) {
    return QPlaceSearchSuggestionReply_QBaseType((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_set_suggestions(void* self, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placesearchsuggestionreply_set_suggestions\n");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    QPlaceSearchSuggestionReply_SetSuggestions((QPlaceSearchSuggestionReply*)self, suggestions_list);
    free(suggestions_qstr);
}

void q_placesearchsuggestionreply_on_set_suggestions(void* self, void (*callback)(void*, const char**)) {
    QPlaceSearchSuggestionReply_OnSetSuggestions((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_qbase_set_suggestions(void* self, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placesearchsuggestionreply_set_suggestions\n");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    QPlaceSearchSuggestionReply_QBaseSetSuggestions((QPlaceSearchSuggestionReply*)self, suggestions_list);
}

const char* q_placesearchsuggestionreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placesearchsuggestionreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placesearchsuggestionreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placesearchsuggestionreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placesearchsuggestionreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placesearchsuggestionreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placesearchsuggestionreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placesearchsuggestionreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placesearchsuggestionreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placesearchsuggestionreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placesearchsuggestionreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placesearchsuggestionreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchsuggestionreply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placesearchsuggestionreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placesearchsuggestionreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placesearchsuggestionreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placesearchsuggestionreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placesearchsuggestionreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placesearchsuggestionreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placesearchsuggestionreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placesearchsuggestionreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_placesearchsuggestionreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placesearchsuggestionreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placesearchsuggestionreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placesearchsuggestionreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placesearchsuggestionreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placesearchsuggestionreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placesearchsuggestionreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placesearchsuggestionreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placesearchsuggestionreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placesearchsuggestionreply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placesearchsuggestionreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placesearchsuggestionreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placesearchsuggestionreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placesearchsuggestionreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placesearchsuggestionreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placesearchsuggestionreply_dynamic_property_names\n");
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

QBindingStorage* q_placesearchsuggestionreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placesearchsuggestionreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placesearchsuggestionreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placesearchsuggestionreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placesearchsuggestionreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placesearchsuggestionreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placesearchsuggestionreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placesearchsuggestionreply_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placesearchsuggestionreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_placesearchsuggestionreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placesearchsuggestionreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placesearchsuggestionreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placesearchsuggestionreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_abort(void* self) {
    QPlaceSearchSuggestionReply_Abort((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_qbase_abort(void* self) {
    QPlaceSearchSuggestionReply_QBaseAbort((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_on_abort(void* self, void (*callback)()) {
    QPlaceSearchSuggestionReply_OnAbort((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

bool q_placesearchsuggestionreply_event(void* self, void* event) {
    return QPlaceSearchSuggestionReply_Event((QPlaceSearchSuggestionReply*)self, (QEvent*)event);
}

bool q_placesearchsuggestionreply_qbase_event(void* self, void* event) {
    return QPlaceSearchSuggestionReply_QBaseEvent((QPlaceSearchSuggestionReply*)self, (QEvent*)event);
}

void q_placesearchsuggestionreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnEvent((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

bool q_placesearchsuggestionreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceSearchSuggestionReply_EventFilter((QPlaceSearchSuggestionReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placesearchsuggestionreply_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceSearchSuggestionReply_QBaseEventFilter((QPlaceSearchSuggestionReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placesearchsuggestionreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceSearchSuggestionReply_OnEventFilter((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_timer_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_TimerEvent((QPlaceSearchSuggestionReply*)self, (QTimerEvent*)event);
}

void q_placesearchsuggestionreply_qbase_timer_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_QBaseTimerEvent((QPlaceSearchSuggestionReply*)self, (QTimerEvent*)event);
}

void q_placesearchsuggestionreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnTimerEvent((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_child_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_ChildEvent((QPlaceSearchSuggestionReply*)self, (QChildEvent*)event);
}

void q_placesearchsuggestionreply_qbase_child_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_QBaseChildEvent((QPlaceSearchSuggestionReply*)self, (QChildEvent*)event);
}

void q_placesearchsuggestionreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnChildEvent((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_custom_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_CustomEvent((QPlaceSearchSuggestionReply*)self, (QEvent*)event);
}

void q_placesearchsuggestionreply_qbase_custom_event(void* self, void* event) {
    QPlaceSearchSuggestionReply_QBaseCustomEvent((QPlaceSearchSuggestionReply*)self, (QEvent*)event);
}

void q_placesearchsuggestionreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnCustomEvent((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_connect_notify(void* self, void* signal) {
    QPlaceSearchSuggestionReply_ConnectNotify((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

void q_placesearchsuggestionreply_qbase_connect_notify(void* self, void* signal) {
    QPlaceSearchSuggestionReply_QBaseConnectNotify((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

void q_placesearchsuggestionreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnConnectNotify((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_disconnect_notify(void* self, void* signal) {
    QPlaceSearchSuggestionReply_DisconnectNotify((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

void q_placesearchsuggestionreply_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceSearchSuggestionReply_QBaseDisconnectNotify((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

void q_placesearchsuggestionreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnDisconnectNotify((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_set_finished(void* self, bool finished) {
    QPlaceSearchSuggestionReply_SetFinished((QPlaceSearchSuggestionReply*)self, finished);
}

void q_placesearchsuggestionreply_qbase_set_finished(void* self, bool finished) {
    QPlaceSearchSuggestionReply_QBaseSetFinished((QPlaceSearchSuggestionReply*)self, finished);
}

void q_placesearchsuggestionreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceSearchSuggestionReply_OnSetFinished((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceSearchSuggestionReply_SetError((QPlaceSearchSuggestionReply*)self, error, qstring(errorString));
}

void q_placesearchsuggestionreply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceSearchSuggestionReply_QBaseSetError((QPlaceSearchSuggestionReply*)self, error, qstring(errorString));
}

void q_placesearchsuggestionreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceSearchSuggestionReply_OnSetError((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

QObject* q_placesearchsuggestionreply_sender(void* self) {
    return QPlaceSearchSuggestionReply_Sender((QPlaceSearchSuggestionReply*)self);
}

QObject* q_placesearchsuggestionreply_qbase_sender(void* self) {
    return QPlaceSearchSuggestionReply_QBaseSender((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceSearchSuggestionReply_OnSender((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

int32_t q_placesearchsuggestionreply_sender_signal_index(void* self) {
    return QPlaceSearchSuggestionReply_SenderSignalIndex((QPlaceSearchSuggestionReply*)self);
}

int32_t q_placesearchsuggestionreply_qbase_sender_signal_index(void* self) {
    return QPlaceSearchSuggestionReply_QBaseSenderSignalIndex((QPlaceSearchSuggestionReply*)self);
}

void q_placesearchsuggestionreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceSearchSuggestionReply_OnSenderSignalIndex((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

int32_t q_placesearchsuggestionreply_receivers(void* self, const char* signal) {
    return QPlaceSearchSuggestionReply_Receivers((QPlaceSearchSuggestionReply*)self, signal);
}

int32_t q_placesearchsuggestionreply_qbase_receivers(void* self, const char* signal) {
    return QPlaceSearchSuggestionReply_QBaseReceivers((QPlaceSearchSuggestionReply*)self, signal);
}

void q_placesearchsuggestionreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceSearchSuggestionReply_OnReceivers((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

bool q_placesearchsuggestionreply_is_signal_connected(void* self, void* signal) {
    return QPlaceSearchSuggestionReply_IsSignalConnected((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

bool q_placesearchsuggestionreply_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceSearchSuggestionReply_QBaseIsSignalConnected((QPlaceSearchSuggestionReply*)self, (QMetaMethod*)signal);
}

void q_placesearchsuggestionreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceSearchSuggestionReply_OnIsSignalConnected((QPlaceSearchSuggestionReply*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placesearchsuggestionreply_delete(void* self) {
    QPlaceSearchSuggestionReply_Delete((QPlaceSearchSuggestionReply*)(self));
}
