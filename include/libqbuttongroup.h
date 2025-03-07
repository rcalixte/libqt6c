#pragma once
#ifndef SRCQT6C_LIBQBUTTONGROUP_H
#define SRCQT6C_LIBQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QButtonGroup* q_buttongroup_new();
QButtonGroup* q_buttongroup_new2(void* parent);
QMetaObject* q_buttongroup_meta_object(void* self);
void* q_buttongroup_metacast(void* self, const char* param1);
int32_t q_buttongroup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_buttongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_buttongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_buttongroup_tr(const char* s);
void q_buttongroup_set_exclusive(void* self, bool exclusive);
bool q_buttongroup_exclusive(void* self);
void q_buttongroup_add_button(void* self, void* param1);
void q_buttongroup_remove_button(void* self, void* param1);
libqt_list /* of QAbstractButton* */ q_buttongroup_buttons(void* self);
QAbstractButton* q_buttongroup_checked_button(void* self);
QAbstractButton* q_buttongroup_button(void* self, int id);
void q_buttongroup_set_id(void* self, void* button, int id);
int32_t q_buttongroup_id(void* self, void* button);
int32_t q_buttongroup_checked_id(void* self);
void q_buttongroup_button_clicked(void* self, void* param1);
void q_buttongroup_on_button_clicked(void* self, void (*slot)(void*, void*));
void q_buttongroup_button_pressed(void* self, void* param1);
void q_buttongroup_on_button_pressed(void* self, void (*slot)(void*, void*));
void q_buttongroup_button_released(void* self, void* param1);
void q_buttongroup_on_button_released(void* self, void (*slot)(void*, void*));
void q_buttongroup_button_toggled(void* self, void* param1, bool param2);
void q_buttongroup_on_button_toggled(void* self, void (*slot)(void*, void*, bool));
void q_buttongroup_id_clicked(void* self, int param1);
void q_buttongroup_on_id_clicked(void* self, void (*slot)(void*, int));
void q_buttongroup_id_pressed(void* self, int param1);
void q_buttongroup_on_id_pressed(void* self, void (*slot)(void*, int));
void q_buttongroup_id_released(void* self, int param1);
void q_buttongroup_on_id_released(void* self, void (*slot)(void*, int));
void q_buttongroup_id_toggled(void* self, int param1, bool param2);
void q_buttongroup_on_id_toggled(void* self, void (*slot)(void*, int, bool));
const char* q_buttongroup_tr2(const char* s, const char* c);
const char* q_buttongroup_tr3(const char* s, const char* c, int n);
void q_buttongroup_add_button2(void* self, void* param1, int id);
const char* q_buttongroup_object_name(void* self);
void q_buttongroup_set_object_name(void* self, const char* name);
bool q_buttongroup_is_widget_type(void* self);
bool q_buttongroup_is_window_type(void* self);
bool q_buttongroup_is_quick_item_type(void* self);
bool q_buttongroup_signals_blocked(void* self);
bool q_buttongroup_block_signals(void* self, bool b);
QThread* q_buttongroup_thread(void* self);
void q_buttongroup_move_to_thread(void* self, void* thread);
int32_t q_buttongroup_start_timer(void* self, int interval);
void q_buttongroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_buttongroup_children(void* self);
void q_buttongroup_set_parent(void* self, void* parent);
void q_buttongroup_install_event_filter(void* self, void* filterObj);
void q_buttongroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_buttongroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_buttongroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_buttongroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_buttongroup_disconnect_with_q_meta_object_connection(void* param1);
void q_buttongroup_dump_object_tree(void* self);
void q_buttongroup_dump_object_info(void* self);
bool q_buttongroup_set_property(void* self, const char* name, void* value);
QVariant* q_buttongroup_property(void* self, const char* name);
const char** q_buttongroup_dynamic_property_names(void* self);
QBindingStorage* q_buttongroup_binding_storage(void* self);
QBindingStorage* q_buttongroup_binding_storage2(void* self);
void q_buttongroup_destroyed(void* self);
void q_buttongroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_buttongroup_parent(void* self);
bool q_buttongroup_inherits(void* self, const char* classname);
void q_buttongroup_delete_later(void* self);
int32_t q_buttongroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_buttongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_buttongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_buttongroup_destroyed1(void* self, void* param1);
void q_buttongroup_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_buttongroup_event(void* self, void* event);
bool q_buttongroup_qbase_event(void* self, void* event);
void q_buttongroup_on_event(void* self, bool (*slot)(void*, void*));
bool q_buttongroup_event_filter(void* self, void* watched, void* event);
bool q_buttongroup_qbase_event_filter(void* self, void* watched, void* event);
void q_buttongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_buttongroup_timer_event(void* self, void* event);
void q_buttongroup_qbase_timer_event(void* self, void* event);
void q_buttongroup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_buttongroup_child_event(void* self, void* event);
void q_buttongroup_qbase_child_event(void* self, void* event);
void q_buttongroup_on_child_event(void* self, void (*slot)(void*, void*));
void q_buttongroup_custom_event(void* self, void* event);
void q_buttongroup_qbase_custom_event(void* self, void* event);
void q_buttongroup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_buttongroup_connect_notify(void* self, void* signal);
void q_buttongroup_qbase_connect_notify(void* self, void* signal);
void q_buttongroup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_buttongroup_disconnect_notify(void* self, void* signal);
void q_buttongroup_qbase_disconnect_notify(void* self, void* signal);
void q_buttongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_buttongroup_sender(void* self);
QObject* q_buttongroup_qbase_sender(void* self);
void q_buttongroup_on_sender(void* self, QObject* (*slot)());
int32_t q_buttongroup_sender_signal_index(void* self);
int32_t q_buttongroup_qbase_sender_signal_index(void* self);
void q_buttongroup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_buttongroup_receivers(void* self, const char* signal);
int32_t q_buttongroup_qbase_receivers(void* self, const char* signal);
void q_buttongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_buttongroup_is_signal_connected(void* self, void* signal);
bool q_buttongroup_qbase_is_signal_connected(void* self, void* signal);
void q_buttongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_buttongroup_delete(void* self);

#endif
