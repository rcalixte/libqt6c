#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEDOWNLOADREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEDOWNLOADREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineDownloadRequest* self ```
const QMetaObject* q_webenginedownloadrequest_meta_object(void* self);

/// ``` QWebEngineDownloadRequest* self, const char* param1 ```
void* q_webenginedownloadrequest_metacast(void* self, const char* param1);

/// ``` QWebEngineDownloadRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginedownloadrequest_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginedownloadrequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
///
/// ``` QWebEngineDownloadRequest* self ```
uint32_t q_webenginedownloadrequest_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
///
/// ``` QWebEngineDownloadRequest* self ```
long long q_webenginedownloadrequest_total_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
///
/// ``` QWebEngineDownloadRequest* self ```
long long q_webenginedownloadrequest_received_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
///
/// ``` QWebEngineDownloadRequest* self ```
QUrl* q_webenginedownloadrequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_mime_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_save_page_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
///
/// ``` QWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__SavePageFormat format ```
void q_webenginedownloadrequest_set_save_page_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
///
/// ``` QWebEngineDownloadRequest* self ```
int64_t q_webenginedownloadrequest_interrupt_reason(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_interrupt_reason_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_save_page_download(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_suggested_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_download_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
///
/// ``` QWebEngineDownloadRequest* self, const char* directory ```
void q_webenginedownloadrequest_set_download_directory(void* self, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_download_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
///
/// ``` QWebEngineDownloadRequest* self, const char* fileName ```
void q_webenginedownloadrequest_set_download_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
///
/// ``` QWebEngineDownloadRequest* self ```
QWebEnginePage* q_webenginedownloadrequest_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// ``` QWebEngineDownloadRequest* self, enum QWebEngineDownloadRequest__DownloadState state ```
void q_webenginedownloadrequest_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*, enum QWebEngineDownloadRequest__DownloadState) ```
void q_webenginedownloadrequest_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_save_page_format_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_save_page_format_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_received_bytes_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_received_bytes_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_total_bytes_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_total_bytes_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_interrupt_reason_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_is_finished_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_is_finished_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_is_paused_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_is_paused_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_download_directory_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_download_directory_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_download_file_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_download_file_name_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginedownloadrequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginedownloadrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineDownloadRequest* self, QEvent* event ```
bool q_webenginedownloadrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* watched, QEvent* event ```
bool q_webenginedownloadrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineDownloadRequest* self ```
const char* q_webenginedownloadrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineDownloadRequest* self, char* name ```
void q_webenginedownloadrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineDownloadRequest* self ```
bool q_webenginedownloadrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineDownloadRequest* self, bool b ```
bool q_webenginedownloadrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineDownloadRequest* self ```
QThread* q_webenginedownloadrequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineDownloadRequest* self, QThread* thread ```
bool q_webenginedownloadrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineDownloadRequest* self, int interval ```
int32_t q_webenginedownloadrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineDownloadRequest* self, int id ```
void q_webenginedownloadrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineDownloadRequest* self, enum Qt__TimerId id ```
void q_webenginedownloadrequest_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineDownloadRequest* self ```
libqt_list /* of QObject* */ q_webenginedownloadrequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineDownloadRequest* self, QObject* parent ```
void q_webenginedownloadrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* filterObj ```
void q_webenginedownloadrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineDownloadRequest* self, QObject* obj ```
void q_webenginedownloadrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginedownloadrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineDownloadRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginedownloadrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginedownloadrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginedownloadrequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineDownloadRequest* self, const char* name, QVariant* value ```
bool q_webenginedownloadrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineDownloadRequest* self, const char* name ```
QVariant* q_webenginedownloadrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineDownloadRequest* self ```
const char** q_webenginedownloadrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineDownloadRequest* self ```
QBindingStorage* q_webenginedownloadrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineDownloadRequest* self ```
const QBindingStorage* q_webenginedownloadrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*) ```
void q_webenginedownloadrequest_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineDownloadRequest* self ```
QObject* q_webenginedownloadrequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineDownloadRequest* self, const char* classname ```
bool q_webenginedownloadrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineDownloadRequest* self ```
void q_webenginedownloadrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineDownloadRequest* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webenginedownloadrequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineDownloadRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginedownloadrequest_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginedownloadrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineDownloadRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginedownloadrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self, QObject* param1 ```
void q_webenginedownloadrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*, QObject*) ```
void q_webenginedownloadrequest_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineDownloadRequest* self, void (*slot)(QWebEngineDownloadRequest*, const char*) ```
void q_webenginedownloadrequest_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#dtor.QWebEngineDownloadRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineDownloadRequest* self ```
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
