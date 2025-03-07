#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H
#define SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioformat.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QWaveDecoder* q_wavedecoder_new(void* device);
QWaveDecoder* q_wavedecoder_new2(void* device, void* format);
QWaveDecoder* q_wavedecoder_new3(void* device, void* parent);
QWaveDecoder* q_wavedecoder_new4(void* device, void* format, void* parent);
QMetaObject* q_wavedecoder_meta_object(void* self);
void* q_wavedecoder_metacast(void* self, const char* param1);
int32_t q_wavedecoder_metacall(void* self, int64_t param1, int param2, void* param3);
void q_wavedecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_wavedecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_wavedecoder_tr(const char* s);
QAudioFormat* q_wavedecoder_audio_format(void* self);
QIODevice* q_wavedecoder_get_device(void* self);
int32_t q_wavedecoder_duration(void* self);
long long q_wavedecoder_header_length();
bool q_wavedecoder_open(void* self, int64_t mode);
void q_wavedecoder_on_open(void* self, bool (*slot)(void*, int64_t));
bool q_wavedecoder_qbase_open(void* self, int64_t mode);
void q_wavedecoder_close(void* self);
void q_wavedecoder_on_close(void* self, void (*slot)());
void q_wavedecoder_qbase_close(void* self);
bool q_wavedecoder_seek(void* self, long long pos);
void q_wavedecoder_on_seek(void* self, bool (*slot)(void*, long long));
bool q_wavedecoder_qbase_seek(void* self, long long pos);
long long q_wavedecoder_pos(void* self);
void q_wavedecoder_on_pos(void* self, long long (*slot)());
long long q_wavedecoder_qbase_pos(void* self);
long long q_wavedecoder_size(void* self);
void q_wavedecoder_on_size(void* self, long long (*slot)());
long long q_wavedecoder_qbase_size(void* self);
bool q_wavedecoder_is_sequential(void* self);
void q_wavedecoder_on_is_sequential(void* self, bool (*slot)());
bool q_wavedecoder_qbase_is_sequential(void* self);
long long q_wavedecoder_bytes_available(void* self);
void q_wavedecoder_on_bytes_available(void* self, long long (*slot)());
long long q_wavedecoder_qbase_bytes_available(void* self);
void q_wavedecoder_format_known(void* self);
void q_wavedecoder_on_format_known(void* self, void (*slot)(void*));
void q_wavedecoder_parsing_error(void* self);
void q_wavedecoder_on_parsing_error(void* self, void (*slot)(void*));
const char* q_wavedecoder_tr2(const char* s, const char* c);
const char* q_wavedecoder_tr3(const char* s, const char* c, int n);
int64_t q_wavedecoder_open_mode(void* self);
void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled);
bool q_wavedecoder_is_text_mode_enabled(void* self);
bool q_wavedecoder_is_open(void* self);
bool q_wavedecoder_is_readable(void* self);
bool q_wavedecoder_is_writable(void* self);
int32_t q_wavedecoder_read_channel_count(void* self);
int32_t q_wavedecoder_write_channel_count(void* self);
int32_t q_wavedecoder_current_read_channel(void* self);
void q_wavedecoder_set_current_read_channel(void* self, int channel);
int32_t q_wavedecoder_current_write_channel(void* self);
void q_wavedecoder_set_current_write_channel(void* self, int channel);
long long q_wavedecoder_read(void* self, char* data, long long maxlen);
char* q_wavedecoder_read_with_maxlen(void* self, long long maxlen);
char* q_wavedecoder_read_all(void* self);
long long q_wavedecoder_read_line(void* self, char* data, long long maxlen);
char* q_wavedecoder_read_line2(void* self);
void q_wavedecoder_start_transaction(void* self);
void q_wavedecoder_commit_transaction(void* self);
void q_wavedecoder_rollback_transaction(void* self);
bool q_wavedecoder_is_transaction_started(void* self);
long long q_wavedecoder_write(void* self, const char* data, long long lenVal);
long long q_wavedecoder_write_with_data(void* self, const char* data);
long long q_wavedecoder_write2(void* self, const char* data);
long long q_wavedecoder_peek(void* self, char* data, long long maxlen);
char* q_wavedecoder_peek_with_maxlen(void* self, long long maxlen);
long long q_wavedecoder_skip(void* self, long long maxSize);
void q_wavedecoder_unget_char(void* self, char c);
bool q_wavedecoder_put_char(void* self, char c);
bool q_wavedecoder_get_char(void* self, char* c);
const char* q_wavedecoder_error_string(void* self);
void q_wavedecoder_ready_read(void* self);
void q_wavedecoder_on_ready_read(void* self, void (*slot)(void*));
void q_wavedecoder_channel_ready_read(void* self, int channel);
void q_wavedecoder_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_wavedecoder_bytes_written(void* self, long long bytes);
void q_wavedecoder_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_wavedecoder_channel_bytes_written(void* self, int channel, long long bytes);
void q_wavedecoder_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_wavedecoder_about_to_close(void* self);
void q_wavedecoder_on_about_to_close(void* self, void (*slot)(void*));
void q_wavedecoder_read_channel_finished(void* self);
void q_wavedecoder_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_wavedecoder_read_line1(void* self, long long maxlen);
const char* q_wavedecoder_object_name(void* self);
void q_wavedecoder_set_object_name(void* self, const char* name);
bool q_wavedecoder_is_widget_type(void* self);
bool q_wavedecoder_is_window_type(void* self);
bool q_wavedecoder_is_quick_item_type(void* self);
bool q_wavedecoder_signals_blocked(void* self);
bool q_wavedecoder_block_signals(void* self, bool b);
QThread* q_wavedecoder_thread(void* self);
void q_wavedecoder_move_to_thread(void* self, void* thread);
int32_t q_wavedecoder_start_timer(void* self, int interval);
void q_wavedecoder_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_wavedecoder_children(void* self);
void q_wavedecoder_set_parent(void* self, void* parent);
void q_wavedecoder_install_event_filter(void* self, void* filterObj);
void q_wavedecoder_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_wavedecoder_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_wavedecoder_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_wavedecoder_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_wavedecoder_disconnect_with_q_meta_object_connection(void* param1);
void q_wavedecoder_dump_object_tree(void* self);
void q_wavedecoder_dump_object_info(void* self);
bool q_wavedecoder_set_property(void* self, const char* name, void* value);
QVariant* q_wavedecoder_property(void* self, const char* name);
const char** q_wavedecoder_dynamic_property_names(void* self);
QBindingStorage* q_wavedecoder_binding_storage(void* self);
QBindingStorage* q_wavedecoder_binding_storage2(void* self);
void q_wavedecoder_destroyed(void* self);
void q_wavedecoder_on_destroyed(void* self, void (*slot)(void*));
QObject* q_wavedecoder_parent(void* self);
bool q_wavedecoder_inherits(void* self, const char* classname);
void q_wavedecoder_delete_later(void* self);
int32_t q_wavedecoder_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_wavedecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_wavedecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_wavedecoder_destroyed1(void* self, void* param1);
void q_wavedecoder_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_wavedecoder_at_end(void* self);
bool q_wavedecoder_qbase_at_end(void* self);
void q_wavedecoder_on_at_end(void* self, bool (*slot)());
bool q_wavedecoder_reset(void* self);
bool q_wavedecoder_qbase_reset(void* self);
void q_wavedecoder_on_reset(void* self, bool (*slot)());
long long q_wavedecoder_bytes_to_write(void* self);
long long q_wavedecoder_qbase_bytes_to_write(void* self);
void q_wavedecoder_on_bytes_to_write(void* self, long long (*slot)());
bool q_wavedecoder_can_read_line(void* self);
bool q_wavedecoder_qbase_can_read_line(void* self);
void q_wavedecoder_on_can_read_line(void* self, bool (*slot)());
bool q_wavedecoder_wait_for_ready_read(void* self, int msecs);
bool q_wavedecoder_qbase_wait_for_ready_read(void* self, int msecs);
void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs);
bool q_wavedecoder_qbase_wait_for_bytes_written(void* self, int msecs);
void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
long long q_wavedecoder_read_line_data(void* self, char* data, long long maxlen);
long long q_wavedecoder_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_wavedecoder_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_wavedecoder_skip_data(void* self, long long maxSize);
long long q_wavedecoder_qbase_skip_data(void* self, long long maxSize);
void q_wavedecoder_on_skip_data(void* self, long long (*slot)(void*, long long));
bool q_wavedecoder_event(void* self, void* event);
bool q_wavedecoder_qbase_event(void* self, void* event);
void q_wavedecoder_on_event(void* self, bool (*slot)(void*, void*));
bool q_wavedecoder_event_filter(void* self, void* watched, void* event);
bool q_wavedecoder_qbase_event_filter(void* self, void* watched, void* event);
void q_wavedecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_wavedecoder_timer_event(void* self, void* event);
void q_wavedecoder_qbase_timer_event(void* self, void* event);
void q_wavedecoder_on_timer_event(void* self, void (*slot)(void*, void*));
void q_wavedecoder_child_event(void* self, void* event);
void q_wavedecoder_qbase_child_event(void* self, void* event);
void q_wavedecoder_on_child_event(void* self, void (*slot)(void*, void*));
void q_wavedecoder_custom_event(void* self, void* event);
void q_wavedecoder_qbase_custom_event(void* self, void* event);
void q_wavedecoder_on_custom_event(void* self, void (*slot)(void*, void*));
void q_wavedecoder_connect_notify(void* self, void* signal);
void q_wavedecoder_qbase_connect_notify(void* self, void* signal);
void q_wavedecoder_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_wavedecoder_disconnect_notify(void* self, void* signal);
void q_wavedecoder_qbase_disconnect_notify(void* self, void* signal);
void q_wavedecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_wavedecoder_set_open_mode(void* self, int64_t openMode);
void q_wavedecoder_qbase_set_open_mode(void* self, int64_t openMode);
void q_wavedecoder_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_wavedecoder_set_error_string(void* self, const char* errorString);
void q_wavedecoder_qbase_set_error_string(void* self, const char* errorString);
void q_wavedecoder_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_wavedecoder_sender(void* self);
QObject* q_wavedecoder_qbase_sender(void* self);
void q_wavedecoder_on_sender(void* self, QObject* (*slot)());
int32_t q_wavedecoder_sender_signal_index(void* self);
int32_t q_wavedecoder_qbase_sender_signal_index(void* self);
void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_wavedecoder_receivers(void* self, const char* signal);
int32_t q_wavedecoder_qbase_receivers(void* self, const char* signal);
void q_wavedecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_wavedecoder_is_signal_connected(void* self, void* signal);
bool q_wavedecoder_qbase_is_signal_connected(void* self, void* signal);
void q_wavedecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_wavedecoder_delete(void* self);

#endif
