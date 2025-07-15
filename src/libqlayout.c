#include "libqevent.hpp"
#include "libqlayoutitem.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqlayout.hpp"
#include "libqlayout.h"

QLayout* q_layout_new(void* parent) {
    return QLayout_new((QWidget*)parent);
}

QLayout* q_layout_new2() {
    return QLayout_new2();
}

const QMetaObject* q_layout_meta_object(void* self) {
    return QLayout_MetaObject((QLayout*)self);
}

void* q_layout_metacast(void* self, const char* param1) {
    return QLayout_Metacast((QLayout*)self, param1);
}

int32_t q_layout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLayout_Metacall((QLayout*)self, param1, param2, param3);
}

void q_layout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLayout_OnMetacall((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLayout_QBaseMetacall((QLayout*)self, param1, param2, param3);
}

const char* q_layout_tr(const char* s) {
    libqt_string _str = QLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_layout_spacing(void* self) {
    return QLayout_Spacing((QLayout*)self);
}

void q_layout_on_spacing(void* self, int32_t (*slot)()) {
    QLayout_OnSpacing((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_qbase_spacing(void* self) {
    return QLayout_QBaseSpacing((QLayout*)self);
}

void q_layout_set_spacing(void* self, int spacing) {
    QLayout_SetSpacing((QLayout*)self, spacing);
}

void q_layout_on_set_spacing(void* self, void (*slot)(void*, int)) {
    QLayout_OnSetSpacing((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_set_spacing(void* self, int spacing) {
    QLayout_QBaseSetSpacing((QLayout*)self, spacing);
}

void q_layout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_layout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_layout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_layout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_layout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_layout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_layout_set_alignment(void* self, void* w, int64_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_layout_set_alignment2(void* self, void* l, int64_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_layout_set_size_constraint(void* self, int64_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int64_t q_layout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_layout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_layout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_layout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

void q_layout_invalidate(void* self) {
    QLayout_Invalidate((QLayout*)self);
}

void q_layout_on_invalidate(void* self, void (*slot)()) {
    QLayout_OnInvalidate((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_invalidate(void* self) {
    QLayout_QBaseInvalidate((QLayout*)self);
}

QRect* q_layout_geometry(void* self) {
    return QLayout_Geometry((QLayout*)self);
}

void q_layout_on_geometry(void* self, QRect* (*slot)()) {
    QLayout_OnGeometry((QLayout*)self, (intptr_t)slot);
}

QRect* q_layout_qbase_geometry(void* self) {
    return QLayout_QBaseGeometry((QLayout*)self);
}

bool q_layout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_layout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_layout_add_widget(void* self, void* w) {
    QLayout_AddWidget((QLayout*)self, (QWidget*)w);
}

void q_layout_add_item(void* self, void* param1) {
    QLayout_AddItem((QLayout*)self, (QLayoutItem*)param1);
}

void q_layout_on_add_item(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddItem((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_add_item(void* self, void* param1) {
    QLayout_QBaseAddItem((QLayout*)self, (QLayoutItem*)param1);
}

void q_layout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_layout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int64_t q_layout_expanding_directions(void* self) {
    return QLayout_ExpandingDirections((QLayout*)self);
}

void q_layout_on_expanding_directions(void* self, int64_t (*slot)()) {
    QLayout_OnExpandingDirections((QLayout*)self, (intptr_t)slot);
}

int64_t q_layout_qbase_expanding_directions(void* self) {
    return QLayout_QBaseExpandingDirections((QLayout*)self);
}

QSize* q_layout_minimum_size(void* self) {
    return QLayout_MinimumSize((QLayout*)self);
}

void q_layout_on_minimum_size(void* self, QSize* (*slot)()) {
    QLayout_OnMinimumSize((QLayout*)self, (intptr_t)slot);
}

QSize* q_layout_qbase_minimum_size(void* self) {
    return QLayout_QBaseMinimumSize((QLayout*)self);
}

QSize* q_layout_maximum_size(void* self) {
    return QLayout_MaximumSize((QLayout*)self);
}

void q_layout_on_maximum_size(void* self, QSize* (*slot)()) {
    QLayout_OnMaximumSize((QLayout*)self, (intptr_t)slot);
}

QSize* q_layout_qbase_maximum_size(void* self) {
    return QLayout_QBaseMaximumSize((QLayout*)self);
}

void q_layout_set_geometry(void* self, void* geometry) {
    QLayout_SetGeometry((QLayout*)self, (QRect*)geometry);
}

void q_layout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QLayout_OnSetGeometry((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_set_geometry(void* self, void* geometry) {
    QLayout_QBaseSetGeometry((QLayout*)self, (QRect*)geometry);
}

QLayoutItem* q_layout_item_at(void* self, int index) {
    return QLayout_ItemAt((QLayout*)self, index);
}

void q_layout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QLayout_OnItemAt((QLayout*)self, (intptr_t)slot);
}

QLayoutItem* q_layout_qbase_item_at(void* self, int index) {
    return QLayout_QBaseItemAt((QLayout*)self, index);
}

QLayoutItem* q_layout_take_at(void* self, int index) {
    return QLayout_TakeAt((QLayout*)self, index);
}

void q_layout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int)) {
    QLayout_OnTakeAt((QLayout*)self, (intptr_t)slot);
}

QLayoutItem* q_layout_qbase_take_at(void* self, int index) {
    return QLayout_QBaseTakeAt((QLayout*)self, index);
}

int32_t q_layout_index_of(void* self, void* param1) {
    return QLayout_IndexOf((QLayout*)self, (QWidget*)param1);
}

void q_layout_on_index_of(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOf((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_qbase_index_of(void* self, void* param1) {
    return QLayout_QBaseIndexOf((QLayout*)self, (QWidget*)param1);
}

int32_t q_layout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_layout_on_index_of2(void* self, int32_t (*slot)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_qbase_index_of2(void* self, void* param1) {
    return QLayout_QBaseIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_layout_count(void* self) {
    return QLayout_Count((QLayout*)self);
}

void q_layout_on_count(void* self, int32_t (*slot)()) {
    QLayout_OnCount((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_qbase_count(void* self) {
    return QLayout_QBaseCount((QLayout*)self);
}

bool q_layout_is_empty(void* self) {
    return QLayout_IsEmpty((QLayout*)self);
}

void q_layout_on_is_empty(void* self, bool (*slot)()) {
    QLayout_OnIsEmpty((QLayout*)self, (intptr_t)slot);
}

bool q_layout_qbase_is_empty(void* self) {
    return QLayout_QBaseIsEmpty((QLayout*)self);
}

int64_t q_layout_control_types(void* self) {
    return QLayout_ControlTypes((QLayout*)self);
}

void q_layout_on_control_types(void* self, int64_t (*slot)()) {
    QLayout_OnControlTypes((QLayout*)self, (intptr_t)slot);
}

int64_t q_layout_qbase_control_types(void* self) {
    return QLayout_QBaseControlTypes((QLayout*)self);
}

QLayoutItem* q_layout_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QLayout_ReplaceWidget((QLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_layout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t)) {
    QLayout_OnReplaceWidget((QLayout*)self, (intptr_t)slot);
}

QLayoutItem* q_layout_qbase_replace_widget(void* self, void* from, void* to, int64_t options) {
    return QLayout_QBaseReplaceWidget((QLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

int32_t q_layout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_layout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_layout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_layout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_layout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

QLayout* q_layout_layout(void* self) {
    return QLayout_Layout((QLayout*)self);
}

void q_layout_on_layout(void* self, QLayout* (*slot)()) {
    QLayout_OnLayout((QLayout*)self, (intptr_t)slot);
}

QLayout* q_layout_qbase_layout(void* self) {
    return QLayout_QBaseLayout((QLayout*)self);
}

void q_layout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_layout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_layout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

void q_layout_widget_event(void* self, void* param1) {
    QLayout_WidgetEvent((QLayout*)self, (QEvent*)param1);
}

void q_layout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnWidgetEvent((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_widget_event(void* self, void* param1) {
    QLayout_QBaseWidgetEvent((QLayout*)self, (QEvent*)param1);
}

void q_layout_child_event(void* self, void* e) {
    QLayout_ChildEvent((QLayout*)self, (QChildEvent*)e);
}

void q_layout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnChildEvent((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_child_event(void* self, void* e) {
    QLayout_QBaseChildEvent((QLayout*)self, (QChildEvent*)e);
}

void q_layout_add_child_layout(void* self, void* l) {
    QLayout_AddChildLayout((QLayout*)self, (QLayout*)l);
}

void q_layout_on_add_child_layout(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddChildLayout((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_add_child_layout(void* self, void* l) {
    QLayout_QBaseAddChildLayout((QLayout*)self, (QLayout*)l);
}

void q_layout_add_child_widget(void* self, void* w) {
    QLayout_AddChildWidget((QLayout*)self, (QWidget*)w);
}

void q_layout_on_add_child_widget(void* self, void (*slot)(void*, void*)) {
    QLayout_OnAddChildWidget((QLayout*)self, (intptr_t)slot);
}

void q_layout_qbase_add_child_widget(void* self, void* w) {
    QLayout_QBaseAddChildWidget((QLayout*)self, (QWidget*)w);
}

bool q_layout_adopt_layout(void* self, void* layout) {
    return QLayout_AdoptLayout((QLayout*)self, (QLayout*)layout);
}

void q_layout_on_adopt_layout(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnAdoptLayout((QLayout*)self, (intptr_t)slot);
}

bool q_layout_qbase_adopt_layout(void* self, void* layout) {
    return QLayout_QBaseAdoptLayout((QLayout*)self, (QLayout*)layout);
}

QRect* q_layout_alignment_rect(void* self, void* param1) {
    return QLayout_AlignmentRect((QLayout*)self, (QRect*)param1);
}

void q_layout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*)) {
    QLayout_OnAlignmentRect((QLayout*)self, (intptr_t)slot);
}

QRect* q_layout_qbase_alignment_rect(void* self, void* param1) {
    return QLayout_QBaseAlignmentRect((QLayout*)self, (QRect*)param1);
}

const char* q_layout_tr2(const char* s, const char* c) {
    libqt_string _str = QLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_layout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_layout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_layout_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_layout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_layout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_layout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_layout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_layout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_layout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_layout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_layout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_layout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_layout_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_layout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_layout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_layout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_layout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_layout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_layout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_layout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_layout_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_layout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_layout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_layout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_layout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_layout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_layout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_layout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_layout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_layout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_layout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_layout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_layout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_layout_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_layout_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_layout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_layout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_layout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_layout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int64_t q_layout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

bool q_layout_event(void* self, void* event) {
    return QLayout_Event((QLayout*)self, (QEvent*)event);
}

bool q_layout_qbase_event(void* self, void* event) {
    return QLayout_QBaseEvent((QLayout*)self, (QEvent*)event);
}

void q_layout_on_event(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnEvent((QLayout*)self, (intptr_t)slot);
}

bool q_layout_event_filter(void* self, void* watched, void* event) {
    return QLayout_EventFilter((QLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_layout_qbase_event_filter(void* self, void* watched, void* event) {
    return QLayout_QBaseEventFilter((QLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_layout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLayout_OnEventFilter((QLayout*)self, (intptr_t)slot);
}

void q_layout_timer_event(void* self, void* event) {
    QLayout_TimerEvent((QLayout*)self, (QTimerEvent*)event);
}

void q_layout_qbase_timer_event(void* self, void* event) {
    QLayout_QBaseTimerEvent((QLayout*)self, (QTimerEvent*)event);
}

void q_layout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnTimerEvent((QLayout*)self, (intptr_t)slot);
}

void q_layout_custom_event(void* self, void* event) {
    QLayout_CustomEvent((QLayout*)self, (QEvent*)event);
}

void q_layout_qbase_custom_event(void* self, void* event) {
    QLayout_QBaseCustomEvent((QLayout*)self, (QEvent*)event);
}

void q_layout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLayout_OnCustomEvent((QLayout*)self, (intptr_t)slot);
}

void q_layout_connect_notify(void* self, void* signal) {
    QLayout_ConnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

void q_layout_qbase_connect_notify(void* self, void* signal) {
    QLayout_QBaseConnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

void q_layout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLayout_OnConnectNotify((QLayout*)self, (intptr_t)slot);
}

void q_layout_disconnect_notify(void* self, void* signal) {
    QLayout_DisconnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

void q_layout_qbase_disconnect_notify(void* self, void* signal) {
    QLayout_QBaseDisconnectNotify((QLayout*)self, (QMetaMethod*)signal);
}

void q_layout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLayout_OnDisconnectNotify((QLayout*)self, (intptr_t)slot);
}

QSize* q_layout_size_hint(void* self) {
    return QLayout_SizeHint((QLayout*)self);
}

QSize* q_layout_qbase_size_hint(void* self) {
    return QLayout_QBaseSizeHint((QLayout*)self);
}

void q_layout_on_size_hint(void* self, QSize* (*slot)()) {
    QLayout_OnSizeHint((QLayout*)self, (intptr_t)slot);
}

bool q_layout_has_height_for_width(void* self) {
    return QLayout_HasHeightForWidth((QLayout*)self);
}

bool q_layout_qbase_has_height_for_width(void* self) {
    return QLayout_QBaseHasHeightForWidth((QLayout*)self);
}

void q_layout_on_has_height_for_width(void* self, bool (*slot)()) {
    QLayout_OnHasHeightForWidth((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_height_for_width(void* self, int param1) {
    return QLayout_HeightForWidth((QLayout*)self, param1);
}

int32_t q_layout_qbase_height_for_width(void* self, int param1) {
    return QLayout_QBaseHeightForWidth((QLayout*)self, param1);
}

void q_layout_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayout_OnHeightForWidth((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_minimum_height_for_width(void* self, int param1) {
    return QLayout_MinimumHeightForWidth((QLayout*)self, param1);
}

int32_t q_layout_qbase_minimum_height_for_width(void* self, int param1) {
    return QLayout_QBaseMinimumHeightForWidth((QLayout*)self, param1);
}

void q_layout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayout_OnMinimumHeightForWidth((QLayout*)self, (intptr_t)slot);
}

QWidget* q_layout_widget(void* self) {
    return QLayout_Widget((QLayout*)self);
}

QWidget* q_layout_qbase_widget(void* self) {
    return QLayout_QBaseWidget((QLayout*)self);
}

void q_layout_on_widget(void* self, QWidget* (*slot)()) {
    QLayout_OnWidget((QLayout*)self, (intptr_t)slot);
}

QSpacerItem* q_layout_spacer_item(void* self) {
    return QLayout_SpacerItem((QLayout*)self);
}

QSpacerItem* q_layout_qbase_spacer_item(void* self) {
    return QLayout_QBaseSpacerItem((QLayout*)self);
}

void q_layout_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QLayout_OnSpacerItem((QLayout*)self, (intptr_t)slot);
}

QObject* q_layout_sender(void* self) {
    return QLayout_Sender((QLayout*)self);
}

QObject* q_layout_qbase_sender(void* self) {
    return QLayout_QBaseSender((QLayout*)self);
}

void q_layout_on_sender(void* self, QObject* (*slot)()) {
    QLayout_OnSender((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_sender_signal_index(void* self) {
    return QLayout_SenderSignalIndex((QLayout*)self);
}

int32_t q_layout_qbase_sender_signal_index(void* self) {
    return QLayout_QBaseSenderSignalIndex((QLayout*)self);
}

void q_layout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLayout_OnSenderSignalIndex((QLayout*)self, (intptr_t)slot);
}

int32_t q_layout_receivers(void* self, const char* signal) {
    return QLayout_Receivers((QLayout*)self, signal);
}

int32_t q_layout_qbase_receivers(void* self, const char* signal) {
    return QLayout_QBaseReceivers((QLayout*)self, signal);
}

void q_layout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLayout_OnReceivers((QLayout*)self, (intptr_t)slot);
}

bool q_layout_is_signal_connected(void* self, void* signal) {
    return QLayout_IsSignalConnected((QLayout*)self, (QMetaMethod*)signal);
}

bool q_layout_qbase_is_signal_connected(void* self, void* signal) {
    return QLayout_QBaseIsSignalConnected((QLayout*)self, (QMetaMethod*)signal);
}

void q_layout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLayout_OnIsSignalConnected((QLayout*)self, (intptr_t)slot);
}

void q_layout_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_layout_delete(void* self) {
    QLayout_Delete((QLayout*)(self));
}
