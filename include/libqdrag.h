#pragma once
#ifndef SRCQT6C_LIBQDRAG_H
#define SRCQT6C_LIBQDRAG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QDrag* q_drag_new(void* dragSource);
QMetaObject* q_drag_meta_object(void* self);
void* q_drag_metacast(void* self, const char* param1);
int32_t q_drag_metacall(void* self, int64_t param1, int param2, void* param3);
void q_drag_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_drag_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_drag_tr(const char* s);
void q_drag_set_mime_data(void* self, void* data);
QMimeData* q_drag_mime_data(void* self);
void q_drag_set_pixmap(void* self, void* pixmap);
QPixmap* q_drag_pixmap(void* self);
void q_drag_set_hot_spot(void* self, void* hotspot);
QPoint* q_drag_hot_spot(void* self);
QObject* q_drag_source(void* self);
QObject* q_drag_target(void* self);
int64_t q_drag_exec(void* self);
int64_t q_drag_exec2(void* self, int64_t supportedActions, int64_t defaultAction);
void q_drag_set_drag_cursor(void* self, void* cursor, int64_t action);
QPixmap* q_drag_drag_cursor(void* self, int64_t action);
int64_t q_drag_supported_actions(void* self);
int64_t q_drag_default_action(void* self);
void q_drag_cancel();
void q_drag_action_changed(void* self, int64_t action);
void q_drag_on_action_changed(void* self, void (*slot)(void*, int64_t));
void q_drag_target_changed(void* self, void* newTarget);
void q_drag_on_target_changed(void* self, void (*slot)(void*, void*));
const char* q_drag_tr2(const char* s, const char* c);
const char* q_drag_tr3(const char* s, const char* c, int n);
int64_t q_drag_exec1(void* self, int64_t supportedActions);
const char* q_drag_object_name(void* self);
void q_drag_set_object_name(void* self, const char* name);
bool q_drag_is_widget_type(void* self);
bool q_drag_is_window_type(void* self);
bool q_drag_is_quick_item_type(void* self);
bool q_drag_signals_blocked(void* self);
bool q_drag_block_signals(void* self, bool b);
QThread* q_drag_thread(void* self);
void q_drag_move_to_thread(void* self, void* thread);
int32_t q_drag_start_timer(void* self, int interval);
void q_drag_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_drag_children(void* self);
void q_drag_set_parent(void* self, void* parent);
void q_drag_install_event_filter(void* self, void* filterObj);
void q_drag_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_drag_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_drag_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_drag_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_drag_disconnect_with_q_meta_object_connection(void* param1);
void q_drag_dump_object_tree(void* self);
void q_drag_dump_object_info(void* self);
bool q_drag_set_property(void* self, const char* name, void* value);
QVariant* q_drag_property(void* self, const char* name);
const char** q_drag_dynamic_property_names(void* self);
QBindingStorage* q_drag_binding_storage(void* self);
QBindingStorage* q_drag_binding_storage2(void* self);
void q_drag_destroyed(void* self);
void q_drag_on_destroyed(void* self, void (*slot)(void*));
QObject* q_drag_parent(void* self);
bool q_drag_inherits(void* self, const char* classname);
void q_drag_delete_later(void* self);
int32_t q_drag_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_drag_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_drag_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_drag_destroyed1(void* self, void* param1);
void q_drag_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_drag_event(void* self, void* event);
bool q_drag_qbase_event(void* self, void* event);
void q_drag_on_event(void* self, bool (*slot)(void*, void*));
bool q_drag_event_filter(void* self, void* watched, void* event);
bool q_drag_qbase_event_filter(void* self, void* watched, void* event);
void q_drag_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_drag_timer_event(void* self, void* event);
void q_drag_qbase_timer_event(void* self, void* event);
void q_drag_on_timer_event(void* self, void (*slot)(void*, void*));
void q_drag_child_event(void* self, void* event);
void q_drag_qbase_child_event(void* self, void* event);
void q_drag_on_child_event(void* self, void (*slot)(void*, void*));
void q_drag_custom_event(void* self, void* event);
void q_drag_qbase_custom_event(void* self, void* event);
void q_drag_on_custom_event(void* self, void (*slot)(void*, void*));
void q_drag_connect_notify(void* self, void* signal);
void q_drag_qbase_connect_notify(void* self, void* signal);
void q_drag_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_drag_disconnect_notify(void* self, void* signal);
void q_drag_qbase_disconnect_notify(void* self, void* signal);
void q_drag_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_drag_sender(void* self);
QObject* q_drag_qbase_sender(void* self);
void q_drag_on_sender(void* self, QObject* (*slot)());
int32_t q_drag_sender_signal_index(void* self);
int32_t q_drag_qbase_sender_signal_index(void* self);
void q_drag_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_drag_receivers(void* self, const char* signal);
int32_t q_drag_qbase_receivers(void* self, const char* signal);
void q_drag_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_drag_is_signal_connected(void* self, void* signal);
bool q_drag_qbase_is_signal_connected(void* self, void* signal);
void q_drag_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_drag_delete(void* self);

#endif
