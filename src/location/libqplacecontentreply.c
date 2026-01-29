#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplacecontent.hpp"
#include "libqplacecontentrequest.hpp"
#include "libqplacereply.hpp"
#include "libqplacecontentreply.hpp"
#include "libqplacecontentreply.h"

QPlaceContentReply* q_placecontentreply_new() {
    return QPlaceContentReply_new();
}

QPlaceContentReply* q_placecontentreply_new2(void* parent) {
    return QPlaceContentReply_new2((QObject*)parent);
}

const QMetaObject* q_placecontentreply_meta_object(void* self) {
    return QPlaceContentReply_MetaObject((QPlaceContentReply*)self);
}

void q_placecontentreply_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlaceContentReply_OnMetaObject((QPlaceContentReply*)self, (intptr_t)callback);
}

const QMetaObject* q_placecontentreply_qbase_meta_object(void* self) {
    return QPlaceContentReply_QBaseMetaObject((QPlaceContentReply*)self);
}

void* q_placecontentreply_metacast(void* self, const char* param1) {
    return QPlaceContentReply_Metacast((QPlaceContentReply*)self, param1);
}

void q_placecontentreply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceContentReply_OnMetacast((QPlaceContentReply*)self, (intptr_t)callback);
}

void* q_placecontentreply_qbase_metacast(void* self, const char* param1) {
    return QPlaceContentReply_QBaseMetacast((QPlaceContentReply*)self, param1);
}

int32_t q_placecontentreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceContentReply_Metacall((QPlaceContentReply*)self, param1, param2, param3);
}

void q_placecontentreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceContentReply_OnMetacall((QPlaceContentReply*)self, (intptr_t)callback);
}

int32_t q_placecontentreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceContentReply_QBaseMetacall((QPlaceContentReply*)self, param1, param2, param3);
}

const char* q_placecontentreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placecontentreply_type(void* self) {
    return QPlaceContentReply_Type((QPlaceContentReply*)self);
}

void q_placecontentreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceContentReply_OnType((QPlaceContentReply*)self, (intptr_t)callback);
}

int32_t q_placecontentreply_qbase_type(void* self) {
    return QPlaceContentReply_QBaseType((QPlaceContentReply*)self);
}

libqt_map /* of int to QPlaceContent* */ q_placecontentreply_content(void* self) {
    // Convert QMap<int,QPlaceContent> to libqt_map
    libqt_map _out = QPlaceContentReply_Content((QPlaceContentReply*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

int32_t q_placecontentreply_total_count(void* self) {
    return QPlaceContentReply_TotalCount((QPlaceContentReply*)self);
}

QPlaceContentRequest* q_placecontentreply_request(void* self) {
    return QPlaceContentReply_Request((QPlaceContentReply*)self);
}

QPlaceContentRequest* q_placecontentreply_previous_page_request(void* self) {
    return QPlaceContentReply_PreviousPageRequest((QPlaceContentReply*)self);
}

QPlaceContentRequest* q_placecontentreply_next_page_request(void* self) {
    return QPlaceContentReply_NextPageRequest((QPlaceContentReply*)self);
}

void q_placecontentreply_set_content(void* self, libqt_map /* of int to QPlaceContent* */ content) {
    // Convert libqt_map to QMap<int,QPlaceContent>
    libqt_map content_ret;
    content_ret.len = content.len;
    content_ret.keys = (int*)malloc(content_ret.len * sizeof(int));
    if (content_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_placecontentreply_set_content\n");
        abort();
    }
    content_ret.values = (QPlaceContent**)malloc(content_ret.len * sizeof(QPlaceContent*));
    if (content_ret.values == NULL) {
        free(content_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_placecontentreply_set_content\n");
        abort();
    }
    int* content_karr = (int*)content.keys;
    int* content_kdest = (int*)content_ret.keys;
    QPlaceContent** content_varr = (QPlaceContent**)content.values;
    QPlaceContent** content_vdest = (QPlaceContent**)content_ret.values;
    for (size_t i = 0; i < content_ret.len; ++i) {
        content_kdest[i] = content_karr[i];
        content_vdest[i] = content_varr[i];
    }
    QPlaceContentReply_SetContent((QPlaceContentReply*)self, content_ret);
    free(content_ret.keys);
    free(content_ret.values);
}

void q_placecontentreply_on_set_content(void* self, void (*callback)(void*, libqt_map /* of int to QPlaceContent* */)) {
    QPlaceContentReply_OnSetContent((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_qbase_set_content(void* self, libqt_map /* of int to QPlaceContent* */ content) {
    // Convert libqt_map to QMap<int,QPlaceContent>
    libqt_map content_ret;
    content_ret.len = content.len;
    content_ret.keys = (int*)malloc(content_ret.len * sizeof(int));
    if (content_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_placecontentreply_set_content\n");
        abort();
    }
    content_ret.values = (QPlaceContent**)malloc(content_ret.len * sizeof(QPlaceContent*));
    if (content_ret.values == NULL) {
        free(content_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_placecontentreply_set_content\n");
        abort();
    }
    int* content_karr = (int*)content.keys;
    int* content_kdest = (int*)content_ret.keys;
    QPlaceContent** content_varr = (QPlaceContent**)content.values;
    QPlaceContent** content_vdest = (QPlaceContent**)content_ret.values;
    for (size_t i = 0; i < content_ret.len; ++i) {
        content_kdest[i] = content_karr[i];
        content_vdest[i] = content_varr[i];
    }
    QPlaceContentReply_QBaseSetContent((QPlaceContentReply*)self, content_ret);
}

void q_placecontentreply_set_total_count(void* self, int total) {
    QPlaceContentReply_SetTotalCount((QPlaceContentReply*)self, total);
}

void q_placecontentreply_on_set_total_count(void* self, void (*callback)(void*, int)) {
    QPlaceContentReply_OnSetTotalCount((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_qbase_set_total_count(void* self, int total) {
    QPlaceContentReply_QBaseSetTotalCount((QPlaceContentReply*)self, total);
}

void q_placecontentreply_set_request(void* self, void* request) {
    QPlaceContentReply_SetRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)request);
}

void q_placecontentreply_on_set_request(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnSetRequest((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_qbase_set_request(void* self, void* request) {
    QPlaceContentReply_QBaseSetRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)request);
}

void q_placecontentreply_set_previous_page_request(void* self, void* previous) {
    QPlaceContentReply_SetPreviousPageRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)previous);
}

void q_placecontentreply_on_set_previous_page_request(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnSetPreviousPageRequest((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_qbase_set_previous_page_request(void* self, void* previous) {
    QPlaceContentReply_QBaseSetPreviousPageRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)previous);
}

void q_placecontentreply_set_next_page_request(void* self, void* next) {
    QPlaceContentReply_SetNextPageRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)next);
}

void q_placecontentreply_on_set_next_page_request(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnSetNextPageRequest((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_qbase_set_next_page_request(void* self, void* next) {
    QPlaceContentReply_QBaseSetNextPageRequest((QPlaceContentReply*)self, (QPlaceContentRequest*)next);
}

const char* q_placecontentreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placecontentreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placecontentreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placecontentreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placecontentreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placecontentreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placecontentreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placecontentreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placecontentreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placecontentreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placecontentreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placecontentreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placecontentreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placecontentreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placecontentreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placecontentreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecontentreply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placecontentreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placecontentreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placecontentreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placecontentreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placecontentreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placecontentreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placecontentreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placecontentreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placecontentreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placecontentreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placecontentreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placecontentreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placecontentreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placecontentreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placecontentreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placecontentreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placecontentreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placecontentreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placecontentreply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placecontentreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placecontentreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placecontentreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placecontentreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placecontentreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placecontentreply_dynamic_property_names\n");
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

QBindingStorage* q_placecontentreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placecontentreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placecontentreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placecontentreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placecontentreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placecontentreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placecontentreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_placecontentreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placecontentreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placecontentreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placecontentreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placecontentreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placecontentreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placecontentreply_abort(void* self) {
    QPlaceContentReply_Abort((QPlaceContentReply*)self);
}

void q_placecontentreply_qbase_abort(void* self) {
    QPlaceContentReply_QBaseAbort((QPlaceContentReply*)self);
}

void q_placecontentreply_on_abort(void* self, void (*callback)()) {
    QPlaceContentReply_OnAbort((QPlaceContentReply*)self, (intptr_t)callback);
}

bool q_placecontentreply_event(void* self, void* event) {
    return QPlaceContentReply_Event((QPlaceContentReply*)self, (QEvent*)event);
}

bool q_placecontentreply_qbase_event(void* self, void* event) {
    return QPlaceContentReply_QBaseEvent((QPlaceContentReply*)self, (QEvent*)event);
}

void q_placecontentreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceContentReply_OnEvent((QPlaceContentReply*)self, (intptr_t)callback);
}

bool q_placecontentreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceContentReply_EventFilter((QPlaceContentReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placecontentreply_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceContentReply_QBaseEventFilter((QPlaceContentReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placecontentreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceContentReply_OnEventFilter((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_timer_event(void* self, void* event) {
    QPlaceContentReply_TimerEvent((QPlaceContentReply*)self, (QTimerEvent*)event);
}

void q_placecontentreply_qbase_timer_event(void* self, void* event) {
    QPlaceContentReply_QBaseTimerEvent((QPlaceContentReply*)self, (QTimerEvent*)event);
}

void q_placecontentreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnTimerEvent((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_child_event(void* self, void* event) {
    QPlaceContentReply_ChildEvent((QPlaceContentReply*)self, (QChildEvent*)event);
}

void q_placecontentreply_qbase_child_event(void* self, void* event) {
    QPlaceContentReply_QBaseChildEvent((QPlaceContentReply*)self, (QChildEvent*)event);
}

void q_placecontentreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnChildEvent((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_custom_event(void* self, void* event) {
    QPlaceContentReply_CustomEvent((QPlaceContentReply*)self, (QEvent*)event);
}

void q_placecontentreply_qbase_custom_event(void* self, void* event) {
    QPlaceContentReply_QBaseCustomEvent((QPlaceContentReply*)self, (QEvent*)event);
}

void q_placecontentreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnCustomEvent((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_connect_notify(void* self, void* signal) {
    QPlaceContentReply_ConnectNotify((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

void q_placecontentreply_qbase_connect_notify(void* self, void* signal) {
    QPlaceContentReply_QBaseConnectNotify((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

void q_placecontentreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnConnectNotify((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_disconnect_notify(void* self, void* signal) {
    QPlaceContentReply_DisconnectNotify((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

void q_placecontentreply_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceContentReply_QBaseDisconnectNotify((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

void q_placecontentreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceContentReply_OnDisconnectNotify((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_set_finished(void* self, bool finished) {
    QPlaceContentReply_SetFinished((QPlaceContentReply*)self, finished);
}

void q_placecontentreply_qbase_set_finished(void* self, bool finished) {
    QPlaceContentReply_QBaseSetFinished((QPlaceContentReply*)self, finished);
}

void q_placecontentreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceContentReply_OnSetFinished((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceContentReply_SetError((QPlaceContentReply*)self, error, qstring(errorString));
}

void q_placecontentreply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceContentReply_QBaseSetError((QPlaceContentReply*)self, error, qstring(errorString));
}

void q_placecontentreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceContentReply_OnSetError((QPlaceContentReply*)self, (intptr_t)callback);
}

QObject* q_placecontentreply_sender(void* self) {
    return QPlaceContentReply_Sender((QPlaceContentReply*)self);
}

QObject* q_placecontentreply_qbase_sender(void* self) {
    return QPlaceContentReply_QBaseSender((QPlaceContentReply*)self);
}

void q_placecontentreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceContentReply_OnSender((QPlaceContentReply*)self, (intptr_t)callback);
}

int32_t q_placecontentreply_sender_signal_index(void* self) {
    return QPlaceContentReply_SenderSignalIndex((QPlaceContentReply*)self);
}

int32_t q_placecontentreply_qbase_sender_signal_index(void* self) {
    return QPlaceContentReply_QBaseSenderSignalIndex((QPlaceContentReply*)self);
}

void q_placecontentreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceContentReply_OnSenderSignalIndex((QPlaceContentReply*)self, (intptr_t)callback);
}

int32_t q_placecontentreply_receivers(void* self, const char* signal) {
    return QPlaceContentReply_Receivers((QPlaceContentReply*)self, signal);
}

int32_t q_placecontentreply_qbase_receivers(void* self, const char* signal) {
    return QPlaceContentReply_QBaseReceivers((QPlaceContentReply*)self, signal);
}

void q_placecontentreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceContentReply_OnReceivers((QPlaceContentReply*)self, (intptr_t)callback);
}

bool q_placecontentreply_is_signal_connected(void* self, void* signal) {
    return QPlaceContentReply_IsSignalConnected((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

bool q_placecontentreply_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceContentReply_QBaseIsSignalConnected((QPlaceContentReply*)self, (QMetaMethod*)signal);
}

void q_placecontentreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceContentReply_OnIsSignalConnected((QPlaceContentReply*)self, (intptr_t)callback);
}

void q_placecontentreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placecontentreply_delete(void* self) {
    QPlaceContentReply_Delete((QPlaceContentReply*)(self));
}
