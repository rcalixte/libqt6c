#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLINEARLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayout.h"
#include "libqgraphicslayoutitem.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"

QGraphicsLinearLayout* q_graphicslinearlayout_new();
QGraphicsLinearLayout* q_graphicslinearlayout_new2(int64_t orientation);
QGraphicsLinearLayout* q_graphicslinearlayout_new3(void* parent);
QGraphicsLinearLayout* q_graphicslinearlayout_new4(int64_t orientation, void* parent);
void q_graphicslinearlayout_set_orientation(void* self, int64_t orientation);
int64_t q_graphicslinearlayout_orientation(void* self);
void q_graphicslinearlayout_add_item(void* self, void* item);
void q_graphicslinearlayout_add_stretch(void* self);
void q_graphicslinearlayout_insert_item(void* self, int index, void* item);
void q_graphicslinearlayout_insert_stretch(void* self, int index);
void q_graphicslinearlayout_remove_item(void* self, void* item);
void q_graphicslinearlayout_remove_at(void* self, int index);
void q_graphicslinearlayout_on_remove_at(void* self, void (*slot)(void*, int));
void q_graphicslinearlayout_qbase_remove_at(void* self, int index);
void q_graphicslinearlayout_set_spacing(void* self, double spacing);
double q_graphicslinearlayout_spacing(void* self);
void q_graphicslinearlayout_set_item_spacing(void* self, int index, double spacing);
double q_graphicslinearlayout_item_spacing(void* self, int index);
void q_graphicslinearlayout_set_stretch_factor(void* self, void* item, int stretch);
int32_t q_graphicslinearlayout_stretch_factor(void* self, void* item);
void q_graphicslinearlayout_set_alignment(void* self, void* item, int64_t alignment);
int64_t q_graphicslinearlayout_alignment(void* self, void* item);
void q_graphicslinearlayout_set_geometry(void* self, void* rect);
void q_graphicslinearlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_graphicslinearlayout_qbase_set_geometry(void* self, void* rect);
int32_t q_graphicslinearlayout_count(void* self);
void q_graphicslinearlayout_on_count(void* self, int32_t (*slot)());
int32_t q_graphicslinearlayout_qbase_count(void* self);
QGraphicsLayoutItem* q_graphicslinearlayout_item_at(void* self, int index);
void q_graphicslinearlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));
QGraphicsLayoutItem* q_graphicslinearlayout_qbase_item_at(void* self, int index);
void q_graphicslinearlayout_invalidate(void* self);
void q_graphicslinearlayout_on_invalidate(void* self, void (*slot)());
void q_graphicslinearlayout_qbase_invalidate(void* self);
QSizeF* q_graphicslinearlayout_size_hint(void* self, int64_t which, void* constraint);
void q_graphicslinearlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
QSizeF* q_graphicslinearlayout_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_graphicslinearlayout_dump(void* self);
void q_graphicslinearlayout_add_stretch1(void* self, int stretch);
void q_graphicslinearlayout_insert_stretch2(void* self, int index, int stretch);
void q_graphicslinearlayout_dump1(void* self, int indent);
void q_graphicslinearlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_graphicslinearlayout_activate(void* self);
bool q_graphicslinearlayout_is_activated(void* self);
void q_graphicslinearlayout_set_instant_invalidate_propagation(bool enable);
bool q_graphicslinearlayout_instant_invalidate_propagation();
void q_graphicslinearlayout_set_size_policy(void* self, void* policy);
void q_graphicslinearlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_graphicslinearlayout_size_policy(void* self);
void q_graphicslinearlayout_set_minimum_size(void* self, void* size);
void q_graphicslinearlayout_set_minimum_size2(void* self, double w, double h);
QSizeF* q_graphicslinearlayout_minimum_size(void* self);
void q_graphicslinearlayout_set_minimum_width(void* self, double width);
double q_graphicslinearlayout_minimum_width(void* self);
void q_graphicslinearlayout_set_minimum_height(void* self, double height);
double q_graphicslinearlayout_minimum_height(void* self);
void q_graphicslinearlayout_set_preferred_size(void* self, void* size);
void q_graphicslinearlayout_set_preferred_size2(void* self, double w, double h);
QSizeF* q_graphicslinearlayout_preferred_size(void* self);
void q_graphicslinearlayout_set_preferred_width(void* self, double width);
double q_graphicslinearlayout_preferred_width(void* self);
void q_graphicslinearlayout_set_preferred_height(void* self, double height);
double q_graphicslinearlayout_preferred_height(void* self);
void q_graphicslinearlayout_set_maximum_size(void* self, void* size);
void q_graphicslinearlayout_set_maximum_size2(void* self, double w, double h);
QSizeF* q_graphicslinearlayout_maximum_size(void* self);
void q_graphicslinearlayout_set_maximum_width(void* self, double width);
double q_graphicslinearlayout_maximum_width(void* self);
void q_graphicslinearlayout_set_maximum_height(void* self, double height);
double q_graphicslinearlayout_maximum_height(void* self);
QRectF* q_graphicslinearlayout_geometry(void* self);
QRectF* q_graphicslinearlayout_contents_rect(void* self);
QSizeF* q_graphicslinearlayout_effective_size_hint(void* self, int64_t which);
QGraphicsLayoutItem* q_graphicslinearlayout_parent_layout_item(void* self);
void q_graphicslinearlayout_set_parent_layout_item(void* self, void* parent);
bool q_graphicslinearlayout_is_layout(void* self);
QGraphicsItem* q_graphicslinearlayout_graphics_item(void* self);
bool q_graphicslinearlayout_owned_by_layout(void* self);
void q_graphicslinearlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_graphicslinearlayout_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_graphicslinearlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicslinearlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicslinearlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
void q_graphicslinearlayout_update_geometry(void* self);
void q_graphicslinearlayout_qbase_update_geometry(void* self);
void q_graphicslinearlayout_on_update_geometry(void* self, void (*slot)());
void q_graphicslinearlayout_widget_event(void* self, void* e);
void q_graphicslinearlayout_qbase_widget_event(void* self, void* e);
void q_graphicslinearlayout_on_widget_event(void* self, void (*slot)(void*, void*));
bool q_graphicslinearlayout_is_empty(void* self);
bool q_graphicslinearlayout_qbase_is_empty(void* self);
void q_graphicslinearlayout_on_is_empty(void* self, bool (*slot)());
void q_graphicslinearlayout_add_child_layout_item(void* self, void* layoutItem);
void q_graphicslinearlayout_qbase_add_child_layout_item(void* self, void* layoutItem);
void q_graphicslinearlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));
void q_graphicslinearlayout_set_graphics_item(void* self, void* item);
void q_graphicslinearlayout_qbase_set_graphics_item(void* self, void* item);
void q_graphicslinearlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_graphicslinearlayout_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicslinearlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicslinearlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_graphicslinearlayout_delete(void* self);

#endif
