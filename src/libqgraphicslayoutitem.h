#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLAYOUTITEM_H
#define SRCQT6C_LIBQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqgraphicsitem.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"

QGraphicsLayoutItem* q_graphicslayoutitem_new();
QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent);
QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout);
void q_graphicslayoutitem_set_size_policy(void* self, void* policy);
void q_graphicslayoutitem_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_graphicslayoutitem_size_policy(void* self);
void q_graphicslayoutitem_set_minimum_size(void* self, void* size);
void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h);
QSizeF* q_graphicslayoutitem_minimum_size(void* self);
void q_graphicslayoutitem_set_minimum_width(void* self, double width);
double q_graphicslayoutitem_minimum_width(void* self);
void q_graphicslayoutitem_set_minimum_height(void* self, double height);
double q_graphicslayoutitem_minimum_height(void* self);
void q_graphicslayoutitem_set_preferred_size(void* self, void* size);
void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h);
QSizeF* q_graphicslayoutitem_preferred_size(void* self);
void q_graphicslayoutitem_set_preferred_width(void* self, double width);
double q_graphicslayoutitem_preferred_width(void* self);
void q_graphicslayoutitem_set_preferred_height(void* self, double height);
double q_graphicslayoutitem_preferred_height(void* self);
void q_graphicslayoutitem_set_maximum_size(void* self, void* size);
void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h);
QSizeF* q_graphicslayoutitem_maximum_size(void* self);
void q_graphicslayoutitem_set_maximum_width(void* self, double width);
double q_graphicslayoutitem_maximum_width(void* self);
void q_graphicslayoutitem_set_maximum_height(void* self, double height);
double q_graphicslayoutitem_maximum_height(void* self);
void q_graphicslayoutitem_set_geometry(void* self, void* rect);
void q_graphicslayoutitem_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_graphicslayoutitem_qbase_set_geometry(void* self, void* rect);
QRectF* q_graphicslayoutitem_geometry(void* self);
void q_graphicslayoutitem_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
void q_graphicslayoutitem_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
QRectF* q_graphicslayoutitem_contents_rect(void* self);
QSizeF* q_graphicslayoutitem_effective_size_hint(void* self, int64_t which);
void q_graphicslayoutitem_update_geometry(void* self);
void q_graphicslayoutitem_on_update_geometry(void* self, void (*slot)());
void q_graphicslayoutitem_qbase_update_geometry(void* self);
bool q_graphicslayoutitem_is_empty(void* self);
void q_graphicslayoutitem_on_is_empty(void* self, bool (*slot)());
bool q_graphicslayoutitem_qbase_is_empty(void* self);
QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(void* self);
void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent);
bool q_graphicslayoutitem_is_layout(void* self);
QGraphicsItem* q_graphicslayoutitem_graphics_item(void* self);
bool q_graphicslayoutitem_owned_by_layout(void* self);
void q_graphicslayoutitem_set_graphics_item(void* self, void* item);
void q_graphicslayoutitem_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_graphicslayoutitem_qbase_set_graphics_item(void* self, void* item);
void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout);
void q_graphicslayoutitem_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_graphicslayoutitem_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
QSizeF* q_graphicslayoutitem_size_hint(void* self, int64_t which, void* constraint);
void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
QSizeF* q_graphicslayoutitem_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_graphicslayoutitem_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_graphicslayoutitem_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_graphicslayoutitem_delete(void* self);

#endif
