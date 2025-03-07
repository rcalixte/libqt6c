#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
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
#include "libqlayout.hpp"
#include "libqlayout.h"

/// https://doc.qt.io/qt-6/qlayout.html

/// q_layout_new constructs a new QLayout object.
///
/// ``` QWidget* parent ```
QLayout* q_layout_new(void* parent) {
    return QLayout_new((QWidget*)parent);
}

/// q_layout_new2 constructs a new QLayout object.
///
///
QLayout* q_layout_new2() {
    return QLayout_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLayout* self ```
QMetaObject* q_layout_meta_object(void* self) {
    return QLayout_MetaObject((QLayout*)self);
}

/// ``` QLayout* self, const char* param1 ```
void* q_layout_metacast(void* self, const char* param1) {
    return QLayout_Metacast((QLayout*)self, param1);
}

/// ``` QLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_layout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLayout_Metacall((QLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, enum QMetaObject__Call, int, void*) ```
void q_layout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLayout_OnMetacall((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_layout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLayout_QBaseMetacall((QLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_layout_tr(const char* s) {
    libqt_string _str = QLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// ``` QLayout* self ```
int32_t q_layout_spacing(void* self) {
    return QLayout_Spacing((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_spacing(void* self, int32_t (*slot)()) {
    QLayout_OnSpacing((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_spacing(void* self) {
    return QLayout_QBaseSpacing((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// ``` QLayout* self, int spacing ```
void q_layout_set_spacing(void* self, int spacing) {
    QLayout_SetSpacing((QLayout*)self, spacing);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, int) ```
void q_layout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QLayout_OnSetSpacing((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, int spacing ```
void q_layout_qbase_set_spacing(void* self, int spacing) {
    QLayout_QBaseSetSpacing((QLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QLayout* self, int left, int top, int right, int bottom ```
void q_layout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QLayout* self, QMargins* margins ```
void q_layout_set_contents_margins_with_margins(void* self, void* margins) {
    QLayout_SetContentsMarginsWithMargins((QLayout*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QLayout* self ```
void q_layout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QLayout* self, int* left, int* top, int* right, int* bottom ```
void q_layout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QLayout* self ```
QMargins* q_layout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QLayout* self ```
QRect* q_layout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QLayout* self, QWidget* w, int alignment ```
bool q_layout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QLayout* self, QLayout* l, int alignment ```
bool q_layout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_layout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QLayout* self ```
int64_t q_layout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QLayout* self ```
QWidget* q_layout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QLayout* self ```
QWidget* q_layout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// ``` QLayout* self ```
void q_layout_invalidate(void* self) {
    QLayout_Invalidate((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)() ```
void q_layout_on_invalidate(void* self, void (*slot)()) {
    QLayout_OnInvalidate((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
void q_layout_qbase_invalidate(void* self) {
    QLayout_QBaseInvalidate((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// ``` QLayout* self ```
QRect* q_layout_geometry(void* self) {
    return QLayout_Geometry((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QRect* (*slot)() ```
void q_layout_on_geometry(void* self, QRect* (*slot)()) {
    QLayout_OnGeometry((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
QRect* q_layout_qbase_geometry(void* self) {
    return QLayout_QBaseGeometry((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QLayout* self ```
bool q_layout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QLayout* self ```
void q_layout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_add_widget(void* self, void* w) {
    QLayout_AddWidget((QLayout*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_add_item(void* self, void* param1) {
    QLayout_AddItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QLayoutItem*) ```
void q_layout_on_add_item(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddItem((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_qbase_add_item(void* self, void* param1) {
    QLayout_QBaseAddItem((QLayout*)self, (QLayoutItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// ``` QLayout* self ```
int64_t q_layout_expanding_directions(void* self) {
    return QLayout_ExpandingDirections((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int64_t (*slot)() ```
void q_layout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QLayout_OnExpandingDirections((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
int64_t q_layout_qbase_expanding_directions(void* self) {
    return QLayout_QBaseExpandingDirections((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_minimum_size(void* self) {
    return QLayout_MinimumSize((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_minimum_size(void* self, QSize* (*slot)()) {
    QLayout_OnMinimumSize((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_minimum_size(void* self) {
    return QLayout_QBaseMinimumSize((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_maximum_size(void* self) {
    return QLayout_MaximumSize((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_maximum_size(void* self, QSize* (*slot)()) {
    QLayout_OnMaximumSize((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_maximum_size(void* self) {
    return QLayout_QBaseMaximumSize((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// ``` QLayout* self, QRect* geometry ```
void q_layout_set_geometry(void* self, void* geometry) {
    QLayout_SetGeometry((QLayout*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QRect*) ```
void q_layout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QLayout_OnSetGeometry((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QRect* geometry ```
void q_layout_qbase_set_geometry(void* self, void* geometry) {
    QLayout_QBaseSetGeometry((QLayout*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_item_at(void* self, int index) {
    return QLayout_ItemAt((QLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, int) ```
void q_layout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QLayout_OnItemAt((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_qbase_item_at(void* self, int index) {
    return QLayout_QBaseItemAt((QLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_take_at(void* self, int index) {
    return QLayout_TakeAt((QLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, int) ```
void q_layout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QLayout_OnTakeAt((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_qbase_take_at(void* self, int index) {
    return QLayout_QBaseTakeAt((QLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QLayout* self, QWidget* param1 ```
int32_t q_layout_index_of(void* self, void* param1) {
    return QLayout_IndexOf((QLayout*)self, (QWidget*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QWidget*) ```
void q_layout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOf((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QWidget* param1 ```
int32_t q_layout_qbase_index_of(void* self, void* param1) {
    return QLayout_QBaseIndexOf((QLayout*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
int32_t q_layout_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_IndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_layout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOfWithQLayoutItem((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QLayoutItem* param1 ```
int32_t q_layout_qbase_index_of_with_q_layout_item(void* self, void* param1) {
    return QLayout_QBaseIndexOfWithQLayoutItem((QLayout*)self, (QLayoutItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// ``` QLayout* self ```
int32_t q_layout_count(void* self) {
    return QLayout_Count((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_count(void* self, int32_t (*slot)()) {
    QLayout_OnCount((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_count(void* self) {
    return QLayout_QBaseCount((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// ``` QLayout* self ```
bool q_layout_is_empty(void* self) {
    return QLayout_IsEmpty((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, bool (*slot)() ```
void q_layout_on_is_empty(void* self, bool (*slot)()) {
    QLayout_OnIsEmpty((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
bool q_layout_qbase_is_empty(void* self) {
    return QLayout_QBaseIsEmpty((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// ``` QLayout* self ```
int64_t q_layout_control_types(void* self) {
    return QLayout_ControlTypes((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int64_t (*slot)() ```
void q_layout_on_control_types(void* self, int64_t (*slot)()) {
    QLayout_OnControlTypes((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
int64_t q_layout_qbase_control_types(void* self) {
    return QLayout_QBaseControlTypes((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// ``` QLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_layout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QLayout_ReplaceWidget((QLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, QWidget*, QWidget*, int) ```
void q_layout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QLayout_OnReplaceWidget((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_layout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QLayout_QBaseReplaceWidget((QLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QLayout* self, int w ```
int32_t q_layout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QLayout* self, int w ```
int32_t q_layout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QLayout* self ```
QSize* q_layout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// ``` QLayout* self ```
QLayout* q_layout_layout(void* self) {
    return QLayout_Layout((QLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayout* (*slot)() ```
void q_layout_on_layout(void* self, QLayout* (*slot)()) {
    QLayout_OnLayout((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self ```
QLayout* q_layout_qbase_layout(void* self) {
    return QLayout_QBaseLayout((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QLayout* self, bool enabled ```
void q_layout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QLayout* self ```
bool q_layout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_layout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// ``` QLayout* self, QEvent* param1 ```
void q_layout_widget_event(void* self, void* param1) {
    QLayout_WidgetEvent((QLayout*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QEvent*) ```
void q_layout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnWidgetEvent((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QEvent* param1 ```
void q_layout_qbase_widget_event(void* self, void* param1) {
    QLayout_QBaseWidgetEvent((QLayout*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// ``` QLayout* self, QChildEvent* e ```
void q_layout_child_event(void* self, void* e) {
    QLayout_ChildEvent((QLayout*)self, (QChildEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QChildEvent*) ```
void q_layout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnChildEvent((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QChildEvent* e ```
void q_layout_qbase_child_event(void* self, void* e) {
    QLayout_QBaseChildEvent((QLayout*)self, (QChildEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// ``` QLayout* self, QLayout* l ```
void q_layout_add_child_layout(void* self, void* l) {
    QLayout_AddChildLayout((QLayout*)self, (QLayout*)l);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QLayout*) ```
void q_layout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddChildLayout((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QLayout* l ```
void q_layout_qbase_add_child_layout(void* self, void* l) {
    QLayout_QBaseAddChildLayout((QLayout*)self, (QLayout*)l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_add_child_widget(void* self, void* w) {
    QLayout_AddChildWidget((QLayout*)self, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QWidget*) ```
void q_layout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddChildWidget((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_qbase_add_child_widget(void* self, void* w) {
    QLayout_QBaseAddChildWidget((QLayout*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// ``` QLayout* self, QLayout* layout ```
bool q_layout_adopt_layout(void* self, void* layout) {
    return QLayout_AdoptLayout((QLayout*)self, (QLayout*)layout);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QLayout*) ```
void q_layout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnAdoptLayout((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QLayout* layout ```
bool q_layout_qbase_adopt_layout(void* self, void* layout) {
    return QLayout_QBaseAdoptLayout((QLayout*)self, (QLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// ``` QLayout* self, QRect* param1 ```
QRect* q_layout_alignment_rect(void* self, void* param1) {
    return QLayout_AlignmentRect((QLayout*)self, (QRect*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayout* self, QRect* (*slot)(QLayout*, QRect*) ```
void q_layout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QLayout_OnAlignmentRect((QLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayout* self, QRect* param1 ```
QRect* q_layout_qbase_alignment_rect(void* self, void* param1) {
    return QLayout_QBaseAlignmentRect((QLayout*)self, (QRect*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_layout_tr2(const char* s, const char* c) {
    libqt_string _str = QLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_layout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLayout* self ```
const char* q_layout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLayout* self, const char* name ```
void q_layout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLayout* self ```
bool q_layout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLayout* self ```
bool q_layout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLayout* self ```
bool q_layout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLayout* self ```
bool q_layout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLayout* self, bool b ```
bool q_layout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLayout* self ```
QThread* q_layout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLayout* self, QThread* thread ```
void q_layout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLayout* self, int interval ```
int32_t q_layout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLayout* self, int id ```
void q_layout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLayout* self ```
libqt_list /* of QObject* */ q_layout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLayout* self, QObject* parent ```
void q_layout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLayout* self, QObject* filterObj ```
void q_layout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLayout* self, QObject* obj ```
void q_layout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_layout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_layout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_layout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_layout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLayout* self ```
void q_layout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLayout* self ```
void q_layout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLayout* self, const char* name, QVariant* value ```
bool q_layout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLayout* self, const char* name ```
QVariant* q_layout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLayout* self ```
const char** q_layout_dynamic_property_names(void* self) {
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
/// ``` QLayout* self ```
QBindingStorage* q_layout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLayout* self ```
QBindingStorage* q_layout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self ```
void q_layout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLayout* self, void (*slot)(QObject*) ```
void q_layout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLayout* self ```
QObject* q_layout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLayout* self, const char* classname ```
bool q_layout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLayout* self ```
void q_layout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_layout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_layout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_layout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self, QObject* param1 ```
void q_layout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLayout* self, void (*slot)(QObject*, QObject*) ```
void q_layout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QLayout* self ```
int64_t q_layout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
bool q_layout_event(void* self, void* event) {
    return QLayout_Event((QLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
bool q_layout_qbase_event(void* self, void* event) {
    return QLayout_QBaseEvent((QLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QEvent*) ```
void q_layout_on_event(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnEvent((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QObject* watched, QEvent* event ```
bool q_layout_event_filter(void* self, void* watched, void* event) {
    return QLayout_EventFilter((QLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QObject* watched, QEvent* event ```
bool q_layout_qbase_event_filter(void* self, void* watched, void* event) {
    return QLayout_QBaseEventFilter((QLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QObject*, QEvent*) ```
void q_layout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLayout_OnEventFilter((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QTimerEvent* event ```
void q_layout_timer_event(void* self, void* event) {
    QLayout_TimerEvent((QLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QTimerEvent* event ```
void q_layout_qbase_timer_event(void* self, void* event) {
    QLayout_QBaseTimerEvent((QLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QTimerEvent*) ```
void q_layout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnTimerEvent((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
void q_layout_custom_event(void* self, void* event) {
    QLayout_CustomEvent((QLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
void q_layout_qbase_custom_event(void* self, void* event) {
    QLayout_QBaseCustomEvent((QLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QEvent*) ```
void q_layout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnCustomEvent((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_connect_notify(void* self, void* signal) {
    QLayout_ConnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_qbase_connect_notify(void* self, void* signal) {
    QLayout_QBaseConnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLayout_OnConnectNotify((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_disconnect_notify(void* self, void* signal) {
    QLayout_DisconnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_qbase_disconnect_notify(void* self, void* signal) {
    QLayout_QBaseDisconnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLayout_OnDisconnectNotify((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QSize* q_layout_size_hint(void* self) {
    return QLayout_SizeHint((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_size_hint(void* self) {
    return QLayout_QBaseSizeHint((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_size_hint(void* self, QSize* (*slot)()) {
    QLayout_OnSizeHint((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
bool q_layout_has_height_for_width(void* self) {
    return QLayout_HasHeightForWidth((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
bool q_layout_qbase_has_height_for_width(void* self) {
    return QLayout_QBaseHasHeightForWidth((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)() ```
void q_layout_on_has_height_for_width(void* self, bool (*slot)()) {
    QLayout_OnHasHeightForWidth((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_height_for_width(void* self, int param1) {
    return QLayout_HeightForWidth((QLayout*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_qbase_height_for_width(void* self, int param1) {
    return QLayout_QBaseHeightForWidth((QLayout*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, int) ```
void q_layout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayout_OnHeightForWidth((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_minimum_height_for_width(void* self, int param1) {
    return QLayout_MinimumHeightForWidth((QLayout*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_qbase_minimum_height_for_width(void* self, int param1) {
    return QLayout_QBaseMinimumHeightForWidth((QLayout*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, int) ```
void q_layout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayout_OnMinimumHeightForWidth((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QWidget* q_layout_widget(void* self) {
    return QLayout_Widget((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QWidget* q_layout_qbase_widget(void* self) {
    return QLayout_QBaseWidget((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QWidget* (*slot)() ```
void q_layout_on_widget(void* self, QWidget* (*slot)()) {
    QLayout_OnWidget((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QSpacerItem* q_layout_spacer_item(void* self) {
    return QLayout_SpacerItem((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QSpacerItem* q_layout_qbase_spacer_item(void* self) {
    return QLayout_QBaseSpacerItem((QLayout*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QSpacerItem* (*slot)() ```
void q_layout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QLayout_OnSpacerItem((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QObject* q_layout_sender(void* self) {
    return QLayout_Sender((QLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QObject* q_layout_qbase_sender(void* self) {
    return QLayout_QBaseSender((QLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QObject* (*slot)() ```
void q_layout_on_sender(void* self, QObject* (*slot)()) {
    QLayout_OnSender((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
int32_t q_layout_sender_signal_index(void* self) {
    return QLayout_SenderSignalIndex((QLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_sender_signal_index(void* self) {
    return QLayout_QBaseSenderSignalIndex((QLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLayout_OnSenderSignalIndex((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, const char* signal ```
int32_t q_layout_receivers(void* self, const char* signal) {
    return QLayout_Receivers((QLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, const char* signal ```
int32_t q_layout_qbase_receivers(void* self, const char* signal) {
    return QLayout_QBaseReceivers((QLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, const char*) ```
void q_layout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLayout_OnReceivers((QLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
bool q_layout_is_signal_connected(void* self, void* signal) {
    return QLayout_IsSignalConnected((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
bool q_layout_qbase_is_signal_connected(void* self, void* signal) {
    return QLayout_QBaseIsSignalConnected((QLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnIsSignalConnected((QLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLayout* self ```
void q_layout_delete(void* self) {
    QLayout_Delete((QLayout*)(self));
}