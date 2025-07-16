#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqevent.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqstyleditemdelegate.hpp"
#include "libqstyleditemdelegate.h"

QStyledItemDelegate* q_styleditemdelegate_new() {
    return QStyledItemDelegate_new();
}

QStyledItemDelegate* q_styleditemdelegate_new2(void* parent) {
    return QStyledItemDelegate_new2((QObject*)parent);
}

const QMetaObject* q_styleditemdelegate_meta_object(void* self) {
    return QStyledItemDelegate_MetaObject((QStyledItemDelegate*)self);
}

void* q_styleditemdelegate_metacast(void* self, const char* param1) {
    return QStyledItemDelegate_Metacast((QStyledItemDelegate*)self, param1);
}

int32_t q_styleditemdelegate_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyledItemDelegate_Metacall((QStyledItemDelegate*)self, param1, param2, param3);
}

void q_styleditemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStyledItemDelegate_OnMetacall((QStyledItemDelegate*)self, (intptr_t)slot);
}

int32_t q_styleditemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyledItemDelegate_QBaseMetacall((QStyledItemDelegate*)self, param1, param2, param3);
}

const char* q_styleditemdelegate_tr(const char* s) {
    libqt_string _str = QStyledItemDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_paint(void* self, void* painter, void* option, void* index) {
    QStyledItemDelegate_Paint((QStyledItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QStyledItemDelegate_OnPaint((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    QStyledItemDelegate_QBasePaint((QStyledItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QSize* q_styleditemdelegate_size_hint(void* self, void* option, void* index) {
    return QStyledItemDelegate_SizeHint((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnSizeHint((QStyledItemDelegate*)self, (intptr_t)slot);
}

QSize* q_styleditemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return QStyledItemDelegate_QBaseSizeHint((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* q_styleditemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return QStyledItemDelegate_CreateEditor((QStyledItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*)) {
    QStyledItemDelegate_OnCreateEditor((QStyledItemDelegate*)self, (intptr_t)slot);
}

QWidget* q_styleditemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return QStyledItemDelegate_QBaseCreateEditor((QStyledItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_set_editor_data(void* self, void* editor, void* index) {
    QStyledItemDelegate_SetEditorData((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnSetEditorData((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    QStyledItemDelegate_QBaseSetEditorData((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    QStyledItemDelegate_SetModelData((QStyledItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_styleditemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*)) {
    QStyledItemDelegate_OnSetModelData((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    QStyledItemDelegate_QBaseSetModelData((QStyledItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_styleditemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QStyledItemDelegate_UpdateEditorGeometry((QStyledItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*)) {
    QStyledItemDelegate_OnUpdateEditorGeometry((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QStyledItemDelegate_QBaseUpdateEditorGeometry((QStyledItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QItemEditorFactory* q_styleditemdelegate_item_editor_factory(void* self) {
    return QStyledItemDelegate_ItemEditorFactory((QStyledItemDelegate*)self);
}

void q_styleditemdelegate_set_item_editor_factory(void* self, void* factory) {
    QStyledItemDelegate_SetItemEditorFactory((QStyledItemDelegate*)self, (QItemEditorFactory*)factory);
}

const char* q_styleditemdelegate_display_text(void* self, void* value, void* locale) {
    libqt_string _str = QStyledItemDelegate_DisplayText((QStyledItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_on_display_text(void* self, const char* (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnDisplayText((QStyledItemDelegate*)self, (intptr_t)slot);
}

const char* q_styleditemdelegate_qbase_display_text(void* self, void* value, void* locale) {
    libqt_string _str = QStyledItemDelegate_QBaseDisplayText((QStyledItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_init_style_option(void* self, void* option, void* index) {
    QStyledItemDelegate_InitStyleOption((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_init_style_option(void* self, void (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnInitStyleOption((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_qbase_init_style_option(void* self, void* option, void* index) {
    QStyledItemDelegate_QBaseInitStyleOption((QStyledItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_styleditemdelegate_event_filter(void* self, void* object, void* event) {
    return QStyledItemDelegate_EventFilter((QStyledItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

void q_styleditemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnEventFilter((QStyledItemDelegate*)self, (intptr_t)slot);
}

bool q_styleditemdelegate_qbase_event_filter(void* self, void* object, void* event) {
    return QStyledItemDelegate_QBaseEventFilter((QStyledItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

bool q_styleditemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QStyledItemDelegate_EditorEvent((QStyledItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QStyledItemDelegate_OnEditorEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

bool q_styleditemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QStyledItemDelegate_QBaseEditorEvent((QStyledItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

const char* q_styleditemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QStyledItemDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleditemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStyledItemDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_styleditemdelegate_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_styleditemdelegate_on_close_editor(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void q_styleditemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_close_editor2(void* self, void* editor, int64_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void q_styleditemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)slot);
}

const char* q_styleditemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleditemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_styleditemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_styleditemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_styleditemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_styleditemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_styleditemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_styleditemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_styleditemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_styleditemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_styleditemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_styleditemdelegate_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_styleditemdelegate_children(void* self) {
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

QMetaObject__Connection* q_styleditemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_styleditemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_styleditemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_styleditemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_styleditemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_styleditemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_styleditemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_styleditemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_styleditemdelegate_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_styleditemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_styleditemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_styleditemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_styleditemdelegate_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_styleditemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_styleditemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_styleditemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_styleditemdelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_styleditemdelegate_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_styleditemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_styleditemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_styleditemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_styleditemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_styleditemdelegate_destroy_editor(void* self, void* editor, void* index) {
    QStyledItemDelegate_DestroyEditor((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    QStyledItemDelegate_QBaseDestroyEditor((QStyledItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_styleditemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*)) {
    QStyledItemDelegate_OnDestroyEditor((QStyledItemDelegate*)self, (intptr_t)slot);
}

bool q_styleditemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QStyledItemDelegate_HelpEvent((QStyledItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_styleditemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QStyledItemDelegate_QBaseHelpEvent((QStyledItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_styleditemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QStyledItemDelegate_OnHelpEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

libqt_list /* of int */ q_styleditemdelegate_painting_roles(void* self) {
    libqt_list _arr = QStyledItemDelegate_PaintingRoles((QStyledItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ q_styleditemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = QStyledItemDelegate_QBasePaintingRoles((QStyledItemDelegate*)self);
    return _arr;
}

void q_styleditemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)()) {
    QStyledItemDelegate_OnPaintingRoles((QStyledItemDelegate*)self, (intptr_t)slot);
}

bool q_styleditemdelegate_event(void* self, void* event) {
    return QStyledItemDelegate_Event((QStyledItemDelegate*)self, (QEvent*)event);
}

bool q_styleditemdelegate_qbase_event(void* self, void* event) {
    return QStyledItemDelegate_QBaseEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_on_event(void* self, bool (*slot)(void*, void*)) {
    QStyledItemDelegate_OnEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_timer_event(void* self, void* event) {
    QStyledItemDelegate_TimerEvent((QStyledItemDelegate*)self, (QTimerEvent*)event);
}

void q_styleditemdelegate_qbase_timer_event(void* self, void* event) {
    QStyledItemDelegate_QBaseTimerEvent((QStyledItemDelegate*)self, (QTimerEvent*)event);
}

void q_styleditemdelegate_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStyledItemDelegate_OnTimerEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_child_event(void* self, void* event) {
    QStyledItemDelegate_ChildEvent((QStyledItemDelegate*)self, (QChildEvent*)event);
}

void q_styleditemdelegate_qbase_child_event(void* self, void* event) {
    QStyledItemDelegate_QBaseChildEvent((QStyledItemDelegate*)self, (QChildEvent*)event);
}

void q_styleditemdelegate_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStyledItemDelegate_OnChildEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_custom_event(void* self, void* event) {
    QStyledItemDelegate_CustomEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_qbase_custom_event(void* self, void* event) {
    QStyledItemDelegate_QBaseCustomEvent((QStyledItemDelegate*)self, (QEvent*)event);
}

void q_styleditemdelegate_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStyledItemDelegate_OnCustomEvent((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_connect_notify(void* self, void* signal) {
    QStyledItemDelegate_ConnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_qbase_connect_notify(void* self, void* signal) {
    QStyledItemDelegate_QBaseConnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStyledItemDelegate_OnConnectNotify((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_disconnect_notify(void* self, void* signal) {
    QStyledItemDelegate_DisconnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    QStyledItemDelegate_QBaseDisconnectNotify((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStyledItemDelegate_OnDisconnectNotify((QStyledItemDelegate*)self, (intptr_t)slot);
}

QObject* q_styleditemdelegate_sender(void* self) {
    return QStyledItemDelegate_Sender((QStyledItemDelegate*)self);
}

QObject* q_styleditemdelegate_qbase_sender(void* self) {
    return QStyledItemDelegate_QBaseSender((QStyledItemDelegate*)self);
}

void q_styleditemdelegate_on_sender(void* self, QObject* (*slot)()) {
    QStyledItemDelegate_OnSender((QStyledItemDelegate*)self, (intptr_t)slot);
}

int32_t q_styleditemdelegate_sender_signal_index(void* self) {
    return QStyledItemDelegate_SenderSignalIndex((QStyledItemDelegate*)self);
}

int32_t q_styleditemdelegate_qbase_sender_signal_index(void* self) {
    return QStyledItemDelegate_QBaseSenderSignalIndex((QStyledItemDelegate*)self);
}

void q_styleditemdelegate_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStyledItemDelegate_OnSenderSignalIndex((QStyledItemDelegate*)self, (intptr_t)slot);
}

int32_t q_styleditemdelegate_receivers(void* self, const char* signal) {
    return QStyledItemDelegate_Receivers((QStyledItemDelegate*)self, signal);
}

int32_t q_styleditemdelegate_qbase_receivers(void* self, const char* signal) {
    return QStyledItemDelegate_QBaseReceivers((QStyledItemDelegate*)self, signal);
}

void q_styleditemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStyledItemDelegate_OnReceivers((QStyledItemDelegate*)self, (intptr_t)slot);
}

bool q_styleditemdelegate_is_signal_connected(void* self, void* signal) {
    return QStyledItemDelegate_IsSignalConnected((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

bool q_styleditemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return QStyledItemDelegate_QBaseIsSignalConnected((QStyledItemDelegate*)self, (QMetaMethod*)signal);
}

void q_styleditemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStyledItemDelegate_OnIsSignalConnected((QStyledItemDelegate*)self, (intptr_t)slot);
}

void q_styleditemdelegate_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_styleditemdelegate_delete(void* self) {
    QStyledItemDelegate_Delete((QStyledItemDelegate*)(self));
}
