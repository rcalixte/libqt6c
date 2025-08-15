#include "libqgraphicsitem.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicslayoutitem.h"

QGraphicsLayoutItem* q_graphicslayoutitem_new() {
    return QGraphicsLayoutItem_new();
}

QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent) {
    return QGraphicsLayoutItem_new2((QGraphicsLayoutItem*)parent);
}

QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout) {
    return QGraphicsLayoutItem_new3((QGraphicsLayoutItem*)parent, isLayout);
}

void q_graphicslayoutitem_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicslayoutitem_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicslayoutitem_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayoutitem_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayoutitem_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayoutitem_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayoutitem_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayoutitem_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayoutitem_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayoutitem_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayoutitem_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayoutitem_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_geometry(void* self, void* rect) {
    QGraphicsLayoutItem_SetGeometry((QGraphicsLayoutItem*)self, (QRectF*)rect);
}

void q_graphicslayoutitem_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayoutItem_OnSetGeometry((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

void q_graphicslayoutitem_qbase_set_geometry(void* self, void* rect) {
    QGraphicsLayoutItem_QBaseSetGeometry((QGraphicsLayoutItem*)self, (QRectF*)rect);
}

QRectF* q_graphicslayoutitem_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayoutItem_GetContentsMargins((QGraphicsLayoutItem*)self, left, top, right, bottom);
}

void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*)) {
    QGraphicsLayoutItem_OnGetContentsMargins((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

void q_graphicslayoutitem_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayoutItem_QBaseGetContentsMargins((QGraphicsLayoutItem*)self, left, top, right, bottom);
}

QRectF* q_graphicslayoutitem_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicslayoutitem_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

void q_graphicslayoutitem_update_geometry(void* self) {
    QGraphicsLayoutItem_UpdateGeometry((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_on_update_geometry(void* self, void (*callback)()) {
    QGraphicsLayoutItem_OnUpdateGeometry((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

void q_graphicslayoutitem_qbase_update_geometry(void* self) {
    QGraphicsLayoutItem_QBaseUpdateGeometry((QGraphicsLayoutItem*)self);
}

bool q_graphicslayoutitem_is_empty(void* self) {
    return QGraphicsLayoutItem_IsEmpty((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_on_is_empty(void* self, bool (*callback)()) {
    QGraphicsLayoutItem_OnIsEmpty((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

bool q_graphicslayoutitem_qbase_is_empty(void* self) {
    return QGraphicsLayoutItem_QBaseIsEmpty((QGraphicsLayoutItem*)self);
}

QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicslayoutitem_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicslayoutitem_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicslayoutitem_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicslayoutitem_set_graphics_item(void* self, void* item) {
    QGraphicsLayoutItem_SetGraphicsItem((QGraphicsLayoutItem*)self, (QGraphicsItem*)item);
}

void q_graphicslayoutitem_on_set_graphics_item(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayoutItem_OnSetGraphicsItem((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

void q_graphicslayoutitem_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsLayoutItem_QBaseSetGraphicsItem((QGraphicsLayoutItem*)self, (QGraphicsItem*)item);
}

void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayoutItem_SetOwnedByLayout((QGraphicsLayoutItem*)self, ownedByLayout);
}

void q_graphicslayoutitem_on_set_owned_by_layout(void* self, void (*callback)(void*, bool)) {
    QGraphicsLayoutItem_OnSetOwnedByLayout((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

void q_graphicslayoutitem_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayoutItem_QBaseSetOwnedByLayout((QGraphicsLayoutItem*)self, ownedByLayout);
}

QSizeF* q_graphicslayoutitem_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_SizeHint((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*callback)(void*, int64_t, void*)) {
    QGraphicsLayoutItem_OnSizeHint((QGraphicsLayoutItem*)self, (intptr_t)callback);
}

QSizeF* q_graphicslayoutitem_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_QBaseSizeHint((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicslayoutitem_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicslayoutitem_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicslayoutitem_delete(void* self) {
    QGraphicsLayoutItem_Delete((QGraphicsLayoutItem*)(self));
}
