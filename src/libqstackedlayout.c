#include "libqcoreevent.hpp"
#include "libqlayout.hpp"
#include "libqlayoutitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqwidget.hpp"
#include "libqstackedlayout.hpp"
#include "libqstackedlayout.h"

QStackedLayout* q_stackedlayout_new(void* parent) {
    return QStackedLayout_new((QWidget*)parent);
}

QStackedLayout* q_stackedlayout_new2() {
    return QStackedLayout_new2();
}

QStackedLayout* q_stackedlayout_new3(void* parentLayout) {
    return QStackedLayout_new3((QLayout*)parentLayout);
}

const QMetaObject* q_stackedlayout_meta_object(void* self) {
    return QStackedLayout_MetaObject((QStackedLayout*)self);
}

void* q_stackedlayout_metacast(void* self, const char* param1) {
    return QStackedLayout_Metacast((QStackedLayout*)self, param1);
}

int32_t q_stackedlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStackedLayout_Metacall((QStackedLayout*)self, param1, param2, param3);
}

void q_stackedlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStackedLayout_OnMetacall((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStackedLayout_QBaseMetacall((QStackedLayout*)self, param1, param2, param3);
}

const char* q_stackedlayout_tr(const char* s) {
    libqt_string _str = QStackedLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_stackedlayout_add_widget(void* self, void* w) {
    return QStackedLayout_AddWidget((QStackedLayout*)self, (QWidget*)w);
}

int32_t q_stackedlayout_insert_widget(void* self, int index, void* w) {
    return QStackedLayout_InsertWidget((QStackedLayout*)self, index, (QWidget*)w);
}

QWidget* q_stackedlayout_current_widget(void* self) {
    return QStackedLayout_CurrentWidget((QStackedLayout*)self);
}

int32_t q_stackedlayout_current_index(void* self) {
    return QStackedLayout_CurrentIndex((QStackedLayout*)self);
}

QWidget* q_stackedlayout_widget(void* self, int param1) {
    return QStackedLayout_Widget((QStackedLayout*)self, param1);
}

int32_t q_stackedlayout_count(void* self) {
    return QStackedLayout_Count((QStackedLayout*)self);
}

void q_stackedlayout_on_count(void* self, int32_t (*callback)()) {
    QStackedLayout_OnCount((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_qbase_count(void* self) {
    return QStackedLayout_QBaseCount((QStackedLayout*)self);
}

int32_t q_stackedlayout_stacking_mode(void* self) {
    return QStackedLayout_StackingMode((QStackedLayout*)self);
}

void q_stackedlayout_set_stacking_mode(void* self, int32_t stackingMode) {
    QStackedLayout_SetStackingMode((QStackedLayout*)self, stackingMode);
}

void q_stackedlayout_add_item(void* self, void* item) {
    QStackedLayout_AddItem((QStackedLayout*)self, (QLayoutItem*)item);
}

void q_stackedlayout_on_add_item(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnAddItem((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_qbase_add_item(void* self, void* item) {
    QStackedLayout_QBaseAddItem((QStackedLayout*)self, (QLayoutItem*)item);
}

QSize* q_stackedlayout_size_hint(void* self) {
    return QStackedLayout_SizeHint((QStackedLayout*)self);
}

void q_stackedlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QStackedLayout_OnSizeHint((QStackedLayout*)self, (intptr_t)callback);
}

QSize* q_stackedlayout_qbase_size_hint(void* self) {
    return QStackedLayout_QBaseSizeHint((QStackedLayout*)self);
}

QSize* q_stackedlayout_minimum_size(void* self) {
    return QStackedLayout_MinimumSize((QStackedLayout*)self);
}

void q_stackedlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QStackedLayout_OnMinimumSize((QStackedLayout*)self, (intptr_t)callback);
}

QSize* q_stackedlayout_qbase_minimum_size(void* self) {
    return QStackedLayout_QBaseMinimumSize((QStackedLayout*)self);
}

QLayoutItem* q_stackedlayout_item_at(void* self, int param1) {
    return QStackedLayout_ItemAt((QStackedLayout*)self, param1);
}

void q_stackedlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QStackedLayout_OnItemAt((QStackedLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_stackedlayout_qbase_item_at(void* self, int param1) {
    return QStackedLayout_QBaseItemAt((QStackedLayout*)self, param1);
}

QLayoutItem* q_stackedlayout_take_at(void* self, int param1) {
    return QStackedLayout_TakeAt((QStackedLayout*)self, param1);
}

void q_stackedlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QStackedLayout_OnTakeAt((QStackedLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_stackedlayout_qbase_take_at(void* self, int param1) {
    return QStackedLayout_QBaseTakeAt((QStackedLayout*)self, param1);
}

void q_stackedlayout_set_geometry(void* self, void* rect) {
    QStackedLayout_SetGeometry((QStackedLayout*)self, (QRect*)rect);
}

void q_stackedlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnSetGeometry((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_qbase_set_geometry(void* self, void* rect) {
    QStackedLayout_QBaseSetGeometry((QStackedLayout*)self, (QRect*)rect);
}

bool q_stackedlayout_has_height_for_width(void* self) {
    return QStackedLayout_HasHeightForWidth((QStackedLayout*)self);
}

void q_stackedlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QStackedLayout_OnHasHeightForWidth((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_qbase_has_height_for_width(void* self) {
    return QStackedLayout_QBaseHasHeightForWidth((QStackedLayout*)self);
}

int32_t q_stackedlayout_height_for_width(void* self, int width) {
    return QStackedLayout_HeightForWidth((QStackedLayout*)self, width);
}

void q_stackedlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QStackedLayout_OnHeightForWidth((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_qbase_height_for_width(void* self, int width) {
    return QStackedLayout_QBaseHeightForWidth((QStackedLayout*)self, width);
}

void q_stackedlayout_widget_removed(void* self, int index) {
    QStackedLayout_WidgetRemoved((QStackedLayout*)self, index);
}

void q_stackedlayout_on_widget_removed(void* self, void (*callback)(void*, int)) {
    QStackedLayout_Connect_WidgetRemoved((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_current_changed(void* self, int index) {
    QStackedLayout_CurrentChanged((QStackedLayout*)self, index);
}

void q_stackedlayout_on_current_changed(void* self, void (*callback)(void*, int)) {
    QStackedLayout_Connect_CurrentChanged((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_set_current_index(void* self, int index) {
    QStackedLayout_SetCurrentIndex((QStackedLayout*)self, index);
}

void q_stackedlayout_set_current_widget(void* self, void* w) {
    QStackedLayout_SetCurrentWidget((QStackedLayout*)self, (QWidget*)w);
}

const char* q_stackedlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QStackedLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stackedlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStackedLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_stackedlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_stackedlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_stackedlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_stackedlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_stackedlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_stackedlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_stackedlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_stackedlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_stackedlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_stackedlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_stackedlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_stackedlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_stackedlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_stackedlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_stackedlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_stackedlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_stackedlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_stackedlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_qbase_index_of2(void* self, void* param1) {
    return QLayout_QBaseIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_stackedlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_stackedlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_stackedlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_stackedlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_stackedlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_stackedlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_stackedlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_stackedlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_stackedlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedlayout_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_stackedlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_stackedlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_stackedlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_stackedlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_stackedlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_stackedlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_stackedlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_stackedlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_stackedlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_stackedlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_stackedlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_stackedlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_stackedlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_stackedlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_stackedlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_stackedlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_stackedlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_stackedlayout_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_stackedlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_stackedlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_stackedlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_stackedlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_stackedlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stackedlayout_dynamic_property_names");
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

QBindingStorage* q_stackedlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_stackedlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_stackedlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_stackedlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_stackedlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_stackedlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_stackedlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_stackedlayout_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_stackedlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_stackedlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_stackedlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_stackedlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_stackedlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

int32_t q_stackedlayout_spacing(void* self) {
    return QStackedLayout_Spacing((QStackedLayout*)self);
}

int32_t q_stackedlayout_qbase_spacing(void* self) {
    return QStackedLayout_QBaseSpacing((QStackedLayout*)self);
}

void q_stackedlayout_on_spacing(void* self, int32_t (*callback)()) {
    QStackedLayout_OnSpacing((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_set_spacing(void* self, int spacing) {
    QStackedLayout_SetSpacing((QStackedLayout*)self, spacing);
}

void q_stackedlayout_qbase_set_spacing(void* self, int spacing) {
    QStackedLayout_QBaseSetSpacing((QStackedLayout*)self, spacing);
}

void q_stackedlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QStackedLayout_OnSetSpacing((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_invalidate(void* self) {
    QStackedLayout_Invalidate((QStackedLayout*)self);
}

void q_stackedlayout_qbase_invalidate(void* self) {
    QStackedLayout_QBaseInvalidate((QStackedLayout*)self);
}

void q_stackedlayout_on_invalidate(void* self, void (*callback)()) {
    QStackedLayout_OnInvalidate((QStackedLayout*)self, (intptr_t)callback);
}

QRect* q_stackedlayout_geometry(void* self) {
    return QStackedLayout_Geometry((QStackedLayout*)self);
}

QRect* q_stackedlayout_qbase_geometry(void* self) {
    return QStackedLayout_QBaseGeometry((QStackedLayout*)self);
}

void q_stackedlayout_on_geometry(void* self, QRect* (*callback)()) {
    QStackedLayout_OnGeometry((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_expanding_directions(void* self) {
    return QStackedLayout_ExpandingDirections((QStackedLayout*)self);
}

int32_t q_stackedlayout_qbase_expanding_directions(void* self) {
    return QStackedLayout_QBaseExpandingDirections((QStackedLayout*)self);
}

void q_stackedlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QStackedLayout_OnExpandingDirections((QStackedLayout*)self, (intptr_t)callback);
}

QSize* q_stackedlayout_maximum_size(void* self) {
    return QStackedLayout_MaximumSize((QStackedLayout*)self);
}

QSize* q_stackedlayout_qbase_maximum_size(void* self) {
    return QStackedLayout_QBaseMaximumSize((QStackedLayout*)self);
}

void q_stackedlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QStackedLayout_OnMaximumSize((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_index_of(void* self, void* param1) {
    return QStackedLayout_IndexOf((QStackedLayout*)self, (QWidget*)param1);
}

int32_t q_stackedlayout_qbase_index_of(void* self, void* param1) {
    return QStackedLayout_QBaseIndexOf((QStackedLayout*)self, (QWidget*)param1);
}

void q_stackedlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QStackedLayout_OnIndexOf((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_is_empty(void* self) {
    return QStackedLayout_IsEmpty((QStackedLayout*)self);
}

bool q_stackedlayout_qbase_is_empty(void* self) {
    return QStackedLayout_QBaseIsEmpty((QStackedLayout*)self);
}

void q_stackedlayout_on_is_empty(void* self, bool (*callback)()) {
    QStackedLayout_OnIsEmpty((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_control_types(void* self) {
    return QStackedLayout_ControlTypes((QStackedLayout*)self);
}

int32_t q_stackedlayout_qbase_control_types(void* self) {
    return QStackedLayout_QBaseControlTypes((QStackedLayout*)self);
}

void q_stackedlayout_on_control_types(void* self, int32_t (*callback)()) {
    QStackedLayout_OnControlTypes((QStackedLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_stackedlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QStackedLayout_ReplaceWidget((QStackedLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_stackedlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QStackedLayout_QBaseReplaceWidget((QStackedLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_stackedlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QStackedLayout_OnReplaceWidget((QStackedLayout*)self, (intptr_t)callback);
}

QLayout* q_stackedlayout_layout(void* self) {
    return QStackedLayout_Layout((QStackedLayout*)self);
}

QLayout* q_stackedlayout_qbase_layout(void* self) {
    return QStackedLayout_QBaseLayout((QStackedLayout*)self);
}

void q_stackedlayout_on_layout(void* self, QLayout* (*callback)()) {
    QStackedLayout_OnLayout((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_child_event(void* self, void* e) {
    QStackedLayout_ChildEvent((QStackedLayout*)self, (QChildEvent*)e);
}

void q_stackedlayout_qbase_child_event(void* self, void* e) {
    QStackedLayout_QBaseChildEvent((QStackedLayout*)self, (QChildEvent*)e);
}

void q_stackedlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnChildEvent((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_event(void* self, void* event) {
    return QStackedLayout_Event((QStackedLayout*)self, (QEvent*)event);
}

bool q_stackedlayout_qbase_event(void* self, void* event) {
    return QStackedLayout_QBaseEvent((QStackedLayout*)self, (QEvent*)event);
}

void q_stackedlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QStackedLayout_OnEvent((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_event_filter(void* self, void* watched, void* event) {
    return QStackedLayout_EventFilter((QStackedLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_stackedlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QStackedLayout_QBaseEventFilter((QStackedLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_stackedlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStackedLayout_OnEventFilter((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_timer_event(void* self, void* event) {
    QStackedLayout_TimerEvent((QStackedLayout*)self, (QTimerEvent*)event);
}

void q_stackedlayout_qbase_timer_event(void* self, void* event) {
    QStackedLayout_QBaseTimerEvent((QStackedLayout*)self, (QTimerEvent*)event);
}

void q_stackedlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnTimerEvent((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_custom_event(void* self, void* event) {
    QStackedLayout_CustomEvent((QStackedLayout*)self, (QEvent*)event);
}

void q_stackedlayout_qbase_custom_event(void* self, void* event) {
    QStackedLayout_QBaseCustomEvent((QStackedLayout*)self, (QEvent*)event);
}

void q_stackedlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnCustomEvent((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_connect_notify(void* self, void* signal) {
    QStackedLayout_ConnectNotify((QStackedLayout*)self, (QMetaMethod*)signal);
}

void q_stackedlayout_qbase_connect_notify(void* self, void* signal) {
    QStackedLayout_QBaseConnectNotify((QStackedLayout*)self, (QMetaMethod*)signal);
}

void q_stackedlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnConnectNotify((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_disconnect_notify(void* self, void* signal) {
    QStackedLayout_DisconnectNotify((QStackedLayout*)self, (QMetaMethod*)signal);
}

void q_stackedlayout_qbase_disconnect_notify(void* self, void* signal) {
    QStackedLayout_QBaseDisconnectNotify((QStackedLayout*)self, (QMetaMethod*)signal);
}

void q_stackedlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnDisconnectNotify((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_minimum_height_for_width(void* self, int param1) {
    return QStackedLayout_MinimumHeightForWidth((QStackedLayout*)self, param1);
}

int32_t q_stackedlayout_qbase_minimum_height_for_width(void* self, int param1) {
    return QStackedLayout_QBaseMinimumHeightForWidth((QStackedLayout*)self, param1);
}

void q_stackedlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QStackedLayout_OnMinimumHeightForWidth((QStackedLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_stackedlayout_spacer_item(void* self) {
    return QStackedLayout_SpacerItem((QStackedLayout*)self);
}

QSpacerItem* q_stackedlayout_qbase_spacer_item(void* self) {
    return QStackedLayout_QBaseSpacerItem((QStackedLayout*)self);
}

void q_stackedlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QStackedLayout_OnSpacerItem((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_widget_event(void* self, void* param1) {
    QStackedLayout_WidgetEvent((QStackedLayout*)self, (QEvent*)param1);
}

void q_stackedlayout_qbase_widget_event(void* self, void* param1) {
    QStackedLayout_QBaseWidgetEvent((QStackedLayout*)self, (QEvent*)param1);
}

void q_stackedlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnWidgetEvent((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_add_child_layout(void* self, void* l) {
    QStackedLayout_AddChildLayout((QStackedLayout*)self, (QLayout*)l);
}

void q_stackedlayout_qbase_add_child_layout(void* self, void* l) {
    QStackedLayout_QBaseAddChildLayout((QStackedLayout*)self, (QLayout*)l);
}

void q_stackedlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnAddChildLayout((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_add_child_widget(void* self, void* w) {
    QStackedLayout_AddChildWidget((QStackedLayout*)self, (QWidget*)w);
}

void q_stackedlayout_qbase_add_child_widget(void* self, void* w) {
    QStackedLayout_QBaseAddChildWidget((QStackedLayout*)self, (QWidget*)w);
}

void q_stackedlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QStackedLayout_OnAddChildWidget((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_adopt_layout(void* self, void* layout) {
    return QStackedLayout_AdoptLayout((QStackedLayout*)self, (QLayout*)layout);
}

bool q_stackedlayout_qbase_adopt_layout(void* self, void* layout) {
    return QStackedLayout_QBaseAdoptLayout((QStackedLayout*)self, (QLayout*)layout);
}

void q_stackedlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QStackedLayout_OnAdoptLayout((QStackedLayout*)self, (intptr_t)callback);
}

QRect* q_stackedlayout_alignment_rect(void* self, void* param1) {
    return QStackedLayout_AlignmentRect((QStackedLayout*)self, (QRect*)param1);
}

QRect* q_stackedlayout_qbase_alignment_rect(void* self, void* param1) {
    return QStackedLayout_QBaseAlignmentRect((QStackedLayout*)self, (QRect*)param1);
}

void q_stackedlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QStackedLayout_OnAlignmentRect((QStackedLayout*)self, (intptr_t)callback);
}

QObject* q_stackedlayout_sender(void* self) {
    return QStackedLayout_Sender((QStackedLayout*)self);
}

QObject* q_stackedlayout_qbase_sender(void* self) {
    return QStackedLayout_QBaseSender((QStackedLayout*)self);
}

void q_stackedlayout_on_sender(void* self, QObject* (*callback)()) {
    QStackedLayout_OnSender((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_sender_signal_index(void* self) {
    return QStackedLayout_SenderSignalIndex((QStackedLayout*)self);
}

int32_t q_stackedlayout_qbase_sender_signal_index(void* self) {
    return QStackedLayout_QBaseSenderSignalIndex((QStackedLayout*)self);
}

void q_stackedlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStackedLayout_OnSenderSignalIndex((QStackedLayout*)self, (intptr_t)callback);
}

int32_t q_stackedlayout_receivers(void* self, const char* signal) {
    return QStackedLayout_Receivers((QStackedLayout*)self, signal);
}

int32_t q_stackedlayout_qbase_receivers(void* self, const char* signal) {
    return QStackedLayout_QBaseReceivers((QStackedLayout*)self, signal);
}

void q_stackedlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStackedLayout_OnReceivers((QStackedLayout*)self, (intptr_t)callback);
}

bool q_stackedlayout_is_signal_connected(void* self, void* signal) {
    return QStackedLayout_IsSignalConnected((QStackedLayout*)self, (QMetaMethod*)signal);
}

bool q_stackedlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QStackedLayout_QBaseIsSignalConnected((QStackedLayout*)self, (QMetaMethod*)signal);
}

void q_stackedlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStackedLayout_OnIsSignalConnected((QStackedLayout*)self, (intptr_t)callback);
}

void q_stackedlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_stackedlayout_delete(void* self) {
    QStackedLayout_Delete((QStackedLayout*)(self));
}
