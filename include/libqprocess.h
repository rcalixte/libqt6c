#pragma once
#ifndef SRCQT6C_LIBQPROCESS_H
#define SRCQT6C_LIBQPROCESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QProcessEnvironment* q_processenvironment_new();
QProcessEnvironment* q_processenvironment_new2(int64_t param1);
QProcessEnvironment* q_processenvironment_new3(void* other);
void q_processenvironment_operator_assign(void* self, void* other);
void q_processenvironment_swap(void* self, void* other);
bool q_processenvironment_operator_equal(void* self, void* other);
bool q_processenvironment_operator_not_equal(void* self, void* other);
bool q_processenvironment_is_empty(void* self);
bool q_processenvironment_inherits_from_parent(void* self);
void q_processenvironment_clear(void* self);
bool q_processenvironment_contains(void* self, const char* name);
void q_processenvironment_insert(void* self, const char* name, const char* value);
void q_processenvironment_remove(void* self, const char* name);
const char* q_processenvironment_value(void* self, const char* name);
const char** q_processenvironment_to_string_list(void* self);
const char** q_processenvironment_keys(void* self);
void q_processenvironment_insert_with_q_process_environment(void* self, void* e);
QProcessEnvironment* q_processenvironment_system_environment();
const char* q_processenvironment_value2(void* self, const char* name, const char* defaultValue);
void q_processenvironment_delete(void* self);

QProcess* q_process_new();
QProcess* q_process_new2(void* parent);
QMetaObject* q_process_meta_object(void* self);
void* q_process_metacast(void* self, const char* param1);
int32_t q_process_metacall(void* self, int64_t param1, int param2, void* param3);
void q_process_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_process_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_process_tr(const char* s);
void q_process_start(void* self, const char* program);
void q_process_start2(void* self);
void q_process_start_command(void* self, const char* command);
bool q_process_start_detached(void* self);
bool q_process_open(void* self, int64_t mode);
void q_process_on_open(void* self, bool (*slot)(void*, int64_t));
bool q_process_qbase_open(void* self, int64_t mode);
const char* q_process_program(void* self);
void q_process_set_program(void* self, const char* program);
const char** q_process_arguments(void* self);
void q_process_set_arguments(void* self, const char* arguments[]);
int64_t q_process_process_channel_mode(void* self);
void q_process_set_process_channel_mode(void* self, int64_t mode);
int64_t q_process_input_channel_mode(void* self);
void q_process_set_input_channel_mode(void* self, int64_t mode);
int64_t q_process_read_channel(void* self);
void q_process_set_read_channel(void* self, int64_t channel);
void q_process_close_read_channel(void* self, int64_t channel);
void q_process_close_write_channel(void* self);
void q_process_set_standard_input_file(void* self, const char* fileName);
void q_process_set_standard_output_file(void* self, const char* fileName);
void q_process_set_standard_error_file(void* self, const char* fileName);
void q_process_set_standard_output_process(void* self, void* destination);
const char* q_process_working_directory(void* self);
void q_process_set_working_directory(void* self, const char* dir);
void q_process_set_environment(void* self, const char* environment[]);
const char** q_process_environment(void* self);
void q_process_set_process_environment(void* self, void* environment);
QProcessEnvironment* q_process_process_environment(void* self);
int64_t q_process_error(void* self);
int64_t q_process_state(void* self);
long long q_process_process_id(void* self);
bool q_process_wait_for_started(void* self);
bool q_process_wait_for_ready_read(void* self, int msecs);
void q_process_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_process_qbase_wait_for_ready_read(void* self, int msecs);
bool q_process_wait_for_bytes_written(void* self, int msecs);
void q_process_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_process_qbase_wait_for_bytes_written(void* self, int msecs);
bool q_process_wait_for_finished(void* self);
char* q_process_read_all_standard_output(void* self);
char* q_process_read_all_standard_error(void* self);
int32_t q_process_exit_code(void* self);
int64_t q_process_exit_status(void* self);
long long q_process_bytes_to_write(void* self);
void q_process_on_bytes_to_write(void* self, long long (*slot)());
long long q_process_qbase_bytes_to_write(void* self);
bool q_process_is_sequential(void* self);
void q_process_on_is_sequential(void* self, bool (*slot)());
bool q_process_qbase_is_sequential(void* self);
void q_process_close(void* self);
void q_process_on_close(void* self, void (*slot)());
void q_process_qbase_close(void* self);
int32_t q_process_execute(const char* program);
bool q_process_start_detached_with_program(const char* program);
const char** q_process_system_environment();
const char* q_process_null_device();
void q_process_terminate(void* self);
void q_process_kill(void* self);
void q_process_finished(void* self, int exitCode);
void q_process_on_finished(void* self, void (*slot)(void*, int));
void q_process_error_occurred(void* self, int64_t errorVal);
void q_process_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_process_set_process_state(void* self, int64_t state);
void q_process_on_set_process_state(void* self, void (*slot)(void*, int64_t));
void q_process_qbase_set_process_state(void* self, int64_t state);
long long q_process_read_data(void* self, char* data, long long maxlen);
void q_process_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_process_qbase_read_data(void* self, char* data, long long maxlen);
long long q_process_write_data(void* self, const char* data, long long lenVal);
void q_process_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_process_qbase_write_data(void* self, const char* data, long long lenVal);
const char* q_process_tr2(const char* s, const char* c);
const char* q_process_tr3(const char* s, const char* c, int n);
void q_process_start22(void* self, const char* program, const char* arguments[]);
void q_process_start3(void* self, const char* program, const char* arguments[], int64_t mode);
void q_process_start1(void* self, int64_t mode);
void q_process_start_command2(void* self, const char* command, int64_t mode);
bool q_process_start_detached1(void* self, long long* pid);
void q_process_set_standard_output_file2(void* self, const char* fileName, int64_t mode);
void q_process_set_standard_error_file2(void* self, const char* fileName, int64_t mode);
bool q_process_wait_for_started1(void* self, int msecs);
bool q_process_wait_for_finished1(void* self, int msecs);
int32_t q_process_execute2(const char* program, const char* arguments[]);
bool q_process_start_detached2(const char* program, const char* arguments[]);
bool q_process_start_detached3(const char* program, const char* arguments[], const char* workingDirectory);
bool q_process_start_detached4(const char* program, const char* arguments[], const char* workingDirectory, long long* pid);
void q_process_finished2(void* self, int exitCode, int64_t exitStatus);
void q_process_on_finished2(void* self, void (*slot)(void*, int, int64_t));
int64_t q_process_open_mode(void* self);
void q_process_set_text_mode_enabled(void* self, bool enabled);
bool q_process_is_text_mode_enabled(void* self);
bool q_process_is_open(void* self);
bool q_process_is_readable(void* self);
bool q_process_is_writable(void* self);
int32_t q_process_read_channel_count(void* self);
int32_t q_process_write_channel_count(void* self);
int32_t q_process_current_read_channel(void* self);
void q_process_set_current_read_channel(void* self, int channel);
int32_t q_process_current_write_channel(void* self);
void q_process_set_current_write_channel(void* self, int channel);
long long q_process_read(void* self, char* data, long long maxlen);
char* q_process_read_with_maxlen(void* self, long long maxlen);
char* q_process_read_all(void* self);
long long q_process_read_line(void* self, char* data, long long maxlen);
char* q_process_read_line2(void* self);
void q_process_start_transaction(void* self);
void q_process_commit_transaction(void* self);
void q_process_rollback_transaction(void* self);
bool q_process_is_transaction_started(void* self);
long long q_process_write(void* self, const char* data, long long lenVal);
long long q_process_write_with_data(void* self, const char* data);
long long q_process_write2(void* self, const char* data);
long long q_process_peek(void* self, char* data, long long maxlen);
char* q_process_peek_with_maxlen(void* self, long long maxlen);
long long q_process_skip(void* self, long long maxSize);
void q_process_unget_char(void* self, char c);
bool q_process_put_char(void* self, char c);
bool q_process_get_char(void* self, char* c);
const char* q_process_error_string(void* self);
void q_process_ready_read(void* self);
void q_process_on_ready_read(void* self, void (*slot)(void*));
void q_process_channel_ready_read(void* self, int channel);
void q_process_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_process_bytes_written(void* self, long long bytes);
void q_process_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_process_channel_bytes_written(void* self, int channel, long long bytes);
void q_process_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_process_about_to_close(void* self);
void q_process_on_about_to_close(void* self, void (*slot)(void*));
void q_process_read_channel_finished(void* self);
void q_process_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_process_read_line1(void* self, long long maxlen);
const char* q_process_object_name(void* self);
void q_process_set_object_name(void* self, const char* name);
bool q_process_is_widget_type(void* self);
bool q_process_is_window_type(void* self);
bool q_process_is_quick_item_type(void* self);
bool q_process_signals_blocked(void* self);
bool q_process_block_signals(void* self, bool b);
QThread* q_process_thread(void* self);
void q_process_move_to_thread(void* self, void* thread);
int32_t q_process_start_timer(void* self, int interval);
void q_process_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_process_children(void* self);
void q_process_set_parent(void* self, void* parent);
void q_process_install_event_filter(void* self, void* filterObj);
void q_process_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_process_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_process_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_process_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_process_disconnect_with_q_meta_object_connection(void* param1);
void q_process_dump_object_tree(void* self);
void q_process_dump_object_info(void* self);
bool q_process_set_property(void* self, const char* name, void* value);
QVariant* q_process_property(void* self, const char* name);
const char** q_process_dynamic_property_names(void* self);
QBindingStorage* q_process_binding_storage(void* self);
QBindingStorage* q_process_binding_storage2(void* self);
void q_process_destroyed(void* self);
void q_process_on_destroyed(void* self, void (*slot)(void*));
QObject* q_process_parent(void* self);
bool q_process_inherits(void* self, const char* classname);
void q_process_delete_later(void* self);
int32_t q_process_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_process_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_process_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_process_destroyed1(void* self, void* param1);
void q_process_on_destroyed1(void* self, void (*slot)(void*, void*));
long long q_process_pos(void* self);
long long q_process_qbase_pos(void* self);
void q_process_on_pos(void* self, long long (*slot)());
long long q_process_size(void* self);
long long q_process_qbase_size(void* self);
void q_process_on_size(void* self, long long (*slot)());
bool q_process_seek(void* self, long long pos);
bool q_process_qbase_seek(void* self, long long pos);
void q_process_on_seek(void* self, bool (*slot)(void*, long long));
bool q_process_at_end(void* self);
bool q_process_qbase_at_end(void* self);
void q_process_on_at_end(void* self, bool (*slot)());
bool q_process_reset(void* self);
bool q_process_qbase_reset(void* self);
void q_process_on_reset(void* self, bool (*slot)());
long long q_process_bytes_available(void* self);
long long q_process_qbase_bytes_available(void* self);
void q_process_on_bytes_available(void* self, long long (*slot)());
bool q_process_can_read_line(void* self);
bool q_process_qbase_can_read_line(void* self);
void q_process_on_can_read_line(void* self, bool (*slot)());
long long q_process_read_line_data(void* self, char* data, long long maxlen);
long long q_process_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_process_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_process_skip_data(void* self, long long maxSize);
long long q_process_qbase_skip_data(void* self, long long maxSize);
void q_process_on_skip_data(void* self, long long (*slot)(void*, long long));
bool q_process_event(void* self, void* event);
bool q_process_qbase_event(void* self, void* event);
void q_process_on_event(void* self, bool (*slot)(void*, void*));
bool q_process_event_filter(void* self, void* watched, void* event);
bool q_process_qbase_event_filter(void* self, void* watched, void* event);
void q_process_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_process_timer_event(void* self, void* event);
void q_process_qbase_timer_event(void* self, void* event);
void q_process_on_timer_event(void* self, void (*slot)(void*, void*));
void q_process_child_event(void* self, void* event);
void q_process_qbase_child_event(void* self, void* event);
void q_process_on_child_event(void* self, void (*slot)(void*, void*));
void q_process_custom_event(void* self, void* event);
void q_process_qbase_custom_event(void* self, void* event);
void q_process_on_custom_event(void* self, void (*slot)(void*, void*));
void q_process_connect_notify(void* self, void* signal);
void q_process_qbase_connect_notify(void* self, void* signal);
void q_process_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_process_disconnect_notify(void* self, void* signal);
void q_process_qbase_disconnect_notify(void* self, void* signal);
void q_process_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_process_set_open_mode(void* self, int64_t openMode);
void q_process_qbase_set_open_mode(void* self, int64_t openMode);
void q_process_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_process_set_error_string(void* self, const char* errorString);
void q_process_qbase_set_error_string(void* self, const char* errorString);
void q_process_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_process_sender(void* self);
QObject* q_process_qbase_sender(void* self);
void q_process_on_sender(void* self, QObject* (*slot)());
int32_t q_process_sender_signal_index(void* self);
int32_t q_process_qbase_sender_signal_index(void* self);
void q_process_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_process_receivers(void* self, const char* signal);
int32_t q_process_qbase_receivers(void* self, const char* signal);
void q_process_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_process_is_signal_connected(void* self, void* signal);
bool q_process_qbase_is_signal_connected(void* self, void* signal);
void q_process_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_process_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess.html#types

typedef enum {
    QPROCESSENVIRONMENT_INITIALIZATION_INHERITFROMPARENT = 0
} QProcessEnvironment__Initialization;

typedef enum {
    QPROCESS_PROCESSERROR_FAILEDTOSTART = 0,
    QPROCESS_PROCESSERROR_CRASHED = 1,
    QPROCESS_PROCESSERROR_TIMEDOUT = 2,
    QPROCESS_PROCESSERROR_READERROR = 3,
    QPROCESS_PROCESSERROR_WRITEERROR = 4,
    QPROCESS_PROCESSERROR_UNKNOWNERROR = 5
} QProcess__ProcessError;

typedef enum {
    QPROCESS_PROCESSSTATE_NOTRUNNING = 0,
    QPROCESS_PROCESSSTATE_STARTING = 1,
    QPROCESS_PROCESSSTATE_RUNNING = 2
} QProcess__ProcessState;

typedef enum {
    QPROCESS_PROCESSCHANNEL_STANDARDOUTPUT = 0,
    QPROCESS_PROCESSCHANNEL_STANDARDERROR = 1
} QProcess__ProcessChannel;

typedef enum {
    QPROCESS_PROCESSCHANNELMODE_SEPARATECHANNELS = 0,
    QPROCESS_PROCESSCHANNELMODE_MERGEDCHANNELS = 1,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDCHANNELS = 2,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDOUTPUTCHANNEL = 3,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDERRORCHANNEL = 4
} QProcess__ProcessChannelMode;

typedef enum {
    QPROCESS_INPUTCHANNELMODE_MANAGEDINPUTCHANNEL = 0,
    QPROCESS_INPUTCHANNELMODE_FORWARDEDINPUTCHANNEL = 1
} QProcess__InputChannelMode;

typedef enum {
    QPROCESS_EXITSTATUS_NORMALEXIT = 0,
    QPROCESS_EXITSTATUS_CRASHEXIT = 1
} QProcess__ExitStatus;

#endif
