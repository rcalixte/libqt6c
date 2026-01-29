#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libthumbnailcreator.hpp"
#include "libthumbnailcreator.h"

KIO__ThumbnailRequest* k_io__thumbnailrequest_new(void* url, void* targetSize, const char* mimeType, double dpr, float sequenceIndex) {
    return KIO__ThumbnailRequest_new((QUrl*)url, (QSize*)targetSize, qstring(mimeType), dpr, sequenceIndex);
}

KIO__ThumbnailRequest* k_io__thumbnailrequest_new2(void* param1) {
    return KIO__ThumbnailRequest_new2((KIO__ThumbnailRequest*)param1);
}

void k_io__thumbnailrequest_operator_assign(void* self, void* param1) {
    KIO__ThumbnailRequest_OperatorAssign((KIO__ThumbnailRequest*)self, (KIO__ThumbnailRequest*)param1);
}

QUrl* k_io__thumbnailrequest_url(void* self) {
    return KIO__ThumbnailRequest_Url((KIO__ThumbnailRequest*)self);
}

QSize* k_io__thumbnailrequest_target_size(void* self) {
    return KIO__ThumbnailRequest_TargetSize((KIO__ThumbnailRequest*)self);
}

const char* k_io__thumbnailrequest_mime_type(void* self) {
    libqt_string _str = KIO__ThumbnailRequest_MimeType((KIO__ThumbnailRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double k_io__thumbnailrequest_device_pixel_ratio(void* self) {
    return KIO__ThumbnailRequest_DevicePixelRatio((KIO__ThumbnailRequest*)self);
}

float k_io__thumbnailrequest_sequence_index(void* self) {
    return KIO__ThumbnailRequest_SequenceIndex((KIO__ThumbnailRequest*)self);
}

void k_io__thumbnailrequest_delete(void* self) {
    KIO__ThumbnailRequest_Delete((KIO__ThumbnailRequest*)(self));
}

KIO__ThumbnailResult* k_io__thumbnailresult_new(void* param1) {
    return KIO__ThumbnailResult_new((KIO__ThumbnailResult*)param1);
}

void k_io__thumbnailresult_operator_assign(void* self, void* param1) {
    KIO__ThumbnailResult_OperatorAssign((KIO__ThumbnailResult*)self, (KIO__ThumbnailResult*)param1);
}

QImage* k_io__thumbnailresult_image(void* self) {
    return KIO__ThumbnailResult_Image((KIO__ThumbnailResult*)self);
}

bool k_io__thumbnailresult_is_valid(void* self) {
    return KIO__ThumbnailResult_IsValid((KIO__ThumbnailResult*)self);
}

float k_io__thumbnailresult_sequence_index_wraparound_point(void* self) {
    return KIO__ThumbnailResult_SequenceIndexWraparoundPoint((KIO__ThumbnailResult*)self);
}

void k_io__thumbnailresult_set_sequence_index_wraparound_point(void* self, float wraparoundPoint) {
    KIO__ThumbnailResult_SetSequenceIndexWraparoundPoint((KIO__ThumbnailResult*)self, wraparoundPoint);
}

KIO__ThumbnailResult* k_io__thumbnailresult_pass(void* image) {
    return KIO__ThumbnailResult_Pass((QImage*)image);
}

KIO__ThumbnailResult* k_io__thumbnailresult_fail() {
    return KIO__ThumbnailResult_Fail();
}

void k_io__thumbnailresult_delete(void* self) {
    KIO__ThumbnailResult_Delete((KIO__ThumbnailResult*)(self));
}

KIO__ThumbnailCreator* k_io__thumbnailcreator_new(void* parent, libqt_list /* of QVariant* */ args) {
    return KIO__ThumbnailCreator_new((QObject*)parent, args);
}

const QMetaObject* k_io__thumbnailcreator_meta_object(void* self) {
    return KIO__ThumbnailCreator_MetaObject((KIO__ThumbnailCreator*)self);
}

void k_io__thumbnailcreator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__ThumbnailCreator_OnMetaObject((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

const QMetaObject* k_io__thumbnailcreator_qbase_meta_object(void* self) {
    return KIO__ThumbnailCreator_QBaseMetaObject((KIO__ThumbnailCreator*)self);
}

void* k_io__thumbnailcreator_metacast(void* self, const char* param1) {
    return KIO__ThumbnailCreator_Metacast((KIO__ThumbnailCreator*)self, param1);
}

void k_io__thumbnailcreator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__ThumbnailCreator_OnMetacast((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void* k_io__thumbnailcreator_qbase_metacast(void* self, const char* param1) {
    return KIO__ThumbnailCreator_QBaseMetacast((KIO__ThumbnailCreator*)self, param1);
}

int32_t k_io__thumbnailcreator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ThumbnailCreator_Metacall((KIO__ThumbnailCreator*)self, param1, param2, param3);
}

void k_io__thumbnailcreator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__ThumbnailCreator_OnMetacall((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

int32_t k_io__thumbnailcreator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ThumbnailCreator_QBaseMetacall((KIO__ThumbnailCreator*)self, param1, param2, param3);
}

const char* k_io__thumbnailcreator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__ThumbnailResult* k_io__thumbnailcreator_create(void* self, void* request) {
    return KIO__ThumbnailCreator_Create((KIO__ThumbnailCreator*)self, (KIO__ThumbnailRequest*)request);
}

void k_io__thumbnailcreator_on_create(void* self, KIO__ThumbnailResult* (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnCreate((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

KIO__ThumbnailResult* k_io__thumbnailcreator_qbase_create(void* self, void* request) {
    return KIO__ThumbnailCreator_QBaseCreate((KIO__ThumbnailCreator*)self, (KIO__ThumbnailRequest*)request);
}

const char* k_io__thumbnailcreator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__thumbnailcreator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__thumbnailcreator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__thumbnailcreator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__thumbnailcreator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__thumbnailcreator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__thumbnailcreator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__thumbnailcreator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__thumbnailcreator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__thumbnailcreator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__thumbnailcreator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__thumbnailcreator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__thumbnailcreator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__thumbnailcreator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__thumbnailcreator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__thumbnailcreator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__thumbnailcreator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__thumbnailcreator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__thumbnailcreator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__thumbnailcreator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__thumbnailcreator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__thumbnailcreator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__thumbnailcreator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__thumbnailcreator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__thumbnailcreator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__thumbnailcreator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__thumbnailcreator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__thumbnailcreator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__thumbnailcreator_dynamic_property_names\n");
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

QBindingStorage* k_io__thumbnailcreator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__thumbnailcreator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__thumbnailcreator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__thumbnailcreator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__thumbnailcreator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__thumbnailcreator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__thumbnailcreator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__thumbnailcreator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__thumbnailcreator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__thumbnailcreator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__thumbnailcreator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__thumbnailcreator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__thumbnailcreator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__thumbnailcreator_event(void* self, void* event) {
    return KIO__ThumbnailCreator_Event((KIO__ThumbnailCreator*)self, (QEvent*)event);
}

bool k_io__thumbnailcreator_qbase_event(void* self, void* event) {
    return KIO__ThumbnailCreator_QBaseEvent((KIO__ThumbnailCreator*)self, (QEvent*)event);
}

void k_io__thumbnailcreator_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnEvent((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

bool k_io__thumbnailcreator_event_filter(void* self, void* watched, void* event) {
    return KIO__ThumbnailCreator_EventFilter((KIO__ThumbnailCreator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__thumbnailcreator_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__ThumbnailCreator_QBaseEventFilter((KIO__ThumbnailCreator*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__thumbnailcreator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__ThumbnailCreator_OnEventFilter((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_timer_event(void* self, void* event) {
    KIO__ThumbnailCreator_TimerEvent((KIO__ThumbnailCreator*)self, (QTimerEvent*)event);
}

void k_io__thumbnailcreator_qbase_timer_event(void* self, void* event) {
    KIO__ThumbnailCreator_QBaseTimerEvent((KIO__ThumbnailCreator*)self, (QTimerEvent*)event);
}

void k_io__thumbnailcreator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnTimerEvent((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_child_event(void* self, void* event) {
    KIO__ThumbnailCreator_ChildEvent((KIO__ThumbnailCreator*)self, (QChildEvent*)event);
}

void k_io__thumbnailcreator_qbase_child_event(void* self, void* event) {
    KIO__ThumbnailCreator_QBaseChildEvent((KIO__ThumbnailCreator*)self, (QChildEvent*)event);
}

void k_io__thumbnailcreator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnChildEvent((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_custom_event(void* self, void* event) {
    KIO__ThumbnailCreator_CustomEvent((KIO__ThumbnailCreator*)self, (QEvent*)event);
}

void k_io__thumbnailcreator_qbase_custom_event(void* self, void* event) {
    KIO__ThumbnailCreator_QBaseCustomEvent((KIO__ThumbnailCreator*)self, (QEvent*)event);
}

void k_io__thumbnailcreator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnCustomEvent((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_connect_notify(void* self, void* signal) {
    KIO__ThumbnailCreator_ConnectNotify((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

void k_io__thumbnailcreator_qbase_connect_notify(void* self, void* signal) {
    KIO__ThumbnailCreator_QBaseConnectNotify((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

void k_io__thumbnailcreator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnConnectNotify((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_disconnect_notify(void* self, void* signal) {
    KIO__ThumbnailCreator_DisconnectNotify((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

void k_io__thumbnailcreator_qbase_disconnect_notify(void* self, void* signal) {
    KIO__ThumbnailCreator_QBaseDisconnectNotify((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

void k_io__thumbnailcreator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnDisconnectNotify((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

QObject* k_io__thumbnailcreator_sender(void* self) {
    return KIO__ThumbnailCreator_Sender((KIO__ThumbnailCreator*)self);
}

QObject* k_io__thumbnailcreator_qbase_sender(void* self) {
    return KIO__ThumbnailCreator_QBaseSender((KIO__ThumbnailCreator*)self);
}

void k_io__thumbnailcreator_on_sender(void* self, QObject* (*callback)()) {
    KIO__ThumbnailCreator_OnSender((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

int32_t k_io__thumbnailcreator_sender_signal_index(void* self) {
    return KIO__ThumbnailCreator_SenderSignalIndex((KIO__ThumbnailCreator*)self);
}

int32_t k_io__thumbnailcreator_qbase_sender_signal_index(void* self) {
    return KIO__ThumbnailCreator_QBaseSenderSignalIndex((KIO__ThumbnailCreator*)self);
}

void k_io__thumbnailcreator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__ThumbnailCreator_OnSenderSignalIndex((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

int32_t k_io__thumbnailcreator_receivers(void* self, const char* signal) {
    return KIO__ThumbnailCreator_Receivers((KIO__ThumbnailCreator*)self, signal);
}

int32_t k_io__thumbnailcreator_qbase_receivers(void* self, const char* signal) {
    return KIO__ThumbnailCreator_QBaseReceivers((KIO__ThumbnailCreator*)self, signal);
}

void k_io__thumbnailcreator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__ThumbnailCreator_OnReceivers((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

bool k_io__thumbnailcreator_is_signal_connected(void* self, void* signal) {
    return KIO__ThumbnailCreator_IsSignalConnected((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

bool k_io__thumbnailcreator_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__ThumbnailCreator_QBaseIsSignalConnected((KIO__ThumbnailCreator*)self, (QMetaMethod*)signal);
}

void k_io__thumbnailcreator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__ThumbnailCreator_OnIsSignalConnected((KIO__ThumbnailCreator*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__thumbnailcreator_delete(void* self) {
    KIO__ThumbnailCreator_Delete((KIO__ThumbnailCreator*)(self));
}
