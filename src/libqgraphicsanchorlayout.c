#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqgraphicsanchorlayout.hpp"
#include "libqgraphicsanchorlayout.h"

const QMetaObject* q_graphicsanchor_meta_object(void* self) {
    return QGraphicsAnchor_MetaObject((QGraphicsAnchor*)self);
}

void* q_graphicsanchor_metacast(void* self, const char* param1) {
    return QGraphicsAnchor_Metacast((QGraphicsAnchor*)self, param1);
}

int32_t q_graphicsanchor_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsAnchor_Metacall((QGraphicsAnchor*)self, param1, param2, param3);
}

const char* q_graphicsanchor_tr(const char* s) {
    libqt_string _str = QGraphicsAnchor_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsanchor_set_spacing(void* self, double spacing) {
    QGraphicsAnchor_SetSpacing((QGraphicsAnchor*)self, spacing);
}

void q_graphicsanchor_unset_spacing(void* self) {
    QGraphicsAnchor_UnsetSpacing((QGraphicsAnchor*)self);
}

double q_graphicsanchor_spacing(void* self) {
    return QGraphicsAnchor_Spacing((QGraphicsAnchor*)self);
}

void q_graphicsanchor_set_size_policy(void* self, int64_t policy) {
    QGraphicsAnchor_SetSizePolicy((QGraphicsAnchor*)self, policy);
}

int64_t q_graphicsanchor_size_policy(void* self) {
    return QGraphicsAnchor_SizePolicy((QGraphicsAnchor*)self);
}

const char* q_graphicsanchor_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsAnchor_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsanchor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsAnchor_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_graphicsanchor_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_graphicsanchor_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_graphicsanchor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsanchor_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsanchor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsanchor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsanchor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsanchor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsanchor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsanchor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsanchor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsanchor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsanchor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsanchor_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsanchor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsanchor_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsanchor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsanchor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsanchor_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsanchor_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsanchor_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsanchor_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_graphicsanchor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsanchor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsanchor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsanchor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsanchor_dynamic_property_names(void* self) {
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

QBindingStorage* q_graphicsanchor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsanchor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsanchor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsanchor_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicsanchor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsanchor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsanchor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsanchor_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsanchor_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsanchor_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicsanchor_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicsanchor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsanchor_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_graphicsanchor_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicsanchor_delete(void* self) {
    QGraphicsAnchor_Delete((QGraphicsAnchor*)(self));
}

QGraphicsAnchorLayout* q_graphicsanchorlayout_new() {
    return QGraphicsAnchorLayout_new();
}

QGraphicsAnchorLayout* q_graphicsanchorlayout_new2(void* parent) {
    return QGraphicsAnchorLayout_new2((QGraphicsLayoutItem*)parent);
}

QGraphicsAnchor* q_graphicsanchorlayout_add_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge) {
    return QGraphicsAnchorLayout_AddAnchor((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)firstItem, firstEdge, (QGraphicsLayoutItem*)secondItem, secondEdge);
}

QGraphicsAnchor* q_graphicsanchorlayout_anchor(void* self, void* firstItem, int64_t firstEdge, void* secondItem, int64_t secondEdge) {
    return QGraphicsAnchorLayout_Anchor((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)firstItem, firstEdge, (QGraphicsLayoutItem*)secondItem, secondEdge);
}

void q_graphicsanchorlayout_add_corner_anchors(void* self, void* firstItem, int64_t firstCorner, void* secondItem, int64_t secondCorner) {
    QGraphicsAnchorLayout_AddCornerAnchors((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)firstItem, firstCorner, (QGraphicsLayoutItem*)secondItem, secondCorner);
}

void q_graphicsanchorlayout_add_anchors(void* self, void* firstItem, void* secondItem) {
    QGraphicsAnchorLayout_AddAnchors((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)firstItem, (QGraphicsLayoutItem*)secondItem);
}

void q_graphicsanchorlayout_set_horizontal_spacing(void* self, double spacing) {
    QGraphicsAnchorLayout_SetHorizontalSpacing((QGraphicsAnchorLayout*)self, spacing);
}

void q_graphicsanchorlayout_set_vertical_spacing(void* self, double spacing) {
    QGraphicsAnchorLayout_SetVerticalSpacing((QGraphicsAnchorLayout*)self, spacing);
}

void q_graphicsanchorlayout_set_spacing(void* self, double spacing) {
    QGraphicsAnchorLayout_SetSpacing((QGraphicsAnchorLayout*)self, spacing);
}

double q_graphicsanchorlayout_horizontal_spacing(void* self) {
    return QGraphicsAnchorLayout_HorizontalSpacing((QGraphicsAnchorLayout*)self);
}

double q_graphicsanchorlayout_vertical_spacing(void* self) {
    return QGraphicsAnchorLayout_VerticalSpacing((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_remove_at(void* self, int index) {
    QGraphicsAnchorLayout_RemoveAt((QGraphicsAnchorLayout*)self, index);
}

void q_graphicsanchorlayout_on_remove_at(void* self, void (*slot)(void*, int)) {
    QGraphicsAnchorLayout_OnRemoveAt((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_qbase_remove_at(void* self, int index) {
    QGraphicsAnchorLayout_QBaseRemoveAt((QGraphicsAnchorLayout*)self, index);
}

void q_graphicsanchorlayout_set_geometry(void* self, void* rect) {
    QGraphicsAnchorLayout_SetGeometry((QGraphicsAnchorLayout*)self, (QRectF*)rect);
}

void q_graphicsanchorlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsAnchorLayout_OnSetGeometry((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_qbase_set_geometry(void* self, void* rect) {
    QGraphicsAnchorLayout_QBaseSetGeometry((QGraphicsAnchorLayout*)self, (QRectF*)rect);
}

int32_t q_graphicsanchorlayout_count(void* self) {
    return QGraphicsAnchorLayout_Count((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_on_count(void* self, int32_t (*slot)()) {
    QGraphicsAnchorLayout_OnCount((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

int32_t q_graphicsanchorlayout_qbase_count(void* self) {
    return QGraphicsAnchorLayout_QBaseCount((QGraphicsAnchorLayout*)self);
}

QGraphicsLayoutItem* q_graphicsanchorlayout_item_at(void* self, int index) {
    return QGraphicsAnchorLayout_ItemAt((QGraphicsAnchorLayout*)self, index);
}

void q_graphicsanchorlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int)) {
    QGraphicsAnchorLayout_OnItemAt((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

QGraphicsLayoutItem* q_graphicsanchorlayout_qbase_item_at(void* self, int index) {
    return QGraphicsAnchorLayout_QBaseItemAt((QGraphicsAnchorLayout*)self, index);
}

void q_graphicsanchorlayout_invalidate(void* self) {
    QGraphicsAnchorLayout_Invalidate((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_on_invalidate(void* self, void (*slot)()) {
    QGraphicsAnchorLayout_OnInvalidate((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_qbase_invalidate(void* self) {
    QGraphicsAnchorLayout_QBaseInvalidate((QGraphicsAnchorLayout*)self);
}

QSizeF* q_graphicsanchorlayout_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsAnchorLayout_SizeHint((QGraphicsAnchorLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicsanchorlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsAnchorLayout_OnSizeHint((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

QSizeF* q_graphicsanchorlayout_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsAnchorLayout_QBaseSizeHint((QGraphicsAnchorLayout*)self, which, (QSizeF*)constraint);
}

void q_graphicsanchorlayout_add_anchors3(void* self, void* firstItem, void* secondItem, int64_t orientations) {
    QGraphicsAnchorLayout_AddAnchors3((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)firstItem, (QGraphicsLayoutItem*)secondItem, orientations);
}

void q_graphicsanchorlayout_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsLayout_SetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

void q_graphicsanchorlayout_activate(void* self) {
    QGraphicsLayout_Activate((QGraphicsLayout*)self);
}

bool q_graphicsanchorlayout_is_activated(void* self) {
    return QGraphicsLayout_IsActivated((QGraphicsLayout*)self);
}

void q_graphicsanchorlayout_set_instant_invalidate_propagation(bool enable) {
    QGraphicsLayout_SetInstantInvalidatePropagation(enable);
}

bool q_graphicsanchorlayout_instant_invalidate_propagation() {
    return QGraphicsLayout_InstantInvalidatePropagation();
}

void q_graphicsanchorlayout_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicsanchorlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicsanchorlayout_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsanchorlayout_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsanchorlayout_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsanchorlayout_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsanchorlayout_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsanchorlayout_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsanchorlayout_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsanchorlayout_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsanchorlayout_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsanchorlayout_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsanchorlayout_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsanchorlayout_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsanchorlayout_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsanchorlayout_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsanchorlayout_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicsanchorlayout_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_graphicsanchorlayout_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicsanchorlayout_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicsanchorlayout_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicsanchorlayout_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicsanchorlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicsanchorlayout_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicsanchorlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsAnchorLayout_GetContentsMargins((QGraphicsAnchorLayout*)self, left, top, right, bottom);
}

void q_graphicsanchorlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsAnchorLayout_QBaseGetContentsMargins((QGraphicsAnchorLayout*)self, left, top, right, bottom);
}

void q_graphicsanchorlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsAnchorLayout_OnGetContentsMargins((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_update_geometry(void* self) {
    QGraphicsAnchorLayout_UpdateGeometry((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_qbase_update_geometry(void* self) {
    QGraphicsAnchorLayout_QBaseUpdateGeometry((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsAnchorLayout_OnUpdateGeometry((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_widget_event(void* self, void* e) {
    QGraphicsAnchorLayout_WidgetEvent((QGraphicsAnchorLayout*)self, (QEvent*)e);
}

void q_graphicsanchorlayout_qbase_widget_event(void* self, void* e) {
    QGraphicsAnchorLayout_QBaseWidgetEvent((QGraphicsAnchorLayout*)self, (QEvent*)e);
}

void q_graphicsanchorlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsAnchorLayout_OnWidgetEvent((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

bool q_graphicsanchorlayout_is_empty(void* self) {
    return QGraphicsAnchorLayout_IsEmpty((QGraphicsAnchorLayout*)self);
}

bool q_graphicsanchorlayout_qbase_is_empty(void* self) {
    return QGraphicsAnchorLayout_QBaseIsEmpty((QGraphicsAnchorLayout*)self);
}

void q_graphicsanchorlayout_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsAnchorLayout_OnIsEmpty((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsAnchorLayout_AddChildLayoutItem((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicsanchorlayout_qbase_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsAnchorLayout_QBaseAddChildLayoutItem((QGraphicsAnchorLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

void q_graphicsanchorlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsAnchorLayout_OnAddChildLayoutItem((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_set_graphics_item(void* self, void* item) {
    QGraphicsAnchorLayout_SetGraphicsItem((QGraphicsAnchorLayout*)self, (QGraphicsItem*)item);
}

void q_graphicsanchorlayout_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsAnchorLayout_QBaseSetGraphicsItem((QGraphicsAnchorLayout*)self, (QGraphicsItem*)item);
}

void q_graphicsanchorlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsAnchorLayout_OnSetGraphicsItem((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsAnchorLayout_SetOwnedByLayout((QGraphicsAnchorLayout*)self, ownedByLayout);
}

void q_graphicsanchorlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsAnchorLayout_QBaseSetOwnedByLayout((QGraphicsAnchorLayout*)self, ownedByLayout);
}

void q_graphicsanchorlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsAnchorLayout_OnSetOwnedByLayout((QGraphicsAnchorLayout*)self, (intptr_t)slot);
}

void q_graphicsanchorlayout_delete(void* self) {
    QGraphicsAnchorLayout_Delete((QGraphicsAnchorLayout*)(self));
}
