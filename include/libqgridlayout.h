#pragma once
#ifndef SRCQT6C_LIBQGRIDLAYOUT_H
#define SRCQT6C_LIBQGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqlayout.h"
#include "libqlayoutitem.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QGridLayout* q_gridlayout_new(void* parent);
QGridLayout* q_gridlayout_new2();
QMetaObject* q_gridlayout_meta_object(void* self);
void* q_gridlayout_metacast(void* self, const char* param1);
int32_t q_gridlayout_metacall(void* self, int64_t param1, int param2, void* param3);
void q_gridlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_gridlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_gridlayout_tr(const char* s);
QSize* q_gridlayout_size_hint(void* self);
void q_gridlayout_on_size_hint(void* self, QSize* (*slot)());
QSize* q_gridlayout_qbase_size_hint(void* self);
QSize* q_gridlayout_minimum_size(void* self);
void q_gridlayout_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_gridlayout_qbase_minimum_size(void* self);
QSize* q_gridlayout_maximum_size(void* self);
void q_gridlayout_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_gridlayout_qbase_maximum_size(void* self);
void q_gridlayout_set_horizontal_spacing(void* self, int spacing);
int32_t q_gridlayout_horizontal_spacing(void* self);
void q_gridlayout_set_vertical_spacing(void* self, int spacing);
int32_t q_gridlayout_vertical_spacing(void* self);
void q_gridlayout_set_spacing(void* self, int spacing);
void q_gridlayout_on_set_spacing(void* self, void (*slot)(void*, int));
void q_gridlayout_qbase_set_spacing(void* self, int spacing);
int32_t q_gridlayout_spacing(void* self);
void q_gridlayout_on_spacing(void* self, int32_t (*slot)());
int32_t q_gridlayout_qbase_spacing(void* self);
void q_gridlayout_set_row_stretch(void* self, int row, int stretch);
void q_gridlayout_set_column_stretch(void* self, int column, int stretch);
int32_t q_gridlayout_row_stretch(void* self, int row);
int32_t q_gridlayout_column_stretch(void* self, int column);
void q_gridlayout_set_row_minimum_height(void* self, int row, int minSize);
void q_gridlayout_set_column_minimum_width(void* self, int column, int minSize);
int32_t q_gridlayout_row_minimum_height(void* self, int row);
int32_t q_gridlayout_column_minimum_width(void* self, int column);
int32_t q_gridlayout_column_count(void* self);
int32_t q_gridlayout_row_count(void* self);
QRect* q_gridlayout_cell_rect(void* self, int row, int column);
bool q_gridlayout_has_height_for_width(void* self);
void q_gridlayout_on_has_height_for_width(void* self, bool (*slot)());
bool q_gridlayout_qbase_has_height_for_width(void* self);
int32_t q_gridlayout_height_for_width(void* self, int param1);
void q_gridlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_gridlayout_qbase_height_for_width(void* self, int param1);
int32_t q_gridlayout_minimum_height_for_width(void* self, int param1);
void q_gridlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_gridlayout_qbase_minimum_height_for_width(void* self, int param1);
int64_t q_gridlayout_expanding_directions(void* self);
void q_gridlayout_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_gridlayout_qbase_expanding_directions(void* self);
void q_gridlayout_invalidate(void* self);
void q_gridlayout_on_invalidate(void* self, void (*slot)());
void q_gridlayout_qbase_invalidate(void* self);
void q_gridlayout_add_widget(void* self, void* w);
void q_gridlayout_add_widget2(void* self, void* param1, int row, int column);
void q_gridlayout_add_widget3(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);
void q_gridlayout_add_layout(void* self, void* param1, int row, int column);
void q_gridlayout_add_layout2(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);
void q_gridlayout_set_origin_corner(void* self, int64_t originCorner);
int64_t q_gridlayout_origin_corner(void* self);
QLayoutItem* q_gridlayout_item_at(void* self, int index);
void q_gridlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_gridlayout_qbase_item_at(void* self, int index);
QLayoutItem* q_gridlayout_item_at_position(void* self, int row, int column);
QLayoutItem* q_gridlayout_take_at(void* self, int index);
void q_gridlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_gridlayout_qbase_take_at(void* self, int index);
int32_t q_gridlayout_count(void* self);
void q_gridlayout_on_count(void* self, int32_t (*slot)());
int32_t q_gridlayout_qbase_count(void* self);
void q_gridlayout_set_geometry(void* self, void* geometry);
void q_gridlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_gridlayout_qbase_set_geometry(void* self, void* geometry);
void q_gridlayout_add_item(void* self, void* item, int row, int column);
void q_gridlayout_set_default_positioning(void* self, int n, int64_t orient);
void q_gridlayout_get_item_position(void* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);
void q_gridlayout_add_item_with_q_layout_item(void* self, void* param1);
void q_gridlayout_on_add_item_with_q_layout_item(void* self, void (*slot)(void*, void*));
void q_gridlayout_qbase_add_item_with_q_layout_item(void* self, void* param1);
const char* q_gridlayout_tr2(const char* s, const char* c);
const char* q_gridlayout_tr3(const char* s, const char* c, int n);
void q_gridlayout_add_widget4(void* self, void* param1, int row, int column, int64_t param4);
void q_gridlayout_add_widget6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6);
void q_gridlayout_add_layout4(void* self, void* param1, int row, int column, int64_t param4);
void q_gridlayout_add_layout6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6);
void q_gridlayout_add_item4(void* self, void* item, int row, int column, int rowSpan);
void q_gridlayout_add_item5(void* self, void* item, int row, int column, int rowSpan, int columnSpan);
void q_gridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t param6);
void q_gridlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_gridlayout_set_contents_margins_with_margins(void* self, void* margins);
void q_gridlayout_unset_contents_margins(void* self);
void q_gridlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);
QMargins* q_gridlayout_contents_margins(void* self);
QRect* q_gridlayout_contents_rect(void* self);
bool q_gridlayout_set_alignment(void* self, void* w, int64_t alignment);
bool q_gridlayout_set_alignment2(void* self, void* l, int64_t alignment);
void q_gridlayout_set_size_constraint(void* self, int64_t sizeConstraint);
int64_t q_gridlayout_size_constraint(void* self);
void q_gridlayout_set_menu_bar(void* self, void* w);
QWidget* q_gridlayout_menu_bar(void* self);
QWidget* q_gridlayout_parent_widget(void* self);
bool q_gridlayout_activate(void* self);
void q_gridlayout_update(void* self);
void q_gridlayout_remove_widget(void* self, void* w);
void q_gridlayout_remove_item(void* self, void* param1);
int32_t q_gridlayout_index_of_with_q_layout_item(void* self, void* param1);
void q_gridlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));
int32_t q_gridlayout_qbase_index_of_with_q_layout_item(void* self, void* param1);
int32_t q_gridlayout_total_minimum_height_for_width(void* self, int w);
int32_t q_gridlayout_total_height_for_width(void* self, int w);
QSize* q_gridlayout_total_minimum_size(void* self);
QSize* q_gridlayout_total_maximum_size(void* self);
QSize* q_gridlayout_total_size_hint(void* self);
void q_gridlayout_set_enabled(void* self, bool enabled);
bool q_gridlayout_is_enabled(void* self);
QSize* q_gridlayout_closest_acceptable_size(void* w, void* s);
const char* q_gridlayout_object_name(void* self);
void q_gridlayout_set_object_name(void* self, const char* name);
bool q_gridlayout_is_widget_type(void* self);
bool q_gridlayout_is_window_type(void* self);
bool q_gridlayout_is_quick_item_type(void* self);
bool q_gridlayout_signals_blocked(void* self);
bool q_gridlayout_block_signals(void* self, bool b);
QThread* q_gridlayout_thread(void* self);
void q_gridlayout_move_to_thread(void* self, void* thread);
int32_t q_gridlayout_start_timer(void* self, int interval);
void q_gridlayout_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_gridlayout_children(void* self);
void q_gridlayout_set_parent(void* self, void* parent);
void q_gridlayout_install_event_filter(void* self, void* filterObj);
void q_gridlayout_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_gridlayout_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_gridlayout_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_gridlayout_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_gridlayout_disconnect_with_q_meta_object_connection(void* param1);
void q_gridlayout_dump_object_tree(void* self);
void q_gridlayout_dump_object_info(void* self);
bool q_gridlayout_set_property(void* self, const char* name, void* value);
QVariant* q_gridlayout_property(void* self, const char* name);
const char** q_gridlayout_dynamic_property_names(void* self);
QBindingStorage* q_gridlayout_binding_storage(void* self);
QBindingStorage* q_gridlayout_binding_storage2(void* self);
void q_gridlayout_destroyed(void* self);
void q_gridlayout_on_destroyed(void* self, void (*slot)(void*));
QObject* q_gridlayout_parent(void* self);
bool q_gridlayout_inherits(void* self, const char* classname);
void q_gridlayout_delete_later(void* self);
int32_t q_gridlayout_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_gridlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_gridlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_gridlayout_destroyed1(void* self, void* param1);
void q_gridlayout_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_gridlayout_alignment(void* self);
QRect* q_gridlayout_geometry(void* self);
QRect* q_gridlayout_qbase_geometry(void* self);
void q_gridlayout_on_geometry(void* self, QRect* (*slot)());
int32_t q_gridlayout_index_of(void* self, void* param1);
int32_t q_gridlayout_qbase_index_of(void* self, void* param1);
void q_gridlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));
bool q_gridlayout_is_empty(void* self);
bool q_gridlayout_qbase_is_empty(void* self);
void q_gridlayout_on_is_empty(void* self, bool (*slot)());
int64_t q_gridlayout_control_types(void* self);
int64_t q_gridlayout_qbase_control_types(void* self);
void q_gridlayout_on_control_types(void* self, int64_t (*slot)());
QLayoutItem* q_gridlayout_replace_widget(void* self, void* from, void* to, int64_t options);
QLayoutItem* q_gridlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);
void q_gridlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));
QLayout* q_gridlayout_layout(void* self);
QLayout* q_gridlayout_qbase_layout(void* self);
void q_gridlayout_on_layout(void* self, QLayout* (*slot)());
void q_gridlayout_child_event(void* self, void* e);
void q_gridlayout_qbase_child_event(void* self, void* e);
void q_gridlayout_on_child_event(void* self, void (*slot)(void*, void*));
bool q_gridlayout_event(void* self, void* event);
bool q_gridlayout_qbase_event(void* self, void* event);
void q_gridlayout_on_event(void* self, bool (*slot)(void*, void*));
bool q_gridlayout_event_filter(void* self, void* watched, void* event);
bool q_gridlayout_qbase_event_filter(void* self, void* watched, void* event);
void q_gridlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_gridlayout_timer_event(void* self, void* event);
void q_gridlayout_qbase_timer_event(void* self, void* event);
void q_gridlayout_on_timer_event(void* self, void (*slot)(void*, void*));
void q_gridlayout_custom_event(void* self, void* event);
void q_gridlayout_qbase_custom_event(void* self, void* event);
void q_gridlayout_on_custom_event(void* self, void (*slot)(void*, void*));
void q_gridlayout_connect_notify(void* self, void* signal);
void q_gridlayout_qbase_connect_notify(void* self, void* signal);
void q_gridlayout_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_gridlayout_disconnect_notify(void* self, void* signal);
void q_gridlayout_qbase_disconnect_notify(void* self, void* signal);
void q_gridlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QWidget* q_gridlayout_widget(void* self);
QWidget* q_gridlayout_qbase_widget(void* self);
void q_gridlayout_on_widget(void* self, QWidget* (*slot)());
QSpacerItem* q_gridlayout_spacer_item(void* self);
QSpacerItem* q_gridlayout_qbase_spacer_item(void* self);
void q_gridlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());
void q_gridlayout_widget_event(void* self, void* param1);
void q_gridlayout_qbase_widget_event(void* self, void* param1);
void q_gridlayout_on_widget_event(void* self, void (*slot)(void*, void*));
void q_gridlayout_add_child_layout(void* self, void* l);
void q_gridlayout_qbase_add_child_layout(void* self, void* l);
void q_gridlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));
void q_gridlayout_add_child_widget(void* self, void* w);
void q_gridlayout_qbase_add_child_widget(void* self, void* w);
void q_gridlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));
bool q_gridlayout_adopt_layout(void* self, void* layout);
bool q_gridlayout_qbase_adopt_layout(void* self, void* layout);
void q_gridlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));
QRect* q_gridlayout_alignment_rect(void* self, void* param1);
QRect* q_gridlayout_qbase_alignment_rect(void* self, void* param1);
void q_gridlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));
QObject* q_gridlayout_sender(void* self);
QObject* q_gridlayout_qbase_sender(void* self);
void q_gridlayout_on_sender(void* self, QObject* (*slot)());
int32_t q_gridlayout_sender_signal_index(void* self);
int32_t q_gridlayout_qbase_sender_signal_index(void* self);
void q_gridlayout_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_gridlayout_receivers(void* self, const char* signal);
int32_t q_gridlayout_qbase_receivers(void* self, const char* signal);
void q_gridlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_gridlayout_is_signal_connected(void* self, void* signal);
bool q_gridlayout_qbase_is_signal_connected(void* self, void* signal);
void q_gridlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_gridlayout_delete(void* self);

#endif
