#include "libqlayout.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqwidget.hpp"
#include "libqlayoutitem.hpp"
#include "libqlayoutitem.h"

QLayoutItem* q_layoutitem_new() {
    return QLayoutItem_new();
}

QLayoutItem* q_layoutitem_new2(void* param1) {
    return QLayoutItem_new2((QLayoutItem*)param1);
}

QLayoutItem* q_layoutitem_new3(int64_t alignment) {
    return QLayoutItem_new3(alignment);
}

QSize* q_layoutitem_size_hint(void* self) {
    return QLayoutItem_SizeHint((QLayoutItem*)self);
}

void q_layoutitem_on_size_hint(void* self, QSize* (*callback)()) {
    QLayoutItem_OnSizeHint((QLayoutItem*)self, (intptr_t)callback);
}

QSize* q_layoutitem_qbase_size_hint(void* self) {
    return QLayoutItem_QBaseSizeHint((QLayoutItem*)self);
}

QSize* q_layoutitem_minimum_size(void* self) {
    return QLayoutItem_MinimumSize((QLayoutItem*)self);
}

void q_layoutitem_on_minimum_size(void* self, QSize* (*callback)()) {
    QLayoutItem_OnMinimumSize((QLayoutItem*)self, (intptr_t)callback);
}

QSize* q_layoutitem_qbase_minimum_size(void* self) {
    return QLayoutItem_QBaseMinimumSize((QLayoutItem*)self);
}

QSize* q_layoutitem_maximum_size(void* self) {
    return QLayoutItem_MaximumSize((QLayoutItem*)self);
}

void q_layoutitem_on_maximum_size(void* self, QSize* (*callback)()) {
    QLayoutItem_OnMaximumSize((QLayoutItem*)self, (intptr_t)callback);
}

QSize* q_layoutitem_qbase_maximum_size(void* self) {
    return QLayoutItem_QBaseMaximumSize((QLayoutItem*)self);
}

int64_t q_layoutitem_expanding_directions(void* self) {
    return QLayoutItem_ExpandingDirections((QLayoutItem*)self);
}

void q_layoutitem_on_expanding_directions(void* self, int64_t (*callback)()) {
    QLayoutItem_OnExpandingDirections((QLayoutItem*)self, (intptr_t)callback);
}

int64_t q_layoutitem_qbase_expanding_directions(void* self) {
    return QLayoutItem_QBaseExpandingDirections((QLayoutItem*)self);
}

void q_layoutitem_set_geometry(void* self, void* geometry) {
    QLayoutItem_SetGeometry((QLayoutItem*)self, (QRect*)geometry);
}

void q_layoutitem_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QLayoutItem_OnSetGeometry((QLayoutItem*)self, (intptr_t)callback);
}

void q_layoutitem_qbase_set_geometry(void* self, void* geometry) {
    QLayoutItem_QBaseSetGeometry((QLayoutItem*)self, (QRect*)geometry);
}

QRect* q_layoutitem_geometry(void* self) {
    return QLayoutItem_Geometry((QLayoutItem*)self);
}

void q_layoutitem_on_geometry(void* self, QRect* (*callback)()) {
    QLayoutItem_OnGeometry((QLayoutItem*)self, (intptr_t)callback);
}

QRect* q_layoutitem_qbase_geometry(void* self) {
    return QLayoutItem_QBaseGeometry((QLayoutItem*)self);
}

bool q_layoutitem_is_empty(void* self) {
    return QLayoutItem_IsEmpty((QLayoutItem*)self);
}

void q_layoutitem_on_is_empty(void* self, bool (*callback)()) {
    QLayoutItem_OnIsEmpty((QLayoutItem*)self, (intptr_t)callback);
}

bool q_layoutitem_qbase_is_empty(void* self) {
    return QLayoutItem_QBaseIsEmpty((QLayoutItem*)self);
}

bool q_layoutitem_has_height_for_width(void* self) {
    return QLayoutItem_HasHeightForWidth((QLayoutItem*)self);
}

void q_layoutitem_on_has_height_for_width(void* self, bool (*callback)()) {
    QLayoutItem_OnHasHeightForWidth((QLayoutItem*)self, (intptr_t)callback);
}

bool q_layoutitem_qbase_has_height_for_width(void* self) {
    return QLayoutItem_QBaseHasHeightForWidth((QLayoutItem*)self);
}

int32_t q_layoutitem_height_for_width(void* self, int param1) {
    return QLayoutItem_HeightForWidth((QLayoutItem*)self, param1);
}

void q_layoutitem_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QLayoutItem_OnHeightForWidth((QLayoutItem*)self, (intptr_t)callback);
}

int32_t q_layoutitem_qbase_height_for_width(void* self, int param1) {
    return QLayoutItem_QBaseHeightForWidth((QLayoutItem*)self, param1);
}

int32_t q_layoutitem_minimum_height_for_width(void* self, int param1) {
    return QLayoutItem_MinimumHeightForWidth((QLayoutItem*)self, param1);
}

void q_layoutitem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QLayoutItem_OnMinimumHeightForWidth((QLayoutItem*)self, (intptr_t)callback);
}

int32_t q_layoutitem_qbase_minimum_height_for_width(void* self, int param1) {
    return QLayoutItem_QBaseMinimumHeightForWidth((QLayoutItem*)self, param1);
}

void q_layoutitem_invalidate(void* self) {
    QLayoutItem_Invalidate((QLayoutItem*)self);
}

void q_layoutitem_on_invalidate(void* self, void (*callback)()) {
    QLayoutItem_OnInvalidate((QLayoutItem*)self, (intptr_t)callback);
}

void q_layoutitem_qbase_invalidate(void* self) {
    QLayoutItem_QBaseInvalidate((QLayoutItem*)self);
}

QWidget* q_layoutitem_widget(void* self) {
    return QLayoutItem_Widget((QLayoutItem*)self);
}

void q_layoutitem_on_widget(void* self, QWidget* (*callback)()) {
    QLayoutItem_OnWidget((QLayoutItem*)self, (intptr_t)callback);
}

QWidget* q_layoutitem_qbase_widget(void* self) {
    return QLayoutItem_QBaseWidget((QLayoutItem*)self);
}

QLayout* q_layoutitem_layout(void* self) {
    return QLayoutItem_Layout((QLayoutItem*)self);
}

void q_layoutitem_on_layout(void* self, QLayout* (*callback)()) {
    QLayoutItem_OnLayout((QLayoutItem*)self, (intptr_t)callback);
}

QLayout* q_layoutitem_qbase_layout(void* self) {
    return QLayoutItem_QBaseLayout((QLayoutItem*)self);
}

QSpacerItem* q_layoutitem_spacer_item(void* self) {
    return QLayoutItem_SpacerItem((QLayoutItem*)self);
}

void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QLayoutItem_OnSpacerItem((QLayoutItem*)self, (intptr_t)callback);
}

QSpacerItem* q_layoutitem_qbase_spacer_item(void* self) {
    return QLayoutItem_QBaseSpacerItem((QLayoutItem*)self);
}

int64_t q_layoutitem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_layoutitem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

int64_t q_layoutitem_control_types(void* self) {
    return QLayoutItem_ControlTypes((QLayoutItem*)self);
}

void q_layoutitem_on_control_types(void* self, int64_t (*callback)()) {
    QLayoutItem_OnControlTypes((QLayoutItem*)self, (intptr_t)callback);
}

int64_t q_layoutitem_qbase_control_types(void* self) {
    return QLayoutItem_QBaseControlTypes((QLayoutItem*)self);
}

void q_layoutitem_operator_assign(void* self, void* param1) {
    QLayoutItem_OperatorAssign((QLayoutItem*)self, (QLayoutItem*)param1);
}

void q_layoutitem_on_operator_assign(void* self, void (*callback)(void*, void*)) {
    QLayoutItem_OnOperatorAssign((QLayoutItem*)self, (intptr_t)callback);
}

void q_layoutitem_qbase_operator_assign(void* self, void* param1) {
    QLayoutItem_QBaseOperatorAssign((QLayoutItem*)self, (QLayoutItem*)param1);
}

void q_layoutitem_delete(void* self) {
    QLayoutItem_Delete((QLayoutItem*)(self));
}

QSpacerItem* q_spaceritem_new(int w, int h) {
    return QSpacerItem_new(w, h);
}

QSpacerItem* q_spaceritem_new2(void* param1) {
    return QSpacerItem_new2((QSpacerItem*)param1);
}

QSpacerItem* q_spaceritem_new3(int w, int h, int32_t hData) {
    return QSpacerItem_new3(w, h, hData);
}

QSpacerItem* q_spaceritem_new4(int w, int h, int32_t hData, int32_t vData) {
    return QSpacerItem_new4(w, h, hData, vData);
}

void q_spaceritem_change_size(void* self, int w, int h) {
    QSpacerItem_ChangeSize((QSpacerItem*)self, w, h);
}

QSize* q_spaceritem_size_hint(void* self) {
    return QSpacerItem_SizeHint((QSpacerItem*)self);
}

void q_spaceritem_on_size_hint(void* self, QSize* (*callback)()) {
    QSpacerItem_OnSizeHint((QSpacerItem*)self, (intptr_t)callback);
}

QSize* q_spaceritem_qbase_size_hint(void* self) {
    return QSpacerItem_QBaseSizeHint((QSpacerItem*)self);
}

QSize* q_spaceritem_minimum_size(void* self) {
    return QSpacerItem_MinimumSize((QSpacerItem*)self);
}

void q_spaceritem_on_minimum_size(void* self, QSize* (*callback)()) {
    QSpacerItem_OnMinimumSize((QSpacerItem*)self, (intptr_t)callback);
}

QSize* q_spaceritem_qbase_minimum_size(void* self) {
    return QSpacerItem_QBaseMinimumSize((QSpacerItem*)self);
}

QSize* q_spaceritem_maximum_size(void* self) {
    return QSpacerItem_MaximumSize((QSpacerItem*)self);
}

void q_spaceritem_on_maximum_size(void* self, QSize* (*callback)()) {
    QSpacerItem_OnMaximumSize((QSpacerItem*)self, (intptr_t)callback);
}

QSize* q_spaceritem_qbase_maximum_size(void* self) {
    return QSpacerItem_QBaseMaximumSize((QSpacerItem*)self);
}

int64_t q_spaceritem_expanding_directions(void* self) {
    return QSpacerItem_ExpandingDirections((QSpacerItem*)self);
}

void q_spaceritem_on_expanding_directions(void* self, int64_t (*callback)()) {
    QSpacerItem_OnExpandingDirections((QSpacerItem*)self, (intptr_t)callback);
}

int64_t q_spaceritem_qbase_expanding_directions(void* self) {
    return QSpacerItem_QBaseExpandingDirections((QSpacerItem*)self);
}

bool q_spaceritem_is_empty(void* self) {
    return QSpacerItem_IsEmpty((QSpacerItem*)self);
}

void q_spaceritem_on_is_empty(void* self, bool (*callback)()) {
    QSpacerItem_OnIsEmpty((QSpacerItem*)self, (intptr_t)callback);
}

bool q_spaceritem_qbase_is_empty(void* self) {
    return QSpacerItem_QBaseIsEmpty((QSpacerItem*)self);
}

void q_spaceritem_set_geometry(void* self, void* geometry) {
    QSpacerItem_SetGeometry((QSpacerItem*)self, (QRect*)geometry);
}

void q_spaceritem_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QSpacerItem_OnSetGeometry((QSpacerItem*)self, (intptr_t)callback);
}

void q_spaceritem_qbase_set_geometry(void* self, void* geometry) {
    QSpacerItem_QBaseSetGeometry((QSpacerItem*)self, (QRect*)geometry);
}

QRect* q_spaceritem_geometry(void* self) {
    return QSpacerItem_Geometry((QSpacerItem*)self);
}

void q_spaceritem_on_geometry(void* self, QRect* (*callback)()) {
    QSpacerItem_OnGeometry((QSpacerItem*)self, (intptr_t)callback);
}

QRect* q_spaceritem_qbase_geometry(void* self) {
    return QSpacerItem_QBaseGeometry((QSpacerItem*)self);
}

QSpacerItem* q_spaceritem_spacer_item(void* self) {
    return QSpacerItem_SpacerItem((QSpacerItem*)self);
}

void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QSpacerItem_OnSpacerItem((QSpacerItem*)self, (intptr_t)callback);
}

QSpacerItem* q_spaceritem_qbase_spacer_item(void* self) {
    return QSpacerItem_QBaseSpacerItem((QSpacerItem*)self);
}

QSizePolicy* q_spaceritem_size_policy(void* self) {
    return QSpacerItem_SizePolicy((QSpacerItem*)self);
}

void q_spaceritem_change_size3(void* self, int w, int h, int32_t hData) {
    QSpacerItem_ChangeSize3((QSpacerItem*)self, w, h, hData);
}

void q_spaceritem_change_size4(void* self, int w, int h, int32_t hData, int32_t vData) {
    QSpacerItem_ChangeSize4((QSpacerItem*)self, w, h, hData, vData);
}

int64_t q_spaceritem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_spaceritem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

bool q_spaceritem_has_height_for_width(void* self) {
    return QSpacerItem_HasHeightForWidth((QSpacerItem*)self);
}

bool q_spaceritem_qbase_has_height_for_width(void* self) {
    return QSpacerItem_QBaseHasHeightForWidth((QSpacerItem*)self);
}

void q_spaceritem_on_has_height_for_width(void* self, bool (*callback)()) {
    QSpacerItem_OnHasHeightForWidth((QSpacerItem*)self, (intptr_t)callback);
}

int32_t q_spaceritem_height_for_width(void* self, int param1) {
    return QSpacerItem_HeightForWidth((QSpacerItem*)self, param1);
}

int32_t q_spaceritem_qbase_height_for_width(void* self, int param1) {
    return QSpacerItem_QBaseHeightForWidth((QSpacerItem*)self, param1);
}

void q_spaceritem_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QSpacerItem_OnHeightForWidth((QSpacerItem*)self, (intptr_t)callback);
}

int32_t q_spaceritem_minimum_height_for_width(void* self, int param1) {
    return QSpacerItem_MinimumHeightForWidth((QSpacerItem*)self, param1);
}

int32_t q_spaceritem_qbase_minimum_height_for_width(void* self, int param1) {
    return QSpacerItem_QBaseMinimumHeightForWidth((QSpacerItem*)self, param1);
}

void q_spaceritem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QSpacerItem_OnMinimumHeightForWidth((QSpacerItem*)self, (intptr_t)callback);
}

void q_spaceritem_invalidate(void* self) {
    QSpacerItem_Invalidate((QSpacerItem*)self);
}

void q_spaceritem_qbase_invalidate(void* self) {
    QSpacerItem_QBaseInvalidate((QSpacerItem*)self);
}

void q_spaceritem_on_invalidate(void* self, void (*callback)()) {
    QSpacerItem_OnInvalidate((QSpacerItem*)self, (intptr_t)callback);
}

QWidget* q_spaceritem_widget(void* self) {
    return QSpacerItem_Widget((QSpacerItem*)self);
}

QWidget* q_spaceritem_qbase_widget(void* self) {
    return QSpacerItem_QBaseWidget((QSpacerItem*)self);
}

void q_spaceritem_on_widget(void* self, QWidget* (*callback)()) {
    QSpacerItem_OnWidget((QSpacerItem*)self, (intptr_t)callback);
}

QLayout* q_spaceritem_layout(void* self) {
    return QSpacerItem_Layout((QSpacerItem*)self);
}

QLayout* q_spaceritem_qbase_layout(void* self) {
    return QSpacerItem_QBaseLayout((QSpacerItem*)self);
}

void q_spaceritem_on_layout(void* self, QLayout* (*callback)()) {
    QSpacerItem_OnLayout((QSpacerItem*)self, (intptr_t)callback);
}

int64_t q_spaceritem_control_types(void* self) {
    return QSpacerItem_ControlTypes((QSpacerItem*)self);
}

int64_t q_spaceritem_qbase_control_types(void* self) {
    return QSpacerItem_QBaseControlTypes((QSpacerItem*)self);
}

void q_spaceritem_on_control_types(void* self, int64_t (*callback)()) {
    QSpacerItem_OnControlTypes((QSpacerItem*)self, (intptr_t)callback);
}

void q_spaceritem_delete(void* self) {
    QSpacerItem_Delete((QSpacerItem*)(self));
}

QWidgetItem* q_widgetitem_new(void* w) {
    return QWidgetItem_new((QWidget*)w);
}

QSize* q_widgetitem_size_hint(void* self) {
    return QWidgetItem_SizeHint((QWidgetItem*)self);
}

void q_widgetitem_on_size_hint(void* self, QSize* (*callback)()) {
    QWidgetItem_OnSizeHint((QWidgetItem*)self, (intptr_t)callback);
}

QSize* q_widgetitem_qbase_size_hint(void* self) {
    return QWidgetItem_QBaseSizeHint((QWidgetItem*)self);
}

QSize* q_widgetitem_minimum_size(void* self) {
    return QWidgetItem_MinimumSize((QWidgetItem*)self);
}

void q_widgetitem_on_minimum_size(void* self, QSize* (*callback)()) {
    QWidgetItem_OnMinimumSize((QWidgetItem*)self, (intptr_t)callback);
}

QSize* q_widgetitem_qbase_minimum_size(void* self) {
    return QWidgetItem_QBaseMinimumSize((QWidgetItem*)self);
}

QSize* q_widgetitem_maximum_size(void* self) {
    return QWidgetItem_MaximumSize((QWidgetItem*)self);
}

void q_widgetitem_on_maximum_size(void* self, QSize* (*callback)()) {
    QWidgetItem_OnMaximumSize((QWidgetItem*)self, (intptr_t)callback);
}

QSize* q_widgetitem_qbase_maximum_size(void* self) {
    return QWidgetItem_QBaseMaximumSize((QWidgetItem*)self);
}

int64_t q_widgetitem_expanding_directions(void* self) {
    return QWidgetItem_ExpandingDirections((QWidgetItem*)self);
}

void q_widgetitem_on_expanding_directions(void* self, int64_t (*callback)()) {
    QWidgetItem_OnExpandingDirections((QWidgetItem*)self, (intptr_t)callback);
}

int64_t q_widgetitem_qbase_expanding_directions(void* self) {
    return QWidgetItem_QBaseExpandingDirections((QWidgetItem*)self);
}

bool q_widgetitem_is_empty(void* self) {
    return QWidgetItem_IsEmpty((QWidgetItem*)self);
}

void q_widgetitem_on_is_empty(void* self, bool (*callback)()) {
    QWidgetItem_OnIsEmpty((QWidgetItem*)self, (intptr_t)callback);
}

bool q_widgetitem_qbase_is_empty(void* self) {
    return QWidgetItem_QBaseIsEmpty((QWidgetItem*)self);
}

void q_widgetitem_set_geometry(void* self, void* geometry) {
    QWidgetItem_SetGeometry((QWidgetItem*)self, (QRect*)geometry);
}

void q_widgetitem_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QWidgetItem_OnSetGeometry((QWidgetItem*)self, (intptr_t)callback);
}

void q_widgetitem_qbase_set_geometry(void* self, void* geometry) {
    QWidgetItem_QBaseSetGeometry((QWidgetItem*)self, (QRect*)geometry);
}

QRect* q_widgetitem_geometry(void* self) {
    return QWidgetItem_Geometry((QWidgetItem*)self);
}

void q_widgetitem_on_geometry(void* self, QRect* (*callback)()) {
    QWidgetItem_OnGeometry((QWidgetItem*)self, (intptr_t)callback);
}

QRect* q_widgetitem_qbase_geometry(void* self) {
    return QWidgetItem_QBaseGeometry((QWidgetItem*)self);
}

QWidget* q_widgetitem_widget(void* self) {
    return QWidgetItem_Widget((QWidgetItem*)self);
}

void q_widgetitem_on_widget(void* self, QWidget* (*callback)()) {
    QWidgetItem_OnWidget((QWidgetItem*)self, (intptr_t)callback);
}

QWidget* q_widgetitem_qbase_widget(void* self) {
    return QWidgetItem_QBaseWidget((QWidgetItem*)self);
}

bool q_widgetitem_has_height_for_width(void* self) {
    return QWidgetItem_HasHeightForWidth((QWidgetItem*)self);
}

void q_widgetitem_on_has_height_for_width(void* self, bool (*callback)()) {
    QWidgetItem_OnHasHeightForWidth((QWidgetItem*)self, (intptr_t)callback);
}

bool q_widgetitem_qbase_has_height_for_width(void* self) {
    return QWidgetItem_QBaseHasHeightForWidth((QWidgetItem*)self);
}

int32_t q_widgetitem_height_for_width(void* self, int param1) {
    return QWidgetItem_HeightForWidth((QWidgetItem*)self, param1);
}

void q_widgetitem_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QWidgetItem_OnHeightForWidth((QWidgetItem*)self, (intptr_t)callback);
}

int32_t q_widgetitem_qbase_height_for_width(void* self, int param1) {
    return QWidgetItem_QBaseHeightForWidth((QWidgetItem*)self, param1);
}

int32_t q_widgetitem_minimum_height_for_width(void* self, int param1) {
    return QWidgetItem_MinimumHeightForWidth((QWidgetItem*)self, param1);
}

void q_widgetitem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QWidgetItem_OnMinimumHeightForWidth((QWidgetItem*)self, (intptr_t)callback);
}

int32_t q_widgetitem_qbase_minimum_height_for_width(void* self, int param1) {
    return QWidgetItem_QBaseMinimumHeightForWidth((QWidgetItem*)self, param1);
}

int64_t q_widgetitem_control_types(void* self) {
    return QWidgetItem_ControlTypes((QWidgetItem*)self);
}

void q_widgetitem_on_control_types(void* self, int64_t (*callback)()) {
    QWidgetItem_OnControlTypes((QWidgetItem*)self, (intptr_t)callback);
}

int64_t q_widgetitem_qbase_control_types(void* self) {
    return QWidgetItem_QBaseControlTypes((QWidgetItem*)self);
}

int64_t q_widgetitem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_widgetitem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

void q_widgetitem_invalidate(void* self) {
    QWidgetItem_Invalidate((QWidgetItem*)self);
}

void q_widgetitem_qbase_invalidate(void* self) {
    QWidgetItem_QBaseInvalidate((QWidgetItem*)self);
}

void q_widgetitem_on_invalidate(void* self, void (*callback)()) {
    QWidgetItem_OnInvalidate((QWidgetItem*)self, (intptr_t)callback);
}

QLayout* q_widgetitem_layout(void* self) {
    return QWidgetItem_Layout((QWidgetItem*)self);
}

QLayout* q_widgetitem_qbase_layout(void* self) {
    return QWidgetItem_QBaseLayout((QWidgetItem*)self);
}

void q_widgetitem_on_layout(void* self, QLayout* (*callback)()) {
    QWidgetItem_OnLayout((QWidgetItem*)self, (intptr_t)callback);
}

QSpacerItem* q_widgetitem_spacer_item(void* self) {
    return QWidgetItem_SpacerItem((QWidgetItem*)self);
}

QSpacerItem* q_widgetitem_qbase_spacer_item(void* self) {
    return QWidgetItem_QBaseSpacerItem((QWidgetItem*)self);
}

void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QWidgetItem_OnSpacerItem((QWidgetItem*)self, (intptr_t)callback);
}

void q_widgetitem_delete(void* self) {
    QWidgetItem_Delete((QWidgetItem*)(self));
}

QWidgetItemV2* q_widgetitemv2_new(void* widget) {
    return QWidgetItemV2_new((QWidget*)widget);
}

QSize* q_widgetitemv2_size_hint(void* self) {
    return QWidgetItemV2_SizeHint((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_size_hint(void* self, QSize* (*callback)()) {
    QWidgetItemV2_OnSizeHint((QWidgetItemV2*)self, (intptr_t)callback);
}

QSize* q_widgetitemv2_qbase_size_hint(void* self) {
    return QWidgetItemV2_QBaseSizeHint((QWidgetItemV2*)self);
}

QSize* q_widgetitemv2_minimum_size(void* self) {
    return QWidgetItemV2_MinimumSize((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_minimum_size(void* self, QSize* (*callback)()) {
    QWidgetItemV2_OnMinimumSize((QWidgetItemV2*)self, (intptr_t)callback);
}

QSize* q_widgetitemv2_qbase_minimum_size(void* self) {
    return QWidgetItemV2_QBaseMinimumSize((QWidgetItemV2*)self);
}

QSize* q_widgetitemv2_maximum_size(void* self) {
    return QWidgetItemV2_MaximumSize((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_maximum_size(void* self, QSize* (*callback)()) {
    QWidgetItemV2_OnMaximumSize((QWidgetItemV2*)self, (intptr_t)callback);
}

QSize* q_widgetitemv2_qbase_maximum_size(void* self) {
    return QWidgetItemV2_QBaseMaximumSize((QWidgetItemV2*)self);
}

int32_t q_widgetitemv2_height_for_width(void* self, int width) {
    return QWidgetItemV2_HeightForWidth((QWidgetItemV2*)self, width);
}

void q_widgetitemv2_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QWidgetItemV2_OnHeightForWidth((QWidgetItemV2*)self, (intptr_t)callback);
}

int32_t q_widgetitemv2_qbase_height_for_width(void* self, int width) {
    return QWidgetItemV2_QBaseHeightForWidth((QWidgetItemV2*)self, width);
}

int64_t q_widgetitemv2_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_widgetitemv2_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

int64_t q_widgetitemv2_expanding_directions(void* self) {
    return QWidgetItemV2_ExpandingDirections((QWidgetItemV2*)self);
}

int64_t q_widgetitemv2_qbase_expanding_directions(void* self) {
    return QWidgetItemV2_QBaseExpandingDirections((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_expanding_directions(void* self, int64_t (*callback)()) {
    QWidgetItemV2_OnExpandingDirections((QWidgetItemV2*)self, (intptr_t)callback);
}

bool q_widgetitemv2_is_empty(void* self) {
    return QWidgetItemV2_IsEmpty((QWidgetItemV2*)self);
}

bool q_widgetitemv2_qbase_is_empty(void* self) {
    return QWidgetItemV2_QBaseIsEmpty((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_is_empty(void* self, bool (*callback)()) {
    QWidgetItemV2_OnIsEmpty((QWidgetItemV2*)self, (intptr_t)callback);
}

void q_widgetitemv2_set_geometry(void* self, void* geometry) {
    QWidgetItemV2_SetGeometry((QWidgetItemV2*)self, (QRect*)geometry);
}

void q_widgetitemv2_qbase_set_geometry(void* self, void* geometry) {
    QWidgetItemV2_QBaseSetGeometry((QWidgetItemV2*)self, (QRect*)geometry);
}

void q_widgetitemv2_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QWidgetItemV2_OnSetGeometry((QWidgetItemV2*)self, (intptr_t)callback);
}

QRect* q_widgetitemv2_geometry(void* self) {
    return QWidgetItemV2_Geometry((QWidgetItemV2*)self);
}

QRect* q_widgetitemv2_qbase_geometry(void* self) {
    return QWidgetItemV2_QBaseGeometry((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_geometry(void* self, QRect* (*callback)()) {
    QWidgetItemV2_OnGeometry((QWidgetItemV2*)self, (intptr_t)callback);
}

QWidget* q_widgetitemv2_widget(void* self) {
    return QWidgetItemV2_Widget((QWidgetItemV2*)self);
}

QWidget* q_widgetitemv2_qbase_widget(void* self) {
    return QWidgetItemV2_QBaseWidget((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_widget(void* self, QWidget* (*callback)()) {
    QWidgetItemV2_OnWidget((QWidgetItemV2*)self, (intptr_t)callback);
}

bool q_widgetitemv2_has_height_for_width(void* self) {
    return QWidgetItemV2_HasHeightForWidth((QWidgetItemV2*)self);
}

bool q_widgetitemv2_qbase_has_height_for_width(void* self) {
    return QWidgetItemV2_QBaseHasHeightForWidth((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_has_height_for_width(void* self, bool (*callback)()) {
    QWidgetItemV2_OnHasHeightForWidth((QWidgetItemV2*)self, (intptr_t)callback);
}

int32_t q_widgetitemv2_minimum_height_for_width(void* self, int param1) {
    return QWidgetItemV2_MinimumHeightForWidth((QWidgetItemV2*)self, param1);
}

int32_t q_widgetitemv2_qbase_minimum_height_for_width(void* self, int param1) {
    return QWidgetItemV2_QBaseMinimumHeightForWidth((QWidgetItemV2*)self, param1);
}

void q_widgetitemv2_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QWidgetItemV2_OnMinimumHeightForWidth((QWidgetItemV2*)self, (intptr_t)callback);
}

int64_t q_widgetitemv2_control_types(void* self) {
    return QWidgetItemV2_ControlTypes((QWidgetItemV2*)self);
}

int64_t q_widgetitemv2_qbase_control_types(void* self) {
    return QWidgetItemV2_QBaseControlTypes((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_control_types(void* self, int64_t (*callback)()) {
    QWidgetItemV2_OnControlTypes((QWidgetItemV2*)self, (intptr_t)callback);
}

void q_widgetitemv2_invalidate(void* self) {
    QWidgetItemV2_Invalidate((QWidgetItemV2*)self);
}

void q_widgetitemv2_qbase_invalidate(void* self) {
    QWidgetItemV2_QBaseInvalidate((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_invalidate(void* self, void (*callback)()) {
    QWidgetItemV2_OnInvalidate((QWidgetItemV2*)self, (intptr_t)callback);
}

QLayout* q_widgetitemv2_layout(void* self) {
    return QWidgetItemV2_Layout((QWidgetItemV2*)self);
}

QLayout* q_widgetitemv2_qbase_layout(void* self) {
    return QWidgetItemV2_QBaseLayout((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_layout(void* self, QLayout* (*callback)()) {
    QWidgetItemV2_OnLayout((QWidgetItemV2*)self, (intptr_t)callback);
}

QSpacerItem* q_widgetitemv2_spacer_item(void* self) {
    return QWidgetItemV2_SpacerItem((QWidgetItemV2*)self);
}

QSpacerItem* q_widgetitemv2_qbase_spacer_item(void* self) {
    return QWidgetItemV2_QBaseSpacerItem((QWidgetItemV2*)self);
}

void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QWidgetItemV2_OnSpacerItem((QWidgetItemV2*)self, (intptr_t)callback);
}

void q_widgetitemv2_delete(void* self) {
    QWidgetItemV2_Delete((QWidgetItemV2*)(self));
}
