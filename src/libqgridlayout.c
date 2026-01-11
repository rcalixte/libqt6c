#include "libqcoreevent.hpp"
#include "libqlayout.hpp"
#include "libqlayoutitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqwidget.hpp"
#include "libqgridlayout.hpp"
#include "libqgridlayout.h"

QGridLayout* q_gridlayout_new(void* parent) {
    return QGridLayout_new((QWidget*)parent);
}

QGridLayout* q_gridlayout_new2() {
    return QGridLayout_new2();
}

const QMetaObject* q_gridlayout_meta_object(void* self) {
    return QGridLayout_MetaObject((QGridLayout*)self);
}

void* q_gridlayout_metacast(void* self, const char* param1) {
    return QGridLayout_Metacast((QGridLayout*)self, param1);
}

int32_t q_gridlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGridLayout_Metacall((QGridLayout*)self, param1, param2, param3);
}

void q_gridlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGridLayout_OnMetacall((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGridLayout_QBaseMetacall((QGridLayout*)self, param1, param2, param3);
}

const char* q_gridlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_gridlayout_size_hint(void* self) {
    return QGridLayout_SizeHint((QGridLayout*)self);
}

void q_gridlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QGridLayout_OnSizeHint((QGridLayout*)self, (intptr_t)callback);
}

QSize* q_gridlayout_qbase_size_hint(void* self) {
    return QGridLayout_QBaseSizeHint((QGridLayout*)self);
}

QSize* q_gridlayout_minimum_size(void* self) {
    return QGridLayout_MinimumSize((QGridLayout*)self);
}

void q_gridlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QGridLayout_OnMinimumSize((QGridLayout*)self, (intptr_t)callback);
}

QSize* q_gridlayout_qbase_minimum_size(void* self) {
    return QGridLayout_QBaseMinimumSize((QGridLayout*)self);
}

QSize* q_gridlayout_maximum_size(void* self) {
    return QGridLayout_MaximumSize((QGridLayout*)self);
}

void q_gridlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QGridLayout_OnMaximumSize((QGridLayout*)self, (intptr_t)callback);
}

QSize* q_gridlayout_qbase_maximum_size(void* self) {
    return QGridLayout_QBaseMaximumSize((QGridLayout*)self);
}

void q_gridlayout_set_horizontal_spacing(void* self, int spacing) {
    QGridLayout_SetHorizontalSpacing((QGridLayout*)self, spacing);
}

int32_t q_gridlayout_horizontal_spacing(void* self) {
    return QGridLayout_HorizontalSpacing((QGridLayout*)self);
}

void q_gridlayout_set_vertical_spacing(void* self, int spacing) {
    QGridLayout_SetVerticalSpacing((QGridLayout*)self, spacing);
}

int32_t q_gridlayout_vertical_spacing(void* self) {
    return QGridLayout_VerticalSpacing((QGridLayout*)self);
}

void q_gridlayout_set_spacing(void* self, int spacing) {
    QGridLayout_SetSpacing((QGridLayout*)self, spacing);
}

void q_gridlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QGridLayout_OnSetSpacing((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_qbase_set_spacing(void* self, int spacing) {
    QGridLayout_QBaseSetSpacing((QGridLayout*)self, spacing);
}

int32_t q_gridlayout_spacing(void* self) {
    return QGridLayout_Spacing((QGridLayout*)self);
}

void q_gridlayout_on_spacing(void* self, int32_t (*callback)()) {
    QGridLayout_OnSpacing((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_spacing(void* self) {
    return QGridLayout_QBaseSpacing((QGridLayout*)self);
}

void q_gridlayout_set_row_stretch(void* self, int row, int stretch) {
    QGridLayout_SetRowStretch((QGridLayout*)self, row, stretch);
}

void q_gridlayout_set_column_stretch(void* self, int column, int stretch) {
    QGridLayout_SetColumnStretch((QGridLayout*)self, column, stretch);
}

int32_t q_gridlayout_row_stretch(void* self, int row) {
    return QGridLayout_RowStretch((QGridLayout*)self, row);
}

int32_t q_gridlayout_column_stretch(void* self, int column) {
    return QGridLayout_ColumnStretch((QGridLayout*)self, column);
}

void q_gridlayout_set_row_minimum_height(void* self, int row, int minSize) {
    QGridLayout_SetRowMinimumHeight((QGridLayout*)self, row, minSize);
}

void q_gridlayout_set_column_minimum_width(void* self, int column, int minSize) {
    QGridLayout_SetColumnMinimumWidth((QGridLayout*)self, column, minSize);
}

int32_t q_gridlayout_row_minimum_height(void* self, int row) {
    return QGridLayout_RowMinimumHeight((QGridLayout*)self, row);
}

int32_t q_gridlayout_column_minimum_width(void* self, int column) {
    return QGridLayout_ColumnMinimumWidth((QGridLayout*)self, column);
}

int32_t q_gridlayout_column_count(void* self) {
    return QGridLayout_ColumnCount((QGridLayout*)self);
}

int32_t q_gridlayout_row_count(void* self) {
    return QGridLayout_RowCount((QGridLayout*)self);
}

QRect* q_gridlayout_cell_rect(void* self, int row, int column) {
    return QGridLayout_CellRect((QGridLayout*)self, row, column);
}

bool q_gridlayout_has_height_for_width(void* self) {
    return QGridLayout_HasHeightForWidth((QGridLayout*)self);
}

void q_gridlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QGridLayout_OnHasHeightForWidth((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_qbase_has_height_for_width(void* self) {
    return QGridLayout_QBaseHasHeightForWidth((QGridLayout*)self);
}

int32_t q_gridlayout_height_for_width(void* self, int param1) {
    return QGridLayout_HeightForWidth((QGridLayout*)self, param1);
}

void q_gridlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QGridLayout_OnHeightForWidth((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_height_for_width(void* self, int param1) {
    return QGridLayout_QBaseHeightForWidth((QGridLayout*)self, param1);
}

int32_t q_gridlayout_minimum_height_for_width(void* self, int param1) {
    return QGridLayout_MinimumHeightForWidth((QGridLayout*)self, param1);
}

void q_gridlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QGridLayout_OnMinimumHeightForWidth((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QGridLayout_QBaseMinimumHeightForWidth((QGridLayout*)self, param1);
}

int32_t q_gridlayout_expanding_directions(void* self) {
    return QGridLayout_ExpandingDirections((QGridLayout*)self);
}

void q_gridlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QGridLayout_OnExpandingDirections((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_expanding_directions(void* self) {
    return QGridLayout_QBaseExpandingDirections((QGridLayout*)self);
}

void q_gridlayout_invalidate(void* self) {
    QGridLayout_Invalidate((QGridLayout*)self);
}

void q_gridlayout_on_invalidate(void* self, void (*callback)()) {
    QGridLayout_OnInvalidate((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_qbase_invalidate(void* self) {
    QGridLayout_QBaseInvalidate((QGridLayout*)self);
}

void q_gridlayout_add_widget(void* self, void* w) {
    QGridLayout_AddWidget((QGridLayout*)self, (QWidget*)w);
}

void q_gridlayout_add_widget2(void* self, void* param1, int row, int column) {
    QGridLayout_AddWidget2((QGridLayout*)self, (QWidget*)param1, row, column);
}

void q_gridlayout_add_widget3(void* self, void* param1, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddWidget3((QGridLayout*)self, (QWidget*)param1, row, column, rowSpan, columnSpan);
}

void q_gridlayout_add_layout(void* self, void* param1, int row, int column) {
    QGridLayout_AddLayout((QGridLayout*)self, (QLayout*)param1, row, column);
}

void q_gridlayout_add_layout2(void* self, void* param1, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddLayout2((QGridLayout*)self, (QLayout*)param1, row, column, rowSpan, columnSpan);
}

void q_gridlayout_set_origin_corner(void* self, int32_t originCorner) {
    QGridLayout_SetOriginCorner((QGridLayout*)self, originCorner);
}

int32_t q_gridlayout_origin_corner(void* self) {
    return QGridLayout_OriginCorner((QGridLayout*)self);
}

QLayoutItem* q_gridlayout_item_at(void* self, int index) {
    return QGridLayout_ItemAt((QGridLayout*)self, index);
}

void q_gridlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QGridLayout_OnItemAt((QGridLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_gridlayout_qbase_item_at(void* self, int index) {
    return QGridLayout_QBaseItemAt((QGridLayout*)self, index);
}

QLayoutItem* q_gridlayout_item_at_position(void* self, int row, int column) {
    return QGridLayout_ItemAtPosition((QGridLayout*)self, row, column);
}

QLayoutItem* q_gridlayout_take_at(void* self, int index) {
    return QGridLayout_TakeAt((QGridLayout*)self, index);
}

void q_gridlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QGridLayout_OnTakeAt((QGridLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_gridlayout_qbase_take_at(void* self, int index) {
    return QGridLayout_QBaseTakeAt((QGridLayout*)self, index);
}

int32_t q_gridlayout_count(void* self) {
    return QGridLayout_Count((QGridLayout*)self);
}

void q_gridlayout_on_count(void* self, int32_t (*callback)()) {
    QGridLayout_OnCount((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_count(void* self) {
    return QGridLayout_QBaseCount((QGridLayout*)self);
}

void q_gridlayout_set_geometry(void* self, void* geometry) {
    QGridLayout_SetGeometry((QGridLayout*)self, (QRect*)geometry);
}

void q_gridlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnSetGeometry((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_qbase_set_geometry(void* self, void* geometry) {
    QGridLayout_QBaseSetGeometry((QGridLayout*)self, (QRect*)geometry);
}

void q_gridlayout_add_item(void* self, void* item, int row, int column) {
    QGridLayout_AddItem((QGridLayout*)self, (QLayoutItem*)item, row, column);
}

void q_gridlayout_set_default_positioning(void* self, int n, int32_t orient) {
    QGridLayout_SetDefaultPositioning((QGridLayout*)self, n, orient);
}

void q_gridlayout_get_item_position(void* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
    QGridLayout_GetItemPosition((QGridLayout*)self, idx, row, column, rowSpan, columnSpan);
}

void q_gridlayout_add_item2(void* self, void* param1) {
    QGridLayout_AddItem2((QGridLayout*)self, (QLayoutItem*)param1);
}

void q_gridlayout_on_add_item2(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnAddItem2((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_qbase_add_item2(void* self, void* param1) {
    QGridLayout_QBaseAddItem2((QGridLayout*)self, (QLayoutItem*)param1);
}

const char* q_gridlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_gridlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_gridlayout_add_widget4(void* self, void* param1, int row, int column, int32_t param4) {
    QGridLayout_AddWidget4((QGridLayout*)self, (QWidget*)param1, row, column, param4);
}

void q_gridlayout_add_widget6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int32_t param6) {
    QGridLayout_AddWidget6((QGridLayout*)self, (QWidget*)param1, row, column, rowSpan, columnSpan, param6);
}

void q_gridlayout_add_layout4(void* self, void* param1, int row, int column, int32_t param4) {
    QGridLayout_AddLayout4((QGridLayout*)self, (QLayout*)param1, row, column, param4);
}

void q_gridlayout_add_layout6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int32_t param6) {
    QGridLayout_AddLayout6((QGridLayout*)self, (QLayout*)param1, row, column, rowSpan, columnSpan, param6);
}

void q_gridlayout_add_item4(void* self, void* item, int row, int column, int rowSpan) {
    QGridLayout_AddItem4((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan);
}

void q_gridlayout_add_item5(void* self, void* item, int row, int column, int rowSpan, int columnSpan) {
    QGridLayout_AddItem5((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan, columnSpan);
}

void q_gridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int32_t param6) {
    QGridLayout_AddItem6((QGridLayout*)self, (QLayoutItem*)item, row, column, rowSpan, columnSpan, param6);
}

void q_gridlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_gridlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_gridlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_gridlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_gridlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_gridlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_gridlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_gridlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_gridlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_gridlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_gridlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_gridlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_gridlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_gridlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_gridlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_gridlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_gridlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_gridlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_gridlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_qbase_index_of2(void* self, void* param1) {
    return QLayout_QBaseIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_gridlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_gridlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_gridlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_gridlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_gridlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_gridlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_gridlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_gridlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_gridlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_gridlayout_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_gridlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_gridlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_gridlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_gridlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_gridlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_gridlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_gridlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_gridlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_gridlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_gridlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_gridlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_gridlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_gridlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_gridlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_gridlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_gridlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_gridlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_gridlayout_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_gridlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_gridlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_gridlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_gridlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_gridlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_gridlayout_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_gridlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_gridlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_gridlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_gridlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_gridlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_gridlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_gridlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_gridlayout_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_gridlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_gridlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_gridlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_gridlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_gridlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_gridlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

QRect* q_gridlayout_geometry(void* self) {
    return QGridLayout_Geometry((QGridLayout*)self);
}

QRect* q_gridlayout_qbase_geometry(void* self) {
    return QGridLayout_QBaseGeometry((QGridLayout*)self);
}

void q_gridlayout_on_geometry(void* self, QRect* (*callback)()) {
    QGridLayout_OnGeometry((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_index_of(void* self, void* param1) {
    return QGridLayout_IndexOf((QGridLayout*)self, (QWidget*)param1);
}

int32_t q_gridlayout_qbase_index_of(void* self, void* param1) {
    return QGridLayout_QBaseIndexOf((QGridLayout*)self, (QWidget*)param1);
}

void q_gridlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QGridLayout_OnIndexOf((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_is_empty(void* self) {
    return QGridLayout_IsEmpty((QGridLayout*)self);
}

bool q_gridlayout_qbase_is_empty(void* self) {
    return QGridLayout_QBaseIsEmpty((QGridLayout*)self);
}

void q_gridlayout_on_is_empty(void* self, bool (*callback)()) {
    QGridLayout_OnIsEmpty((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_control_types(void* self) {
    return QGridLayout_ControlTypes((QGridLayout*)self);
}

int32_t q_gridlayout_qbase_control_types(void* self) {
    return QGridLayout_QBaseControlTypes((QGridLayout*)self);
}

void q_gridlayout_on_control_types(void* self, int32_t (*callback)()) {
    QGridLayout_OnControlTypes((QGridLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_gridlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QGridLayout_ReplaceWidget((QGridLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_gridlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QGridLayout_QBaseReplaceWidget((QGridLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_gridlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QGridLayout_OnReplaceWidget((QGridLayout*)self, (intptr_t)callback);
}

QLayout* q_gridlayout_layout(void* self) {
    return QGridLayout_Layout((QGridLayout*)self);
}

QLayout* q_gridlayout_qbase_layout(void* self) {
    return QGridLayout_QBaseLayout((QGridLayout*)self);
}

void q_gridlayout_on_layout(void* self, QLayout* (*callback)()) {
    QGridLayout_OnLayout((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_child_event(void* self, void* e) {
    QGridLayout_ChildEvent((QGridLayout*)self, (QChildEvent*)e);
}

void q_gridlayout_qbase_child_event(void* self, void* e) {
    QGridLayout_QBaseChildEvent((QGridLayout*)self, (QChildEvent*)e);
}

void q_gridlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnChildEvent((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_event(void* self, void* event) {
    return QGridLayout_Event((QGridLayout*)self, (QEvent*)event);
}

bool q_gridlayout_qbase_event(void* self, void* event) {
    return QGridLayout_QBaseEvent((QGridLayout*)self, (QEvent*)event);
}

void q_gridlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QGridLayout_OnEvent((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_event_filter(void* self, void* watched, void* event) {
    return QGridLayout_EventFilter((QGridLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_gridlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QGridLayout_QBaseEventFilter((QGridLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_gridlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGridLayout_OnEventFilter((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_timer_event(void* self, void* event) {
    QGridLayout_TimerEvent((QGridLayout*)self, (QTimerEvent*)event);
}

void q_gridlayout_qbase_timer_event(void* self, void* event) {
    QGridLayout_QBaseTimerEvent((QGridLayout*)self, (QTimerEvent*)event);
}

void q_gridlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnTimerEvent((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_custom_event(void* self, void* event) {
    QGridLayout_CustomEvent((QGridLayout*)self, (QEvent*)event);
}

void q_gridlayout_qbase_custom_event(void* self, void* event) {
    QGridLayout_QBaseCustomEvent((QGridLayout*)self, (QEvent*)event);
}

void q_gridlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnCustomEvent((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_connect_notify(void* self, void* signal) {
    QGridLayout_ConnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

void q_gridlayout_qbase_connect_notify(void* self, void* signal) {
    QGridLayout_QBaseConnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

void q_gridlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnConnectNotify((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_disconnect_notify(void* self, void* signal) {
    QGridLayout_DisconnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

void q_gridlayout_qbase_disconnect_notify(void* self, void* signal) {
    QGridLayout_QBaseDisconnectNotify((QGridLayout*)self, (QMetaMethod*)signal);
}

void q_gridlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnDisconnectNotify((QGridLayout*)self, (intptr_t)callback);
}

QWidget* q_gridlayout_widget(void* self) {
    return QGridLayout_Widget((QGridLayout*)self);
}

QWidget* q_gridlayout_qbase_widget(void* self) {
    return QGridLayout_QBaseWidget((QGridLayout*)self);
}

void q_gridlayout_on_widget(void* self, QWidget* (*callback)()) {
    QGridLayout_OnWidget((QGridLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_gridlayout_spacer_item(void* self) {
    return QGridLayout_SpacerItem((QGridLayout*)self);
}

QSpacerItem* q_gridlayout_qbase_spacer_item(void* self) {
    return QGridLayout_QBaseSpacerItem((QGridLayout*)self);
}

void q_gridlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QGridLayout_OnSpacerItem((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_widget_event(void* self, void* param1) {
    QGridLayout_WidgetEvent((QGridLayout*)self, (QEvent*)param1);
}

void q_gridlayout_qbase_widget_event(void* self, void* param1) {
    QGridLayout_QBaseWidgetEvent((QGridLayout*)self, (QEvent*)param1);
}

void q_gridlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnWidgetEvent((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_add_child_layout(void* self, void* l) {
    QGridLayout_AddChildLayout((QGridLayout*)self, (QLayout*)l);
}

void q_gridlayout_qbase_add_child_layout(void* self, void* l) {
    QGridLayout_QBaseAddChildLayout((QGridLayout*)self, (QLayout*)l);
}

void q_gridlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnAddChildLayout((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_add_child_widget(void* self, void* w) {
    QGridLayout_AddChildWidget((QGridLayout*)self, (QWidget*)w);
}

void q_gridlayout_qbase_add_child_widget(void* self, void* w) {
    QGridLayout_QBaseAddChildWidget((QGridLayout*)self, (QWidget*)w);
}

void q_gridlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QGridLayout_OnAddChildWidget((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_adopt_layout(void* self, void* layout) {
    return QGridLayout_AdoptLayout((QGridLayout*)self, (QLayout*)layout);
}

bool q_gridlayout_qbase_adopt_layout(void* self, void* layout) {
    return QGridLayout_QBaseAdoptLayout((QGridLayout*)self, (QLayout*)layout);
}

void q_gridlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QGridLayout_OnAdoptLayout((QGridLayout*)self, (intptr_t)callback);
}

QRect* q_gridlayout_alignment_rect(void* self, void* param1) {
    return QGridLayout_AlignmentRect((QGridLayout*)self, (QRect*)param1);
}

QRect* q_gridlayout_qbase_alignment_rect(void* self, void* param1) {
    return QGridLayout_QBaseAlignmentRect((QGridLayout*)self, (QRect*)param1);
}

void q_gridlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QGridLayout_OnAlignmentRect((QGridLayout*)self, (intptr_t)callback);
}

QObject* q_gridlayout_sender(void* self) {
    return QGridLayout_Sender((QGridLayout*)self);
}

QObject* q_gridlayout_qbase_sender(void* self) {
    return QGridLayout_QBaseSender((QGridLayout*)self);
}

void q_gridlayout_on_sender(void* self, QObject* (*callback)()) {
    QGridLayout_OnSender((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_sender_signal_index(void* self) {
    return QGridLayout_SenderSignalIndex((QGridLayout*)self);
}

int32_t q_gridlayout_qbase_sender_signal_index(void* self) {
    return QGridLayout_QBaseSenderSignalIndex((QGridLayout*)self);
}

void q_gridlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGridLayout_OnSenderSignalIndex((QGridLayout*)self, (intptr_t)callback);
}

int32_t q_gridlayout_receivers(void* self, const char* signal) {
    return QGridLayout_Receivers((QGridLayout*)self, signal);
}

int32_t q_gridlayout_qbase_receivers(void* self, const char* signal) {
    return QGridLayout_QBaseReceivers((QGridLayout*)self, signal);
}

void q_gridlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGridLayout_OnReceivers((QGridLayout*)self, (intptr_t)callback);
}

bool q_gridlayout_is_signal_connected(void* self, void* signal) {
    return QGridLayout_IsSignalConnected((QGridLayout*)self, (QMetaMethod*)signal);
}

bool q_gridlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QGridLayout_QBaseIsSignalConnected((QGridLayout*)self, (QMetaMethod*)signal);
}

void q_gridlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGridLayout_OnIsSignalConnected((QGridLayout*)self, (intptr_t)callback);
}

void q_gridlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_gridlayout_delete(void* self) {
    QGridLayout_Delete((QGridLayout*)(self));
}
