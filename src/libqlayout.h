#pragma once
#ifndef SRCQT6C_LIBQLAYOUT_H
#define SRCQT6C_LIBQLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
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

QLayout* q_layout_new(void* parent);
QLayout* q_layout_new2();
QMetaObject* q_layout_meta_object(void* self);
void* q_layout_metacast(void* self, const char* param1);
int32_t q_layout_metacall(void* self, int64_t param1, int param2, void* param3);
void q_layout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_layout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_layout_tr(const char* s);
int32_t q_layout_spacing(void* self);
void q_layout_on_spacing(void* self, int32_t (*slot)());
int32_t q_layout_qbase_spacing(void* self);
void q_layout_set_spacing(void* self, int spacing);
void q_layout_on_set_spacing(void* self, void (*slot)(void*, int));
void q_layout_qbase_set_spacing(void* self, int spacing);
void q_layout_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_layout_set_contents_margins_with_margins(void* self, void* margins);
void q_layout_unset_contents_margins(void* self);
void q_layout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);
QMargins* q_layout_contents_margins(void* self);
QRect* q_layout_contents_rect(void* self);
bool q_layout_set_alignment(void* self, void* w, int64_t alignment);
bool q_layout_set_alignment2(void* self, void* l, int64_t alignment);
void q_layout_set_size_constraint(void* self, int64_t sizeConstraint);
int64_t q_layout_size_constraint(void* self);
void q_layout_set_menu_bar(void* self, void* w);
QWidget* q_layout_menu_bar(void* self);
QWidget* q_layout_parent_widget(void* self);
void q_layout_invalidate(void* self);
void q_layout_on_invalidate(void* self, void (*slot)());
void q_layout_qbase_invalidate(void* self);
QRect* q_layout_geometry(void* self);
void q_layout_on_geometry(void* self, QRect* (*slot)());
QRect* q_layout_qbase_geometry(void* self);
bool q_layout_activate(void* self);
void q_layout_update(void* self);
void q_layout_add_widget(void* self, void* w);
void q_layout_add_item(void* self, void* param1);
void q_layout_on_add_item(void* self, void (*slot)(void*, void*));
void q_layout_qbase_add_item(void* self, void* param1);
void q_layout_remove_widget(void* self, void* w);
void q_layout_remove_item(void* self, void* param1);
int64_t q_layout_expanding_directions(void* self);
void q_layout_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_layout_qbase_expanding_directions(void* self);
QSize* q_layout_minimum_size(void* self);
void q_layout_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_layout_qbase_minimum_size(void* self);
QSize* q_layout_maximum_size(void* self);
void q_layout_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_layout_qbase_maximum_size(void* self);
void q_layout_set_geometry(void* self, void* geometry);
void q_layout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_layout_qbase_set_geometry(void* self, void* geometry);
QLayoutItem* q_layout_item_at(void* self, int index);
void q_layout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_layout_qbase_item_at(void* self, int index);
QLayoutItem* q_layout_take_at(void* self, int index);
void q_layout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_layout_qbase_take_at(void* self, int index);
int32_t q_layout_index_of(void* self, void* param1);
void q_layout_on_index_of(void* self, int32_t (*slot)(void*, void*));
int32_t q_layout_qbase_index_of(void* self, void* param1);
int32_t q_layout_index_of_with_q_layout_item(void* self, void* param1);
void q_layout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));
int32_t q_layout_qbase_index_of_with_q_layout_item(void* self, void* param1);
int32_t q_layout_count(void* self);
void q_layout_on_count(void* self, int32_t (*slot)());
int32_t q_layout_qbase_count(void* self);
bool q_layout_is_empty(void* self);
void q_layout_on_is_empty(void* self, bool (*slot)());
bool q_layout_qbase_is_empty(void* self);
int64_t q_layout_control_types(void* self);
void q_layout_on_control_types(void* self, int64_t (*slot)());
int64_t q_layout_qbase_control_types(void* self);
QLayoutItem* q_layout_replace_widget(void* self, void* from, void* to, int64_t options);
void q_layout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));
QLayoutItem* q_layout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);
int32_t q_layout_total_minimum_height_for_width(void* self, int w);
int32_t q_layout_total_height_for_width(void* self, int w);
QSize* q_layout_total_minimum_size(void* self);
QSize* q_layout_total_maximum_size(void* self);
QSize* q_layout_total_size_hint(void* self);
QLayout* q_layout_layout(void* self);
void q_layout_on_layout(void* self, QLayout* (*slot)());
QLayout* q_layout_qbase_layout(void* self);
void q_layout_set_enabled(void* self, bool enabled);
bool q_layout_is_enabled(void* self);
QSize* q_layout_closest_acceptable_size(void* w, void* s);
void q_layout_widget_event(void* self, void* param1);
void q_layout_on_widget_event(void* self, void (*slot)(void*, void*));
void q_layout_qbase_widget_event(void* self, void* param1);
void q_layout_child_event(void* self, void* e);
void q_layout_on_child_event(void* self, void (*slot)(void*, void*));
void q_layout_qbase_child_event(void* self, void* e);
void q_layout_add_child_layout(void* self, void* l);
void q_layout_on_add_child_layout(void* self, void (*slot)(void*, void*));
void q_layout_qbase_add_child_layout(void* self, void* l);
void q_layout_add_child_widget(void* self, void* w);
void q_layout_on_add_child_widget(void* self, void (*slot)(void*, void*));
void q_layout_qbase_add_child_widget(void* self, void* w);
bool q_layout_adopt_layout(void* self, void* layout);
void q_layout_on_adopt_layout(void* self, bool (*slot)(void*, void*));
bool q_layout_qbase_adopt_layout(void* self, void* layout);
QRect* q_layout_alignment_rect(void* self, void* param1);
void q_layout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));
QRect* q_layout_qbase_alignment_rect(void* self, void* param1);
const char* q_layout_tr2(const char* s, const char* c);
const char* q_layout_tr3(const char* s, const char* c, int n);
const char* q_layout_object_name(void* self);
void q_layout_set_object_name(void* self, const char* name);
bool q_layout_is_widget_type(void* self);
bool q_layout_is_window_type(void* self);
bool q_layout_is_quick_item_type(void* self);
bool q_layout_signals_blocked(void* self);
bool q_layout_block_signals(void* self, bool b);
QThread* q_layout_thread(void* self);
void q_layout_move_to_thread(void* self, void* thread);
int32_t q_layout_start_timer(void* self, int interval);
void q_layout_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_layout_children(void* self);
void q_layout_set_parent(void* self, void* parent);
void q_layout_install_event_filter(void* self, void* filterObj);
void q_layout_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_layout_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_layout_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_layout_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_layout_disconnect_with_q_meta_object_connection(void* param1);
void q_layout_dump_object_tree(void* self);
void q_layout_dump_object_info(void* self);
bool q_layout_set_property(void* self, const char* name, void* value);
QVariant* q_layout_property(void* self, const char* name);
const char** q_layout_dynamic_property_names(void* self);
QBindingStorage* q_layout_binding_storage(void* self);
QBindingStorage* q_layout_binding_storage2(void* self);
void q_layout_destroyed(void* self);
void q_layout_on_destroyed(void* self, void (*slot)(void*));
QObject* q_layout_parent(void* self);
bool q_layout_inherits(void* self, const char* classname);
void q_layout_delete_later(void* self);
int32_t q_layout_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_layout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_layout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_layout_destroyed1(void* self, void* param1);
void q_layout_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_layout_alignment(void* self);
bool q_layout_event(void* self, void* event);
bool q_layout_qbase_event(void* self, void* event);
void q_layout_on_event(void* self, bool (*slot)(void*, void*));
bool q_layout_event_filter(void* self, void* watched, void* event);
bool q_layout_qbase_event_filter(void* self, void* watched, void* event);
void q_layout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_layout_timer_event(void* self, void* event);
void q_layout_qbase_timer_event(void* self, void* event);
void q_layout_on_timer_event(void* self, void (*slot)(void*, void*));
void q_layout_custom_event(void* self, void* event);
void q_layout_qbase_custom_event(void* self, void* event);
void q_layout_on_custom_event(void* self, void (*slot)(void*, void*));
void q_layout_connect_notify(void* self, void* signal);
void q_layout_qbase_connect_notify(void* self, void* signal);
void q_layout_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_layout_disconnect_notify(void* self, void* signal);
void q_layout_qbase_disconnect_notify(void* self, void* signal);
void q_layout_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QSize* q_layout_size_hint(void* self);
QSize* q_layout_qbase_size_hint(void* self);
void q_layout_on_size_hint(void* self, QSize* (*slot)());
bool q_layout_has_height_for_width(void* self);
bool q_layout_qbase_has_height_for_width(void* self);
void q_layout_on_has_height_for_width(void* self, bool (*slot)());
int32_t q_layout_height_for_width(void* self, int param1);
int32_t q_layout_qbase_height_for_width(void* self, int param1);
void q_layout_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_layout_minimum_height_for_width(void* self, int param1);
int32_t q_layout_qbase_minimum_height_for_width(void* self, int param1);
void q_layout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
QWidget* q_layout_widget(void* self);
QWidget* q_layout_qbase_widget(void* self);
void q_layout_on_widget(void* self, QWidget* (*slot)());
QSpacerItem* q_layout_spacer_item(void* self);
QSpacerItem* q_layout_qbase_spacer_item(void* self);
void q_layout_on_spacer_item(void* self, QSpacerItem* (*slot)());
QObject* q_layout_sender(void* self);
QObject* q_layout_qbase_sender(void* self);
void q_layout_on_sender(void* self, QObject* (*slot)());
int32_t q_layout_sender_signal_index(void* self);
int32_t q_layout_qbase_sender_signal_index(void* self);
void q_layout_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_layout_receivers(void* self, const char* signal);
int32_t q_layout_qbase_receivers(void* self, const char* signal);
void q_layout_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_layout_is_signal_connected(void* self, void* signal);
bool q_layout_qbase_is_signal_connected(void* self, void* signal);
void q_layout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_layout_delete(void* self);

/// https://doc.qt.io/qt-6/qlayout.html#types

typedef enum {
    QLAYOUT_SIZECONSTRAINT_SETDEFAULTCONSTRAINT = 0,
    QLAYOUT_SIZECONSTRAINT_SETNOCONSTRAINT = 1,
    QLAYOUT_SIZECONSTRAINT_SETMINIMUMSIZE = 2,
    QLAYOUT_SIZECONSTRAINT_SETFIXEDSIZE = 3,
    QLAYOUT_SIZECONSTRAINT_SETMAXIMUMSIZE = 4,
    QLAYOUT_SIZECONSTRAINT_SETMINANDMAXSIZE = 5
} QLayout__SizeConstraint;

#endif
