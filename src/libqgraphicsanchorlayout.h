#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSANCHORLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayout.h"
#include "libqgraphicslayoutitem.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_graphicsanchor_meta_object(void* self);
void* q_graphicsanchor_metacast(void* self, const char* param1);
int32_t q_graphicsanchor_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicsanchor_tr(const char* s);
void q_graphicsanchor_set_spacing(void* self, double spacing);
void q_graphicsanchor_unset_spacing(void* self);
double q_graphicsanchor_spacing(void* self);
void q_graphicsanchor_set_size_policy(void* self, int64_t policy);
int64_t q_graphicsanchor_size_policy(void* self);
const char* q_graphicsanchor_tr2(const char* s, const char* c);
const char* q_graphicsanchor_tr3(const char* s, const char* c, int n);
bool q_graphicsanchor_event(void* self, void* event);
bool q_graphicsanchor_event_filter(void* self, void* watched, void* event);
const char* q_graphicsanchor_object_name(void* self);
void q_graphicsanchor_set_object_name(void* self, const char* name);
bool q_graphicsanchor_is_widget_type(void* self);
bool q_graphicsanchor_is_window_type(void* self);
bool q_graphicsanchor_is_quick_item_type(void* self);
bool q_graphicsanchor_signals_blocked(void* self);
bool q_graphicsanchor_block_signals(void* self, bool b);
QThread* q_graphicsanchor_thread(void* self);
void q_graphicsanchor_move_to_thread(void* self, void* thread);
int32_t q_graphicsanchor_start_timer(void* self, int interval);
void q_graphicsanchor_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicsanchor_children(void* self);
void q_graphicsanchor_set_parent(void* self, void* parent);
void q_graphicsanchor_install_event_filter(void* self, void* filterObj);
void q_graphicsanchor_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicsanchor_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicsanchor_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicsanchor_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicsanchor_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicsanchor_dump_object_tree(void* self);
void q_graphicsanchor_dump_object_info(void* self);
bool q_graphicsanchor_set_property(void* self, const char* name, void* value);
QVariant* q_graphicsanchor_property(void* self, const char* name);
const char** q_graphicsanchor_dynamic_property_names(void* self);
QBindingStorage* q_graphicsanchor_binding_storage(void* self);
QBindingStorage* q_graphicsanchor_binding_storage2(void* self);
void q_graphicsanchor_destroyed(void* self);
void q_graphicsanchor_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicsanchor_parent(void* self);
bool q_graphicsanchor_inherits(void* self, const char* classname);
void q_graphicsanchor_delete_later(void* self);
int32_t q_graphicsanchor_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicsanchor_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicsanchor_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicsanchor_destroyed1(void* self, void* param1);
void q_graphicsanchor_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_graphicsanchor_delete(void* self);

QGraphicsAnchorLayout* q_graphicsanchorlayout_new();
QGraphicsAnchorLayout* q_graphicsanchorlayout_new2(void* parent);
QGraphicsAnchor* q_graphicsanchorlayout_add_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge);
QGraphicsAnchor* q_graphicsanchorlayout_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge);
void q_graphicsanchorlayout_add_corner_anchors(void* self, void* firstItem, int64_t firstCorner, void* secondItem, int64_t secondCorner);
void q_graphicsanchorlayout_add_anchors(void* self, void* firstItem, void* secondItem);
void q_graphicsanchorlayout_set_horizontal_spacing(void* self, double spacing);
void q_graphicsanchorlayout_set_vertical_spacing(void* self, double spacing);
void q_graphicsanchorlayout_set_spacing(void* self, double spacing);
double q_graphicsanchorlayout_horizontal_spacing(void* self);
double q_graphicsanchorlayout_vertical_spacing(void* self);
void q_graphicsanchorlayout_remove_at(void* self, int index);
void q_graphicsanchorlayout_on_remove_at(void* self, void (*slot)(void*, int));
void q_graphicsanchorlayout_qbase_remove_at(void* self, int index);
void q_graphicsanchorlayout_set_geometry(void* self, void* rect);
void q_graphicsanchorlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_graphicsanchorlayout_qbase_set_geometry(void* self, void* rect);
int32_t q_graphicsanchorlayout_count(void* self);
void q_graphicsanchorlayout_on_count(void* self, int32_t (*slot)());
int32_t q_graphicsanchorlayout_qbase_count(void* self);
QGraphicsLayoutItem* q_graphicsanchorlayout_item_at(void* self, int index);
void q_graphicsanchorlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));
QGraphicsLayoutItem* q_graphicsanchorlayout_qbase_item_at(void* self, int index);
void q_graphicsanchorlayout_invalidate(void* self);
void q_graphicsanchorlayout_on_invalidate(void* self, void (*slot)());
void q_graphicsanchorlayout_qbase_invalidate(void* self);
QSizeF* q_graphicsanchorlayout_size_hint(void* self, int64_t which, void* constraint);
void q_graphicsanchorlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
QSizeF* q_graphicsanchorlayout_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_graphicsanchorlayout_add_anchors3(void* self, void* firstItem, void* secondItem, int64_t orientations);
void q_graphicsanchorlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_graphicsanchorlayout_activate(void* self);
bool q_graphicsanchorlayout_is_activated(void* self);
void q_graphicsanchorlayout_set_instant_invalidate_propagation(bool enable);
bool q_graphicsanchorlayout_instant_invalidate_propagation();
void q_graphicsanchorlayout_set_size_policy(void* self, void* policy);
void q_graphicsanchorlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_graphicsanchorlayout_size_policy(void* self);
void q_graphicsanchorlayout_set_minimum_size(void* self, void* size);
void q_graphicsanchorlayout_set_minimum_size2(void* self, double w, double h);
QSizeF* q_graphicsanchorlayout_minimum_size(void* self);
void q_graphicsanchorlayout_set_minimum_width(void* self, double width);
double q_graphicsanchorlayout_minimum_width(void* self);
void q_graphicsanchorlayout_set_minimum_height(void* self, double height);
double q_graphicsanchorlayout_minimum_height(void* self);
void q_graphicsanchorlayout_set_preferred_size(void* self, void* size);
void q_graphicsanchorlayout_set_preferred_size2(void* self, double w, double h);
QSizeF* q_graphicsanchorlayout_preferred_size(void* self);
void q_graphicsanchorlayout_set_preferred_width(void* self, double width);
double q_graphicsanchorlayout_preferred_width(void* self);
void q_graphicsanchorlayout_set_preferred_height(void* self, double height);
double q_graphicsanchorlayout_preferred_height(void* self);
void q_graphicsanchorlayout_set_maximum_size(void* self, void* size);
void q_graphicsanchorlayout_set_maximum_size2(void* self, double w, double h);
QSizeF* q_graphicsanchorlayout_maximum_size(void* self);
void q_graphicsanchorlayout_set_maximum_width(void* self, double width);
double q_graphicsanchorlayout_maximum_width(void* self);
void q_graphicsanchorlayout_set_maximum_height(void* self, double height);
double q_graphicsanchorlayout_maximum_height(void* self);
QRectF* q_graphicsanchorlayout_geometry(void* self);
QRectF* q_graphicsanchorlayout_contents_rect(void* self);
QSizeF* q_graphicsanchorlayout_effective_size_hint(void* self, int64_t which);
QGraphicsLayoutItem* q_graphicsanchorlayout_parent_layout_item(void* self);
void q_graphicsanchorlayout_set_parent_layout_item(void* self, void* parent);
bool q_graphicsanchorlayout_is_layout(void* self);
QGraphicsItem* q_graphicsanchorlayout_graphics_item(void* self);
bool q_graphicsanchorlayout_owned_by_layout(void* self);
void q_graphicsanchorlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_graphicsanchorlayout_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_graphicsanchorlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicsanchorlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicsanchorlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
void q_graphicsanchorlayout_update_geometry(void* self);
void q_graphicsanchorlayout_qbase_update_geometry(void* self);
void q_graphicsanchorlayout_on_update_geometry(void* self, void (*slot)());
void q_graphicsanchorlayout_widget_event(void* self, void* e);
void q_graphicsanchorlayout_qbase_widget_event(void* self, void* e);
void q_graphicsanchorlayout_on_widget_event(void* self, void (*slot)(void*, void*));
bool q_graphicsanchorlayout_is_empty(void* self);
bool q_graphicsanchorlayout_qbase_is_empty(void* self);
void q_graphicsanchorlayout_on_is_empty(void* self, bool (*slot)());
void q_graphicsanchorlayout_add_child_layout_item(void* self, void* layoutItem);
void q_graphicsanchorlayout_qbase_add_child_layout_item(void* self, void* layoutItem);
void q_graphicsanchorlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));
void q_graphicsanchorlayout_set_graphics_item(void* self, void* item);
void q_graphicsanchorlayout_qbase_set_graphics_item(void* self, void* item);
void q_graphicsanchorlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_graphicsanchorlayout_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicsanchorlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicsanchorlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_graphicsanchorlayout_delete(void* self);

#endif
