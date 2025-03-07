#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqwebenginepage.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginedownloadrequest.hpp"
#include "libqwebenginedownloadrequest.h"

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineDownloadRequest* self ```
QMetaObject* q_webenginedownloadrequest_meta_object(void* self) {
    return QWebEngineDownloadRequest_MetaObject((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, const char* param1 ```
void* q_webenginedownloadrequest_metacast(void* self, const char* param1) {
    return QWebEngineDownloadRequest_Metacast((QWebEngineDownloadRequest*)self, param1);
}

/// ``` QWebEngineDownloadRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginedownloadrequest_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineDownloadRequest_Metacall((QWebEngineDownloadRequest*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginedownloadrequest_tr(const char* s) {
    libqt_string _str = QWebEngineDownloadRequest_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
///
/// ``` QWebEngineDownloadRequest* self ```
uint32_t q_webenginedownloadrequest_id(void* self) {
    return QWebEngineDownloadRequest_Id((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_state(void* self) {
    return QWebEngineDownloadRequest_State((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
///
/// ``` QWebEngineDownloadRequest* self ```
long long q_webenginedownloadrequest_total_bytes(void* self) {
    return QWebEngineDownloadRequest_TotalBytes((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
///
/// ``` QWebEngineDownloadRequest* self ```
long long q_webenginedownloadrequest_received_bytes(void* self) {
    return QWebEngineDownloadRequest_ReceivedBytes((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
///
/// ``` QWebEngineDownloadRequest* self ```
QUrl* q_webenginedownloadrequest_url(void* self) {
    return QWebEngineDownloadRequest_Url((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_mime_type(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_MimeType((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_finished(void* self) {
    return QWebEngineDownloadRequest_IsFinished((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_paused(void* self) {
    return QWebEngineDownloadRequest_IsPaused((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_save_page_format(void* self) {
    return QWebEngineDownloadRequest_SavePageFormat((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
///
/// ``` QWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__SavePageFormat format ```
void q_webenginedownloadrequest_set_save_page_format(void* self, int64_t format) {
    QWebEngineDownloadRequest_SetSavePageFormat((QWebEngineDownloadRequest*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_interrupt_reason(void* self) {
    return QWebEngineDownloadRequest_InterruptReason((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_interrupt_reason_string(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_InterruptReasonString((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_save_page_download(void* self) {
    return QWebEngineDownloadRequest_IsSavePageDownload((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_suggested_file_name(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_SuggestedFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_download_directory(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadDirectory((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
///
/// ``` QWebEngineDownloadRequest* self, const char* directory ```
void q_webenginedownloadrequest_set_download_directory(void* self, const char* directory) {
    QWebEngineDownloadRequest_SetDownloadDirectory((QWebEngineDownloadRequest*)self, qstring(directory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_download_file_name(void* self) {
    libqt_string _str = QWebEngineDownloadRequest_DownloadFileName((QWebEngineDownloadRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
///
/// ``` QWebEngineDownloadRequest* self, const char* fileName ```
void q_webenginedownloadrequest_set_download_file_name(void* self, const char* fileName) {
    QWebEngineDownloadRequest_SetDownloadFileName((QWebEngineDownloadRequest*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
///
/// ``` QWebEngineDownloadRequest* self ```
QWebEnginePage* q_webenginedownloadrequest_page(void* self) {
    return QWebEngineDownloadRequest_Page((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_accept(void* self) {
    QWebEngineDownloadRequest_Accept((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_cancel(void* self) {
    QWebEngineDownloadRequest_Cancel((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_pause(void* self) {
    QWebEngineDownloadRequest_Pause((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_resume(void* self) {
    QWebEngineDownloadRequest_Resume((QWebEngineDownloadRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// ``` QWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__DownloadState state ```
void q_webenginedownloadrequest_state_changed(void* self, int64_t state) {
    QWebEngineDownloadRequest_StateChanged((QWebEngineDownloadRequest*)self, state);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*, enum QWebEngineDownloadRequest__DownloadState) ```
void q_webenginedownloadrequest_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWebEngineDownloadRequest_Connect_StateChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_save_page_format_changed(void* self) {
    QWebEngineDownloadRequest_SavePageFormatChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_save_page_format_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_SavePageFormatChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_received_bytes_changed(void* self) {
    QWebEngineDownloadRequest_ReceivedBytesChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_received_bytes_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_ReceivedBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_total_bytes_changed(void* self) {
    QWebEngineDownloadRequest_TotalBytesChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_total_bytes_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_TotalBytesChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_interrupt_reason_changed(void* self) {
    QWebEngineDownloadRequest_InterruptReasonChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_InterruptReasonChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_is_finished_changed(void* self) {
    QWebEngineDownloadRequest_IsFinishedChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_is_finished_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_IsFinishedChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_is_paused_changed(void* self) {
    QWebEngineDownloadRequest_IsPausedChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_is_paused_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_IsPausedChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_download_directory_changed(void* self) {
    QWebEngineDownloadRequest_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_download_directory_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_download_file_name_changed(void* self) {
    QWebEngineDownloadRequest_DownloadFileNameChanged((QWebEngineDownloadRequest*)self);
}

/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_download_file_name_changed(void* self, void (*slot)(void*)) {
    QWebEngineDownloadRequest_Connect_DownloadFileNameChanged((QWebEngineDownloadRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginedownloadrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineDownloadRequest_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginedownloadrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineDownloadRequest_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineDownloadRequest* self, QEvent* event ```
bool q_webenginedownloadrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* watched, QEvent* event ```
bool q_webenginedownloadrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineDownloadRequest* self, const char* name ```
void q_webenginedownloadrequest_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineDownloadRequest* self, bool b ```
bool q_webenginedownloadrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineDownloadRequest* self ```
QThread* q_webenginedownloadrequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineDownloadRequest* self, QThread* thread ```
void q_webenginedownloadrequest_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineDownloadRequest* self, int interval ```
int32_t q_webenginedownloadrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineDownloadRequest* self, int id ```
void q_webenginedownloadrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineDownloadRequest* self ```
libqt_list /* of QObject* */ q_webenginedownloadrequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineDownloadRequest* self, QObject* parent ```
void q_webenginedownloadrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* filterObj ```
void q_webenginedownloadrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* obj ```
void q_webenginedownloadrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginedownloadrequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineDownloadRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginedownloadrequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginedownloadrequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginedownloadrequest_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineDownloadRequest* self, const char* name, QVariant* value ```
bool q_webenginedownloadrequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineDownloadRequest* self, const char* name ```
QVariant* q_webenginedownloadrequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineDownloadRequest* self ```
const char** q_webenginedownloadrequest_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineDownloadRequest* self ```
QBindingStorage* q_webenginedownloadrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineDownloadRequest* self ```
QBindingStorage* q_webenginedownloadrequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QObject*) ```
void q_webenginedownloadrequest_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineDownloadRequest* self ```
QObject* q_webenginedownloadrequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineDownloadRequest* self, const char* classname ```
bool q_webenginedownloadrequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineDownloadRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginedownloadrequest_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginedownloadrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineDownloadRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginedownloadrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self, QObject* param1 ```
void q_webenginedownloadrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginedownloadrequest_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_delete(void* self) {
    QWebEngineDownloadRequest_Delete((QWebEngineDownloadRequest*)(self));
}