#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebenginedownloadrequest.hpp"
#include "libqwebenginedownloadrequest.h"

const QMetaObject* q_webenginedownloadrequest_meta_object(void* self) {
    return QWebEngineDownloadRequest_MetaObject((QWebEngineDownloadRequest*)self);
}

void* q_webenginedownloadrequest_metacast(void* self, const char* param1) {
    return QWebEngineDownloadRequest_Metacast((QWebEngineDownloadRequest*)self, param1);
}

int32_t q_webenginedownloadrequest_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineDownloadRequest_Metacall((QWebEngineDownloadRequest*)self, param1, param2, param3);
}

const char* q_webenginedownloadrequest_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_webenginedownloadrequest_id(void* self) {
    return QWebEngineDownloadRequest_Id((QWebEngineDownloadRequest*)self);
}

int32_t q_webenginedownloadrequest_state(void* self) {
    return QWebEngineDownloadRequest_State((QWebEngineDownloadRequest*)self);
}

long long q_webenginedownloadrequest_total_bytes(void* self) {
    return QWebEngineDownloadRequest_TotalBytes((QWebEngineDownloadRequest*)self);
}

long long q_webenginedownloadrequest_received_bytes(void* self) {
    return QWebEngineDownloadRequest_ReceivedBytes((QWebEngineDownloadRequest*)self);
}

QUrl* q_webenginedownloadrequest_url(void* self) {
    return QWebEngineDownloadRequest_Url((QWebEngineDownloadRequest*)self);
}

const char* q_webenginedownloadrequest_mime_type(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_MimeType((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginedownloadrequest_is_finished(void* self) {
    return QWebEngineDownloadRequest_IsFinished((QWebEngineDownloadRequest*)self);
}

bool q_webenginedownloadrequest_is_paused(void* self) {
    return QWebEngineDownloadRequest_IsPaused((QWebEngineDownloadRequest*)self);
}

int32_t q_webenginedownloadrequest_save_page_format(void* self) {
    return QWebEngineDownloadRequest_SavePageFormat((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_set_save_page_format(void* self, int32_t format) {
    QWebEngineDownloadRequest_SetSavePageFormat((QWebEngineDownloadRequest*)self, format);
}

int32_t q_webenginedownloadrequest_interrupt_reason(void* self) {
    return QWebEngineDownloadRequest_InterruptReason((QWebEngineDownloadRequest*)self);
}

const char* q_webenginedownloadrequest_interrupt_reason_string(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_InterruptReasonString((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginedownloadrequest_is_save_page_download(void* self) {
    return QWebEngineDownloadRequest_IsSavePageDownload((QWebEngineDownloadRequest*)self);
}

const char* q_webenginedownloadrequest_suggested_file_name(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_SuggestedFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginedownloadrequest_download_directory(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadDirectory((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginedownloadrequest_set_download_directory(void* self, const char* directory) {
    QWebEngineDownloadRequest_SetDownloadDirectory((QWebEngineDownloadRequest*)self, qstring(directory));
}

const char* q_webenginedownloadrequest_download_file_name(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginedownloadrequest_set_download_file_name(void* self, const char* fileName) {
    QWebEngineDownloadRequest_SetDownloadFileName((QWebEngineDownloadRequest*)self, qstring(fileName));
}

QWebEnginePage* q_webenginedownloadrequest_page(void* self) {
    return QWebEngineDownloadRequest_Page((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_accept(void* self) {
    QWebEngineDownloadRequest_Accept((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_cancel(void* self) {
    QWebEngineDownloadRequest_Cancel((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_pause(void* self) {
    QWebEngineDownloadRequest_Pause((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_resume(void* self) {
    QWebEngineDownloadRequest_Resume((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_state_changed(void* self, int32_t state) {
    QWebEngineDownloadRequest_StateChanged((QWebEngineDownloadRequest*)self, state);
}

void q_webenginedownloadrequest_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWebEngineDownloadRequest_Connect_StateChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_save_page_format_changed(void* self) {
    QWebEngineDownloadRequest_SavePageFormatChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_save_page_format_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_SavePageFormatChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_received_bytes_changed(void* self) {
    QWebEngineDownloadRequest_ReceivedBytesChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_received_bytes_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_ReceivedBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_total_bytes_changed(void* self) {
    QWebEngineDownloadRequest_TotalBytesChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_total_bytes_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_TotalBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_interrupt_reason_changed(void* self) {
    QWebEngineDownloadRequest_InterruptReasonChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_InterruptReasonChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_is_finished_changed(void* self) {
    QWebEngineDownloadRequest_IsFinishedChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_is_finished_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_IsFinishedChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_is_paused_changed(void* self) {
    QWebEngineDownloadRequest_IsPausedChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_is_paused_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_IsPausedChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_download_directory_changed(void* self) {
    QWebEngineDownloadRequest_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_download_directory_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_download_file_name_changed(void* self) {
    QWebEngineDownloadRequest_DownloadFileNameChanged((QWebEngineDownloadRequest*)self);
}

void q_webenginedownloadrequest_on_download_file_name_changed(void* self, void (*callback)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadFileNameChanged((QWebEngineDownloadRequest*)self, (intptr_t)callback);
}

const char* q_webenginedownloadrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginedownloadrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginedownloadrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginedownloadrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginedownloadrequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginedownloadrequest_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginedownloadrequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginedownloadrequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginedownloadrequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginedownloadrequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginedownloadrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginedownloadrequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginedownloadrequest_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginedownloadrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webenginedownloadrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginedownloadrequest_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginedownloadrequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginedownloadrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginedownloadrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginedownloadrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginedownloadrequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginedownloadrequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginedownloadrequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginedownloadrequest_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginedownloadrequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginedownloadrequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginedownloadrequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginedownloadrequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginedownloadrequest_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginedownloadrequest_dynamic_property_names\n");
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

QBindingStorage* q_webenginedownloadrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginedownloadrequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginedownloadrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginedownloadrequest_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webenginedownloadrequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginedownloadrequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginedownloadrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginedownloadrequest_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginedownloadrequest_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginedownloadrequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webenginedownloadrequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webenginedownloadrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginedownloadrequest_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webenginedownloadrequest_delete(void* self) {
    QWebEngineDownloadRequest_Delete((QWebEngineDownloadRequest*)(self));
}
