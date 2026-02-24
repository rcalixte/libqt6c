#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplacereply.hpp"
#include "libqplacesearchrequest.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplacesearchreply.hpp"
#include "libqplacesearchreply.h"

QPlaceSearchReply* q_placesearchreply_new() {
    return QPlaceSearchReply_new();
}

QPlaceSearchReply* q_placesearchreply_new2(void* parent) {
    return QPlaceSearchReply_new2((QObject*)parent);
}

const QMetaObject* q_placesearchreply_meta_object(void* self) {
    return QPlaceSearchReply_MetaObject((QPlaceSearchReply*)self);
}

void q_placesearchreply_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlaceSearchReply_OnMetaObject((QPlaceSearchReply*)self, (intptr_t)callback);
}

const QMetaObject* q_placesearchreply_super_meta_object(void* self) {
    return QPlaceSearchReply_SuperMetaObject((QPlaceSearchReply*)self);
}

void* q_placesearchreply_metacast(void* self, const char* param1) {
    return QPlaceSearchReply_Metacast((QPlaceSearchReply*)self, param1);
}

void q_placesearchreply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceSearchReply_OnMetacast((QPlaceSearchReply*)self, (intptr_t)callback);
}

void* q_placesearchreply_super_metacast(void* self, const char* param1) {
    return QPlaceSearchReply_SuperMetacast((QPlaceSearchReply*)self, param1);
}

int32_t q_placesearchreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceSearchReply_Metacall((QPlaceSearchReply*)self, param1, param2, param3);
}

void q_placesearchreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceSearchReply_OnMetacall((QPlaceSearchReply*)self, (intptr_t)callback);
}

int32_t q_placesearchreply_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceSearchReply_SuperMetacall((QPlaceSearchReply*)self, param1, param2, param3);
}

const char* q_placesearchreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placesearchreply_type(void* self) {
    return QPlaceSearchReply_Type((QPlaceSearchReply*)self);
}

void q_placesearchreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceSearchReply_OnType((QPlaceSearchReply*)self, (intptr_t)callback);
}

int32_t q_placesearchreply_super_type(void* self) {
    return QPlaceSearchReply_SuperType((QPlaceSearchReply*)self);
}

libqt_list /* of QPlaceSearchResult* */ q_placesearchreply_results(void* self) {
    libqt_list _arr = QPlaceSearchReply_Results((QPlaceSearchReply*)self);
    return _arr;
}

QPlaceSearchRequest* q_placesearchreply_request(void* self) {
    return QPlaceSearchReply_Request((QPlaceSearchReply*)self);
}

QPlaceSearchRequest* q_placesearchreply_previous_page_request(void* self) {
    return QPlaceSearchReply_PreviousPageRequest((QPlaceSearchReply*)self);
}

QPlaceSearchRequest* q_placesearchreply_next_page_request(void* self) {
    return QPlaceSearchReply_NextPageRequest((QPlaceSearchReply*)self);
}

void q_placesearchreply_set_results(void* self, libqt_list /* of QPlaceSearchResult* */ results) {
    QPlaceSearchReply_SetResults((QPlaceSearchReply*)self, results);
}

void q_placesearchreply_on_set_results(void* self, void (*callback)(void*, libqt_list /* of QPlaceSearchResult* */)) {
    QPlaceSearchReply_OnSetResults((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_super_set_results(void* self, libqt_list /* of QPlaceSearchResult* */ results) {
    QPlaceSearchReply_SuperSetResults((QPlaceSearchReply*)self, results);
}

void q_placesearchreply_set_request(void* self, void* request) {
    QPlaceSearchReply_SetRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)request);
}

void q_placesearchreply_on_set_request(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnSetRequest((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_super_set_request(void* self, void* request) {
    QPlaceSearchReply_SuperSetRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)request);
}

void q_placesearchreply_set_previous_page_request(void* self, void* previous) {
    QPlaceSearchReply_SetPreviousPageRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)previous);
}

void q_placesearchreply_on_set_previous_page_request(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnSetPreviousPageRequest((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_super_set_previous_page_request(void* self, void* previous) {
    QPlaceSearchReply_SuperSetPreviousPageRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)previous);
}

void q_placesearchreply_set_next_page_request(void* self, void* next) {
    QPlaceSearchReply_SetNextPageRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)next);
}

void q_placesearchreply_on_set_next_page_request(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnSetNextPageRequest((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_super_set_next_page_request(void* self, void* next) {
    QPlaceSearchReply_SuperSetNextPageRequest((QPlaceSearchReply*)self, (QPlaceSearchRequest*)next);
}

const char* q_placesearchreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placesearchreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placesearchreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placesearchreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placesearchreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placesearchreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placesearchreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placesearchreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placesearchreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placesearchreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placesearchreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placesearchreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placesearchreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchreply_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placesearchreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placesearchreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placesearchreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placesearchreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placesearchreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placesearchreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placesearchreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placesearchreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placesearchreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placesearchreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placesearchreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placesearchreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placesearchreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placesearchreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placesearchreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placesearchreply_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_placesearchreply_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placesearchreply_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placesearchreply_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_placesearchreply_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placesearchreply_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_placesearchreply_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_placesearchreply_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_placesearchreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placesearchreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placesearchreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placesearchreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placesearchreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placesearchreply_dynamic_property_names\n");
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

QBindingStorage* q_placesearchreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placesearchreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placesearchreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placesearchreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placesearchreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placesearchreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placesearchreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_placesearchreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placesearchreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placesearchreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_placesearchreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placesearchreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_placesearchreply_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_placesearchreply_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_placesearchreply_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_placesearchreply_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_placesearchreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placesearchreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placesearchreply_abort(void* self) {
    QPlaceSearchReply_Abort((QPlaceSearchReply*)self);
}

void q_placesearchreply_super_abort(void* self) {
    QPlaceSearchReply_SuperAbort((QPlaceSearchReply*)self);
}

void q_placesearchreply_on_abort(void* self, void (*callback)()) {
    QPlaceSearchReply_OnAbort((QPlaceSearchReply*)self, (intptr_t)callback);
}

bool q_placesearchreply_event(void* self, void* event) {
    return QPlaceSearchReply_Event((QPlaceSearchReply*)self, (QEvent*)event);
}

bool q_placesearchreply_super_event(void* self, void* event) {
    return QPlaceSearchReply_SuperEvent((QPlaceSearchReply*)self, (QEvent*)event);
}

void q_placesearchreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceSearchReply_OnEvent((QPlaceSearchReply*)self, (intptr_t)callback);
}

bool q_placesearchreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceSearchReply_EventFilter((QPlaceSearchReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placesearchreply_super_event_filter(void* self, void* watched, void* event) {
    return QPlaceSearchReply_SuperEventFilter((QPlaceSearchReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placesearchreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceSearchReply_OnEventFilter((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_timer_event(void* self, void* event) {
    QPlaceSearchReply_TimerEvent((QPlaceSearchReply*)self, (QTimerEvent*)event);
}

void q_placesearchreply_super_timer_event(void* self, void* event) {
    QPlaceSearchReply_SuperTimerEvent((QPlaceSearchReply*)self, (QTimerEvent*)event);
}

void q_placesearchreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnTimerEvent((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_child_event(void* self, void* event) {
    QPlaceSearchReply_ChildEvent((QPlaceSearchReply*)self, (QChildEvent*)event);
}

void q_placesearchreply_super_child_event(void* self, void* event) {
    QPlaceSearchReply_SuperChildEvent((QPlaceSearchReply*)self, (QChildEvent*)event);
}

void q_placesearchreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnChildEvent((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_custom_event(void* self, void* event) {
    QPlaceSearchReply_CustomEvent((QPlaceSearchReply*)self, (QEvent*)event);
}

void q_placesearchreply_super_custom_event(void* self, void* event) {
    QPlaceSearchReply_SuperCustomEvent((QPlaceSearchReply*)self, (QEvent*)event);
}

void q_placesearchreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnCustomEvent((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_connect_notify(void* self, void* signal) {
    QPlaceSearchReply_ConnectNotify((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

void q_placesearchreply_super_connect_notify(void* self, void* signal) {
    QPlaceSearchReply_SuperConnectNotify((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

void q_placesearchreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnConnectNotify((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_disconnect_notify(void* self, void* signal) {
    QPlaceSearchReply_DisconnectNotify((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

void q_placesearchreply_super_disconnect_notify(void* self, void* signal) {
    QPlaceSearchReply_SuperDisconnectNotify((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

void q_placesearchreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceSearchReply_OnDisconnectNotify((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_set_finished(void* self, bool finished) {
    QPlaceSearchReply_SetFinished((QPlaceSearchReply*)self, finished);
}

void q_placesearchreply_super_set_finished(void* self, bool finished) {
    QPlaceSearchReply_SuperSetFinished((QPlaceSearchReply*)self, finished);
}

void q_placesearchreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceSearchReply_OnSetFinished((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceSearchReply_SetError((QPlaceSearchReply*)self, error, qstring(errorString));
}

void q_placesearchreply_super_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceSearchReply_SuperSetError((QPlaceSearchReply*)self, error, qstring(errorString));
}

void q_placesearchreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceSearchReply_OnSetError((QPlaceSearchReply*)self, (intptr_t)callback);
}

QObject* q_placesearchreply_sender(void* self) {
    return QPlaceSearchReply_Sender((QPlaceSearchReply*)self);
}

QObject* q_placesearchreply_super_sender(void* self) {
    return QPlaceSearchReply_SuperSender((QPlaceSearchReply*)self);
}

void q_placesearchreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceSearchReply_OnSender((QPlaceSearchReply*)self, (intptr_t)callback);
}

int32_t q_placesearchreply_sender_signal_index(void* self) {
    return QPlaceSearchReply_SenderSignalIndex((QPlaceSearchReply*)self);
}

int32_t q_placesearchreply_super_sender_signal_index(void* self) {
    return QPlaceSearchReply_SuperSenderSignalIndex((QPlaceSearchReply*)self);
}

void q_placesearchreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceSearchReply_OnSenderSignalIndex((QPlaceSearchReply*)self, (intptr_t)callback);
}

int32_t q_placesearchreply_receivers(void* self, const char* signal) {
    return QPlaceSearchReply_Receivers((QPlaceSearchReply*)self, signal);
}

int32_t q_placesearchreply_super_receivers(void* self, const char* signal) {
    return QPlaceSearchReply_SuperReceivers((QPlaceSearchReply*)self, signal);
}

void q_placesearchreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceSearchReply_OnReceivers((QPlaceSearchReply*)self, (intptr_t)callback);
}

bool q_placesearchreply_is_signal_connected(void* self, void* signal) {
    return QPlaceSearchReply_IsSignalConnected((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

bool q_placesearchreply_super_is_signal_connected(void* self, void* signal) {
    return QPlaceSearchReply_SuperIsSignalConnected((QPlaceSearchReply*)self, (QMetaMethod*)signal);
}

void q_placesearchreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceSearchReply_OnIsSignalConnected((QPlaceSearchReply*)self, (intptr_t)callback);
}

void q_placesearchreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placesearchreply_delete(void* self) {
    QPlaceSearchReply_Delete((QPlaceSearchReply*)(self));
}
