#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIMACRO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIMACRO_H

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
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QsciMacro* q_scimacro_new(void* parent);
QsciMacro* q_scimacro_new2(const char* asc, void* parent);
QMetaObject* q_scimacro_meta_object(void* self);
void* q_scimacro_metacast(void* self, const char* param1);
int32_t q_scimacro_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scimacro_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scimacro_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scimacro_tr(const char* s);
void q_scimacro_clear(void* self);
bool q_scimacro_load(void* self, const char* asc);
const char* q_scimacro_save(void* self);
void q_scimacro_play(void* self);
void q_scimacro_on_play(void* self, void (*slot)());
void q_scimacro_qbase_play(void* self);
void q_scimacro_start_recording(void* self);
void q_scimacro_on_start_recording(void* self, void (*slot)());
void q_scimacro_qbase_start_recording(void* self);
void q_scimacro_end_recording(void* self);
void q_scimacro_on_end_recording(void* self, void (*slot)());
void q_scimacro_qbase_end_recording(void* self);
const char* q_scimacro_tr2(const char* s, const char* c);
const char* q_scimacro_tr3(const char* s, const char* c, int n);
const char* q_scimacro_object_name(void* self);
void q_scimacro_set_object_name(void* self, const char* name);
bool q_scimacro_is_widget_type(void* self);
bool q_scimacro_is_window_type(void* self);
bool q_scimacro_is_quick_item_type(void* self);
bool q_scimacro_signals_blocked(void* self);
bool q_scimacro_block_signals(void* self, bool b);
QThread* q_scimacro_thread(void* self);
void q_scimacro_move_to_thread(void* self, void* thread);
int32_t q_scimacro_start_timer(void* self, int interval);
void q_scimacro_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scimacro_children(void* self);
void q_scimacro_set_parent(void* self, void* parent);
void q_scimacro_install_event_filter(void* self, void* filterObj);
void q_scimacro_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scimacro_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scimacro_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scimacro_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scimacro_disconnect_with_q_meta_object_connection(void* param1);
void q_scimacro_dump_object_tree(void* self);
void q_scimacro_dump_object_info(void* self);
bool q_scimacro_set_property(void* self, const char* name, void* value);
QVariant* q_scimacro_property(void* self, const char* name);
const char** q_scimacro_dynamic_property_names(void* self);
QBindingStorage* q_scimacro_binding_storage(void* self);
QBindingStorage* q_scimacro_binding_storage2(void* self);
void q_scimacro_destroyed(void* self);
void q_scimacro_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scimacro_parent(void* self);
bool q_scimacro_inherits(void* self, const char* classname);
void q_scimacro_delete_later(void* self);
int32_t q_scimacro_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scimacro_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scimacro_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scimacro_destroyed1(void* self, void* param1);
void q_scimacro_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_scimacro_event(void* self, void* event);
bool q_scimacro_qbase_event(void* self, void* event);
void q_scimacro_on_event(void* self, bool (*slot)(void*, void*));
bool q_scimacro_event_filter(void* self, void* watched, void* event);
bool q_scimacro_qbase_event_filter(void* self, void* watched, void* event);
void q_scimacro_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scimacro_timer_event(void* self, void* event);
void q_scimacro_qbase_timer_event(void* self, void* event);
void q_scimacro_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scimacro_child_event(void* self, void* event);
void q_scimacro_qbase_child_event(void* self, void* event);
void q_scimacro_on_child_event(void* self, void (*slot)(void*, void*));
void q_scimacro_custom_event(void* self, void* event);
void q_scimacro_qbase_custom_event(void* self, void* event);
void q_scimacro_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scimacro_connect_notify(void* self, void* signal);
void q_scimacro_qbase_connect_notify(void* self, void* signal);
void q_scimacro_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scimacro_disconnect_notify(void* self, void* signal);
void q_scimacro_qbase_disconnect_notify(void* self, void* signal);
void q_scimacro_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scimacro_sender(void* self);
QObject* q_scimacro_qbase_sender(void* self);
void q_scimacro_on_sender(void* self, QObject* (*slot)());
int32_t q_scimacro_sender_signal_index(void* self);
int32_t q_scimacro_qbase_sender_signal_index(void* self);
void q_scimacro_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scimacro_receivers(void* self, const char* signal);
int32_t q_scimacro_qbase_receivers(void* self, const char* signal);
void q_scimacro_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scimacro_is_signal_connected(void* self, void* signal);
bool q_scimacro_qbase_is_signal_connected(void* self, void* signal);
void q_scimacro_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scimacro_delete(void* self);

#endif
