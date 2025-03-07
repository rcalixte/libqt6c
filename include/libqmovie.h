#pragma once
#ifndef SRCQT6C_LIBQMOVIE_H
#define SRCQT6C_LIBQMOVIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcolor.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMovie* q_movie_new();
QMovie* q_movie_new2(void* device);
QMovie* q_movie_new3(const char* fileName);
QMovie* q_movie_new4(void* parent);
QMovie* q_movie_new5(void* device, const char* format);
QMovie* q_movie_new6(void* device, const char* format, void* parent);
QMovie* q_movie_new7(const char* fileName, const char* format);
QMovie* q_movie_new8(const char* fileName, const char* format, void* parent);
QMetaObject* q_movie_meta_object(void* self);
void* q_movie_metacast(void* self, const char* param1);
int32_t q_movie_metacall(void* self, int64_t param1, int param2, void* param3);
void q_movie_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_movie_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_movie_tr(const char* s);
const char** q_movie_supported_formats();
void q_movie_set_device(void* self, void* device);
QIODevice* q_movie_device(void* self);
void q_movie_set_file_name(void* self, const char* fileName);
const char* q_movie_file_name(void* self);
void q_movie_set_format(void* self, const char* format);
char* q_movie_format(void* self);
void q_movie_set_background_color(void* self, void* color);
QColor* q_movie_background_color(void* self);
int64_t q_movie_state(void* self);
QRect* q_movie_frame_rect(void* self);
QImage* q_movie_current_image(void* self);
QPixmap* q_movie_current_pixmap(void* self);
bool q_movie_is_valid(void* self);
int64_t q_movie_last_error(void* self);
const char* q_movie_last_error_string(void* self);
bool q_movie_jump_to_frame(void* self, int frameNumber);
int32_t q_movie_loop_count(void* self);
int32_t q_movie_frame_count(void* self);
int32_t q_movie_next_frame_delay(void* self);
int32_t q_movie_current_frame_number(void* self);
int32_t q_movie_speed(void* self);
QSize* q_movie_scaled_size(void* self);
void q_movie_set_scaled_size(void* self, void* size);
int64_t q_movie_cache_mode(void* self);
void q_movie_set_cache_mode(void* self, int64_t mode);
void q_movie_started(void* self);
void q_movie_on_started(void* self, void (*slot)(void*));
void q_movie_resized(void* self, void* size);
void q_movie_on_resized(void* self, void (*slot)(void*, void*));
void q_movie_updated(void* self, void* rect);
void q_movie_on_updated(void* self, void (*slot)(void*, void*));
void q_movie_state_changed(void* self, int64_t state);
void q_movie_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_movie_error(void* self, int64_t errorVal);
void q_movie_on_error(void* self, void (*slot)(void*, int64_t));
void q_movie_finished(void* self);
void q_movie_on_finished(void* self, void (*slot)(void*));
void q_movie_frame_changed(void* self, int frameNumber);
void q_movie_on_frame_changed(void* self, void (*slot)(void*, int));
void q_movie_start(void* self);
bool q_movie_jump_to_next_frame(void* self);
void q_movie_set_paused(void* self, bool paused);
void q_movie_stop(void* self);
void q_movie_set_speed(void* self, int percentSpeed);
const char* q_movie_tr2(const char* s, const char* c);
const char* q_movie_tr3(const char* s, const char* c, int n);
const char* q_movie_object_name(void* self);
void q_movie_set_object_name(void* self, const char* name);
bool q_movie_is_widget_type(void* self);
bool q_movie_is_window_type(void* self);
bool q_movie_is_quick_item_type(void* self);
bool q_movie_signals_blocked(void* self);
bool q_movie_block_signals(void* self, bool b);
QThread* q_movie_thread(void* self);
void q_movie_move_to_thread(void* self, void* thread);
int32_t q_movie_start_timer(void* self, int interval);
void q_movie_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_movie_children(void* self);
void q_movie_set_parent(void* self, void* parent);
void q_movie_install_event_filter(void* self, void* filterObj);
void q_movie_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_movie_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_movie_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_movie_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_movie_disconnect_with_q_meta_object_connection(void* param1);
void q_movie_dump_object_tree(void* self);
void q_movie_dump_object_info(void* self);
bool q_movie_set_property(void* self, const char* name, void* value);
QVariant* q_movie_property(void* self, const char* name);
const char** q_movie_dynamic_property_names(void* self);
QBindingStorage* q_movie_binding_storage(void* self);
QBindingStorage* q_movie_binding_storage2(void* self);
void q_movie_destroyed(void* self);
void q_movie_on_destroyed(void* self, void (*slot)(void*));
QObject* q_movie_parent(void* self);
bool q_movie_inherits(void* self, const char* classname);
void q_movie_delete_later(void* self);
int32_t q_movie_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_movie_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_movie_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_movie_destroyed1(void* self, void* param1);
void q_movie_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_movie_event(void* self, void* event);
bool q_movie_qbase_event(void* self, void* event);
void q_movie_on_event(void* self, bool (*slot)(void*, void*));
bool q_movie_event_filter(void* self, void* watched, void* event);
bool q_movie_qbase_event_filter(void* self, void* watched, void* event);
void q_movie_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_movie_timer_event(void* self, void* event);
void q_movie_qbase_timer_event(void* self, void* event);
void q_movie_on_timer_event(void* self, void (*slot)(void*, void*));
void q_movie_child_event(void* self, void* event);
void q_movie_qbase_child_event(void* self, void* event);
void q_movie_on_child_event(void* self, void (*slot)(void*, void*));
void q_movie_custom_event(void* self, void* event);
void q_movie_qbase_custom_event(void* self, void* event);
void q_movie_on_custom_event(void* self, void (*slot)(void*, void*));
void q_movie_connect_notify(void* self, void* signal);
void q_movie_qbase_connect_notify(void* self, void* signal);
void q_movie_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_movie_disconnect_notify(void* self, void* signal);
void q_movie_qbase_disconnect_notify(void* self, void* signal);
void q_movie_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_movie_sender(void* self);
QObject* q_movie_qbase_sender(void* self);
void q_movie_on_sender(void* self, QObject* (*slot)());
int32_t q_movie_sender_signal_index(void* self);
int32_t q_movie_qbase_sender_signal_index(void* self);
void q_movie_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_movie_receivers(void* self, const char* signal);
int32_t q_movie_qbase_receivers(void* self, const char* signal);
void q_movie_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_movie_is_signal_connected(void* self, void* signal);
bool q_movie_qbase_is_signal_connected(void* self, void* signal);
void q_movie_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_movie_delete(void* self);

/// https://doc.qt.io/qt-6/qmovie.html#types

typedef enum {
    QMOVIE_MOVIESTATE_NOTRUNNING = 0,
    QMOVIE_MOVIESTATE_PAUSED = 1,
    QMOVIE_MOVIESTATE_RUNNING = 2
} QMovie__MovieState;

typedef enum {
    QMOVIE_CACHEMODE_CACHENONE = 0,
    QMOVIE_CACHEMODE_CACHEALL = 1
} QMovie__CacheMode;

#endif
