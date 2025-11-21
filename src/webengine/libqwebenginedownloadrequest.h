#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEDOWNLOADREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEDOWNLOADREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineDownloadRequest*
const QMetaObject* q_webenginedownloadrequest_meta_object(void* self);

/// @param self QWebEngineDownloadRequest*
/// @param param1 const char*
void* q_webenginedownloadrequest_metacast(void* self, const char* param1);

/// @param self QWebEngineDownloadRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webenginedownloadrequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webenginedownloadrequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
///
/// @param self QWebEngineDownloadRequest*
uint32_t q_webenginedownloadrequest_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
///
/// @param self QWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__DownloadState
int32_t q_webenginedownloadrequest_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
///
/// @param self QWebEngineDownloadRequest*
long long q_webenginedownloadrequest_total_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
///
/// @param self QWebEngineDownloadRequest*
long long q_webenginedownloadrequest_received_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
///
/// @param self QWebEngineDownloadRequest*
QUrl* q_webenginedownloadrequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_mime_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
///
/// @param self QWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__SavePageFormat
int32_t q_webenginedownloadrequest_save_page_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
///
/// @param self QWebEngineDownloadRequest*
/// @param format enum QWebEngineDownloadRequest__SavePageFormat
void q_webenginedownloadrequest_set_save_page_format(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
///
/// @param self QWebEngineDownloadRequest*
///
/// @return enum QWebEngineDownloadRequest__DownloadInterruptReason
int32_t q_webenginedownloadrequest_interrupt_reason(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_interrupt_reason_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_save_page_download(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_suggested_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_download_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
///
/// @param self QWebEngineDownloadRequest*
/// @param directory const char*
void q_webenginedownloadrequest_set_download_directory(void* self, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_download_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
///
/// @param self QWebEngineDownloadRequest*
/// @param fileName const char*
void q_webenginedownloadrequest_set_download_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
///
/// @param self QWebEngineDownloadRequest*
QWebEnginePage* q_webenginedownloadrequest_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param state enum QWebEngineDownloadRequest__DownloadState
void q_webenginedownloadrequest_state_changed(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__DownloadState state)
void q_webenginedownloadrequest_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_save_page_format_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_save_page_format_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_received_bytes_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_received_bytes_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_total_bytes_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_total_bytes_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_interrupt_reason_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_is_finished_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_is_finished_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_is_paused_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_is_paused_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_download_directory_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_download_directory_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_download_file_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_download_file_name_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webenginedownloadrequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webenginedownloadrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineDownloadRequest*
/// @param event QEvent*
bool q_webenginedownloadrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineDownloadRequest*
/// @param watched QObject*
/// @param event QEvent*
bool q_webenginedownloadrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char* q_webenginedownloadrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineDownloadRequest*
/// @param name char*
void q_webenginedownloadrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineDownloadRequest*
bool q_webenginedownloadrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineDownloadRequest*
/// @param b bool
bool q_webenginedownloadrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineDownloadRequest*
QThread* q_webenginedownloadrequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineDownloadRequest*
/// @param thread QThread*
bool q_webenginedownloadrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineDownloadRequest*
/// @param interval int
int32_t q_webenginedownloadrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineDownloadRequest*
/// @param id int
void q_webenginedownloadrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineDownloadRequest*
/// @param id enum Qt__TimerId
void q_webenginedownloadrequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineDownloadRequest*
libqt_list /* of QObject* */ q_webenginedownloadrequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineDownloadRequest*
/// @param parent QObject*
void q_webenginedownloadrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineDownloadRequest*
/// @param filterObj QObject*
void q_webenginedownloadrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineDownloadRequest*
/// @param obj QObject*
void q_webenginedownloadrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webenginedownloadrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineDownloadRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webenginedownloadrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webenginedownloadrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webenginedownloadrequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineDownloadRequest*
/// @param name const char*
/// @param value QVariant*
bool q_webenginedownloadrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineDownloadRequest*
/// @param name const char*
QVariant* q_webenginedownloadrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineDownloadRequest*
const char** q_webenginedownloadrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineDownloadRequest*
QBindingStorage* q_webenginedownloadrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineDownloadRequest*
const QBindingStorage* q_webenginedownloadrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self)
void q_webenginedownloadrequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineDownloadRequest*
QObject* q_webenginedownloadrequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineDownloadRequest*
/// @param classname const char*
bool q_webenginedownloadrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineDownloadRequest*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webenginedownloadrequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineDownloadRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webenginedownloadrequest_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginedownloadrequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineDownloadRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginedownloadrequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineDownloadRequest*
/// @param param1 QObject*
void q_webenginedownloadrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self, QObject* param1)
void q_webenginedownloadrequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineDownloadRequest*
/// @param callback void func(QWebEngineDownloadRequest* self, const char* objectName)
void q_webenginedownloadrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#dtor.QWebEngineDownloadRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineDownloadRequest*
void q_webenginedownloadrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#types

typedef enum {
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_DOWNLOADREQUESTED = 0,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_DOWNLOADINPROGRESS = 1,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_DOWNLOADCOMPLETED = 2,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_DOWNLOADCANCELLED = 3,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADSTATE_DOWNLOADINTERRUPTED = 4
} QWebEngineDownloadRequest__DownloadState;

typedef enum {
    QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_UNKNOWNSAVEFORMAT = -1,
    QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_SINGLEHTMLSAVEFORMAT = 0,
    QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_COMPLETEHTMLSAVEFORMAT = 1,
    QWEBENGINEDOWNLOADREQUEST_SAVEPAGEFORMAT_MIMEHTMLSAVEFORMAT = 2
} QWebEngineDownloadRequest__SavePageFormat;

typedef enum {
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NOREASON = 0,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILEFAILED = 1,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILEACCESSDENIED = 2,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILENOSPACE = 3,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILENAMETOOLONG = 5,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILETOOLARGE = 6,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILEVIRUSINFECTED = 7,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILETRANSIENTERROR = 10,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILEBLOCKED = 11,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILESECURITYCHECKFAILED = 12,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILETOOSHORT = 13,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_FILEHASHMISMATCH = 14,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NETWORKFAILED = 20,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NETWORKTIMEOUT = 21,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NETWORKDISCONNECTED = 22,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NETWORKSERVERDOWN = 23,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_NETWORKINVALIDREQUEST = 24,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERFAILED = 30,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERBADCONTENT = 33,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERUNAUTHORIZED = 34,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERCERTPROBLEM = 35,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERFORBIDDEN = 36,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_SERVERUNREACHABLE = 37,
    QWEBENGINEDOWNLOADREQUEST_DOWNLOADINTERRUPTREASON_USERCANCELED = 40
} QWebEngineDownloadRequest__DownloadInterruptReason;

#endif
