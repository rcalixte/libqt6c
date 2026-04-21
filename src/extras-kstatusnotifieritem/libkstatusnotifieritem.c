#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqwindow.hpp"
#include "libkstatusnotifieritem.hpp"
#include "libkstatusnotifieritem.h"

KStatusNotifierItem* k_statusnotifieritem_new() {
    return KStatusNotifierItem_new();
}

KStatusNotifierItem* k_statusnotifieritem_new2(const char* id) {
    return KStatusNotifierItem_new2(qstring(id));
}

KStatusNotifierItem* k_statusnotifieritem_new3(void* parent) {
    return KStatusNotifierItem_new3((QObject*)parent);
}

KStatusNotifierItem* k_statusnotifieritem_new4(const char* id, void* parent) {
    return KStatusNotifierItem_new4(qstring(id), (QObject*)parent);
}

const QMetaObject* k_statusnotifieritem_meta_object(void* self) {
    return KStatusNotifierItem_MetaObject((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KStatusNotifierItem_OnMetaObject((KStatusNotifierItem*)self, (intptr_t)callback);
}

const QMetaObject* k_statusnotifieritem_super_meta_object(void* self) {
    return KStatusNotifierItem_SuperMetaObject((KStatusNotifierItem*)self);
}

void* k_statusnotifieritem_metacast(void* self, const char* param1) {
    return KStatusNotifierItem_Metacast((KStatusNotifierItem*)self, param1);
}

void k_statusnotifieritem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KStatusNotifierItem_OnMetacast((KStatusNotifierItem*)self, (intptr_t)callback);
}

void* k_statusnotifieritem_super_metacast(void* self, const char* param1) {
    return KStatusNotifierItem_SuperMetacast((KStatusNotifierItem*)self, param1);
}

int32_t k_statusnotifieritem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStatusNotifierItem_Metacall((KStatusNotifierItem*)self, param1, param2, param3);
}

void k_statusnotifieritem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KStatusNotifierItem_OnMetacall((KStatusNotifierItem*)self, (intptr_t)callback);
}

int32_t k_statusnotifieritem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStatusNotifierItem_SuperMetacall((KStatusNotifierItem*)self, param1, param2, param3);
}

const char* k_statusnotifieritem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_statusnotifieritem_id(void* self) {
    libqt_string _str = KStatusNotifierItem_Id((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_category(void* self, int32_t category) {
    KStatusNotifierItem_SetCategory((KStatusNotifierItem*)self, category);
}

int32_t k_statusnotifieritem_category(void* self) {
    return KStatusNotifierItem_Category((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_title(void* self, const char* title) {
    KStatusNotifierItem_SetTitle((KStatusNotifierItem*)self, qstring(title));
}

const char* k_statusnotifieritem_title(void* self) {
    libqt_string _str = KStatusNotifierItem_Title((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_status(void* self, int32_t status) {
    KStatusNotifierItem_SetStatus((KStatusNotifierItem*)self, status);
}

int32_t k_statusnotifieritem_status(void* self) {
    return KStatusNotifierItem_Status((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_icon_by_name(void* self, const char* name) {
    KStatusNotifierItem_SetIconByName((KStatusNotifierItem*)self, qstring(name));
}

const char* k_statusnotifieritem_icon_name(void* self) {
    libqt_string _str = KStatusNotifierItem_IconName((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_icon_by_pixmap(void* self, void* icon) {
    KStatusNotifierItem_SetIconByPixmap((KStatusNotifierItem*)self, (QIcon*)icon);
}

QIcon* k_statusnotifieritem_icon_pixmap(void* self) {
    return KStatusNotifierItem_IconPixmap((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_overlay_icon_by_name(void* self, const char* name) {
    KStatusNotifierItem_SetOverlayIconByName((KStatusNotifierItem*)self, qstring(name));
}

const char* k_statusnotifieritem_overlay_icon_name(void* self) {
    libqt_string _str = KStatusNotifierItem_OverlayIconName((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_overlay_icon_by_pixmap(void* self, void* icon) {
    KStatusNotifierItem_SetOverlayIconByPixmap((KStatusNotifierItem*)self, (QIcon*)icon);
}

QIcon* k_statusnotifieritem_overlay_icon_pixmap(void* self) {
    return KStatusNotifierItem_OverlayIconPixmap((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_attention_icon_by_name(void* self, const char* name) {
    KStatusNotifierItem_SetAttentionIconByName((KStatusNotifierItem*)self, qstring(name));
}

const char* k_statusnotifieritem_attention_icon_name(void* self) {
    libqt_string _str = KStatusNotifierItem_AttentionIconName((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_attention_icon_by_pixmap(void* self, void* icon) {
    KStatusNotifierItem_SetAttentionIconByPixmap((KStatusNotifierItem*)self, (QIcon*)icon);
}

QIcon* k_statusnotifieritem_attention_icon_pixmap(void* self) {
    return KStatusNotifierItem_AttentionIconPixmap((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_attention_movie_by_name(void* self, const char* name) {
    KStatusNotifierItem_SetAttentionMovieByName((KStatusNotifierItem*)self, qstring(name));
}

const char* k_statusnotifieritem_attention_movie_name(void* self) {
    libqt_string _str = KStatusNotifierItem_AttentionMovieName((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_tool_tip(void* self, const char* iconName, const char* title, const char* subTitle) {
    KStatusNotifierItem_SetToolTip((KStatusNotifierItem*)self, qstring(iconName), qstring(title), qstring(subTitle));
}

void k_statusnotifieritem_set_tool_tip2(void* self, void* icon, const char* title, const char* subTitle) {
    KStatusNotifierItem_SetToolTip2((KStatusNotifierItem*)self, (QIcon*)icon, qstring(title), qstring(subTitle));
}

void k_statusnotifieritem_set_tool_tip_icon_by_name(void* self, const char* name) {
    KStatusNotifierItem_SetToolTipIconByName((KStatusNotifierItem*)self, qstring(name));
}

const char* k_statusnotifieritem_tool_tip_icon_name(void* self) {
    libqt_string _str = KStatusNotifierItem_ToolTipIconName((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_tool_tip_icon_by_pixmap(void* self, void* icon) {
    KStatusNotifierItem_SetToolTipIconByPixmap((KStatusNotifierItem*)self, (QIcon*)icon);
}

QIcon* k_statusnotifieritem_tool_tip_icon_pixmap(void* self) {
    return KStatusNotifierItem_ToolTipIconPixmap((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_tool_tip_title(void* self, const char* title) {
    KStatusNotifierItem_SetToolTipTitle((KStatusNotifierItem*)self, qstring(title));
}

const char* k_statusnotifieritem_tool_tip_title(void* self) {
    libqt_string _str = KStatusNotifierItem_ToolTipTitle((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_tool_tip_sub_title(void* self, const char* subTitle) {
    KStatusNotifierItem_SetToolTipSubTitle((KStatusNotifierItem*)self, qstring(subTitle));
}

const char* k_statusnotifieritem_tool_tip_sub_title(void* self) {
    libqt_string _str = KStatusNotifierItem_ToolTipSubTitle((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_context_menu(void* self, void* menu) {
    KStatusNotifierItem_SetContextMenu((KStatusNotifierItem*)self, (QMenu*)menu);
}

QMenu* k_statusnotifieritem_context_menu(void* self) {
    return KStatusNotifierItem_ContextMenu((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_set_associated_window(void* self, void* window) {
    KStatusNotifierItem_SetAssociatedWindow((KStatusNotifierItem*)self, (QWindow*)window);
}

QWindow* k_statusnotifieritem_associated_window(void* self) {
    return KStatusNotifierItem_AssociatedWindow((KStatusNotifierItem*)self);
}

libqt_list /* of QAction* */ k_statusnotifieritem_action_collection(void* self) {
    libqt_list _arr = KStatusNotifierItem_ActionCollection((KStatusNotifierItem*)self);
    return _arr;
}

void k_statusnotifieritem_add_action(void* self, const char* name, void* action) {
    KStatusNotifierItem_AddAction((KStatusNotifierItem*)self, qstring(name), (QAction*)action);
}

void k_statusnotifieritem_remove_action(void* self, const char* name) {
    KStatusNotifierItem_RemoveAction((KStatusNotifierItem*)self, qstring(name));
}

QAction* k_statusnotifieritem_action(void* self, const char* name) {
    return KStatusNotifierItem_Action((KStatusNotifierItem*)self, qstring(name));
}

void k_statusnotifieritem_set_standard_actions_enabled(void* self, bool enabled) {
    KStatusNotifierItem_SetStandardActionsEnabled((KStatusNotifierItem*)self, enabled);
}

bool k_statusnotifieritem_standard_actions_enabled(void* self) {
    return KStatusNotifierItem_StandardActionsEnabled((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_show_message(void* self, const char* title, const char* message, const char* icon) {
    KStatusNotifierItem_ShowMessage((KStatusNotifierItem*)self, qstring(title), qstring(message), qstring(icon));
}

const char* k_statusnotifieritem_provided_token(void* self) {
    libqt_string _str = KStatusNotifierItem_ProvidedToken((KStatusNotifierItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_abort_quit(void* self) {
    KStatusNotifierItem_AbortQuit((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_activate(void* self, void* pos) {
    KStatusNotifierItem_Activate((KStatusNotifierItem*)self, (QPoint*)pos);
}

void k_statusnotifieritem_on_activate(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnActivate((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_super_activate(void* self, void* pos) {
    KStatusNotifierItem_SuperActivate((KStatusNotifierItem*)self, (QPoint*)pos);
}

void k_statusnotifieritem_hide_associated_window(void* self) {
    KStatusNotifierItem_HideAssociatedWindow((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_scroll_requested(void* self, int delta, int32_t orientation) {
    KStatusNotifierItem_ScrollRequested((KStatusNotifierItem*)self, delta, orientation);
}

void k_statusnotifieritem_on_scroll_requested(void* self, void (*callback)(void*, int, int32_t)) {
    KStatusNotifierItem_Connect_ScrollRequested((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_activate_requested(void* self, bool active, void* pos) {
    KStatusNotifierItem_ActivateRequested((KStatusNotifierItem*)self, active, (QPoint*)pos);
}

void k_statusnotifieritem_on_activate_requested(void* self, void (*callback)(void*, bool, void*)) {
    KStatusNotifierItem_Connect_ActivateRequested((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_secondary_activate_requested(void* self, void* pos) {
    KStatusNotifierItem_SecondaryActivateRequested((KStatusNotifierItem*)self, (QPoint*)pos);
}

void k_statusnotifieritem_on_secondary_activate_requested(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_Connect_SecondaryActivateRequested((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_quit_requested(void* self) {
    KStatusNotifierItem_QuitRequested((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_on_quit_requested(void* self, void (*callback)(void*)) {
    KStatusNotifierItem_Connect_QuitRequested((KStatusNotifierItem*)self, (intptr_t)callback);
}

bool k_statusnotifieritem_event_filter(void* self, void* watched, void* event) {
    return KStatusNotifierItem_EventFilter((KStatusNotifierItem*)self, (QObject*)watched, (QEvent*)event);
}

void k_statusnotifieritem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KStatusNotifierItem_OnEventFilter((KStatusNotifierItem*)self, (intptr_t)callback);
}

bool k_statusnotifieritem_super_event_filter(void* self, void* watched, void* event) {
    return KStatusNotifierItem_SuperEventFilter((KStatusNotifierItem*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_statusnotifieritem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_statusnotifieritem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_show_message4(void* self, const char* title, const char* message, const char* icon, int timeout) {
    KStatusNotifierItem_ShowMessage4((KStatusNotifierItem*)self, qstring(title), qstring(message), qstring(icon), timeout);
}

const char* k_statusnotifieritem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusnotifieritem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_statusnotifieritem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_statusnotifieritem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_statusnotifieritem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_statusnotifieritem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_statusnotifieritem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_statusnotifieritem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_statusnotifieritem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_statusnotifieritem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_statusnotifieritem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_statusnotifieritem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_statusnotifieritem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_statusnotifieritem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_statusnotifieritem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_statusnotifieritem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_statusnotifieritem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_statusnotifieritem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_statusnotifieritem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_statusnotifieritem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_statusnotifieritem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_statusnotifieritem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_statusnotifieritem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_statusnotifieritem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_statusnotifieritem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_statusnotifieritem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_statusnotifieritem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_statusnotifieritem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_statusnotifieritem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_statusnotifieritem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_statusnotifieritem_dynamic_property_names\n");
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

QBindingStorage* k_statusnotifieritem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_statusnotifieritem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_statusnotifieritem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_statusnotifieritem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_statusnotifieritem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_statusnotifieritem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_statusnotifieritem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_statusnotifieritem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_statusnotifieritem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_statusnotifieritem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_statusnotifieritem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_statusnotifieritem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_statusnotifieritem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_statusnotifieritem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_statusnotifieritem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_statusnotifieritem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_statusnotifieritem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_statusnotifieritem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_statusnotifieritem_event(void* self, void* event) {
    return KStatusNotifierItem_Event((KStatusNotifierItem*)self, (QEvent*)event);
}

bool k_statusnotifieritem_super_event(void* self, void* event) {
    return KStatusNotifierItem_SuperEvent((KStatusNotifierItem*)self, (QEvent*)event);
}

void k_statusnotifieritem_on_event(void* self, bool (*callback)(void*, void*)) {
    KStatusNotifierItem_OnEvent((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_timer_event(void* self, void* event) {
    KStatusNotifierItem_TimerEvent((KStatusNotifierItem*)self, (QTimerEvent*)event);
}

void k_statusnotifieritem_super_timer_event(void* self, void* event) {
    KStatusNotifierItem_SuperTimerEvent((KStatusNotifierItem*)self, (QTimerEvent*)event);
}

void k_statusnotifieritem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnTimerEvent((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_child_event(void* self, void* event) {
    KStatusNotifierItem_ChildEvent((KStatusNotifierItem*)self, (QChildEvent*)event);
}

void k_statusnotifieritem_super_child_event(void* self, void* event) {
    KStatusNotifierItem_SuperChildEvent((KStatusNotifierItem*)self, (QChildEvent*)event);
}

void k_statusnotifieritem_on_child_event(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnChildEvent((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_custom_event(void* self, void* event) {
    KStatusNotifierItem_CustomEvent((KStatusNotifierItem*)self, (QEvent*)event);
}

void k_statusnotifieritem_super_custom_event(void* self, void* event) {
    KStatusNotifierItem_SuperCustomEvent((KStatusNotifierItem*)self, (QEvent*)event);
}

void k_statusnotifieritem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnCustomEvent((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_connect_notify(void* self, void* signal) {
    KStatusNotifierItem_ConnectNotify((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

void k_statusnotifieritem_super_connect_notify(void* self, void* signal) {
    KStatusNotifierItem_SuperConnectNotify((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

void k_statusnotifieritem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnConnectNotify((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_disconnect_notify(void* self, void* signal) {
    KStatusNotifierItem_DisconnectNotify((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

void k_statusnotifieritem_super_disconnect_notify(void* self, void* signal) {
    KStatusNotifierItem_SuperDisconnectNotify((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

void k_statusnotifieritem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KStatusNotifierItem_OnDisconnectNotify((KStatusNotifierItem*)self, (intptr_t)callback);
}

QObject* k_statusnotifieritem_sender(void* self) {
    return KStatusNotifierItem_Sender((KStatusNotifierItem*)self);
}

QObject* k_statusnotifieritem_super_sender(void* self) {
    return KStatusNotifierItem_SuperSender((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_on_sender(void* self, QObject* (*callback)()) {
    KStatusNotifierItem_OnSender((KStatusNotifierItem*)self, (intptr_t)callback);
}

int32_t k_statusnotifieritem_sender_signal_index(void* self) {
    return KStatusNotifierItem_SenderSignalIndex((KStatusNotifierItem*)self);
}

int32_t k_statusnotifieritem_super_sender_signal_index(void* self) {
    return KStatusNotifierItem_SuperSenderSignalIndex((KStatusNotifierItem*)self);
}

void k_statusnotifieritem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KStatusNotifierItem_OnSenderSignalIndex((KStatusNotifierItem*)self, (intptr_t)callback);
}

int32_t k_statusnotifieritem_receivers(void* self, const char* signal) {
    return KStatusNotifierItem_Receivers((KStatusNotifierItem*)self, signal);
}

int32_t k_statusnotifieritem_super_receivers(void* self, const char* signal) {
    return KStatusNotifierItem_SuperReceivers((KStatusNotifierItem*)self, signal);
}

void k_statusnotifieritem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KStatusNotifierItem_OnReceivers((KStatusNotifierItem*)self, (intptr_t)callback);
}

bool k_statusnotifieritem_is_signal_connected(void* self, void* signal) {
    return KStatusNotifierItem_IsSignalConnected((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

bool k_statusnotifieritem_super_is_signal_connected(void* self, void* signal) {
    return KStatusNotifierItem_SuperIsSignalConnected((KStatusNotifierItem*)self, (QMetaMethod*)signal);
}

void k_statusnotifieritem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KStatusNotifierItem_OnIsSignalConnected((KStatusNotifierItem*)self, (intptr_t)callback);
}

void k_statusnotifieritem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_statusnotifieritem_delete(void* self) {
    KStatusNotifierItem_Delete((KStatusNotifierItem*)(self));
}
