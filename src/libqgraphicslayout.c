#include "libqcoreevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayout.h"

QGraphicsLayout* q_graphicslayout_new() {
    return QGraphicsLayout_new();
}

QGraphicsLayout* q_graphicslayout_new2(void* parent) {
    return QGraphicsLayout_new2((QGraphicsLayoutItem*)parent);
}

void q_graphicslayout_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsLayout_SetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

void q_graphicslayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayout_GetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

void q_graphicslayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsLayout_OnGetContentsMargins((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayout_QBaseGetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

void q_graphicslayout_activate(void* self) {
    QGraphicsLayout_Activate((QGraphicsLayout*)self);
}

bool q_graphicslayout_is_activated(void* self) {
    return QGraphicsLayout_IsActivated((QGraphicsLayout*)self);
}

void q_graphicslayout_invalidate(void* self) {
    QGraphicsLayout_Invalidate((QGraphicsLayout*)self);
}

void q_graphicslayout_on_invalidate(void* self, void (*slot)()) {
    QGraphicsLayout_OnInvalidate((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_invalidate(void* self) {
    QGraphicsLayout_QBaseInvalidate((QGraphicsLayout*)self);
}

void q_graphicslayout_update_geometry(void* self) {
    QGraphicsLayout_UpdateGeometry((QGraphicsLayout*)self);
}

void q_graphicslayout_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsLayout_OnUpdateGeometry((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_update_geometry(void* self) {
    QGraphicsLayout_QBaseUpdateGeometry((QGraphicsLayout*)self);
}

void q_graphicslayout_widget_event(void* self, void* e) {
    QGraphicsLayout_WidgetEvent((QGraphicsLayout*)self, (QEvent*)e);
}

void q_graphicslayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayout_OnWidgetEvent((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_widget_event(void* self, void* e) {
    QGraphicsLayout_QBaseWidgetEvent((QGraphicsLayout*)self, (QEvent*)e);
}

int32_t q_graphicslayout_count(void* self) {
    return QGraphicsLayout_Count((QGraphicsLayout*)self);
}

void q_graphicslayout_on_count(void* self, int32_t (*slot)()) {
    QGraphicsLayout_OnCount((QGraphicsLayout*)self, (intptr_t)slot);
}

int32_t q_graphicslayout_qbase_count(void* self) {
    return QGraphicsLayout_QBaseCount((QGraphicsLayout*)self);
}

QGraphicsLayoutItem* q_graphicslayout_item_at(void* self, int i) {
    return QGraphicsLayout_ItemAt((QGraphicsLayout*)self, i);
}

void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int)) {
    QGraphicsLayout_OnItemAt((QGraphicsLayout*)self, (intptr_t)slot);
}

QGraphicsLayoutItem* q_graphicslayout_qbase_item_at(void* self, int i) {
    return QGraphicsLayout_QBaseItemAt((QGraphicsLayout*)self, i);
}

void q_graphicslayout_remove_at(void* self, int index) {
    QGraphicsLayout_RemoveAt((QGraphicsLayout*)self, index);
}

void q_graphicslayout_on_remove_at(void* self, void (*slot)(void*, int)) {
    QGraphicsLayout_OnRemoveAt((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_remove_at(void* self, int index) {
    QGraphicsLayout_QBaseRemoveAt((QGraphicsLayout*)self, index);
}

void q_graphicslayout_set_instant_invalidate_propagation(bool enable) {
    QGraphicsLayout_SetInstantInvalidatePropagation(enable);
}

bool q_graphicslayout_instant_invalidate_propagation() {
    return QGraphicsLayout_InstantInvalidatePropagation();
}

void q_graphicslayout_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsLayout_AddChildLayoutItem((QGraphicsLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicslayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayout_OnAddChildLayoutItem((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_qbase_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsLayout_QBaseAddChildLayoutItem((QGraphicsLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicslayout_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicslayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicslayout_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayout_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayout_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayout_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayout_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayout_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayout_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayout_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayout_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicslayout_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicslayout_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicslayout_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicslayout_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicslayout_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicslayout_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicslayout_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_graphicslayout_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicslayout_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicslayout_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicslayout_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicslayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicslayout_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicslayout_set_geometry(void* self, void* rect) {
    QGraphicsLayout_SetGeometry((QGraphicsLayout*)self, (QRectF*)rect);
}

void q_graphicslayout_qbase_set_geometry(void* self, void* rect) {
    QGraphicsLayout_QBaseSetGeometry((QGraphicsLayout*)self, (QRectF*)rect);
}

void q_graphicslayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayout_OnSetGeometry((QGraphicsLayout*)self, (intptr_t)slot);
}

bool q_graphicslayout_is_empty(void* self) {
    return QGraphicsLayout_IsEmpty((QGraphicsLayout*)self);
}

bool q_graphicslayout_qbase_is_empty(void* self) {
    return QGraphicsLayout_QBaseIsEmpty((QGraphicsLayout*)self);
}

void q_graphicslayout_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsLayout_OnIsEmpty((QGraphicsLayout*)self, (intptr_t)slot);
}

QSizeF* q_graphicslayout_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayout_SizeHint((QGraphicsLayout*)self, which, (QSizeF*)constraint);
}

QSizeF* q_graphicslayout_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayout_QBaseSizeHint((QGraphicsLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicslayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsLayout_OnSizeHint((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_set_graphics_item(void* self, void* item) {
    QGraphicsLayout_SetGraphicsItem((QGraphicsLayout*)self, (QGraphicsItem*)item);
}

void q_graphicslayout_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsLayout_QBaseSetGraphicsItem((QGraphicsLayout*)self, (QGraphicsItem*)item);
}

void q_graphicslayout_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayout_OnSetGraphicsItem((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayout_SetOwnedByLayout((QGraphicsLayout*)self, ownedByLayout);
}

void q_graphicslayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayout_QBaseSetOwnedByLayout((QGraphicsLayout*)self, ownedByLayout);
}

void q_graphicslayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsLayout_OnSetOwnedByLayout((QGraphicsLayout*)self, (intptr_t)slot);
}

void q_graphicslayout_delete(void* self) {
    QGraphicsLayout_Delete((QGraphicsLayout*)(self));
}
