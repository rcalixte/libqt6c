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
#include "libqboxlayout.hpp"
#include "libqboxlayout.h"

/// https://doc.qt.io/qt-6/qboxlayout.html

/// q_boxlayout_new constructs a new QBoxLayout object.
///
/// ``` enum QBoxLayout__Direction param1 ```
QBoxLayout* q_boxlayout_new(int64_t param1) {
    return QBoxLayout_new(param1);
}

/// q_boxlayout_new2 constructs a new QBoxLayout object.
///
/// ``` enum QBoxLayout__Direction param1, QWidget* parent ```
QBoxLayout* q_boxlayout_new2(int64_t param1, void* parent) {
    return QBoxLayout_new2(param1, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxLayout* self ```
QMetaObject* q_boxlayout_meta_object(void* self) {
    return QBoxLayout_MetaObject((QBoxLayout*)self);
}

/// ``` QBoxLayout* self, const char* param1 ```
void* q_boxlayout_metacast(void* self, const char* param1) {
    return QBoxLayout_Metacast((QBoxLayout*)self, param1);
}

/// ``` QBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxLayout_Metacall((QBoxLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int32_t (*slot)(QBoxLayout*, enum QMetaObject__Call, int, void*) ```
void q_boxlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBoxLayout_OnMetacall((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxLayout_QBaseMetacall((QBoxLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxlayout_tr(const char* s) {
    libqt_string _str = QBoxLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// ``` QBoxLayout* self, enum QBoxLayout__Direction direction ```
void q_boxlayout_set_direction(void* self, int64_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// ``` QBoxLayout* self, int size ```
void q_boxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// ``` QBoxLayout* self, QSpacerItem* spacerItem ```
void q_boxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QBoxLayout* self, QWidget* param1 ```
void q_boxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QBoxLayout* self, QLayout* layout ```
void q_boxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// ``` QBoxLayout* self, int param1 ```
void q_boxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// ``` QBoxLayout* self, QLayoutItem* param1 ```
void q_boxlayout_add_item(void* self, void* param1) {
    QBoxLayout_AddItem((QBoxLayout*)self, (QLayoutItem*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QLayoutItem*) ```
void q_boxlayout_on_add_item(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnAddItem((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, QLayoutItem* param1 ```
void q_boxlayout_qbase_add_item(void* self, void* param1) {
    QBoxLayout_QBaseAddItem((QBoxLayout*)self, (QLayoutItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// ``` QBoxLayout* self, int index, int size ```
void q_boxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QBoxLayout* self, int index ```
void q_boxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// ``` QBoxLayout* self, int index, QSpacerItem* spacerItem ```
void q_boxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QBoxLayout* self, int index, QWidget* widget ```
void q_boxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QBoxLayout* self, int index, QLayout* layout ```
void q_boxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// ``` QBoxLayout* self, int index, QLayoutItem* param2 ```
void q_boxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_spacing(void* self) {
    return QBoxLayout_Spacing((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int32_t (*slot)() ```
void q_boxlayout_on_spacing(void* self, int32_t (*slot)()) {
    QBoxLayout_OnSpacing((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_qbase_spacing(void* self) {
    return QBoxLayout_QBaseSpacing((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// ``` QBoxLayout* self, int spacing ```
void q_boxlayout_set_spacing(void* self, int spacing) {
    QBoxLayout_SetSpacing((QBoxLayout*)self, spacing);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, int) ```
void q_boxlayout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QBoxLayout_OnSetSpacing((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, int spacing ```
void q_boxlayout_qbase_set_spacing(void* self, int spacing) {
    QBoxLayout_QBaseSetSpacing((QBoxLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QBoxLayout* self, QWidget* w, int stretch ```
bool q_boxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QBoxLayout* self, QLayout* l, int stretch ```
bool q_boxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// ``` QBoxLayout* self, int index, int stretch ```
void q_boxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// ``` QBoxLayout* self, int index ```
int32_t q_boxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_size_hint(void* self) {
    return QBoxLayout_SizeHint((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, QSize* (*slot)() ```
void q_boxlayout_on_size_hint(void* self, QSize* (*slot)()) {
    QBoxLayout_OnSizeHint((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_qbase_size_hint(void* self) {
    return QBoxLayout_QBaseSizeHint((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_minimum_size(void* self) {
    return QBoxLayout_MinimumSize((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, QSize* (*slot)() ```
void q_boxlayout_on_minimum_size(void* self, QSize* (*slot)()) {
    QBoxLayout_OnMinimumSize((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_qbase_minimum_size(void* self) {
    return QBoxLayout_QBaseMinimumSize((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_maximum_size(void* self) {
    return QBoxLayout_MaximumSize((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, QSize* (*slot)() ```
void q_boxlayout_on_maximum_size(void* self, QSize* (*slot)()) {
    QBoxLayout_OnMaximumSize((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_qbase_maximum_size(void* self) {
    return QBoxLayout_QBaseMaximumSize((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_has_height_for_width(void* self) {
    return QBoxLayout_HasHeightForWidth((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, bool (*slot)() ```
void q_boxlayout_on_has_height_for_width(void* self, bool (*slot)()) {
    QBoxLayout_OnHasHeightForWidth((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_qbase_has_height_for_width(void* self) {
    return QBoxLayout_QBaseHasHeightForWidth((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// ``` QBoxLayout* self, int param1 ```
int32_t q_boxlayout_height_for_width(void* self, int param1) {
    return QBoxLayout_HeightForWidth((QBoxLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int32_t (*slot)(QBoxLayout*, int) ```
void q_boxlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QBoxLayout_OnHeightForWidth((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, int param1 ```
int32_t q_boxlayout_qbase_height_for_width(void* self, int param1) {
    return QBoxLayout_QBaseHeightForWidth((QBoxLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// ``` QBoxLayout* self, int param1 ```
int32_t q_boxlayout_minimum_height_for_width(void* self, int param1) {
    return QBoxLayout_MinimumHeightForWidth((QBoxLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int32_t (*slot)(QBoxLayout*, int) ```
void q_boxlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QBoxLayout_OnMinimumHeightForWidth((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, int param1 ```
int32_t q_boxlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QBoxLayout_QBaseMinimumHeightForWidth((QBoxLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_expanding_directions(void* self) {
    return QBoxLayout_ExpandingDirections((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int64_t (*slot)() ```
void q_boxlayout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QBoxLayout_OnExpandingDirections((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_qbase_expanding_directions(void* self) {
    return QBoxLayout_QBaseExpandingDirections((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_invalidate(void* self) {
    QBoxLayout_Invalidate((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, void (*slot)() ```
void q_boxlayout_on_invalidate(void* self, void (*slot)()) {
    QBoxLayout_OnInvalidate((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
void q_boxlayout_qbase_invalidate(void* self) {
    QBoxLayout_QBaseInvalidate((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// ``` QBoxLayout* self, int param1 ```
QLayoutItem* q_boxlayout_item_at(void* self, int param1) {
    return QBoxLayout_ItemAt((QBoxLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, QLayoutItem* (*slot)(QBoxLayout*, int) ```
void q_boxlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QBoxLayout_OnItemAt((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, int param1 ```
QLayoutItem* q_boxlayout_qbase_item_at(void* self, int param1) {
    return QBoxLayout_QBaseItemAt((QBoxLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// ``` QBoxLayout* self, int param1 ```
QLayoutItem* q_boxlayout_take_at(void* self, int param1) {
    return QBoxLayout_TakeAt((QBoxLayout*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, QLayoutItem* (*slot)(QBoxLayout*, int) ```
void q_boxlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QBoxLayout_OnTakeAt((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, int param1 ```
QLayoutItem* q_boxlayout_qbase_take_at(void* self, int param1) {
    return QBoxLayout_QBaseTakeAt((QBoxLayout*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_count(void* self) {
    return QBoxLayout_Count((QBoxLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, int32_t (*slot)() ```
void q_boxlayout_on_count(void* self, int32_t (*slot)()) {
    QBoxLayout_OnCount((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_qbase_count(void* self) {
    return QBoxLayout_QBaseCount((QBoxLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// ``` QBoxLayout* self, QRect* geometry ```
void q_boxlayout_set_geometry(void* self, void* geometry) {
    QBoxLayout_SetGeometry((QBoxLayout*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QRect*) ```
void q_boxlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnSetGeometry((QBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxLayout* self, QRect* geometry ```
void q_boxlayout_qbase_set_geometry(void* self, void* geometry) {
    QBoxLayout_QBaseSetGeometry((QBoxLayout*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QBoxLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBoxLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QBoxLayout* self, int stretch ```
void q_boxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QBoxLayout* self, QWidget* param1, int stretch ```
void q_boxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QBoxLayout* self, QWidget* param1, int stretch, int alignment ```
void q_boxlayout_add_widget3(void* self, void* param1, int stretch, int64_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QBoxLayout* self, QLayout* layout, int stretch ```
void q_boxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QBoxLayout* self, int index, int stretch ```
void q_boxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QBoxLayout* self, int index, QWidget* widget, int stretch ```
void q_boxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment ```
void q_boxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int64_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QBoxLayout* self, int index, QLayout* layout, int stretch ```
void q_boxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QBoxLayout* self, int left, int top, int right, int bottom ```
void q_boxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QBoxLayout* self, QMargins* margins ```
void q_boxlayout_set_contents_margins_with_margins(void* self, void* margins) {
    QLayout_SetContentsMarginsWithMargins((QLayout*)self, (QMargins*)margins);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QBoxLayout* self, int* left, int* top, int* right, int* bottom ```
void q_boxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QBoxLayout* self ```
QMargins* q_boxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QBoxLayout* self ```
QRect* q_boxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QBoxLayout* self, QWidget* w, int alignment ```
bool q_boxlayout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QBoxLayout* self, QLayout* l, int alignment ```
bool q_boxlayout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QBoxLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_boxlayout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QBoxLayout* self, QWidget* w ```
void q_boxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QBoxLayout* self ```
QWidget* q_boxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QBoxLayout* self ```
QWidget* q_boxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QBoxLayout* self, QWidget* w ```
void q_boxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QBoxLayout* self, QLayoutItem* param1 ```
void q_boxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QBoxLayout* self, QLayoutItem* param1 ```
int32_t q_boxlayout_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_IndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_boxlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOfWithQLayoutItem((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// Base class method implementation
///
/// ``` QBoxLayout* self, QLayoutItem* param1 ```
int32_t q_boxlayout_qbase_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_QBaseIndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QBoxLayout* self, int w ```
int32_t q_boxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QBoxLayout* self, int w ```
int32_t q_boxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QBoxLayout* self ```
QSize* q_boxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QBoxLayout* self, bool enabled ```
void q_boxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_boxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxLayout* self ```
const char* q_boxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxLayout* self, const char* name ```
void q_boxlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxLayout* self, bool b ```
bool q_boxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxLayout* self ```
QThread* q_boxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxLayout* self, QThread* thread ```
void q_boxlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxLayout* self, int interval ```
int32_t q_boxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxLayout* self, int id ```
void q_boxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxLayout* self ```
libqt_list /* of QObject* */ q_boxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxLayout* self, QObject* parent ```
void q_boxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxLayout* self, QObject* filterObj ```
void q_boxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxLayout* self, QObject* obj ```
void q_boxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxLayout* self, const char* name, QVariant* value ```
bool q_boxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxLayout* self, const char* name ```
QVariant* q_boxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxLayout* self ```
const char** q_boxlayout_dynamic_property_names(void* self) {
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
/// ``` QBoxLayout* self ```
QBindingStorage* q_boxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxLayout* self ```
QBindingStorage* q_boxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBoxLayout* self, void (*slot)(QObject*) ```
void q_boxlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxLayout* self ```
QObject* q_boxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxLayout* self, const char* classname ```
bool q_boxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxLayout* self ```
void q_boxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxLayout* self, QObject* param1 ```
void q_boxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBoxLayout* self, void (*slot)(QObject*, QObject*) ```
void q_boxlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
QRect* q_boxlayout_geometry(void* self) {
    return QBoxLayout_Geometry((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
QRect* q_boxlayout_qbase_geometry(void* self) {
    return QBoxLayout_QBaseGeometry((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QRect* (*slot)() ```
void q_boxlayout_on_geometry(void* self, QRect* (*slot)()) {
    QBoxLayout_OnGeometry((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* param1 ```
int32_t q_boxlayout_index_of(void* self, void* param1) {
    return QBoxLayout_IndexOf((QBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* param1 ```
int32_t q_boxlayout_qbase_index_of(void* self, void* param1) {
    return QBoxLayout_QBaseIndexOf((QBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, int32_t (*slot)(QBoxLayout*, QWidget*) ```
void q_boxlayout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QBoxLayout_OnIndexOf((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_is_empty(void* self) {
    return QBoxLayout_IsEmpty((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
bool q_boxlayout_qbase_is_empty(void* self) {
    return QBoxLayout_QBaseIsEmpty((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, bool (*slot)() ```
void q_boxlayout_on_is_empty(void* self, bool (*slot)()) {
    QBoxLayout_OnIsEmpty((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_control_types(void* self) {
    return QBoxLayout_ControlTypes((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
int64_t q_boxlayout_qbase_control_types(void* self) {
    return QBoxLayout_QBaseControlTypes((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, int64_t (*slot)() ```
void q_boxlayout_on_control_types(void* self, int64_t (*slot)()) {
    QBoxLayout_OnControlTypes((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_boxlayout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QBoxLayout_ReplaceWidget((QBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_boxlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QBoxLayout_QBaseReplaceWidget((QBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QLayoutItem* (*slot)(QBoxLayout*, QWidget*, QWidget*, int) ```
void q_boxlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QBoxLayout_OnReplaceWidget((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
QLayout* q_boxlayout_layout(void* self) {
    return QBoxLayout_Layout((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
QLayout* q_boxlayout_qbase_layout(void* self) {
    return QBoxLayout_QBaseLayout((QBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QLayout* (*slot)() ```
void q_boxlayout_on_layout(void* self, QLayout* (*slot)()) {
    QBoxLayout_OnLayout((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QChildEvent* e ```
void q_boxlayout_child_event(void* self, void* e) {
    QBoxLayout_ChildEvent((QBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QChildEvent* e ```
void q_boxlayout_qbase_child_event(void* self, void* e) {
    QBoxLayout_QBaseChildEvent((QBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QChildEvent*) ```
void q_boxlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnChildEvent((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* event ```
bool q_boxlayout_event(void* self, void* event) {
    return QBoxLayout_Event((QBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* event ```
bool q_boxlayout_qbase_event(void* self, void* event) {
    return QBoxLayout_QBaseEvent((QBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, bool (*slot)(QBoxLayout*, QEvent*) ```
void q_boxlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QBoxLayout_OnEvent((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QObject* watched, QEvent* event ```
bool q_boxlayout_event_filter(void* self, void* watched, void* event) {
    return QBoxLayout_EventFilter((QBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QObject* watched, QEvent* event ```
bool q_boxlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QBoxLayout_QBaseEventFilter((QBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, bool (*slot)(QBoxLayout*, QObject*, QEvent*) ```
void q_boxlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBoxLayout_OnEventFilter((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QTimerEvent* event ```
void q_boxlayout_timer_event(void* self, void* event) {
    QBoxLayout_TimerEvent((QBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QTimerEvent* event ```
void q_boxlayout_qbase_timer_event(void* self, void* event) {
    QBoxLayout_QBaseTimerEvent((QBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QTimerEvent*) ```
void q_boxlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnTimerEvent((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* event ```
void q_boxlayout_custom_event(void* self, void* event) {
    QBoxLayout_CustomEvent((QBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* event ```
void q_boxlayout_qbase_custom_event(void* self, void* event) {
    QBoxLayout_QBaseCustomEvent((QBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QEvent*) ```
void q_boxlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnCustomEvent((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
void q_boxlayout_connect_notify(void* self, void* signal) {
    QBoxLayout_ConnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
void q_boxlayout_qbase_connect_notify(void* self, void* signal) {
    QBoxLayout_QBaseConnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QMetaMethod*) ```
void q_boxlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnConnectNotify((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
void q_boxlayout_disconnect_notify(void* self, void* signal) {
    QBoxLayout_DisconnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
void q_boxlayout_qbase_disconnect_notify(void* self, void* signal) {
    QBoxLayout_QBaseDisconnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QMetaMethod*) ```
void q_boxlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnDisconnectNotify((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
QWidget* q_boxlayout_widget(void* self) {
    return QBoxLayout_Widget((QBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
QWidget* q_boxlayout_qbase_widget(void* self) {
    return QBoxLayout_QBaseWidget((QBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* (*slot)() ```
void q_boxlayout_on_widget(void* self, QWidget* (*slot)()) {
    QBoxLayout_OnWidget((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
QSpacerItem* q_boxlayout_spacer_item(void* self) {
    return QBoxLayout_SpacerItem((QBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
QSpacerItem* q_boxlayout_qbase_spacer_item(void* self) {
    return QBoxLayout_QBaseSpacerItem((QBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QSpacerItem* (*slot)() ```
void q_boxlayout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QBoxLayout_OnSpacerItem((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* param1 ```
void q_boxlayout_widget_event(void* self, void* param1) {
    QBoxLayout_WidgetEvent((QBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QEvent* param1 ```
void q_boxlayout_qbase_widget_event(void* self, void* param1) {
    QBoxLayout_QBaseWidgetEvent((QBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QEvent*) ```
void q_boxlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnWidgetEvent((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QLayout* l ```
void q_boxlayout_add_child_layout(void* self, void* l) {
    QBoxLayout_AddChildLayout((QBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QLayout* l ```
void q_boxlayout_qbase_add_child_layout(void* self, void* l) {
    QBoxLayout_QBaseAddChildLayout((QBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QLayout*) ```
void q_boxlayout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnAddChildLayout((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* w ```
void q_boxlayout_add_child_widget(void* self, void* w) {
    QBoxLayout_AddChildWidget((QBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QWidget* w ```
void q_boxlayout_qbase_add_child_widget(void* self, void* w) {
    QBoxLayout_QBaseAddChildWidget((QBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, void (*slot)(QBoxLayout*, QWidget*) ```
void q_boxlayout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QBoxLayout_OnAddChildWidget((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QLayout* layout ```
bool q_boxlayout_adopt_layout(void* self, void* layout) {
    return QBoxLayout_AdoptLayout((QBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QLayout* layout ```
bool q_boxlayout_qbase_adopt_layout(void* self, void* layout) {
    return QBoxLayout_QBaseAdoptLayout((QBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, bool (*slot)(QBoxLayout*, QLayout*) ```
void q_boxlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QBoxLayout_OnAdoptLayout((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QRect* param1 ```
QRect* q_boxlayout_alignment_rect(void* self, void* param1) {
    return QBoxLayout_AlignmentRect((QBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QRect* param1 ```
QRect* q_boxlayout_qbase_alignment_rect(void* self, void* param1) {
    return QBoxLayout_QBaseAlignmentRect((QBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QRect* (*slot)(QBoxLayout*, QRect*) ```
void q_boxlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QBoxLayout_OnAlignmentRect((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
QObject* q_boxlayout_sender(void* self) {
    return QBoxLayout_Sender((QBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
QObject* q_boxlayout_qbase_sender(void* self) {
    return QBoxLayout_QBaseSender((QBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, QObject* (*slot)() ```
void q_boxlayout_on_sender(void* self, QObject* (*slot)()) {
    QBoxLayout_OnSender((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_sender_signal_index(void* self) {
    return QBoxLayout_SenderSignalIndex((QBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self ```
int32_t q_boxlayout_qbase_sender_signal_index(void* self) {
    return QBoxLayout_QBaseSenderSignalIndex((QBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, int32_t (*slot)() ```
void q_boxlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBoxLayout_OnSenderSignalIndex((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, const char* signal ```
int32_t q_boxlayout_receivers(void* self, const char* signal) {
    return QBoxLayout_Receivers((QBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, const char* signal ```
int32_t q_boxlayout_qbase_receivers(void* self, const char* signal) {
    return QBoxLayout_QBaseReceivers((QBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, int32_t (*slot)(QBoxLayout*, const char*) ```
void q_boxlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBoxLayout_OnReceivers((QBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
bool q_boxlayout_is_signal_connected(void* self, void* signal) {
    return QBoxLayout_IsSignalConnected((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxLayout* self, QMetaMethod* signal ```
bool q_boxlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QBoxLayout_QBaseIsSignalConnected((QBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxLayout* self, bool (*slot)(QBoxLayout*, QMetaMethod*) ```
void q_boxlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBoxLayout_OnIsSignalConnected((QBoxLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBoxLayout* self ```
void q_boxlayout_delete(void* self) {
    QBoxLayout_Delete((QBoxLayout*)(self));
}

/// https://doc.qt.io/qt-6/qhboxlayout.html

/// q_hboxlayout_new constructs a new QHBoxLayout object.
///
/// ``` QWidget* parent ```
QHBoxLayout* q_hboxlayout_new(void* parent) {
    return QHBoxLayout_new((QWidget*)parent);
}

/// q_hboxlayout_new2 constructs a new QHBoxLayout object.
///
///
QHBoxLayout* q_hboxlayout_new2() {
    return QHBoxLayout_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHBoxLayout* self ```
QMetaObject* q_hboxlayout_meta_object(void* self) {
    return QHBoxLayout_MetaObject((QHBoxLayout*)self);
}

/// ``` QHBoxLayout* self, const char* param1 ```
void* q_hboxlayout_metacast(void* self, const char* param1) {
    return QHBoxLayout_Metacast((QHBoxLayout*)self, param1);
}

/// ``` QHBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBoxLayout_Metacall((QHBoxLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHBoxLayout* self, int32_t (*slot)(QHBoxLayout*, enum QMetaObject__Call, int, void*) ```
void q_hboxlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHBoxLayout_OnMetacall((QHBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBoxLayout_QBaseMetacall((QHBoxLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hboxlayout_tr(const char* s) {
    libqt_string _str = QHBoxLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hboxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QHBoxLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hboxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHBoxLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// ``` QHBoxLayout* self, enum QBoxLayout__Direction direction ```
void q_hboxlayout_set_direction(void* self, int64_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// ``` QHBoxLayout* self, int size ```
void q_hboxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// ``` QHBoxLayout* self, QSpacerItem* spacerItem ```
void q_hboxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QHBoxLayout* self, QWidget* param1 ```
void q_hboxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QHBoxLayout* self, QLayout* layout ```
void q_hboxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// ``` QHBoxLayout* self, int param1 ```
void q_hboxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// ``` QHBoxLayout* self, int index, int size ```
void q_hboxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QHBoxLayout* self, int index ```
void q_hboxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// ``` QHBoxLayout* self, int index, QSpacerItem* spacerItem ```
void q_hboxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QHBoxLayout* self, int index, QWidget* widget ```
void q_hboxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QHBoxLayout* self, int index, QLayout* layout ```
void q_hboxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// ``` QHBoxLayout* self, int index, QLayoutItem* param2 ```
void q_hboxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QHBoxLayout* self, QWidget* w, int stretch ```
bool q_hboxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QHBoxLayout* self, QLayout* l, int stretch ```
bool q_hboxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// ``` QHBoxLayout* self, int index, int stretch ```
void q_hboxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// ``` QHBoxLayout* self, int index ```
int32_t q_hboxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QHBoxLayout* self, int stretch ```
void q_hboxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QHBoxLayout* self, QWidget* param1, int stretch ```
void q_hboxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QHBoxLayout* self, QWidget* param1, int stretch, int alignment ```
void q_hboxlayout_add_widget3(void* self, void* param1, int stretch, int64_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QHBoxLayout* self, QLayout* layout, int stretch ```
void q_hboxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QHBoxLayout* self, int index, int stretch ```
void q_hboxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QHBoxLayout* self, int index, QWidget* widget, int stretch ```
void q_hboxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QHBoxLayout* self, int index, QWidget* widget, int stretch, int alignment ```
void q_hboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int64_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QHBoxLayout* self, int index, QLayout* layout, int stretch ```
void q_hboxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QHBoxLayout* self, int left, int top, int right, int bottom ```
void q_hboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QHBoxLayout* self, QMargins* margins ```
void q_hboxlayout_set_contents_margins_with_margins(void* self, void* margins) {
    QLayout_SetContentsMarginsWithMargins((QLayout*)self, (QMargins*)margins);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QHBoxLayout* self, int* left, int* top, int* right, int* bottom ```
void q_hboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QHBoxLayout* self ```
QMargins* q_hboxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QHBoxLayout* self ```
QRect* q_hboxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QHBoxLayout* self, QWidget* w, int alignment ```
bool q_hboxlayout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QHBoxLayout* self, QLayout* l, int alignment ```
bool q_hboxlayout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QHBoxLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_hboxlayout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QHBoxLayout* self, QWidget* w ```
void q_hboxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QHBoxLayout* self ```
QWidget* q_hboxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QHBoxLayout* self ```
QWidget* q_hboxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QHBoxLayout* self, QWidget* w ```
void q_hboxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QHBoxLayout* self, QLayoutItem* param1 ```
void q_hboxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QHBoxLayout* self, QLayoutItem* param1 ```
int32_t q_hboxlayout_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_IndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_hboxlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOfWithQLayoutItem((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// Base class method implementation
///
/// ``` QHBoxLayout* self, QLayoutItem* param1 ```
int32_t q_hboxlayout_qbase_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_QBaseIndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QHBoxLayout* self, int w ```
int32_t q_hboxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QHBoxLayout* self, int w ```
int32_t q_hboxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QHBoxLayout* self, bool enabled ```
void q_hboxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_hboxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHBoxLayout* self ```
const char* q_hboxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHBoxLayout* self, const char* name ```
void q_hboxlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHBoxLayout* self, bool b ```
bool q_hboxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHBoxLayout* self ```
QThread* q_hboxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBoxLayout* self, QThread* thread ```
void q_hboxlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxLayout* self, int interval ```
int32_t q_hboxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBoxLayout* self, int id ```
void q_hboxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHBoxLayout* self ```
libqt_list /* of QObject* */ q_hboxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHBoxLayout* self, QObject* parent ```
void q_hboxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHBoxLayout* self, QObject* filterObj ```
void q_hboxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHBoxLayout* self, QObject* obj ```
void q_hboxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hboxlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hboxlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hboxlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hboxlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHBoxLayout* self, const char* name, QVariant* value ```
bool q_hboxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHBoxLayout* self, const char* name ```
QVariant* q_hboxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHBoxLayout* self ```
const char** q_hboxlayout_dynamic_property_names(void* self) {
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
/// ``` QHBoxLayout* self ```
QBindingStorage* q_hboxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBoxLayout* self ```
QBindingStorage* q_hboxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHBoxLayout* self, void (*slot)(QObject*) ```
void q_hboxlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHBoxLayout* self ```
QObject* q_hboxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHBoxLayout* self, const char* classname ```
bool q_hboxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hboxlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxLayout* self, QObject* param1 ```
void q_hboxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHBoxLayout* self, void (*slot)(QObject*, QObject*) ```
void q_hboxlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QLayoutItem* param1 ```
void q_hboxlayout_add_item(void* self, void* param1) {
    QHBoxLayout_AddItem((QHBoxLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayoutItem* param1 ```
void q_hboxlayout_qbase_add_item(void* self, void* param1) {
    QHBoxLayout_QBaseAddItem((QHBoxLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QLayoutItem*) ```
void q_hboxlayout_on_add_item(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnAddItem((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_spacing(void* self) {
    return QHBoxLayout_Spacing((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_qbase_spacing(void* self) {
    return QHBoxLayout_QBaseSpacing((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)() ```
void q_hboxlayout_on_spacing(void* self, int32_t (*slot)()) {
    QHBoxLayout_OnSpacing((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, int spacing ```
void q_hboxlayout_set_spacing(void* self, int spacing) {
    QHBoxLayout_SetSpacing((QHBoxLayout*)self, spacing);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, int spacing ```
void q_hboxlayout_qbase_set_spacing(void* self, int spacing) {
    QHBoxLayout_QBaseSetSpacing((QHBoxLayout*)self, spacing);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, int) ```
void q_hboxlayout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QHBoxLayout_OnSetSpacing((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_size_hint(void* self) {
    return QHBoxLayout_SizeHint((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_qbase_size_hint(void* self) {
    return QHBoxLayout_QBaseSizeHint((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QSize* (*slot)() ```
void q_hboxlayout_on_size_hint(void* self, QSize* (*slot)()) {
    QHBoxLayout_OnSizeHint((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_minimum_size(void* self) {
    return QHBoxLayout_MinimumSize((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_qbase_minimum_size(void* self) {
    return QHBoxLayout_QBaseMinimumSize((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QSize* (*slot)() ```
void q_hboxlayout_on_minimum_size(void* self, QSize* (*slot)()) {
    QHBoxLayout_OnMinimumSize((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_maximum_size(void* self) {
    return QHBoxLayout_MaximumSize((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSize* q_hboxlayout_qbase_maximum_size(void* self) {
    return QHBoxLayout_QBaseMaximumSize((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QSize* (*slot)() ```
void q_hboxlayout_on_maximum_size(void* self, QSize* (*slot)()) {
    QHBoxLayout_OnMaximumSize((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_has_height_for_width(void* self) {
    return QHBoxLayout_HasHeightForWidth((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_qbase_has_height_for_width(void* self) {
    return QHBoxLayout_QBaseHasHeightForWidth((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)() ```
void q_hboxlayout_on_has_height_for_width(void* self, bool (*slot)()) {
    QHBoxLayout_OnHasHeightForWidth((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
int32_t q_hboxlayout_height_for_width(void* self, int param1) {
    return QHBoxLayout_HeightForWidth((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
int32_t q_hboxlayout_qbase_height_for_width(void* self, int param1) {
    return QHBoxLayout_QBaseHeightForWidth((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)(QHBoxLayout*, int) ```
void q_hboxlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QHBoxLayout_OnHeightForWidth((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
int32_t q_hboxlayout_minimum_height_for_width(void* self, int param1) {
    return QHBoxLayout_MinimumHeightForWidth((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
int32_t q_hboxlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QHBoxLayout_QBaseMinimumHeightForWidth((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)(QHBoxLayout*, int) ```
void q_hboxlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QHBoxLayout_OnMinimumHeightForWidth((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_expanding_directions(void* self) {
    return QHBoxLayout_ExpandingDirections((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_qbase_expanding_directions(void* self) {
    return QHBoxLayout_QBaseExpandingDirections((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int64_t (*slot)() ```
void q_hboxlayout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QHBoxLayout_OnExpandingDirections((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_invalidate(void* self) {
    QHBoxLayout_Invalidate((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_qbase_invalidate(void* self) {
    QHBoxLayout_QBaseInvalidate((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)() ```
void q_hboxlayout_on_invalidate(void* self, void (*slot)()) {
    QHBoxLayout_OnInvalidate((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
QLayoutItem* q_hboxlayout_item_at(void* self, int param1) {
    return QHBoxLayout_ItemAt((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
QLayoutItem* q_hboxlayout_qbase_item_at(void* self, int param1) {
    return QHBoxLayout_QBaseItemAt((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayoutItem* (*slot)(QHBoxLayout*, int) ```
void q_hboxlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QHBoxLayout_OnItemAt((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
QLayoutItem* q_hboxlayout_take_at(void* self, int param1) {
    return QHBoxLayout_TakeAt((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, int param1 ```
QLayoutItem* q_hboxlayout_qbase_take_at(void* self, int param1) {
    return QHBoxLayout_QBaseTakeAt((QHBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayoutItem* (*slot)(QHBoxLayout*, int) ```
void q_hboxlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QHBoxLayout_OnTakeAt((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_count(void* self) {
    return QHBoxLayout_Count((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_qbase_count(void* self) {
    return QHBoxLayout_QBaseCount((QHBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)() ```
void q_hboxlayout_on_count(void* self, int32_t (*slot)()) {
    QHBoxLayout_OnCount((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* geometry ```
void q_hboxlayout_set_geometry(void* self, void* geometry) {
    QHBoxLayout_SetGeometry((QHBoxLayout*)self, (QRect*)geometry);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* geometry ```
void q_hboxlayout_qbase_set_geometry(void* self, void* geometry) {
    QHBoxLayout_QBaseSetGeometry((QHBoxLayout*)self, (QRect*)geometry);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QRect*) ```
void q_hboxlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnSetGeometry((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QRect* q_hboxlayout_geometry(void* self) {
    return QHBoxLayout_Geometry((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QRect* q_hboxlayout_qbase_geometry(void* self) {
    return QHBoxLayout_QBaseGeometry((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* (*slot)() ```
void q_hboxlayout_on_geometry(void* self, QRect* (*slot)()) {
    QHBoxLayout_OnGeometry((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* param1 ```
int32_t q_hboxlayout_index_of(void* self, void* param1) {
    return QHBoxLayout_IndexOf((QHBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* param1 ```
int32_t q_hboxlayout_qbase_index_of(void* self, void* param1) {
    return QHBoxLayout_QBaseIndexOf((QHBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)(QHBoxLayout*, QWidget*) ```
void q_hboxlayout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QHBoxLayout_OnIndexOf((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_is_empty(void* self) {
    return QHBoxLayout_IsEmpty((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
bool q_hboxlayout_qbase_is_empty(void* self) {
    return QHBoxLayout_QBaseIsEmpty((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)() ```
void q_hboxlayout_on_is_empty(void* self, bool (*slot)()) {
    QHBoxLayout_OnIsEmpty((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_control_types(void* self) {
    return QHBoxLayout_ControlTypes((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
int64_t q_hboxlayout_qbase_control_types(void* self) {
    return QHBoxLayout_QBaseControlTypes((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int64_t (*slot)() ```
void q_hboxlayout_on_control_types(void* self, int64_t (*slot)()) {
    QHBoxLayout_OnControlTypes((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_hboxlayout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QHBoxLayout_ReplaceWidget((QHBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_hboxlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QHBoxLayout_QBaseReplaceWidget((QHBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayoutItem* (*slot)(QHBoxLayout*, QWidget*, QWidget*, int) ```
void q_hboxlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QHBoxLayout_OnReplaceWidget((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QLayout* q_hboxlayout_layout(void* self) {
    return QHBoxLayout_Layout((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QLayout* q_hboxlayout_qbase_layout(void* self) {
    return QHBoxLayout_QBaseLayout((QHBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayout* (*slot)() ```
void q_hboxlayout_on_layout(void* self, QLayout* (*slot)()) {
    QHBoxLayout_OnLayout((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QChildEvent* e ```
void q_hboxlayout_child_event(void* self, void* e) {
    QHBoxLayout_ChildEvent((QHBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QChildEvent* e ```
void q_hboxlayout_qbase_child_event(void* self, void* e) {
    QHBoxLayout_QBaseChildEvent((QHBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QChildEvent*) ```
void q_hboxlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnChildEvent((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* event ```
bool q_hboxlayout_event(void* self, void* event) {
    return QHBoxLayout_Event((QHBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* event ```
bool q_hboxlayout_qbase_event(void* self, void* event) {
    return QHBoxLayout_QBaseEvent((QHBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)(QHBoxLayout*, QEvent*) ```
void q_hboxlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QHBoxLayout_OnEvent((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QObject* watched, QEvent* event ```
bool q_hboxlayout_event_filter(void* self, void* watched, void* event) {
    return QHBoxLayout_EventFilter((QHBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QObject* watched, QEvent* event ```
bool q_hboxlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QHBoxLayout_QBaseEventFilter((QHBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)(QHBoxLayout*, QObject*, QEvent*) ```
void q_hboxlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHBoxLayout_OnEventFilter((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QTimerEvent* event ```
void q_hboxlayout_timer_event(void* self, void* event) {
    QHBoxLayout_TimerEvent((QHBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QTimerEvent* event ```
void q_hboxlayout_qbase_timer_event(void* self, void* event) {
    QHBoxLayout_QBaseTimerEvent((QHBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QTimerEvent*) ```
void q_hboxlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnTimerEvent((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* event ```
void q_hboxlayout_custom_event(void* self, void* event) {
    QHBoxLayout_CustomEvent((QHBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* event ```
void q_hboxlayout_qbase_custom_event(void* self, void* event) {
    QHBoxLayout_QBaseCustomEvent((QHBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QEvent*) ```
void q_hboxlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnCustomEvent((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
void q_hboxlayout_connect_notify(void* self, void* signal) {
    QHBoxLayout_ConnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
void q_hboxlayout_qbase_connect_notify(void* self, void* signal) {
    QHBoxLayout_QBaseConnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QMetaMethod*) ```
void q_hboxlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnConnectNotify((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
void q_hboxlayout_disconnect_notify(void* self, void* signal) {
    QHBoxLayout_DisconnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
void q_hboxlayout_qbase_disconnect_notify(void* self, void* signal) {
    QHBoxLayout_QBaseDisconnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QMetaMethod*) ```
void q_hboxlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnDisconnectNotify((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QWidget* q_hboxlayout_widget(void* self) {
    return QHBoxLayout_Widget((QHBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QWidget* q_hboxlayout_qbase_widget(void* self) {
    return QHBoxLayout_QBaseWidget((QHBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* (*slot)() ```
void q_hboxlayout_on_widget(void* self, QWidget* (*slot)()) {
    QHBoxLayout_OnWidget((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSpacerItem* q_hboxlayout_spacer_item(void* self) {
    return QHBoxLayout_SpacerItem((QHBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QSpacerItem* q_hboxlayout_qbase_spacer_item(void* self) {
    return QHBoxLayout_QBaseSpacerItem((QHBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QSpacerItem* (*slot)() ```
void q_hboxlayout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QHBoxLayout_OnSpacerItem((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* param1 ```
void q_hboxlayout_widget_event(void* self, void* param1) {
    QHBoxLayout_WidgetEvent((QHBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QEvent* param1 ```
void q_hboxlayout_qbase_widget_event(void* self, void* param1) {
    QHBoxLayout_QBaseWidgetEvent((QHBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QEvent*) ```
void q_hboxlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnWidgetEvent((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QLayout* l ```
void q_hboxlayout_add_child_layout(void* self, void* l) {
    QHBoxLayout_AddChildLayout((QHBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayout* l ```
void q_hboxlayout_qbase_add_child_layout(void* self, void* l) {
    QHBoxLayout_QBaseAddChildLayout((QHBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QLayout*) ```
void q_hboxlayout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnAddChildLayout((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* w ```
void q_hboxlayout_add_child_widget(void* self, void* w) {
    QHBoxLayout_AddChildWidget((QHBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QWidget* w ```
void q_hboxlayout_qbase_add_child_widget(void* self, void* w) {
    QHBoxLayout_QBaseAddChildWidget((QHBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, void (*slot)(QHBoxLayout*, QWidget*) ```
void q_hboxlayout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QHBoxLayout_OnAddChildWidget((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QLayout* layout ```
bool q_hboxlayout_adopt_layout(void* self, void* layout) {
    return QHBoxLayout_AdoptLayout((QHBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QLayout* layout ```
bool q_hboxlayout_qbase_adopt_layout(void* self, void* layout) {
    return QHBoxLayout_QBaseAdoptLayout((QHBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)(QHBoxLayout*, QLayout*) ```
void q_hboxlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QHBoxLayout_OnAdoptLayout((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* param1 ```
QRect* q_hboxlayout_alignment_rect(void* self, void* param1) {
    return QHBoxLayout_AlignmentRect((QHBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* param1 ```
QRect* q_hboxlayout_qbase_alignment_rect(void* self, void* param1) {
    return QHBoxLayout_QBaseAlignmentRect((QHBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QRect* (*slot)(QHBoxLayout*, QRect*) ```
void q_hboxlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QHBoxLayout_OnAlignmentRect((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
QObject* q_hboxlayout_sender(void* self) {
    return QHBoxLayout_Sender((QHBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
QObject* q_hboxlayout_qbase_sender(void* self) {
    return QHBoxLayout_QBaseSender((QHBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, QObject* (*slot)() ```
void q_hboxlayout_on_sender(void* self, QObject* (*slot)()) {
    QHBoxLayout_OnSender((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_sender_signal_index(void* self) {
    return QHBoxLayout_SenderSignalIndex((QHBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self ```
int32_t q_hboxlayout_qbase_sender_signal_index(void* self) {
    return QHBoxLayout_QBaseSenderSignalIndex((QHBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)() ```
void q_hboxlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHBoxLayout_OnSenderSignalIndex((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, const char* signal ```
int32_t q_hboxlayout_receivers(void* self, const char* signal) {
    return QHBoxLayout_Receivers((QHBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, const char* signal ```
int32_t q_hboxlayout_qbase_receivers(void* self, const char* signal) {
    return QHBoxLayout_QBaseReceivers((QHBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, int32_t (*slot)(QHBoxLayout*, const char*) ```
void q_hboxlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHBoxLayout_OnReceivers((QHBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
bool q_hboxlayout_is_signal_connected(void* self, void* signal) {
    return QHBoxLayout_IsSignalConnected((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxLayout* self, QMetaMethod* signal ```
bool q_hboxlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QHBoxLayout_QBaseIsSignalConnected((QHBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxLayout* self, bool (*slot)(QHBoxLayout*, QMetaMethod*) ```
void q_hboxlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHBoxLayout_OnIsSignalConnected((QHBoxLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHBoxLayout* self ```
void q_hboxlayout_delete(void* self) {
    QHBoxLayout_Delete((QHBoxLayout*)(self));
}

/// https://doc.qt.io/qt-6/qvboxlayout.html

/// q_vboxlayout_new constructs a new QVBoxLayout object.
///
/// ``` QWidget* parent ```
QVBoxLayout* q_vboxlayout_new(void* parent) {
    return QVBoxLayout_new((QWidget*)parent);
}

/// q_vboxlayout_new2 constructs a new QVBoxLayout object.
///
///
QVBoxLayout* q_vboxlayout_new2() {
    return QVBoxLayout_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVBoxLayout* self ```
QMetaObject* q_vboxlayout_meta_object(void* self) {
    return QVBoxLayout_MetaObject((QVBoxLayout*)self);
}

/// ``` QVBoxLayout* self, const char* param1 ```
void* q_vboxlayout_metacast(void* self, const char* param1) {
    return QVBoxLayout_Metacast((QVBoxLayout*)self, param1);
}

/// ``` QVBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxLayout_Metacall((QVBoxLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVBoxLayout* self, int32_t (*slot)(QVBoxLayout*, enum QMetaObject__Call, int, void*) ```
void q_vboxlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVBoxLayout_OnMetacall((QVBoxLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxLayout_QBaseMetacall((QVBoxLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vboxlayout_tr(const char* s) {
    libqt_string _str = QVBoxLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vboxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QVBoxLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vboxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVBoxLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// ``` QVBoxLayout* self, enum QBoxLayout__Direction direction ```
void q_vboxlayout_set_direction(void* self, int64_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// ``` QVBoxLayout* self, int size ```
void q_vboxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// ``` QVBoxLayout* self, QSpacerItem* spacerItem ```
void q_vboxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QVBoxLayout* self, QWidget* param1 ```
void q_vboxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QVBoxLayout* self, QLayout* layout ```
void q_vboxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// ``` QVBoxLayout* self, int param1 ```
void q_vboxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// ``` QVBoxLayout* self, int index, int size ```
void q_vboxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QVBoxLayout* self, int index ```
void q_vboxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// ``` QVBoxLayout* self, int index, QSpacerItem* spacerItem ```
void q_vboxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QVBoxLayout* self, int index, QWidget* widget ```
void q_vboxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QVBoxLayout* self, int index, QLayout* layout ```
void q_vboxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// ``` QVBoxLayout* self, int index, QLayoutItem* param2 ```
void q_vboxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QVBoxLayout* self, QWidget* w, int stretch ```
bool q_vboxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// ``` QVBoxLayout* self, QLayout* l, int stretch ```
bool q_vboxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// ``` QVBoxLayout* self, int index, int stretch ```
void q_vboxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// ``` QVBoxLayout* self, int index ```
int32_t q_vboxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// ``` QVBoxLayout* self, int stretch ```
void q_vboxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QVBoxLayout* self, QWidget* param1, int stretch ```
void q_vboxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// ``` QVBoxLayout* self, QWidget* param1, int stretch, int alignment ```
void q_vboxlayout_add_widget3(void* self, void* param1, int stretch, int64_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// ``` QVBoxLayout* self, QLayout* layout, int stretch ```
void q_vboxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// ``` QVBoxLayout* self, int index, int stretch ```
void q_vboxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QVBoxLayout* self, int index, QWidget* widget, int stretch ```
void q_vboxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// ``` QVBoxLayout* self, int index, QWidget* widget, int stretch, int alignment ```
void q_vboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int64_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// ``` QVBoxLayout* self, int index, QLayout* layout, int stretch ```
void q_vboxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QVBoxLayout* self, int left, int top, int right, int bottom ```
void q_vboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QVBoxLayout* self, QMargins* margins ```
void q_vboxlayout_set_contents_margins_with_margins(void* self, void* margins) {
    QLayout_SetContentsMarginsWithMargins((QLayout*)self, (QMargins*)margins);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QVBoxLayout* self, int* left, int* top, int* right, int* bottom ```
void q_vboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QVBoxLayout* self ```
QMargins* q_vboxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QVBoxLayout* self ```
QRect* q_vboxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QVBoxLayout* self, QWidget* w, int alignment ```
bool q_vboxlayout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QVBoxLayout* self, QLayout* l, int alignment ```
bool q_vboxlayout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QVBoxLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_vboxlayout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QVBoxLayout* self, QWidget* w ```
void q_vboxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QVBoxLayout* self ```
QWidget* q_vboxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QVBoxLayout* self ```
QWidget* q_vboxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QVBoxLayout* self, QWidget* w ```
void q_vboxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QVBoxLayout* self, QLayoutItem* param1 ```
void q_vboxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QVBoxLayout* self, QLayoutItem* param1 ```
int32_t q_vboxlayout_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_IndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_vboxlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOfWithQLayoutItem((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// Base class method implementation
///
/// ``` QVBoxLayout* self, QLayoutItem* param1 ```
int32_t q_vboxlayout_qbase_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_QBaseIndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QVBoxLayout* self, int w ```
int32_t q_vboxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QVBoxLayout* self, int w ```
int32_t q_vboxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QVBoxLayout* self, bool enabled ```
void q_vboxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_vboxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVBoxLayout* self ```
const char* q_vboxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVBoxLayout* self, const char* name ```
void q_vboxlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVBoxLayout* self, bool b ```
bool q_vboxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVBoxLayout* self ```
QThread* q_vboxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVBoxLayout* self, QThread* thread ```
void q_vboxlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxLayout* self, int interval ```
int32_t q_vboxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVBoxLayout* self, int id ```
void q_vboxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVBoxLayout* self ```
libqt_list /* of QObject* */ q_vboxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVBoxLayout* self, QObject* parent ```
void q_vboxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVBoxLayout* self, QObject* filterObj ```
void q_vboxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVBoxLayout* self, QObject* obj ```
void q_vboxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vboxlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vboxlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vboxlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vboxlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVBoxLayout* self, const char* name, QVariant* value ```
bool q_vboxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVBoxLayout* self, const char* name ```
QVariant* q_vboxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVBoxLayout* self ```
const char** q_vboxlayout_dynamic_property_names(void* self) {
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
/// ``` QVBoxLayout* self ```
QBindingStorage* q_vboxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBoxLayout* self ```
QBindingStorage* q_vboxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVBoxLayout* self, void (*slot)(QObject*) ```
void q_vboxlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVBoxLayout* self ```
QObject* q_vboxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVBoxLayout* self, const char* classname ```
bool q_vboxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vboxlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxLayout* self, QObject* param1 ```
void q_vboxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVBoxLayout* self, void (*slot)(QObject*, QObject*) ```
void q_vboxlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QLayoutItem* param1 ```
void q_vboxlayout_add_item(void* self, void* param1) {
    QVBoxLayout_AddItem((QVBoxLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayoutItem* param1 ```
void q_vboxlayout_qbase_add_item(void* self, void* param1) {
    QVBoxLayout_QBaseAddItem((QVBoxLayout*)self, (QLayoutItem*)param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QLayoutItem*) ```
void q_vboxlayout_on_add_item(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnAddItem((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_spacing(void* self) {
    return QVBoxLayout_Spacing((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_qbase_spacing(void* self) {
    return QVBoxLayout_QBaseSpacing((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)() ```
void q_vboxlayout_on_spacing(void* self, int32_t (*slot)()) {
    QVBoxLayout_OnSpacing((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, int spacing ```
void q_vboxlayout_set_spacing(void* self, int spacing) {
    QVBoxLayout_SetSpacing((QVBoxLayout*)self, spacing);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, int spacing ```
void q_vboxlayout_qbase_set_spacing(void* self, int spacing) {
    QVBoxLayout_QBaseSetSpacing((QVBoxLayout*)self, spacing);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, int) ```
void q_vboxlayout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QVBoxLayout_OnSetSpacing((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_size_hint(void* self) {
    return QVBoxLayout_SizeHint((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_qbase_size_hint(void* self) {
    return QVBoxLayout_QBaseSizeHint((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QSize* (*slot)() ```
void q_vboxlayout_on_size_hint(void* self, QSize* (*slot)()) {
    QVBoxLayout_OnSizeHint((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_minimum_size(void* self) {
    return QVBoxLayout_MinimumSize((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_qbase_minimum_size(void* self) {
    return QVBoxLayout_QBaseMinimumSize((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QSize* (*slot)() ```
void q_vboxlayout_on_minimum_size(void* self, QSize* (*slot)()) {
    QVBoxLayout_OnMinimumSize((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_maximum_size(void* self) {
    return QVBoxLayout_MaximumSize((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSize* q_vboxlayout_qbase_maximum_size(void* self) {
    return QVBoxLayout_QBaseMaximumSize((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QSize* (*slot)() ```
void q_vboxlayout_on_maximum_size(void* self, QSize* (*slot)()) {
    QVBoxLayout_OnMaximumSize((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_has_height_for_width(void* self) {
    return QVBoxLayout_HasHeightForWidth((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_qbase_has_height_for_width(void* self) {
    return QVBoxLayout_QBaseHasHeightForWidth((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)() ```
void q_vboxlayout_on_has_height_for_width(void* self, bool (*slot)()) {
    QVBoxLayout_OnHasHeightForWidth((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
int32_t q_vboxlayout_height_for_width(void* self, int param1) {
    return QVBoxLayout_HeightForWidth((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
int32_t q_vboxlayout_qbase_height_for_width(void* self, int param1) {
    return QVBoxLayout_QBaseHeightForWidth((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)(QVBoxLayout*, int) ```
void q_vboxlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QVBoxLayout_OnHeightForWidth((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
int32_t q_vboxlayout_minimum_height_for_width(void* self, int param1) {
    return QVBoxLayout_MinimumHeightForWidth((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
int32_t q_vboxlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QVBoxLayout_QBaseMinimumHeightForWidth((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)(QVBoxLayout*, int) ```
void q_vboxlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QVBoxLayout_OnMinimumHeightForWidth((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_expanding_directions(void* self) {
    return QVBoxLayout_ExpandingDirections((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_qbase_expanding_directions(void* self) {
    return QVBoxLayout_QBaseExpandingDirections((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int64_t (*slot)() ```
void q_vboxlayout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QVBoxLayout_OnExpandingDirections((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_invalidate(void* self) {
    QVBoxLayout_Invalidate((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_qbase_invalidate(void* self) {
    QVBoxLayout_QBaseInvalidate((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)() ```
void q_vboxlayout_on_invalidate(void* self, void (*slot)()) {
    QVBoxLayout_OnInvalidate((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
QLayoutItem* q_vboxlayout_item_at(void* self, int param1) {
    return QVBoxLayout_ItemAt((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
QLayoutItem* q_vboxlayout_qbase_item_at(void* self, int param1) {
    return QVBoxLayout_QBaseItemAt((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayoutItem* (*slot)(QVBoxLayout*, int) ```
void q_vboxlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QVBoxLayout_OnItemAt((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
QLayoutItem* q_vboxlayout_take_at(void* self, int param1) {
    return QVBoxLayout_TakeAt((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, int param1 ```
QLayoutItem* q_vboxlayout_qbase_take_at(void* self, int param1) {
    return QVBoxLayout_QBaseTakeAt((QVBoxLayout*)self, param1);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayoutItem* (*slot)(QVBoxLayout*, int) ```
void q_vboxlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QVBoxLayout_OnTakeAt((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_count(void* self) {
    return QVBoxLayout_Count((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_qbase_count(void* self) {
    return QVBoxLayout_QBaseCount((QVBoxLayout*)self);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)() ```
void q_vboxlayout_on_count(void* self, int32_t (*slot)()) {
    QVBoxLayout_OnCount((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QBoxLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* geometry ```
void q_vboxlayout_set_geometry(void* self, void* geometry) {
    QVBoxLayout_SetGeometry((QVBoxLayout*)self, (QRect*)geometry);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* geometry ```
void q_vboxlayout_qbase_set_geometry(void* self, void* geometry) {
    QVBoxLayout_QBaseSetGeometry((QVBoxLayout*)self, (QRect*)geometry);
}

/// Inherited from QBoxLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QRect*) ```
void q_vboxlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnSetGeometry((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QRect* q_vboxlayout_geometry(void* self) {
    return QVBoxLayout_Geometry((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QRect* q_vboxlayout_qbase_geometry(void* self) {
    return QVBoxLayout_QBaseGeometry((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* (*slot)() ```
void q_vboxlayout_on_geometry(void* self, QRect* (*slot)()) {
    QVBoxLayout_OnGeometry((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* param1 ```
int32_t q_vboxlayout_index_of(void* self, void* param1) {
    return QVBoxLayout_IndexOf((QVBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* param1 ```
int32_t q_vboxlayout_qbase_index_of(void* self, void* param1) {
    return QVBoxLayout_QBaseIndexOf((QVBoxLayout*)self, (QWidget*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)(QVBoxLayout*, QWidget*) ```
void q_vboxlayout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QVBoxLayout_OnIndexOf((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_is_empty(void* self) {
    return QVBoxLayout_IsEmpty((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
bool q_vboxlayout_qbase_is_empty(void* self) {
    return QVBoxLayout_QBaseIsEmpty((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)() ```
void q_vboxlayout_on_is_empty(void* self, bool (*slot)()) {
    QVBoxLayout_OnIsEmpty((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_control_types(void* self) {
    return QVBoxLayout_ControlTypes((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
int64_t q_vboxlayout_qbase_control_types(void* self) {
    return QVBoxLayout_QBaseControlTypes((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int64_t (*slot)() ```
void q_vboxlayout_on_control_types(void* self, int64_t (*slot)()) {
    QVBoxLayout_OnControlTypes((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_vboxlayout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QVBoxLayout_ReplaceWidget((QVBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_vboxlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QVBoxLayout_QBaseReplaceWidget((QVBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayoutItem* (*slot)(QVBoxLayout*, QWidget*, QWidget*, int) ```
void q_vboxlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QVBoxLayout_OnReplaceWidget((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QLayout* q_vboxlayout_layout(void* self) {
    return QVBoxLayout_Layout((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QLayout* q_vboxlayout_qbase_layout(void* self) {
    return QVBoxLayout_QBaseLayout((QVBoxLayout*)self);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayout* (*slot)() ```
void q_vboxlayout_on_layout(void* self, QLayout* (*slot)()) {
    QVBoxLayout_OnLayout((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QChildEvent* e ```
void q_vboxlayout_child_event(void* self, void* e) {
    QVBoxLayout_ChildEvent((QVBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QChildEvent* e ```
void q_vboxlayout_qbase_child_event(void* self, void* e) {
    QVBoxLayout_QBaseChildEvent((QVBoxLayout*)self, (QChildEvent*)e);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QChildEvent*) ```
void q_vboxlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnChildEvent((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* event ```
bool q_vboxlayout_event(void* self, void* event) {
    return QVBoxLayout_Event((QVBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* event ```
bool q_vboxlayout_qbase_event(void* self, void* event) {
    return QVBoxLayout_QBaseEvent((QVBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)(QVBoxLayout*, QEvent*) ```
void q_vboxlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QVBoxLayout_OnEvent((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QObject* watched, QEvent* event ```
bool q_vboxlayout_event_filter(void* self, void* watched, void* event) {
    return QVBoxLayout_EventFilter((QVBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QObject* watched, QEvent* event ```
bool q_vboxlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QVBoxLayout_QBaseEventFilter((QVBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)(QVBoxLayout*, QObject*, QEvent*) ```
void q_vboxlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVBoxLayout_OnEventFilter((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QTimerEvent* event ```
void q_vboxlayout_timer_event(void* self, void* event) {
    QVBoxLayout_TimerEvent((QVBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QTimerEvent* event ```
void q_vboxlayout_qbase_timer_event(void* self, void* event) {
    QVBoxLayout_QBaseTimerEvent((QVBoxLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QTimerEvent*) ```
void q_vboxlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnTimerEvent((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* event ```
void q_vboxlayout_custom_event(void* self, void* event) {
    QVBoxLayout_CustomEvent((QVBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* event ```
void q_vboxlayout_qbase_custom_event(void* self, void* event) {
    QVBoxLayout_QBaseCustomEvent((QVBoxLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QEvent*) ```
void q_vboxlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnCustomEvent((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
void q_vboxlayout_connect_notify(void* self, void* signal) {
    QVBoxLayout_ConnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
void q_vboxlayout_qbase_connect_notify(void* self, void* signal) {
    QVBoxLayout_QBaseConnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QMetaMethod*) ```
void q_vboxlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnConnectNotify((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
void q_vboxlayout_disconnect_notify(void* self, void* signal) {
    QVBoxLayout_DisconnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
void q_vboxlayout_qbase_disconnect_notify(void* self, void* signal) {
    QVBoxLayout_QBaseDisconnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QMetaMethod*) ```
void q_vboxlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnDisconnectNotify((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QWidget* q_vboxlayout_widget(void* self) {
    return QVBoxLayout_Widget((QVBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QWidget* q_vboxlayout_qbase_widget(void* self) {
    return QVBoxLayout_QBaseWidget((QVBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* (*slot)() ```
void q_vboxlayout_on_widget(void* self, QWidget* (*slot)()) {
    QVBoxLayout_OnWidget((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSpacerItem* q_vboxlayout_spacer_item(void* self) {
    return QVBoxLayout_SpacerItem((QVBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QSpacerItem* q_vboxlayout_qbase_spacer_item(void* self) {
    return QVBoxLayout_QBaseSpacerItem((QVBoxLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QSpacerItem* (*slot)() ```
void q_vboxlayout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QVBoxLayout_OnSpacerItem((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* param1 ```
void q_vboxlayout_widget_event(void* self, void* param1) {
    QVBoxLayout_WidgetEvent((QVBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QEvent* param1 ```
void q_vboxlayout_qbase_widget_event(void* self, void* param1) {
    QVBoxLayout_QBaseWidgetEvent((QVBoxLayout*)self, (QEvent*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QEvent*) ```
void q_vboxlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnWidgetEvent((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QLayout* l ```
void q_vboxlayout_add_child_layout(void* self, void* l) {
    QVBoxLayout_AddChildLayout((QVBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayout* l ```
void q_vboxlayout_qbase_add_child_layout(void* self, void* l) {
    QVBoxLayout_QBaseAddChildLayout((QVBoxLayout*)self, (QLayout*)l);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QLayout*) ```
void q_vboxlayout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnAddChildLayout((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* w ```
void q_vboxlayout_add_child_widget(void* self, void* w) {
    QVBoxLayout_AddChildWidget((QVBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QWidget* w ```
void q_vboxlayout_qbase_add_child_widget(void* self, void* w) {
    QVBoxLayout_QBaseAddChildWidget((QVBoxLayout*)self, (QWidget*)w);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, void (*slot)(QVBoxLayout*, QWidget*) ```
void q_vboxlayout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QVBoxLayout_OnAddChildWidget((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QLayout* layout ```
bool q_vboxlayout_adopt_layout(void* self, void* layout) {
    return QVBoxLayout_AdoptLayout((QVBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QLayout* layout ```
bool q_vboxlayout_qbase_adopt_layout(void* self, void* layout) {
    return QVBoxLayout_QBaseAdoptLayout((QVBoxLayout*)self, (QLayout*)layout);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)(QVBoxLayout*, QLayout*) ```
void q_vboxlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QVBoxLayout_OnAdoptLayout((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* param1 ```
QRect* q_vboxlayout_alignment_rect(void* self, void* param1) {
    return QVBoxLayout_AlignmentRect((QVBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* param1 ```
QRect* q_vboxlayout_qbase_alignment_rect(void* self, void* param1) {
    return QVBoxLayout_QBaseAlignmentRect((QVBoxLayout*)self, (QRect*)param1);
}

/// Inherited from QLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QRect* (*slot)(QVBoxLayout*, QRect*) ```
void q_vboxlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QVBoxLayout_OnAlignmentRect((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
QObject* q_vboxlayout_sender(void* self) {
    return QVBoxLayout_Sender((QVBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
QObject* q_vboxlayout_qbase_sender(void* self) {
    return QVBoxLayout_QBaseSender((QVBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, QObject* (*slot)() ```
void q_vboxlayout_on_sender(void* self, QObject* (*slot)()) {
    QVBoxLayout_OnSender((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_sender_signal_index(void* self) {
    return QVBoxLayout_SenderSignalIndex((QVBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self ```
int32_t q_vboxlayout_qbase_sender_signal_index(void* self) {
    return QVBoxLayout_QBaseSenderSignalIndex((QVBoxLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)() ```
void q_vboxlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVBoxLayout_OnSenderSignalIndex((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, const char* signal ```
int32_t q_vboxlayout_receivers(void* self, const char* signal) {
    return QVBoxLayout_Receivers((QVBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, const char* signal ```
int32_t q_vboxlayout_qbase_receivers(void* self, const char* signal) {
    return QVBoxLayout_QBaseReceivers((QVBoxLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, int32_t (*slot)(QVBoxLayout*, const char*) ```
void q_vboxlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVBoxLayout_OnReceivers((QVBoxLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
bool q_vboxlayout_is_signal_connected(void* self, void* signal) {
    return QVBoxLayout_IsSignalConnected((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxLayout* self, QMetaMethod* signal ```
bool q_vboxlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QVBoxLayout_QBaseIsSignalConnected((QVBoxLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxLayout* self, bool (*slot)(QVBoxLayout*, QMetaMethod*) ```
void q_vboxlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVBoxLayout_OnIsSignalConnected((QVBoxLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVBoxLayout* self ```
void q_vboxlayout_delete(void* self) {
    QVBoxLayout_Delete((QVBoxLayout*)(self));
}