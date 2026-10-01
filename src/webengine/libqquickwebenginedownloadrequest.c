#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebenginedownloadrequest.hpp"
#include "libqquickwebenginedownloadrequest.hpp"
#include "libqquickwebenginedownloadrequest.h"

const QMetaObject* q_quickwebenginedownloadrequest_meta_object(const void* self) {
    return QQuickWebEngineDownloadRequest_MetaObject((QQuickWebEngineDownloadRequest*)self);
}

void* q_quickwebenginedownloadrequest_metacast(void* self, const char* param1) {
    return QQuickWebEngineDownloadRequest_Metacast((QQuickWebEngineDownloadRequest*)self, param1);
}

int32_t q_quickwebenginedownloadrequest_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWebEngineDownloadRequest_Metacall((QQuickWebEngineDownloadRequest*)self, param1, param2, param3);
}

const char* q_quickwebenginedownloadrequest_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebenginedownloadrequest_qml_marker_uncreatable(void* self) {
    QQuickWebEngineDownloadRequest_QmlMarkerUncreatable((QQuickWebEngineDownloadRequest*)self);
}

const char* q_quickwebenginedownloadrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwebenginedownloadrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_quickwebenginedownloadrequest_id(const void* self) {
    return QWebEngineDownloadRequest_Id((QWebEngineDownloadRequest*)self);
}

int32_t q_quickwebenginedownloadrequest_state(const void* self) {
    return QWebEngineDownloadRequest_State((QWebEngineDownloadRequest*)self);
}

int64_t q_quickwebenginedownloadrequest_total_bytes(const void* self) {
    return QWebEngineDownloadRequest_TotalBytes((QWebEngineDownloadRequest*)self);
}

int64_t q_quickwebenginedownloadrequest_received_bytes(const void* self) {
    return QWebEngineDownloadRequest_ReceivedBytes((QWebEngineDownloadRequest*)self);
}

QUrl* q_quickwebenginedownloadrequest_url(const void* self) {
    return QWebEngineDownloadRequest_Url((QWebEngineDownloadRequest*)self);
}

const char* q_quickwebenginedownloadrequest_mime_type(const void* self) {
    libqt_string _str = QWebEngineDownloadRequest_MimeType((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_quickwebenginedownloadrequest_is_finished(const void* self) {
    return QWebEngineDownloadRequest_IsFinished((QWebEngineDownloadRequest*)self);
}

bool q_quickwebenginedownloadrequest_is_paused(const void* self) {
    return QWebEngineDownloadRequest_IsPaused((QWebEngineDownloadRequest*)self);
}

int32_t q_quickwebenginedownloadrequest_save_page_format(const void* self) {
    return QWebEngineDownloadRequest_SavePageFormat((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_set_save_page_format(void* self, int32_t format) {
    QWebEngineDownloadRequest_SetSavePageFormat((QWebEngineDownloadRequest*)self, format);
}

int32_t q_quickwebenginedownloadrequest_interrupt_reason(const void* self) {
    return QWebEngineDownloadRequest_InterruptReason((QWebEngineDownloadRequest*)self);
}

const char* q_quickwebenginedownloadrequest_interrupt_reason_string(const void* self) {
    libqt_string _str = QWebEngineDownloadRequest_InterruptReasonString((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_quickwebenginedownloadrequest_is_save_page_download(const void* self) {
    return QWebEngineDownloadRequest_IsSavePageDownload((QWebEngineDownloadRequest*)self);
}

const char* q_quickwebenginedownloadrequest_suggested_file_name(const void* self) {
    libqt_string _str = QWebEngineDownloadRequest_SuggestedFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwebenginedownloadrequest_download_directory(const void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadDirectory((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebenginedownloadrequest_set_download_directory(void* self, const char* directory) {
    QWebEngineDownloadRequest_SetDownloadDirectory((QWebEngineDownloadRequest*)self, qstring(directory));
}

const char* q_quickwebenginedownloadrequest_download_file_name(const void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebenginedownloadrequest_set_download_file_name(void* self, const char* fileName) {
    QWebEngineDownloadRequest_SetDownloadFileName((QWebEngineDownloadRequest*)self, qstring(fileName));
}

QWebEnginePage* q_quickwebenginedownloadrequest_page(const void* self) {
    return QWebEngineDownloadRequest_Page((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_accept(void* self) {
    QWebEngineDownloadRequest_Accept((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_cancel(void* self) {
    QWebEngineDownloadRequest_Cancel((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_pause(void* self) {
    QWebEngineDownloadRequest_Pause((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_resume(void* self) {
    QWebEngineDownloadRequest_Resume((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_state_changed(void* self, int32_t state) {
    QWebEngineDownloadRequest_StateChanged((QWebEngineDownloadRequest*)self, state);
}

void q_quickwebenginedownloadrequest_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWebEngineDownloadRequest_Connect_StateChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_save_page_format_changed(void* self) {
    QWebEngineDownloadRequest_SavePageFormatChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_save_page_format_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_SavePageFormatChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_received_bytes_changed(void* self) {
    QWebEngineDownloadRequest_ReceivedBytesChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_received_bytes_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_ReceivedBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_total_bytes_changed(void* self) {
    QWebEngineDownloadRequest_TotalBytesChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_total_bytes_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_TotalBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_interrupt_reason_changed(void* self) {
    QWebEngineDownloadRequest_InterruptReasonChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_InterruptReasonChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_is_finished_changed(void* self) {
    QWebEngineDownloadRequest_IsFinishedChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_is_finished_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_IsFinishedChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_is_paused_changed(void* self) {
    QWebEngineDownloadRequest_IsPausedChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_is_paused_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_IsPausedChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_download_directory_changed(void* self) {
    QWebEngineDownloadRequest_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_download_directory_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_download_file_name_changed(void* self) {
    QWebEngineDownloadRequest_DownloadFileNameChanged((QWebEngineDownloadRequest*)self);
}

void q_quickwebenginedownloadrequest_on_download_file_name_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadFileNameChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

bool q_quickwebenginedownloadrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_quickwebenginedownloadrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_quickwebenginedownloadrequest_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebenginedownloadrequest_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickwebenginedownloadrequest_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickwebenginedownloadrequest_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickwebenginedownloadrequest_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickwebenginedownloadrequest_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickwebenginedownloadrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickwebenginedownloadrequest_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickwebenginedownloadrequest_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickwebenginedownloadrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickwebenginedownloadrequest_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickwebenginedownloadrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickwebenginedownloadrequest_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickwebenginedownloadrequest_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickwebenginedownloadrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickwebenginedownloadrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickwebenginedownloadrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickwebenginedownloadrequest_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickwebenginedownloadrequest_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickwebenginedownloadrequest_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickwebenginedownloadrequest_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickwebenginedownloadrequest_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickwebenginedownloadrequest_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickwebenginedownloadrequest_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickwebenginedownloadrequest_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickwebenginedownloadrequest_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickwebenginedownloadrequest_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwebenginedownloadrequest_dynamic_property_names\n");
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

QBindingStorage* q_quickwebenginedownloadrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickwebenginedownloadrequest_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickwebenginedownloadrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickwebenginedownloadrequest_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickwebenginedownloadrequest_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickwebenginedownloadrequest_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickwebenginedownloadrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickwebenginedownloadrequest_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickwebenginedownloadrequest_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickwebenginedownloadrequest_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickwebenginedownloadrequest_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickwebenginedownloadrequest_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickwebenginedownloadrequest_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickwebenginedownloadrequest_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickwebenginedownloadrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickwebenginedownloadrequest_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickwebenginedownloadrequest_delete(void* self) {
    QQuickWebEngineDownloadRequest_Delete((QQuickWebEngineDownloadRequest*)(self));
}
