#pragma once
#ifndef SRC_CHARTSQT6C_LIBQVXYMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxymodelmapper.h"
#include "libqxyseries.h"

QVXYModelMapper* q_vxymodelmapper_new();
QVXYModelMapper* q_vxymodelmapper_new2(void* parent);
QMetaObject* q_vxymodelmapper_meta_object(void* self);
void* q_vxymodelmapper_metacast(void* self, const char* param1);
int32_t q_vxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_vxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_vxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_vxymodelmapper_tr(const char* s);
QAbstractItemModel* q_vxymodelmapper_model(void* self);
void q_vxymodelmapper_set_model(void* self, void* model);
QXYSeries* q_vxymodelmapper_series(void* self);
void q_vxymodelmapper_set_series(void* self, void* series);
int32_t q_vxymodelmapper_x_column(void* self);
void q_vxymodelmapper_set_x_column(void* self, int xColumn);
int32_t q_vxymodelmapper_y_column(void* self);
void q_vxymodelmapper_set_y_column(void* self, int yColumn);
int32_t q_vxymodelmapper_first_row(void* self);
void q_vxymodelmapper_set_first_row(void* self, int firstRow);
int32_t q_vxymodelmapper_row_count(void* self);
void q_vxymodelmapper_set_row_count(void* self, int rowCount);
void q_vxymodelmapper_series_replaced(void* self);
void q_vxymodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_vxymodelmapper_model_replaced(void* self);
void q_vxymodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_vxymodelmapper_x_column_changed(void* self);
void q_vxymodelmapper_on_x_column_changed(void* self, void (*slot)(void*));
void q_vxymodelmapper_y_column_changed(void* self);
void q_vxymodelmapper_on_y_column_changed(void* self, void (*slot)(void*));
void q_vxymodelmapper_first_row_changed(void* self);
void q_vxymodelmapper_on_first_row_changed(void* self, void (*slot)(void*));
void q_vxymodelmapper_row_count_changed(void* self);
void q_vxymodelmapper_on_row_count_changed(void* self, void (*slot)(void*));
const char* q_vxymodelmapper_tr2(const char* s, const char* c);
const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n);
const char* q_vxymodelmapper_object_name(void* self);
void q_vxymodelmapper_set_object_name(void* self, const char* name);
bool q_vxymodelmapper_is_widget_type(void* self);
bool q_vxymodelmapper_is_window_type(void* self);
bool q_vxymodelmapper_is_quick_item_type(void* self);
bool q_vxymodelmapper_signals_blocked(void* self);
bool q_vxymodelmapper_block_signals(void* self, bool b);
QThread* q_vxymodelmapper_thread(void* self);
void q_vxymodelmapper_move_to_thread(void* self, void* thread);
int32_t q_vxymodelmapper_start_timer(void* self, int interval);
void q_vxymodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_vxymodelmapper_children(void* self);
void q_vxymodelmapper_set_parent(void* self, void* parent);
void q_vxymodelmapper_install_event_filter(void* self, void* filterObj);
void q_vxymodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_vxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_vxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_vxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_vxymodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_vxymodelmapper_dump_object_tree(void* self);
void q_vxymodelmapper_dump_object_info(void* self);
bool q_vxymodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_vxymodelmapper_property(void* self, const char* name);
const char** q_vxymodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_vxymodelmapper_binding_storage(void* self);
QBindingStorage* q_vxymodelmapper_binding_storage2(void* self);
void q_vxymodelmapper_destroyed(void* self);
void q_vxymodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_vxymodelmapper_parent(void* self);
bool q_vxymodelmapper_inherits(void* self, const char* classname);
void q_vxymodelmapper_delete_later(void* self);
int32_t q_vxymodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_vxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_vxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_vxymodelmapper_destroyed1(void* self, void* param1);
void q_vxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_vxymodelmapper_event(void* self, void* event);
bool q_vxymodelmapper_qbase_event(void* self, void* event);
void q_vxymodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event);
bool q_vxymodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_vxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_vxymodelmapper_timer_event(void* self, void* event);
void q_vxymodelmapper_qbase_timer_event(void* self, void* event);
void q_vxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_vxymodelmapper_child_event(void* self, void* event);
void q_vxymodelmapper_qbase_child_event(void* self, void* event);
void q_vxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_vxymodelmapper_custom_event(void* self, void* event);
void q_vxymodelmapper_qbase_custom_event(void* self, void* event);
void q_vxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_vxymodelmapper_connect_notify(void* self, void* signal);
void q_vxymodelmapper_qbase_connect_notify(void* self, void* signal);
void q_vxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_vxymodelmapper_disconnect_notify(void* self, void* signal);
void q_vxymodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_vxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_vxymodelmapper_first(void* self);
int32_t q_vxymodelmapper_qbase_first(void* self);
void q_vxymodelmapper_on_first(void* self, int32_t (*slot)());
void q_vxymodelmapper_set_first(void* self, int first);
void q_vxymodelmapper_qbase_set_first(void* self, int first);
void q_vxymodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_vxymodelmapper_count(void* self);
int32_t q_vxymodelmapper_qbase_count(void* self);
void q_vxymodelmapper_on_count(void* self, int32_t (*slot)());
void q_vxymodelmapper_set_count(void* self, int count);
void q_vxymodelmapper_qbase_set_count(void* self, int count);
void q_vxymodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int64_t q_vxymodelmapper_orientation(void* self);
int64_t q_vxymodelmapper_qbase_orientation(void* self);
void q_vxymodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_vxymodelmapper_set_orientation(void* self, int64_t orientation);
void q_vxymodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_vxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
int32_t q_vxymodelmapper_x_section(void* self);
int32_t q_vxymodelmapper_qbase_x_section(void* self);
void q_vxymodelmapper_on_x_section(void* self, int32_t (*slot)());
void q_vxymodelmapper_set_x_section(void* self, int xSection);
void q_vxymodelmapper_qbase_set_x_section(void* self, int xSection);
void q_vxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int));
int32_t q_vxymodelmapper_y_section(void* self);
int32_t q_vxymodelmapper_qbase_y_section(void* self);
void q_vxymodelmapper_on_y_section(void* self, int32_t (*slot)());
void q_vxymodelmapper_set_y_section(void* self, int ySection);
void q_vxymodelmapper_qbase_set_y_section(void* self, int ySection);
void q_vxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int));
QObject* q_vxymodelmapper_sender(void* self);
QObject* q_vxymodelmapper_qbase_sender(void* self);
void q_vxymodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_vxymodelmapper_sender_signal_index(void* self);
int32_t q_vxymodelmapper_qbase_sender_signal_index(void* self);
void q_vxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_vxymodelmapper_receivers(void* self, const char* signal);
int32_t q_vxymodelmapper_qbase_receivers(void* self, const char* signal);
void q_vxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_vxymodelmapper_is_signal_connected(void* self, void* signal);
bool q_vxymodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_vxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_vxymodelmapper_delete(void* self);

#endif
