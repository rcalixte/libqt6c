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

void q_graphicslayout_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*)) {
    QGraphicsLayout_OnGetContentsMargins((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayout_SuperGetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
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

void q_graphicslayout_on_invalidate(void* self, void (*callback)()) {
    QGraphicsLayout_OnInvalidate((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_invalidate(void* self) {
    QGraphicsLayout_SuperInvalidate((QGraphicsLayout*)self);
}

void q_graphicslayout_update_geometry(void* self) {
    QGraphicsLayout_UpdateGeometry((QGraphicsLayout*)self);
}

void q_graphicslayout_on_update_geometry(void* self, void (*callback)()) {
    QGraphicsLayout_OnUpdateGeometry((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_update_geometry(void* self) {
    QGraphicsLayout_SuperUpdateGeometry((QGraphicsLayout*)self);
}

void q_graphicslayout_widget_event(void* self, void* e) {
    QGraphicsLayout_WidgetEvent((QGraphicsLayout*)self, (QEvent*)e);
}

void q_graphicslayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayout_OnWidgetEvent((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_widget_event(void* self, void* e) {
    QGraphicsLayout_SuperWidgetEvent((QGraphicsLayout*)self, (QEvent*)e);
}

int32_t q_graphicslayout_count(void* self) {
    return QGraphicsLayout_Count((QGraphicsLayout*)self);
}

void q_graphicslayout_on_count(void* self, int32_t (*callback)()) {
    QGraphicsLayout_OnCount((QGraphicsLayout*)self, (intptr_t)callback);
}

int32_t q_graphicslayout_super_count(void* self) {
    return QGraphicsLayout_SuperCount((QGraphicsLayout*)self);
}

QGraphicsLayoutItem* q_graphicslayout_item_at(void* self, int i) {
    return QGraphicsLayout_ItemAt((QGraphicsLayout*)self, i);
}

void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*callback)(void*, int)) {
    QGraphicsLayout_OnItemAt((QGraphicsLayout*)self, (intptr_t)callback);
}

QGraphicsLayoutItem* q_graphicslayout_super_item_at(void* self, int i) {
    return QGraphicsLayout_SuperItemAt((QGraphicsLayout*)self, i);
}

void q_graphicslayout_remove_at(void* self, int index) {
    QGraphicsLayout_RemoveAt((QGraphicsLayout*)self, index);
}

void q_graphicslayout_on_remove_at(void* self, void (*callback)(void*, int)) {
    QGraphicsLayout_OnRemoveAt((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_remove_at(void* self, int index) {
    QGraphicsLayout_SuperRemoveAt((QGraphicsLayout*)self, index);
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

void q_graphicslayout_on_add_child_layout_item(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayout_OnAddChildLayoutItem((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_super_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsLayout_SuperAddChildLayoutItem((QGraphicsLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicslayout_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicslayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
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

QSizeF* q_graphicslayout_effective_size_hint(void* self, int32_t which) {
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

void q_graphicslayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicslayout_effective_size_hint2(void* self, int32_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicslayout_set_geometry(void* self, void* rect) {
    QGraphicsLayout_SetGeometry((QGraphicsLayout*)self, (QRectF*)rect);
}

void q_graphicslayout_super_set_geometry(void* self, void* rect) {
    QGraphicsLayout_SuperSetGeometry((QGraphicsLayout*)self, (QRectF*)rect);
}

void q_graphicslayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayout_OnSetGeometry((QGraphicsLayout*)self, (intptr_t)callback);
}

bool q_graphicslayout_is_empty(void* self) {
    return QGraphicsLayout_IsEmpty((QGraphicsLayout*)self);
}

bool q_graphicslayout_super_is_empty(void* self) {
    return QGraphicsLayout_SuperIsEmpty((QGraphicsLayout*)self);
}

void q_graphicslayout_on_is_empty(void* self, bool (*callback)()) {
    QGraphicsLayout_OnIsEmpty((QGraphicsLayout*)self, (intptr_t)callback);
}

QSizeF* q_graphicslayout_size_hint(void* self, int32_t which, void* constraint) {
    return QGraphicsLayout_SizeHint((QGraphicsLayout*)self, which, (QSizeF*)constraint);
}

QSizeF* q_graphicslayout_super_size_hint(void* self, int32_t which, void* constraint) {
    return QGraphicsLayout_SuperSizeHint((QGraphicsLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicslayout_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*)) {
    QGraphicsLayout_OnSizeHint((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_set_graphics_item(void* self, void* item) {
    QGraphicsLayout_SetGraphicsItem((QGraphicsLayout*)self, (QGraphicsItem*)item);
}

void q_graphicslayout_super_set_graphics_item(void* self, void* item) {
    QGraphicsLayout_SuperSetGraphicsItem((QGraphicsLayout*)self, (QGraphicsItem*)item);
}

void q_graphicslayout_on_set_graphics_item(void* self, void (*callback)(void*, void*)) {
    QGraphicsLayout_OnSetGraphicsItem((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayout_SetOwnedByLayout((QGraphicsLayout*)self, ownedByLayout);
}

void q_graphicslayout_super_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayout_SuperSetOwnedByLayout((QGraphicsLayout*)self, ownedByLayout);
}

void q_graphicslayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool)) {
    QGraphicsLayout_OnSetOwnedByLayout((QGraphicsLayout*)self, (intptr_t)callback);
}

void q_graphicslayout_delete(void* self) {
    QGraphicsLayout_Delete((QGraphicsLayout*)(self));
}
