#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYFILE_H
#define SRCQT6C_LIBQTEMPORARYFILE_H

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
#include "libqfile.h"
#include "libqfiledevice.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QTemporaryFile* q_temporaryfile_new();
QTemporaryFile* q_temporaryfile_new2(const char* templateName);
QTemporaryFile* q_temporaryfile_new3(void* parent);
QTemporaryFile* q_temporaryfile_new4(const char* templateName, void* parent);
QMetaObject* q_temporaryfile_meta_object(void* self);
void* q_temporaryfile_metacast(void* self, const char* param1);
int32_t q_temporaryfile_metacall(void* self, int64_t param1, int param2, void* param3);
void q_temporaryfile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_temporaryfile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_temporaryfile_tr(const char* s);
bool q_temporaryfile_auto_remove(void* self);
void q_temporaryfile_set_auto_remove(void* self, bool b);
bool q_temporaryfile_open(void* self);
const char* q_temporaryfile_file_name(void* self);
void q_temporaryfile_on_file_name(void* self, const char* (*slot)());
const char* q_temporaryfile_qbase_file_name(void* self);
const char* q_temporaryfile_file_template(void* self);
void q_temporaryfile_set_file_template(void* self, const char* name);
bool q_temporaryfile_rename(void* self, const char* newName);
QTemporaryFile* q_temporaryfile_create_native_file(const char* fileName);
QTemporaryFile* q_temporaryfile_create_native_file_with_file(void* file);
bool q_temporaryfile_open_with_flags(void* self, int64_t flags);
void q_temporaryfile_on_open_with_flags(void* self, bool (*slot)(void*, int64_t));
bool q_temporaryfile_qbase_open_with_flags(void* self, int64_t flags);
const char* q_temporaryfile_tr2(const char* s, const char* c);
const char* q_temporaryfile_tr3(const char* s, const char* c, int n);
void q_temporaryfile_set_file_name(void* self, const char* name);
char* q_temporaryfile_encode_name(const char* fileName);
const char* q_temporaryfile_decode_name(const char* localFileName);
const char* q_temporaryfile_decode_name_with_local_file_name(const char* localFileName);
bool q_temporaryfile_exists(void* self);
bool q_temporaryfile_exists_with_file_name(const char* fileName);
const char* q_temporaryfile_sym_link_target(void* self);
const char* q_temporaryfile_sym_link_target_with_file_name(const char* fileName);
bool q_temporaryfile_remove(void* self);
bool q_temporaryfile_remove_with_file_name(const char* fileName);
bool q_temporaryfile_move_to_trash(void* self);
bool q_temporaryfile_move_to_trash_with_file_name(const char* fileName);
bool q_temporaryfile_rename2(const char* oldName, const char* newName);
bool q_temporaryfile_link(void* self, const char* newName);
bool q_temporaryfile_link2(const char* fileName, const char* newName);
bool q_temporaryfile_copy(void* self, const char* newName);
bool q_temporaryfile_copy2(const char* fileName, const char* newName);
bool q_temporaryfile_open2(void* self, int64_t flags, int64_t permissions);
bool q_temporaryfile_open4(void* self, int fd, int64_t ioFlags);
bool q_temporaryfile_resize2(const char* filename, long long sz);
int64_t q_temporaryfile_permissions_with_filename(const char* filename);
bool q_temporaryfile_set_permissions2(const char* filename, int64_t permissionSpec);
bool q_temporaryfile_open33(void* self, int fd, int64_t ioFlags, int64_t handleFlags);
int64_t q_temporaryfile_error(void* self);
void q_temporaryfile_unset_error(void* self);
int32_t q_temporaryfile_handle(void* self);
bool q_temporaryfile_flush(void* self);
unsigned char* q_temporaryfile_map(void* self, long long offset, long long size);
bool q_temporaryfile_unmap(void* self, unsigned char* address);
QDateTime* q_temporaryfile_file_time(void* self, int64_t time);
bool q_temporaryfile_set_file_time(void* self, void* newDate, int64_t fileTime);
unsigned char* q_temporaryfile_map3(void* self, long long offset, long long size, int64_t flags);
int64_t q_temporaryfile_open_mode(void* self);
void q_temporaryfile_set_text_mode_enabled(void* self, bool enabled);
bool q_temporaryfile_is_text_mode_enabled(void* self);
bool q_temporaryfile_is_open(void* self);
bool q_temporaryfile_is_readable(void* self);
bool q_temporaryfile_is_writable(void* self);
int32_t q_temporaryfile_read_channel_count(void* self);
int32_t q_temporaryfile_write_channel_count(void* self);
int32_t q_temporaryfile_current_read_channel(void* self);
void q_temporaryfile_set_current_read_channel(void* self, int channel);
int32_t q_temporaryfile_current_write_channel(void* self);
void q_temporaryfile_set_current_write_channel(void* self, int channel);
long long q_temporaryfile_read(void* self, char* data, long long maxlen);
char* q_temporaryfile_read_with_maxlen(void* self, long long maxlen);
char* q_temporaryfile_read_all(void* self);
long long q_temporaryfile_read_line(void* self, char* data, long long maxlen);
char* q_temporaryfile_read_line2(void* self);
void q_temporaryfile_start_transaction(void* self);
void q_temporaryfile_commit_transaction(void* self);
void q_temporaryfile_rollback_transaction(void* self);
bool q_temporaryfile_is_transaction_started(void* self);
long long q_temporaryfile_write(void* self, const char* data, long long lenVal);
long long q_temporaryfile_write_with_data(void* self, const char* data);
long long q_temporaryfile_write2(void* self, const char* data);
long long q_temporaryfile_peek(void* self, char* data, long long maxlen);
char* q_temporaryfile_peek_with_maxlen(void* self, long long maxlen);
long long q_temporaryfile_skip(void* self, long long maxSize);
void q_temporaryfile_unget_char(void* self, char c);
bool q_temporaryfile_put_char(void* self, char c);
bool q_temporaryfile_get_char(void* self, char* c);
const char* q_temporaryfile_error_string(void* self);
void q_temporaryfile_ready_read(void* self);
void q_temporaryfile_on_ready_read(void* self, void (*slot)(void*));
void q_temporaryfile_channel_ready_read(void* self, int channel);
void q_temporaryfile_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_temporaryfile_bytes_written(void* self, long long bytes);
void q_temporaryfile_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_temporaryfile_channel_bytes_written(void* self, int channel, long long bytes);
void q_temporaryfile_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_temporaryfile_about_to_close(void* self);
void q_temporaryfile_on_about_to_close(void* self, void (*slot)(void*));
void q_temporaryfile_read_channel_finished(void* self);
void q_temporaryfile_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_temporaryfile_read_line1(void* self, long long maxlen);
const char* q_temporaryfile_object_name(void* self);
void q_temporaryfile_set_object_name(void* self, const char* name);
bool q_temporaryfile_is_widget_type(void* self);
bool q_temporaryfile_is_window_type(void* self);
bool q_temporaryfile_is_quick_item_type(void* self);
bool q_temporaryfile_signals_blocked(void* self);
bool q_temporaryfile_block_signals(void* self, bool b);
QThread* q_temporaryfile_thread(void* self);
void q_temporaryfile_move_to_thread(void* self, void* thread);
int32_t q_temporaryfile_start_timer(void* self, int interval);
void q_temporaryfile_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_temporaryfile_children(void* self);
void q_temporaryfile_set_parent(void* self, void* parent);
void q_temporaryfile_install_event_filter(void* self, void* filterObj);
void q_temporaryfile_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_temporaryfile_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_temporaryfile_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_temporaryfile_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_temporaryfile_disconnect_with_q_meta_object_connection(void* param1);
void q_temporaryfile_dump_object_tree(void* self);
void q_temporaryfile_dump_object_info(void* self);
bool q_temporaryfile_set_property(void* self, const char* name, void* value);
QVariant* q_temporaryfile_property(void* self, const char* name);
const char** q_temporaryfile_dynamic_property_names(void* self);
QBindingStorage* q_temporaryfile_binding_storage(void* self);
QBindingStorage* q_temporaryfile_binding_storage2(void* self);
void q_temporaryfile_destroyed(void* self);
void q_temporaryfile_on_destroyed(void* self, void (*slot)(void*));
QObject* q_temporaryfile_parent(void* self);
bool q_temporaryfile_inherits(void* self, const char* classname);
void q_temporaryfile_delete_later(void* self);
int32_t q_temporaryfile_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_temporaryfile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_temporaryfile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_temporaryfile_destroyed1(void* self, void* param1);
void q_temporaryfile_on_destroyed1(void* self, void (*slot)(void*, void*));
long long q_temporaryfile_size(void* self);
long long q_temporaryfile_qbase_size(void* self);
void q_temporaryfile_on_size(void* self, long long (*slot)());
bool q_temporaryfile_resize(void* self, long long sz);
bool q_temporaryfile_qbase_resize(void* self, long long sz);
void q_temporaryfile_on_resize(void* self, bool (*slot)(void*, long long));
int64_t q_temporaryfile_permissions(void* self);
int64_t q_temporaryfile_qbase_permissions(void* self);
void q_temporaryfile_on_permissions(void* self, int64_t (*slot)());
bool q_temporaryfile_set_permissions(void* self, int64_t permissionSpec);
bool q_temporaryfile_qbase_set_permissions(void* self, int64_t permissionSpec);
void q_temporaryfile_on_set_permissions(void* self, bool (*slot)(void*, int64_t));
void q_temporaryfile_close(void* self);
void q_temporaryfile_qbase_close(void* self);
void q_temporaryfile_on_close(void* self, void (*slot)());
bool q_temporaryfile_is_sequential(void* self);
bool q_temporaryfile_qbase_is_sequential(void* self);
void q_temporaryfile_on_is_sequential(void* self, bool (*slot)());
long long q_temporaryfile_pos(void* self);
long long q_temporaryfile_qbase_pos(void* self);
void q_temporaryfile_on_pos(void* self, long long (*slot)());
bool q_temporaryfile_seek(void* self, long long offset);
bool q_temporaryfile_qbase_seek(void* self, long long offset);
void q_temporaryfile_on_seek(void* self, bool (*slot)(void*, long long));
bool q_temporaryfile_at_end(void* self);
bool q_temporaryfile_qbase_at_end(void* self);
void q_temporaryfile_on_at_end(void* self, bool (*slot)());
long long q_temporaryfile_read_data(void* self, char* data, long long maxlen);
long long q_temporaryfile_qbase_read_data(void* self, char* data, long long maxlen);
void q_temporaryfile_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_temporaryfile_write_data(void* self, const char* data, long long lenVal);
long long q_temporaryfile_qbase_write_data(void* self, const char* data, long long lenVal);
void q_temporaryfile_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_temporaryfile_read_line_data(void* self, char* data, long long maxlen);
long long q_temporaryfile_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_temporaryfile_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
bool q_temporaryfile_reset(void* self);
bool q_temporaryfile_qbase_reset(void* self);
void q_temporaryfile_on_reset(void* self, bool (*slot)());
long long q_temporaryfile_bytes_available(void* self);
long long q_temporaryfile_qbase_bytes_available(void* self);
void q_temporaryfile_on_bytes_available(void* self, long long (*slot)());
long long q_temporaryfile_bytes_to_write(void* self);
long long q_temporaryfile_qbase_bytes_to_write(void* self);
void q_temporaryfile_on_bytes_to_write(void* self, long long (*slot)());
bool q_temporaryfile_can_read_line(void* self);
bool q_temporaryfile_qbase_can_read_line(void* self);
void q_temporaryfile_on_can_read_line(void* self, bool (*slot)());
bool q_temporaryfile_wait_for_ready_read(void* self, int msecs);
bool q_temporaryfile_qbase_wait_for_ready_read(void* self, int msecs);
void q_temporaryfile_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_temporaryfile_wait_for_bytes_written(void* self, int msecs);
bool q_temporaryfile_qbase_wait_for_bytes_written(void* self, int msecs);
void q_temporaryfile_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
long long q_temporaryfile_skip_data(void* self, long long maxSize);
long long q_temporaryfile_qbase_skip_data(void* self, long long maxSize);
void q_temporaryfile_on_skip_data(void* self, long long (*slot)(void*, long long));
bool q_temporaryfile_event(void* self, void* event);
bool q_temporaryfile_qbase_event(void* self, void* event);
void q_temporaryfile_on_event(void* self, bool (*slot)(void*, void*));
bool q_temporaryfile_event_filter(void* self, void* watched, void* event);
bool q_temporaryfile_qbase_event_filter(void* self, void* watched, void* event);
void q_temporaryfile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_temporaryfile_timer_event(void* self, void* event);
void q_temporaryfile_qbase_timer_event(void* self, void* event);
void q_temporaryfile_on_timer_event(void* self, void (*slot)(void*, void*));
void q_temporaryfile_child_event(void* self, void* event);
void q_temporaryfile_qbase_child_event(void* self, void* event);
void q_temporaryfile_on_child_event(void* self, void (*slot)(void*, void*));
void q_temporaryfile_custom_event(void* self, void* event);
void q_temporaryfile_qbase_custom_event(void* self, void* event);
void q_temporaryfile_on_custom_event(void* self, void (*slot)(void*, void*));
void q_temporaryfile_connect_notify(void* self, void* signal);
void q_temporaryfile_qbase_connect_notify(void* self, void* signal);
void q_temporaryfile_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_temporaryfile_disconnect_notify(void* self, void* signal);
void q_temporaryfile_qbase_disconnect_notify(void* self, void* signal);
void q_temporaryfile_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_temporaryfile_set_open_mode(void* self, int64_t openMode);
void q_temporaryfile_qbase_set_open_mode(void* self, int64_t openMode);
void q_temporaryfile_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_temporaryfile_set_error_string(void* self, const char* errorString);
void q_temporaryfile_qbase_set_error_string(void* self, const char* errorString);
void q_temporaryfile_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_temporaryfile_sender(void* self);
QObject* q_temporaryfile_qbase_sender(void* self);
void q_temporaryfile_on_sender(void* self, QObject* (*slot)());
int32_t q_temporaryfile_sender_signal_index(void* self);
int32_t q_temporaryfile_qbase_sender_signal_index(void* self);
void q_temporaryfile_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_temporaryfile_receivers(void* self, const char* signal);
int32_t q_temporaryfile_qbase_receivers(void* self, const char* signal);
void q_temporaryfile_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_temporaryfile_is_signal_connected(void* self, void* signal);
bool q_temporaryfile_qbase_is_signal_connected(void* self, void* signal);
void q_temporaryfile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_temporaryfile_delete(void* self);

#endif
