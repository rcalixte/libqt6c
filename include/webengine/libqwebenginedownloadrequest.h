#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEDOWNLOADREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEDOWNLOADREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "libqwebenginepage.h"

QMetaObject* q_webenginedownloadrequest_meta_object(void* self);
void* q_webenginedownloadrequest_metacast(void* self, const char* param1);
int32_t q_webenginedownloadrequest_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginedownloadrequest_tr(const char* s);
uint32_t q_webenginedownloadrequest_id(void* self);
int64_t q_webenginedownloadrequest_state(void* self);
long long q_webenginedownloadrequest_total_bytes(void* self);
long long q_webenginedownloadrequest_received_bytes(void* self);
QUrl* q_webenginedownloadrequest_url(void* self);
const char* q_webenginedownloadrequest_mime_type(void* self);
bool q_webenginedownloadrequest_is_finished(void* self);
bool q_webenginedownloadrequest_is_paused(void* self);
int64_t q_webenginedownloadrequest_save_page_format(void* self);
void q_webenginedownloadrequest_set_save_page_format(void* self, int64_t format);
int64_t q_webenginedownloadrequest_interrupt_reason(void* self);
const char* q_webenginedownloadrequest_interrupt_reason_string(void* self);
bool q_webenginedownloadrequest_is_save_page_download(void* self);
const char* q_webenginedownloadrequest_suggested_file_name(void* self);
const char* q_webenginedownloadrequest_download_directory(void* self);
void q_webenginedownloadrequest_set_download_directory(void* self, const char* directory);
const char* q_webenginedownloadrequest_download_file_name(void* self);
void q_webenginedownloadrequest_set_download_file_name(void* self, const char* fileName);
QWebEnginePage* q_webenginedownloadrequest_page(void* self);
void q_webenginedownloadrequest_accept(void* self);
void q_webenginedownloadrequest_cancel(void* self);
void q_webenginedownloadrequest_pause(void* self);
void q_webenginedownloadrequest_resume(void* self);
void q_webenginedownloadrequest_state_changed(void* self, int64_t state);
void q_webenginedownloadrequest_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_webenginedownloadrequest_save_page_format_changed(void* self);
void q_webenginedownloadrequest_on_save_page_format_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_received_bytes_changed(void* self);
void q_webenginedownloadrequest_on_received_bytes_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_total_bytes_changed(void* self);
void q_webenginedownloadrequest_on_total_bytes_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_interrupt_reason_changed(void* self);
void q_webenginedownloadrequest_on_interrupt_reason_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_is_finished_changed(void* self);
void q_webenginedownloadrequest_on_is_finished_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_is_paused_changed(void* self);
void q_webenginedownloadrequest_on_is_paused_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_download_directory_changed(void* self);
void q_webenginedownloadrequest_on_download_directory_changed(void* self, void (*slot)(void*));
void q_webenginedownloadrequest_download_file_name_changed(void* self);
void q_webenginedownloadrequest_on_download_file_name_changed(void* self, void (*slot)(void*));
const char* q_webenginedownloadrequest_tr2(const char* s, const char* c);
const char* q_webenginedownloadrequest_tr3(const char* s, const char* c, int n);
bool q_webenginedownloadrequest_event(void* self, void* event);
bool q_webenginedownloadrequest_event_filter(void* self, void* watched, void* event);
const char* q_webenginedownloadrequest_object_name(void* self);
void q_webenginedownloadrequest_set_object_name(void* self, const char* name);
bool q_webenginedownloadrequest_is_widget_type(void* self);
bool q_webenginedownloadrequest_is_window_type(void* self);
bool q_webenginedownloadrequest_is_quick_item_type(void* self);
bool q_webenginedownloadrequest_signals_blocked(void* self);
bool q_webenginedownloadrequest_block_signals(void* self, bool b);
QThread* q_webenginedownloadrequest_thread(void* self);
void q_webenginedownloadrequest_move_to_thread(void* self, void* thread);
int32_t q_webenginedownloadrequest_start_timer(void* self, int interval);
void q_webenginedownloadrequest_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginedownloadrequest_children(void* self);
void q_webenginedownloadrequest_set_parent(void* self, void* parent);
void q_webenginedownloadrequest_install_event_filter(void* self, void* filterObj);
void q_webenginedownloadrequest_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginedownloadrequest_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginedownloadrequest_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginedownloadrequest_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginedownloadrequest_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginedownloadrequest_dump_object_tree(void* self);
void q_webenginedownloadrequest_dump_object_info(void* self);
bool q_webenginedownloadrequest_set_property(void* self, const char* name, void* value);
QVariant* q_webenginedownloadrequest_property(void* self, const char* name);
const char** q_webenginedownloadrequest_dynamic_property_names(void* self);
QBindingStorage* q_webenginedownloadrequest_binding_storage(void* self);
QBindingStorage* q_webenginedownloadrequest_binding_storage2(void* self);
void q_webenginedownloadrequest_destroyed(void* self);
void q_webenginedownloadrequest_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginedownloadrequest_parent(void* self);
bool q_webenginedownloadrequest_inherits(void* self, const char* classname);
void q_webenginedownloadrequest_delete_later(void* self);
int32_t q_webenginedownloadrequest_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginedownloadrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginedownloadrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginedownloadrequest_destroyed1(void* self, void* param1);
void q_webenginedownloadrequest_on_destroyed1(void* self, void (*slot)(void*, void*));
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
