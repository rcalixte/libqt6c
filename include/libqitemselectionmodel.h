#pragma once
#ifndef SRCQT6C_LIBQITEMSELECTIONMODEL_H
#define SRCQT6C_LIBQITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QItemSelectionRange* q_itemselectionrange_new();
QItemSelectionRange* q_itemselectionrange_new2(void* topL, void* bottomR);
QItemSelectionRange* q_itemselectionrange_new3(void* index);
QItemSelectionRange* q_itemselectionrange_new4(void* param1);
void q_itemselectionrange_swap(void* self, void* other);
int32_t q_itemselectionrange_top(void* self);
int32_t q_itemselectionrange_left(void* self);
int32_t q_itemselectionrange_bottom(void* self);
int32_t q_itemselectionrange_right(void* self);
int32_t q_itemselectionrange_width(void* self);
int32_t q_itemselectionrange_height(void* self);
QPersistentModelIndex* q_itemselectionrange_top_left(void* self);
QPersistentModelIndex* q_itemselectionrange_bottom_right(void* self);
QModelIndex* q_itemselectionrange_parent(void* self);
QAbstractItemModel* q_itemselectionrange_model(void* self);
bool q_itemselectionrange_contains(void* self, void* index);
bool q_itemselectionrange_contains2(void* self, int row, int column, void* parentIndex);
bool q_itemselectionrange_intersects(void* self, void* other);
QItemSelectionRange* q_itemselectionrange_intersected(void* self, void* other);
bool q_itemselectionrange_operator_equal(void* self, void* other);
bool q_itemselectionrange_operator_not_equal(void* self, void* other);
bool q_itemselectionrange_is_valid(void* self);
bool q_itemselectionrange_is_empty(void* self);
libqt_list /* of QModelIndex* */ q_itemselectionrange_indexes(void* self);
void q_itemselectionrange_delete(void* self);

QItemSelectionModel* q_itemselectionmodel_new();
QItemSelectionModel* q_itemselectionmodel_new2(void* model, void* parent);
QItemSelectionModel* q_itemselectionmodel_new3(void* model);
QMetaObject* q_itemselectionmodel_meta_object(void* self);
void* q_itemselectionmodel_metacast(void* self, const char* param1);
int32_t q_itemselectionmodel_metacall(void* self, int64_t param1, int param2, void* param3);
void q_itemselectionmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_itemselectionmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_itemselectionmodel_tr(const char* s);
QModelIndex* q_itemselectionmodel_current_index(void* self);
bool q_itemselectionmodel_is_selected(void* self, void* index);
bool q_itemselectionmodel_is_row_selected(void* self, int row);
bool q_itemselectionmodel_is_column_selected(void* self, int column);
bool q_itemselectionmodel_row_intersects_selection(void* self, int row);
bool q_itemselectionmodel_column_intersects_selection(void* self, int column);
bool q_itemselectionmodel_has_selection(void* self);
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_indexes(void* self);
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows(void* self);
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns(void* self);
QItemSelection* q_itemselectionmodel_selection(void* self);
QAbstractItemModel* q_itemselectionmodel_model(void* self);
QAbstractItemModel* q_itemselectionmodel_model2(void* self);
void q_itemselectionmodel_set_model(void* self, void* model);
void q_itemselectionmodel_set_current_index(void* self, void* index, int64_t command);
void q_itemselectionmodel_on_set_current_index(void* self, void (*slot)(void*, void*, int64_t));
void q_itemselectionmodel_qbase_set_current_index(void* self, void* index, int64_t command);
void q_itemselectionmodel_select(void* self, void* index, int64_t command);
void q_itemselectionmodel_on_select(void* self, void (*slot)(void*, void*, int64_t));
void q_itemselectionmodel_qbase_select(void* self, void* index, int64_t command);
void q_itemselectionmodel_select2(void* self, void* selection, int64_t command);
void q_itemselectionmodel_on_select2(void* self, void (*slot)(void*, void*, int64_t));
void q_itemselectionmodel_qbase_select2(void* self, void* selection, int64_t command);
void q_itemselectionmodel_clear(void* self);
void q_itemselectionmodel_on_clear(void* self, void (*slot)());
void q_itemselectionmodel_qbase_clear(void* self);
void q_itemselectionmodel_reset(void* self);
void q_itemselectionmodel_on_reset(void* self, void (*slot)());
void q_itemselectionmodel_qbase_reset(void* self);
void q_itemselectionmodel_clear_selection(void* self);
void q_itemselectionmodel_clear_current_index(void* self);
void q_itemselectionmodel_on_clear_current_index(void* self, void (*slot)());
void q_itemselectionmodel_qbase_clear_current_index(void* self);
void q_itemselectionmodel_selection_changed(void* self, void* selected, void* deselected);
void q_itemselectionmodel_on_selection_changed(void* self, void (*slot)(void*, void*, void*));
void q_itemselectionmodel_current_changed(void* self, void* current, void* previous);
void q_itemselectionmodel_on_current_changed(void* self, void (*slot)(void*, void*, void*));
void q_itemselectionmodel_current_row_changed(void* self, void* current, void* previous);
void q_itemselectionmodel_on_current_row_changed(void* self, void (*slot)(void*, void*, void*));
void q_itemselectionmodel_current_column_changed(void* self, void* current, void* previous);
void q_itemselectionmodel_on_current_column_changed(void* self, void (*slot)(void*, void*, void*));
void q_itemselectionmodel_model_changed(void* self, void* model);
void q_itemselectionmodel_on_model_changed(void* self, void (*slot)(void*, void*));
void q_itemselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection);
void q_itemselectionmodel_on_emit_selection_changed(void* self, void (*slot)(void*, void*, void*));
void q_itemselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection);
const char* q_itemselectionmodel_tr2(const char* s, const char* c);
const char* q_itemselectionmodel_tr3(const char* s, const char* c, int n);
bool q_itemselectionmodel_is_row_selected2(void* self, int row, void* parent);
bool q_itemselectionmodel_is_column_selected2(void* self, int column, void* parent);
bool q_itemselectionmodel_row_intersects_selection2(void* self, int row, void* parent);
bool q_itemselectionmodel_column_intersects_selection2(void* self, int column, void* parent);
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows1(void* self, int column);
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns1(void* self, int row);
const char* q_itemselectionmodel_object_name(void* self);
void q_itemselectionmodel_set_object_name(void* self, const char* name);
bool q_itemselectionmodel_is_widget_type(void* self);
bool q_itemselectionmodel_is_window_type(void* self);
bool q_itemselectionmodel_is_quick_item_type(void* self);
bool q_itemselectionmodel_signals_blocked(void* self);
bool q_itemselectionmodel_block_signals(void* self, bool b);
QThread* q_itemselectionmodel_thread(void* self);
void q_itemselectionmodel_move_to_thread(void* self, void* thread);
int32_t q_itemselectionmodel_start_timer(void* self, int interval);
void q_itemselectionmodel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_itemselectionmodel_children(void* self);
void q_itemselectionmodel_set_parent(void* self, void* parent);
void q_itemselectionmodel_install_event_filter(void* self, void* filterObj);
void q_itemselectionmodel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_itemselectionmodel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_itemselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_itemselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_itemselectionmodel_disconnect_with_q_meta_object_connection(void* param1);
void q_itemselectionmodel_dump_object_tree(void* self);
void q_itemselectionmodel_dump_object_info(void* self);
bool q_itemselectionmodel_set_property(void* self, const char* name, void* value);
QVariant* q_itemselectionmodel_property(void* self, const char* name);
const char** q_itemselectionmodel_dynamic_property_names(void* self);
QBindingStorage* q_itemselectionmodel_binding_storage(void* self);
QBindingStorage* q_itemselectionmodel_binding_storage2(void* self);
void q_itemselectionmodel_destroyed(void* self);
void q_itemselectionmodel_on_destroyed(void* self, void (*slot)(void*));
QObject* q_itemselectionmodel_parent(void* self);
bool q_itemselectionmodel_inherits(void* self, const char* classname);
void q_itemselectionmodel_delete_later(void* self);
int32_t q_itemselectionmodel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_itemselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_itemselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_itemselectionmodel_destroyed1(void* self, void* param1);
void q_itemselectionmodel_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_itemselectionmodel_event(void* self, void* event);
bool q_itemselectionmodel_qbase_event(void* self, void* event);
void q_itemselectionmodel_on_event(void* self, bool (*slot)(void*, void*));
bool q_itemselectionmodel_event_filter(void* self, void* watched, void* event);
bool q_itemselectionmodel_qbase_event_filter(void* self, void* watched, void* event);
void q_itemselectionmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_itemselectionmodel_timer_event(void* self, void* event);
void q_itemselectionmodel_qbase_timer_event(void* self, void* event);
void q_itemselectionmodel_on_timer_event(void* self, void (*slot)(void*, void*));
void q_itemselectionmodel_child_event(void* self, void* event);
void q_itemselectionmodel_qbase_child_event(void* self, void* event);
void q_itemselectionmodel_on_child_event(void* self, void (*slot)(void*, void*));
void q_itemselectionmodel_custom_event(void* self, void* event);
void q_itemselectionmodel_qbase_custom_event(void* self, void* event);
void q_itemselectionmodel_on_custom_event(void* self, void (*slot)(void*, void*));
void q_itemselectionmodel_connect_notify(void* self, void* signal);
void q_itemselectionmodel_qbase_connect_notify(void* self, void* signal);
void q_itemselectionmodel_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_itemselectionmodel_disconnect_notify(void* self, void* signal);
void q_itemselectionmodel_qbase_disconnect_notify(void* self, void* signal);
void q_itemselectionmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_itemselectionmodel_sender(void* self);
QObject* q_itemselectionmodel_qbase_sender(void* self);
void q_itemselectionmodel_on_sender(void* self, QObject* (*slot)());
int32_t q_itemselectionmodel_sender_signal_index(void* self);
int32_t q_itemselectionmodel_qbase_sender_signal_index(void* self);
void q_itemselectionmodel_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_itemselectionmodel_receivers(void* self, const char* signal);
int32_t q_itemselectionmodel_qbase_receivers(void* self, const char* signal);
void q_itemselectionmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_itemselectionmodel_is_signal_connected(void* self, void* signal);
bool q_itemselectionmodel_qbase_is_signal_connected(void* self, void* signal);
void q_itemselectionmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_itemselectionmodel_delete(void* self);

QItemSelection* q_itemselection_new(void* topLeft, void* bottomRight);
QItemSelection* q_itemselection_new2();
QItemSelection* q_itemselection_new3(void* param1);
void q_itemselection_select(void* self, void* topLeft, void* bottomRight);
bool q_itemselection_contains(void* self, void* index);
libqt_list /* of QModelIndex* */ q_itemselection_indexes(void* self);
void q_itemselection_merge(void* self, void* other, int64_t command);
void q_itemselection_split(void* range, void* other, void* result);
void q_itemselection_delete(void* self);

/// https://doc.qt.io/qt-6/qitemselectionmodel.html#types

typedef enum {
    QITEMSELECTIONMODEL_SELECTIONFLAG_NOUPDATE = 0,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CLEAR = 1,
    QITEMSELECTIONMODEL_SELECTIONFLAG_SELECT = 2,
    QITEMSELECTIONMODEL_SELECTIONFLAG_DESELECT = 4,
    QITEMSELECTIONMODEL_SELECTIONFLAG_TOGGLE = 8,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CURRENT = 16,
    QITEMSELECTIONMODEL_SELECTIONFLAG_ROWS = 32,
    QITEMSELECTIONMODEL_SELECTIONFLAG_COLUMNS = 64,
    QITEMSELECTIONMODEL_SELECTIONFLAG_SELECTCURRENT = 18,
    QITEMSELECTIONMODEL_SELECTIONFLAG_TOGGLECURRENT = 24,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CLEARANDSELECT = 3
} QItemSelectionModel__SelectionFlag;

#endif
