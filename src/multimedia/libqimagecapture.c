#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediametadata.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "libqvideoframe.hpp"
#include "libqimagecapture.hpp"
#include "libqimagecapture.h"

QImageCapture* q_imagecapture_new() {
    return QImageCapture_new();
}

QImageCapture* q_imagecapture_new2(void* parent) {
    return QImageCapture_new2((QObject*)parent);
}

const QMetaObject* q_imagecapture_meta_object(void* self) {
    return QImageCapture_MetaObject((QImageCapture*)self);
}

void* q_imagecapture_metacast(void* self, const char* param1) {
    return QImageCapture_Metacast((QImageCapture*)self, param1);
}

int32_t q_imagecapture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QImageCapture_Metacall((QImageCapture*)self, param1, param2, param3);
}

void q_imagecapture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QImageCapture_OnMetacall((QImageCapture*)self, (intptr_t)callback);
}

int32_t q_imagecapture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QImageCapture_QBaseMetacall((QImageCapture*)self, param1, param2, param3);
}

const char* q_imagecapture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imagecapture_is_available(void* self) {
    return QImageCapture_IsAvailable((QImageCapture*)self);
}

QMediaCaptureSession* q_imagecapture_capture_session(void* self) {
    return QImageCapture_CaptureSession((QImageCapture*)self);
}

int32_t q_imagecapture_error(void* self) {
    return QImageCapture_Error((QImageCapture*)self);
}

const char* q_imagecapture_error_string(void* self) {
    libqt_string _str = QImageCapture_ErrorString((QImageCapture*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imagecapture_is_ready_for_capture(void* self) {
    return QImageCapture_IsReadyForCapture((QImageCapture*)self);
}

int32_t q_imagecapture_file_format(void* self) {
    return QImageCapture_FileFormat((QImageCapture*)self);
}

void q_imagecapture_set_file_format(void* self, int32_t format) {
    QImageCapture_SetFileFormat((QImageCapture*)self, format);
}

libqt_list /* of enum QImageCapture__FileFormat */ q_imagecapture_supported_formats() {
    libqt_list _arr = QImageCapture_SupportedFormats();
    return _arr;
}

const char* q_imagecapture_file_format_name(int32_t c) {
    libqt_string _str = QImageCapture_FileFormatName(c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imagecapture_file_format_description(int32_t c) {
    libqt_string _str = QImageCapture_FileFormatDescription(c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_imagecapture_resolution(void* self) {
    return QImageCapture_Resolution((QImageCapture*)self);
}

void q_imagecapture_set_resolution(void* self, void* resolution) {
    QImageCapture_SetResolution((QImageCapture*)self, (QSize*)resolution);
}

void q_imagecapture_set_resolution2(void* self, int width, int height) {
    QImageCapture_SetResolution2((QImageCapture*)self, width, height);
}

int32_t q_imagecapture_quality(void* self) {
    return QImageCapture_Quality((QImageCapture*)self);
}

void q_imagecapture_set_quality(void* self, int32_t quality) {
    QImageCapture_SetQuality((QImageCapture*)self, quality);
}

QMediaMetaData* q_imagecapture_meta_data(void* self) {
    return QImageCapture_MetaData((QImageCapture*)self);
}

void q_imagecapture_set_meta_data(void* self, void* metaData) {
    QImageCapture_SetMetaData((QImageCapture*)self, (QMediaMetaData*)metaData);
}

void q_imagecapture_add_meta_data(void* self, void* metaData) {
    QImageCapture_AddMetaData((QImageCapture*)self, (QMediaMetaData*)metaData);
}

int32_t q_imagecapture_capture_to_file(void* self) {
    return QImageCapture_CaptureToFile((QImageCapture*)self);
}

int32_t q_imagecapture_capture(void* self) {
    return QImageCapture_Capture((QImageCapture*)self);
}

void q_imagecapture_error_changed(void* self) {
    QImageCapture_ErrorChanged((QImageCapture*)self);
}

void q_imagecapture_on_error_changed(void* self, void (*callback)(void*)) {
    QImageCapture_Connect_ErrorChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_error_occurred(void* self, int id, int32_t error, const char* errorString) {
    QImageCapture_ErrorOccurred((QImageCapture*)self, id, error, qstring(errorString));
}

void q_imagecapture_on_error_occurred(void* self, void (*callback)(void*, int, int32_t, const char*)) {
    QImageCapture_Connect_ErrorOccurred((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_ready_for_capture_changed(void* self, bool ready) {
    QImageCapture_ReadyForCaptureChanged((QImageCapture*)self, ready);
}

void q_imagecapture_on_ready_for_capture_changed(void* self, void (*callback)(void*, bool)) {
    QImageCapture_Connect_ReadyForCaptureChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_meta_data_changed(void* self) {
    QImageCapture_MetaDataChanged((QImageCapture*)self);
}

void q_imagecapture_on_meta_data_changed(void* self, void (*callback)(void*)) {
    QImageCapture_Connect_MetaDataChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_file_format_changed(void* self) {
    QImageCapture_FileFormatChanged((QImageCapture*)self);
}

void q_imagecapture_on_file_format_changed(void* self, void (*callback)(void*)) {
    QImageCapture_Connect_FileFormatChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_quality_changed(void* self) {
    QImageCapture_QualityChanged((QImageCapture*)self);
}

void q_imagecapture_on_quality_changed(void* self, void (*callback)(void*)) {
    QImageCapture_Connect_QualityChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_resolution_changed(void* self) {
    QImageCapture_ResolutionChanged((QImageCapture*)self);
}

void q_imagecapture_on_resolution_changed(void* self, void (*callback)(void*)) {
    QImageCapture_Connect_ResolutionChanged((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_image_exposed(void* self, int id) {
    QImageCapture_ImageExposed((QImageCapture*)self, id);
}

void q_imagecapture_on_image_exposed(void* self, void (*callback)(void*, int)) {
    QImageCapture_Connect_ImageExposed((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_image_captured(void* self, int id, void* preview) {
    QImageCapture_ImageCaptured((QImageCapture*)self, id, (QImage*)preview);
}

void q_imagecapture_on_image_captured(void* self, void (*callback)(void*, int, void*)) {
    QImageCapture_Connect_ImageCaptured((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_image_metadata_available(void* self, int id, void* metaData) {
    QImageCapture_ImageMetadataAvailable((QImageCapture*)self, id, (QMediaMetaData*)metaData);
}

void q_imagecapture_on_image_metadata_available(void* self, void (*callback)(void*, int, void*)) {
    QImageCapture_Connect_ImageMetadataAvailable((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_image_available(void* self, int id, void* frame) {
    QImageCapture_ImageAvailable((QImageCapture*)self, id, (QVideoFrame*)frame);
}

void q_imagecapture_on_image_available(void* self, void (*callback)(void*, int, void*)) {
    QImageCapture_Connect_ImageAvailable((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_image_saved(void* self, int id, const char* fileName) {
    QImageCapture_ImageSaved((QImageCapture*)self, id, qstring(fileName));
}

void q_imagecapture_on_image_saved(void* self, void (*callback)(void*, int, const char*)) {
    QImageCapture_Connect_ImageSaved((QImageCapture*)self, (intptr_t)callback);
}

const char* q_imagecapture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imagecapture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_imagecapture_capture_to_file1(void* self, const char* location) {
    return QImageCapture_CaptureToFile1((QImageCapture*)self, qstring(location));
}

const char* q_imagecapture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagecapture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_imagecapture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_imagecapture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_imagecapture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_imagecapture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_imagecapture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_imagecapture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_imagecapture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_imagecapture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_imagecapture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_imagecapture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_imagecapture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_imagecapture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_imagecapture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_imagecapture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_imagecapture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_imagecapture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_imagecapture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_imagecapture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_imagecapture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_imagecapture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_imagecapture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_imagecapture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_imagecapture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_imagecapture_dynamic_property_names\n");
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

QBindingStorage* q_imagecapture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_imagecapture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_imagecapture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_imagecapture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_imagecapture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_imagecapture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_imagecapture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_imagecapture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_imagecapture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_imagecapture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_imagecapture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_imagecapture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_imagecapture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_imagecapture_event(void* self, void* event) {
    return QImageCapture_Event((QImageCapture*)self, (QEvent*)event);
}

bool q_imagecapture_qbase_event(void* self, void* event) {
    return QImageCapture_QBaseEvent((QImageCapture*)self, (QEvent*)event);
}

void q_imagecapture_on_event(void* self, bool (*callback)(void*, void*)) {
    QImageCapture_OnEvent((QImageCapture*)self, (intptr_t)callback);
}

bool q_imagecapture_event_filter(void* self, void* watched, void* event) {
    return QImageCapture_EventFilter((QImageCapture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_imagecapture_qbase_event_filter(void* self, void* watched, void* event) {
    return QImageCapture_QBaseEventFilter((QImageCapture*)self, (QObject*)watched, (QEvent*)event);
}

void q_imagecapture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QImageCapture_OnEventFilter((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_timer_event(void* self, void* event) {
    QImageCapture_TimerEvent((QImageCapture*)self, (QTimerEvent*)event);
}

void q_imagecapture_qbase_timer_event(void* self, void* event) {
    QImageCapture_QBaseTimerEvent((QImageCapture*)self, (QTimerEvent*)event);
}

void q_imagecapture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QImageCapture_OnTimerEvent((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_child_event(void* self, void* event) {
    QImageCapture_ChildEvent((QImageCapture*)self, (QChildEvent*)event);
}

void q_imagecapture_qbase_child_event(void* self, void* event) {
    QImageCapture_QBaseChildEvent((QImageCapture*)self, (QChildEvent*)event);
}

void q_imagecapture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QImageCapture_OnChildEvent((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_custom_event(void* self, void* event) {
    QImageCapture_CustomEvent((QImageCapture*)self, (QEvent*)event);
}

void q_imagecapture_qbase_custom_event(void* self, void* event) {
    QImageCapture_QBaseCustomEvent((QImageCapture*)self, (QEvent*)event);
}

void q_imagecapture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QImageCapture_OnCustomEvent((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_connect_notify(void* self, void* signal) {
    QImageCapture_ConnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

void q_imagecapture_qbase_connect_notify(void* self, void* signal) {
    QImageCapture_QBaseConnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

void q_imagecapture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QImageCapture_OnConnectNotify((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_disconnect_notify(void* self, void* signal) {
    QImageCapture_DisconnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

void q_imagecapture_qbase_disconnect_notify(void* self, void* signal) {
    QImageCapture_QBaseDisconnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

void q_imagecapture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QImageCapture_OnDisconnectNotify((QImageCapture*)self, (intptr_t)callback);
}

QObject* q_imagecapture_sender(void* self) {
    return QImageCapture_Sender((QImageCapture*)self);
}

QObject* q_imagecapture_qbase_sender(void* self) {
    return QImageCapture_QBaseSender((QImageCapture*)self);
}

void q_imagecapture_on_sender(void* self, QObject* (*callback)()) {
    QImageCapture_OnSender((QImageCapture*)self, (intptr_t)callback);
}

int32_t q_imagecapture_sender_signal_index(void* self) {
    return QImageCapture_SenderSignalIndex((QImageCapture*)self);
}

int32_t q_imagecapture_qbase_sender_signal_index(void* self) {
    return QImageCapture_QBaseSenderSignalIndex((QImageCapture*)self);
}

void q_imagecapture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QImageCapture_OnSenderSignalIndex((QImageCapture*)self, (intptr_t)callback);
}

int32_t q_imagecapture_receivers(void* self, const char* signal) {
    return QImageCapture_Receivers((QImageCapture*)self, signal);
}

int32_t q_imagecapture_qbase_receivers(void* self, const char* signal) {
    return QImageCapture_QBaseReceivers((QImageCapture*)self, signal);
}

void q_imagecapture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QImageCapture_OnReceivers((QImageCapture*)self, (intptr_t)callback);
}

bool q_imagecapture_is_signal_connected(void* self, void* signal) {
    return QImageCapture_IsSignalConnected((QImageCapture*)self, (QMetaMethod*)signal);
}

bool q_imagecapture_qbase_is_signal_connected(void* self, void* signal) {
    return QImageCapture_QBaseIsSignalConnected((QImageCapture*)self, (QMetaMethod*)signal);
}

void q_imagecapture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QImageCapture_OnIsSignalConnected((QImageCapture*)self, (intptr_t)callback);
}

void q_imagecapture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_imagecapture_delete(void* self) {
    QImageCapture_Delete((QImageCapture*)(self));
}
