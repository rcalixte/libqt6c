#pragma once
#ifndef SRCQT6C_LIBQSAVEFILE_H
#define SRCQT6C_LIBQSAVEFILE_H

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
#include "libqfiledevice.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QSaveFile* q_savefile_new(const char* name);
QSaveFile* q_savefile_new2();
QSaveFile* q_savefile_new3(const char* name, void* parent);
QSaveFile* q_savefile_new4(void* parent);
QMetaObject* q_savefile_meta_object(void* self);
void* q_savefile_metacast(void* self, const char* param1);
int32_t q_savefile_metacall(void* self, int64_t param1, int param2, void* param3);
void q_savefile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_savefile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_savefile_tr(const char* s);
const char* q_savefile_file_name(void* self);
void q_savefile_on_file_name(void* self, const char* (*slot)());
const char* q_savefile_qbase_file_name(void* self);
void q_savefile_set_file_name(void* self, const char* name);
bool q_savefile_open(void* self, int64_t flags);
void q_savefile_on_open(void* self, bool (*slot)(void*, int64_t));
bool q_savefile_qbase_open(void* self, int64_t flags);
bool q_savefile_commit(void* self);
void q_savefile_cancel_writing(void* self);
void q_savefile_set_direct_write_fallback(void* self, bool enabled);
bool q_savefile_direct_write_fallback(void* self);
long long q_savefile_write_data(void* self, const char* data, long long lenVal);
void q_savefile_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_savefile_qbase_write_data(void* self, const char* data, long long lenVal);
const char* q_savefile_tr2(const char* s, const char* c);
const char* q_savefile_tr3(const char* s, const char* c, int n);
int64_t q_savefile_error(void* self);
void q_savefile_unset_error(void* self);
void q_savefile_close(void* self);
int32_t q_savefile_handle(void* self);
bool q_savefile_flush(void* self);
unsigned char* q_savefile_map(void* self, long long offset, long long size);
bool q_savefile_unmap(void* self, unsigned char* address);
QDateTime* q_savefile_file_time(void* self, int64_t time);
bool q_savefile_set_file_time(void* self, void* newDate, int64_t fileTime);
unsigned char* q_savefile_map3(void* self, long long offset, long long size, int64_t flags);
int64_t q_savefile_open_mode(void* self);
void q_savefile_set_text_mode_enabled(void* self, bool enabled);
bool q_savefile_is_text_mode_enabled(void* self);
bool q_savefile_is_open(void* self);
bool q_savefile_is_readable(void* self);
bool q_savefile_is_writable(void* self);
int32_t q_savefile_read_channel_count(void* self);
int32_t q_savefile_write_channel_count(void* self);
int32_t q_savefile_current_read_channel(void* self);
void q_savefile_set_current_read_channel(void* self, int channel);
int32_t q_savefile_current_write_channel(void* self);
void q_savefile_set_current_write_channel(void* self, int channel);
long long q_savefile_read(void* self, char* data, long long maxlen);
char* q_savefile_read_with_maxlen(void* self, long long maxlen);
char* q_savefile_read_all(void* self);
long long q_savefile_read_line(void* self, char* data, long long maxlen);
char* q_savefile_read_line2(void* self);
void q_savefile_start_transaction(void* self);
void q_savefile_commit_transaction(void* self);
void q_savefile_rollback_transaction(void* self);
bool q_savefile_is_transaction_started(void* self);
long long q_savefile_write(void* self, const char* data, long long lenVal);
long long q_savefile_write_with_data(void* self, const char* data);
long long q_savefile_write2(void* self, const char* data);
long long q_savefile_peek(void* self, char* data, long long maxlen);
char* q_savefile_peek_with_maxlen(void* self, long long maxlen);
long long q_savefile_skip(void* self, long long maxSize);
void q_savefile_unget_char(void* self, char c);
bool q_savefile_put_char(void* self, char c);
bool q_savefile_get_char(void* self, char* c);
const char* q_savefile_error_string(void* self);
void q_savefile_ready_read(void* self);
void q_savefile_on_ready_read(void* self, void (*slot)(void*));
void q_savefile_channel_ready_read(void* self, int channel);
void q_savefile_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_savefile_bytes_written(void* self, long long bytes);
void q_savefile_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_savefile_channel_bytes_written(void* self, int channel, long long bytes);
void q_savefile_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_savefile_about_to_close(void* self);
void q_savefile_on_about_to_close(void* self, void (*slot)(void*));
void q_savefile_read_channel_finished(void* self);
void q_savefile_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_savefile_read_line1(void* self, long long maxlen);
const char* q_savefile_object_name(void* self);
void q_savefile_set_object_name(void* self, const char* name);
bool q_savefile_is_widget_type(void* self);
bool q_savefile_is_window_type(void* self);
bool q_savefile_is_quick_item_type(void* self);
bool q_savefile_signals_blocked(void* self);
bool q_savefile_block_signals(void* self, bool b);
QThread* q_savefile_thread(void* self);
void q_savefile_move_to_thread(void* self, void* thread);
int32_t q_savefile_start_timer(void* self, int interval);
void q_savefile_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_savefile_children(void* self);
void q_savefile_set_parent(void* self, void* parent);
void q_savefile_install_event_filter(void* self, void* filterObj);
void q_savefile_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_savefile_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_savefile_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_savefile_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_savefile_disconnect_with_q_meta_object_connection(void* param1);
void q_savefile_dump_object_tree(void* self);
void q_savefile_dump_object_info(void* self);
bool q_savefile_set_property(void* self, const char* name, void* value);
QVariant* q_savefile_property(void* self, const char* name);
const char** q_savefile_dynamic_property_names(void* self);
QBindingStorage* q_savefile_binding_storage(void* self);
QBindingStorage* q_savefile_binding_storage2(void* self);
void q_savefile_destroyed(void* self);
void q_savefile_on_destroyed(void* self, void (*slot)(void*));
QObject* q_savefile_parent(void* self);
bool q_savefile_inherits(void* self, const char* classname);
void q_savefile_delete_later(void* self);
int32_t q_savefile_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_savefile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_savefile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_savefile_destroyed1(void* self, void* param1);
void q_savefile_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_savefile_is_sequential(void* self);
bool q_savefile_qbase_is_sequential(void* self);
void q_savefile_on_is_sequential(void* self, bool (*slot)());
long long q_savefile_pos(void* self);
long long q_savefile_qbase_pos(void* self);
void q_savefile_on_pos(void* self, long long (*slot)());
bool q_savefile_seek(void* self, long long offset);
bool q_savefile_qbase_seek(void* self, long long offset);
void q_savefile_on_seek(void* self, bool (*slot)(void*, long long));
bool q_savefile_at_end(void* self);
bool q_savefile_qbase_at_end(void* self);
void q_savefile_on_at_end(void* self, bool (*slot)());
long long q_savefile_size(void* self);
long long q_savefile_qbase_size(void* self);
void q_savefile_on_size(void* self, long long (*slot)());
bool q_savefile_resize(void* self, long long sz);
bool q_savefile_qbase_resize(void* self, long long sz);
void q_savefile_on_resize(void* self, bool (*slot)(void*, long long));
int64_t q_savefile_permissions(void* self);
int64_t q_savefile_qbase_permissions(void* self);
void q_savefile_on_permissions(void* self, int64_t (*slot)());
bool q_savefile_set_permissions(void* self, int64_t permissionSpec);
bool q_savefile_qbase_set_permissions(void* self, int64_t permissionSpec);
void q_savefile_on_set_permissions(void* self, bool (*slot)(void*, int64_t));
long long q_savefile_read_data(void* self, char* data, long long maxlen);
long long q_savefile_qbase_read_data(void* self, char* data, long long maxlen);
void q_savefile_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_savefile_read_line_data(void* self, char* data, long long maxlen);
long long q_savefile_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_savefile_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
bool q_savefile_reset(void* self);
bool q_savefile_qbase_reset(void* self);
void q_savefile_on_reset(void* self, bool (*slot)());
long long q_savefile_bytes_available(void* self);
long long q_savefile_qbase_bytes_available(void* self);
void q_savefile_on_bytes_available(void* self, long long (*slot)());
long long q_savefile_bytes_to_write(void* self);
long long q_savefile_qbase_bytes_to_write(void* self);
void q_savefile_on_bytes_to_write(void* self, long long (*slot)());
bool q_savefile_can_read_line(void* self);
bool q_savefile_qbase_can_read_line(void* self);
void q_savefile_on_can_read_line(void* self, bool (*slot)());
bool q_savefile_wait_for_ready_read(void* self, int msecs);
bool q_savefile_qbase_wait_for_ready_read(void* self, int msecs);
void q_savefile_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_savefile_wait_for_bytes_written(void* self, int msecs);
bool q_savefile_qbase_wait_for_bytes_written(void* self, int msecs);
void q_savefile_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
long long q_savefile_skip_data(void* self, long long maxSize);
long long q_savefile_qbase_skip_data(void* self, long long maxSize);
void q_savefile_on_skip_data(void* self, long long (*slot)(void*, long long));
bool q_savefile_event(void* self, void* event);
bool q_savefile_qbase_event(void* self, void* event);
void q_savefile_on_event(void* self, bool (*slot)(void*, void*));
bool q_savefile_event_filter(void* self, void* watched, void* event);
bool q_savefile_qbase_event_filter(void* self, void* watched, void* event);
void q_savefile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_savefile_timer_event(void* self, void* event);
void q_savefile_qbase_timer_event(void* self, void* event);
void q_savefile_on_timer_event(void* self, void (*slot)(void*, void*));
void q_savefile_child_event(void* self, void* event);
void q_savefile_qbase_child_event(void* self, void* event);
void q_savefile_on_child_event(void* self, void (*slot)(void*, void*));
void q_savefile_custom_event(void* self, void* event);
void q_savefile_qbase_custom_event(void* self, void* event);
void q_savefile_on_custom_event(void* self, void (*slot)(void*, void*));
void q_savefile_connect_notify(void* self, void* signal);
void q_savefile_qbase_connect_notify(void* self, void* signal);
void q_savefile_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_savefile_disconnect_notify(void* self, void* signal);
void q_savefile_qbase_disconnect_notify(void* self, void* signal);
void q_savefile_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_savefile_set_open_mode(void* self, int64_t openMode);
void q_savefile_qbase_set_open_mode(void* self, int64_t openMode);
void q_savefile_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_savefile_set_error_string(void* self, const char* errorString);
void q_savefile_qbase_set_error_string(void* self, const char* errorString);
void q_savefile_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_savefile_sender(void* self);
QObject* q_savefile_qbase_sender(void* self);
void q_savefile_on_sender(void* self, QObject* (*slot)());
int32_t q_savefile_sender_signal_index(void* self);
int32_t q_savefile_qbase_sender_signal_index(void* self);
void q_savefile_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_savefile_receivers(void* self, const char* signal);
int32_t q_savefile_qbase_receivers(void* self, const char* signal);
void q_savefile_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_savefile_is_signal_connected(void* self, void* signal);
bool q_savefile_qbase_is_signal_connected(void* self, void* signal);
void q_savefile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_savefile_delete(void* self);

#endif
