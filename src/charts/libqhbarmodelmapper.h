#pragma once
#ifndef SRC_CHARTSQT6C_LIBQHBARMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQHBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractbarseries.h"
#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "libqbarmodelmapper.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QHBarModelMapper* q_hbarmodelmapper_new();
QHBarModelMapper* q_hbarmodelmapper_new2(void* parent);
QMetaObject* q_hbarmodelmapper_meta_object(void* self);
void* q_hbarmodelmapper_metacast(void* self, const char* param1);
int32_t q_hbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_hbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_hbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_hbarmodelmapper_tr(const char* s);
QAbstractItemModel* q_hbarmodelmapper_model(void* self);
void q_hbarmodelmapper_set_model(void* self, void* model);
QAbstractBarSeries* q_hbarmodelmapper_series(void* self);
void q_hbarmodelmapper_set_series(void* self, void* series);
int32_t q_hbarmodelmapper_first_bar_set_row(void* self);
void q_hbarmodelmapper_set_first_bar_set_row(void* self, int firstBarSetRow);
int32_t q_hbarmodelmapper_last_bar_set_row(void* self);
void q_hbarmodelmapper_set_last_bar_set_row(void* self, int lastBarSetRow);
int32_t q_hbarmodelmapper_first_column(void* self);
void q_hbarmodelmapper_set_first_column(void* self, int firstColumn);
int32_t q_hbarmodelmapper_column_count(void* self);
void q_hbarmodelmapper_set_column_count(void* self, int columnCount);
void q_hbarmodelmapper_series_replaced(void* self);
void q_hbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_hbarmodelmapper_model_replaced(void* self);
void q_hbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_hbarmodelmapper_first_bar_set_row_changed(void* self);
void q_hbarmodelmapper_on_first_bar_set_row_changed(void* self, void (*slot)(void*));
void q_hbarmodelmapper_last_bar_set_row_changed(void* self);
void q_hbarmodelmapper_on_last_bar_set_row_changed(void* self, void (*slot)(void*));
void q_hbarmodelmapper_first_column_changed(void* self);
void q_hbarmodelmapper_on_first_column_changed(void* self, void (*slot)(void*));
void q_hbarmodelmapper_column_count_changed(void* self);
void q_hbarmodelmapper_on_column_count_changed(void* self, void (*slot)(void*));
const char* q_hbarmodelmapper_tr2(const char* s, const char* c);
const char* q_hbarmodelmapper_tr3(const char* s, const char* c, int n);
const char* q_hbarmodelmapper_object_name(void* self);
void q_hbarmodelmapper_set_object_name(void* self, const char* name);
bool q_hbarmodelmapper_is_widget_type(void* self);
bool q_hbarmodelmapper_is_window_type(void* self);
bool q_hbarmodelmapper_is_quick_item_type(void* self);
bool q_hbarmodelmapper_signals_blocked(void* self);
bool q_hbarmodelmapper_block_signals(void* self, bool b);
QThread* q_hbarmodelmapper_thread(void* self);
void q_hbarmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_hbarmodelmapper_start_timer(void* self, int interval);
void q_hbarmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_hbarmodelmapper_children(void* self);
void q_hbarmodelmapper_set_parent(void* self, void* parent);
void q_hbarmodelmapper_install_event_filter(void* self, void* filterObj);
void q_hbarmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_hbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_hbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_hbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_hbarmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_hbarmodelmapper_dump_object_tree(void* self);
void q_hbarmodelmapper_dump_object_info(void* self);
bool q_hbarmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_hbarmodelmapper_property(void* self, const char* name);
const char** q_hbarmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_hbarmodelmapper_binding_storage(void* self);
QBindingStorage* q_hbarmodelmapper_binding_storage2(void* self);
void q_hbarmodelmapper_destroyed(void* self);
void q_hbarmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_hbarmodelmapper_parent(void* self);
bool q_hbarmodelmapper_inherits(void* self, const char* classname);
void q_hbarmodelmapper_delete_later(void* self);
int32_t q_hbarmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_hbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_hbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_hbarmodelmapper_destroyed1(void* self, void* param1);
void q_hbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_hbarmodelmapper_event(void* self, void* event);
bool q_hbarmodelmapper_qbase_event(void* self, void* event);
void q_hbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_hbarmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_hbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_hbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_hbarmodelmapper_timer_event(void* self, void* event);
void q_hbarmodelmapper_qbase_timer_event(void* self, void* event);
void q_hbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_hbarmodelmapper_child_event(void* self, void* event);
void q_hbarmodelmapper_qbase_child_event(void* self, void* event);
void q_hbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_hbarmodelmapper_custom_event(void* self, void* event);
void q_hbarmodelmapper_qbase_custom_event(void* self, void* event);
void q_hbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_hbarmodelmapper_connect_notify(void* self, void* signal);
void q_hbarmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_hbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_hbarmodelmapper_disconnect_notify(void* self, void* signal);
void q_hbarmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_hbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_hbarmodelmapper_first(void* self);
int32_t q_hbarmodelmapper_qbase_first(void* self);
void q_hbarmodelmapper_on_first(void* self, int32_t (*slot)());
void q_hbarmodelmapper_set_first(void* self, int first);
void q_hbarmodelmapper_qbase_set_first(void* self, int first);
void q_hbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_hbarmodelmapper_count(void* self);
int32_t q_hbarmodelmapper_qbase_count(void* self);
void q_hbarmodelmapper_on_count(void* self, int32_t (*slot)());
void q_hbarmodelmapper_set_count(void* self, int count);
void q_hbarmodelmapper_qbase_set_count(void* self, int count);
void q_hbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int32_t q_hbarmodelmapper_first_bar_set_section(void* self);
int32_t q_hbarmodelmapper_qbase_first_bar_set_section(void* self);
void q_hbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)());
void q_hbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection);
void q_hbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection);
void q_hbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int));
int32_t q_hbarmodelmapper_last_bar_set_section(void* self);
int32_t q_hbarmodelmapper_qbase_last_bar_set_section(void* self);
void q_hbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)());
void q_hbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection);
void q_hbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection);
void q_hbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int));
int64_t q_hbarmodelmapper_orientation(void* self);
int64_t q_hbarmodelmapper_qbase_orientation(void* self);
void q_hbarmodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_hbarmodelmapper_set_orientation(void* self, int64_t orientation);
void q_hbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_hbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
QObject* q_hbarmodelmapper_sender(void* self);
QObject* q_hbarmodelmapper_qbase_sender(void* self);
void q_hbarmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_hbarmodelmapper_sender_signal_index(void* self);
int32_t q_hbarmodelmapper_qbase_sender_signal_index(void* self);
void q_hbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_hbarmodelmapper_receivers(void* self, const char* signal);
int32_t q_hbarmodelmapper_qbase_receivers(void* self, const char* signal);
void q_hbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_hbarmodelmapper_is_signal_connected(void* self, void* signal);
bool q_hbarmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_hbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_hbarmodelmapper_delete(void* self);

#endif
