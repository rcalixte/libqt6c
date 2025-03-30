#pragma once
#ifndef SRC_CHARTSQT6C_LIBQHXYMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQHXYMODELMAPPER_H

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

QHXYModelMapper* q_hxymodelmapper_new();
QHXYModelMapper* q_hxymodelmapper_new2(void* parent);
QMetaObject* q_hxymodelmapper_meta_object(void* self);
void* q_hxymodelmapper_metacast(void* self, const char* param1);
int32_t q_hxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_hxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_hxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_hxymodelmapper_tr(const char* s);
QAbstractItemModel* q_hxymodelmapper_model(void* self);
void q_hxymodelmapper_set_model(void* self, void* model);
QXYSeries* q_hxymodelmapper_series(void* self);
void q_hxymodelmapper_set_series(void* self, void* series);
int32_t q_hxymodelmapper_x_row(void* self);
void q_hxymodelmapper_set_x_row(void* self, int xRow);
int32_t q_hxymodelmapper_y_row(void* self);
void q_hxymodelmapper_set_y_row(void* self, int yRow);
int32_t q_hxymodelmapper_first_column(void* self);
void q_hxymodelmapper_set_first_column(void* self, int firstColumn);
int32_t q_hxymodelmapper_column_count(void* self);
void q_hxymodelmapper_set_column_count(void* self, int columnCount);
void q_hxymodelmapper_series_replaced(void* self);
void q_hxymodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_hxymodelmapper_model_replaced(void* self);
void q_hxymodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_hxymodelmapper_x_row_changed(void* self);
void q_hxymodelmapper_on_x_row_changed(void* self, void (*slot)(void*));
void q_hxymodelmapper_y_row_changed(void* self);
void q_hxymodelmapper_on_y_row_changed(void* self, void (*slot)(void*));
void q_hxymodelmapper_first_column_changed(void* self);
void q_hxymodelmapper_on_first_column_changed(void* self, void (*slot)(void*));
void q_hxymodelmapper_column_count_changed(void* self);
void q_hxymodelmapper_on_column_count_changed(void* self, void (*slot)(void*));
const char* q_hxymodelmapper_tr2(const char* s, const char* c);
const char* q_hxymodelmapper_tr3(const char* s, const char* c, int n);
const char* q_hxymodelmapper_object_name(void* self);
void q_hxymodelmapper_set_object_name(void* self, const char* name);
bool q_hxymodelmapper_is_widget_type(void* self);
bool q_hxymodelmapper_is_window_type(void* self);
bool q_hxymodelmapper_is_quick_item_type(void* self);
bool q_hxymodelmapper_signals_blocked(void* self);
bool q_hxymodelmapper_block_signals(void* self, bool b);
QThread* q_hxymodelmapper_thread(void* self);
void q_hxymodelmapper_move_to_thread(void* self, void* thread);
int32_t q_hxymodelmapper_start_timer(void* self, int interval);
void q_hxymodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_hxymodelmapper_children(void* self);
void q_hxymodelmapper_set_parent(void* self, void* parent);
void q_hxymodelmapper_install_event_filter(void* self, void* filterObj);
void q_hxymodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_hxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_hxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_hxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_hxymodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_hxymodelmapper_dump_object_tree(void* self);
void q_hxymodelmapper_dump_object_info(void* self);
bool q_hxymodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_hxymodelmapper_property(void* self, const char* name);
const char** q_hxymodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_hxymodelmapper_binding_storage(void* self);
QBindingStorage* q_hxymodelmapper_binding_storage2(void* self);
void q_hxymodelmapper_destroyed(void* self);
void q_hxymodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_hxymodelmapper_parent(void* self);
bool q_hxymodelmapper_inherits(void* self, const char* classname);
void q_hxymodelmapper_delete_later(void* self);
int32_t q_hxymodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_hxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_hxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_hxymodelmapper_destroyed1(void* self, void* param1);
void q_hxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_hxymodelmapper_event(void* self, void* event);
bool q_hxymodelmapper_qbase_event(void* self, void* event);
void q_hxymodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_hxymodelmapper_event_filter(void* self, void* watched, void* event);
bool q_hxymodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_hxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_hxymodelmapper_timer_event(void* self, void* event);
void q_hxymodelmapper_qbase_timer_event(void* self, void* event);
void q_hxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_hxymodelmapper_child_event(void* self, void* event);
void q_hxymodelmapper_qbase_child_event(void* self, void* event);
void q_hxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_hxymodelmapper_custom_event(void* self, void* event);
void q_hxymodelmapper_qbase_custom_event(void* self, void* event);
void q_hxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_hxymodelmapper_connect_notify(void* self, void* signal);
void q_hxymodelmapper_qbase_connect_notify(void* self, void* signal);
void q_hxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_hxymodelmapper_disconnect_notify(void* self, void* signal);
void q_hxymodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_hxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_hxymodelmapper_first(void* self);
int32_t q_hxymodelmapper_qbase_first(void* self);
void q_hxymodelmapper_on_first(void* self, int32_t (*slot)());
void q_hxymodelmapper_set_first(void* self, int first);
void q_hxymodelmapper_qbase_set_first(void* self, int first);
void q_hxymodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_hxymodelmapper_count(void* self);
int32_t q_hxymodelmapper_qbase_count(void* self);
void q_hxymodelmapper_on_count(void* self, int32_t (*slot)());
void q_hxymodelmapper_set_count(void* self, int count);
void q_hxymodelmapper_qbase_set_count(void* self, int count);
void q_hxymodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int64_t q_hxymodelmapper_orientation(void* self);
int64_t q_hxymodelmapper_qbase_orientation(void* self);
void q_hxymodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_hxymodelmapper_set_orientation(void* self, int64_t orientation);
void q_hxymodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_hxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
int32_t q_hxymodelmapper_x_section(void* self);
int32_t q_hxymodelmapper_qbase_x_section(void* self);
void q_hxymodelmapper_on_x_section(void* self, int32_t (*slot)());
void q_hxymodelmapper_set_x_section(void* self, int xSection);
void q_hxymodelmapper_qbase_set_x_section(void* self, int xSection);
void q_hxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int));
int32_t q_hxymodelmapper_y_section(void* self);
int32_t q_hxymodelmapper_qbase_y_section(void* self);
void q_hxymodelmapper_on_y_section(void* self, int32_t (*slot)());
void q_hxymodelmapper_set_y_section(void* self, int ySection);
void q_hxymodelmapper_qbase_set_y_section(void* self, int ySection);
void q_hxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int));
QObject* q_hxymodelmapper_sender(void* self);
QObject* q_hxymodelmapper_qbase_sender(void* self);
void q_hxymodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_hxymodelmapper_sender_signal_index(void* self);
int32_t q_hxymodelmapper_qbase_sender_signal_index(void* self);
void q_hxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_hxymodelmapper_receivers(void* self, const char* signal);
int32_t q_hxymodelmapper_qbase_receivers(void* self, const char* signal);
void q_hxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_hxymodelmapper_is_signal_connected(void* self, void* signal);
bool q_hxymodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_hxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_hxymodelmapper_delete(void* self);

#endif
