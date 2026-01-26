#include "libkfileitem.hpp"
#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqwidget.hpp"
#include "libkfileitemdelegate.hpp"
#include "libkfileitemdelegate.h"

KFileItemDelegate* k_fileitemdelegate_new() {
    return KFileItemDelegate_new();
}

KFileItemDelegate* k_fileitemdelegate_new2(void* parent) {
    return KFileItemDelegate_new2((QObject*)parent);
}

const QMetaObject* k_fileitemdelegate_meta_object(void* self) {
    return KFileItemDelegate_MetaObject((KFileItemDelegate*)self);
}

void k_fileitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFileItemDelegate_OnMetaObject((KFileItemDelegate*)self, (intptr_t)callback);
}

const QMetaObject* k_fileitemdelegate_qbase_meta_object(void* self) {
    return KFileItemDelegate_QBaseMetaObject((KFileItemDelegate*)self);
}

void* k_fileitemdelegate_metacast(void* self, const char* param1) {
    return KFileItemDelegate_Metacast((KFileItemDelegate*)self, param1);
}

void k_fileitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFileItemDelegate_OnMetacast((KFileItemDelegate*)self, (intptr_t)callback);
}

void* k_fileitemdelegate_qbase_metacast(void* self, const char* param1) {
    return KFileItemDelegate_QBaseMetacast((KFileItemDelegate*)self, param1);
}

int32_t k_fileitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileItemDelegate_Metacall((KFileItemDelegate*)self, param1, param2, param3);
}

void k_fileitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileItemDelegate_OnMetacall((KFileItemDelegate*)self, (intptr_t)callback);
}

int32_t k_fileitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileItemDelegate_QBaseMetacall((KFileItemDelegate*)self, param1, param2, param3);
}

const char* k_fileitemdelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_fileitemdelegate_size_hint(void* self, void* option, void* index) {
    return KFileItemDelegate_SizeHint((KFileItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*)) {
    KFileItemDelegate_OnSizeHint((KFileItemDelegate*)self, (intptr_t)callback);
}

QSize* k_fileitemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return KFileItemDelegate_QBaseSizeHint((KFileItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_paint(void* self, void* painter, void* option, void* index) {
    KFileItemDelegate_Paint((KFileItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    KFileItemDelegate_OnPaint((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    KFileItemDelegate_QBasePaint((KFileItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* k_fileitemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return KFileItemDelegate_CreateEditor((KFileItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*)) {
    KFileItemDelegate_OnCreateEditor((KFileItemDelegate*)self, (intptr_t)callback);
}

QWidget* k_fileitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return KFileItemDelegate_QBaseCreateEditor((KFileItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool k_fileitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KFileItemDelegate_EditorEvent((KFileItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KFileItemDelegate_OnEditorEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

bool k_fileitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KFileItemDelegate_QBaseEditorEvent((KFileItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_set_editor_data(void* self, void* editor, void* index) {
    KFileItemDelegate_SetEditorData((KFileItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_fileitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*)) {
    KFileItemDelegate_OnSetEditorData((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    KFileItemDelegate_QBaseSetEditorData((KFileItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_fileitemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    KFileItemDelegate_SetModelData((KFileItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_fileitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*)) {
    KFileItemDelegate_OnSetModelData((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    KFileItemDelegate_QBaseSetModelData((KFileItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_fileitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KFileItemDelegate_UpdateEditorGeometry((KFileItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    KFileItemDelegate_OnUpdateEditorGeometry((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KFileItemDelegate_QBaseUpdateEditorGeometry((KFileItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_set_show_information(void* self, libqt_list /* of enum KFileItemDelegate__Information */ list) {
    KFileItemDelegate_SetShowInformation((KFileItemDelegate*)self, list);
}

void k_fileitemdelegate_set_show_information2(void* self, int32_t information) {
    KFileItemDelegate_SetShowInformation2((KFileItemDelegate*)self, information);
}

libqt_list /* of enum KFileItemDelegate__Information */ k_fileitemdelegate_show_information(void* self) {
    libqt_list _arr = KFileItemDelegate_ShowInformation((KFileItemDelegate*)self);
    return _arr;
}

void k_fileitemdelegate_set_shadow_color(void* self, void* color) {
    KFileItemDelegate_SetShadowColor((KFileItemDelegate*)self, (QColor*)color);
}

QColor* k_fileitemdelegate_shadow_color(void* self) {
    return KFileItemDelegate_ShadowColor((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_shadow_offset(void* self, void* offset) {
    KFileItemDelegate_SetShadowOffset((KFileItemDelegate*)self, (QPointF*)offset);
}

QPointF* k_fileitemdelegate_shadow_offset(void* self) {
    return KFileItemDelegate_ShadowOffset((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_shadow_blur(void* self, double radius) {
    KFileItemDelegate_SetShadowBlur((KFileItemDelegate*)self, radius);
}

double k_fileitemdelegate_shadow_blur(void* self) {
    return KFileItemDelegate_ShadowBlur((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_maximum_size(void* self, void* size) {
    KFileItemDelegate_SetMaximumSize((KFileItemDelegate*)self, (QSize*)size);
}

QSize* k_fileitemdelegate_maximum_size(void* self) {
    return KFileItemDelegate_MaximumSize((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_show_tool_tip_when_elided(void* self, bool showToolTip) {
    KFileItemDelegate_SetShowToolTipWhenElided((KFileItemDelegate*)self, showToolTip);
}

bool k_fileitemdelegate_show_tool_tip_when_elided(void* self) {
    return KFileItemDelegate_ShowToolTipWhenElided((KFileItemDelegate*)self);
}

QRect* k_fileitemdelegate_icon_rect(void* self, void* option, void* index) {
    return KFileItemDelegate_IconRect((KFileItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_set_wrap_mode(void* self, int32_t wrapMode) {
    KFileItemDelegate_SetWrapMode((KFileItemDelegate*)self, wrapMode);
}

int32_t k_fileitemdelegate_wrap_mode(void* self) {
    return KFileItemDelegate_WrapMode((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_job_transfers_visible(void* self, bool jobTransfersVisible) {
    KFileItemDelegate_SetJobTransfersVisible((KFileItemDelegate*)self, jobTransfersVisible);
}

bool k_fileitemdelegate_job_transfers_visible(void* self) {
    return KFileItemDelegate_JobTransfersVisible((KFileItemDelegate*)self);
}

bool k_fileitemdelegate_event_filter(void* self, void* object, void* event) {
    return KFileItemDelegate_EventFilter((KFileItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

void k_fileitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileItemDelegate_OnEventFilter((KFileItemDelegate*)self, (intptr_t)callback);
}

bool k_fileitemdelegate_qbase_event_filter(void* self, void* object, void* event) {
    return KFileItemDelegate_QBaseEventFilter((KFileItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

QRect* k_fileitemdelegate_selection_emblem_rect(void* self) {
    return KFileItemDelegate_SelectionEmblemRect((KFileItemDelegate*)self);
}

void k_fileitemdelegate_set_selection_emblem_rect(void* self, void* rect, int iconSize) {
    KFileItemDelegate_SetSelectionEmblemRect((KFileItemDelegate*)self, (QRect*)rect, iconSize);
}

KFileItem* k_fileitemdelegate_file_item(void* self, void* index) {
    return KFileItemDelegate_FileItem((KFileItemDelegate*)self, (QModelIndex*)index);
}

bool k_fileitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KFileItemDelegate_HelpEvent((KFileItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_fileitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KFileItemDelegate_OnHelpEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

bool k_fileitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KFileItemDelegate_QBaseHelpEvent((KFileItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QRegion* k_fileitemdelegate_shape(void* self, void* option, void* index) {
    return KFileItemDelegate_Shape((KFileItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

const char* k_fileitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_fileitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_fileitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void k_fileitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_close_editor2(void* self, void* editor, int32_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void k_fileitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* k_fileitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fileitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fileitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fileitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fileitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fileitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fileitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fileitemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fileitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fileitemdelegate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fileitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fileitemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fileitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fileitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_fileitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fileitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fileitemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fileitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fileitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fileitemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fileitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fileitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fileitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fileitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fileitemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileitemdelegate_dynamic_property_names\n");
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

QBindingStorage* k_fileitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fileitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fileitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fileitemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fileitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fileitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fileitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fileitemdelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fileitemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fileitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fileitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fileitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fileitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fileitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_fileitemdelegate_destroy_editor(void* self, void* editor, void* index) {
    KFileItemDelegate_DestroyEditor((KFileItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_fileitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    KFileItemDelegate_QBaseDestroyEditor((KFileItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_fileitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*)) {
    KFileItemDelegate_OnDestroyEditor((KFileItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ k_fileitemdelegate_painting_roles(void* self) {
    libqt_list _arr = KFileItemDelegate_PaintingRoles((KFileItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ k_fileitemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = KFileItemDelegate_QBasePaintingRoles((KFileItemDelegate*)self);
    return _arr;
}

void k_fileitemdelegate_on_painting_roles(void* self, int* (*callback)()) {
    KFileItemDelegate_OnPaintingRoles((KFileItemDelegate*)self, (intptr_t)callback);
}

bool k_fileitemdelegate_event(void* self, void* event) {
    return KFileItemDelegate_Event((KFileItemDelegate*)self, (QEvent*)event);
}

bool k_fileitemdelegate_qbase_event(void* self, void* event) {
    return KFileItemDelegate_QBaseEvent((KFileItemDelegate*)self, (QEvent*)event);
}

void k_fileitemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileItemDelegate_OnEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_timer_event(void* self, void* event) {
    KFileItemDelegate_TimerEvent((KFileItemDelegate*)self, (QTimerEvent*)event);
}

void k_fileitemdelegate_qbase_timer_event(void* self, void* event) {
    KFileItemDelegate_QBaseTimerEvent((KFileItemDelegate*)self, (QTimerEvent*)event);
}

void k_fileitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileItemDelegate_OnTimerEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_child_event(void* self, void* event) {
    KFileItemDelegate_ChildEvent((KFileItemDelegate*)self, (QChildEvent*)event);
}

void k_fileitemdelegate_qbase_child_event(void* self, void* event) {
    KFileItemDelegate_QBaseChildEvent((KFileItemDelegate*)self, (QChildEvent*)event);
}

void k_fileitemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileItemDelegate_OnChildEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_custom_event(void* self, void* event) {
    KFileItemDelegate_CustomEvent((KFileItemDelegate*)self, (QEvent*)event);
}

void k_fileitemdelegate_qbase_custom_event(void* self, void* event) {
    KFileItemDelegate_QBaseCustomEvent((KFileItemDelegate*)self, (QEvent*)event);
}

void k_fileitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileItemDelegate_OnCustomEvent((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_connect_notify(void* self, void* signal) {
    KFileItemDelegate_ConnectNotify((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

void k_fileitemdelegate_qbase_connect_notify(void* self, void* signal) {
    KFileItemDelegate_QBaseConnectNotify((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

void k_fileitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileItemDelegate_OnConnectNotify((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_disconnect_notify(void* self, void* signal) {
    KFileItemDelegate_DisconnectNotify((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

void k_fileitemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    KFileItemDelegate_QBaseDisconnectNotify((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

void k_fileitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileItemDelegate_OnDisconnectNotify((KFileItemDelegate*)self, (intptr_t)callback);
}

QObject* k_fileitemdelegate_sender(void* self) {
    return KFileItemDelegate_Sender((KFileItemDelegate*)self);
}

QObject* k_fileitemdelegate_qbase_sender(void* self) {
    return KFileItemDelegate_QBaseSender((KFileItemDelegate*)self);
}

void k_fileitemdelegate_on_sender(void* self, QObject* (*callback)()) {
    KFileItemDelegate_OnSender((KFileItemDelegate*)self, (intptr_t)callback);
}

int32_t k_fileitemdelegate_sender_signal_index(void* self) {
    return KFileItemDelegate_SenderSignalIndex((KFileItemDelegate*)self);
}

int32_t k_fileitemdelegate_qbase_sender_signal_index(void* self) {
    return KFileItemDelegate_QBaseSenderSignalIndex((KFileItemDelegate*)self);
}

void k_fileitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileItemDelegate_OnSenderSignalIndex((KFileItemDelegate*)self, (intptr_t)callback);
}

int32_t k_fileitemdelegate_receivers(void* self, const char* signal) {
    return KFileItemDelegate_Receivers((KFileItemDelegate*)self, signal);
}

int32_t k_fileitemdelegate_qbase_receivers(void* self, const char* signal) {
    return KFileItemDelegate_QBaseReceivers((KFileItemDelegate*)self, signal);
}

void k_fileitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileItemDelegate_OnReceivers((KFileItemDelegate*)self, (intptr_t)callback);
}

bool k_fileitemdelegate_is_signal_connected(void* self, void* signal) {
    return KFileItemDelegate_IsSignalConnected((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

bool k_fileitemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return KFileItemDelegate_QBaseIsSignalConnected((KFileItemDelegate*)self, (QMetaMethod*)signal);
}

void k_fileitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileItemDelegate_OnIsSignalConnected((KFileItemDelegate*)self, (intptr_t)callback);
}

void k_fileitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fileitemdelegate_delete(void* self) {
    KFileItemDelegate_Delete((KFileItemDelegate*)(self));
}
