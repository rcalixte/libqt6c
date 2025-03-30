#pragma once
#ifndef SRC_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxplotmodelmapper.h"
#include "libqboxplotseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QVBoxPlotModelMapper* q_vboxplotmodelmapper_new();
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent);
QMetaObject* q_vboxplotmodelmapper_meta_object(void* self);
void* q_vboxplotmodelmapper_metacast(void* self, const char* param1);
int32_t q_vboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_vboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_vboxplotmodelmapper_tr(const char* s);
QAbstractItemModel* q_vboxplotmodelmapper_model(void* self);
void q_vboxplotmodelmapper_set_model(void* self, void* model);
QBoxPlotSeries* q_vboxplotmodelmapper_series(void* self);
void q_vboxplotmodelmapper_set_series(void* self, void* series);
int32_t q_vboxplotmodelmapper_first_box_set_column(void* self);
void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn);
int32_t q_vboxplotmodelmapper_last_box_set_column(void* self);
void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn);
int32_t q_vboxplotmodelmapper_first_row(void* self);
void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow);
int32_t q_vboxplotmodelmapper_row_count(void* self);
void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount);
void q_vboxplotmodelmapper_series_replaced(void* self);
void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_vboxplotmodelmapper_model_replaced(void* self);
void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_vboxplotmodelmapper_first_box_set_column_changed(void* self);
void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*slot)(void*));
void q_vboxplotmodelmapper_last_box_set_column_changed(void* self);
void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*slot)(void*));
void q_vboxplotmodelmapper_first_row_changed(void* self);
void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*slot)(void*));
void q_vboxplotmodelmapper_row_count_changed(void* self);
void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*slot)(void*));
const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c);
const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n);
const char* q_vboxplotmodelmapper_object_name(void* self);
void q_vboxplotmodelmapper_set_object_name(void* self, const char* name);
bool q_vboxplotmodelmapper_is_widget_type(void* self);
bool q_vboxplotmodelmapper_is_window_type(void* self);
bool q_vboxplotmodelmapper_is_quick_item_type(void* self);
bool q_vboxplotmodelmapper_signals_blocked(void* self);
bool q_vboxplotmodelmapper_block_signals(void* self, bool b);
QThread* q_vboxplotmodelmapper_thread(void* self);
void q_vboxplotmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval);
void q_vboxplotmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(void* self);
void q_vboxplotmodelmapper_set_parent(void* self, void* parent);
void q_vboxplotmodelmapper_install_event_filter(void* self, void* filterObj);
void q_vboxplotmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_vboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_vboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_vboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_vboxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_vboxplotmodelmapper_dump_object_tree(void* self);
void q_vboxplotmodelmapper_dump_object_info(void* self);
bool q_vboxplotmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_vboxplotmodelmapper_property(void* self, const char* name);
const char** q_vboxplotmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self);
QBindingStorage* q_vboxplotmodelmapper_binding_storage2(void* self);
void q_vboxplotmodelmapper_destroyed(void* self);
void q_vboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_vboxplotmodelmapper_parent(void* self);
bool q_vboxplotmodelmapper_inherits(void* self, const char* classname);
void q_vboxplotmodelmapper_delete_later(void* self);
int32_t q_vboxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_vboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_vboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_vboxplotmodelmapper_destroyed1(void* self, void* param1);
void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_vboxplotmodelmapper_event(void* self, void* event);
bool q_vboxplotmodelmapper_qbase_event(void* self, void* event);
void q_vboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_vboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_vboxplotmodelmapper_timer_event(void* self, void* event);
void q_vboxplotmodelmapper_qbase_timer_event(void* self, void* event);
void q_vboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_vboxplotmodelmapper_child_event(void* self, void* event);
void q_vboxplotmodelmapper_qbase_child_event(void* self, void* event);
void q_vboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_vboxplotmodelmapper_custom_event(void* self, void* event);
void q_vboxplotmodelmapper_qbase_custom_event(void* self, void* event);
void q_vboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_vboxplotmodelmapper_connect_notify(void* self, void* signal);
void q_vboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_vboxplotmodelmapper_disconnect_notify(void* self, void* signal);
void q_vboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_vboxplotmodelmapper_first(void* self);
int32_t q_vboxplotmodelmapper_qbase_first(void* self);
void q_vboxplotmodelmapper_on_first(void* self, int32_t (*slot)());
void q_vboxplotmodelmapper_set_first(void* self, int first);
void q_vboxplotmodelmapper_qbase_set_first(void* self, int first);
void q_vboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_vboxplotmodelmapper_count(void* self);
int32_t q_vboxplotmodelmapper_qbase_count(void* self);
void q_vboxplotmodelmapper_on_count(void* self, int32_t (*slot)());
void q_vboxplotmodelmapper_set_count(void* self, int count);
void q_vboxplotmodelmapper_qbase_set_count(void* self, int count);
void q_vboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int32_t q_vboxplotmodelmapper_first_box_set_section(void* self);
int32_t q_vboxplotmodelmapper_qbase_first_box_set_section(void* self);
void q_vboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)());
void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);
void q_vboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);
void q_vboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int));
int32_t q_vboxplotmodelmapper_last_box_set_section(void* self);
int32_t q_vboxplotmodelmapper_qbase_last_box_set_section(void* self);
void q_vboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)());
void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);
void q_vboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);
void q_vboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int));
int64_t q_vboxplotmodelmapper_orientation(void* self);
int64_t q_vboxplotmodelmapper_qbase_orientation(void* self);
void q_vboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_vboxplotmodelmapper_set_orientation(void* self, int64_t orientation);
void q_vboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_vboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
QObject* q_vboxplotmodelmapper_sender(void* self);
QObject* q_vboxplotmodelmapper_qbase_sender(void* self);
void q_vboxplotmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_vboxplotmodelmapper_sender_signal_index(void* self);
int32_t q_vboxplotmodelmapper_qbase_sender_signal_index(void* self);
void q_vboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_vboxplotmodelmapper_receivers(void* self, const char* signal);
int32_t q_vboxplotmodelmapper_qbase_receivers(void* self, const char* signal);
void q_vboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_vboxplotmodelmapper_is_signal_connected(void* self, void* signal);
bool q_vboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_vboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_vboxplotmodelmapper_delete(void* self);

#endif
