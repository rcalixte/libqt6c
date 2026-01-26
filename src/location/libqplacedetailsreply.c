#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplace.hpp"
#include "libqplacereply.hpp"
#include "libqplacedetailsreply.hpp"
#include "libqplacedetailsreply.h"

QPlaceDetailsReply* q_placedetailsreply_new() {
    return QPlaceDetailsReply_new();
}

QPlaceDetailsReply* q_placedetailsreply_new2(void* parent) {
    return QPlaceDetailsReply_new2((QObject*)parent);
}

const QMetaObject* q_placedetailsreply_meta_object(void* self) {
    return QPlaceDetailsReply_MetaObject((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlaceDetailsReply_OnMetaObject((QPlaceDetailsReply*)self, (intptr_t)callback);
}

const QMetaObject* q_placedetailsreply_qbase_meta_object(void* self) {
    return QPlaceDetailsReply_QBaseMetaObject((QPlaceDetailsReply*)self);
}

void* q_placedetailsreply_metacast(void* self, const char* param1) {
    return QPlaceDetailsReply_Metacast((QPlaceDetailsReply*)self, param1);
}

void q_placedetailsreply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceDetailsReply_OnMetacast((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void* q_placedetailsreply_qbase_metacast(void* self, const char* param1) {
    return QPlaceDetailsReply_QBaseMetacast((QPlaceDetailsReply*)self, param1);
}

int32_t q_placedetailsreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceDetailsReply_Metacall((QPlaceDetailsReply*)self, param1, param2, param3);
}

void q_placedetailsreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceDetailsReply_OnMetacall((QPlaceDetailsReply*)self, (intptr_t)callback);
}

int32_t q_placedetailsreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceDetailsReply_QBaseMetacall((QPlaceDetailsReply*)self, param1, param2, param3);
}

const char* q_placedetailsreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placedetailsreply_type(void* self) {
    return QPlaceDetailsReply_Type((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceDetailsReply_OnType((QPlaceDetailsReply*)self, (intptr_t)callback);
}

int32_t q_placedetailsreply_qbase_type(void* self) {
    return QPlaceDetailsReply_QBaseType((QPlaceDetailsReply*)self);
}

QPlace* q_placedetailsreply_place(void* self) {
    return QPlaceDetailsReply_Place((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_set_place(void* self, void* place) {
    QPlaceDetailsReply_SetPlace((QPlaceDetailsReply*)self, (QPlace*)place);
}

void q_placedetailsreply_on_set_place(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnSetPlace((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_qbase_set_place(void* self, void* place) {
    QPlaceDetailsReply_QBaseSetPlace((QPlaceDetailsReply*)self, (QPlace*)place);
}

const char* q_placedetailsreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placedetailsreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placedetailsreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placedetailsreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placedetailsreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placedetailsreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placedetailsreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placedetailsreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placedetailsreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placedetailsreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placedetailsreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placedetailsreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placedetailsreply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placedetailsreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placedetailsreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placedetailsreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placedetailsreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placedetailsreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placedetailsreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placedetailsreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placedetailsreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placedetailsreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placedetailsreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placedetailsreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placedetailsreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placedetailsreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placedetailsreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placedetailsreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placedetailsreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placedetailsreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placedetailsreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placedetailsreply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placedetailsreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placedetailsreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placedetailsreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placedetailsreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placedetailsreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placedetailsreply_dynamic_property_names\n");
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

QBindingStorage* q_placedetailsreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placedetailsreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placedetailsreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placedetailsreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placedetailsreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placedetailsreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placedetailsreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placedetailsreply_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placedetailsreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placedetailsreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placedetailsreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placedetailsreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placedetailsreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placedetailsreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placedetailsreply_abort(void* self) {
    QPlaceDetailsReply_Abort((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_qbase_abort(void* self) {
    QPlaceDetailsReply_QBaseAbort((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_on_abort(void* self, void (*callback)()) {
    QPlaceDetailsReply_OnAbort((QPlaceDetailsReply*)self, (intptr_t)callback);
}

bool q_placedetailsreply_event(void* self, void* event) {
    return QPlaceDetailsReply_Event((QPlaceDetailsReply*)self, (QEvent*)event);
}

bool q_placedetailsreply_qbase_event(void* self, void* event) {
    return QPlaceDetailsReply_QBaseEvent((QPlaceDetailsReply*)self, (QEvent*)event);
}

void q_placedetailsreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnEvent((QPlaceDetailsReply*)self, (intptr_t)callback);
}

bool q_placedetailsreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceDetailsReply_EventFilter((QPlaceDetailsReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placedetailsreply_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceDetailsReply_QBaseEventFilter((QPlaceDetailsReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placedetailsreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceDetailsReply_OnEventFilter((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_timer_event(void* self, void* event) {
    QPlaceDetailsReply_TimerEvent((QPlaceDetailsReply*)self, (QTimerEvent*)event);
}

void q_placedetailsreply_qbase_timer_event(void* self, void* event) {
    QPlaceDetailsReply_QBaseTimerEvent((QPlaceDetailsReply*)self, (QTimerEvent*)event);
}

void q_placedetailsreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnTimerEvent((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_child_event(void* self, void* event) {
    QPlaceDetailsReply_ChildEvent((QPlaceDetailsReply*)self, (QChildEvent*)event);
}

void q_placedetailsreply_qbase_child_event(void* self, void* event) {
    QPlaceDetailsReply_QBaseChildEvent((QPlaceDetailsReply*)self, (QChildEvent*)event);
}

void q_placedetailsreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnChildEvent((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_custom_event(void* self, void* event) {
    QPlaceDetailsReply_CustomEvent((QPlaceDetailsReply*)self, (QEvent*)event);
}

void q_placedetailsreply_qbase_custom_event(void* self, void* event) {
    QPlaceDetailsReply_QBaseCustomEvent((QPlaceDetailsReply*)self, (QEvent*)event);
}

void q_placedetailsreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnCustomEvent((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_connect_notify(void* self, void* signal) {
    QPlaceDetailsReply_ConnectNotify((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

void q_placedetailsreply_qbase_connect_notify(void* self, void* signal) {
    QPlaceDetailsReply_QBaseConnectNotify((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

void q_placedetailsreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnConnectNotify((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_disconnect_notify(void* self, void* signal) {
    QPlaceDetailsReply_DisconnectNotify((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

void q_placedetailsreply_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceDetailsReply_QBaseDisconnectNotify((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

void q_placedetailsreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnDisconnectNotify((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_set_finished(void* self, bool finished) {
    QPlaceDetailsReply_SetFinished((QPlaceDetailsReply*)self, finished);
}

void q_placedetailsreply_qbase_set_finished(void* self, bool finished) {
    QPlaceDetailsReply_QBaseSetFinished((QPlaceDetailsReply*)self, finished);
}

void q_placedetailsreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceDetailsReply_OnSetFinished((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceDetailsReply_SetError((QPlaceDetailsReply*)self, error, qstring(errorString));
}

void q_placedetailsreply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceDetailsReply_QBaseSetError((QPlaceDetailsReply*)self, error, qstring(errorString));
}

void q_placedetailsreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceDetailsReply_OnSetError((QPlaceDetailsReply*)self, (intptr_t)callback);
}

QObject* q_placedetailsreply_sender(void* self) {
    return QPlaceDetailsReply_Sender((QPlaceDetailsReply*)self);
}

QObject* q_placedetailsreply_qbase_sender(void* self) {
    return QPlaceDetailsReply_QBaseSender((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceDetailsReply_OnSender((QPlaceDetailsReply*)self, (intptr_t)callback);
}

int32_t q_placedetailsreply_sender_signal_index(void* self) {
    return QPlaceDetailsReply_SenderSignalIndex((QPlaceDetailsReply*)self);
}

int32_t q_placedetailsreply_qbase_sender_signal_index(void* self) {
    return QPlaceDetailsReply_QBaseSenderSignalIndex((QPlaceDetailsReply*)self);
}

void q_placedetailsreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceDetailsReply_OnSenderSignalIndex((QPlaceDetailsReply*)self, (intptr_t)callback);
}

int32_t q_placedetailsreply_receivers(void* self, const char* signal) {
    return QPlaceDetailsReply_Receivers((QPlaceDetailsReply*)self, signal);
}

int32_t q_placedetailsreply_qbase_receivers(void* self, const char* signal) {
    return QPlaceDetailsReply_QBaseReceivers((QPlaceDetailsReply*)self, signal);
}

void q_placedetailsreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceDetailsReply_OnReceivers((QPlaceDetailsReply*)self, (intptr_t)callback);
}

bool q_placedetailsreply_is_signal_connected(void* self, void* signal) {
    return QPlaceDetailsReply_IsSignalConnected((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

bool q_placedetailsreply_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceDetailsReply_QBaseIsSignalConnected((QPlaceDetailsReply*)self, (QMetaMethod*)signal);
}

void q_placedetailsreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceDetailsReply_OnIsSignalConnected((QPlaceDetailsReply*)self, (intptr_t)callback);
}

void q_placedetailsreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placedetailsreply_delete(void* self) {
    QPlaceDetailsReply_Delete((QPlaceDetailsReply*)(self));
}
