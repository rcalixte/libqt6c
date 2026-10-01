#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEDOWNLOADREQUEST_H
#define WEBENGINE_LIBQQUICKWEBENGINEDOWNLOADREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const QMetaObject* q_quickwebenginedownloadrequest_meta_object(const void* self);

/// @param self QQuickWebEngineDownloadRequest*
/// @param param1 const char*
///
void* q_quickwebenginedownloadrequest_metacast(void* self, const char* param1);

/// @param self QQuickWebEngineDownloadRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwebenginedownloadrequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickwebenginedownloadrequest_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#qt_qmlMarker_uncreatable)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_qml_marker_uncreatable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickwebenginedownloadrequest_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickwebenginedownloadrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
uint32_t q_quickwebenginedownloadrequest_id(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__DownloadState
///
int32_t q_quickwebenginedownloadrequest_state(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
int64_t q_quickwebenginedownloadrequest_total_bytes(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
int64_t q_quickwebenginedownloadrequest_received_bytes(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
QUrl* q_quickwebenginedownloadrequest_url(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_mime_type(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_finished(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_paused(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__SavePageFormat
///
int32_t q_quickwebenginedownloadrequest_save_page_format(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param format enum QWebEngineDownloadRequest__SavePageFormat
///
void q_quickwebenginedownloadrequest_set_save_page_format(void* self, int32_t format);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__DownloadInterruptReason
///
int32_t q_quickwebenginedownloadrequest_interrupt_reason(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_interrupt_reason_string(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_save_page_download(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_suggested_file_name(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_download_directory(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param directory const char*
///
void q_quickwebenginedownloadrequest_set_download_directory(void* self, const char* directory);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_download_file_name(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param fileName const char*
///
void q_quickwebenginedownloadrequest_set_download_file_name(void* self, const char* fileName);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
QWebEnginePage* q_quickwebenginedownloadrequest_page(const void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_accept(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_cancel(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_pause(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_resume(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param state enum QWebEngineDownloadRequest__DownloadState
///
void q_quickwebenginedownloadrequest_state_changed(void* self, int32_t state);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__DownloadState state)
///
void q_quickwebenginedownloadrequest_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_save_page_format_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_save_page_format_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_received_bytes_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_received_bytes_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_total_bytes_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_total_bytes_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_interrupt_reason_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_is_finished_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_is_finished_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_is_paused_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_is_paused_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_download_directory_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_download_directory_changed(void* self, void (*callback)(void*));

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_download_file_name_changed(void* self);

/// Inherited from QWebEngineDownloadRequest
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_download_file_name_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param event QEvent*
///
bool q_quickwebenginedownloadrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwebenginedownloadrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char* q_quickwebenginedownloadrequest_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param name const char*
///
void q_quickwebenginedownloadrequest_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param b bool
///
bool q_quickwebenginedownloadrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
QThread* q_quickwebenginedownloadrequest_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param thread QThread*
///
bool q_quickwebenginedownloadrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param interval int
///
int32_t q_quickwebenginedownloadrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param time int64_t of nanoseconds
///
int32_t q_quickwebenginedownloadrequest_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param id int
///
void q_quickwebenginedownloadrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param id enum Qt__TimerId
///
void q_quickwebenginedownloadrequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickwebenginedownloadrequest_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param parent QObject*
///
void q_quickwebenginedownloadrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param filterObj QObject*
///
void q_quickwebenginedownloadrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param obj QObject*
///
void q_quickwebenginedownloadrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebenginedownloadrequest_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickwebenginedownloadrequest_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
bool q_quickwebenginedownloadrequest_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param receiver QObject*
///
bool q_quickwebenginedownloadrequest_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickwebenginedownloadrequest_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickwebenginedownloadrequest_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param name const char*
///
QVariant* q_quickwebenginedownloadrequest_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const char** q_quickwebenginedownloadrequest_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickWebEngineDownloadRequest*
///
QBindingStorage* q_quickwebenginedownloadrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
const QBindingStorage* q_quickwebenginedownloadrequest_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self)
///
void q_quickwebenginedownloadrequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuickWebEngineDownloadRequest*
///
QObject* q_quickwebenginedownloadrequest_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param classname const char*
///
bool q_quickwebenginedownloadrequest_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwebenginedownloadrequest_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwebenginedownloadrequest_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebenginedownloadrequest_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param signal const char*
///
bool q_quickwebenginedownloadrequest_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickwebenginedownloadrequest_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebenginedownloadrequest_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineDownloadRequest*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebenginedownloadrequest_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param param1 QObject*
///
void q_quickwebenginedownloadrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self, QObject* param1)
///
void q_quickwebenginedownloadrequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickWebEngineDownloadRequest*
/// @param callback void func(QQuickWebEngineDownloadRequest* self, const char* objectName)
///
void q_quickwebenginedownloadrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#dtor.QQuickWebEngineDownloadRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickWebEngineDownloadRequest*
///
void q_quickwebenginedownloadrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#public-types)

typedef enum {
    QQUICKWEBENGINEDOWNLOADREQUEST_QMLISUNCREATABLE_YES = 1
} QQuickWebEngineDownloadRequest__QmlIsUncreatable;

#endif
