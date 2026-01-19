#include "../libqlayout.hpp"
#include "../libqlayoutitem.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqwidget.hpp"
#include "liblayoutdecoration.hpp"
#include "liblayoutdecoration.h"

QDesignerLayoutDecorationExtension* q_designerlayoutdecorationextension_new() {
    return QDesignerLayoutDecorationExtension_new();
}

libqt_list /* of QWidget* */ q_designerlayoutdecorationextension_widgets(void* self, void* layout) {
    libqt_list _arr = QDesignerLayoutDecorationExtension_Widgets((QDesignerLayoutDecorationExtension*)self, (QLayout*)layout);
    return _arr;
}

void q_designerlayoutdecorationextension_on_widgets(void* self, QWidget** (*callback)(void*, void*)) {
    QDesignerLayoutDecorationExtension_OnWidgets((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ q_designerlayoutdecorationextension_qbase_widgets(void* self, void* layout) {
    libqt_list _arr = QDesignerLayoutDecorationExtension_QBaseWidgets((QDesignerLayoutDecorationExtension*)self, (QLayout*)layout);
    return _arr;
}

QRect* q_designerlayoutdecorationextension_item_info(void* self, int index) {
    return QDesignerLayoutDecorationExtension_ItemInfo((QDesignerLayoutDecorationExtension*)self, index);
}

void q_designerlayoutdecorationextension_on_item_info(void* self, QRect* (*callback)(void*, int)) {
    QDesignerLayoutDecorationExtension_OnItemInfo((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

QRect* q_designerlayoutdecorationextension_qbase_item_info(void* self, int index) {
    return QDesignerLayoutDecorationExtension_QBaseItemInfo((QDesignerLayoutDecorationExtension*)self, index);
}

int32_t q_designerlayoutdecorationextension_index_of(void* self, void* widget) {
    return QDesignerLayoutDecorationExtension_IndexOf((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget);
}

void q_designerlayoutdecorationextension_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QDesignerLayoutDecorationExtension_OnIndexOf((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_index_of(void* self, void* widget) {
    return QDesignerLayoutDecorationExtension_QBaseIndexOf((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget);
}

int32_t q_designerlayoutdecorationextension_index_of2(void* self, void* item) {
    return QDesignerLayoutDecorationExtension_IndexOf2((QDesignerLayoutDecorationExtension*)self, (QLayoutItem*)item);
}

void q_designerlayoutdecorationextension_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QDesignerLayoutDecorationExtension_OnIndexOf2((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_index_of2(void* self, void* item) {
    return QDesignerLayoutDecorationExtension_QBaseIndexOf2((QDesignerLayoutDecorationExtension*)self, (QLayoutItem*)item);
}

int32_t q_designerlayoutdecorationextension_current_insert_mode(void* self) {
    return QDesignerLayoutDecorationExtension_CurrentInsertMode((QDesignerLayoutDecorationExtension*)self);
}

void q_designerlayoutdecorationextension_on_current_insert_mode(void* self, int32_t (*callback)()) {
    QDesignerLayoutDecorationExtension_OnCurrentInsertMode((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_current_insert_mode(void* self) {
    return QDesignerLayoutDecorationExtension_QBaseCurrentInsertMode((QDesignerLayoutDecorationExtension*)self);
}

int32_t q_designerlayoutdecorationextension_current_index(void* self) {
    return QDesignerLayoutDecorationExtension_CurrentIndex((QDesignerLayoutDecorationExtension*)self);
}

void q_designerlayoutdecorationextension_on_current_index(void* self, int32_t (*callback)()) {
    QDesignerLayoutDecorationExtension_OnCurrentIndex((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_current_index(void* self) {
    return QDesignerLayoutDecorationExtension_QBaseCurrentIndex((QDesignerLayoutDecorationExtension*)self);
}

pair_int_int /* tuple of int and int */ q_designerlayoutdecorationextension_current_cell(void* self) {
    return QDesignerLayoutDecorationExtension_CurrentCell((QDesignerLayoutDecorationExtension*)self);
}

void q_designerlayoutdecorationextension_on_current_cell(void* self, pair_int_int /* tuple of int and int */ (*callback)()) {
    QDesignerLayoutDecorationExtension_OnCurrentCell((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

pair_int_int /* tuple of int and int */ q_designerlayoutdecorationextension_qbase_current_cell(void* self) {
    return QDesignerLayoutDecorationExtension_QBaseCurrentCell((QDesignerLayoutDecorationExtension*)self);
}

void q_designerlayoutdecorationextension_insert_widget(void* self, void* widget, pair_int_int /* tuple of int and int */ cell) {
    QDesignerLayoutDecorationExtension_InsertWidget((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget, cell);
}

void q_designerlayoutdecorationextension_on_insert_widget(void* self, void (*callback)(void*, void*, pair_int_int /* tuple of int and int */)) {
    QDesignerLayoutDecorationExtension_OnInsertWidget((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_insert_widget(void* self, void* widget, pair_int_int /* tuple of int and int */ cell) {
    QDesignerLayoutDecorationExtension_QBaseInsertWidget((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget, cell);
}

void q_designerlayoutdecorationextension_remove_widget(void* self, void* widget) {
    QDesignerLayoutDecorationExtension_RemoveWidget((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget);
}

void q_designerlayoutdecorationextension_on_remove_widget(void* self, void (*callback)(void*, void*)) {
    QDesignerLayoutDecorationExtension_OnRemoveWidget((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_remove_widget(void* self, void* widget) {
    QDesignerLayoutDecorationExtension_QBaseRemoveWidget((QDesignerLayoutDecorationExtension*)self, (QWidget*)widget);
}

void q_designerlayoutdecorationextension_insert_row(void* self, int row) {
    QDesignerLayoutDecorationExtension_InsertRow((QDesignerLayoutDecorationExtension*)self, row);
}

void q_designerlayoutdecorationextension_on_insert_row(void* self, void (*callback)(void*, int)) {
    QDesignerLayoutDecorationExtension_OnInsertRow((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_insert_row(void* self, int row) {
    QDesignerLayoutDecorationExtension_QBaseInsertRow((QDesignerLayoutDecorationExtension*)self, row);
}

void q_designerlayoutdecorationextension_insert_column(void* self, int column) {
    QDesignerLayoutDecorationExtension_InsertColumn((QDesignerLayoutDecorationExtension*)self, column);
}

void q_designerlayoutdecorationextension_on_insert_column(void* self, void (*callback)(void*, int)) {
    QDesignerLayoutDecorationExtension_OnInsertColumn((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_insert_column(void* self, int column) {
    QDesignerLayoutDecorationExtension_QBaseInsertColumn((QDesignerLayoutDecorationExtension*)self, column);
}

void q_designerlayoutdecorationextension_simplify(void* self) {
    QDesignerLayoutDecorationExtension_Simplify((QDesignerLayoutDecorationExtension*)self);
}

void q_designerlayoutdecorationextension_on_simplify(void* self, void (*callback)()) {
    QDesignerLayoutDecorationExtension_OnSimplify((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_simplify(void* self) {
    QDesignerLayoutDecorationExtension_QBaseSimplify((QDesignerLayoutDecorationExtension*)self);
}

int32_t q_designerlayoutdecorationextension_find_item_at(void* self, void* pos) {
    return QDesignerLayoutDecorationExtension_FindItemAt((QDesignerLayoutDecorationExtension*)self, (QPoint*)pos);
}

void q_designerlayoutdecorationextension_on_find_item_at(void* self, int32_t (*callback)(void*, void*)) {
    QDesignerLayoutDecorationExtension_OnFindItemAt((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_find_item_at(void* self, void* pos) {
    return QDesignerLayoutDecorationExtension_QBaseFindItemAt((QDesignerLayoutDecorationExtension*)self, (QPoint*)pos);
}

int32_t q_designerlayoutdecorationextension_find_item_at2(void* self, int row, int column) {
    return QDesignerLayoutDecorationExtension_FindItemAt2((QDesignerLayoutDecorationExtension*)self, row, column);
}

void q_designerlayoutdecorationextension_on_find_item_at2(void* self, int32_t (*callback)(void*, int, int)) {
    QDesignerLayoutDecorationExtension_OnFindItemAt2((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

int32_t q_designerlayoutdecorationextension_qbase_find_item_at2(void* self, int row, int column) {
    return QDesignerLayoutDecorationExtension_QBaseFindItemAt2((QDesignerLayoutDecorationExtension*)self, row, column);
}

void q_designerlayoutdecorationextension_adjust_indicator(void* self, void* pos, int index) {
    QDesignerLayoutDecorationExtension_AdjustIndicator((QDesignerLayoutDecorationExtension*)self, (QPoint*)pos, index);
}

void q_designerlayoutdecorationextension_on_adjust_indicator(void* self, void (*callback)(void*, void*, int)) {
    QDesignerLayoutDecorationExtension_OnAdjustIndicator((QDesignerLayoutDecorationExtension*)self, (intptr_t)callback);
}

void q_designerlayoutdecorationextension_qbase_adjust_indicator(void* self, void* pos, int index) {
    QDesignerLayoutDecorationExtension_QBaseAdjustIndicator((QDesignerLayoutDecorationExtension*)self, (QPoint*)pos, index);
}

void q_designerlayoutdecorationextension_delete(void* self) {
    QDesignerLayoutDecorationExtension_Delete((QDesignerLayoutDecorationExtension*)(self));
}
