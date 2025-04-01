#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsgridlayout.hpp"
#include "libqgraphicsgridlayout.h"

QGraphicsGridLayout* q_graphicsgridlayout_new() {
    return QGraphicsGridLayout_new();
}

QGraphicsGridLayout* q_graphicsgridlayout_new2(void* parent) {
    return QGraphicsGridLayout_new2((QGraphicsLayoutItem*)parent);
}

void q_graphicsgridlayout_add_item(void* self, void* item, int row, int column, int rowSpan, int columnSpan) {
    QGraphicsGridLayout_AddItem((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item, row, column, rowSpan, columnSpan);
}

void q_graphicsgridlayout_add_item2(void* self, void* item, int row, int column) {
    QGraphicsGridLayout_AddItem2((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item, row, column);
}

void q_graphicsgridlayout_set_horizontal_spacing(void* self, double spacing) {
    QGraphicsGridLayout_SetHorizontalSpacing((QGraphicsGridLayout*)self, spacing);
}

double q_graphicsgridlayout_horizontal_spacing(void* self) {
    return QGraphicsGridLayout_HorizontalSpacing((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_set_vertical_spacing(void* self, double spacing) {
    QGraphicsGridLayout_SetVerticalSpacing((QGraphicsGridLayout*)self, spacing);
}

double q_graphicsgridlayout_vertical_spacing(void* self) {
    return QGraphicsGridLayout_VerticalSpacing((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_set_spacing(void* self, double spacing) {
    QGraphicsGridLayout_SetSpacing((QGraphicsGridLayout*)self, spacing);
}

void q_graphicsgridlayout_set_row_spacing(void* self, int row, double spacing) {
    QGraphicsGridLayout_SetRowSpacing((QGraphicsGridLayout*)self, row, spacing);
}

double q_graphicsgridlayout_row_spacing(void* self, int row) {
    return QGraphicsGridLayout_RowSpacing((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_column_spacing(void* self, int column, double spacing) {
    QGraphicsGridLayout_SetColumnSpacing((QGraphicsGridLayout*)self, column, spacing);
}

double q_graphicsgridlayout_column_spacing(void* self, int column) {
    return QGraphicsGridLayout_ColumnSpacing((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_row_stretch_factor(void* self, int row, int stretch) {
    QGraphicsGridLayout_SetRowStretchFactor((QGraphicsGridLayout*)self, row, stretch);
}

int32_t q_graphicsgridlayout_row_stretch_factor(void* self, int row) {
    return QGraphicsGridLayout_RowStretchFactor((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_column_stretch_factor(void* self, int column, int stretch) {
    QGraphicsGridLayout_SetColumnStretchFactor((QGraphicsGridLayout*)self, column, stretch);
}

int32_t q_graphicsgridlayout_column_stretch_factor(void* self, int column) {
    return QGraphicsGridLayout_ColumnStretchFactor((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_row_minimum_height(void* self, int row, double height) {
    QGraphicsGridLayout_SetRowMinimumHeight((QGraphicsGridLayout*)self, row, height);
}

double q_graphicsgridlayout_row_minimum_height(void* self, int row) {
    return QGraphicsGridLayout_RowMinimumHeight((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_row_preferred_height(void* self, int row, double height) {
    QGraphicsGridLayout_SetRowPreferredHeight((QGraphicsGridLayout*)self, row, height);
}

double q_graphicsgridlayout_row_preferred_height(void* self, int row) {
    return QGraphicsGridLayout_RowPreferredHeight((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_row_maximum_height(void* self, int row, double height) {
    QGraphicsGridLayout_SetRowMaximumHeight((QGraphicsGridLayout*)self, row, height);
}

double q_graphicsgridlayout_row_maximum_height(void* self, int row) {
    return QGraphicsGridLayout_RowMaximumHeight((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_row_fixed_height(void* self, int row, double height) {
    QGraphicsGridLayout_SetRowFixedHeight((QGraphicsGridLayout*)self, row, height);
}

void q_graphicsgridlayout_set_column_minimum_width(void* self, int column, double width) {
    QGraphicsGridLayout_SetColumnMinimumWidth((QGraphicsGridLayout*)self, column, width);
}

double q_graphicsgridlayout_column_minimum_width(void* self, int column) {
    return QGraphicsGridLayout_ColumnMinimumWidth((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_column_preferred_width(void* self, int column, double width) {
    QGraphicsGridLayout_SetColumnPreferredWidth((QGraphicsGridLayout*)self, column, width);
}

double q_graphicsgridlayout_column_preferred_width(void* self, int column) {
    return QGraphicsGridLayout_ColumnPreferredWidth((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_column_maximum_width(void* self, int column, double width) {
    QGraphicsGridLayout_SetColumnMaximumWidth((QGraphicsGridLayout*)self, column, width);
}

double q_graphicsgridlayout_column_maximum_width(void* self, int column) {
    return QGraphicsGridLayout_ColumnMaximumWidth((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_column_fixed_width(void* self, int column, double width) {
    QGraphicsGridLayout_SetColumnFixedWidth((QGraphicsGridLayout*)self, column, width);
}

void q_graphicsgridlayout_set_row_alignment(void* self, int row, int64_t alignment) {
    QGraphicsGridLayout_SetRowAlignment((QGraphicsGridLayout*)self, row, alignment);
}

int64_t q_graphicsgridlayout_row_alignment(void* self, int row) {
    return QGraphicsGridLayout_RowAlignment((QGraphicsGridLayout*)self, row);
}

void q_graphicsgridlayout_set_column_alignment(void* self, int column, int64_t alignment) {
    QGraphicsGridLayout_SetColumnAlignment((QGraphicsGridLayout*)self, column, alignment);
}

int64_t q_graphicsgridlayout_column_alignment(void* self, int column) {
    return QGraphicsGridLayout_ColumnAlignment((QGraphicsGridLayout*)self, column);
}

void q_graphicsgridlayout_set_alignment(void* self, void* item, int64_t alignment) {
    QGraphicsGridLayout_SetAlignment((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item, alignment);
}

int64_t q_graphicsgridlayout_alignment(void* self, void* item) {
    return QGraphicsGridLayout_Alignment((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item);
}

int32_t q_graphicsgridlayout_row_count(void* self) {
    return QGraphicsGridLayout_RowCount((QGraphicsGridLayout*)self);
}

int32_t q_graphicsgridlayout_column_count(void* self) {
    return QGraphicsGridLayout_ColumnCount((QGraphicsGridLayout*)self);
}

QGraphicsLayoutItem* q_graphicsgridlayout_item_at(void* self, int row, int column) {
    return QGraphicsGridLayout_ItemAt((QGraphicsGridLayout*)self, row, column);
}

int32_t q_graphicsgridlayout_count(void* self) {
    return QGraphicsGridLayout_Count((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_on_count(void* self, int32_t (*slot)()) {
    QGraphicsGridLayout_OnCount((QGraphicsGridLayout*)self, (intptr_t)slot);
}

int32_t q_graphicsgridlayout_qbase_count(void* self) {
    return QGraphicsGridLayout_QBaseCount((QGraphicsGridLayout*)self);
}

QGraphicsLayoutItem* q_graphicsgridlayout_item_at_with_index(void* self, int index) {
    return QGraphicsGridLayout_ItemAtWithIndex((QGraphicsGridLayout*)self, index);
}

void q_graphicsgridlayout_on_item_at_with_index(void* self, QGraphicsLayoutItem* (*slot)(void*, int)) {
    QGraphicsGridLayout_OnItemAtWithIndex((QGraphicsGridLayout*)self, (intptr_t)slot);
}

QGraphicsLayoutItem* q_graphicsgridlayout_qbase_item_at_with_index(void* self, int index) {
    return QGraphicsGridLayout_QBaseItemAtWithIndex((QGraphicsGridLayout*)self, index);
}

void q_graphicsgridlayout_remove_at(void* self, int index) {
    QGraphicsGridLayout_RemoveAt((QGraphicsGridLayout*)self, index);
}

void q_graphicsgridlayout_on_remove_at(void* self, void (*slot)(void*, int)) {
    QGraphicsGridLayout_OnRemoveAt((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_qbase_remove_at(void* self, int index) {
    QGraphicsGridLayout_QBaseRemoveAt((QGraphicsGridLayout*)self, index);
}

void q_graphicsgridlayout_remove_item(void* self, void* item) {
    QGraphicsGridLayout_RemoveItem((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item);
}

void q_graphicsgridlayout_invalidate(void* self) {
    QGraphicsGridLayout_Invalidate((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_on_invalidate(void* self, void (*slot)()) {
    QGraphicsGridLayout_OnInvalidate((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_qbase_invalidate(void* self) {
    QGraphicsGridLayout_QBaseInvalidate((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_set_geometry(void* self, void* rect) {
    QGraphicsGridLayout_SetGeometry((QGraphicsGridLayout*)self, (QRectF*)rect);
}

void q_graphicsgridlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsGridLayout_OnSetGeometry((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_qbase_set_geometry(void* self, void* rect) {
    QGraphicsGridLayout_QBaseSetGeometry((QGraphicsGridLayout*)self, (QRectF*)rect);
}

QSizeF* q_graphicsgridlayout_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsGridLayout_SizeHint((QGraphicsGridLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicsgridlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsGridLayout_OnSizeHint((QGraphicsGridLayout*)self, (intptr_t)slot);
}

QSizeF* q_graphicsgridlayout_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsGridLayout_QBaseSizeHint((QGraphicsGridLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicsgridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t alignment) {
    QGraphicsGridLayout_AddItem6((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item, row, column, rowSpan, columnSpan, alignment);
}

void q_graphicsgridlayout_add_item4(void* self, void* item, int row, int column, int64_t alignment) {
    QGraphicsGridLayout_AddItem4((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)item, row, column, alignment);
}

void q_graphicsgridlayout_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsLayout_SetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

void q_graphicsgridlayout_activate(void* self) {
    QGraphicsLayout_Activate((QGraphicsLayout*)self);
}

bool q_graphicsgridlayout_is_activated(void* self) {
    return QGraphicsLayout_IsActivated((QGraphicsLayout*)self);
}

void q_graphicsgridlayout_set_instant_invalidate_propagation(bool enable) {
    QGraphicsLayout_SetInstantInvalidatePropagation(enable);
}

bool q_graphicsgridlayout_instant_invalidate_propagation() {
    return QGraphicsLayout_InstantInvalidatePropagation();
}

void q_graphicsgridlayout_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicsgridlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicsgridlayout_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsgridlayout_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsgridlayout_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsgridlayout_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsgridlayout_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsgridlayout_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsgridlayout_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsgridlayout_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsgridlayout_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsgridlayout_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsgridlayout_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsgridlayout_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsgridlayout_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsgridlayout_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsgridlayout_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicsgridlayout_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_graphicsgridlayout_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicsgridlayout_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicsgridlayout_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicsgridlayout_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicsgridlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicsgridlayout_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicsgridlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsGridLayout_GetContentsMargins((QGraphicsGridLayout*)self, left, top, right, bottom);
}

void q_graphicsgridlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsGridLayout_QBaseGetContentsMargins((QGraphicsGridLayout*)self, left, top, right, bottom);
}

void q_graphicsgridlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsGridLayout_OnGetContentsMargins((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_update_geometry(void* self) {
    QGraphicsGridLayout_UpdateGeometry((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_qbase_update_geometry(void* self) {
    QGraphicsGridLayout_QBaseUpdateGeometry((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsGridLayout_OnUpdateGeometry((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_widget_event(void* self, void* e) {
    QGraphicsGridLayout_WidgetEvent((QGraphicsGridLayout*)self, (QEvent*)e);
}

void q_graphicsgridlayout_qbase_widget_event(void* self, void* e) {
    QGraphicsGridLayout_QBaseWidgetEvent((QGraphicsGridLayout*)self, (QEvent*)e);
}

void q_graphicsgridlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsGridLayout_OnWidgetEvent((QGraphicsGridLayout*)self, (intptr_t)slot);
}

bool q_graphicsgridlayout_is_empty(void* self) {
    return QGraphicsGridLayout_IsEmpty((QGraphicsGridLayout*)self);
}

bool q_graphicsgridlayout_qbase_is_empty(void* self) {
    return QGraphicsGridLayout_QBaseIsEmpty((QGraphicsGridLayout*)self);
}

void q_graphicsgridlayout_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsGridLayout_OnIsEmpty((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsGridLayout_AddChildLayoutItem((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicsgridlayout_qbase_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsGridLayout_QBaseAddChildLayoutItem((QGraphicsGridLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicsgridlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsGridLayout_OnAddChildLayoutItem((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_set_graphics_item(void* self, void* item) {
    QGraphicsGridLayout_SetGraphicsItem((QGraphicsGridLayout*)self, (QGraphicsItem*)item);
}

void q_graphicsgridlayout_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsGridLayout_QBaseSetGraphicsItem((QGraphicsGridLayout*)self, (QGraphicsItem*)item);
}

void q_graphicsgridlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsGridLayout_OnSetGraphicsItem((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsGridLayout_SetOwnedByLayout((QGraphicsGridLayout*)self, ownedByLayout);
}

void q_graphicsgridlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsGridLayout_QBaseSetOwnedByLayout((QGraphicsGridLayout*)self, ownedByLayout);
}

void q_graphicsgridlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsGridLayout_OnSetOwnedByLayout((QGraphicsGridLayout*)self, (intptr_t)slot);
}

void q_graphicsgridlayout_delete(void* self) {
    QGraphicsGridLayout_Delete((QGraphicsGridLayout*)(self));
}
