#include "libqcoreevent.hpp"
#include "libqlayout.hpp"
#include "libqlayoutitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqwidget.hpp"
#include "libqboxlayout.hpp"
#include "libqboxlayout.h"

QBoxLayout* q_boxlayout_new(int32_t param1) {
    return QBoxLayout_new(param1);
}

QBoxLayout* q_boxlayout_new2(int32_t param1, void* parent) {
    return QBoxLayout_new2(param1, (QWidget*)parent);
}

const QMetaObject* q_boxlayout_meta_object(void* self) {
    return QBoxLayout_MetaObject((QBoxLayout*)self);
}

void q_boxlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBoxLayout_OnMetaObject((QBoxLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_boxlayout_super_meta_object(void* self) {
    return QBoxLayout_SuperMetaObject((QBoxLayout*)self);
}

void* q_boxlayout_metacast(void* self, const char* param1) {
    return QBoxLayout_Metacast((QBoxLayout*)self, param1);
}

void q_boxlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBoxLayout_OnMetacast((QBoxLayout*)self, (intptr_t)callback);
}

void* q_boxlayout_super_metacast(void* self, const char* param1) {
    return QBoxLayout_SuperMetacast((QBoxLayout*)self, param1);
}

int32_t q_boxlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBoxLayout_Metacall((QBoxLayout*)self, param1, param2, param3);
}

void q_boxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBoxLayout_OnMetacall((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBoxLayout_SuperMetacall((QBoxLayout*)self, param1, param2, param3);
}

const char* q_boxlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_boxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

void q_boxlayout_set_direction(void* self, int32_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

void q_boxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

void q_boxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

void q_boxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

void q_boxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

void q_boxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

void q_boxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

void q_boxlayout_add_item(void* self, void* param1) {
    QBoxLayout_AddItem((QBoxLayout*)self, (QLayoutItem*)param1);
}

void q_boxlayout_on_add_item(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnAddItem((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_super_add_item(void* self, void* param1) {
    QBoxLayout_SuperAddItem((QBoxLayout*)self, (QLayoutItem*)param1);
}

void q_boxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

void q_boxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

void q_boxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

void q_boxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

void q_boxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

void q_boxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

int32_t q_boxlayout_spacing(void* self) {
    return QBoxLayout_Spacing((QBoxLayout*)self);
}

void q_boxlayout_on_spacing(void* self, int32_t (*callback)()) {
    QBoxLayout_OnSpacing((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_spacing(void* self) {
    return QBoxLayout_SuperSpacing((QBoxLayout*)self);
}

void q_boxlayout_set_spacing(void* self, int spacing) {
    QBoxLayout_SetSpacing((QBoxLayout*)self, spacing);
}

void q_boxlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QBoxLayout_OnSetSpacing((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_super_set_spacing(void* self, int spacing) {
    QBoxLayout_SuperSetSpacing((QBoxLayout*)self, spacing);
}

bool q_boxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

bool q_boxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

void q_boxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

int32_t q_boxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

QSize* q_boxlayout_size_hint(void* self) {
    return QBoxLayout_SizeHint((QBoxLayout*)self);
}

void q_boxlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QBoxLayout_OnSizeHint((QBoxLayout*)self, (intptr_t)callback);
}

QSize* q_boxlayout_super_size_hint(void* self) {
    return QBoxLayout_SuperSizeHint((QBoxLayout*)self);
}

QSize* q_boxlayout_minimum_size(void* self) {
    return QBoxLayout_MinimumSize((QBoxLayout*)self);
}

void q_boxlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QBoxLayout_OnMinimumSize((QBoxLayout*)self, (intptr_t)callback);
}

QSize* q_boxlayout_super_minimum_size(void* self) {
    return QBoxLayout_SuperMinimumSize((QBoxLayout*)self);
}

QSize* q_boxlayout_maximum_size(void* self) {
    return QBoxLayout_MaximumSize((QBoxLayout*)self);
}

void q_boxlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QBoxLayout_OnMaximumSize((QBoxLayout*)self, (intptr_t)callback);
}

QSize* q_boxlayout_super_maximum_size(void* self) {
    return QBoxLayout_SuperMaximumSize((QBoxLayout*)self);
}

bool q_boxlayout_has_height_for_width(void* self) {
    return QBoxLayout_HasHeightForWidth((QBoxLayout*)self);
}

void q_boxlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QBoxLayout_OnHasHeightForWidth((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_super_has_height_for_width(void* self) {
    return QBoxLayout_SuperHasHeightForWidth((QBoxLayout*)self);
}

int32_t q_boxlayout_height_for_width(void* self, int param1) {
    return QBoxLayout_HeightForWidth((QBoxLayout*)self, param1);
}

void q_boxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QBoxLayout_OnHeightForWidth((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_height_for_width(void* self, int param1) {
    return QBoxLayout_SuperHeightForWidth((QBoxLayout*)self, param1);
}

int32_t q_boxlayout_minimum_height_for_width(void* self, int param1) {
    return QBoxLayout_MinimumHeightForWidth((QBoxLayout*)self, param1);
}

void q_boxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QBoxLayout_OnMinimumHeightForWidth((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_minimum_height_for_width(void* self, int param1) {
    return QBoxLayout_SuperMinimumHeightForWidth((QBoxLayout*)self, param1);
}

int32_t q_boxlayout_expanding_directions(void* self) {
    return QBoxLayout_ExpandingDirections((QBoxLayout*)self);
}

void q_boxlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QBoxLayout_OnExpandingDirections((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_expanding_directions(void* self) {
    return QBoxLayout_SuperExpandingDirections((QBoxLayout*)self);
}

void q_boxlayout_invalidate(void* self) {
    QBoxLayout_Invalidate((QBoxLayout*)self);
}

void q_boxlayout_on_invalidate(void* self, void (*callback)()) {
    QBoxLayout_OnInvalidate((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_super_invalidate(void* self) {
    QBoxLayout_SuperInvalidate((QBoxLayout*)self);
}

QLayoutItem* q_boxlayout_item_at(void* self, int param1) {
    return QBoxLayout_ItemAt((QBoxLayout*)self, param1);
}

void q_boxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QBoxLayout_OnItemAt((QBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_boxlayout_super_item_at(void* self, int param1) {
    return QBoxLayout_SuperItemAt((QBoxLayout*)self, param1);
}

QLayoutItem* q_boxlayout_take_at(void* self, int param1) {
    return QBoxLayout_TakeAt((QBoxLayout*)self, param1);
}

void q_boxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QBoxLayout_OnTakeAt((QBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_boxlayout_super_take_at(void* self, int param1) {
    return QBoxLayout_SuperTakeAt((QBoxLayout*)self, param1);
}

int32_t q_boxlayout_count(void* self) {
    return QBoxLayout_Count((QBoxLayout*)self);
}

void q_boxlayout_on_count(void* self, int32_t (*callback)()) {
    QBoxLayout_OnCount((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_count(void* self) {
    return QBoxLayout_SuperCount((QBoxLayout*)self);
}

void q_boxlayout_set_geometry(void* self, void* geometry) {
    QBoxLayout_SetGeometry((QBoxLayout*)self, (QRect*)geometry);
}

void q_boxlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnSetGeometry((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_super_set_geometry(void* self, void* geometry) {
    QBoxLayout_SuperSetGeometry((QBoxLayout*)self, (QRect*)geometry);
}

const char* q_boxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_boxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

void q_boxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

void q_boxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

void q_boxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

void q_boxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

void q_boxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

void q_boxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

void q_boxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

void q_boxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_boxlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_boxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_boxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_boxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_boxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_boxlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_boxlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_boxlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_boxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_boxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_boxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_boxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_boxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_boxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_boxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_boxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_boxlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_boxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_super_index_of2(void* self, void* param1) {
    return QLayout_SuperIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_boxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_boxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_boxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_boxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_boxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_boxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_boxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_boxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_boxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxlayout_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_boxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_boxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_boxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_boxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_boxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_boxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_boxlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_boxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_boxlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_boxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_boxlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_boxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_boxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_boxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_boxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_boxlayout_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_boxlayout_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_boxlayout_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_boxlayout_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_boxlayout_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_boxlayout_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_boxlayout_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_boxlayout_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_boxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_boxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_boxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_boxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_boxlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_boxlayout_dynamic_property_names\n");
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

QBindingStorage* q_boxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_boxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_boxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_boxlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_boxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_boxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_boxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_boxlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_boxlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_boxlayout_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_boxlayout_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_boxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_boxlayout_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_boxlayout_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_boxlayout_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_boxlayout_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_boxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_boxlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_boxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

QRect* q_boxlayout_geometry(void* self) {
    return QBoxLayout_Geometry((QBoxLayout*)self);
}

QRect* q_boxlayout_super_geometry(void* self) {
    return QBoxLayout_SuperGeometry((QBoxLayout*)self);
}

void q_boxlayout_on_geometry(void* self, QRect* (*callback)()) {
    QBoxLayout_OnGeometry((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_index_of(void* self, void* param1) {
    return QBoxLayout_IndexOf((QBoxLayout*)self, (QWidget*)param1);
}

int32_t q_boxlayout_super_index_of(void* self, void* param1) {
    return QBoxLayout_SuperIndexOf((QBoxLayout*)self, (QWidget*)param1);
}

void q_boxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QBoxLayout_OnIndexOf((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_is_empty(void* self) {
    return QBoxLayout_IsEmpty((QBoxLayout*)self);
}

bool q_boxlayout_super_is_empty(void* self) {
    return QBoxLayout_SuperIsEmpty((QBoxLayout*)self);
}

void q_boxlayout_on_is_empty(void* self, bool (*callback)()) {
    QBoxLayout_OnIsEmpty((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_control_types(void* self) {
    return QBoxLayout_ControlTypes((QBoxLayout*)self);
}

int32_t q_boxlayout_super_control_types(void* self) {
    return QBoxLayout_SuperControlTypes((QBoxLayout*)self);
}

void q_boxlayout_on_control_types(void* self, int32_t (*callback)()) {
    QBoxLayout_OnControlTypes((QBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_boxlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QBoxLayout_ReplaceWidget((QBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_boxlayout_super_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QBoxLayout_SuperReplaceWidget((QBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_boxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QBoxLayout_OnReplaceWidget((QBoxLayout*)self, (intptr_t)callback);
}

QLayout* q_boxlayout_layout(void* self) {
    return QBoxLayout_Layout((QBoxLayout*)self);
}

QLayout* q_boxlayout_super_layout(void* self) {
    return QBoxLayout_SuperLayout((QBoxLayout*)self);
}

void q_boxlayout_on_layout(void* self, QLayout* (*callback)()) {
    QBoxLayout_OnLayout((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_child_event(void* self, void* e) {
    QBoxLayout_ChildEvent((QBoxLayout*)self, (QChildEvent*)e);
}

void q_boxlayout_super_child_event(void* self, void* e) {
    QBoxLayout_SuperChildEvent((QBoxLayout*)self, (QChildEvent*)e);
}

void q_boxlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnChildEvent((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_event(void* self, void* event) {
    return QBoxLayout_Event((QBoxLayout*)self, (QEvent*)event);
}

bool q_boxlayout_super_event(void* self, void* event) {
    return QBoxLayout_SuperEvent((QBoxLayout*)self, (QEvent*)event);
}

void q_boxlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QBoxLayout_OnEvent((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_event_filter(void* self, void* watched, void* event) {
    return QBoxLayout_EventFilter((QBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_boxlayout_super_event_filter(void* self, void* watched, void* event) {
    return QBoxLayout_SuperEventFilter((QBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_boxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBoxLayout_OnEventFilter((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_timer_event(void* self, void* event) {
    QBoxLayout_TimerEvent((QBoxLayout*)self, (QTimerEvent*)event);
}

void q_boxlayout_super_timer_event(void* self, void* event) {
    QBoxLayout_SuperTimerEvent((QBoxLayout*)self, (QTimerEvent*)event);
}

void q_boxlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnTimerEvent((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_custom_event(void* self, void* event) {
    QBoxLayout_CustomEvent((QBoxLayout*)self, (QEvent*)event);
}

void q_boxlayout_super_custom_event(void* self, void* event) {
    QBoxLayout_SuperCustomEvent((QBoxLayout*)self, (QEvent*)event);
}

void q_boxlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnCustomEvent((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_connect_notify(void* self, void* signal) {
    QBoxLayout_ConnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

void q_boxlayout_super_connect_notify(void* self, void* signal) {
    QBoxLayout_SuperConnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

void q_boxlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnConnectNotify((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_disconnect_notify(void* self, void* signal) {
    QBoxLayout_DisconnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

void q_boxlayout_super_disconnect_notify(void* self, void* signal) {
    QBoxLayout_SuperDisconnectNotify((QBoxLayout*)self, (QMetaMethod*)signal);
}

void q_boxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnDisconnectNotify((QBoxLayout*)self, (intptr_t)callback);
}

QWidget* q_boxlayout_widget(void* self) {
    return QBoxLayout_Widget((QBoxLayout*)self);
}

QWidget* q_boxlayout_super_widget(void* self) {
    return QBoxLayout_SuperWidget((QBoxLayout*)self);
}

void q_boxlayout_on_widget(void* self, QWidget* (*callback)()) {
    QBoxLayout_OnWidget((QBoxLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_boxlayout_spacer_item(void* self) {
    return QBoxLayout_SpacerItem((QBoxLayout*)self);
}

QSpacerItem* q_boxlayout_super_spacer_item(void* self) {
    return QBoxLayout_SuperSpacerItem((QBoxLayout*)self);
}

void q_boxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QBoxLayout_OnSpacerItem((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_widget_event(void* self, void* param1) {
    QBoxLayout_WidgetEvent((QBoxLayout*)self, (QEvent*)param1);
}

void q_boxlayout_super_widget_event(void* self, void* param1) {
    QBoxLayout_SuperWidgetEvent((QBoxLayout*)self, (QEvent*)param1);
}

void q_boxlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnWidgetEvent((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_add_child_layout(void* self, void* l) {
    QBoxLayout_AddChildLayout((QBoxLayout*)self, (QLayout*)l);
}

void q_boxlayout_super_add_child_layout(void* self, void* l) {
    QBoxLayout_SuperAddChildLayout((QBoxLayout*)self, (QLayout*)l);
}

void q_boxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnAddChildLayout((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_add_child_widget(void* self, void* w) {
    QBoxLayout_AddChildWidget((QBoxLayout*)self, (QWidget*)w);
}

void q_boxlayout_super_add_child_widget(void* self, void* w) {
    QBoxLayout_SuperAddChildWidget((QBoxLayout*)self, (QWidget*)w);
}

void q_boxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QBoxLayout_OnAddChildWidget((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_adopt_layout(void* self, void* layout) {
    return QBoxLayout_AdoptLayout((QBoxLayout*)self, (QLayout*)layout);
}

bool q_boxlayout_super_adopt_layout(void* self, void* layout) {
    return QBoxLayout_SuperAdoptLayout((QBoxLayout*)self, (QLayout*)layout);
}

void q_boxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QBoxLayout_OnAdoptLayout((QBoxLayout*)self, (intptr_t)callback);
}

QRect* q_boxlayout_alignment_rect(void* self, void* param1) {
    return QBoxLayout_AlignmentRect((QBoxLayout*)self, (QRect*)param1);
}

QRect* q_boxlayout_super_alignment_rect(void* self, void* param1) {
    return QBoxLayout_SuperAlignmentRect((QBoxLayout*)self, (QRect*)param1);
}

void q_boxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QBoxLayout_OnAlignmentRect((QBoxLayout*)self, (intptr_t)callback);
}

QObject* q_boxlayout_sender(void* self) {
    return QBoxLayout_Sender((QBoxLayout*)self);
}

QObject* q_boxlayout_super_sender(void* self) {
    return QBoxLayout_SuperSender((QBoxLayout*)self);
}

void q_boxlayout_on_sender(void* self, QObject* (*callback)()) {
    QBoxLayout_OnSender((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_sender_signal_index(void* self) {
    return QBoxLayout_SenderSignalIndex((QBoxLayout*)self);
}

int32_t q_boxlayout_super_sender_signal_index(void* self) {
    return QBoxLayout_SuperSenderSignalIndex((QBoxLayout*)self);
}

void q_boxlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBoxLayout_OnSenderSignalIndex((QBoxLayout*)self, (intptr_t)callback);
}

int32_t q_boxlayout_receivers(void* self, const char* signal) {
    return QBoxLayout_Receivers((QBoxLayout*)self, signal);
}

int32_t q_boxlayout_super_receivers(void* self, const char* signal) {
    return QBoxLayout_SuperReceivers((QBoxLayout*)self, signal);
}

void q_boxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBoxLayout_OnReceivers((QBoxLayout*)self, (intptr_t)callback);
}

bool q_boxlayout_is_signal_connected(void* self, void* signal) {
    return QBoxLayout_IsSignalConnected((QBoxLayout*)self, (QMetaMethod*)signal);
}

bool q_boxlayout_super_is_signal_connected(void* self, void* signal) {
    return QBoxLayout_SuperIsSignalConnected((QBoxLayout*)self, (QMetaMethod*)signal);
}

void q_boxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBoxLayout_OnIsSignalConnected((QBoxLayout*)self, (intptr_t)callback);
}

void q_boxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_boxlayout_delete(void* self) {
    QBoxLayout_Delete((QBoxLayout*)(self));
}

QHBoxLayout* q_hboxlayout_new(void* parent) {
    return QHBoxLayout_new((QWidget*)parent);
}

QHBoxLayout* q_hboxlayout_new2() {
    return QHBoxLayout_new2();
}

const QMetaObject* q_hboxlayout_meta_object(void* self) {
    return QHBoxLayout_MetaObject((QHBoxLayout*)self);
}

void q_hboxlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QHBoxLayout_OnMetaObject((QHBoxLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_hboxlayout_super_meta_object(void* self) {
    return QHBoxLayout_SuperMetaObject((QHBoxLayout*)self);
}

void* q_hboxlayout_metacast(void* self, const char* param1) {
    return QHBoxLayout_Metacast((QHBoxLayout*)self, param1);
}

void q_hboxlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHBoxLayout_OnMetacast((QHBoxLayout*)self, (intptr_t)callback);
}

void* q_hboxlayout_super_metacast(void* self, const char* param1) {
    return QHBoxLayout_SuperMetacast((QHBoxLayout*)self, param1);
}

int32_t q_hboxlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHBoxLayout_Metacall((QHBoxLayout*)self, param1, param2, param3);
}

void q_hboxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHBoxLayout_OnMetacall((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHBoxLayout_SuperMetacall((QHBoxLayout*)self, param1, param2, param3);
}

const char* q_hboxlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hboxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hboxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_hboxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

void q_hboxlayout_set_direction(void* self, int32_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

void q_hboxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

void q_hboxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

void q_hboxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

void q_hboxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

void q_hboxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

void q_hboxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

void q_hboxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

void q_hboxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

void q_hboxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

void q_hboxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

void q_hboxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

void q_hboxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

bool q_hboxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

bool q_hboxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

void q_hboxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

int32_t q_hboxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

void q_hboxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

void q_hboxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

void q_hboxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

void q_hboxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

void q_hboxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

void q_hboxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

void q_hboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

void q_hboxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

void q_hboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_hboxlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_hboxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_hboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_hboxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_hboxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_hboxlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_hboxlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_hboxlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_hboxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_hboxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_hboxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_hboxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_hboxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_hboxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_hboxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_hboxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_hboxlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_hboxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_super_index_of2(void* self, void* param1) {
    return QLayout_SuperIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_hboxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_hboxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_hboxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_hboxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_hboxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_hboxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_hboxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_hboxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_hboxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hboxlayout_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hboxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hboxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hboxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hboxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hboxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hboxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hboxlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hboxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_hboxlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_hboxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hboxlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hboxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hboxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hboxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hboxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hboxlayout_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_hboxlayout_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hboxlayout_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hboxlayout_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_hboxlayout_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hboxlayout_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_hboxlayout_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_hboxlayout_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_hboxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hboxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hboxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hboxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hboxlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_hboxlayout_dynamic_property_names\n");
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

QBindingStorage* q_hboxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hboxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hboxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hboxlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_hboxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hboxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hboxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_hboxlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_hboxlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_hboxlayout_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_hboxlayout_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_hboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_hboxlayout_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_hboxlayout_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_hboxlayout_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_hboxlayout_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_hboxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hboxlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_hboxlayout_add_item(void* self, void* param1) {
    QHBoxLayout_AddItem((QHBoxLayout*)self, (QLayoutItem*)param1);
}

void q_hboxlayout_super_add_item(void* self, void* param1) {
    QHBoxLayout_SuperAddItem((QHBoxLayout*)self, (QLayoutItem*)param1);
}

void q_hboxlayout_on_add_item(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnAddItem((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_spacing(void* self) {
    return QHBoxLayout_Spacing((QHBoxLayout*)self);
}

int32_t q_hboxlayout_super_spacing(void* self) {
    return QHBoxLayout_SuperSpacing((QHBoxLayout*)self);
}

void q_hboxlayout_on_spacing(void* self, int32_t (*callback)()) {
    QHBoxLayout_OnSpacing((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_set_spacing(void* self, int spacing) {
    QHBoxLayout_SetSpacing((QHBoxLayout*)self, spacing);
}

void q_hboxlayout_super_set_spacing(void* self, int spacing) {
    QHBoxLayout_SuperSetSpacing((QHBoxLayout*)self, spacing);
}

void q_hboxlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QHBoxLayout_OnSetSpacing((QHBoxLayout*)self, (intptr_t)callback);
}

QSize* q_hboxlayout_size_hint(void* self) {
    return QHBoxLayout_SizeHint((QHBoxLayout*)self);
}

QSize* q_hboxlayout_super_size_hint(void* self) {
    return QHBoxLayout_SuperSizeHint((QHBoxLayout*)self);
}

void q_hboxlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QHBoxLayout_OnSizeHint((QHBoxLayout*)self, (intptr_t)callback);
}

QSize* q_hboxlayout_minimum_size(void* self) {
    return QHBoxLayout_MinimumSize((QHBoxLayout*)self);
}

QSize* q_hboxlayout_super_minimum_size(void* self) {
    return QHBoxLayout_SuperMinimumSize((QHBoxLayout*)self);
}

void q_hboxlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QHBoxLayout_OnMinimumSize((QHBoxLayout*)self, (intptr_t)callback);
}

QSize* q_hboxlayout_maximum_size(void* self) {
    return QHBoxLayout_MaximumSize((QHBoxLayout*)self);
}

QSize* q_hboxlayout_super_maximum_size(void* self) {
    return QHBoxLayout_SuperMaximumSize((QHBoxLayout*)self);
}

void q_hboxlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QHBoxLayout_OnMaximumSize((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_has_height_for_width(void* self) {
    return QHBoxLayout_HasHeightForWidth((QHBoxLayout*)self);
}

bool q_hboxlayout_super_has_height_for_width(void* self) {
    return QHBoxLayout_SuperHasHeightForWidth((QHBoxLayout*)self);
}

void q_hboxlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QHBoxLayout_OnHasHeightForWidth((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_height_for_width(void* self, int param1) {
    return QHBoxLayout_HeightForWidth((QHBoxLayout*)self, param1);
}

int32_t q_hboxlayout_super_height_for_width(void* self, int param1) {
    return QHBoxLayout_SuperHeightForWidth((QHBoxLayout*)self, param1);
}

void q_hboxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QHBoxLayout_OnHeightForWidth((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_minimum_height_for_width(void* self, int param1) {
    return QHBoxLayout_MinimumHeightForWidth((QHBoxLayout*)self, param1);
}

int32_t q_hboxlayout_super_minimum_height_for_width(void* self, int param1) {
    return QHBoxLayout_SuperMinimumHeightForWidth((QHBoxLayout*)self, param1);
}

void q_hboxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QHBoxLayout_OnMinimumHeightForWidth((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_expanding_directions(void* self) {
    return QHBoxLayout_ExpandingDirections((QHBoxLayout*)self);
}

int32_t q_hboxlayout_super_expanding_directions(void* self) {
    return QHBoxLayout_SuperExpandingDirections((QHBoxLayout*)self);
}

void q_hboxlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QHBoxLayout_OnExpandingDirections((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_invalidate(void* self) {
    QHBoxLayout_Invalidate((QHBoxLayout*)self);
}

void q_hboxlayout_super_invalidate(void* self) {
    QHBoxLayout_SuperInvalidate((QHBoxLayout*)self);
}

void q_hboxlayout_on_invalidate(void* self, void (*callback)()) {
    QHBoxLayout_OnInvalidate((QHBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_hboxlayout_item_at(void* self, int param1) {
    return QHBoxLayout_ItemAt((QHBoxLayout*)self, param1);
}

QLayoutItem* q_hboxlayout_super_item_at(void* self, int param1) {
    return QHBoxLayout_SuperItemAt((QHBoxLayout*)self, param1);
}

void q_hboxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QHBoxLayout_OnItemAt((QHBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_hboxlayout_take_at(void* self, int param1) {
    return QHBoxLayout_TakeAt((QHBoxLayout*)self, param1);
}

QLayoutItem* q_hboxlayout_super_take_at(void* self, int param1) {
    return QHBoxLayout_SuperTakeAt((QHBoxLayout*)self, param1);
}

void q_hboxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QHBoxLayout_OnTakeAt((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_count(void* self) {
    return QHBoxLayout_Count((QHBoxLayout*)self);
}

int32_t q_hboxlayout_super_count(void* self) {
    return QHBoxLayout_SuperCount((QHBoxLayout*)self);
}

void q_hboxlayout_on_count(void* self, int32_t (*callback)()) {
    QHBoxLayout_OnCount((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_set_geometry(void* self, void* geometry) {
    QHBoxLayout_SetGeometry((QHBoxLayout*)self, (QRect*)geometry);
}

void q_hboxlayout_super_set_geometry(void* self, void* geometry) {
    QHBoxLayout_SuperSetGeometry((QHBoxLayout*)self, (QRect*)geometry);
}

void q_hboxlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnSetGeometry((QHBoxLayout*)self, (intptr_t)callback);
}

QRect* q_hboxlayout_geometry(void* self) {
    return QHBoxLayout_Geometry((QHBoxLayout*)self);
}

QRect* q_hboxlayout_super_geometry(void* self) {
    return QHBoxLayout_SuperGeometry((QHBoxLayout*)self);
}

void q_hboxlayout_on_geometry(void* self, QRect* (*callback)()) {
    QHBoxLayout_OnGeometry((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_index_of(void* self, void* param1) {
    return QHBoxLayout_IndexOf((QHBoxLayout*)self, (QWidget*)param1);
}

int32_t q_hboxlayout_super_index_of(void* self, void* param1) {
    return QHBoxLayout_SuperIndexOf((QHBoxLayout*)self, (QWidget*)param1);
}

void q_hboxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QHBoxLayout_OnIndexOf((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_is_empty(void* self) {
    return QHBoxLayout_IsEmpty((QHBoxLayout*)self);
}

bool q_hboxlayout_super_is_empty(void* self) {
    return QHBoxLayout_SuperIsEmpty((QHBoxLayout*)self);
}

void q_hboxlayout_on_is_empty(void* self, bool (*callback)()) {
    QHBoxLayout_OnIsEmpty((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_control_types(void* self) {
    return QHBoxLayout_ControlTypes((QHBoxLayout*)self);
}

int32_t q_hboxlayout_super_control_types(void* self) {
    return QHBoxLayout_SuperControlTypes((QHBoxLayout*)self);
}

void q_hboxlayout_on_control_types(void* self, int32_t (*callback)()) {
    QHBoxLayout_OnControlTypes((QHBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_hboxlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QHBoxLayout_ReplaceWidget((QHBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_hboxlayout_super_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QHBoxLayout_SuperReplaceWidget((QHBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_hboxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QHBoxLayout_OnReplaceWidget((QHBoxLayout*)self, (intptr_t)callback);
}

QLayout* q_hboxlayout_layout(void* self) {
    return QHBoxLayout_Layout((QHBoxLayout*)self);
}

QLayout* q_hboxlayout_super_layout(void* self) {
    return QHBoxLayout_SuperLayout((QHBoxLayout*)self);
}

void q_hboxlayout_on_layout(void* self, QLayout* (*callback)()) {
    QHBoxLayout_OnLayout((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_child_event(void* self, void* e) {
    QHBoxLayout_ChildEvent((QHBoxLayout*)self, (QChildEvent*)e);
}

void q_hboxlayout_super_child_event(void* self, void* e) {
    QHBoxLayout_SuperChildEvent((QHBoxLayout*)self, (QChildEvent*)e);
}

void q_hboxlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnChildEvent((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_event(void* self, void* event) {
    return QHBoxLayout_Event((QHBoxLayout*)self, (QEvent*)event);
}

bool q_hboxlayout_super_event(void* self, void* event) {
    return QHBoxLayout_SuperEvent((QHBoxLayout*)self, (QEvent*)event);
}

void q_hboxlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QHBoxLayout_OnEvent((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_event_filter(void* self, void* watched, void* event) {
    return QHBoxLayout_EventFilter((QHBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hboxlayout_super_event_filter(void* self, void* watched, void* event) {
    return QHBoxLayout_SuperEventFilter((QHBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_hboxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHBoxLayout_OnEventFilter((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_timer_event(void* self, void* event) {
    QHBoxLayout_TimerEvent((QHBoxLayout*)self, (QTimerEvent*)event);
}

void q_hboxlayout_super_timer_event(void* self, void* event) {
    QHBoxLayout_SuperTimerEvent((QHBoxLayout*)self, (QTimerEvent*)event);
}

void q_hboxlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnTimerEvent((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_custom_event(void* self, void* event) {
    QHBoxLayout_CustomEvent((QHBoxLayout*)self, (QEvent*)event);
}

void q_hboxlayout_super_custom_event(void* self, void* event) {
    QHBoxLayout_SuperCustomEvent((QHBoxLayout*)self, (QEvent*)event);
}

void q_hboxlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnCustomEvent((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_connect_notify(void* self, void* signal) {
    QHBoxLayout_ConnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

void q_hboxlayout_super_connect_notify(void* self, void* signal) {
    QHBoxLayout_SuperConnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

void q_hboxlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnConnectNotify((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_disconnect_notify(void* self, void* signal) {
    QHBoxLayout_DisconnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

void q_hboxlayout_super_disconnect_notify(void* self, void* signal) {
    QHBoxLayout_SuperDisconnectNotify((QHBoxLayout*)self, (QMetaMethod*)signal);
}

void q_hboxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnDisconnectNotify((QHBoxLayout*)self, (intptr_t)callback);
}

QWidget* q_hboxlayout_widget(void* self) {
    return QHBoxLayout_Widget((QHBoxLayout*)self);
}

QWidget* q_hboxlayout_super_widget(void* self) {
    return QHBoxLayout_SuperWidget((QHBoxLayout*)self);
}

void q_hboxlayout_on_widget(void* self, QWidget* (*callback)()) {
    QHBoxLayout_OnWidget((QHBoxLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_hboxlayout_spacer_item(void* self) {
    return QHBoxLayout_SpacerItem((QHBoxLayout*)self);
}

QSpacerItem* q_hboxlayout_super_spacer_item(void* self) {
    return QHBoxLayout_SuperSpacerItem((QHBoxLayout*)self);
}

void q_hboxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QHBoxLayout_OnSpacerItem((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_widget_event(void* self, void* param1) {
    QHBoxLayout_WidgetEvent((QHBoxLayout*)self, (QEvent*)param1);
}

void q_hboxlayout_super_widget_event(void* self, void* param1) {
    QHBoxLayout_SuperWidgetEvent((QHBoxLayout*)self, (QEvent*)param1);
}

void q_hboxlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnWidgetEvent((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_add_child_layout(void* self, void* l) {
    QHBoxLayout_AddChildLayout((QHBoxLayout*)self, (QLayout*)l);
}

void q_hboxlayout_super_add_child_layout(void* self, void* l) {
    QHBoxLayout_SuperAddChildLayout((QHBoxLayout*)self, (QLayout*)l);
}

void q_hboxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnAddChildLayout((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_add_child_widget(void* self, void* w) {
    QHBoxLayout_AddChildWidget((QHBoxLayout*)self, (QWidget*)w);
}

void q_hboxlayout_super_add_child_widget(void* self, void* w) {
    QHBoxLayout_SuperAddChildWidget((QHBoxLayout*)self, (QWidget*)w);
}

void q_hboxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QHBoxLayout_OnAddChildWidget((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_adopt_layout(void* self, void* layout) {
    return QHBoxLayout_AdoptLayout((QHBoxLayout*)self, (QLayout*)layout);
}

bool q_hboxlayout_super_adopt_layout(void* self, void* layout) {
    return QHBoxLayout_SuperAdoptLayout((QHBoxLayout*)self, (QLayout*)layout);
}

void q_hboxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QHBoxLayout_OnAdoptLayout((QHBoxLayout*)self, (intptr_t)callback);
}

QRect* q_hboxlayout_alignment_rect(void* self, void* param1) {
    return QHBoxLayout_AlignmentRect((QHBoxLayout*)self, (QRect*)param1);
}

QRect* q_hboxlayout_super_alignment_rect(void* self, void* param1) {
    return QHBoxLayout_SuperAlignmentRect((QHBoxLayout*)self, (QRect*)param1);
}

void q_hboxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QHBoxLayout_OnAlignmentRect((QHBoxLayout*)self, (intptr_t)callback);
}

QObject* q_hboxlayout_sender(void* self) {
    return QHBoxLayout_Sender((QHBoxLayout*)self);
}

QObject* q_hboxlayout_super_sender(void* self) {
    return QHBoxLayout_SuperSender((QHBoxLayout*)self);
}

void q_hboxlayout_on_sender(void* self, QObject* (*callback)()) {
    QHBoxLayout_OnSender((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_sender_signal_index(void* self) {
    return QHBoxLayout_SenderSignalIndex((QHBoxLayout*)self);
}

int32_t q_hboxlayout_super_sender_signal_index(void* self) {
    return QHBoxLayout_SuperSenderSignalIndex((QHBoxLayout*)self);
}

void q_hboxlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHBoxLayout_OnSenderSignalIndex((QHBoxLayout*)self, (intptr_t)callback);
}

int32_t q_hboxlayout_receivers(void* self, const char* signal) {
    return QHBoxLayout_Receivers((QHBoxLayout*)self, signal);
}

int32_t q_hboxlayout_super_receivers(void* self, const char* signal) {
    return QHBoxLayout_SuperReceivers((QHBoxLayout*)self, signal);
}

void q_hboxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHBoxLayout_OnReceivers((QHBoxLayout*)self, (intptr_t)callback);
}

bool q_hboxlayout_is_signal_connected(void* self, void* signal) {
    return QHBoxLayout_IsSignalConnected((QHBoxLayout*)self, (QMetaMethod*)signal);
}

bool q_hboxlayout_super_is_signal_connected(void* self, void* signal) {
    return QHBoxLayout_SuperIsSignalConnected((QHBoxLayout*)self, (QMetaMethod*)signal);
}

void q_hboxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHBoxLayout_OnIsSignalConnected((QHBoxLayout*)self, (intptr_t)callback);
}

void q_hboxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_hboxlayout_delete(void* self) {
    QHBoxLayout_Delete((QHBoxLayout*)(self));
}

QVBoxLayout* q_vboxlayout_new(void* parent) {
    return QVBoxLayout_new((QWidget*)parent);
}

QVBoxLayout* q_vboxlayout_new2() {
    return QVBoxLayout_new2();
}

const QMetaObject* q_vboxlayout_meta_object(void* self) {
    return QVBoxLayout_MetaObject((QVBoxLayout*)self);
}

void q_vboxlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QVBoxLayout_OnMetaObject((QVBoxLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_vboxlayout_super_meta_object(void* self) {
    return QVBoxLayout_SuperMetaObject((QVBoxLayout*)self);
}

void* q_vboxlayout_metacast(void* self, const char* param1) {
    return QVBoxLayout_Metacast((QVBoxLayout*)self, param1);
}

void q_vboxlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVBoxLayout_OnMetacast((QVBoxLayout*)self, (intptr_t)callback);
}

void* q_vboxlayout_super_metacast(void* self, const char* param1) {
    return QVBoxLayout_SuperMetacast((QVBoxLayout*)self, param1);
}

int32_t q_vboxlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVBoxLayout_Metacall((QVBoxLayout*)self, param1, param2, param3);
}

void q_vboxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVBoxLayout_OnMetacall((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVBoxLayout_SuperMetacall((QVBoxLayout*)self, param1, param2, param3);
}

const char* q_vboxlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_vboxlayout_direction(void* self) {
    return QBoxLayout_Direction((QBoxLayout*)self);
}

void q_vboxlayout_set_direction(void* self, int32_t direction) {
    QBoxLayout_SetDirection((QBoxLayout*)self, direction);
}

void q_vboxlayout_add_spacing(void* self, int size) {
    QBoxLayout_AddSpacing((QBoxLayout*)self, size);
}

void q_vboxlayout_add_stretch(void* self) {
    QBoxLayout_AddStretch((QBoxLayout*)self);
}

void q_vboxlayout_add_spacer_item(void* self, void* spacerItem) {
    QBoxLayout_AddSpacerItem((QBoxLayout*)self, (QSpacerItem*)spacerItem);
}

void q_vboxlayout_add_widget(void* self, void* param1) {
    QBoxLayout_AddWidget((QBoxLayout*)self, (QWidget*)param1);
}

void q_vboxlayout_add_layout(void* self, void* layout) {
    QBoxLayout_AddLayout((QBoxLayout*)self, (QLayout*)layout);
}

void q_vboxlayout_add_strut(void* self, int param1) {
    QBoxLayout_AddStrut((QBoxLayout*)self, param1);
}

void q_vboxlayout_insert_spacing(void* self, int index, int size) {
    QBoxLayout_InsertSpacing((QBoxLayout*)self, index, size);
}

void q_vboxlayout_insert_stretch(void* self, int index) {
    QBoxLayout_InsertStretch((QBoxLayout*)self, index);
}

void q_vboxlayout_insert_spacer_item(void* self, int index, void* spacerItem) {
    QBoxLayout_InsertSpacerItem((QBoxLayout*)self, index, (QSpacerItem*)spacerItem);
}

void q_vboxlayout_insert_widget(void* self, int index, void* widget) {
    QBoxLayout_InsertWidget((QBoxLayout*)self, index, (QWidget*)widget);
}

void q_vboxlayout_insert_layout(void* self, int index, void* layout) {
    QBoxLayout_InsertLayout((QBoxLayout*)self, index, (QLayout*)layout);
}

void q_vboxlayout_insert_item(void* self, int index, void* param2) {
    QBoxLayout_InsertItem((QBoxLayout*)self, index, (QLayoutItem*)param2);
}

bool q_vboxlayout_set_stretch_factor(void* self, void* w, int stretch) {
    return QBoxLayout_SetStretchFactor((QBoxLayout*)self, (QWidget*)w, stretch);
}

bool q_vboxlayout_set_stretch_factor2(void* self, void* l, int stretch) {
    return QBoxLayout_SetStretchFactor2((QBoxLayout*)self, (QLayout*)l, stretch);
}

void q_vboxlayout_set_stretch(void* self, int index, int stretch) {
    QBoxLayout_SetStretch((QBoxLayout*)self, index, stretch);
}

int32_t q_vboxlayout_stretch(void* self, int index) {
    return QBoxLayout_Stretch((QBoxLayout*)self, index);
}

void q_vboxlayout_add_stretch1(void* self, int stretch) {
    QBoxLayout_AddStretch1((QBoxLayout*)self, stretch);
}

void q_vboxlayout_add_widget2(void* self, void* param1, int stretch) {
    QBoxLayout_AddWidget2((QBoxLayout*)self, (QWidget*)param1, stretch);
}

void q_vboxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment) {
    QBoxLayout_AddWidget3((QBoxLayout*)self, (QWidget*)param1, stretch, alignment);
}

void q_vboxlayout_add_layout2(void* self, void* layout, int stretch) {
    QBoxLayout_AddLayout2((QBoxLayout*)self, (QLayout*)layout, stretch);
}

void q_vboxlayout_insert_stretch2(void* self, int index, int stretch) {
    QBoxLayout_InsertStretch2((QBoxLayout*)self, index, stretch);
}

void q_vboxlayout_insert_widget3(void* self, int index, void* widget, int stretch) {
    QBoxLayout_InsertWidget3((QBoxLayout*)self, index, (QWidget*)widget, stretch);
}

void q_vboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment) {
    QBoxLayout_InsertWidget4((QBoxLayout*)self, index, (QWidget*)widget, stretch, alignment);
}

void q_vboxlayout_insert_layout3(void* self, int index, void* layout, int stretch) {
    QBoxLayout_InsertLayout3((QBoxLayout*)self, index, (QLayout*)layout, stretch);
}

void q_vboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QLayout_SetContentsMargins((QLayout*)self, left, top, right, bottom);
}

void q_vboxlayout_set_contents_margins2(void* self, void* margins) {
    QLayout_SetContentsMargins2((QLayout*)self, (QMargins*)margins);
}

void q_vboxlayout_unset_contents_margins(void* self) {
    QLayout_UnsetContentsMargins((QLayout*)self);
}

void q_vboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom) {
    QLayout_GetContentsMargins((QLayout*)self, left, top, right, bottom);
}

QMargins* q_vboxlayout_contents_margins(void* self) {
    return QLayout_ContentsMargins((QLayout*)self);
}

QRect* q_vboxlayout_contents_rect(void* self) {
    return QLayout_ContentsRect((QLayout*)self);
}

bool q_vboxlayout_set_alignment(void* self, void* w, int32_t alignment) {
    return QLayout_SetAlignment((QLayout*)self, (QWidget*)w, alignment);
}

bool q_vboxlayout_set_alignment2(void* self, void* l, int32_t alignment) {
    return QLayout_SetAlignment2((QLayout*)self, (QLayout*)l, alignment);
}

void q_vboxlayout_set_size_constraint(void* self, int32_t sizeConstraint) {
    QLayout_SetSizeConstraint((QLayout*)self, sizeConstraint);
}

int32_t q_vboxlayout_size_constraint(void* self) {
    return QLayout_SizeConstraint((QLayout*)self);
}

void q_vboxlayout_set_menu_bar(void* self, void* w) {
    QLayout_SetMenuBar((QLayout*)self, (QWidget*)w);
}

QWidget* q_vboxlayout_menu_bar(void* self) {
    return QLayout_MenuBar((QLayout*)self);
}

QWidget* q_vboxlayout_parent_widget(void* self) {
    return QLayout_ParentWidget((QLayout*)self);
}

bool q_vboxlayout_activate(void* self) {
    return QLayout_Activate((QLayout*)self);
}

void q_vboxlayout_update(void* self) {
    QLayout_Update((QLayout*)self);
}

void q_vboxlayout_remove_widget(void* self, void* w) {
    QLayout_RemoveWidget((QLayout*)self, (QWidget*)w);
}

void q_vboxlayout_remove_item(void* self, void* param1) {
    QLayout_RemoveItem((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_vboxlayout_index_of2(void* self, void* param1) {
    return QLayout_IndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

void q_vboxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*)) {
    QLayout_OnIndexOf2((QLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_super_index_of2(void* self, void* param1) {
    return QLayout_SuperIndexOf2((QLayout*)self, (QLayoutItem*)param1);
}

int32_t q_vboxlayout_total_minimum_height_for_width(void* self, int w) {
    return QLayout_TotalMinimumHeightForWidth((QLayout*)self, w);
}

int32_t q_vboxlayout_total_height_for_width(void* self, int w) {
    return QLayout_TotalHeightForWidth((QLayout*)self, w);
}

QSize* q_vboxlayout_total_minimum_size(void* self) {
    return QLayout_TotalMinimumSize((QLayout*)self);
}

QSize* q_vboxlayout_total_maximum_size(void* self) {
    return QLayout_TotalMaximumSize((QLayout*)self);
}

QSize* q_vboxlayout_total_size_hint(void* self) {
    return QLayout_TotalSizeHint((QLayout*)self);
}

void q_vboxlayout_set_enabled(void* self, bool enabled) {
    QLayout_SetEnabled((QLayout*)self, enabled);
}

bool q_vboxlayout_is_enabled(void* self) {
    return QLayout_IsEnabled((QLayout*)self);
}

QSize* q_vboxlayout_closest_acceptable_size(void* w, void* s) {
    return QLayout_ClosestAcceptableSize((QWidget*)w, (QSize*)s);
}

const char* q_vboxlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vboxlayout_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vboxlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vboxlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vboxlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vboxlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vboxlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vboxlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_vboxlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vboxlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_vboxlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_vboxlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_vboxlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vboxlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vboxlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vboxlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vboxlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vboxlayout_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_vboxlayout_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vboxlayout_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vboxlayout_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_vboxlayout_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vboxlayout_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_vboxlayout_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_vboxlayout_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_vboxlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vboxlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vboxlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vboxlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vboxlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_vboxlayout_dynamic_property_names\n");
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

QBindingStorage* q_vboxlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vboxlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vboxlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vboxlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_vboxlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vboxlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vboxlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_vboxlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_vboxlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_vboxlayout_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_vboxlayout_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_vboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_vboxlayout_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_vboxlayout_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_vboxlayout_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_vboxlayout_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_vboxlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vboxlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

void q_vboxlayout_add_item(void* self, void* param1) {
    QVBoxLayout_AddItem((QVBoxLayout*)self, (QLayoutItem*)param1);
}

void q_vboxlayout_super_add_item(void* self, void* param1) {
    QVBoxLayout_SuperAddItem((QVBoxLayout*)self, (QLayoutItem*)param1);
}

void q_vboxlayout_on_add_item(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnAddItem((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_spacing(void* self) {
    return QVBoxLayout_Spacing((QVBoxLayout*)self);
}

int32_t q_vboxlayout_super_spacing(void* self) {
    return QVBoxLayout_SuperSpacing((QVBoxLayout*)self);
}

void q_vboxlayout_on_spacing(void* self, int32_t (*callback)()) {
    QVBoxLayout_OnSpacing((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_set_spacing(void* self, int spacing) {
    QVBoxLayout_SetSpacing((QVBoxLayout*)self, spacing);
}

void q_vboxlayout_super_set_spacing(void* self, int spacing) {
    QVBoxLayout_SuperSetSpacing((QVBoxLayout*)self, spacing);
}

void q_vboxlayout_on_set_spacing(void* self, void (*callback)(void*, int)) {
    QVBoxLayout_OnSetSpacing((QVBoxLayout*)self, (intptr_t)callback);
}

QSize* q_vboxlayout_size_hint(void* self) {
    return QVBoxLayout_SizeHint((QVBoxLayout*)self);
}

QSize* q_vboxlayout_super_size_hint(void* self) {
    return QVBoxLayout_SuperSizeHint((QVBoxLayout*)self);
}

void q_vboxlayout_on_size_hint(void* self, QSize* (*callback)()) {
    QVBoxLayout_OnSizeHint((QVBoxLayout*)self, (intptr_t)callback);
}

QSize* q_vboxlayout_minimum_size(void* self) {
    return QVBoxLayout_MinimumSize((QVBoxLayout*)self);
}

QSize* q_vboxlayout_super_minimum_size(void* self) {
    return QVBoxLayout_SuperMinimumSize((QVBoxLayout*)self);
}

void q_vboxlayout_on_minimum_size(void* self, QSize* (*callback)()) {
    QVBoxLayout_OnMinimumSize((QVBoxLayout*)self, (intptr_t)callback);
}

QSize* q_vboxlayout_maximum_size(void* self) {
    return QVBoxLayout_MaximumSize((QVBoxLayout*)self);
}

QSize* q_vboxlayout_super_maximum_size(void* self) {
    return QVBoxLayout_SuperMaximumSize((QVBoxLayout*)self);
}

void q_vboxlayout_on_maximum_size(void* self, QSize* (*callback)()) {
    QVBoxLayout_OnMaximumSize((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_has_height_for_width(void* self) {
    return QVBoxLayout_HasHeightForWidth((QVBoxLayout*)self);
}

bool q_vboxlayout_super_has_height_for_width(void* self) {
    return QVBoxLayout_SuperHasHeightForWidth((QVBoxLayout*)self);
}

void q_vboxlayout_on_has_height_for_width(void* self, bool (*callback)()) {
    QVBoxLayout_OnHasHeightForWidth((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_height_for_width(void* self, int param1) {
    return QVBoxLayout_HeightForWidth((QVBoxLayout*)self, param1);
}

int32_t q_vboxlayout_super_height_for_width(void* self, int param1) {
    return QVBoxLayout_SuperHeightForWidth((QVBoxLayout*)self, param1);
}

void q_vboxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QVBoxLayout_OnHeightForWidth((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_minimum_height_for_width(void* self, int param1) {
    return QVBoxLayout_MinimumHeightForWidth((QVBoxLayout*)self, param1);
}

int32_t q_vboxlayout_super_minimum_height_for_width(void* self, int param1) {
    return QVBoxLayout_SuperMinimumHeightForWidth((QVBoxLayout*)self, param1);
}

void q_vboxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QVBoxLayout_OnMinimumHeightForWidth((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_expanding_directions(void* self) {
    return QVBoxLayout_ExpandingDirections((QVBoxLayout*)self);
}

int32_t q_vboxlayout_super_expanding_directions(void* self) {
    return QVBoxLayout_SuperExpandingDirections((QVBoxLayout*)self);
}

void q_vboxlayout_on_expanding_directions(void* self, int32_t (*callback)()) {
    QVBoxLayout_OnExpandingDirections((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_invalidate(void* self) {
    QVBoxLayout_Invalidate((QVBoxLayout*)self);
}

void q_vboxlayout_super_invalidate(void* self) {
    QVBoxLayout_SuperInvalidate((QVBoxLayout*)self);
}

void q_vboxlayout_on_invalidate(void* self, void (*callback)()) {
    QVBoxLayout_OnInvalidate((QVBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_vboxlayout_item_at(void* self, int param1) {
    return QVBoxLayout_ItemAt((QVBoxLayout*)self, param1);
}

QLayoutItem* q_vboxlayout_super_item_at(void* self, int param1) {
    return QVBoxLayout_SuperItemAt((QVBoxLayout*)self, param1);
}

void q_vboxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QVBoxLayout_OnItemAt((QVBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_vboxlayout_take_at(void* self, int param1) {
    return QVBoxLayout_TakeAt((QVBoxLayout*)self, param1);
}

QLayoutItem* q_vboxlayout_super_take_at(void* self, int param1) {
    return QVBoxLayout_SuperTakeAt((QVBoxLayout*)self, param1);
}

void q_vboxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int)) {
    QVBoxLayout_OnTakeAt((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_count(void* self) {
    return QVBoxLayout_Count((QVBoxLayout*)self);
}

int32_t q_vboxlayout_super_count(void* self) {
    return QVBoxLayout_SuperCount((QVBoxLayout*)self);
}

void q_vboxlayout_on_count(void* self, int32_t (*callback)()) {
    QVBoxLayout_OnCount((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_set_geometry(void* self, void* geometry) {
    QVBoxLayout_SetGeometry((QVBoxLayout*)self, (QRect*)geometry);
}

void q_vboxlayout_super_set_geometry(void* self, void* geometry) {
    QVBoxLayout_SuperSetGeometry((QVBoxLayout*)self, (QRect*)geometry);
}

void q_vboxlayout_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnSetGeometry((QVBoxLayout*)self, (intptr_t)callback);
}

QRect* q_vboxlayout_geometry(void* self) {
    return QVBoxLayout_Geometry((QVBoxLayout*)self);
}

QRect* q_vboxlayout_super_geometry(void* self) {
    return QVBoxLayout_SuperGeometry((QVBoxLayout*)self);
}

void q_vboxlayout_on_geometry(void* self, QRect* (*callback)()) {
    QVBoxLayout_OnGeometry((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_index_of(void* self, void* param1) {
    return QVBoxLayout_IndexOf((QVBoxLayout*)self, (QWidget*)param1);
}

int32_t q_vboxlayout_super_index_of(void* self, void* param1) {
    return QVBoxLayout_SuperIndexOf((QVBoxLayout*)self, (QWidget*)param1);
}

void q_vboxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QVBoxLayout_OnIndexOf((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_is_empty(void* self) {
    return QVBoxLayout_IsEmpty((QVBoxLayout*)self);
}

bool q_vboxlayout_super_is_empty(void* self) {
    return QVBoxLayout_SuperIsEmpty((QVBoxLayout*)self);
}

void q_vboxlayout_on_is_empty(void* self, bool (*callback)()) {
    QVBoxLayout_OnIsEmpty((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_control_types(void* self) {
    return QVBoxLayout_ControlTypes((QVBoxLayout*)self);
}

int32_t q_vboxlayout_super_control_types(void* self) {
    return QVBoxLayout_SuperControlTypes((QVBoxLayout*)self);
}

void q_vboxlayout_on_control_types(void* self, int32_t (*callback)()) {
    QVBoxLayout_OnControlTypes((QVBoxLayout*)self, (intptr_t)callback);
}

QLayoutItem* q_vboxlayout_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QVBoxLayout_ReplaceWidget((QVBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

QLayoutItem* q_vboxlayout_super_replace_widget(void* self, void* from, void* to, int32_t options) {
    return QVBoxLayout_SuperReplaceWidget((QVBoxLayout*)self, (QWidget*)from, (QWidget*)to, options);
}

void q_vboxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t)) {
    QVBoxLayout_OnReplaceWidget((QVBoxLayout*)self, (intptr_t)callback);
}

QLayout* q_vboxlayout_layout(void* self) {
    return QVBoxLayout_Layout((QVBoxLayout*)self);
}

QLayout* q_vboxlayout_super_layout(void* self) {
    return QVBoxLayout_SuperLayout((QVBoxLayout*)self);
}

void q_vboxlayout_on_layout(void* self, QLayout* (*callback)()) {
    QVBoxLayout_OnLayout((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_child_event(void* self, void* e) {
    QVBoxLayout_ChildEvent((QVBoxLayout*)self, (QChildEvent*)e);
}

void q_vboxlayout_super_child_event(void* self, void* e) {
    QVBoxLayout_SuperChildEvent((QVBoxLayout*)self, (QChildEvent*)e);
}

void q_vboxlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnChildEvent((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_event(void* self, void* event) {
    return QVBoxLayout_Event((QVBoxLayout*)self, (QEvent*)event);
}

bool q_vboxlayout_super_event(void* self, void* event) {
    return QVBoxLayout_SuperEvent((QVBoxLayout*)self, (QEvent*)event);
}

void q_vboxlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QVBoxLayout_OnEvent((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_event_filter(void* self, void* watched, void* event) {
    return QVBoxLayout_EventFilter((QVBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vboxlayout_super_event_filter(void* self, void* watched, void* event) {
    return QVBoxLayout_SuperEventFilter((QVBoxLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_vboxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVBoxLayout_OnEventFilter((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_timer_event(void* self, void* event) {
    QVBoxLayout_TimerEvent((QVBoxLayout*)self, (QTimerEvent*)event);
}

void q_vboxlayout_super_timer_event(void* self, void* event) {
    QVBoxLayout_SuperTimerEvent((QVBoxLayout*)self, (QTimerEvent*)event);
}

void q_vboxlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnTimerEvent((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_custom_event(void* self, void* event) {
    QVBoxLayout_CustomEvent((QVBoxLayout*)self, (QEvent*)event);
}

void q_vboxlayout_super_custom_event(void* self, void* event) {
    QVBoxLayout_SuperCustomEvent((QVBoxLayout*)self, (QEvent*)event);
}

void q_vboxlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnCustomEvent((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_connect_notify(void* self, void* signal) {
    QVBoxLayout_ConnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

void q_vboxlayout_super_connect_notify(void* self, void* signal) {
    QVBoxLayout_SuperConnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

void q_vboxlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnConnectNotify((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_disconnect_notify(void* self, void* signal) {
    QVBoxLayout_DisconnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

void q_vboxlayout_super_disconnect_notify(void* self, void* signal) {
    QVBoxLayout_SuperDisconnectNotify((QVBoxLayout*)self, (QMetaMethod*)signal);
}

void q_vboxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnDisconnectNotify((QVBoxLayout*)self, (intptr_t)callback);
}

QWidget* q_vboxlayout_widget(void* self) {
    return QVBoxLayout_Widget((QVBoxLayout*)self);
}

QWidget* q_vboxlayout_super_widget(void* self) {
    return QVBoxLayout_SuperWidget((QVBoxLayout*)self);
}

void q_vboxlayout_on_widget(void* self, QWidget* (*callback)()) {
    QVBoxLayout_OnWidget((QVBoxLayout*)self, (intptr_t)callback);
}

QSpacerItem* q_vboxlayout_spacer_item(void* self) {
    return QVBoxLayout_SpacerItem((QVBoxLayout*)self);
}

QSpacerItem* q_vboxlayout_super_spacer_item(void* self) {
    return QVBoxLayout_SuperSpacerItem((QVBoxLayout*)self);
}

void q_vboxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)()) {
    QVBoxLayout_OnSpacerItem((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_widget_event(void* self, void* param1) {
    QVBoxLayout_WidgetEvent((QVBoxLayout*)self, (QEvent*)param1);
}

void q_vboxlayout_super_widget_event(void* self, void* param1) {
    QVBoxLayout_SuperWidgetEvent((QVBoxLayout*)self, (QEvent*)param1);
}

void q_vboxlayout_on_widget_event(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnWidgetEvent((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_add_child_layout(void* self, void* l) {
    QVBoxLayout_AddChildLayout((QVBoxLayout*)self, (QLayout*)l);
}

void q_vboxlayout_super_add_child_layout(void* self, void* l) {
    QVBoxLayout_SuperAddChildLayout((QVBoxLayout*)self, (QLayout*)l);
}

void q_vboxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnAddChildLayout((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_add_child_widget(void* self, void* w) {
    QVBoxLayout_AddChildWidget((QVBoxLayout*)self, (QWidget*)w);
}

void q_vboxlayout_super_add_child_widget(void* self, void* w) {
    QVBoxLayout_SuperAddChildWidget((QVBoxLayout*)self, (QWidget*)w);
}

void q_vboxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*)) {
    QVBoxLayout_OnAddChildWidget((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_adopt_layout(void* self, void* layout) {
    return QVBoxLayout_AdoptLayout((QVBoxLayout*)self, (QLayout*)layout);
}

bool q_vboxlayout_super_adopt_layout(void* self, void* layout) {
    return QVBoxLayout_SuperAdoptLayout((QVBoxLayout*)self, (QLayout*)layout);
}

void q_vboxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*)) {
    QVBoxLayout_OnAdoptLayout((QVBoxLayout*)self, (intptr_t)callback);
}

QRect* q_vboxlayout_alignment_rect(void* self, void* param1) {
    return QVBoxLayout_AlignmentRect((QVBoxLayout*)self, (QRect*)param1);
}

QRect* q_vboxlayout_super_alignment_rect(void* self, void* param1) {
    return QVBoxLayout_SuperAlignmentRect((QVBoxLayout*)self, (QRect*)param1);
}

void q_vboxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*)) {
    QVBoxLayout_OnAlignmentRect((QVBoxLayout*)self, (intptr_t)callback);
}

QObject* q_vboxlayout_sender(void* self) {
    return QVBoxLayout_Sender((QVBoxLayout*)self);
}

QObject* q_vboxlayout_super_sender(void* self) {
    return QVBoxLayout_SuperSender((QVBoxLayout*)self);
}

void q_vboxlayout_on_sender(void* self, QObject* (*callback)()) {
    QVBoxLayout_OnSender((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_sender_signal_index(void* self) {
    return QVBoxLayout_SenderSignalIndex((QVBoxLayout*)self);
}

int32_t q_vboxlayout_super_sender_signal_index(void* self) {
    return QVBoxLayout_SuperSenderSignalIndex((QVBoxLayout*)self);
}

void q_vboxlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVBoxLayout_OnSenderSignalIndex((QVBoxLayout*)self, (intptr_t)callback);
}

int32_t q_vboxlayout_receivers(void* self, const char* signal) {
    return QVBoxLayout_Receivers((QVBoxLayout*)self, signal);
}

int32_t q_vboxlayout_super_receivers(void* self, const char* signal) {
    return QVBoxLayout_SuperReceivers((QVBoxLayout*)self, signal);
}

void q_vboxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVBoxLayout_OnReceivers((QVBoxLayout*)self, (intptr_t)callback);
}

bool q_vboxlayout_is_signal_connected(void* self, void* signal) {
    return QVBoxLayout_IsSignalConnected((QVBoxLayout*)self, (QMetaMethod*)signal);
}

bool q_vboxlayout_super_is_signal_connected(void* self, void* signal) {
    return QVBoxLayout_SuperIsSignalConnected((QVBoxLayout*)self, (QMetaMethod*)signal);
}

void q_vboxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVBoxLayout_OnIsSignalConnected((QVBoxLayout*)self, (intptr_t)callback);
}

void q_vboxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_vboxlayout_delete(void* self) {
    QVBoxLayout_Delete((QVBoxLayout*)(self));
}
