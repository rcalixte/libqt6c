#include "libkbookmark.hpp"
#include "libkbookmarkmanager.hpp"
#include "libkbookmarkowner.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkbookmarkmenu.hpp"
#include "libkbookmarkmenu.h"

KBookmarkMenu* k_bookmarkmenu_new(void* manager, void* owner, void* parentMenu) {
    return KBookmarkMenu_New((KBookmarkManager*)manager, (KBookmarkOwner*)owner, (QMenu*)parentMenu);
}

KBookmarkMenu* k_bookmarkmenu_new2(void* mgr, void* owner, void* parentMenu, const char* parentAddress) {
    return KBookmarkMenu_New2((KBookmarkManager*)mgr, (KBookmarkOwner*)owner, (QMenu*)parentMenu, qstring(parentAddress));
}

const QMetaObject* k_bookmarkmenu_meta_object(const void* self) {
    return KBookmarkMenu_MetaObject((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KBookmarkMenu_OnMetaObject((KBookmarkMenu*)self, (intptr_t)callback);
}

const QMetaObject* k_bookmarkmenu_super_meta_object(const void* self) {
    return KBookmarkMenu_SuperMetaObject((KBookmarkMenu*)self);
}

void* k_bookmarkmenu_metacast(void* self, const char* param1) {
    return KBookmarkMenu_Metacast((KBookmarkMenu*)self, param1);
}

void k_bookmarkmenu_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBookmarkMenu_OnMetacast((KBookmarkMenu*)self, (intptr_t)callback);
}

void* k_bookmarkmenu_super_metacast(void* self, const char* param1) {
    return KBookmarkMenu_SuperMetacast((KBookmarkMenu*)self, param1);
}

int32_t k_bookmarkmenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkMenu_Metacall((KBookmarkMenu*)self, param1, param2, param3);
}

void k_bookmarkmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkMenu_OnMetacall((KBookmarkMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkmenu_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkMenu_SuperMetacall((KBookmarkMenu*)self, param1, param2, param3);
}

const char* k_bookmarkmenu_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkmenu_ensure_up_to_date(void* self) {
    KBookmarkMenu_EnsureUpToDate((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_add_bookmark_action(const void* self) {
    return KBookmarkMenu_AddBookmarkAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_bookmark_tabs_as_folder_action(const void* self) {
    return KBookmarkMenu_BookmarkTabsAsFolderAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_new_bookmark_folder_action(const void* self) {
    return KBookmarkMenu_NewBookmarkFolderAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_edit_bookmarks_action(const void* self) {
    return KBookmarkMenu_EditBookmarksAction((KBookmarkMenu*)self);
}

void k_bookmarkmenu_set_browser_mode(void* self, bool browserMode) {
    KBookmarkMenu_SetBrowserMode((KBookmarkMenu*)self, browserMode);
}

bool k_bookmarkmenu_browser_mode(const void* self) {
    return KBookmarkMenu_BrowserMode((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_bookmarks_changed(void* self, const char* param1) {
    KBookmarkMenu_SlotBookmarksChanged((KBookmarkMenu*)self, qstring(param1));
}

void k_bookmarkmenu_slot_about_to_show(void* self) {
    KBookmarkMenu_SlotAboutToShow((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_add_bookmarks_list(void* self) {
    KBookmarkMenu_SlotAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_add_bookmark(void* self) {
    KBookmarkMenu_SlotAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_new_folder(void* self) {
    KBookmarkMenu_SlotNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_open_folder_in_tabs(void* self) {
    KBookmarkMenu_SlotOpenFolderInTabs((KBookmarkMenu*)self);
}

void k_bookmarkmenu_clear(void* self) {
    KBookmarkMenu_Clear((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_clear(void* self, void (*callback)(void*)) {
    KBookmarkMenu_OnClear((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_super_clear(void* self) {
    KBookmarkMenu_SuperClear((KBookmarkMenu*)self);
}

void k_bookmarkmenu_refill(void* self) {
    KBookmarkMenu_Refill((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_refill(void* self, void (*callback)(void*)) {
    KBookmarkMenu_OnRefill((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_super_refill(void* self) {
    KBookmarkMenu_SuperRefill((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_action_for_bookmark(void* self, const void* bm) {
    return KBookmarkMenu_ActionForBookmark((KBookmarkMenu*)self, (KBookmark*)bm);
}

void k_bookmarkmenu_on_action_for_bookmark(void* self, QAction* (*callback)(void*, const void*)) {
    KBookmarkMenu_OnActionForBookmark((KBookmarkMenu*)self, (intptr_t)callback);
}

QAction* k_bookmarkmenu_super_action_for_bookmark(void* self, const void* bm) {
    return KBookmarkMenu_SuperActionForBookmark((KBookmarkMenu*)self, (KBookmark*)bm);
}

QMenu* k_bookmarkmenu_context_menu(void* self, void* action) {
    return KBookmarkMenu_ContextMenu((KBookmarkMenu*)self, (QAction*)action);
}

void k_bookmarkmenu_on_context_menu(void* self, QMenu* (*callback)(void*, void*)) {
    KBookmarkMenu_OnContextMenu((KBookmarkMenu*)self, (intptr_t)callback);
}

QMenu* k_bookmarkmenu_super_context_menu(void* self, void* action) {
    return KBookmarkMenu_SuperContextMenu((KBookmarkMenu*)self, (QAction*)action);
}

void k_bookmarkmenu_add_actions(void* self) {
    KBookmarkMenu_AddActions((KBookmarkMenu*)self);
}

void k_bookmarkmenu_fill_bookmarks(void* self) {
    KBookmarkMenu_FillBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_add_bookmark(void* self) {
    KBookmarkMenu_AddAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_add_bookmarks_list(void* self) {
    KBookmarkMenu_AddAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_edit_bookmarks(void* self) {
    KBookmarkMenu_AddEditBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_new_folder(void* self) {
    KBookmarkMenu_AddNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_open_in_tabs(void* self) {
    KBookmarkMenu_AddOpenInTabs((KBookmarkMenu*)self);
}

bool k_bookmarkmenu_is_root(const void* self) {
    return KBookmarkMenu_IsRoot((KBookmarkMenu*)self);
}

bool k_bookmarkmenu_is_dirty(const void* self) {
    return KBookmarkMenu_IsDirty((KBookmarkMenu*)self);
}

const char* k_bookmarkmenu_parent_address(const void* self) {
    libqt_string _str = KBookmarkMenu_ParentAddress((KBookmarkMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KBookmarkManager* k_bookmarkmenu_manager(const void* self) {
    return KBookmarkMenu_Manager((KBookmarkMenu*)self);
}

KBookmarkOwner* k_bookmarkmenu_owner(const void* self) {
    return KBookmarkMenu_Owner((KBookmarkMenu*)self);
}

QMenu* k_bookmarkmenu_parent_menu(const void* self) {
    return KBookmarkMenu_ParentMenu((KBookmarkMenu*)self);
}

const char* k_bookmarkmenu_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkmenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkmenu_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkmenu_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkmenu_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkmenu_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkmenu_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkmenu_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkmenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkmenu_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bookmarkmenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bookmarkmenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_bookmarkmenu_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_bookmarkmenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bookmarkmenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bookmarkmenu_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bookmarkmenu_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_bookmarkmenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bookmarkmenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bookmarkmenu_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_bookmarkmenu_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkmenu_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkmenu_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_bookmarkmenu_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkmenu_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_bookmarkmenu_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_bookmarkmenu_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_bookmarkmenu_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkmenu_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkmenu_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkmenu_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkmenu_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkmenu_dynamic_property_names\n");
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

QBindingStorage* k_bookmarkmenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkmenu_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkmenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkmenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkmenu_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkmenu_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bookmarkmenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_bookmarkmenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_bookmarkmenu_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_bookmarkmenu_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_bookmarkmenu_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkmenu_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_bookmarkmenu_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_bookmarkmenu_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_bookmarkmenu_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_bookmarkmenu_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_bookmarkmenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bookmarkmenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_event(void* self, void* event) {
    return KBookmarkMenu_Event((KBookmarkMenu*)self, (QEvent*)event);
}

bool k_bookmarkmenu_super_event(void* self, void* event) {
    return KBookmarkMenu_SuperEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkMenu_OnEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_event_filter(void* self, void* watched, void* event) {
    return KBookmarkMenu_EventFilter((KBookmarkMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool k_bookmarkmenu_super_event_filter(void* self, void* watched, void* event) {
    return KBookmarkMenu_SuperEventFilter((KBookmarkMenu*)self, (QObject*)watched, (QEvent*)event);
}

void k_bookmarkmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkMenu_OnEventFilter((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_timer_event(void* self, void* event) {
    KBookmarkMenu_TimerEvent((KBookmarkMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkmenu_super_timer_event(void* self, void* event) {
    KBookmarkMenu_SuperTimerEvent((KBookmarkMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkmenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnTimerEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_child_event(void* self, void* event) {
    KBookmarkMenu_ChildEvent((KBookmarkMenu*)self, (QChildEvent*)event);
}

void k_bookmarkmenu_super_child_event(void* self, void* event) {
    KBookmarkMenu_SuperChildEvent((KBookmarkMenu*)self, (QChildEvent*)event);
}

void k_bookmarkmenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnChildEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_custom_event(void* self, void* event) {
    KBookmarkMenu_CustomEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_super_custom_event(void* self, void* event) {
    KBookmarkMenu_SuperCustomEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnCustomEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_connect_notify(void* self, const void* signal) {
    KBookmarkMenu_ConnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_super_connect_notify(void* self, const void* signal) {
    KBookmarkMenu_SuperConnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KBookmarkMenu_OnConnectNotify((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_disconnect_notify(void* self, const void* signal) {
    KBookmarkMenu_DisconnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_super_disconnect_notify(void* self, const void* signal) {
    KBookmarkMenu_SuperDisconnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KBookmarkMenu_OnDisconnectNotify((KBookmarkMenu*)self, (intptr_t)callback);
}

QObject* k_bookmarkmenu_sender(const void* self) {
    return KBookmarkMenu_Sender((KBookmarkMenu*)self);
}

int32_t k_bookmarkmenu_sender_signal_index(const void* self) {
    return KBookmarkMenu_SenderSignalIndex((KBookmarkMenu*)self);
}

int32_t k_bookmarkmenu_receivers(const void* self, const char* signal) {
    return KBookmarkMenu_Receivers((KBookmarkMenu*)self, signal);
}

bool k_bookmarkmenu_is_signal_connected(const void* self, const void* signal) {
    return KBookmarkMenu_IsSignalConnected((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkmenu_delete(void* self) {
    KBookmarkMenu_Delete((KBookmarkMenu*)(self));
}
