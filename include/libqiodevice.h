#pragma once
#ifndef SRCQT6C_LIBQIODEVICE_H
#define SRCQT6C_LIBQIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QIODevice* q_iodevice_new();
QIODevice* q_iodevice_new2(void* parent);
QMetaObject* q_iodevice_meta_object(void* self);
void* q_iodevice_metacast(void* self, const char* param1);
int32_t q_iodevice_metacall(void* self, int64_t param1, int param2, void* param3);
void q_iodevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_iodevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_iodevice_tr(const char* s);
int64_t q_iodevice_open_mode(void* self);
void q_iodevice_set_text_mode_enabled(void* self, bool enabled);
bool q_iodevice_is_text_mode_enabled(void* self);
bool q_iodevice_is_open(void* self);
bool q_iodevice_is_readable(void* self);
bool q_iodevice_is_writable(void* self);
bool q_iodevice_is_sequential(void* self);
void q_iodevice_on_is_sequential(void* self, bool (*slot)());
bool q_iodevice_qbase_is_sequential(void* self);
int32_t q_iodevice_read_channel_count(void* self);
int32_t q_iodevice_write_channel_count(void* self);
int32_t q_iodevice_current_read_channel(void* self);
void q_iodevice_set_current_read_channel(void* self, int channel);
int32_t q_iodevice_current_write_channel(void* self);
void q_iodevice_set_current_write_channel(void* self, int channel);
bool q_iodevice_open(void* self, int64_t mode);
void q_iodevice_on_open(void* self, bool (*slot)(void*, int64_t));
bool q_iodevice_qbase_open(void* self, int64_t mode);
void q_iodevice_close(void* self);
void q_iodevice_on_close(void* self, void (*slot)());
void q_iodevice_qbase_close(void* self);
long long q_iodevice_pos(void* self);
void q_iodevice_on_pos(void* self, long long (*slot)());
long long q_iodevice_qbase_pos(void* self);
long long q_iodevice_size(void* self);
void q_iodevice_on_size(void* self, long long (*slot)());
long long q_iodevice_qbase_size(void* self);
bool q_iodevice_seek(void* self, long long pos);
void q_iodevice_on_seek(void* self, bool (*slot)(void*, long long));
bool q_iodevice_qbase_seek(void* self, long long pos);
bool q_iodevice_at_end(void* self);
void q_iodevice_on_at_end(void* self, bool (*slot)());
bool q_iodevice_qbase_at_end(void* self);
bool q_iodevice_reset(void* self);
void q_iodevice_on_reset(void* self, bool (*slot)());
bool q_iodevice_qbase_reset(void* self);
long long q_iodevice_bytes_available(void* self);
void q_iodevice_on_bytes_available(void* self, long long (*slot)());
long long q_iodevice_qbase_bytes_available(void* self);
long long q_iodevice_bytes_to_write(void* self);
void q_iodevice_on_bytes_to_write(void* self, long long (*slot)());
long long q_iodevice_qbase_bytes_to_write(void* self);
long long q_iodevice_read(void* self, char* data, long long maxlen);
char* q_iodevice_read_with_maxlen(void* self, long long maxlen);
char* q_iodevice_read_all(void* self);
long long q_iodevice_read_line(void* self, char* data, long long maxlen);
char* q_iodevice_read_line2(void* self);
bool q_iodevice_can_read_line(void* self);
void q_iodevice_on_can_read_line(void* self, bool (*slot)());
bool q_iodevice_qbase_can_read_line(void* self);
void q_iodevice_start_transaction(void* self);
void q_iodevice_commit_transaction(void* self);
void q_iodevice_rollback_transaction(void* self);
bool q_iodevice_is_transaction_started(void* self);
long long q_iodevice_write(void* self, const char* data, long long lenVal);
long long q_iodevice_write_with_data(void* self, const char* data);
long long q_iodevice_write2(void* self, const char* data);
long long q_iodevice_peek(void* self, char* data, long long maxlen);
char* q_iodevice_peek_with_maxlen(void* self, long long maxlen);
long long q_iodevice_skip(void* self, long long maxSize);
bool q_iodevice_wait_for_ready_read(void* self, int msecs);
void q_iodevice_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_iodevice_qbase_wait_for_ready_read(void* self, int msecs);
bool q_iodevice_wait_for_bytes_written(void* self, int msecs);
void q_iodevice_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_iodevice_qbase_wait_for_bytes_written(void* self, int msecs);
void q_iodevice_unget_char(void* self, char c);
bool q_iodevice_put_char(void* self, char c);
bool q_iodevice_get_char(void* self, char* c);
const char* q_iodevice_error_string(void* self);
void q_iodevice_ready_read(void* self);
void q_iodevice_on_ready_read(void* self, void (*slot)(void*));
void q_iodevice_channel_ready_read(void* self, int channel);
void q_iodevice_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_iodevice_bytes_written(void* self, long long bytes);
void q_iodevice_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_iodevice_channel_bytes_written(void* self, int channel, long long bytes);
void q_iodevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_iodevice_about_to_close(void* self);
void q_iodevice_on_about_to_close(void* self, void (*slot)(void*));
void q_iodevice_read_channel_finished(void* self);
void q_iodevice_on_read_channel_finished(void* self, void (*slot)(void*));
long long q_iodevice_read_data(void* self, char* data, long long maxlen);
void q_iodevice_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_iodevice_qbase_read_data(void* self, char* data, long long maxlen);
long long q_iodevice_read_line_data(void* self, char* data, long long maxlen);
void q_iodevice_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_iodevice_qbase_read_line_data(void* self, char* data, long long maxlen);
long long q_iodevice_skip_data(void* self, long long maxSize);
void q_iodevice_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_iodevice_qbase_skip_data(void* self, long long maxSize);
long long q_iodevice_write_data(void* self, const char* data, long long lenVal);
void q_iodevice_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_iodevice_qbase_write_data(void* self, const char* data, long long lenVal);
void q_iodevice_set_open_mode(void* self, int64_t openMode);
void q_iodevice_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_iodevice_qbase_set_open_mode(void* self, int64_t openMode);
void q_iodevice_set_error_string(void* self, const char* errorString);
void q_iodevice_on_set_error_string(void* self, void (*slot)(void*, const char*));
void q_iodevice_qbase_set_error_string(void* self, const char* errorString);
const char* q_iodevice_tr2(const char* s, const char* c);
const char* q_iodevice_tr3(const char* s, const char* c, int n);
char* q_iodevice_read_line1(void* self, long long maxlen);
const char* q_iodevice_object_name(void* self);
void q_iodevice_set_object_name(void* self, const char* name);
bool q_iodevice_is_widget_type(void* self);
bool q_iodevice_is_window_type(void* self);
bool q_iodevice_is_quick_item_type(void* self);
bool q_iodevice_signals_blocked(void* self);
bool q_iodevice_block_signals(void* self, bool b);
QThread* q_iodevice_thread(void* self);
void q_iodevice_move_to_thread(void* self, void* thread);
int32_t q_iodevice_start_timer(void* self, int interval);
void q_iodevice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_iodevice_children(void* self);
void q_iodevice_set_parent(void* self, void* parent);
void q_iodevice_install_event_filter(void* self, void* filterObj);
void q_iodevice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_iodevice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_iodevice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_iodevice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_iodevice_disconnect_with_q_meta_object_connection(void* param1);
void q_iodevice_dump_object_tree(void* self);
void q_iodevice_dump_object_info(void* self);
bool q_iodevice_set_property(void* self, const char* name, void* value);
QVariant* q_iodevice_property(void* self, const char* name);
const char** q_iodevice_dynamic_property_names(void* self);
QBindingStorage* q_iodevice_binding_storage(void* self);
QBindingStorage* q_iodevice_binding_storage2(void* self);
void q_iodevice_destroyed(void* self);
void q_iodevice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_iodevice_parent(void* self);
bool q_iodevice_inherits(void* self, const char* classname);
void q_iodevice_delete_later(void* self);
int32_t q_iodevice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_iodevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_iodevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_iodevice_destroyed1(void* self, void* param1);
void q_iodevice_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_iodevice_event(void* self, void* event);
bool q_iodevice_qbase_event(void* self, void* event);
void q_iodevice_on_event(void* self, bool (*slot)(void*, void*));
bool q_iodevice_event_filter(void* self, void* watched, void* event);
bool q_iodevice_qbase_event_filter(void* self, void* watched, void* event);
void q_iodevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_iodevice_timer_event(void* self, void* event);
void q_iodevice_qbase_timer_event(void* self, void* event);
void q_iodevice_on_timer_event(void* self, void (*slot)(void*, void*));
void q_iodevice_child_event(void* self, void* event);
void q_iodevice_qbase_child_event(void* self, void* event);
void q_iodevice_on_child_event(void* self, void (*slot)(void*, void*));
void q_iodevice_custom_event(void* self, void* event);
void q_iodevice_qbase_custom_event(void* self, void* event);
void q_iodevice_on_custom_event(void* self, void (*slot)(void*, void*));
void q_iodevice_connect_notify(void* self, void* signal);
void q_iodevice_qbase_connect_notify(void* self, void* signal);
void q_iodevice_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_iodevice_disconnect_notify(void* self, void* signal);
void q_iodevice_qbase_disconnect_notify(void* self, void* signal);
void q_iodevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_iodevice_sender(void* self);
QObject* q_iodevice_qbase_sender(void* self);
void q_iodevice_on_sender(void* self, QObject* (*slot)());
int32_t q_iodevice_sender_signal_index(void* self);
int32_t q_iodevice_qbase_sender_signal_index(void* self);
void q_iodevice_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_iodevice_receivers(void* self, const char* signal);
int32_t q_iodevice_qbase_receivers(void* self, const char* signal);
void q_iodevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_iodevice_is_signal_connected(void* self, void* signal);
bool q_iodevice_qbase_is_signal_connected(void* self, void* signal);
void q_iodevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_iodevice_delete(void* self);

#endif
