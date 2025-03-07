#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayoutitem.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"

QGraphicsLayout* q_graphicslayout_new();
QGraphicsLayout* q_graphicslayout_new2(void* parent);
void q_graphicslayout_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_graphicslayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicslayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
void q_graphicslayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicslayout_activate(void* self);
bool q_graphicslayout_is_activated(void* self);
void q_graphicslayout_invalidate(void* self);
void q_graphicslayout_on_invalidate(void* self, void (*slot)());
void q_graphicslayout_qbase_invalidate(void* self);
void q_graphicslayout_update_geometry(void* self);
void q_graphicslayout_on_update_geometry(void* self, void (*slot)());
void q_graphicslayout_qbase_update_geometry(void* self);
void q_graphicslayout_widget_event(void* self, void* e);
void q_graphicslayout_on_widget_event(void* self, void (*slot)(void*, void*));
void q_graphicslayout_qbase_widget_event(void* self, void* e);
int32_t q_graphicslayout_count(void* self);
void q_graphicslayout_on_count(void* self, int32_t (*slot)());
int32_t q_graphicslayout_qbase_count(void* self);
QGraphicsLayoutItem* q_graphicslayout_item_at(void* self, int i);
void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));
QGraphicsLayoutItem* q_graphicslayout_qbase_item_at(void* self, int i);
void q_graphicslayout_remove_at(void* self, int index);
void q_graphicslayout_on_remove_at(void* self, void (*slot)(void*, int));
void q_graphicslayout_qbase_remove_at(void* self, int index);
void q_graphicslayout_set_instant_invalidate_propagation(bool enable);
bool q_graphicslayout_instant_invalidate_propagation();
void q_graphicslayout_add_child_layout_item(void* self, void* layoutItem);
void q_graphicslayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));
void q_graphicslayout_qbase_add_child_layout_item(void* self, void* layoutItem);
void q_graphicslayout_set_size_policy(void* self, void* policy);
void q_graphicslayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_graphicslayout_size_policy(void* self);
void q_graphicslayout_set_minimum_size(void* self, void* size);
void q_graphicslayout_set_minimum_size2(void* self, double w, double h);
QSizeF* q_graphicslayout_minimum_size(void* self);
void q_graphicslayout_set_minimum_width(void* self, double width);
double q_graphicslayout_minimum_width(void* self);
void q_graphicslayout_set_minimum_height(void* self, double height);
double q_graphicslayout_minimum_height(void* self);
void q_graphicslayout_set_preferred_size(void* self, void* size);
void q_graphicslayout_set_preferred_size2(void* self, double w, double h);
QSizeF* q_graphicslayout_preferred_size(void* self);
void q_graphicslayout_set_preferred_width(void* self, double width);
double q_graphicslayout_preferred_width(void* self);
void q_graphicslayout_set_preferred_height(void* self, double height);
double q_graphicslayout_preferred_height(void* self);
void q_graphicslayout_set_maximum_size(void* self, void* size);
void q_graphicslayout_set_maximum_size2(void* self, double w, double h);
QSizeF* q_graphicslayout_maximum_size(void* self);
void q_graphicslayout_set_maximum_width(void* self, double width);
double q_graphicslayout_maximum_width(void* self);
void q_graphicslayout_set_maximum_height(void* self, double height);
double q_graphicslayout_maximum_height(void* self);
QRectF* q_graphicslayout_geometry(void* self);
QRectF* q_graphicslayout_contents_rect(void* self);
QSizeF* q_graphicslayout_effective_size_hint(void* self, int64_t which);
QGraphicsLayoutItem* q_graphicslayout_parent_layout_item(void* self);
void q_graphicslayout_set_parent_layout_item(void* self, void* parent);
bool q_graphicslayout_is_layout(void* self);
QGraphicsItem* q_graphicslayout_graphics_item(void* self);
bool q_graphicslayout_owned_by_layout(void* self);
void q_graphicslayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_graphicslayout_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_graphicslayout_set_geometry(void* self, void* rect);
void q_graphicslayout_qbase_set_geometry(void* self, void* rect);
void q_graphicslayout_on_set_geometry(void* self, void (*slot)(void*, void*));
bool q_graphicslayout_is_empty(void* self);
bool q_graphicslayout_qbase_is_empty(void* self);
void q_graphicslayout_on_is_empty(void* self, bool (*slot)());
QSizeF* q_graphicslayout_size_hint(void* self, int64_t which, void* constraint);
QSizeF* q_graphicslayout_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_graphicslayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
void q_graphicslayout_set_graphics_item(void* self, void* item);
void q_graphicslayout_qbase_set_graphics_item(void* self, void* item);
void q_graphicslayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicslayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicslayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_graphicslayout_delete(void* self);

#endif
