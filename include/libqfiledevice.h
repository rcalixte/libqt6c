#pragma once
#ifndef SRCQT6C_LIBQFILEDEVICE_H
#define SRCQT6C_LIBQFILEDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatetime.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_filedevice_meta_object(void* self);
void* q_filedevice_metacast(void* self, const char* param1);
int32_t q_filedevice_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_filedevice_tr(const char* s);
int64_t q_filedevice_error(void* self);
void q_filedevice_unset_error(void* self);
void q_filedevice_close(void* self);
bool q_filedevice_is_sequential(void* self);
int32_t q_filedevice_handle(void* self);
const char* q_filedevice_file_name(void* self);
long long q_filedevice_pos(void* self);
bool q_filedevice_seek(void* self, long long offset);
bool q_filedevice_at_end(void* self);
bool q_filedevice_flush(void* self);
long long q_filedevice_size(void* self);
bool q_filedevice_resize(void* self, long long sz);
int64_t q_filedevice_permissions(void* self);
bool q_filedevice_set_permissions(void* self, int64_t permissionSpec);
unsigned char* q_filedevice_map(void* self, long long offset, long long size);
bool q_filedevice_unmap(void* self, unsigned char* address);
QDateTime* q_filedevice_file_time(void* self, int64_t time);
bool q_filedevice_set_file_time(void* self, void* newDate, int64_t fileTime);
const char* q_filedevice_tr2(const char* s, const char* c);
const char* q_filedevice_tr3(const char* s, const char* c, int n);
unsigned char* q_filedevice_map3(void* self, long long offset, long long size, int64_t flags);
int64_t q_filedevice_open_mode(void* self);
void q_filedevice_set_text_mode_enabled(void* self, bool enabled);
bool q_filedevice_is_text_mode_enabled(void* self);
bool q_filedevice_is_open(void* self);
bool q_filedevice_is_readable(void* self);
bool q_filedevice_is_writable(void* self);
int32_t q_filedevice_read_channel_count(void* self);
int32_t q_filedevice_write_channel_count(void* self);
int32_t q_filedevice_current_read_channel(void* self);
void q_filedevice_set_current_read_channel(void* self, int channel);
int32_t q_filedevice_current_write_channel(void* self);
void q_filedevice_set_current_write_channel(void* self, int channel);
bool q_filedevice_open(void* self, int64_t mode);
bool q_filedevice_reset(void* self);
long long q_filedevice_bytes_available(void* self);
long long q_filedevice_bytes_to_write(void* self);
long long q_filedevice_read(void* self, char* data, long long maxlen);
char* q_filedevice_read_with_maxlen(void* self, long long maxlen);
char* q_filedevice_read_all(void* self);
long long q_filedevice_read_line(void* self, char* data, long long maxlen);
char* q_filedevice_read_line2(void* self);
bool q_filedevice_can_read_line(void* self);
void q_filedevice_start_transaction(void* self);
void q_filedevice_commit_transaction(void* self);
void q_filedevice_rollback_transaction(void* self);
bool q_filedevice_is_transaction_started(void* self);
long long q_filedevice_write(void* self, const char* data, long long lenVal);
long long q_filedevice_write_with_data(void* self, const char* data);
long long q_filedevice_write2(void* self, const char* data);
long long q_filedevice_peek(void* self, char* data, long long maxlen);
char* q_filedevice_peek_with_maxlen(void* self, long long maxlen);
long long q_filedevice_skip(void* self, long long maxSize);
bool q_filedevice_wait_for_ready_read(void* self, int msecs);
bool q_filedevice_wait_for_bytes_written(void* self, int msecs);
void q_filedevice_unget_char(void* self, char c);
bool q_filedevice_put_char(void* self, char c);
bool q_filedevice_get_char(void* self, char* c);
const char* q_filedevice_error_string(void* self);
void q_filedevice_ready_read(void* self);
void q_filedevice_on_ready_read(void* self, void (*slot)(void*));
void q_filedevice_channel_ready_read(void* self, int channel);
void q_filedevice_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_filedevice_bytes_written(void* self, long long bytes);
void q_filedevice_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_filedevice_channel_bytes_written(void* self, int channel, long long bytes);
void q_filedevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_filedevice_about_to_close(void* self);
void q_filedevice_on_about_to_close(void* self, void (*slot)(void*));
void q_filedevice_read_channel_finished(void* self);
void q_filedevice_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_filedevice_read_line1(void* self, long long maxlen);
bool q_filedevice_event(void* self, void* event);
bool q_filedevice_event_filter(void* self, void* watched, void* event);
const char* q_filedevice_object_name(void* self);
void q_filedevice_set_object_name(void* self, const char* name);
bool q_filedevice_is_widget_type(void* self);
bool q_filedevice_is_window_type(void* self);
bool q_filedevice_is_quick_item_type(void* self);
bool q_filedevice_signals_blocked(void* self);
bool q_filedevice_block_signals(void* self, bool b);
QThread* q_filedevice_thread(void* self);
void q_filedevice_move_to_thread(void* self, void* thread);
int32_t q_filedevice_start_timer(void* self, int interval);
void q_filedevice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_filedevice_children(void* self);
void q_filedevice_set_parent(void* self, void* parent);
void q_filedevice_install_event_filter(void* self, void* filterObj);
void q_filedevice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_filedevice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_filedevice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_filedevice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_filedevice_disconnect_with_q_meta_object_connection(void* param1);
void q_filedevice_dump_object_tree(void* self);
void q_filedevice_dump_object_info(void* self);
bool q_filedevice_set_property(void* self, const char* name, void* value);
QVariant* q_filedevice_property(void* self, const char* name);
const char** q_filedevice_dynamic_property_names(void* self);
QBindingStorage* q_filedevice_binding_storage(void* self);
QBindingStorage* q_filedevice_binding_storage2(void* self);
void q_filedevice_destroyed(void* self);
void q_filedevice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_filedevice_parent(void* self);
bool q_filedevice_inherits(void* self, const char* classname);
void q_filedevice_delete_later(void* self);
int32_t q_filedevice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_filedevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_filedevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_filedevice_destroyed1(void* self, void* param1);
void q_filedevice_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_filedevice_delete(void* self);

/// https://doc.qt.io/qt-6/qfiledevice.html#types

typedef enum {
    QFILEDEVICE_FILEERROR_NOERROR = 0,
    QFILEDEVICE_FILEERROR_READERROR = 1,
    QFILEDEVICE_FILEERROR_WRITEERROR = 2,
    QFILEDEVICE_FILEERROR_FATALERROR = 3,
    QFILEDEVICE_FILEERROR_RESOURCEERROR = 4,
    QFILEDEVICE_FILEERROR_OPENERROR = 5,
    QFILEDEVICE_FILEERROR_ABORTERROR = 6,
    QFILEDEVICE_FILEERROR_TIMEOUTERROR = 7,
    QFILEDEVICE_FILEERROR_UNSPECIFIEDERROR = 8,
    QFILEDEVICE_FILEERROR_REMOVEERROR = 9,
    QFILEDEVICE_FILEERROR_RENAMEERROR = 10,
    QFILEDEVICE_FILEERROR_POSITIONERROR = 11,
    QFILEDEVICE_FILEERROR_RESIZEERROR = 12,
    QFILEDEVICE_FILEERROR_PERMISSIONSERROR = 13,
    QFILEDEVICE_FILEERROR_COPYERROR = 14
} QFileDevice__FileError;

typedef enum {
    QFILEDEVICE_FILETIME_FILEACCESSTIME = 0,
    QFILEDEVICE_FILETIME_FILEBIRTHTIME = 1,
    QFILEDEVICE_FILETIME_FILEMETADATACHANGETIME = 2,
    QFILEDEVICE_FILETIME_FILEMODIFICATIONTIME = 3
} QFileDevice__FileTime;

typedef enum {
    QFILEDEVICE_PERMISSION_READOWNER = 16384,
    QFILEDEVICE_PERMISSION_WRITEOWNER = 8192,
    QFILEDEVICE_PERMISSION_EXEOWNER = 4096,
    QFILEDEVICE_PERMISSION_READUSER = 1024,
    QFILEDEVICE_PERMISSION_WRITEUSER = 512,
    QFILEDEVICE_PERMISSION_EXEUSER = 256,
    QFILEDEVICE_PERMISSION_READGROUP = 64,
    QFILEDEVICE_PERMISSION_WRITEGROUP = 32,
    QFILEDEVICE_PERMISSION_EXEGROUP = 16,
    QFILEDEVICE_PERMISSION_READOTHER = 4,
    QFILEDEVICE_PERMISSION_WRITEOTHER = 2,
    QFILEDEVICE_PERMISSION_EXEOTHER = 1
} QFileDevice__Permission;

typedef enum {
    QFILEDEVICE_FILEHANDLEFLAG_AUTOCLOSEHANDLE = 1,
    QFILEDEVICE_FILEHANDLEFLAG_DONTCLOSEHANDLE = 0
} QFileDevice__FileHandleFlag;

typedef enum {
    QFILEDEVICE_MEMORYMAPFLAG_NOOPTIONS = 0,
    QFILEDEVICE_MEMORYMAPFLAG_MAPPRIVATEOPTION = 1
} QFileDevice__MemoryMapFlag;

#endif
