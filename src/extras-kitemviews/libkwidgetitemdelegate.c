#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqwidget.hpp"
#include "libkwidgetitemdelegate.hpp"
#include "libkwidgetitemdelegate.h"

KWidgetItemDelegate* k_widgetitemdelegate_new(void* itemView) {
    return KWidgetItemDelegate_new((QAbstractItemView*)itemView);
}

KWidgetItemDelegate* k_widgetitemdelegate_new2(void* itemView, void* parent) {
    return KWidgetItemDelegate_new2((QAbstractItemView*)itemView, (QObject*)parent);
}

const QMetaObject* k_widgetitemdelegate_meta_object(void* self) {
    return KWidgetItemDelegate_MetaObject((KWidgetItemDelegate*)self);
}

void k_widgetitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KWidgetItemDelegate_OnMetaObject((KWidgetItemDelegate*)self, (intptr_t)callback);
}

const QMetaObject* k_widgetitemdelegate_qbase_meta_object(void* self) {
    return KWidgetItemDelegate_QBaseMetaObject((KWidgetItemDelegate*)self);
}

void* k_widgetitemdelegate_metacast(void* self, const char* param1) {
    return KWidgetItemDelegate_Metacast((KWidgetItemDelegate*)self, param1);
}

void k_widgetitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KWidgetItemDelegate_OnMetacast((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void* k_widgetitemdelegate_qbase_metacast(void* self, const char* param1) {
    return KWidgetItemDelegate_QBaseMetacast((KWidgetItemDelegate*)self, param1);
}

int32_t k_widgetitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWidgetItemDelegate_Metacall((KWidgetItemDelegate*)self, param1, param2, param3);
}

void k_widgetitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWidgetItemDelegate_OnMetacall((KWidgetItemDelegate*)self, (intptr_t)callback);
}

int32_t k_widgetitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWidgetItemDelegate_QBaseMetacall((KWidgetItemDelegate*)self, param1, param2, param3);
}

const char* k_widgetitemdelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemView* k_widgetitemdelegate_item_view(void* self) {
    return KWidgetItemDelegate_ItemView((KWidgetItemDelegate*)self);
}

QPersistentModelIndex* k_widgetitemdelegate_focused_index(void* self) {
    return KWidgetItemDelegate_FocusedIndex((KWidgetItemDelegate*)self);
}

void k_widgetitemdelegate_reset_model(void* self) {
    KWidgetItemDelegate_ResetModel((KWidgetItemDelegate*)self);
}

libqt_list /* of QWidget* */ k_widgetitemdelegate_create_item_widgets(void* self, void* index) {
    libqt_list _arr = KWidgetItemDelegate_CreateItemWidgets((KWidgetItemDelegate*)self, (QModelIndex*)index);
    return _arr;
}

void k_widgetitemdelegate_on_create_item_widgets(void* self, QWidget** (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnCreateItemWidgets((KWidgetItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_widgetitemdelegate_qbase_create_item_widgets(void* self, void* index) {
    libqt_list _arr = KWidgetItemDelegate_QBaseCreateItemWidgets((KWidgetItemDelegate*)self, (QModelIndex*)index);
    return _arr;
}

void k_widgetitemdelegate_update_item_widgets(void* self, libqt_list /* of QWidget* */ widgets, void* option, void* index) {
    KWidgetItemDelegate_UpdateItemWidgets((KWidgetItemDelegate*)self, widgets, (QStyleOptionViewItem*)option, (QPersistentModelIndex*)index);
}

void k_widgetitemdelegate_on_update_item_widgets(void* self, void (*callback)(void*, QWidget**, void*, void*)) {
    KWidgetItemDelegate_OnUpdateItemWidgets((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_qbase_update_item_widgets(void* self, libqt_list /* of QWidget* */ widgets, void* option, void* index) {
    KWidgetItemDelegate_QBaseUpdateItemWidgets((KWidgetItemDelegate*)self, widgets, (QStyleOptionViewItem*)option, (QPersistentModelIndex*)index);
}

void k_widgetitemdelegate_set_blocked_event_types(void* self, void* widget, libqt_list /* of enum QEvent__Type */ types) {
    KWidgetItemDelegate_SetBlockedEventTypes((KWidgetItemDelegate*)self, (QWidget*)widget, types);
}

void k_widgetitemdelegate_on_set_blocked_event_types(void* self, void (*callback)(void*, void*, libqt_list /* of enum QEvent__Type */)) {
    KWidgetItemDelegate_OnSetBlockedEventTypes((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_qbase_set_blocked_event_types(void* self, void* widget, libqt_list /* of enum QEvent__Type */ types) {
    KWidgetItemDelegate_QBaseSetBlockedEventTypes((KWidgetItemDelegate*)self, (QWidget*)widget, types);
}

libqt_list /* of enum QEvent__Type */ k_widgetitemdelegate_blocked_event_types(void* self, void* widget) {
    libqt_list _arr = KWidgetItemDelegate_BlockedEventTypes((KWidgetItemDelegate*)self, (QWidget*)widget);
    return _arr;
}

void k_widgetitemdelegate_on_blocked_event_types(void* self, libqt_list /* of enum QEvent__Type */ (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnBlockedEventTypes((KWidgetItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of enum QEvent__Type */ k_widgetitemdelegate_qbase_blocked_event_types(void* self, void* widget) {
    libqt_list _arr = KWidgetItemDelegate_QBaseBlockedEventTypes((KWidgetItemDelegate*)self, (QWidget*)widget);
    return _arr;
}

const char* k_widgetitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_widgetitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_widgetitemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_widgetitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_widgetitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void k_widgetitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_close_editor2(void* self, void* editor, int32_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void k_widgetitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* k_widgetitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_widgetitemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_widgetitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_widgetitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_widgetitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_widgetitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_widgetitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_widgetitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_widgetitemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_widgetitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_widgetitemdelegate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_widgetitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_widgetitemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_widgetitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_widgetitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_widgetitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_widgetitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_widgetitemdelegate_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_widgetitemdelegate_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_widgetitemdelegate_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_widgetitemdelegate_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_widgetitemdelegate_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_widgetitemdelegate_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_widgetitemdelegate_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_widgetitemdelegate_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_widgetitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_widgetitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_widgetitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_widgetitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_widgetitemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_widgetitemdelegate_dynamic_property_names\n");
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

QBindingStorage* k_widgetitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_widgetitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_widgetitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_widgetitemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_widgetitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_widgetitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_widgetitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_widgetitemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_widgetitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_widgetitemdelegate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_widgetitemdelegate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_widgetitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_widgetitemdelegate_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_widgetitemdelegate_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_widgetitemdelegate_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_widgetitemdelegate_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_widgetitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_widgetitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_paint(void* self, void* painter, void* option, void* index) {
    KWidgetItemDelegate_Paint((KWidgetItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    KWidgetItemDelegate_QBasePaint((KWidgetItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnPaint((KWidgetItemDelegate*)self, (intptr_t)callback);
}

QSize* k_widgetitemdelegate_size_hint(void* self, void* option, void* index) {
    return KWidgetItemDelegate_SizeHint((KWidgetItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QSize* k_widgetitemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return KWidgetItemDelegate_QBaseSizeHint((KWidgetItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*)) {
    KWidgetItemDelegate_OnSizeHint((KWidgetItemDelegate*)self, (intptr_t)callback);
}

QWidget* k_widgetitemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return KWidgetItemDelegate_CreateEditor((KWidgetItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* k_widgetitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return KWidgetItemDelegate_QBaseCreateEditor((KWidgetItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnCreateEditor((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_destroy_editor(void* self, void* editor, void* index) {
    KWidgetItemDelegate_DestroyEditor((KWidgetItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_widgetitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    KWidgetItemDelegate_QBaseDestroyEditor((KWidgetItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*)) {
    KWidgetItemDelegate_OnDestroyEditor((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_set_editor_data(void* self, void* editor, void* index) {
    KWidgetItemDelegate_SetEditorData((KWidgetItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_widgetitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    KWidgetItemDelegate_QBaseSetEditorData((KWidgetItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*)) {
    KWidgetItemDelegate_OnSetEditorData((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    KWidgetItemDelegate_SetModelData((KWidgetItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_widgetitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    KWidgetItemDelegate_QBaseSetModelData((KWidgetItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnSetModelData((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KWidgetItemDelegate_UpdateEditorGeometry((KWidgetItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KWidgetItemDelegate_QBaseUpdateEditorGeometry((KWidgetItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnUpdateEditorGeometry((KWidgetItemDelegate*)self, (intptr_t)callback);
}

bool k_widgetitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KWidgetItemDelegate_EditorEvent((KWidgetItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool k_widgetitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KWidgetItemDelegate_QBaseEditorEvent((KWidgetItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnEditorEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

bool k_widgetitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KWidgetItemDelegate_HelpEvent((KWidgetItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool k_widgetitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KWidgetItemDelegate_QBaseHelpEvent((KWidgetItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_widgetitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KWidgetItemDelegate_OnHelpEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ k_widgetitemdelegate_painting_roles(void* self) {
    libqt_list _arr = KWidgetItemDelegate_PaintingRoles((KWidgetItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ k_widgetitemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = KWidgetItemDelegate_QBasePaintingRoles((KWidgetItemDelegate*)self);
    return _arr;
}

void k_widgetitemdelegate_on_painting_roles(void* self, int* (*callback)()) {
    KWidgetItemDelegate_OnPaintingRoles((KWidgetItemDelegate*)self, (intptr_t)callback);
}

bool k_widgetitemdelegate_event(void* self, void* event) {
    return KWidgetItemDelegate_Event((KWidgetItemDelegate*)self, (QEvent*)event);
}

bool k_widgetitemdelegate_qbase_event(void* self, void* event) {
    return KWidgetItemDelegate_QBaseEvent((KWidgetItemDelegate*)self, (QEvent*)event);
}

void k_widgetitemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

bool k_widgetitemdelegate_event_filter(void* self, void* watched, void* event) {
    return KWidgetItemDelegate_EventFilter((KWidgetItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

bool k_widgetitemdelegate_qbase_event_filter(void* self, void* watched, void* event) {
    return KWidgetItemDelegate_QBaseEventFilter((KWidgetItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

void k_widgetitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KWidgetItemDelegate_OnEventFilter((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_timer_event(void* self, void* event) {
    KWidgetItemDelegate_TimerEvent((KWidgetItemDelegate*)self, (QTimerEvent*)event);
}

void k_widgetitemdelegate_qbase_timer_event(void* self, void* event) {
    KWidgetItemDelegate_QBaseTimerEvent((KWidgetItemDelegate*)self, (QTimerEvent*)event);
}

void k_widgetitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnTimerEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_child_event(void* self, void* event) {
    KWidgetItemDelegate_ChildEvent((KWidgetItemDelegate*)self, (QChildEvent*)event);
}

void k_widgetitemdelegate_qbase_child_event(void* self, void* event) {
    KWidgetItemDelegate_QBaseChildEvent((KWidgetItemDelegate*)self, (QChildEvent*)event);
}

void k_widgetitemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnChildEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_custom_event(void* self, void* event) {
    KWidgetItemDelegate_CustomEvent((KWidgetItemDelegate*)self, (QEvent*)event);
}

void k_widgetitemdelegate_qbase_custom_event(void* self, void* event) {
    KWidgetItemDelegate_QBaseCustomEvent((KWidgetItemDelegate*)self, (QEvent*)event);
}

void k_widgetitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnCustomEvent((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_connect_notify(void* self, void* signal) {
    KWidgetItemDelegate_ConnectNotify((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

void k_widgetitemdelegate_qbase_connect_notify(void* self, void* signal) {
    KWidgetItemDelegate_QBaseConnectNotify((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

void k_widgetitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnConnectNotify((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_disconnect_notify(void* self, void* signal) {
    KWidgetItemDelegate_DisconnectNotify((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

void k_widgetitemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    KWidgetItemDelegate_QBaseDisconnectNotify((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

void k_widgetitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnDisconnectNotify((KWidgetItemDelegate*)self, (intptr_t)callback);
}

QObject* k_widgetitemdelegate_sender(void* self) {
    return KWidgetItemDelegate_Sender((KWidgetItemDelegate*)self);
}

QObject* k_widgetitemdelegate_qbase_sender(void* self) {
    return KWidgetItemDelegate_QBaseSender((KWidgetItemDelegate*)self);
}

void k_widgetitemdelegate_on_sender(void* self, QObject* (*callback)()) {
    KWidgetItemDelegate_OnSender((KWidgetItemDelegate*)self, (intptr_t)callback);
}

int32_t k_widgetitemdelegate_sender_signal_index(void* self) {
    return KWidgetItemDelegate_SenderSignalIndex((KWidgetItemDelegate*)self);
}

int32_t k_widgetitemdelegate_qbase_sender_signal_index(void* self) {
    return KWidgetItemDelegate_QBaseSenderSignalIndex((KWidgetItemDelegate*)self);
}

void k_widgetitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWidgetItemDelegate_OnSenderSignalIndex((KWidgetItemDelegate*)self, (intptr_t)callback);
}

int32_t k_widgetitemdelegate_receivers(void* self, const char* signal) {
    return KWidgetItemDelegate_Receivers((KWidgetItemDelegate*)self, signal);
}

int32_t k_widgetitemdelegate_qbase_receivers(void* self, const char* signal) {
    return KWidgetItemDelegate_QBaseReceivers((KWidgetItemDelegate*)self, signal);
}

void k_widgetitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWidgetItemDelegate_OnReceivers((KWidgetItemDelegate*)self, (intptr_t)callback);
}

bool k_widgetitemdelegate_is_signal_connected(void* self, void* signal) {
    return KWidgetItemDelegate_IsSignalConnected((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

bool k_widgetitemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return KWidgetItemDelegate_QBaseIsSignalConnected((KWidgetItemDelegate*)self, (QMetaMethod*)signal);
}

void k_widgetitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KWidgetItemDelegate_OnIsSignalConnected((KWidgetItemDelegate*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_widgetitemdelegate_delete(void* self) {
    KWidgetItemDelegate_Delete((KWidgetItemDelegate*)(self));
}
