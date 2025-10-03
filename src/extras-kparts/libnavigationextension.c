#include "../extras-kio/libkfileitem.hpp"
#include "libopenurlarguments.hpp"
#include "libreadonlypart.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqurl.hpp"
#include "libnavigationextension.hpp"
#include "libnavigationextension.h"

KParts__NavigationExtension* k_parts__navigationextension_new(void* parent) {
    return KParts__NavigationExtension_new((KParts__ReadOnlyPart*)parent);
}

const QMetaObject* k_parts__navigationextension_meta_object(void* self) {
    return KParts__NavigationExtension_MetaObject((KParts__NavigationExtension*)self);
}

void* k_parts__navigationextension_metacast(void* self, const char* param1) {
    return KParts__NavigationExtension_Metacast((KParts__NavigationExtension*)self, param1);
}

int32_t k_parts__navigationextension_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__NavigationExtension_Metacall((KParts__NavigationExtension*)self, param1, param2, param3);
}

void k_parts__navigationextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__NavigationExtension_OnMetacall((KParts__NavigationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__navigationextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__NavigationExtension_QBaseMetacall((KParts__NavigationExtension*)self, param1, param2, param3);
}

const char* k_parts__navigationextension_tr(const char* s) {
    libqt_string _str = KParts__NavigationExtension_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_parts__navigationextension_x_offset(void* self) {
    return KParts__NavigationExtension_XOffset((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_on_x_offset(void* self, int32_t (*callback)()) {
    KParts__NavigationExtension_OnXOffset((KParts__NavigationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__navigationextension_qbase_x_offset(void* self) {
    return KParts__NavigationExtension_QBaseXOffset((KParts__NavigationExtension*)self);
}

int32_t k_parts__navigationextension_y_offset(void* self) {
    return KParts__NavigationExtension_YOffset((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_on_y_offset(void* self, int32_t (*callback)()) {
    KParts__NavigationExtension_OnYOffset((KParts__NavigationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__navigationextension_qbase_y_offset(void* self) {
    return KParts__NavigationExtension_QBaseYOffset((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_save_state(void* self, void* stream) {
    KParts__NavigationExtension_SaveState((KParts__NavigationExtension*)self, (QDataStream*)stream);
}

void k_parts__navigationextension_on_save_state(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnSaveState((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_qbase_save_state(void* self, void* stream) {
    KParts__NavigationExtension_QBaseSaveState((KParts__NavigationExtension*)self, (QDataStream*)stream);
}

void k_parts__navigationextension_restore_state(void* self, void* stream) {
    KParts__NavigationExtension_RestoreState((KParts__NavigationExtension*)self, (QDataStream*)stream);
}

void k_parts__navigationextension_on_restore_state(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnRestoreState((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_qbase_restore_state(void* self, void* stream) {
    KParts__NavigationExtension_QBaseRestoreState((KParts__NavigationExtension*)self, (QDataStream*)stream);
}

bool k_parts__navigationextension_is_u_r_l_drop_handling_enabled(void* self) {
    return KParts__NavigationExtension_IsURLDropHandlingEnabled((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_set_u_r_l_drop_handling_enabled(void* self, bool enable) {
    KParts__NavigationExtension_SetURLDropHandlingEnabled((KParts__NavigationExtension*)self, enable);
}

bool k_parts__navigationextension_is_action_enabled(void* self, const char* name) {
    return KParts__NavigationExtension_IsActionEnabled((KParts__NavigationExtension*)self, name);
}

const char* k_parts__navigationextension_action_text(void* self, const char* name) {
    libqt_string _str = KParts__NavigationExtension_ActionText((KParts__NavigationExtension*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KParts__NavigationExtension* k_parts__navigationextension_child_object(void* obj) {
    return KParts__NavigationExtension_ChildObject((QObject*)obj);
}

void k_parts__navigationextension_paste_request(void* self) {
    KParts__NavigationExtension_PasteRequest((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_enable_action(void* self, const char* name, bool enabled) {
    KParts__NavigationExtension_EnableAction((KParts__NavigationExtension*)self, name, enabled);
}

void k_parts__navigationextension_set_action_text(void* self, const char* name, const char* text) {
    KParts__NavigationExtension_SetActionText((KParts__NavigationExtension*)self, name, qstring(text));
}

void k_parts__navigationextension_open_url_request(void* self, void* url) {
    KParts__NavigationExtension_OpenUrlRequest((KParts__NavigationExtension*)self, (QUrl*)url);
}

void k_parts__navigationextension_open_url_request_delayed(void* self, void* url, void* arguments) {
    KParts__NavigationExtension_OpenUrlRequestDelayed((KParts__NavigationExtension*)self, (QUrl*)url, (KParts__OpenUrlArguments*)arguments);
}

void k_parts__navigationextension_open_url_notify(void* self) {
    KParts__NavigationExtension_OpenUrlNotify((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_set_location_bar_url(void* self, const char* url) {
    KParts__NavigationExtension_SetLocationBarUrl((KParts__NavigationExtension*)self, qstring(url));
}

void k_parts__navigationextension_set_icon_url(void* self, void* url) {
    KParts__NavigationExtension_SetIconUrl((KParts__NavigationExtension*)self, (QUrl*)url);
}

void k_parts__navigationextension_create_new_window(void* self, void* url) {
    KParts__NavigationExtension_CreateNewWindow((KParts__NavigationExtension*)self, (QUrl*)url);
}

void k_parts__navigationextension_loading_progress(void* self, int percent) {
    KParts__NavigationExtension_LoadingProgress((KParts__NavigationExtension*)self, percent);
}

void k_parts__navigationextension_speed_progress(void* self, int bytesPerSecond) {
    KParts__NavigationExtension_SpeedProgress((KParts__NavigationExtension*)self, bytesPerSecond);
}

void k_parts__navigationextension_info_message(void* self, const char* param1) {
    KParts__NavigationExtension_InfoMessage((KParts__NavigationExtension*)self, qstring(param1));
}

void k_parts__navigationextension_popup_menu(void* self, void* global, void* items) {
    KParts__NavigationExtension_PopupMenu((KParts__NavigationExtension*)self, (QPoint*)global, (KFileItemList*)items);
}

void k_parts__navigationextension_popup_menu2(void* self, void* global, void* url) {
    KParts__NavigationExtension_PopupMenu2((KParts__NavigationExtension*)self, (QPoint*)global, (QUrl*)url);
}

void k_parts__navigationextension_selection_info(void* self, void* items) {
    KParts__NavigationExtension_SelectionInfo((KParts__NavigationExtension*)self, (KFileItemList*)items);
}

void k_parts__navigationextension_mouse_over_info(void* self, void* item) {
    KParts__NavigationExtension_MouseOverInfo((KParts__NavigationExtension*)self, (KFileItem*)item);
}

void k_parts__navigationextension_add_web_side_bar(void* self, void* url, const char* name) {
    KParts__NavigationExtension_AddWebSideBar((KParts__NavigationExtension*)self, (QUrl*)url, qstring(name));
}

void k_parts__navigationextension_move_top_level_widget(void* self, int x, int y) {
    KParts__NavigationExtension_MoveTopLevelWidget((KParts__NavigationExtension*)self, x, y);
}

void k_parts__navigationextension_resize_top_level_widget(void* self, int w, int h) {
    KParts__NavigationExtension_ResizeTopLevelWidget((KParts__NavigationExtension*)self, w, h);
}

void k_parts__navigationextension_request_focus(void* self, void* part) {
    KParts__NavigationExtension_RequestFocus((KParts__NavigationExtension*)self, (KParts__ReadOnlyPart*)part);
}

void k_parts__navigationextension_set_page_security(void* self, int pageSecurity) {
    KParts__NavigationExtension_SetPageSecurity((KParts__NavigationExtension*)self, pageSecurity);
}

void k_parts__navigationextension_items_removed(void* self, void* items) {
    KParts__NavigationExtension_ItemsRemoved((KParts__NavigationExtension*)self, (KFileItemList*)items);
}

const char* k_parts__navigationextension_tr2(const char* s, const char* c) {
    libqt_string _str = KParts__NavigationExtension_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__navigationextension_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KParts__NavigationExtension_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__navigationextension_open_url_request2(void* self, void* url, void* arguments) {
    KParts__NavigationExtension_OpenUrlRequest2((KParts__NavigationExtension*)self, (QUrl*)url, (KParts__OpenUrlArguments*)arguments);
}

void k_parts__navigationextension_popup_menu3(void* self, void* global, void* items, void* arguments) {
    KParts__NavigationExtension_PopupMenu3((KParts__NavigationExtension*)self, (QPoint*)global, (KFileItemList*)items, (KParts__OpenUrlArguments*)arguments);
}

void k_parts__navigationextension_popup_menu4(void* self, void* global, void* items, void* arguments, int32_t flags) {
    KParts__NavigationExtension_PopupMenu4((KParts__NavigationExtension*)self, (QPoint*)global, (KFileItemList*)items, (KParts__OpenUrlArguments*)arguments, flags);
}

void k_parts__navigationextension_popup_menu5(void* self, void* global, void* items, void* arguments, int32_t flags, libqt_map /* of const char* to QAction* */ actionGroups) {
    KParts__NavigationExtension_PopupMenu5((KParts__NavigationExtension*)self, (QPoint*)global, (KFileItemList*)items, (KParts__OpenUrlArguments*)arguments, flags, actionGroups);
}

void k_parts__navigationextension_popup_menu32(void* self, void* global, void* url, mode_t mode) {
    KParts__NavigationExtension_PopupMenu32((KParts__NavigationExtension*)self, (QPoint*)global, (QUrl*)url, mode);
}

void k_parts__navigationextension_popup_menu42(void* self, void* global, void* url, mode_t mode, void* arguments) {
    KParts__NavigationExtension_PopupMenu42((KParts__NavigationExtension*)self, (QPoint*)global, (QUrl*)url, mode, (KParts__OpenUrlArguments*)arguments);
}

void k_parts__navigationextension_popup_menu52(void* self, void* global, void* url, mode_t mode, void* arguments, int32_t flags) {
    KParts__NavigationExtension_PopupMenu52((KParts__NavigationExtension*)self, (QPoint*)global, (QUrl*)url, mode, (KParts__OpenUrlArguments*)arguments, flags);
}

void k_parts__navigationextension_popup_menu6(void* self, void* global, void* url, mode_t mode, void* arguments, int32_t flags, libqt_map /* of const char* to QAction* */ actionGroups) {
    KParts__NavigationExtension_PopupMenu6((KParts__NavigationExtension*)self, (QPoint*)global, (QUrl*)url, mode, (KParts__OpenUrlArguments*)arguments, flags, actionGroups);
}

const char* k_parts__navigationextension_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__navigationextension_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__navigationextension_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__navigationextension_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__navigationextension_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__navigationextension_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__navigationextension_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__navigationextension_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__navigationextension_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__navigationextension_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_parts__navigationextension_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__navigationextension_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__navigationextension_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__navigationextension_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__navigationextension_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__navigationextension_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__navigationextension_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__navigationextension_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__navigationextension_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__navigationextension_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__navigationextension_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__navigationextension_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__navigationextension_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__navigationextension_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__navigationextension_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_parts__navigationextension_dynamic_property_names");
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

QBindingStorage* k_parts__navigationextension_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__navigationextension_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__navigationextension_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__navigationextension_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__navigationextension_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__navigationextension_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__navigationextension_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_parts__navigationextension_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_parts__navigationextension_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_parts__navigationextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__navigationextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__navigationextension_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__navigationextension_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__navigationextension_event(void* self, void* event) {
    return KParts__NavigationExtension_Event((KParts__NavigationExtension*)self, (QEvent*)event);
}

bool k_parts__navigationextension_qbase_event(void* self, void* event) {
    return KParts__NavigationExtension_QBaseEvent((KParts__NavigationExtension*)self, (QEvent*)event);
}

void k_parts__navigationextension_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnEvent((KParts__NavigationExtension*)self, (intptr_t)callback);
}

bool k_parts__navigationextension_event_filter(void* self, void* watched, void* event) {
    return KParts__NavigationExtension_EventFilter((KParts__NavigationExtension*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__navigationextension_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__NavigationExtension_QBaseEventFilter((KParts__NavigationExtension*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__navigationextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__NavigationExtension_OnEventFilter((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_timer_event(void* self, void* event) {
    KParts__NavigationExtension_TimerEvent((KParts__NavigationExtension*)self, (QTimerEvent*)event);
}

void k_parts__navigationextension_qbase_timer_event(void* self, void* event) {
    KParts__NavigationExtension_QBaseTimerEvent((KParts__NavigationExtension*)self, (QTimerEvent*)event);
}

void k_parts__navigationextension_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnTimerEvent((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_child_event(void* self, void* event) {
    KParts__NavigationExtension_ChildEvent((KParts__NavigationExtension*)self, (QChildEvent*)event);
}

void k_parts__navigationextension_qbase_child_event(void* self, void* event) {
    KParts__NavigationExtension_QBaseChildEvent((KParts__NavigationExtension*)self, (QChildEvent*)event);
}

void k_parts__navigationextension_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnChildEvent((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_custom_event(void* self, void* event) {
    KParts__NavigationExtension_CustomEvent((KParts__NavigationExtension*)self, (QEvent*)event);
}

void k_parts__navigationextension_qbase_custom_event(void* self, void* event) {
    KParts__NavigationExtension_QBaseCustomEvent((KParts__NavigationExtension*)self, (QEvent*)event);
}

void k_parts__navigationextension_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnCustomEvent((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_connect_notify(void* self, void* signal) {
    KParts__NavigationExtension_ConnectNotify((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__navigationextension_qbase_connect_notify(void* self, void* signal) {
    KParts__NavigationExtension_QBaseConnectNotify((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__navigationextension_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnConnectNotify((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_disconnect_notify(void* self, void* signal) {
    KParts__NavigationExtension_DisconnectNotify((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__navigationextension_qbase_disconnect_notify(void* self, void* signal) {
    KParts__NavigationExtension_QBaseDisconnectNotify((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__navigationextension_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnDisconnectNotify((KParts__NavigationExtension*)self, (intptr_t)callback);
}

QObject* k_parts__navigationextension_sender(void* self) {
    return KParts__NavigationExtension_Sender((KParts__NavigationExtension*)self);
}

QObject* k_parts__navigationextension_qbase_sender(void* self) {
    return KParts__NavigationExtension_QBaseSender((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_on_sender(void* self, QObject* (*callback)()) {
    KParts__NavigationExtension_OnSender((KParts__NavigationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__navigationextension_sender_signal_index(void* self) {
    return KParts__NavigationExtension_SenderSignalIndex((KParts__NavigationExtension*)self);
}

int32_t k_parts__navigationextension_qbase_sender_signal_index(void* self) {
    return KParts__NavigationExtension_QBaseSenderSignalIndex((KParts__NavigationExtension*)self);
}

void k_parts__navigationextension_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__NavigationExtension_OnSenderSignalIndex((KParts__NavigationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__navigationextension_receivers(void* self, const char* signal) {
    return KParts__NavigationExtension_Receivers((KParts__NavigationExtension*)self, signal);
}

int32_t k_parts__navigationextension_qbase_receivers(void* self, const char* signal) {
    return KParts__NavigationExtension_QBaseReceivers((KParts__NavigationExtension*)self, signal);
}

void k_parts__navigationextension_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__NavigationExtension_OnReceivers((KParts__NavigationExtension*)self, (intptr_t)callback);
}

bool k_parts__navigationextension_is_signal_connected(void* self, void* signal) {
    return KParts__NavigationExtension_IsSignalConnected((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

bool k_parts__navigationextension_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__NavigationExtension_QBaseIsSignalConnected((KParts__NavigationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__navigationextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__NavigationExtension_OnIsSignalConnected((KParts__NavigationExtension*)self, (intptr_t)callback);
}

void k_parts__navigationextension_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__navigationextension_delete(void* self) {
    KParts__NavigationExtension_Delete((KParts__NavigationExtension*)(self));
}
