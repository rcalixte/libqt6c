#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqlayout.hpp"
#include "libqlayoutitem.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgridlayout.hpp"
#include "libqgridlayout.h"

/// https://doc.qt.io/qt-6/qgridlayout.html

/// q_gridlayout_new constructs a new QGridLayout object.
///
/// ``` QWidget* parent ```
QGridLayout* q_gridlayout_new(void* parent) {
    return QGridLayout_new((QWidget*)parent);
}

/// q_gridlayout_new2 constructs a new QGridLayout object.
///
///
QGridLayout* q_gridlayout_new2() {
    return QGridLayout_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGridLayout* self ```
QMetaObject* q_gridlayout_meta_object(void* self) {
    return QGridLayout_MetaObject((QGridLayout*)self);
}

/// ``` QGridLayout* self, const char* param1 ```
void* q_gridlayout_metacast(void* self, const char* param1) {
    return QGridLayout_Metacast((QGridLayout*)self, param1);
}

/// ``` QGridLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gridlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGridLayout_Metacall((QGridLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, enum QMetaObject__Call, int, void*) ```
void q_gridlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGridLayout_OnMetacall((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gridlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGridLayout_QBaseMetacall((QGridLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_gridlayout_tr(const char* s) {
    libqt_string _str = QGridLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_size_hint(void* self) {
    return QGridLayout_SizeHint((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_size_hint(void* self, QSize* (*slot)()) {
    QGridLayout_OnSizeHint((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_size_hint(void* self) {
    return QGridLayout_QBaseSizeHint((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_minimum_size(void* self) {
    return QGridLayout_MinimumSize((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_minimum_size(void* self, QSize* (*slot)()) {
    QGridLayout_OnMinimumSize((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_minimum_size(void* self) {
    return QGridLayout_QBaseMinimumSize((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_maximum_size(void* self) {
    return QGridLayout_MaximumSize((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_maximum_size(void* self, QSize* (*slot)()) {
    QGridLayout_OnMaximumSize((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_maximum_size(void* self) {
    return QGridLayout_QBaseMaximumSize((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_horizontal_spacing(void* self, int spacing) {
    QGridLayout_SetHorizontalSpacing((QGridLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_horizontal_spacing(void* self) {
    return QGridLayout_HorizontalSpacing((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_vertical_spacing(void* self, int spacing) {
    QGridLayout_SetVerticalSpacing((QGridLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_vertical_spacing(void* self) {
    return QGridLayout_VerticalSpacing((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_spacing(void* self, int spacing) {
    QGridLayout_SetSpacing((QGridLayout*)self, spacing);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QGridLayout_OnSetSpacing((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_qbase_set_spacing(void* self, int spacing) {
    QGridLayout_QBaseSetSpacing((QGridLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_spacing(void* self) {
    return QGridLayout_Spacing((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_spacing(void* self, int32_t (*slot)()) {
    QGridLayout_OnSpacing((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_spacing(void* self) {
    return QGridLayout_QBaseSpacing((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
///
/// ``` QGridLayout* self, int row, int stretch ```
void q_gridlayout_set_row_stretch(void* self, int row, int stretch) {
    QGridLayout_SetRowStretch((QGridLayout*)self, row, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
///
/// ``` QGridLayout* self, int column, int stretch ```
void q_gridlayout_set_column_stretch(void* self, int column, int stretch) {
    QGridLayout_SetColumnStretch((QGridLayout*)self, column, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
///
/// ``` QGridLayout* self, int row ```
int32_t q_gridlayout_row_stretch(void* self, int row) {
    return QGridLayout_RowStretch((QGridLayout*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
///
/// ``` QGridLayout* self, int column ```
int32_t q_gridlayout_column_stretch(void* self, int column) {
    return QGridLayout_ColumnStretch((QGridLayout*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
///
/// ``` QGridLayout* self, int row, int minSize ```
void q_gridlayout_set_row_minimum_height(void* self, int row, int minSize) {
    QGridLayout_SetRowMinimumHeight((QGridLayout*)self, row, minSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
///
/// ``` QGridLayout* self, int column, int minSize ```
void q_gridlayout_set_column_minimum_width(void* self, int column, int minSize) {
    QGridLayout_SetColumnMinimumWidth((QGridLayout*)self, column, minSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
///
/// ``` QGridLayout* self, int row ```
int32_t q_gridlayout_row_minimum_height(void* self, int row) {
    return QGridLayout_RowMinimumHeight((QGridLayout*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
///
/// ``` QGridLayout* self, int column ```
int32_t q_gridlayout_column_minimum_width(void* self, int column) {
    return QGridLayout_ColumnMinimumWidth((QGridLayout*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_column_count(void* self) {
    return QGridLayout_ColumnCount((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_row_count(void* self) {
    return QGridLayout_RowCount((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
///
/// ``` QGridLayout* self, int row, int column ```
QRect* q_gridlayout_cell_rect(void* self, int row, int column) {
    return QGridLayout_CellRect((QGridLayout*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_has_height_for_width(void* self) {
    return QGridLayout_HasHeightForWidth((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, bool (*slot)() ```
void q_gridlayout_on_has_height_for_width(void* self, bool (*slot)()) {
    QGridLayout_OnHasHeightForWidth((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
bool q_gridlayout_qbase_has_height_for_width(void* self) {
    return QGridLayout_QBaseHasHeightForWidth((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_height_for_width(void* self, int param1) {
    return QGridLayout_HeightForWidth((QGridLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QGridLayout_OnHeightForWidth((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_qbase_height_for_width(void* self, int param1) {
    return QGridLayout_QBaseHeightForWidth((QGridLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_minimum_height_for_width(void* self, int param1) {
    return QGridLayout_MinimumHeightForWidth((QGridLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QGridLayout_OnMinimumHeightForWidth((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QGridLayout_QBaseMinimumHeightForWidth((QGridLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_expanding_directions(void* self) {
    return QGridLayout_ExpandingDirections((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int64_t (*slot)() ```
void q_gridlayout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QGridLayout_OnExpandingDirections((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_qbase_expanding_directions(void* self) {
    return QGridLayout_QBaseExpandingDirections((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// ``` QGridLayout* self ```
void q_gridlayout_invalidate(void* self) {
    QGridLayout_Invalidate((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)() ```
void q_gridlayout_on_invalidate(void* self, void (*slot)()) {
    QGridLayout_OnInvalidate((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
void q_gridlayout_qbase_invalidate(void* self) {
    QGridLayout_QBaseInvalidate((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_add_widget(void* self, void* w) {
    QGridLayout_AddWidget((QGridLayout*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column ```
void q_gridlayout_add_widget2(void* self, void* param1, int row, int column) {
    QGridLayout_AddWidget2((QGridLayout*)self, (QWidget*)param1, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_widget3(void* self, void* param1, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddWidget3((QGridLayout*)self, (QWidget*)param1, row, column, rowSpan, columnSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column ```
void q_gridlayout_add_layout(void* self, void* param1, int row, int column) {
    QGridLayout_AddLayout((QGridLayout*)self, (QLayout*)param1, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_layout2(void* self, void* param1, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddLayout2((QGridLayout*)self, (QLayout*)param1, row, column, rowSpan, columnSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
///
/// ``` QGridLayout* self, enum Qt__Corner originCorner ```
void q_gridlayout_set_origin_corner(void* self, int64_t originCorner) {
    QGridLayout_SetOriginCorner((QGridLayout*)self, originCorner);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_origin_corner(void* self) {
    return QGridLayout_OriginCorner((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_item_at(void* self, int index) {
    return QGridLayout_ItemAt((QGridLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QGridLayout_OnItemAt((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_qbase_item_at(void* self, int index) {
    return QGridLayout_QBaseItemAt((QGridLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
///
/// ``` QGridLayout* self, int row, int column ```
QLayoutItem* q_gridlayout_item_at_position(void* self, int row, int column) {
    return QGridLayout_ItemAtPosition((QGridLayout*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_take_at(void* self, int index) {
    return QGridLayout_TakeAt((QGridLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QGridLayout_OnTakeAt((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_qbase_take_at(void* self, int index) {
    return QGridLayout_QBaseTakeAt((QGridLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_count(void* self) {
    return QGridLayout_Count((QGridLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_count(void* self, int32_t (*slot)()) {
    QGridLayout_OnCount((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_count(void* self) {
    return QGridLayout_QBaseCount((QGridLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// ``` QGridLayout* self, QRect* geometry ```
void q_gridlayout_set_geometry(void* self, void* geometry) {
    QGridLayout_SetGeometry((QGridLayout*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QRect*) ```
void q_gridlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnSetGeometry((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, QRect* geometry ```
void q_gridlayout_qbase_set_geometry(void* self, void* geometry) {
    QGridLayout_QBaseSetGeometry((QGridLayout*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column ```
void q_gridlayout_add_item(void* self, void* item, int row, int column) {
    QGridLayout_AddItem((QGridLayout*)self, (QLayoutItem*)item, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
///
/// ``` QGridLayout* self, int n, enum Qt__Orientation orient ```
void q_gridlayout_set_default_positioning(void* self, int n, int64_t orient) {
    QGridLayout_SetDefaultPositioning((QGridLayout*)self, n, orient);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
///
/// ``` QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan ```
void q_gridlayout_get_item_position(void* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
    QGridLayout_GetItemPosition((QGridLayout*)self, idx, row, column, rowSpan, columnSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_add_item_with_q_layout_item(void* self, void* param1) {
    QGridLayout_AddItemWithQLayoutItem((QGridLayout*)self, (QLayoutItem*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QLayoutItem*) ```
void q_gridlayout_on_add_item_with_q_layout_item(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnAddItemWithQLayoutItem((QGridLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_qbase_add_item_with_q_layout_item(void* self, void* param1) {
    QGridLayout_QBaseAddItemWithQLayoutItem((QGridLayout*)self, (QLayoutItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_gridlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QGridLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_gridlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGridLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int param4 ```
void q_gridlayout_add_widget4(void* self, void* param1, int row, int column, int64_t param4) {
    QGridLayout_AddWidget4((QGridLayout*)self, (QWidget*)param1, row, column, param4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_widget6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6) {
    QGridLayout_AddWidget6((QGridLayout*)self, (QWidget*)param1, row, column, rowSpan, columnSpan, param6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int param4 ```
void q_gridlayout_add_layout4(void* self, void* param1, int row, int column, int64_t param4) {
    QGridLayout_AddLayout4((QGridLayout*)self, (QLayout*)param1, row, column, param4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_layout6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6) {
    QGridLayout_AddLayout6((QGridLayout*)self, (QLayout*)param1, row, column, rowSpan, columnSpan, param6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan ```
void q_gridlayout_add_item4(void* self, void* item, int row, int column, int rowSpan) {
    QGridLayout_AddItem4((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_item5(void* self, void* item, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddItem5((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan, columnSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t param6) {
    QGridLayout_AddItem6((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan, columnSpan, param6);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QGridLayout* self, int left, int top, int right, int bottom ```
void q_gridlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QGridLayout* self, QMargins* margins ```
void q_gridlayout_set_contents_margins_with_margins(void* self, void* margins) {
    QLayout_SetContentsMarginsWithMargins((QLayout*)self, (QMargins*)margins);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QGridLayout* self ```
void q_gridlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QGridLayout* self, int* left, int* top, int* right, int* bottom ```
void q_gridlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QGridLayout* self ```
QMargins* q_gridlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QGridLayout* self, QWidget* w, int alignment ```
bool q_gridlayout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QGridLayout* self, QLayout* l, int alignment ```
bool q_gridlayout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QGridLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_gridlayout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QGridLayout* self ```
void q_gridlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
int32_t q_gridlayout_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_IndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_gridlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOfWithQLayoutItem((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// Base class method implementation
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
int32_t q_gridlayout_qbase_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_QBaseIndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QGridLayout* self, int w ```
int32_t q_gridlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QGridLayout* self, int w ```
int32_t q_gridlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QGridLayout* self, bool enabled ```
void q_gridlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_gridlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGridLayout* self ```
const char* q_gridlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGridLayout* self, const char* name ```
void q_gridlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGridLayout* self, bool b ```
bool q_gridlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGridLayout* self ```
QThread* q_gridlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGridLayout* self, QThread* thread ```
void q_gridlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGridLayout* self, int interval ```
int32_t q_gridlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGridLayout* self, int id ```
void q_gridlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGridLayout* self ```
libqt_list /* of QObject* */ q_gridlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGridLayout* self, QObject* parent ```
void q_gridlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGridLayout* self, QObject* filterObj ```
void q_gridlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGridLayout* self, QObject* obj ```
void q_gridlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_gridlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGridLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_gridlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_gridlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_gridlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGridLayout* self ```
void q_gridlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGridLayout* self ```
void q_gridlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGridLayout* self, const char* name, QVariant* value ```
bool q_gridlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGridLayout* self, const char* name ```
QVariant* q_gridlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGridLayout* self ```
const char** q_gridlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGridLayout* self ```
QBindingStorage* q_gridlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGridLayout* self ```
QBindingStorage* q_gridlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self ```
void q_gridlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGridLayout* self, void (*slot)(QObject*) ```
void q_gridlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGridLayout* self, const char* classname ```
bool q_gridlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGridLayout* self ```
void q_gridlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGridLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_gridlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gridlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGridLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gridlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self, QObject* param1 ```
void q_gridlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGridLayout* self, void (*slot)(QObject*, QObject*) ```
void q_gridlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_geometry(void* self) {
    return QGridLayout_Geometry((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_qbase_geometry(void* self) {
    return QGridLayout_QBaseGeometry((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* (*slot)() ```
void q_gridlayout_on_geometry(void* self, QRect* (*slot)()) {
    QGridLayout_OnGeometry((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* param1 ```
int32_t q_gridlayout_index_of(void* self, void* param1) {
    return QGridLayout_IndexOf((QGridLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* param1 ```
int32_t q_gridlayout_qbase_index_of(void* self, void* param1) {
    return QGridLayout_QBaseIndexOf((QGridLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, QWidget*) ```
void q_gridlayout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QGridLayout_OnIndexOf((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_empty(void* self) {
    return QGridLayout_IsEmpty((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
bool q_gridlayout_qbase_is_empty(void* self) {
    return QGridLayout_QBaseIsEmpty((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)() ```
void q_gridlayout_on_is_empty(void* self, bool (*slot)()) {
    QGridLayout_OnIsEmpty((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_control_types(void* self) {
    return QGridLayout_ControlTypes((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_qbase_control_types(void* self) {
    return QGridLayout_QBaseControlTypes((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int64_t (*slot)() ```
void q_gridlayout_on_control_types(void* self, int64_t (*slot)()) {
    QGridLayout_OnControlTypes((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_gridlayout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QGridLayout_ReplaceWidget((QGridLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_gridlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QGridLayout_QBaseReplaceWidget((QGridLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, QWidget*, QWidget*, int) ```
void q_gridlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QGridLayout_OnReplaceWidget((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QLayout* q_gridlayout_layout(void* self) {
    return QGridLayout_Layout((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QLayout* q_gridlayout_qbase_layout(void* self) {
    return QGridLayout_QBaseLayout((QGridLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* (*slot)() ```
void q_gridlayout_on_layout(void* self, QLayout* (*slot)()) {
    QGridLayout_OnLayout((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QChildEvent* e ```
void q_gridlayout_child_event(void* self, void* e) {
    QGridLayout_ChildEvent((QGridLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QChildEvent* e ```
void q_gridlayout_qbase_child_event(void* self, void* e) {
    QGridLayout_QBaseChildEvent((QGridLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QChildEvent*) ```
void q_gridlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnChildEvent((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
bool q_gridlayout_event(void* self, void* event) {
    return QGridLayout_Event((QGridLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
bool q_gridlayout_qbase_event(void* self, void* event) {
    return QGridLayout_QBaseEvent((QGridLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QGridLayout_OnEvent((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QObject* watched, QEvent* event ```
bool q_gridlayout_event_filter(void* self, void* watched, void* event) {
    return QGridLayout_EventFilter((QGridLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QObject* watched, QEvent* event ```
bool q_gridlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QGridLayout_QBaseEventFilter((QGridLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QObject*, QEvent*) ```
void q_gridlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGridLayout_OnEventFilter((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QTimerEvent* event ```
void q_gridlayout_timer_event(void* self, void* event) {
    QGridLayout_TimerEvent((QGridLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QTimerEvent* event ```
void q_gridlayout_qbase_timer_event(void* self, void* event) {
    QGridLayout_QBaseTimerEvent((QGridLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QTimerEvent*) ```
void q_gridlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnTimerEvent((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
void q_gridlayout_custom_event(void* self, void* event) {
    QGridLayout_CustomEvent((QGridLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
void q_gridlayout_qbase_custom_event(void* self, void* event) {
    QGridLayout_QBaseCustomEvent((QGridLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnCustomEvent((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_connect_notify(void* self, void* signal) {
    QGridLayout_ConnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_qbase_connect_notify(void* self, void* signal) {
    QGridLayout_QBaseConnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnConnectNotify((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_disconnect_notify(void* self, void* signal) {
    QGridLayout_DisconnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_qbase_disconnect_notify(void* self, void* signal) {
    QGridLayout_QBaseDisconnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnDisconnectNotify((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_widget(void* self) {
    return QGridLayout_Widget((QGridLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_qbase_widget(void* self) {
    return QGridLayout_QBaseWidget((QGridLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* (*slot)() ```
void q_gridlayout_on_widget(void* self, QWidget* (*slot)()) {
    QGridLayout_OnWidget((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QSpacerItem* q_gridlayout_spacer_item(void* self) {
    return QGridLayout_SpacerItem((QGridLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QSpacerItem* q_gridlayout_qbase_spacer_item(void* self) {
    return QGridLayout_QBaseSpacerItem((QGridLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QSpacerItem* (*slot)() ```
void q_gridlayout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QGridLayout_OnSpacerItem((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* param1 ```
void q_gridlayout_widget_event(void* self, void* param1) {
    QGridLayout_WidgetEvent((QGridLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* param1 ```
void q_gridlayout_qbase_widget_event(void* self, void* param1) {
    QGridLayout_QBaseWidgetEvent((QGridLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnWidgetEvent((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QLayout* l ```
void q_gridlayout_add_child_layout(void* self, void* l) {
    QGridLayout_AddChildLayout((QGridLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* l ```
void q_gridlayout_qbase_add_child_layout(void* self, void* l) {
    QGridLayout_QBaseAddChildLayout((QGridLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QLayout*) ```
void q_gridlayout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnAddChildLayout((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_add_child_widget(void* self, void* w) {
    QGridLayout_AddChildWidget((QGridLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_qbase_add_child_widget(void* self, void* w) {
    QGridLayout_QBaseAddChildWidget((QGridLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QWidget*) ```
void q_gridlayout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QGridLayout_OnAddChildWidget((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QLayout* layout ```
bool q_gridlayout_adopt_layout(void* self, void* layout) {
    return QGridLayout_AdoptLayout((QGridLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* layout ```
bool q_gridlayout_qbase_adopt_layout(void* self, void* layout) {
    return QGridLayout_QBaseAdoptLayout((QGridLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QLayout*) ```
void q_gridlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QGridLayout_OnAdoptLayout((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QRect* param1 ```
QRect* q_gridlayout_alignment_rect(void* self, void* param1) {
    return QGridLayout_AlignmentRect((QGridLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* param1 ```
QRect* q_gridlayout_qbase_alignment_rect(void* self, void* param1) {
    return QGridLayout_QBaseAlignmentRect((QGridLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* (*slot)(QGridLayout*, QRect*) ```
void q_gridlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QGridLayout_OnAlignmentRect((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_sender(void* self) {
    return QGridLayout_Sender((QGridLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_qbase_sender(void* self) {
    return QGridLayout_QBaseSender((QGridLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QObject* (*slot)() ```
void q_gridlayout_on_sender(void* self, QObject* (*slot)()) {
    QGridLayout_OnSender((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_sender_signal_index(void* self) {
    return QGridLayout_SenderSignalIndex((QGridLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_sender_signal_index(void* self) {
    return QGridLayout_QBaseSenderSignalIndex((QGridLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGridLayout_OnSenderSignalIndex((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, const char* signal ```
int32_t q_gridlayout_receivers(void* self, const char* signal) {
    return QGridLayout_Receivers((QGridLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, const char* signal ```
int32_t q_gridlayout_qbase_receivers(void* self, const char* signal) {
    return QGridLayout_QBaseReceivers((QGridLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, const char*) ```
void q_gridlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGridLayout_OnReceivers((QGridLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
bool q_gridlayout_is_signal_connected(void* self, void* signal) {
    return QGridLayout_IsSignalConnected((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
bool q_gridlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QGridLayout_QBaseIsSignalConnected((QGridLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGridLayout_OnIsSignalConnected((QGridLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGridLayout* self ```
void q_gridlayout_delete(void* self) {
    QGridLayout_Delete((QGridLayout*)(self));
}