#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOSINK_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOSINK_H

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
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqvideoframe.h"

QVideoSink* q_videosink_new();
QVideoSink* q_videosink_new2(void* parent);
QMetaObject* q_videosink_meta_object(void* self);
void* q_videosink_metacast(void* self, const char* param1);
int32_t q_videosink_metacall(void* self, int64_t param1, int param2, void* param3);
void q_videosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_videosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_videosink_tr(const char* s);
QSize* q_videosink_video_size(void* self);
const char* q_videosink_subtitle_text(void* self);
void q_videosink_set_subtitle_text(void* self, const char* subtitle);
void q_videosink_set_video_frame(void* self, void* frame);
QVideoFrame* q_videosink_video_frame(void* self);
void q_videosink_video_frame_changed(void* self, void* frame);
void q_videosink_on_video_frame_changed(void* self, void (*slot)(void*, void*));
void q_videosink_subtitle_text_changed(void* self, const char* subtitleText);
void q_videosink_on_subtitle_text_changed(void* self, void (*slot)(void*, const char*));
void q_videosink_video_size_changed(void* self);
void q_videosink_on_video_size_changed(void* self, void (*slot)(void*));
const char* q_videosink_tr2(const char* s, const char* c);
const char* q_videosink_tr3(const char* s, const char* c, int n);
const char* q_videosink_object_name(void* self);
void q_videosink_set_object_name(void* self, const char* name);
bool q_videosink_is_widget_type(void* self);
bool q_videosink_is_window_type(void* self);
bool q_videosink_is_quick_item_type(void* self);
bool q_videosink_signals_blocked(void* self);
bool q_videosink_block_signals(void* self, bool b);
QThread* q_videosink_thread(void* self);
void q_videosink_move_to_thread(void* self, void* thread);
int32_t q_videosink_start_timer(void* self, int interval);
void q_videosink_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_videosink_children(void* self);
void q_videosink_set_parent(void* self, void* parent);
void q_videosink_install_event_filter(void* self, void* filterObj);
void q_videosink_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_videosink_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_videosink_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_videosink_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_videosink_disconnect_with_q_meta_object_connection(void* param1);
void q_videosink_dump_object_tree(void* self);
void q_videosink_dump_object_info(void* self);
bool q_videosink_set_property(void* self, const char* name, void* value);
QVariant* q_videosink_property(void* self, const char* name);
const char** q_videosink_dynamic_property_names(void* self);
QBindingStorage* q_videosink_binding_storage(void* self);
QBindingStorage* q_videosink_binding_storage2(void* self);
void q_videosink_destroyed(void* self);
void q_videosink_on_destroyed(void* self, void (*slot)(void*));
QObject* q_videosink_parent(void* self);
bool q_videosink_inherits(void* self, const char* classname);
void q_videosink_delete_later(void* self);
int32_t q_videosink_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_videosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_videosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_videosink_destroyed1(void* self, void* param1);
void q_videosink_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_videosink_event(void* self, void* event);
bool q_videosink_qbase_event(void* self, void* event);
void q_videosink_on_event(void* self, bool (*slot)(void*, void*));
bool q_videosink_event_filter(void* self, void* watched, void* event);
bool q_videosink_qbase_event_filter(void* self, void* watched, void* event);
void q_videosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_videosink_timer_event(void* self, void* event);
void q_videosink_qbase_timer_event(void* self, void* event);
void q_videosink_on_timer_event(void* self, void (*slot)(void*, void*));
void q_videosink_child_event(void* self, void* event);
void q_videosink_qbase_child_event(void* self, void* event);
void q_videosink_on_child_event(void* self, void (*slot)(void*, void*));
void q_videosink_custom_event(void* self, void* event);
void q_videosink_qbase_custom_event(void* self, void* event);
void q_videosink_on_custom_event(void* self, void (*slot)(void*, void*));
void q_videosink_connect_notify(void* self, void* signal);
void q_videosink_qbase_connect_notify(void* self, void* signal);
void q_videosink_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_videosink_disconnect_notify(void* self, void* signal);
void q_videosink_qbase_disconnect_notify(void* self, void* signal);
void q_videosink_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_videosink_sender(void* self);
QObject* q_videosink_qbase_sender(void* self);
void q_videosink_on_sender(void* self, QObject* (*slot)());
int32_t q_videosink_sender_signal_index(void* self);
int32_t q_videosink_qbase_sender_signal_index(void* self);
void q_videosink_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_videosink_receivers(void* self, const char* signal);
int32_t q_videosink_qbase_receivers(void* self, const char* signal);
void q_videosink_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_videosink_is_signal_connected(void* self, void* signal);
bool q_videosink_qbase_is_signal_connected(void* self, void* signal);
void q_videosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_videosink_delete(void* self);

#endif
