#include "libqcoreevent.hpp"
#include "libqlayout.hpp"
#include "libqlayoutitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqwidget.hpp"
#include "libqformlayout.hpp"
#include "libqformlayout.h"

QFormLayout* q_formlayout_new(void* parent) {
    return QFormLayout_new((QWidget*)parent);
}

QFormLayout* q_formlayout_new2() {
    return QFormLayout_new2();
}

const QMetaObject* q_formlayout_meta_object(void* self) {
    return QFormLayout_MetaObject((QFormLayout*)self);
}

void q_formlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QFormLayout_OnMetaObject((QFormLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_formlayout_qbase_meta_object(void* self) {
    return QFormLayout_QBaseMetaObject((QFormLayout*)self);
}

void* q_formlayout_metacast(void* self, const char* param1) {
    return QFormLayout_Metacast((QFormLayout*)self, param1);
}

void q_formlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QFormLayout_OnMetacast((QFormLayout*)self, (intptr_t)callback);
}

void* q_formlayout_qbase_metacast(void* self, const char* param1) {
    return QFormLayout_QBaseMetacast((QFormLayout*)self, param1);
}

int32_t q_formlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFormLayout_Metacall((QFormLayout*)self, param1, param2, param3);
}

void q_formlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFormLayout_OnMetacall((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFormLayout_QBaseMetacall((QFormLayout*)self, param1, param2, param3);
}

const char* q_formlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_formlayout_set_field_growth_policy(void* self, int32_t policy) {
    QFormLayout_SetFieldGrowthPolicy((QFormLayout*)self, policy);
}

int32_t q_formlayout_field_growth_policy(void* self) {
    return QFormLayout_FieldGrowthPolicy((QFormLayout*)self);
}

void q_formlayout_set_row_wrap_policy(void* self, int32_t policy) {
    QFormLayout_SetRowWrapPolicy((QFormLayout*)self, policy);
}

int32_t q_formlayout_row_wrap_policy(void* self) {
    return QFormLayout_RowWrapPolicy((QFormLayout*)self);
}

void q_formlayout_set_label_alignment(void* self, int32_t alignment) {
    QFormLayout_SetLabelAlignment((QFormLayout*)self, alignment);
}

int32_t q_formlayout_label_alignment(void* self) {
    return QFormLayout_LabelAlignment((QFormLayout*)self);
}

void q_formlayout_set_form_alignment(void* self, int32_t alignment) {
    QFormLayout_SetFormAlignment((QFormLayout*)self, alignment);
}

int32_t q_formlayout_form_alignment(void* self) {
    return QFormLayout_FormAlignment((QFormLayout*)self);
}

void q_formlayout_set_horizontal_spacing(void* self, int spacing) {
    QFormLayout_SetHorizontalSpacing((QFormLayout*)self, spacing);
}

int32_t q_formlayout_horizontal_spacing(void* self) {
    return QFormLayout_HorizontalSpacing((QFormLayout*)self);
}

void q_formlayout_set_vertical_spacing(void* self, int spacing) {
    QFormLayout_SetVerticalSpacing((QFormLayout*)self, spacing);
}

int32_t q_formlayout_vertical_spacing(void* self) {
    return QFormLayout_VerticalSpacing((QFormLayout*)self);
}

int32_t q_formlayout_spacing(void* self) {
    return QFormLayout_Spacing((QFormLayout*)self);
}

void q_formlayout_on_spacing(void* self, int32_t (*callback)()) {
    QFormLayout_OnSpacing((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_spacing(void* self) {
    return QFormLayout_QBaseSpacing((QFormLayout*)self);
}

void q_formlayout_set_spacing(void* self, int spacing) {
    QFormLayout_SetSpacing((QFormLayout*)self, spacing);
}

void q_formlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QFormLayout_OnSetSpacing((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_qbase_set_spacing(void* self, int spacing) {
    QFormLayout_QBaseSetSpacing((QFormLayout*)self, spacing);
}

void q_formlayout_add_row(void* self, void* label, void* field) {
    QFormLayout_AddRow((QFormLayout*)self, (QWidget*)label, (QWidget*)field);
}

void q_formlayout_add_row2(void* self, void* label, void* field) {
    QFormLayout_AddRow2((QFormLayout*)self, (QWidget*)label, (QLayout*)field);
}

void q_formlayout_add_row3(void* self, const char* labelText, void* field) {
    QFormLayout_AddRow3((QFormLayout*)self, qstring(labelText), (QWidget*)field);
}

void q_formlayout_add_row4(void* self, const char* labelText, void* field) {
    QFormLayout_AddRow4((QFormLayout*)self, qstring(labelText), (QLayout*)field);
}

void q_formlayout_add_row5(void* self, void* widget) {
    QFormLayout_AddRow5((QFormLayout*)self, (QWidget*)widget);
}

void q_formlayout_add_row6(void* self, void* layout) {
    QFormLayout_AddRow6((QFormLayout*)self, (QLayout*)layout);
}

void q_formlayout_insert_row(void* self, int row, void* label, void* field) {
    QFormLayout_InsertRow((QFormLayout*)self, row, (QWidget*)label, (QWidget*)field);
}

void q_formlayout_insert_row2(void* self, int row, void* label, void* field) {
    QFormLayout_InsertRow2((QFormLayout*)self, row, (QWidget*)label, (QLayout*)field);
}

void q_formlayout_insert_row3(void* self, int row, const char* labelText, void* field) {
    QFormLayout_InsertRow3((QFormLayout*)self, row, qstring(labelText), (QWidget*)field);
}

void q_formlayout_insert_row4(void* self, int row, const char* labelText, void* field) {
    QFormLayout_InsertRow4((QFormLayout*)self, row, qstring(labelText), (QLayout*)field);
}

void q_formlayout_insert_row5(void* self, int row, void* widget) {
    QFormLayout_InsertRow5((QFormLayout*)self, row, (QWidget*)widget);
}

void q_formlayout_insert_row6(void* self, int row, void* layout) {
    QFormLayout_InsertRow6((QFormLayout*)self, row, (QLayout*)layout);
}

void q_formlayout_remove_row(void* self, int row) {
    QFormLayout_RemoveRow((QFormLayout*)self, row);
}

void q_formlayout_remove_row2(void* self, void* widget) {
    QFormLayout_RemoveRow2((QFormLayout*)self, (QWidget*)widget);
}

void q_formlayout_remove_row3(void* self, void* layout) {
    QFormLayout_RemoveRow3((QFormLayout*)self, (QLayout*)layout);
}

QFormLayout__TakeRowResult* q_formlayout_take_row(void* self, int row) {
    return QFormLayout_TakeRow((QFormLayout*)self, row);
}

QFormLayout__TakeRowResult* q_formlayout_take_row2(void* self, void* widget) {
    return QFormLayout_TakeRow2((QFormLayout*)self, (QWidget*)widget);
}

QFormLayout__TakeRowResult* q_formlayout_take_row3(void* self, void* layout) {
    return QFormLayout_TakeRow3((QFormLayout*)self, (QLayout*)layout);
}

void q_formlayout_set_item(void* self, int row, int32_t role, void* item) {
    QFormLayout_SetItem((QFormLayout*)self, row, role, (QLayoutItem*)item);
}

void q_formlayout_set_widget(void* self, int row, int32_t role, void* widget) {
    QFormLayout_SetWidget((QFormLayout*)self, row, role, (QWidget*)widget);
}

void q_formlayout_set_layout(void* self, int row, int32_t role, void* layout) {
    QFormLayout_SetLayout((QFormLayout*)self, row, role, (QLayout*)layout);
}

void q_formlayout_set_row_visible(void* self, int row, bool on) {
    QFormLayout_SetRowVisible((QFormLayout*)self, row, on);
}

void q_formlayout_set_row_visible2(void* self, void* widget, bool on) {
    QFormLayout_SetRowVisible2((QFormLayout*)self, (QWidget*)widget, on);
}

void q_formlayout_set_row_visible3(void* self, void* layout, bool on) {
    QFormLayout_SetRowVisible3((QFormLayout*)self, (QLayout*)layout, on);
}

bool q_formlayout_is_row_visible(void* self, int row) {
    return QFormLayout_IsRowVisible((QFormLayout*)self, row);
}

bool q_formlayout_is_row_visible2(void* self, void* widget) {
    return QFormLayout_IsRowVisible2((QFormLayout*)self, (QWidget*)widget);
}

bool q_formlayout_is_row_visible3(void* self, void* layout) {
    return QFormLayout_IsRowVisible3((QFormLayout*)self, (QLayout*)layout);
}

QLayoutItem* q_formlayout_item_at(void* self, int row, int32_t role) {
    return QFormLayout_ItemAt((QFormLayout*)self, row, role);
}

QWidget* q_formlayout_label_for_field(void* self, void* field) {
    return QFormLayout_LabelForField((QFormLayout*)self, (QWidget*)field);
}

QWidget* q_formlayout_label_for_field2(void* self, void* field) {
    return QFormLayout_LabelForField2((QFormLayout*)self, (QLayout*)field);
}

void q_formlayout_add_item(void* self, void* item) {
    QFormLayout_AddItem((QFormLayout*)self, (QLayoutItem*)item);
}

void q_formlayout_on_add_item(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnAddItem((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_qbase_add_item(void* self, void* item) {
    QFormLayout_QBaseAddItem((QFormLayout*)self, (QLayoutItem*)item);
}

QLayoutItem* q_formlayout_item_at2(void* self, int index) {
    return QFormLayout_ItemAt2((QFormLayout*)self, index);
}

void q_formlayout_on_item_at2(void* self, QLayoutItem* (*callback)(void*, int)) {
    QFormLayout_OnItemAt2((QFormLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_formlayout_qbase_item_at2(void* self, int index) {
    return QFormLayout_QBaseItemAt2((QFormLayout*)self, index);
}

QLayoutItem* q_formlayout_take_at(void* self, int index) {
    return QFormLayout_TakeAt((QFormLayout*)self, index);
}

void q_formlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QFormLayout_OnTakeAt((QFormLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_formlayout_qbase_take_at(void* self, int index) {
    return QFormLayout_QBaseTakeAt((QFormLayout*)self, index);
}

void q_formlayout_set_geometry(void* self, void* rect) {
    QFormLayout_SetGeometry((QFormLayout*)self, (QRect*)rect);
}

void q_formlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnSetGeometry((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_qbase_set_geometry(void* self, void* rect) {
    QFormLayout_QBaseSetGeometry((QFormLayout*)self, (QRect*)rect);
}

QSize* q_formlayout_minimum_size(void* self) {
    return QFormLayout_MinimumSize((QFormLayout*)self);
}

void q_formlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QFormLayout_OnMinimumSize((QFormLayout*)self, (intptr_t)callback);
}

QSize* q_formlayout_qbase_minimum_size(void* self) {
    return QFormLayout_QBaseMinimumSize((QFormLayout*)self);
}

QSize* q_formlayout_size_hint(void* self) {
    return QFormLayout_SizeHint((QFormLayout*)self);
}

void q_formlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QFormLayout_OnSizeHint((QFormLayout*)self, (intptr_t)callback);
}

QSize* q_formlayout_qbase_size_hint(void* self) {
    return QFormLayout_QBaseSizeHint((QFormLayout*)self);
}

void q_formlayout_invalidate(void* self) {
    QFormLayout_Invalidate((QFormLayout*)self);
}

void q_formlayout_on_invalidate(void* self, void (*callback)()) {
    QFormLayout_OnInvalidate((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_qbase_invalidate(void* self) {
    QFormLayout_QBaseInvalidate((QFormLayout*)self);
}

bool q_formlayout_has_height_for_width(void* self) {
    return QFormLayout_HasHeightForWidth((QFormLayout*)self);
}

void q_formlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QFormLayout_OnHasHeightForWidth((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_qbase_has_height_for_width(void* self) {
    return QFormLayout_QBaseHasHeightForWidth((QFormLayout*)self);
}

int32_t q_formlayout_height_for_width(void* self, int width) {
    return QFormLayout_HeightForWidth((QFormLayout*)self, width);
}

void q_formlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QFormLayout_OnHeightForWidth((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_height_for_width(void* self, int width) {
    return QFormLayout_QBaseHeightForWidth((QFormLayout*)self, width);
}

int32_t q_formlayout_expanding_directions(void* self) {
    return QFormLayout_ExpandingDirections((QFormLayout*)self);
}

void q_formlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QFormLayout_OnExpandingDirections((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_expanding_directions(void* self) {
    return QFormLayout_QBaseExpandingDirections((QFormLayout*)self);
}

int32_t q_formlayout_count(void* self) {
    return QFormLayout_Count((QFormLayout*)self);
}

void q_formlayout_on_count(void* self, int32_t (*callback)()) {
    QFormLayout_OnCount((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_count(void* self) {
    return QFormLayout_QBaseCount((QFormLayout*)self);
}

int32_t q_formlayout_row_count(void* self) {
    return QFormLayout_RowCount((QFormLayout*)self);
}

const char* q_formlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_formlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_formlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_formlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_formlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_formlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_formlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_formlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_formlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_formlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_formlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_formlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_formlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_formlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_formlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_formlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_formlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_formlayout_add_widget(void* self, void* w) {
    QLayout_AddWidget((QLayout*)self, (QWidget*)w);
}

void q_formlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_formlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_formlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_formlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_qbase_index_of2(void* self, void* param1) {
    return QLayout_QBaseIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_formlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_formlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_formlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_formlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_formlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_formlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_formlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_formlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_formlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_formlayout_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_formlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_formlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_formlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_formlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_formlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_formlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_formlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_formlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_formlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_formlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_formlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_formlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_formlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_formlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_formlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_formlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_formlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_formlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_formlayout_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_formlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_formlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_formlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_formlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_formlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_formlayout_dynamic_property_names\n");
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

QBindingStorage* q_formlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_formlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_formlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_formlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_formlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_formlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_formlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_formlayout_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_formlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_formlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_formlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_formlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_formlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_formlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_formlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

QRect* q_formlayout_geometry(void* self) {
    return QFormLayout_Geometry((QFormLayout*)self);
}

QRect* q_formlayout_qbase_geometry(void* self) {
    return QFormLayout_QBaseGeometry((QFormLayout*)self);
}

void q_formlayout_on_geometry(void* self, QRect* (*callback)()) {
    QFormLayout_OnGeometry((QFormLayout*)self, (intptr_t)callback);
}

QSize* q_formlayout_maximum_size(void* self) {
    return QFormLayout_MaximumSize((QFormLayout*)self);
}

QSize* q_formlayout_qbase_maximum_size(void* self) {
    return QFormLayout_QBaseMaximumSize((QFormLayout*)self);
}

void q_formlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QFormLayout_OnMaximumSize((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_index_of(void* self, void* param1) {
    return QFormLayout_IndexOf((QFormLayout*)self, (QWidget*)param1);
}

int32_t q_formlayout_qbase_index_of(void* self, void* param1) {
    return QFormLayout_QBaseIndexOf((QFormLayout*)self, (QWidget*)param1);
}

void q_formlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QFormLayout_OnIndexOf((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_is_empty(void* self) {
    return QFormLayout_IsEmpty((QFormLayout*)self);
}

bool q_formlayout_qbase_is_empty(void* self) {
    return QFormLayout_QBaseIsEmpty((QFormLayout*)self);
}

void q_formlayout_on_is_empty(void* self, bool (*callback)()) {
    QFormLayout_OnIsEmpty((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_control_types(void* self) {
    return QFormLayout_ControlTypes((QFormLayout*)self);
}

int32_t q_formlayout_qbase_control_types(void* self) {
    return QFormLayout_QBaseControlTypes((QFormLayout*)self);
}

void q_formlayout_on_control_types(void* self, int32_t (*callback)()) {
    QFormLayout_OnControlTypes((QFormLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_formlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QFormLayout_ReplaceWidget((QFormLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_formlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QFormLayout_QBaseReplaceWidget((QFormLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_formlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QFormLayout_OnReplaceWidget((QFormLayout*)self, (intptr_t)callback);
}

QLayout* q_formlayout_layout(void* self) {
    return QFormLayout_Layout((QFormLayout*)self);
}

QLayout* q_formlayout_qbase_layout(void* self) {
    return QFormLayout_QBaseLayout((QFormLayout*)self);
}

void q_formlayout_on_layout(void* self, QLayout* (*callback)()) {
    QFormLayout_OnLayout((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_child_event(void* self, void* e) {
    QFormLayout_ChildEvent((QFormLayout*)self, (QChildEvent*)e);
}

void q_formlayout_qbase_child_event(void* self, void* e) {
    QFormLayout_QBaseChildEvent((QFormLayout*)self, (QChildEvent*)e);
}

void q_formlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnChildEvent((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_event(void* self, void* event) {
    return QFormLayout_Event((QFormLayout*)self, (QEvent*)event);
}

bool q_formlayout_qbase_event(void* self, void* event) {
    return QFormLayout_QBaseEvent((QFormLayout*)self, (QEvent*)event);
}

void q_formlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QFormLayout_OnEvent((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_event_filter(void* self, void* watched, void* event) {
    return QFormLayout_EventFilter((QFormLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_formlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QFormLayout_QBaseEventFilter((QFormLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_formlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFormLayout_OnEventFilter((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_timer_event(void* self, void* event) {
    QFormLayout_TimerEvent((QFormLayout*)self, (QTimerEvent*)event);
}

void q_formlayout_qbase_timer_event(void* self, void* event) {
    QFormLayout_QBaseTimerEvent((QFormLayout*)self, (QTimerEvent*)event);
}

void q_formlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnTimerEvent((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_custom_event(void* self, void* event) {
    QFormLayout_CustomEvent((QFormLayout*)self, (QEvent*)event);
}

void q_formlayout_qbase_custom_event(void* self, void* event) {
    QFormLayout_QBaseCustomEvent((QFormLayout*)self, (QEvent*)event);
}

void q_formlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnCustomEvent((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_connect_notify(void* self, void* signal) {
    QFormLayout_ConnectNotify((QFormLayout*)self, (QMetaMethod*)signal);
}

void q_formlayout_qbase_connect_notify(void* self, void* signal) {
    QFormLayout_QBaseConnectNotify((QFormLayout*)self, (QMetaMethod*)signal);
}

void q_formlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnConnectNotify((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_disconnect_notify(void* self, void* signal) {
    QFormLayout_DisconnectNotify((QFormLayout*)self, (QMetaMethod*)signal);
}

void q_formlayout_qbase_disconnect_notify(void* self, void* signal) {
    QFormLayout_QBaseDisconnectNotify((QFormLayout*)self, (QMetaMethod*)signal);
}

void q_formlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnDisconnectNotify((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_minimum_height_for_width(void* self, int param1) {
    return QFormLayout_MinimumHeightForWidth((QFormLayout*)self, param1);
}

int32_t q_formlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QFormLayout_QBaseMinimumHeightForWidth((QFormLayout*)self, param1);
}

void q_formlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QFormLayout_OnMinimumHeightForWidth((QFormLayout*)self, (intptr_t)callback);
}

QWidget* q_formlayout_widget(void* self) {
    return QFormLayout_Widget((QFormLayout*)self);
}

QWidget* q_formlayout_qbase_widget(void* self) {
    return QFormLayout_QBaseWidget((QFormLayout*)self);
}

void q_formlayout_on_widget(void* self, QWidget* (*callback)()) {
    QFormLayout_OnWidget((QFormLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_formlayout_spacer_item(void* self) {
    return QFormLayout_SpacerItem((QFormLayout*)self);
}

QSpacerItem* q_formlayout_qbase_spacer_item(void* self) {
    return QFormLayout_QBaseSpacerItem((QFormLayout*)self);
}

void q_formlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QFormLayout_OnSpacerItem((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_widget_event(void* self, void* param1) {
    QFormLayout_WidgetEvent((QFormLayout*)self, (QEvent*)param1);
}

void q_formlayout_qbase_widget_event(void* self, void* param1) {
    QFormLayout_QBaseWidgetEvent((QFormLayout*)self, (QEvent*)param1);
}

void q_formlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnWidgetEvent((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_add_child_layout(void* self, void* l) {
    QFormLayout_AddChildLayout((QFormLayout*)self, (QLayout*)l);
}

void q_formlayout_qbase_add_child_layout(void* self, void* l) {
    QFormLayout_QBaseAddChildLayout((QFormLayout*)self, (QLayout*)l);
}

void q_formlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnAddChildLayout((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_add_child_widget(void* self, void* w) {
    QFormLayout_AddChildWidget((QFormLayout*)self, (QWidget*)w);
}

void q_formlayout_qbase_add_child_widget(void* self, void* w) {
    QFormLayout_QBaseAddChildWidget((QFormLayout*)self, (QWidget*)w);
}

void q_formlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QFormLayout_OnAddChildWidget((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_adopt_layout(void* self, void* layout) {
    return QFormLayout_AdoptLayout((QFormLayout*)self, (QLayout*)layout);
}

bool q_formlayout_qbase_adopt_layout(void* self, void* layout) {
    return QFormLayout_QBaseAdoptLayout((QFormLayout*)self, (QLayout*)layout);
}

void q_formlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QFormLayout_OnAdoptLayout((QFormLayout*)self, (intptr_t)callback);
}

QRect* q_formlayout_alignment_rect(void* self, void* param1) {
    return QFormLayout_AlignmentRect((QFormLayout*)self, (QRect*)param1);
}

QRect* q_formlayout_qbase_alignment_rect(void* self, void* param1) {
    return QFormLayout_QBaseAlignmentRect((QFormLayout*)self, (QRect*)param1);
}

void q_formlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QFormLayout_OnAlignmentRect((QFormLayout*)self, (intptr_t)callback);
}

QObject* q_formlayout_sender(void* self) {
    return QFormLayout_Sender((QFormLayout*)self);
}

QObject* q_formlayout_qbase_sender(void* self) {
    return QFormLayout_QBaseSender((QFormLayout*)self);
}

void q_formlayout_on_sender(void* self, QObject* (*callback)()) {
    QFormLayout_OnSender((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_sender_signal_index(void* self) {
    return QFormLayout_SenderSignalIndex((QFormLayout*)self);
}

int32_t q_formlayout_qbase_sender_signal_index(void* self) {
    return QFormLayout_QBaseSenderSignalIndex((QFormLayout*)self);
}

void q_formlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFormLayout_OnSenderSignalIndex((QFormLayout*)self, (intptr_t)callback);
}

int32_t q_formlayout_receivers(void* self, const char* signal) {
    return QFormLayout_Receivers((QFormLayout*)self, signal);
}

int32_t q_formlayout_qbase_receivers(void* self, const char* signal) {
    return QFormLayout_QBaseReceivers((QFormLayout*)self, signal);
}

void q_formlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFormLayout_OnReceivers((QFormLayout*)self, (intptr_t)callback);
}

bool q_formlayout_is_signal_connected(void* self, void* signal) {
    return QFormLayout_IsSignalConnected((QFormLayout*)self, (QMetaMethod*)signal);
}

bool q_formlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QFormLayout_QBaseIsSignalConnected((QFormLayout*)self, (QMetaMethod*)signal);
}

void q_formlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFormLayout_OnIsSignalConnected((QFormLayout*)self, (intptr_t)callback);
}

void q_formlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_formlayout_delete(void* self) {
    QFormLayout_Delete((QFormLayout*)(self));
}

QFormLayout__TakeRowResult* q_formlayout__takerowresult_new() {
    return QFormLayout__TakeRowResult_new();
}

QFormLayout__TakeRowResult* q_formlayout__takerowresult_new2(void* param1) {
    return QFormLayout__TakeRowResult_new2((QFormLayout__TakeRowResult*)param1);
}

QLayoutItem* q_formlayout__takerowresult_label_item(void* self) {
    return QFormLayout__TakeRowResult_LabelItem((QFormLayout__TakeRowResult*)self);
}

void q_formlayout__takerowresult_set_label_item(void* self, void* labelItem) {
    QFormLayout__TakeRowResult_SetLabelItem((QFormLayout__TakeRowResult*)self, (QLayoutItem*)labelItem);
}

QLayoutItem* q_formlayout__takerowresult_field_item(void* self) {
    return QFormLayout__TakeRowResult_FieldItem((QFormLayout__TakeRowResult*)self);
}

void q_formlayout__takerowresult_set_field_item(void* self, void* fieldItem) {
    QFormLayout__TakeRowResult_SetFieldItem((QFormLayout__TakeRowResult*)self, (QLayoutItem*)fieldItem);
}

void q_formlayout__takerowresult_delete(void* self) {
    QFormLayout__TakeRowResult_Delete((QFormLayout__TakeRowResult*)(self));
}
