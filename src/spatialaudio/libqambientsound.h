#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAMBIENTSOUND_H
#define SRC_SPATIALAUDIOQT6C_LIBQAMBIENTSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioengine.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QAmbientSound* q_ambientsound_new(void* engine);
QMetaObject* q_ambientsound_meta_object(void* self);
void* q_ambientsound_metacast(void* self, const char* param1);
int32_t q_ambientsound_metacall(void* self, int64_t param1, int param2, void* param3);
void q_ambientsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_ambientsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_ambientsound_tr(const char* s);
void q_ambientsound_set_source(void* self, void* url);
QUrl* q_ambientsound_source(void* self);
int32_t q_ambientsound_loops(void* self);
void q_ambientsound_set_loops(void* self, int loops);
bool q_ambientsound_auto_play(void* self);
void q_ambientsound_set_auto_play(void* self, bool autoPlay);
void q_ambientsound_set_volume(void* self, float volume);
float q_ambientsound_volume(void* self);
QAudioEngine* q_ambientsound_engine(void* self);
void q_ambientsound_source_changed(void* self);
void q_ambientsound_on_source_changed(void* self, void (*slot)(void*));
void q_ambientsound_loops_changed(void* self);
void q_ambientsound_on_loops_changed(void* self, void (*slot)(void*));
void q_ambientsound_auto_play_changed(void* self);
void q_ambientsound_on_auto_play_changed(void* self, void (*slot)(void*));
void q_ambientsound_volume_changed(void* self);
void q_ambientsound_on_volume_changed(void* self, void (*slot)(void*));
void q_ambientsound_play(void* self);
void q_ambientsound_pause(void* self);
void q_ambientsound_stop(void* self);
const char* q_ambientsound_tr2(const char* s, const char* c);
const char* q_ambientsound_tr3(const char* s, const char* c, int n);
const char* q_ambientsound_object_name(void* self);
void q_ambientsound_set_object_name(void* self, const char* name);
bool q_ambientsound_is_widget_type(void* self);
bool q_ambientsound_is_window_type(void* self);
bool q_ambientsound_is_quick_item_type(void* self);
bool q_ambientsound_signals_blocked(void* self);
bool q_ambientsound_block_signals(void* self, bool b);
QThread* q_ambientsound_thread(void* self);
void q_ambientsound_move_to_thread(void* self, void* thread);
int32_t q_ambientsound_start_timer(void* self, int interval);
void q_ambientsound_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_ambientsound_children(void* self);
void q_ambientsound_set_parent(void* self, void* parent);
void q_ambientsound_install_event_filter(void* self, void* filterObj);
void q_ambientsound_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_ambientsound_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_ambientsound_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_ambientsound_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_ambientsound_disconnect_with_q_meta_object_connection(void* param1);
void q_ambientsound_dump_object_tree(void* self);
void q_ambientsound_dump_object_info(void* self);
bool q_ambientsound_set_property(void* self, const char* name, void* value);
QVariant* q_ambientsound_property(void* self, const char* name);
const char** q_ambientsound_dynamic_property_names(void* self);
QBindingStorage* q_ambientsound_binding_storage(void* self);
QBindingStorage* q_ambientsound_binding_storage2(void* self);
void q_ambientsound_destroyed(void* self);
void q_ambientsound_on_destroyed(void* self, void (*slot)(void*));
QObject* q_ambientsound_parent(void* self);
bool q_ambientsound_inherits(void* self, const char* classname);
void q_ambientsound_delete_later(void* self);
int32_t q_ambientsound_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_ambientsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_ambientsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_ambientsound_destroyed1(void* self, void* param1);
void q_ambientsound_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_ambientsound_event(void* self, void* event);
bool q_ambientsound_qbase_event(void* self, void* event);
void q_ambientsound_on_event(void* self, bool (*slot)(void*, void*));
bool q_ambientsound_event_filter(void* self, void* watched, void* event);
bool q_ambientsound_qbase_event_filter(void* self, void* watched, void* event);
void q_ambientsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_ambientsound_timer_event(void* self, void* event);
void q_ambientsound_qbase_timer_event(void* self, void* event);
void q_ambientsound_on_timer_event(void* self, void (*slot)(void*, void*));
void q_ambientsound_child_event(void* self, void* event);
void q_ambientsound_qbase_child_event(void* self, void* event);
void q_ambientsound_on_child_event(void* self, void (*slot)(void*, void*));
void q_ambientsound_custom_event(void* self, void* event);
void q_ambientsound_qbase_custom_event(void* self, void* event);
void q_ambientsound_on_custom_event(void* self, void (*slot)(void*, void*));
void q_ambientsound_connect_notify(void* self, void* signal);
void q_ambientsound_qbase_connect_notify(void* self, void* signal);
void q_ambientsound_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_ambientsound_disconnect_notify(void* self, void* signal);
void q_ambientsound_qbase_disconnect_notify(void* self, void* signal);
void q_ambientsound_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_ambientsound_sender(void* self);
QObject* q_ambientsound_qbase_sender(void* self);
void q_ambientsound_on_sender(void* self, QObject* (*slot)());
int32_t q_ambientsound_sender_signal_index(void* self);
int32_t q_ambientsound_qbase_sender_signal_index(void* self);
void q_ambientsound_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_ambientsound_receivers(void* self, const char* signal);
int32_t q_ambientsound_qbase_receivers(void* self, const char* signal);
void q_ambientsound_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_ambientsound_is_signal_connected(void* self, void* signal);
bool q_ambientsound_qbase_is_signal_connected(void* self, void* signal);
void q_ambientsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_ambientsound_delete(void* self);

/// https://doc.qt.io/qt-6/qambientsound.html#types

typedef enum {
    QAMBIENTSOUND_LOOPS_INFINITE = -1,
    QAMBIENTSOUND_LOOPS_ONCE = 1
} QAmbientSound__Loops;

#endif
