#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIODECODER_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIODECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiobuffer.h"
#include "libqaudioformat.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QAudioDecoder* q_audiodecoder_new();
QAudioDecoder* q_audiodecoder_new2(void* parent);
QMetaObject* q_audiodecoder_meta_object(void* self);
void* q_audiodecoder_metacast(void* self, const char* param1);
int32_t q_audiodecoder_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audiodecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audiodecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audiodecoder_tr(const char* s);
bool q_audiodecoder_is_supported(void* self);
bool q_audiodecoder_is_decoding(void* self);
QUrl* q_audiodecoder_source(void* self);
void q_audiodecoder_set_source(void* self, void* fileName);
QIODevice* q_audiodecoder_source_device(void* self);
void q_audiodecoder_set_source_device(void* self, void* device);
QAudioFormat* q_audiodecoder_audio_format(void* self);
void q_audiodecoder_set_audio_format(void* self, void* format);
int64_t q_audiodecoder_error(void* self);
const char* q_audiodecoder_error_string(void* self);
QAudioBuffer* q_audiodecoder_read(void* self);
bool q_audiodecoder_buffer_available(void* self);
long long q_audiodecoder_position(void* self);
long long q_audiodecoder_duration(void* self);
void q_audiodecoder_start(void* self);
void q_audiodecoder_stop(void* self);
void q_audiodecoder_buffer_available_changed(void* self, bool param1);
void q_audiodecoder_buffer_ready(void* self);
void q_audiodecoder_finished(void* self);
void q_audiodecoder_is_decoding_changed(void* self, bool param1);
void q_audiodecoder_format_changed(void* self, void* format);
void q_audiodecoder_error_with_error_val(void* self, int64_t errorVal);
void q_audiodecoder_source_changed(void* self);
void q_audiodecoder_position_changed(void* self, long long position);
void q_audiodecoder_duration_changed(void* self, long long duration);
const char* q_audiodecoder_tr2(const char* s, const char* c);
const char* q_audiodecoder_tr3(const char* s, const char* c, int n);
const char* q_audiodecoder_object_name(void* self);
void q_audiodecoder_set_object_name(void* self, const char* name);
bool q_audiodecoder_is_widget_type(void* self);
bool q_audiodecoder_is_window_type(void* self);
bool q_audiodecoder_is_quick_item_type(void* self);
bool q_audiodecoder_signals_blocked(void* self);
bool q_audiodecoder_block_signals(void* self, bool b);
QThread* q_audiodecoder_thread(void* self);
void q_audiodecoder_move_to_thread(void* self, void* thread);
int32_t q_audiodecoder_start_timer(void* self, int interval);
void q_audiodecoder_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audiodecoder_children(void* self);
void q_audiodecoder_set_parent(void* self, void* parent);
void q_audiodecoder_install_event_filter(void* self, void* filterObj);
void q_audiodecoder_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audiodecoder_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audiodecoder_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audiodecoder_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audiodecoder_disconnect_with_q_meta_object_connection(void* param1);
void q_audiodecoder_dump_object_tree(void* self);
void q_audiodecoder_dump_object_info(void* self);
bool q_audiodecoder_set_property(void* self, const char* name, void* value);
QVariant* q_audiodecoder_property(void* self, const char* name);
const char** q_audiodecoder_dynamic_property_names(void* self);
QBindingStorage* q_audiodecoder_binding_storage(void* self);
QBindingStorage* q_audiodecoder_binding_storage2(void* self);
void q_audiodecoder_destroyed(void* self);
void q_audiodecoder_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audiodecoder_parent(void* self);
bool q_audiodecoder_inherits(void* self, const char* classname);
void q_audiodecoder_delete_later(void* self);
int32_t q_audiodecoder_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audiodecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audiodecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audiodecoder_destroyed1(void* self, void* param1);
void q_audiodecoder_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audiodecoder_event(void* self, void* event);
bool q_audiodecoder_qbase_event(void* self, void* event);
void q_audiodecoder_on_event(void* self, bool (*slot)(void*, void*));
bool q_audiodecoder_event_filter(void* self, void* watched, void* event);
bool q_audiodecoder_qbase_event_filter(void* self, void* watched, void* event);
void q_audiodecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audiodecoder_timer_event(void* self, void* event);
void q_audiodecoder_qbase_timer_event(void* self, void* event);
void q_audiodecoder_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audiodecoder_child_event(void* self, void* event);
void q_audiodecoder_qbase_child_event(void* self, void* event);
void q_audiodecoder_on_child_event(void* self, void (*slot)(void*, void*));
void q_audiodecoder_custom_event(void* self, void* event);
void q_audiodecoder_qbase_custom_event(void* self, void* event);
void q_audiodecoder_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audiodecoder_connect_notify(void* self, void* signal);
void q_audiodecoder_qbase_connect_notify(void* self, void* signal);
void q_audiodecoder_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audiodecoder_disconnect_notify(void* self, void* signal);
void q_audiodecoder_qbase_disconnect_notify(void* self, void* signal);
void q_audiodecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audiodecoder_sender(void* self);
QObject* q_audiodecoder_qbase_sender(void* self);
void q_audiodecoder_on_sender(void* self, QObject* (*slot)());
int32_t q_audiodecoder_sender_signal_index(void* self);
int32_t q_audiodecoder_qbase_sender_signal_index(void* self);
void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audiodecoder_receivers(void* self, const char* signal);
int32_t q_audiodecoder_qbase_receivers(void* self, const char* signal);
void q_audiodecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audiodecoder_is_signal_connected(void* self, void* signal);
bool q_audiodecoder_qbase_is_signal_connected(void* self, void* signal);
void q_audiodecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audiodecoder_delete(void* self);

/// https://doc.qt.io/qt-6/qaudiodecoder.html#types

typedef enum {
    QAUDIODECODER_ERROR_NOERROR = 0,
    QAUDIODECODER_ERROR_RESOURCEERROR = 1,
    QAUDIODECODER_ERROR_FORMATERROR = 2,
    QAUDIODECODER_ERROR_ACCESSDENIEDERROR = 3,
    QAUDIODECODER_ERROR_NOTSUPPORTEDERROR = 4
} QAudioDecoder__Error;

#endif
