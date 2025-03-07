#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSGRIDLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSGRIDLAYOUT_H

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

QGraphicsGridLayout* q_graphicsgridlayout_new();
QGraphicsGridLayout* q_graphicsgridlayout_new2(void* parent);
void q_graphicsgridlayout_add_item(void* self, void* item, int row, int column, int rowSpan, int columnSpan);
void q_graphicsgridlayout_add_item2(void* self, void* item, int row, int column);
void q_graphicsgridlayout_set_horizontal_spacing(void* self, double spacing);
double q_graphicsgridlayout_horizontal_spacing(void* self);
void q_graphicsgridlayout_set_vertical_spacing(void* self, double spacing);
double q_graphicsgridlayout_vertical_spacing(void* self);
void q_graphicsgridlayout_set_spacing(void* self, double spacing);
void q_graphicsgridlayout_set_row_spacing(void* self, int row, double spacing);
double q_graphicsgridlayout_row_spacing(void* self, int row);
void q_graphicsgridlayout_set_column_spacing(void* self, int column, double spacing);
double q_graphicsgridlayout_column_spacing(void* self, int column);
void q_graphicsgridlayout_set_row_stretch_factor(void* self, int row, int stretch);
int32_t q_graphicsgridlayout_row_stretch_factor(void* self, int row);
void q_graphicsgridlayout_set_column_stretch_factor(void* self, int column, int stretch);
int32_t q_graphicsgridlayout_column_stretch_factor(void* self, int column);
void q_graphicsgridlayout_set_row_minimum_height(void* self, int row, double height);
double q_graphicsgridlayout_row_minimum_height(void* self, int row);
void q_graphicsgridlayout_set_row_preferred_height(void* self, int row, double height);
double q_graphicsgridlayout_row_preferred_height(void* self, int row);
void q_graphicsgridlayout_set_row_maximum_height(void* self, int row, double height);
double q_graphicsgridlayout_row_maximum_height(void* self, int row);
void q_graphicsgridlayout_set_row_fixed_height(void* self, int row, double height);
void q_graphicsgridlayout_set_column_minimum_width(void* self, int column, double width);
double q_graphicsgridlayout_column_minimum_width(void* self, int column);
void q_graphicsgridlayout_set_column_preferred_width(void* self, int column, double width);
double q_graphicsgridlayout_column_preferred_width(void* self, int column);
void q_graphicsgridlayout_set_column_maximum_width(void* self, int column, double width);
double q_graphicsgridlayout_column_maximum_width(void* self, int column);
void q_graphicsgridlayout_set_column_fixed_width(void* self, int column, double width);
void q_graphicsgridlayout_set_row_alignment(void* self, int row, int64_t alignment);
int64_t q_graphicsgridlayout_row_alignment(void* self, int row);
void q_graphicsgridlayout_set_column_alignment(void* self, int column, int64_t alignment);
int64_t q_graphicsgridlayout_column_alignment(void* self, int column);
void q_graphicsgridlayout_set_alignment(void* self, void* item, int64_t alignment);
int64_t q_graphicsgridlayout_alignment(void* self, void* item);
int32_t q_graphicsgridlayout_row_count(void* self);
int32_t q_graphicsgridlayout_column_count(void* self);
QGraphicsLayoutItem* q_graphicsgridlayout_item_at(void* self, int row, int column);
int32_t q_graphicsgridlayout_count(void* self);
void q_graphicsgridlayout_on_count(void* self, int32_t (*slot)());
int32_t q_graphicsgridlayout_qbase_count(void* self);
QGraphicsLayoutItem* q_graphicsgridlayout_item_at_with_index(void* self, int index);
void q_graphicsgridlayout_on_item_at_with_index(void* self, QGraphicsLayoutItem* (*slot)(void*, int));
QGraphicsLayoutItem* q_graphicsgridlayout_qbase_item_at_with_index(void* self, int index);
void q_graphicsgridlayout_remove_at(void* self, int index);
void q_graphicsgridlayout_on_remove_at(void* self, void (*slot)(void*, int));
void q_graphicsgridlayout_qbase_remove_at(void* self, int index);
void q_graphicsgridlayout_remove_item(void* self, void* item);
void q_graphicsgridlayout_invalidate(void* self);
void q_graphicsgridlayout_on_invalidate(void* self, void (*slot)());
void q_graphicsgridlayout_qbase_invalidate(void* self);
void q_graphicsgridlayout_set_geometry(void* self, void* rect);
void q_graphicsgridlayout_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_graphicsgridlayout_qbase_set_geometry(void* self, void* rect);
QSizeF* q_graphicsgridlayout_size_hint(void* self, int64_t which, void* constraint);
void q_graphicsgridlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
QSizeF* q_graphicsgridlayout_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_graphicsgridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t alignment);
void q_graphicsgridlayout_add_item4(void* self, void* item, int row, int column, int64_t alignment);
void q_graphicsgridlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_graphicsgridlayout_activate(void* self);
bool q_graphicsgridlayout_is_activated(void* self);
void q_graphicsgridlayout_set_instant_invalidate_propagation(bool enable);
bool q_graphicsgridlayout_instant_invalidate_propagation();
void q_graphicsgridlayout_set_size_policy(void* self, void* policy);
void q_graphicsgridlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_graphicsgridlayout_size_policy(void* self);
void q_graphicsgridlayout_set_minimum_size(void* self, void* size);
void q_graphicsgridlayout_set_minimum_size2(void* self, double w, double h);
QSizeF* q_graphicsgridlayout_minimum_size(void* self);
void q_graphicsgridlayout_set_minimum_width(void* self, double width);
double q_graphicsgridlayout_minimum_width(void* self);
void q_graphicsgridlayout_set_minimum_height(void* self, double height);
double q_graphicsgridlayout_minimum_height(void* self);
void q_graphicsgridlayout_set_preferred_size(void* self, void* size);
void q_graphicsgridlayout_set_preferred_size2(void* self, double w, double h);
QSizeF* q_graphicsgridlayout_preferred_size(void* self);
void q_graphicsgridlayout_set_preferred_width(void* self, double width);
double q_graphicsgridlayout_preferred_width(void* self);
void q_graphicsgridlayout_set_preferred_height(void* self, double height);
double q_graphicsgridlayout_preferred_height(void* self);
void q_graphicsgridlayout_set_maximum_size(void* self, void* size);
void q_graphicsgridlayout_set_maximum_size2(void* self, double w, double h);
QSizeF* q_graphicsgridlayout_maximum_size(void* self);
void q_graphicsgridlayout_set_maximum_width(void* self, double width);
double q_graphicsgridlayout_maximum_width(void* self);
void q_graphicsgridlayout_set_maximum_height(void* self, double height);
double q_graphicsgridlayout_maximum_height(void* self);
QRectF* q_graphicsgridlayout_geometry(void* self);
QRectF* q_graphicsgridlayout_contents_rect(void* self);
QSizeF* q_graphicsgridlayout_effective_size_hint(void* self, int64_t which);
QGraphicsLayoutItem* q_graphicsgridlayout_parent_layout_item(void* self);
void q_graphicsgridlayout_set_parent_layout_item(void* self, void* parent);
bool q_graphicsgridlayout_is_layout(void* self);
QGraphicsItem* q_graphicsgridlayout_graphics_item(void* self);
bool q_graphicsgridlayout_owned_by_layout(void* self);
void q_graphicsgridlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_graphicsgridlayout_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_graphicsgridlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicsgridlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicsgridlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
void q_graphicsgridlayout_update_geometry(void* self);
void q_graphicsgridlayout_qbase_update_geometry(void* self);
void q_graphicsgridlayout_on_update_geometry(void* self, void (*slot)());
void q_graphicsgridlayout_widget_event(void* self, void* e);
void q_graphicsgridlayout_qbase_widget_event(void* self, void* e);
void q_graphicsgridlayout_on_widget_event(void* self, void (*slot)(void*, void*));
bool q_graphicsgridlayout_is_empty(void* self);
bool q_graphicsgridlayout_qbase_is_empty(void* self);
void q_graphicsgridlayout_on_is_empty(void* self, bool (*slot)());
void q_graphicsgridlayout_add_child_layout_item(void* self, void* layoutItem);
void q_graphicsgridlayout_qbase_add_child_layout_item(void* self, void* layoutItem);
void q_graphicsgridlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));
void q_graphicsgridlayout_set_graphics_item(void* self, void* item);
void q_graphicsgridlayout_qbase_set_graphics_item(void* self, void* item);
void q_graphicsgridlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_graphicsgridlayout_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicsgridlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicsgridlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_graphicsgridlayout_delete(void* self);

#endif
