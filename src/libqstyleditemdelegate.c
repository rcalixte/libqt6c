#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqstyleditemdelegate.hpp"
#include "libqstyleditemdelegate.h"

QStyledItemDelegate* q_styleditemdelegate_new() {
    return QStyledItemDelegate_New();
}

QStyledItemDelegate* q_styleditemdelegate_new2(void* parent) {
    return QStyledItemDelegate_New2((QObject*)parent);
}

const QMetaObject* q_styleditemdelegate_meta_object(const void* self) {
    return QStyledItemDelegate_MetaObject((QStyledItemDelegate*)self);
}

void q_styleditemdelegate_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QStyledItemDelegate_OnMetaObject((QStyledItemDelegate*)self, (intptr_t)callback);
}

const QMetaObject* q_styleditemdelegate_super_meta_object(const void* self) {
    return QStyledItemDelegate_SuperMetaObject((QStyledItemDelegate*)self);
}

void* q_styleditemdelegate_metacast(void* self, const char* param1) {
    return QStyledItemDelegate_Metacast((QStyledItemDelegate*)self, param1);
}

void q_styleditemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QStyledItemDelegate_OnMetacast((QStyledItemDelegate*)self, (intptr_t)callback);
}

void* q_styleditemdelegate_super_metacast(void* self, const char* param1) {
    return QStyledItemDelegate_SuperMetacast((QStyledItemDelegate*)self, param1);
}

int32_t q_styleditemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStyledItemDelegate_Metacall((QStyledItemDelegate*)self, param1, param2, param3);
}

void q_styleditemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStyledItemDelegate_OnMetacall((QStyledItemDelegate*)self, (intptr_t)callback);
}

int32_t q_styleditemdelegate_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStyledItemDelegate_SuperMetacall((QStyledItemDelegate*)self, param1, param2, param3);
}

const char* q_styleditemdelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_paint(const void* self, void* painter, const void* option, const void* index) {
    QStyledItemDelegate_Paint((QStyledItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_paint(const void* self, void (*callback)(const void*, void*, const void*, const void*)) {
    QStyledItemDelegate_OnPaint((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_super_paint(const void* self, void* painter, const void* option, const void* index) {
    QStyledItemDelegate_SuperPaint((QStyledItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QSize* q_styleditemdelegate_size_hint(const void* self, const void* option, const void* index) {
    return QStyledItemDelegate_SizeHint((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_size_hint(const void* self, QSize* (*callback)(const void*, const void*, const void*)) {
    QStyledItemDelegate_OnSizeHint((QStyledItemDelegate*)self, (intptr_t)callback);
}

QSize* q_styleditemdelegate_super_size_hint(const void* self, const void* option, const void* index) {
    return QStyledItemDelegate_SuperSizeHint((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* q_styleditemdelegate_create_editor(const void* self, void* parent, const void* option, const void* index) {
    return QStyledItemDelegate_CreateEditor((QStyledItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_create_editor(const void* self, QWidget* (*callback)(const void*, void*, const void*, const void*)) {
    QStyledItemDelegate_OnCreateEditor((QStyledItemDelegate*)self, (intptr_t)callback);
}

QWidget* q_styleditemdelegate_super_create_editor(const void* self, void* parent, const void* option, const void* index) {
    return QStyledItemDelegate_SuperCreateEditor((QStyledItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_set_editor_data(const void* self, void* editor, const void* index) {
    QStyledItemDelegate_SetEditorData((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_on_set_editor_data(const void* self, void (*callback)(const void*, void*, const void*)) {
    QStyledItemDelegate_OnSetEditorData((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_super_set_editor_data(const void* self, void* editor, const void* index) {
    QStyledItemDelegate_SuperSetEditorData((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_set_model_data(const void* self, void* editor, void* model, const void* index) {
    QStyledItemDelegate_SetModelData((QStyledItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_styleditemdelegate_on_set_model_data(const void* self, void (*callback)(const void*, void*, void*, const void*)) {
    QStyledItemDelegate_OnSetModelData((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_super_set_model_data(const void* self, void* editor, void* model, const void* index) {
    QStyledItemDelegate_SuperSetModelData((QStyledItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_styleditemdelegate_update_editor_geometry(const void* self, void* editor, const void* option, const void* index) {
    QStyledItemDelegate_UpdateEditorGeometry((QStyledItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_update_editor_geometry(const void* self, void (*callback)(const void*, void*, const void*, const void*)) {
    QStyledItemDelegate_OnUpdateEditorGeometry((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_super_update_editor_geometry(const void* self, void* editor, const void* option, const void* index) {
    QStyledItemDelegate_SuperUpdateEditorGeometry((QStyledItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QItemEditorFactory* q_styleditemdelegate_item_editor_factory(const void* self) {
    return QStyledItemDelegate_ItemEditorFactory((QStyledItemDelegate*)self);
}

void q_styleditemdelegate_set_item_editor_factory(void* self, void* factory) {
    QStyledItemDelegate_SetItemEditorFactory((QStyledItemDelegate*)self, (QItemEditorFactory*)factory);
}

const char* q_styleditemdelegate_display_text(const void* self, const void* value, const void* locale) {
    libqt_string _str = QStyledItemDelegate_DisplayText((QStyledItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_on_display_text(const void* self, const char* (*callback)(const void*, const void*, const void*)) {
    QStyledItemDelegate_OnDisplayText((QStyledItemDelegate*)self, (intptr_t)callback);
}

const char* q_styleditemdelegate_super_display_text(const void* self, const void* value, const void* locale) {
    libqt_string _str = QStyledItemDelegate_SuperDisplayText((QStyledItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_init_style_option(const void* self, void* option, const void* index) {
    QStyledItemDelegate_InitStyleOption((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_init_style_option(const void* self, void (*callback)(const void*, void*, const void*)) {
    QStyledItemDelegate_OnInitStyleOption((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_super_init_style_option(const void* self, void* option, const void* index) {
    QStyledItemDelegate_SuperInitStyleOption((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_styleditemdelegate_event_filter(void* self, void* object, void* event) {
    return QStyledItemDelegate_EventFilter((QStyledItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

void q_styleditemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStyledItemDelegate_OnEventFilter((QStyledItemDelegate*)self, (intptr_t)callback);
}

bool q_styleditemdelegate_super_event_filter(void* self, void* object, void* event) {
    return QStyledItemDelegate_SuperEventFilter((QStyledItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

bool q_styleditemdelegate_editor_event(void* self, void* event, void* model, const void* option, const void* index) {
    return QStyledItemDelegate_EditorEvent((QStyledItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*)) {
    QStyledItemDelegate_OnEditorEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

bool q_styleditemdelegate_super_editor_event(void* self, void* event, void* model, const void* option, const void* index) {
    return QStyledItemDelegate_SuperEditorEvent((QStyledItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

const char* q_styleditemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleditemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_styleditemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_styleditemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_size_hint_changed(void* self, const void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void q_styleditemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_close_editor2(void* self, void* editor, int32_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void q_styleditemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* q_styleditemdelegate_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_styleditemdelegate_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_styleditemdelegate_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_styleditemdelegate_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_styleditemdelegate_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_styleditemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_styleditemdelegate_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_styleditemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_styleditemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_styleditemdelegate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_styleditemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_styleditemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_styleditemdelegate_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_styleditemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_styleditemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_styleditemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_styleditemdelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_styleditemdelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_styleditemdelegate_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_styleditemdelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_styleditemdelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_styleditemdelegate_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_styleditemdelegate_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_styleditemdelegate_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_styleditemdelegate_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_styleditemdelegate_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_styleditemdelegate_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_styleditemdelegate_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_styleditemdelegate_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_styleditemdelegate_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_styleditemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_styleditemdelegate_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_styleditemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_styleditemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_styleditemdelegate_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_styleditemdelegate_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_styleditemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_styleditemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_styleditemdelegate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_styleditemdelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_styleditemdelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_styleditemdelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_styleditemdelegate_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_styleditemdelegate_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_styleditemdelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_styleditemdelegate_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_styleditemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_styleditemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_styleditemdelegate_destroy_editor(const void* self, void* editor, const void* index) {
    QStyledItemDelegate_DestroyEditor((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_super_destroy_editor(const void* self, void* editor, const void* index) {
    QStyledItemDelegate_SuperDestroyEditor((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_on_destroy_editor(const void* self, void (*callback)(const void*, void*, const void*)) {
    QStyledItemDelegate_OnDestroyEditor((const QStyledItemDelegate*)self, (intptr_t)callback);
}

bool q_styleditemdelegate_help_event(void* self, void* event, void* view, const void* option, const void* index) {
    return QStyledItemDelegate_HelpEvent((QStyledItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_styleditemdelegate_super_help_event(void* self, void* event, void* view, const void* option, const void* index) {
    return QStyledItemDelegate_SuperHelpEvent((QStyledItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*)) {
    QStyledItemDelegate_OnHelpEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ q_styleditemdelegate_painting_roles(const void* self) {
    libqt_list _arr = QStyledItemDelegate_PaintingRoles((QStyledItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ q_styleditemdelegate_super_painting_roles(const void* self) {
    libqt_list _arr = QStyledItemDelegate_SuperPaintingRoles((QStyledItemDelegate*)self);
    return _arr;
}

void q_styleditemdelegate_on_painting_roles(const void* self, libqt_list /* of int */ (*callback)(const void*)) {
    QStyledItemDelegate_OnPaintingRoles((const QStyledItemDelegate*)self, (intptr_t)callback);
}

bool q_styleditemdelegate_event(void* self, void* event) {
    return QStyledItemDelegate_Event((QStyledItemDelegate*)self, (QEvent*)event);
}

bool q_styleditemdelegate_super_event(void* self, void* event) {
    return QStyledItemDelegate_SuperEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    QStyledItemDelegate_OnEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_timer_event(void* self, void* event) {
    QStyledItemDelegate_TimerEvent((QStyledItemDelegate*)self, (QTimerEvent*)event);
}

void q_styleditemdelegate_super_timer_event(void* self, void* event) {
    QStyledItemDelegate_SuperTimerEvent((QStyledItemDelegate*)self, (QTimerEvent*)event);
}

void q_styleditemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStyledItemDelegate_OnTimerEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_child_event(void* self, void* event) {
    QStyledItemDelegate_ChildEvent((QStyledItemDelegate*)self, (QChildEvent*)event);
}

void q_styleditemdelegate_super_child_event(void* self, void* event) {
    QStyledItemDelegate_SuperChildEvent((QStyledItemDelegate*)self, (QChildEvent*)event);
}

void q_styleditemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStyledItemDelegate_OnChildEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_custom_event(void* self, void* event) {
    QStyledItemDelegate_CustomEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_super_custom_event(void* self, void* event) {
    QStyledItemDelegate_SuperCustomEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStyledItemDelegate_OnCustomEvent((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_connect_notify(void* self, const void* signal) {
    QStyledItemDelegate_ConnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_super_connect_notify(void* self, const void* signal) {
    QStyledItemDelegate_SuperConnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QStyledItemDelegate_OnConnectNotify((QStyledItemDelegate*)self, (intptr_t)callback);
}

void q_styleditemdelegate_disconnect_notify(void* self, const void* signal) {
    QStyledItemDelegate_DisconnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_super_disconnect_notify(void* self, const void* signal) {
    QStyledItemDelegate_SuperDisconnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QStyledItemDelegate_OnDisconnectNotify((QStyledItemDelegate*)self, (intptr_t)callback);
}

QObject* q_styleditemdelegate_sender(const void* self) {
    return QStyledItemDelegate_Sender((QStyledItemDelegate*)self);
}

int32_t q_styleditemdelegate_sender_signal_index(const void* self) {
    return QStyledItemDelegate_SenderSignalIndex((QStyledItemDelegate*)self);
}

int32_t q_styleditemdelegate_receivers(const void* self, const char* signal) {
    return QStyledItemDelegate_Receivers((QStyledItemDelegate*)self, signal);
}

bool q_styleditemdelegate_is_signal_connected(const void* self, const void* signal) {
    return QStyledItemDelegate_IsSignalConnected((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_styleditemdelegate_delete(void* self) {
    QStyledItemDelegate_Delete((QStyledItemDelegate*)(self));
}
