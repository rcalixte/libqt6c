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
    return KBookmarkMenu_new((KBookmarkManager*)manager, (KBookmarkOwner*)owner, (QMenu*)parentMenu);
}

KBookmarkMenu* k_bookmarkmenu_new2(void* mgr, void* owner, void* parentMenu, const char* parentAddress) {
    return KBookmarkMenu_new2((KBookmarkManager*)mgr, (KBookmarkOwner*)owner, (QMenu*)parentMenu, qstring(parentAddress));
}

const QMetaObject* k_bookmarkmenu_meta_object(void* self) {
    return KBookmarkMenu_MetaObject((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KBookmarkMenu_OnMetaObject((KBookmarkMenu*)self, (intptr_t)callback);
}

const QMetaObject* k_bookmarkmenu_qbase_meta_object(void* self) {
    return KBookmarkMenu_QBaseMetaObject((KBookmarkMenu*)self);
}

void* k_bookmarkmenu_metacast(void* self, const char* param1) {
    return KBookmarkMenu_Metacast((KBookmarkMenu*)self, param1);
}

void k_bookmarkmenu_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBookmarkMenu_OnMetacast((KBookmarkMenu*)self, (intptr_t)callback);
}

void* k_bookmarkmenu_qbase_metacast(void* self, const char* param1) {
    return KBookmarkMenu_QBaseMetacast((KBookmarkMenu*)self, param1);
}

int32_t k_bookmarkmenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkMenu_Metacall((KBookmarkMenu*)self, param1, param2, param3);
}

void k_bookmarkmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkMenu_OnMetacall((KBookmarkMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkMenu_QBaseMetacall((KBookmarkMenu*)self, param1, param2, param3);
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

QAction* k_bookmarkmenu_add_bookmark_action(void* self) {
    return KBookmarkMenu_AddBookmarkAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_bookmark_tabs_as_folder_action(void* self) {
    return KBookmarkMenu_BookmarkTabsAsFolderAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_new_bookmark_folder_action(void* self) {
    return KBookmarkMenu_NewBookmarkFolderAction((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_edit_bookmarks_action(void* self) {
    return KBookmarkMenu_EditBookmarksAction((KBookmarkMenu*)self);
}

void k_bookmarkmenu_set_browser_mode(void* self, bool browserMode) {
    KBookmarkMenu_SetBrowserMode((KBookmarkMenu*)self, browserMode);
}

bool k_bookmarkmenu_browser_mode(void* self) {
    return KBookmarkMenu_BrowserMode((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_bookmarks_changed(void* self, const char* param1) {
    KBookmarkMenu_SlotBookmarksChanged((KBookmarkMenu*)self, qstring(param1));
}

void k_bookmarkmenu_slot_about_to_show(void* self) {
    KBookmarkMenu_SlotAboutToShow((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_slot_about_to_show(void* self, void (*callback)()) {
    KBookmarkMenu_OnSlotAboutToShow((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_slot_about_to_show(void* self) {
    KBookmarkMenu_QBaseSlotAboutToShow((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_add_bookmarks_list(void* self) {
    KBookmarkMenu_SlotAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_slot_add_bookmarks_list(void* self, void (*callback)()) {
    KBookmarkMenu_OnSlotAddBookmarksList((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_slot_add_bookmarks_list(void* self) {
    KBookmarkMenu_QBaseSlotAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_add_bookmark(void* self) {
    KBookmarkMenu_SlotAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_slot_add_bookmark(void* self, void (*callback)()) {
    KBookmarkMenu_OnSlotAddBookmark((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_slot_add_bookmark(void* self) {
    KBookmarkMenu_QBaseSlotAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_new_folder(void* self) {
    KBookmarkMenu_SlotNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_slot_new_folder(void* self, void (*callback)()) {
    KBookmarkMenu_OnSlotNewFolder((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_slot_new_folder(void* self) {
    KBookmarkMenu_QBaseSlotNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_slot_open_folder_in_tabs(void* self) {
    KBookmarkMenu_SlotOpenFolderInTabs((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_slot_open_folder_in_tabs(void* self, void (*callback)()) {
    KBookmarkMenu_OnSlotOpenFolderInTabs((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_slot_open_folder_in_tabs(void* self) {
    KBookmarkMenu_QBaseSlotOpenFolderInTabs((KBookmarkMenu*)self);
}

void k_bookmarkmenu_clear(void* self) {
    KBookmarkMenu_Clear((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_clear(void* self, void (*callback)()) {
    KBookmarkMenu_OnClear((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_clear(void* self) {
    KBookmarkMenu_QBaseClear((KBookmarkMenu*)self);
}

void k_bookmarkmenu_refill(void* self) {
    KBookmarkMenu_Refill((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_refill(void* self, void (*callback)()) {
    KBookmarkMenu_OnRefill((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_refill(void* self) {
    KBookmarkMenu_QBaseRefill((KBookmarkMenu*)self);
}

QAction* k_bookmarkmenu_action_for_bookmark(void* self, void* bm) {
    return KBookmarkMenu_ActionForBookmark((KBookmarkMenu*)self, (KBookmark*)bm);
}

void k_bookmarkmenu_on_action_for_bookmark(void* self, QAction* (*callback)(void*, void*)) {
    KBookmarkMenu_OnActionForBookmark((KBookmarkMenu*)self, (intptr_t)callback);
}

QAction* k_bookmarkmenu_qbase_action_for_bookmark(void* self, void* bm) {
    return KBookmarkMenu_QBaseActionForBookmark((KBookmarkMenu*)self, (KBookmark*)bm);
}

QMenu* k_bookmarkmenu_context_menu(void* self, void* action) {
    return KBookmarkMenu_ContextMenu((KBookmarkMenu*)self, (QAction*)action);
}

void k_bookmarkmenu_on_context_menu(void* self, QMenu* (*callback)(void*, void*)) {
    KBookmarkMenu_OnContextMenu((KBookmarkMenu*)self, (intptr_t)callback);
}

QMenu* k_bookmarkmenu_qbase_context_menu(void* self, void* action) {
    return KBookmarkMenu_QBaseContextMenu((KBookmarkMenu*)self, (QAction*)action);
}

void k_bookmarkmenu_add_actions(void* self) {
    KBookmarkMenu_AddActions((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_actions(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddActions((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_actions(void* self) {
    KBookmarkMenu_QBaseAddActions((KBookmarkMenu*)self);
}

void k_bookmarkmenu_fill_bookmarks(void* self) {
    KBookmarkMenu_FillBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_fill_bookmarks(void* self, void (*callback)()) {
    KBookmarkMenu_OnFillBookmarks((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_fill_bookmarks(void* self) {
    KBookmarkMenu_QBaseFillBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_add_bookmark(void* self) {
    KBookmarkMenu_AddAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_add_bookmark(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddAddBookmark((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_add_bookmark(void* self) {
    KBookmarkMenu_QBaseAddAddBookmark((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_add_bookmarks_list(void* self) {
    KBookmarkMenu_AddAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_add_bookmarks_list(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddAddBookmarksList((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_add_bookmarks_list(void* self) {
    KBookmarkMenu_QBaseAddAddBookmarksList((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_edit_bookmarks(void* self) {
    KBookmarkMenu_AddEditBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_edit_bookmarks(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddEditBookmarks((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_edit_bookmarks(void* self) {
    KBookmarkMenu_QBaseAddEditBookmarks((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_new_folder(void* self) {
    KBookmarkMenu_AddNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_new_folder(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddNewFolder((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_new_folder(void* self) {
    KBookmarkMenu_QBaseAddNewFolder((KBookmarkMenu*)self);
}

void k_bookmarkmenu_add_open_in_tabs(void* self) {
    KBookmarkMenu_AddOpenInTabs((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_add_open_in_tabs(void* self, void (*callback)()) {
    KBookmarkMenu_OnAddOpenInTabs((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_qbase_add_open_in_tabs(void* self) {
    KBookmarkMenu_QBaseAddOpenInTabs((KBookmarkMenu*)self);
}

bool k_bookmarkmenu_is_root(void* self) {
    return KBookmarkMenu_IsRoot((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_is_root(void* self, bool (*callback)()) {
    KBookmarkMenu_OnIsRoot((KBookmarkMenu*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_qbase_is_root(void* self) {
    return KBookmarkMenu_QBaseIsRoot((KBookmarkMenu*)self);
}

bool k_bookmarkmenu_is_dirty(void* self) {
    return KBookmarkMenu_IsDirty((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_is_dirty(void* self, bool (*callback)()) {
    KBookmarkMenu_OnIsDirty((KBookmarkMenu*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_qbase_is_dirty(void* self) {
    return KBookmarkMenu_QBaseIsDirty((KBookmarkMenu*)self);
}

const char* k_bookmarkmenu_parent_address(void* self) {
    libqt_string _str = KBookmarkMenu_ParentAddress((KBookmarkMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkmenu_on_parent_address(void* self, const char* (*callback)()) {
    KBookmarkMenu_OnParentAddress((KBookmarkMenu*)self, (intptr_t)callback);
}

const char* k_bookmarkmenu_qbase_parent_address(void* self) {
    libqt_string _str = KBookmarkMenu_QBaseParentAddress((KBookmarkMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KBookmarkManager* k_bookmarkmenu_manager(void* self) {
    return KBookmarkMenu_Manager((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_manager(void* self, KBookmarkManager* (*callback)()) {
    KBookmarkMenu_OnManager((KBookmarkMenu*)self, (intptr_t)callback);
}

KBookmarkManager* k_bookmarkmenu_qbase_manager(void* self) {
    return KBookmarkMenu_QBaseManager((KBookmarkMenu*)self);
}

KBookmarkOwner* k_bookmarkmenu_owner(void* self) {
    return KBookmarkMenu_Owner((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_owner(void* self, KBookmarkOwner* (*callback)()) {
    KBookmarkMenu_OnOwner((KBookmarkMenu*)self, (intptr_t)callback);
}

KBookmarkOwner* k_bookmarkmenu_qbase_owner(void* self) {
    return KBookmarkMenu_QBaseOwner((KBookmarkMenu*)self);
}

QMenu* k_bookmarkmenu_parent_menu(void* self) {
    return KBookmarkMenu_ParentMenu((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_parent_menu(void* self, QMenu* (*callback)()) {
    KBookmarkMenu_OnParentMenu((KBookmarkMenu*)self, (intptr_t)callback);
}

QMenu* k_bookmarkmenu_qbase_parent_menu(void* self) {
    return KBookmarkMenu_QBaseParentMenu((KBookmarkMenu*)self);
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

const char* k_bookmarkmenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkmenu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkmenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkmenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkmenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkmenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkmenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkmenu_thread(void* self) {
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

libqt_list /* of QObject* */ k_bookmarkmenu_children(void* self) {
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

QMetaObject__Connection* k_bookmarkmenu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkmenu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkmenu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkmenu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_bookmarkmenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkmenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkmenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkmenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkmenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkmenu_dynamic_property_names\n");
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

QBindingStorage* k_bookmarkmenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkmenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkmenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkmenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkmenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkmenu_inherits(void* self, const char* classname) {
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

QMetaObject__Connection* k_bookmarkmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
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

bool k_bookmarkmenu_qbase_event(void* self, void* event) {
    return KBookmarkMenu_QBaseEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkMenu_OnEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_event_filter(void* self, void* watched, void* event) {
    return KBookmarkMenu_EventFilter((KBookmarkMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool k_bookmarkmenu_qbase_event_filter(void* self, void* watched, void* event) {
    return KBookmarkMenu_QBaseEventFilter((KBookmarkMenu*)self, (QObject*)watched, (QEvent*)event);
}

void k_bookmarkmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkMenu_OnEventFilter((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_timer_event(void* self, void* event) {
    KBookmarkMenu_TimerEvent((KBookmarkMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkmenu_qbase_timer_event(void* self, void* event) {
    KBookmarkMenu_QBaseTimerEvent((KBookmarkMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkmenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnTimerEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_child_event(void* self, void* event) {
    KBookmarkMenu_ChildEvent((KBookmarkMenu*)self, (QChildEvent*)event);
}

void k_bookmarkmenu_qbase_child_event(void* self, void* event) {
    KBookmarkMenu_QBaseChildEvent((KBookmarkMenu*)self, (QChildEvent*)event);
}

void k_bookmarkmenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnChildEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_custom_event(void* self, void* event) {
    KBookmarkMenu_CustomEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_qbase_custom_event(void* self, void* event) {
    KBookmarkMenu_QBaseCustomEvent((KBookmarkMenu*)self, (QEvent*)event);
}

void k_bookmarkmenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnCustomEvent((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_connect_notify(void* self, void* signal) {
    KBookmarkMenu_ConnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_qbase_connect_notify(void* self, void* signal) {
    KBookmarkMenu_QBaseConnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnConnectNotify((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_disconnect_notify(void* self, void* signal) {
    KBookmarkMenu_DisconnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_qbase_disconnect_notify(void* self, void* signal) {
    KBookmarkMenu_QBaseDisconnectNotify((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkMenu_OnDisconnectNotify((KBookmarkMenu*)self, (intptr_t)callback);
}

QObject* k_bookmarkmenu_sender(void* self) {
    return KBookmarkMenu_Sender((KBookmarkMenu*)self);
}

QObject* k_bookmarkmenu_qbase_sender(void* self) {
    return KBookmarkMenu_QBaseSender((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_sender(void* self, QObject* (*callback)()) {
    KBookmarkMenu_OnSender((KBookmarkMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkmenu_sender_signal_index(void* self) {
    return KBookmarkMenu_SenderSignalIndex((KBookmarkMenu*)self);
}

int32_t k_bookmarkmenu_qbase_sender_signal_index(void* self) {
    return KBookmarkMenu_QBaseSenderSignalIndex((KBookmarkMenu*)self);
}

void k_bookmarkmenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBookmarkMenu_OnSenderSignalIndex((KBookmarkMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkmenu_receivers(void* self, const char* signal) {
    return KBookmarkMenu_Receivers((KBookmarkMenu*)self, signal);
}

int32_t k_bookmarkmenu_qbase_receivers(void* self, const char* signal) {
    return KBookmarkMenu_QBaseReceivers((KBookmarkMenu*)self, signal);
}

void k_bookmarkmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBookmarkMenu_OnReceivers((KBookmarkMenu*)self, (intptr_t)callback);
}

bool k_bookmarkmenu_is_signal_connected(void* self, void* signal) {
    return KBookmarkMenu_IsSignalConnected((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

bool k_bookmarkmenu_qbase_is_signal_connected(void* self, void* signal) {
    return KBookmarkMenu_QBaseIsSignalConnected((KBookmarkMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBookmarkMenu_OnIsSignalConnected((KBookmarkMenu*)self, (intptr_t)callback);
}

void k_bookmarkmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkmenu_delete(void* self) {
    KBookmarkMenu_Delete((KBookmarkMenu*)(self));
}
