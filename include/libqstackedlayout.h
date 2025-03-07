#pragma once
#ifndef SRCQT6C_LIBQSTACKEDLAYOUT_H
#define SRCQT6C_LIBQSTACKEDLAYOUT_H

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

QStackedLayout* q_stackedlayout_new(void* parent);
QStackedLayout* q_stackedlayout_new2();
QStackedLayout* q_stackedlayout_new3(void* parentLayout);
QMetaObject* q_stackedlayout_meta_object(void* self);
void* q_stackedlayout_metacast(void* self, const char* param1);
int32_t q_stackedlayout_metacall(void* self, int64_t param1, int param2, void* param3);
void q_stackedlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_stackedlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_stackedlayout_tr(const char* s);
int32_t q_stackedlayout_add_widget(void* self, void* w);
int32_t q_stackedlayout_insert_widget(void* self, int index, void* w);
QWidget* q_stackedlayout_current_widget(void* self);
int32_t q_stackedlayout_current_index(void* self);
QWidget* q_stackedlayout_widget(void* self, int param1);
int32_t q_stackedlayout_count(void* self);
void q_stackedlayout_on_count(void* self, int32_t (*slot)());
int32_t q_stackedlayout_qbase_count(void* self);
int64_t q_stackedlayout_stacking_mode(void* self);
void q_stackedlayout_set_stacking_mode(void* self, int64_t stackingMode);
void q_stackedlayout_add_item(void* self, void* item);
void q_stackedlayout_on_add_item(void* self, void (*slot)(void*, void*));
void q_stackedlayout_qbase_add_item(void* self, void* item);
QSize* q_stackedlayout_size_hint(void* self);
void q_stackedlayout_on_size_hint(void* self, QSize* (*slot)());
QSize* q_stackedlayout_qbase_size_hint(void* self);
QSize* q_stackedlayout_minimum_size(void* self);
void q_stackedlayout_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_stackedlayout_qbase_minimum_size(void* self);
QLayoutItem* q_stackedlayout_item_at(void* self, int param1);
void q_stackedlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_stackedlayout_qbase_item_at(void* self, int param1);
QLayoutItem* q_stackedlayout_take_at(void* self, int param1);
void q_stackedlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));
QLayoutItem* q_stackedlayout_qbase_take_at(void* self, int param1);
void q_stackedlayout_set_geometry(void* self, void* rect);
void q_stackedlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_stackedlayout_qbase_set_geometry(void* self, void* rect);
bool q_stackedlayout_has_height_for_width(void* self);
void q_stackedlayout_on_has_height_for_width(void* self, bool (*slot)());
bool q_stackedlayout_qbase_has_height_for_width(void* self);
int32_t q_stackedlayout_height_for_width(void* self, int width);
void q_stackedlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_stackedlayout_qbase_height_for_width(void* self, int width);
void q_stackedlayout_widget_removed(void* self, int index);
void q_stackedlayout_on_widget_removed(void* self, void (*slot)(void*, int));
void q_stackedlayout_current_changed(void* self, int index);
void q_stackedlayout_on_current_changed(void* self, void (*slot)(void*, int));
void q_stackedlayout_set_current_index(void* self, int index);
void q_stackedlayout_set_current_widget(void* self, void* w);
const char* q_stackedlayout_tr2(const char* s, const char* c);
const char* q_stackedlayout_tr3(const char* s, const char* c, int n);
void q_stackedlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_stackedlayout_set_contents_margins_with_margins(void* self, void* margins);
void q_stackedlayout_unset_contents_margins(void* self);
void q_stackedlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);
QMargins* q_stackedlayout_contents_margins(void* self);
QRect* q_stackedlayout_contents_rect(void* self);
bool q_stackedlayout_set_alignment(void* self, void* w, int64_t alignment);
bool q_stackedlayout_set_alignment2(void* self, void* l, int64_t alignment);
void q_stackedlayout_set_size_constraint(void* self, int64_t sizeConstraint);
int64_t q_stackedlayout_size_constraint(void* self);
void q_stackedlayout_set_menu_bar(void* self, void* w);
QWidget* q_stackedlayout_menu_bar(void* self);
QWidget* q_stackedlayout_parent_widget(void* self);
bool q_stackedlayout_activate(void* self);
void q_stackedlayout_update(void* self);
void q_stackedlayout_remove_widget(void* self, void* w);
void q_stackedlayout_remove_item(void* self, void* param1);
int32_t q_stackedlayout_index_of_with_q_layout_item(void* self, void* param1);
void q_stackedlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));
int32_t q_stackedlayout_qbase_index_of_with_q_layout_item(void* self, void* param1);
int32_t q_stackedlayout_total_minimum_height_for_width(void* self, int w);
int32_t q_stackedlayout_total_height_for_width(void* self, int w);
QSize* q_stackedlayout_total_minimum_size(void* self);
QSize* q_stackedlayout_total_maximum_size(void* self);
QSize* q_stackedlayout_total_size_hint(void* self);
void q_stackedlayout_set_enabled(void* self, bool enabled);
bool q_stackedlayout_is_enabled(void* self);
QSize* q_stackedlayout_closest_acceptable_size(void* w, void* s);
const char* q_stackedlayout_object_name(void* self);
void q_stackedlayout_set_object_name(void* self, const char* name);
bool q_stackedlayout_is_widget_type(void* self);
bool q_stackedlayout_is_window_type(void* self);
bool q_stackedlayout_is_quick_item_type(void* self);
bool q_stackedlayout_signals_blocked(void* self);
bool q_stackedlayout_block_signals(void* self, bool b);
QThread* q_stackedlayout_thread(void* self);
void q_stackedlayout_move_to_thread(void* self, void* thread);
int32_t q_stackedlayout_start_timer(void* self, int interval);
void q_stackedlayout_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_stackedlayout_children(void* self);
void q_stackedlayout_set_parent(void* self, void* parent);
void q_stackedlayout_install_event_filter(void* self, void* filterObj);
void q_stackedlayout_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_stackedlayout_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_stackedlayout_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_stackedlayout_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_stackedlayout_disconnect_with_q_meta_object_connection(void* param1);
void q_stackedlayout_dump_object_tree(void* self);
void q_stackedlayout_dump_object_info(void* self);
bool q_stackedlayout_set_property(void* self, const char* name, void* value);
QVariant* q_stackedlayout_property(void* self, const char* name);
const char** q_stackedlayout_dynamic_property_names(void* self);
QBindingStorage* q_stackedlayout_binding_storage(void* self);
QBindingStorage* q_stackedlayout_binding_storage2(void* self);
void q_stackedlayout_destroyed(void* self);
void q_stackedlayout_on_destroyed(void* self, void (*slot)(void*));
QObject* q_stackedlayout_parent(void* self);
bool q_stackedlayout_inherits(void* self, const char* classname);
void q_stackedlayout_delete_later(void* self);
int32_t q_stackedlayout_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_stackedlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_stackedlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_stackedlayout_destroyed1(void* self, void* param1);
void q_stackedlayout_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_stackedlayout_alignment(void* self);
int32_t q_stackedlayout_spacing(void* self);
int32_t q_stackedlayout_qbase_spacing(void* self);
void q_stackedlayout_on_spacing(void* self, int32_t (*slot)());
void q_stackedlayout_set_spacing(void* self, int spacing);
void q_stackedlayout_qbase_set_spacing(void* self, int spacing);
void q_stackedlayout_on_set_spacing(void* self, void (*slot)(void*, int));
void q_stackedlayout_invalidate(void* self);
void q_stackedlayout_qbase_invalidate(void* self);
void q_stackedlayout_on_invalidate(void* self, void (*slot)());
QRect* q_stackedlayout_geometry(void* self);
QRect* q_stackedlayout_qbase_geometry(void* self);
void q_stackedlayout_on_geometry(void* self, QRect* (*slot)());
int64_t q_stackedlayout_expanding_directions(void* self);
int64_t q_stackedlayout_qbase_expanding_directions(void* self);
void q_stackedlayout_on_expanding_directions(void* self, int64_t (*slot)());
QSize* q_stackedlayout_maximum_size(void* self);
QSize* q_stackedlayout_qbase_maximum_size(void* self);
void q_stackedlayout_on_maximum_size(void* self, QSize* (*slot)());
int32_t q_stackedlayout_index_of(void* self, void* param1);
int32_t q_stackedlayout_qbase_index_of(void* self, void* param1);
void q_stackedlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));
bool q_stackedlayout_is_empty(void* self);
bool q_stackedlayout_qbase_is_empty(void* self);
void q_stackedlayout_on_is_empty(void* self, bool (*slot)());
int64_t q_stackedlayout_control_types(void* self);
int64_t q_stackedlayout_qbase_control_types(void* self);
void q_stackedlayout_on_control_types(void* self, int64_t (*slot)());
QLayoutItem* q_stackedlayout_replace_widget(void* self, void* from, void* to, int64_t options);
QLayoutItem* q_stackedlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);
void q_stackedlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));
QLayout* q_stackedlayout_layout(void* self);
QLayout* q_stackedlayout_qbase_layout(void* self);
void q_stackedlayout_on_layout(void* self, QLayout* (*slot)());
void q_stackedlayout_child_event(void* self, void* e);
void q_stackedlayout_qbase_child_event(void* self, void* e);
void q_stackedlayout_on_child_event(void* self, void (*slot)(void*, void*));
bool q_stackedlayout_event(void* self, void* event);
bool q_stackedlayout_qbase_event(void* self, void* event);
void q_stackedlayout_on_event(void* self, bool (*slot)(void*, void*));
bool q_stackedlayout_event_filter(void* self, void* watched, void* event);
bool q_stackedlayout_qbase_event_filter(void* self, void* watched, void* event);
void q_stackedlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_stackedlayout_timer_event(void* self, void* event);
void q_stackedlayout_qbase_timer_event(void* self, void* event);
void q_stackedlayout_on_timer_event(void* self, void (*slot)(void*, void*));
void q_stackedlayout_custom_event(void* self, void* event);
void q_stackedlayout_qbase_custom_event(void* self, void* event);
void q_stackedlayout_on_custom_event(void* self, void (*slot)(void*, void*));
void q_stackedlayout_connect_notify(void* self, void* signal);
void q_stackedlayout_qbase_connect_notify(void* self, void* signal);
void q_stackedlayout_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_stackedlayout_disconnect_notify(void* self, void* signal);
void q_stackedlayout_qbase_disconnect_notify(void* self, void* signal);
void q_stackedlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_stackedlayout_minimum_height_for_width(void* self, int param1);
int32_t q_stackedlayout_qbase_minimum_height_for_width(void* self, int param1);
void q_stackedlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
QSpacerItem* q_stackedlayout_spacer_item(void* self);
QSpacerItem* q_stackedlayout_qbase_spacer_item(void* self);
void q_stackedlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());
void q_stackedlayout_widget_event(void* self, void* param1);
void q_stackedlayout_qbase_widget_event(void* self, void* param1);
void q_stackedlayout_on_widget_event(void* self, void (*slot)(void*, void*));
void q_stackedlayout_add_child_layout(void* self, void* l);
void q_stackedlayout_qbase_add_child_layout(void* self, void* l);
void q_stackedlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));
void q_stackedlayout_add_child_widget(void* self, void* w);
void q_stackedlayout_qbase_add_child_widget(void* self, void* w);
void q_stackedlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));
bool q_stackedlayout_adopt_layout(void* self, void* layout);
bool q_stackedlayout_qbase_adopt_layout(void* self, void* layout);
void q_stackedlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));
QRect* q_stackedlayout_alignment_rect(void* self, void* param1);
QRect* q_stackedlayout_qbase_alignment_rect(void* self, void* param1);
void q_stackedlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));
QObject* q_stackedlayout_sender(void* self);
QObject* q_stackedlayout_qbase_sender(void* self);
void q_stackedlayout_on_sender(void* self, QObject* (*slot)());
int32_t q_stackedlayout_sender_signal_index(void* self);
int32_t q_stackedlayout_qbase_sender_signal_index(void* self);
void q_stackedlayout_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_stackedlayout_receivers(void* self, const char* signal);
int32_t q_stackedlayout_qbase_receivers(void* self, const char* signal);
void q_stackedlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_stackedlayout_is_signal_connected(void* self, void* signal);
bool q_stackedlayout_qbase_is_signal_connected(void* self, void* signal);
void q_stackedlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_stackedlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qstackedlayout.html#types

typedef enum {
    QSTACKEDLAYOUT_STACKINGMODE_STACKONE = 0,
    QSTACKEDLAYOUT_STACKINGMODE_STACKALL = 1
} QStackedLayout__StackingMode;

#endif
