#pragma once
#ifndef SRCQT6C_LIBQFORMLAYOUT_H
#define SRCQT6C_LIBQFORMLAYOUT_H

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

QFormLayout* q_formlayout_new(void* parent);
QFormLayout* q_formlayout_new2();
QMetaObject* q_formlayout_meta_object(void* self);
void* q_formlayout_metacast(void* self, const char* param1);
int32_t q_formlayout_metacall(void* self, int64_t param1, int param2, void* param3);
void q_formlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_formlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_formlayout_tr(const char* s);
void q_formlayout_set_field_growth_policy(void* self, int64_t policy);
int64_t q_formlayout_field_growth_policy(void* self);
void q_formlayout_set_row_wrap_policy(void* self, int64_t policy);
int64_t q_formlayout_row_wrap_policy(void* self);
void q_formlayout_set_label_alignment(void* self, int64_t alignment);
int64_t q_formlayout_label_alignment(void* self);
void q_formlayout_set_form_alignment(void* self, int64_t alignment);
int64_t q_formlayout_form_alignment(void* self);
void q_formlayout_set_horizontal_spacing(void* self, int spacing);
int32_t q_formlayout_horizontal_spacing(void* self);
void q_formlayout_set_vertical_spacing(void* self, int spacing);
int32_t q_formlayout_vertical_spacing(void* self);
int32_t q_formlayout_spacing(void* self);
void q_formlayout_on_spacing(void* self, int32_t (*slot)());
int32_t q_formlayout_qbase_spacing(void* self);
void q_formlayout_set_spacing(void* self, int spacing);
void q_formlayout_on_set_spacing(void* self, void (*slot)(void*, int));
void q_formlayout_qbase_set_spacing(void* self, int spacing);
void q_formlayout_add_row(void* self, void* label, void* field);
void q_formlayout_add_row2(void* self, void* label, void* field);
void q_formlayout_add_row3(void* self, const char* labelText, void* field);
void q_formlayout_add_row4(void* self, const char* labelText, void* field);
void q_formlayout_add_row_with_widget(void* self, void* widget);
void q_formlayout_add_row_with_layout(void* self, void* layout);
void q_formlayout_insert_row(void* self, int row, void* label, void* field);
void q_formlayout_insert_row2(void* self, int row, void* label, void* field);
void q_formlayout_insert_row3(void* self, int row, const char* labelText, void* field);
void q_formlayout_insert_row4(void* self, int row, const char* labelText, void* field);
void q_formlayout_insert_row5(void* self, int row, void* widget);
void q_formlayout_insert_row6(void* self, int row, void* layout);
void q_formlayout_remove_row(void* self, int row);
void q_formlayout_remove_row_with_widget(void* self, void* widget);
void q_formlayout_remove_row_with_layout(void* self, void* layout);
QFormLayout__TakeRowResult* q_formlayout_take_row(void* self, int row);
QFormLayout__TakeRowResult* q_formlayout_take_row_with_widget(void* self, void* widget);
QFormLayout__TakeRowResult* q_formlayout_take_row_with_layout(void* self, void* layout);
void q_formlayout_set_item(void* self, int row, int64_t role, void* item);
void q_formlayout_set_widget(void* self, int row, int64_t role, void* widget);
void q_formlayout_set_layout(void* self, int row, int64_t role, void* layout);
void q_formlayout_set_row_visible(void* self, int row, bool on);
void q_formlayout_set_row_visible2(void* self, void* widget, bool on);
void q_formlayout_set_row_visible3(void* self, void* layout, bool on);
bool q_formlayout_is_row_visible(void* self, int row);
bool q_formlayout_is_row_visible_with_widget(void* self, void* widget);
bool q_formlayout_is_row_visible_with_layout(void* self, void* layout);
QLayoutItem* q_formlayout_item_at(void* self, int row, int64_t role);
QWidget* q_formlayout_label_for_field(void* self, void* field);
QWidget* q_formlayout_label_for_field_with_field(void* self, void* field);
void q_formlayout_add_item(void* self, void* item);
void q_formlayout_on_add_item(void* self, void (*slot)(void*, void*));
void q_formlayout_qbase_add_item(void* self, void* item);
QLayoutItem* q_formlayout_item_at_with_index(void* self, int index);
void q_formlayout_on_item_at_with_index(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_formlayout_qbase_item_at_with_index(void* self, int index);
QLayoutItem* q_formlayout_take_at(void* self, int index);
void q_formlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_formlayout_qbase_take_at(void* self, int index);
void q_formlayout_set_geometry(void* self, void* rect);
void q_formlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_formlayout_qbase_set_geometry(void* self, void* rect);
QSize* q_formlayout_minimum_size(void* self);
void q_formlayout_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_formlayout_qbase_minimum_size(void* self);
QSize* q_formlayout_size_hint(void* self);
void q_formlayout_on_size_hint(void* self, QSize* (*slot)());
QSize* q_formlayout_qbase_size_hint(void* self);
void q_formlayout_invalidate(void* self);
void q_formlayout_on_invalidate(void* self, void (*slot)());
void q_formlayout_qbase_invalidate(void* self);
bool q_formlayout_has_height_for_width(void* self);
void q_formlayout_on_has_height_for_width(void* self, bool (*slot)());
bool q_formlayout_qbase_has_height_for_width(void* self);
int32_t q_formlayout_height_for_width(void* self, int width);
void q_formlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_formlayout_qbase_height_for_width(void* self, int width);
int64_t q_formlayout_expanding_directions(void* self);
void q_formlayout_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_formlayout_qbase_expanding_directions(void* self);
int32_t q_formlayout_count(void* self);
void q_formlayout_on_count(void* self, int32_t (*slot)());
int32_t q_formlayout_qbase_count(void* self);
int32_t q_formlayout_row_count(void* self);
const char* q_formlayout_tr2(const char* s, const char* c);
const char* q_formlayout_tr3(const char* s, const char* c, int n);
void q_formlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_formlayout_set_contents_margins_with_margins(void* self, void* margins);
void q_formlayout_unset_contents_margins(void* self);
void q_formlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);
QMargins* q_formlayout_contents_margins(void* self);
QRect* q_formlayout_contents_rect(void* self);
bool q_formlayout_set_alignment(void* self, void* w, int64_t alignment);
bool q_formlayout_set_alignment2(void* self, void* l, int64_t alignment);
void q_formlayout_set_size_constraint(void* self, int64_t sizeConstraint);
int64_t q_formlayout_size_constraint(void* self);
void q_formlayout_set_menu_bar(void* self, void* w);
QWidget* q_formlayout_menu_bar(void* self);
QWidget* q_formlayout_parent_widget(void* self);
bool q_formlayout_activate(void* self);
void q_formlayout_update(void* self);
void q_formlayout_add_widget(void* self, void* w);
void q_formlayout_remove_widget(void* self, void* w);
void q_formlayout_remove_item(void* self, void* param1);
int32_t q_formlayout_index_of_with_q_layout_item(void* self, void* param1);
void q_formlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));
int32_t q_formlayout_qbase_index_of_with_q_layout_item(void* self, void* param1);
int32_t q_formlayout_total_minimum_height_for_width(void* self, int w);
int32_t q_formlayout_total_height_for_width(void* self, int w);
QSize* q_formlayout_total_minimum_size(void* self);
QSize* q_formlayout_total_maximum_size(void* self);
QSize* q_formlayout_total_size_hint(void* self);
void q_formlayout_set_enabled(void* self, bool enabled);
bool q_formlayout_is_enabled(void* self);
QSize* q_formlayout_closest_acceptable_size(void* w, void* s);
const char* q_formlayout_object_name(void* self);
void q_formlayout_set_object_name(void* self, const char* name);
bool q_formlayout_is_widget_type(void* self);
bool q_formlayout_is_window_type(void* self);
bool q_formlayout_is_quick_item_type(void* self);
bool q_formlayout_signals_blocked(void* self);
bool q_formlayout_block_signals(void* self, bool b);
QThread* q_formlayout_thread(void* self);
void q_formlayout_move_to_thread(void* self, void* thread);
int32_t q_formlayout_start_timer(void* self, int interval);
void q_formlayout_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_formlayout_children(void* self);
void q_formlayout_set_parent(void* self, void* parent);
void q_formlayout_install_event_filter(void* self, void* filterObj);
void q_formlayout_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_formlayout_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_formlayout_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_formlayout_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_formlayout_disconnect_with_q_meta_object_connection(void* param1);
void q_formlayout_dump_object_tree(void* self);
void q_formlayout_dump_object_info(void* self);
bool q_formlayout_set_property(void* self, const char* name, void* value);
QVariant* q_formlayout_property(void* self, const char* name);
const char** q_formlayout_dynamic_property_names(void* self);
QBindingStorage* q_formlayout_binding_storage(void* self);
QBindingStorage* q_formlayout_binding_storage2(void* self);
void q_formlayout_destroyed(void* self);
void q_formlayout_on_destroyed(void* self, void (*slot)(void*));
QObject* q_formlayout_parent(void* self);
bool q_formlayout_inherits(void* self, const char* classname);
void q_formlayout_delete_later(void* self);
int32_t q_formlayout_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_formlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_formlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_formlayout_destroyed1(void* self, void* param1);
void q_formlayout_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_formlayout_alignment(void* self);
QRect* q_formlayout_geometry(void* self);
QRect* q_formlayout_qbase_geometry(void* self);
void q_formlayout_on_geometry(void* self, QRect* (*slot)());
QSize* q_formlayout_maximum_size(void* self);
QSize* q_formlayout_qbase_maximum_size(void* self);
void q_formlayout_on_maximum_size(void* self, QSize* (*slot)());
int32_t q_formlayout_index_of(void* self, void* param1);
int32_t q_formlayout_qbase_index_of(void* self, void* param1);
void q_formlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));
bool q_formlayout_is_empty(void* self);
bool q_formlayout_qbase_is_empty(void* self);
void q_formlayout_on_is_empty(void* self, bool (*slot)());
int64_t q_formlayout_control_types(void* self);
int64_t q_formlayout_qbase_control_types(void* self);
void q_formlayout_on_control_types(void* self, int64_t (*slot)());
QLayoutItem* q_formlayout_replace_widget(void* self, void* from, void* to, int64_t options);
QLayoutItem* q_formlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);
void q_formlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));
QLayout* q_formlayout_layout(void* self);
QLayout* q_formlayout_qbase_layout(void* self);
void q_formlayout_on_layout(void* self, QLayout* (*slot)());
void q_formlayout_child_event(void* self, void* e);
void q_formlayout_qbase_child_event(void* self, void* e);
void q_formlayout_on_child_event(void* self, void (*slot)(void*, void*));
bool q_formlayout_event(void* self, void* event);
bool q_formlayout_qbase_event(void* self, void* event);
void q_formlayout_on_event(void* self, bool (*slot)(void*, void*));
bool q_formlayout_event_filter(void* self, void* watched, void* event);
bool q_formlayout_qbase_event_filter(void* self, void* watched, void* event);
void q_formlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_formlayout_timer_event(void* self, void* event);
void q_formlayout_qbase_timer_event(void* self, void* event);
void q_formlayout_on_timer_event(void* self, void (*slot)(void*, void*));
void q_formlayout_custom_event(void* self, void* event);
void q_formlayout_qbase_custom_event(void* self, void* event);
void q_formlayout_on_custom_event(void* self, void (*slot)(void*, void*));
void q_formlayout_connect_notify(void* self, void* signal);
void q_formlayout_qbase_connect_notify(void* self, void* signal);
void q_formlayout_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_formlayout_disconnect_notify(void* self, void* signal);
void q_formlayout_qbase_disconnect_notify(void* self, void* signal);
void q_formlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_formlayout_minimum_height_for_width(void* self, int param1);
int32_t q_formlayout_qbase_minimum_height_for_width(void* self, int param1);
void q_formlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
QWidget* q_formlayout_widget(void* self);
QWidget* q_formlayout_qbase_widget(void* self);
void q_formlayout_on_widget(void* self, QWidget* (*slot)());
QSpacerItem* q_formlayout_spacer_item(void* self);
QSpacerItem* q_formlayout_qbase_spacer_item(void* self);
void q_formlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());
void q_formlayout_widget_event(void* self, void* param1);
void q_formlayout_qbase_widget_event(void* self, void* param1);
void q_formlayout_on_widget_event(void* self, void (*slot)(void*, void*));
void q_formlayout_add_child_layout(void* self, void* l);
void q_formlayout_qbase_add_child_layout(void* self, void* l);
void q_formlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));
void q_formlayout_add_child_widget(void* self, void* w);
void q_formlayout_qbase_add_child_widget(void* self, void* w);
void q_formlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));
bool q_formlayout_adopt_layout(void* self, void* layout);
bool q_formlayout_qbase_adopt_layout(void* self, void* layout);
void q_formlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));
QRect* q_formlayout_alignment_rect(void* self, void* param1);
QRect* q_formlayout_qbase_alignment_rect(void* self, void* param1);
void q_formlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));
QObject* q_formlayout_sender(void* self);
QObject* q_formlayout_qbase_sender(void* self);
void q_formlayout_on_sender(void* self, QObject* (*slot)());
int32_t q_formlayout_sender_signal_index(void* self);
int32_t q_formlayout_qbase_sender_signal_index(void* self);
void q_formlayout_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_formlayout_receivers(void* self, const char* signal);
int32_t q_formlayout_qbase_receivers(void* self, const char* signal);
void q_formlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_formlayout_is_signal_connected(void* self, void* signal);
bool q_formlayout_qbase_is_signal_connected(void* self, void* signal);
void q_formlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_formlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qformlayout.html#types

typedef enum {
    QFORMLAYOUT_FIELDGROWTHPOLICY_FIELDSSTAYATSIZEHINT = 0,
    QFORMLAYOUT_FIELDGROWTHPOLICY_EXPANDINGFIELDSGROW = 1,
    QFORMLAYOUT_FIELDGROWTHPOLICY_ALLNONFIXEDFIELDSGROW = 2
} QFormLayout__FieldGrowthPolicy;

typedef enum {
    QFORMLAYOUT_ROWWRAPPOLICY_DONTWRAPROWS = 0,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPLONGROWS = 1,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPALLROWS = 2
} QFormLayout__RowWrapPolicy;

typedef enum {
    QFORMLAYOUT_ITEMROLE_LABELROLE = 0,
    QFORMLAYOUT_ITEMROLE_FIELDROLE = 1,
    QFORMLAYOUT_ITEMROLE_SPANNINGROLE = 2
} QFormLayout__ItemRole;

#endif
