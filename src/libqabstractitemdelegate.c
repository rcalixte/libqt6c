#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqwidget.hpp"
#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemdelegate.h"

QAbstractItemDelegate* q_abstractitemdelegate_new() {
    return QAbstractItemDelegate_new();
}

QAbstractItemDelegate* q_abstractitemdelegate_new2(void* parent) {
    return QAbstractItemDelegate_new2((QObject*)parent);
}

const QMetaObject* q_abstractitemdelegate_meta_object(void* self) {
    return QAbstractItemDelegate_MetaObject((QAbstractItemDelegate*)self);
}

void* q_abstractitemdelegate_metacast(void* self, const char* param1) {
    return QAbstractItemDelegate_Metacast((QAbstractItemDelegate*)self, param1);
}

int32_t q_abstractitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractItemDelegate_Metacall((QAbstractItemDelegate*)self, param1, param2, param3);
}

void q_abstractitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractItemDelegate_OnMetacall((QAbstractItemDelegate*)self, (intptr_t)callback);
}

int32_t q_abstractitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractItemDelegate_QBaseMetacall((QAbstractItemDelegate*)self, param1, param2, param3);
}

const char* q_abstractitemdelegate_tr(const char* s) {
    libqt_string _str = QAbstractItemDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractitemdelegate_paint(void* self, void* painter, void* option, void* index) {
    QAbstractItemDelegate_Paint((QAbstractItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnPaint((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    QAbstractItemDelegate_QBasePaint((QAbstractItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QSize* q_abstractitemdelegate_size_hint(void* self, void* option, void* index) {
    return QAbstractItemDelegate_SizeHint((QAbstractItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*)) {
    QAbstractItemDelegate_OnSizeHint((QAbstractItemDelegate*)self, (intptr_t)callback);
}

QSize* q_abstractitemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return QAbstractItemDelegate_QBaseSizeHint((QAbstractItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* q_abstractitemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return QAbstractItemDelegate_CreateEditor((QAbstractItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnCreateEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

QWidget* q_abstractitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return QAbstractItemDelegate_QBaseCreateEditor((QAbstractItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_destroy_editor(void* self, void* editor, void* index) {
    QAbstractItemDelegate_DestroyEditor((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemDelegate_OnDestroyEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    QAbstractItemDelegate_QBaseDestroyEditor((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_abstractitemdelegate_set_editor_data(void* self, void* editor, void* index) {
    QAbstractItemDelegate_SetEditorData((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemDelegate_OnSetEditorData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    QAbstractItemDelegate_QBaseSetEditorData((QAbstractItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_abstractitemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    QAbstractItemDelegate_SetModelData((QAbstractItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnSetModelData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    QAbstractItemDelegate_QBaseSetModelData((QAbstractItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_abstractitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QAbstractItemDelegate_UpdateEditorGeometry((QAbstractItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnUpdateEditorGeometry((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QAbstractItemDelegate_QBaseUpdateEditorGeometry((QAbstractItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_abstractitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QAbstractItemDelegate_EditorEvent((QAbstractItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnEditorEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

bool q_abstractitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QAbstractItemDelegate_QBaseEditorEvent((QAbstractItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_abstractitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QAbstractItemDelegate_HelpEvent((QAbstractItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_abstractitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    QAbstractItemDelegate_OnHelpEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

bool q_abstractitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QAbstractItemDelegate_QBaseHelpEvent((QAbstractItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

libqt_list /* of int */ q_abstractitemdelegate_painting_roles(void* self) {
    libqt_list _arr = QAbstractItemDelegate_PaintingRoles((QAbstractItemDelegate*)self);
    return _arr;
}

void q_abstractitemdelegate_on_painting_roles(void* self, int* (*callback)()) {
    QAbstractItemDelegate_OnPaintingRoles((QAbstractItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ q_abstractitemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = QAbstractItemDelegate_QBasePaintingRoles((QAbstractItemDelegate*)self);
    return _arr;
}

void q_abstractitemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_abstractitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_abstractitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void q_abstractitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* q_abstractitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractItemDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractItemDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractitemdelegate_close_editor2(void* self, void* editor, int32_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void q_abstractitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* q_abstractitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractitemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractitemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractitemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractitemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractitemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractitemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractitemdelegate_dynamic_property_names");
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

QBindingStorage* q_abstractitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractitemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstractitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractitemdelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractitemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstractitemdelegate_event(void* self, void* event) {
    return QAbstractItemDelegate_Event((QAbstractItemDelegate*)self, (QEvent*)event);
}

bool q_abstractitemdelegate_qbase_event(void* self, void* event) {
    return QAbstractItemDelegate_QBaseEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

void q_abstractitemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

bool q_abstractitemdelegate_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemDelegate_EventFilter((QAbstractItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractitemdelegate_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemDelegate_QBaseEventFilter((QAbstractItemDelegate*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractItemDelegate_OnEventFilter((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_timer_event(void* self, void* event) {
    QAbstractItemDelegate_TimerEvent((QAbstractItemDelegate*)self, (QTimerEvent*)event);
}

void q_abstractitemdelegate_qbase_timer_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseTimerEvent((QAbstractItemDelegate*)self, (QTimerEvent*)event);
}

void q_abstractitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnTimerEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_child_event(void* self, void* event) {
    QAbstractItemDelegate_ChildEvent((QAbstractItemDelegate*)self, (QChildEvent*)event);
}

void q_abstractitemdelegate_qbase_child_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseChildEvent((QAbstractItemDelegate*)self, (QChildEvent*)event);
}

void q_abstractitemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnChildEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_custom_event(void* self, void* event) {
    QAbstractItemDelegate_CustomEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

void q_abstractitemdelegate_qbase_custom_event(void* self, void* event) {
    QAbstractItemDelegate_QBaseCustomEvent((QAbstractItemDelegate*)self, (QEvent*)event);
}

void q_abstractitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnCustomEvent((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_connect_notify(void* self, void* signal) {
    QAbstractItemDelegate_ConnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

void q_abstractitemdelegate_qbase_connect_notify(void* self, void* signal) {
    QAbstractItemDelegate_QBaseConnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

void q_abstractitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnConnectNotify((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_disconnect_notify(void* self, void* signal) {
    QAbstractItemDelegate_DisconnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

void q_abstractitemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractItemDelegate_QBaseDisconnectNotify((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

void q_abstractitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnDisconnectNotify((QAbstractItemDelegate*)self, (intptr_t)callback);
}

QObject* q_abstractitemdelegate_sender(void* self) {
    return QAbstractItemDelegate_Sender((QAbstractItemDelegate*)self);
}

QObject* q_abstractitemdelegate_qbase_sender(void* self) {
    return QAbstractItemDelegate_QBaseSender((QAbstractItemDelegate*)self);
}

void q_abstractitemdelegate_on_sender(void* self, QObject* (*callback)()) {
    QAbstractItemDelegate_OnSender((QAbstractItemDelegate*)self, (intptr_t)callback);
}

int32_t q_abstractitemdelegate_sender_signal_index(void* self) {
    return QAbstractItemDelegate_SenderSignalIndex((QAbstractItemDelegate*)self);
}

int32_t q_abstractitemdelegate_qbase_sender_signal_index(void* self) {
    return QAbstractItemDelegate_QBaseSenderSignalIndex((QAbstractItemDelegate*)self);
}

void q_abstractitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractItemDelegate_OnSenderSignalIndex((QAbstractItemDelegate*)self, (intptr_t)callback);
}

int32_t q_abstractitemdelegate_receivers(void* self, const char* signal) {
    return QAbstractItemDelegate_Receivers((QAbstractItemDelegate*)self, signal);
}

int32_t q_abstractitemdelegate_qbase_receivers(void* self, const char* signal) {
    return QAbstractItemDelegate_QBaseReceivers((QAbstractItemDelegate*)self, signal);
}

void q_abstractitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractItemDelegate_OnReceivers((QAbstractItemDelegate*)self, (intptr_t)callback);
}

bool q_abstractitemdelegate_is_signal_connected(void* self, void* signal) {
    return QAbstractItemDelegate_IsSignalConnected((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

bool q_abstractitemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractItemDelegate_QBaseIsSignalConnected((QAbstractItemDelegate*)self, (QMetaMethod*)signal);
}

void q_abstractitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemDelegate_OnIsSignalConnected((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractitemdelegate_delete(void* self) {
    QAbstractItemDelegate_Delete((QAbstractItemDelegate*)(self));
}
