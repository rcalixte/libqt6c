#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplace.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacereply.hpp"
#include "libqplacematchreply.hpp"
#include "libqplacematchreply.h"

QPlaceMatchReply* q_placematchreply_new() {
    return QPlaceMatchReply_New();
}

QPlaceMatchReply* q_placematchreply_new2(void* parent) {
    return QPlaceMatchReply_New2((QObject*)parent);
}

const QMetaObject* q_placematchreply_meta_object(const void* self) {
    return QPlaceMatchReply_MetaObject((QPlaceMatchReply*)self);
}

void q_placematchreply_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QPlaceMatchReply_OnMetaObject((QPlaceMatchReply*)self, (intptr_t)callback);
}

const QMetaObject* q_placematchreply_super_meta_object(const void* self) {
    return QPlaceMatchReply_SuperMetaObject((QPlaceMatchReply*)self);
}

void* q_placematchreply_metacast(void* self, const char* param1) {
    return QPlaceMatchReply_Metacast((QPlaceMatchReply*)self, param1);
}

void q_placematchreply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceMatchReply_OnMetacast((QPlaceMatchReply*)self, (intptr_t)callback);
}

void* q_placematchreply_super_metacast(void* self, const char* param1) {
    return QPlaceMatchReply_SuperMetacast((QPlaceMatchReply*)self, param1);
}

int32_t q_placematchreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceMatchReply_Metacall((QPlaceMatchReply*)self, param1, param2, param3);
}

void q_placematchreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceMatchReply_OnMetacall((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceMatchReply_SuperMetacall((QPlaceMatchReply*)self, param1, param2, param3);
}

const char* q_placematchreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placematchreply_type(const void* self) {
    return QPlaceMatchReply_Type((QPlaceMatchReply*)self);
}

void q_placematchreply_on_type(const void* self, int32_t (*callback)(const void*)) {
    QPlaceMatchReply_OnType((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_super_type(const void* self) {
    return QPlaceMatchReply_SuperType((QPlaceMatchReply*)self);
}

libqt_list /* of QPlace* */ q_placematchreply_places(const void* self) {
    libqt_list _arr = QPlaceMatchReply_Places((QPlaceMatchReply*)self);
    return _arr;
}

QPlaceMatchRequest* q_placematchreply_request(const void* self) {
    return QPlaceMatchReply_Request((QPlaceMatchReply*)self);
}

void q_placematchreply_set_places(void* self, libqt_list /* of QPlace* */ results) {
    QPlaceMatchReply_SetPlaces((QPlaceMatchReply*)self, results);
}

void q_placematchreply_set_request(void* self, const void* request) {
    QPlaceMatchReply_SetRequest((QPlaceMatchReply*)self, (QPlaceMatchRequest*)request);
}

const char* q_placematchreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placematchreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placematchreply_is_finished(const void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placematchreply_error_string(const void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placematchreply_error(const void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placematchreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placematchreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placematchreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placematchreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placematchreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placematchreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placematchreply_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placematchreply_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placematchreply_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placematchreply_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placematchreply_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placematchreply_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placematchreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placematchreply_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placematchreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placematchreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placematchreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placematchreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placematchreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placematchreply_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placematchreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placematchreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placematchreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placematchreply_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_placematchreply_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placematchreply_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placematchreply_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_placematchreply_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placematchreply_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_placematchreply_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_placematchreply_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_placematchreply_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placematchreply_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placematchreply_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placematchreply_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placematchreply_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placematchreply_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_placematchreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placematchreply_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placematchreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placematchreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placematchreply_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placematchreply_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placematchreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_placematchreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placematchreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placematchreply_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_placematchreply_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placematchreply_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_placematchreply_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_placematchreply_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_placematchreply_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_placematchreply_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_placematchreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placematchreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placematchreply_abort(void* self) {
    QPlaceMatchReply_Abort((QPlaceMatchReply*)self);
}

void q_placematchreply_super_abort(void* self) {
    QPlaceMatchReply_SuperAbort((QPlaceMatchReply*)self);
}

void q_placematchreply_on_abort(void* self, void (*callback)(void*)) {
    QPlaceMatchReply_OnAbort((QPlaceMatchReply*)self, (intptr_t)callback);
}

bool q_placematchreply_event(void* self, void* event) {
    return QPlaceMatchReply_Event((QPlaceMatchReply*)self, (QEvent*)event);
}

bool q_placematchreply_super_event(void* self, void* event) {
    return QPlaceMatchReply_SuperEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceMatchReply_OnEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

bool q_placematchreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceMatchReply_EventFilter((QPlaceMatchReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placematchreply_super_event_filter(void* self, void* watched, void* event) {
    return QPlaceMatchReply_SuperEventFilter((QPlaceMatchReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placematchreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceMatchReply_OnEventFilter((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_timer_event(void* self, void* event) {
    QPlaceMatchReply_TimerEvent((QPlaceMatchReply*)self, (QTimerEvent*)event);
}

void q_placematchreply_super_timer_event(void* self, void* event) {
    QPlaceMatchReply_SuperTimerEvent((QPlaceMatchReply*)self, (QTimerEvent*)event);
}

void q_placematchreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnTimerEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_child_event(void* self, void* event) {
    QPlaceMatchReply_ChildEvent((QPlaceMatchReply*)self, (QChildEvent*)event);
}

void q_placematchreply_super_child_event(void* self, void* event) {
    QPlaceMatchReply_SuperChildEvent((QPlaceMatchReply*)self, (QChildEvent*)event);
}

void q_placematchreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnChildEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_custom_event(void* self, void* event) {
    QPlaceMatchReply_CustomEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_super_custom_event(void* self, void* event) {
    QPlaceMatchReply_SuperCustomEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnCustomEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_connect_notify(void* self, const void* signal) {
    QPlaceMatchReply_ConnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_super_connect_notify(void* self, const void* signal) {
    QPlaceMatchReply_SuperConnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QPlaceMatchReply_OnConnectNotify((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_disconnect_notify(void* self, const void* signal) {
    QPlaceMatchReply_DisconnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_super_disconnect_notify(void* self, const void* signal) {
    QPlaceMatchReply_SuperDisconnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QPlaceMatchReply_OnDisconnectNotify((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_set_finished(void* self, bool finished) {
    QPlaceMatchReply_SetFinished((QPlaceMatchReply*)self, finished);
}

void q_placematchreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceMatchReply_SetError((QPlaceMatchReply*)self, error, qstring(errorString));
}

QObject* q_placematchreply_sender(const void* self) {
    return QPlaceMatchReply_Sender((QPlaceMatchReply*)self);
}

int32_t q_placematchreply_sender_signal_index(const void* self) {
    return QPlaceMatchReply_SenderSignalIndex((QPlaceMatchReply*)self);
}

int32_t q_placematchreply_receivers(const void* self, const char* signal) {
    return QPlaceMatchReply_Receivers((QPlaceMatchReply*)self, signal);
}

bool q_placematchreply_is_signal_connected(const void* self, const void* signal) {
    return QPlaceMatchReply_IsSignalConnected((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placematchreply_delete(void* self) {
    QPlaceMatchReply_Delete((QPlaceMatchReply*)(self));
}
