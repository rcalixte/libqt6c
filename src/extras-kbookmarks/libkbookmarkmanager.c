#include "libkbookmark.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkbookmarkmanager.hpp"
#include "libkbookmarkmanager.h"

KBookmarkManager* k_bookmarkmanager_new(const char* bookmarksFile) {
    return KBookmarkManager_new(qstring(bookmarksFile));
}

KBookmarkManager* k_bookmarkmanager_new2(const char* bookmarksFile, void* parent) {
    return KBookmarkManager_new2(qstring(bookmarksFile), (QObject*)parent);
}

const QMetaObject* k_bookmarkmanager_meta_object(void* self) {
    return KBookmarkManager_MetaObject((KBookmarkManager*)self);
}

void* k_bookmarkmanager_metacast(void* self, const char* param1) {
    return KBookmarkManager_Metacast((KBookmarkManager*)self, param1);
}

int32_t k_bookmarkmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkManager_Metacall((KBookmarkManager*)self, param1, param2, param3);
}

void k_bookmarkmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkManager_OnMetacall((KBookmarkManager*)self, (intptr_t)callback);
}

int32_t k_bookmarkmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkManager_QBaseMetacall((KBookmarkManager*)self, param1, param2, param3);
}

const char* k_bookmarkmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_bookmarkmanager_save_as(void* self, const char* filename) {
    return KBookmarkManager_SaveAs((KBookmarkManager*)self, qstring(filename));
}

bool k_bookmarkmanager_update_access_metadata(void* self, const char* url) {
    return KBookmarkManager_UpdateAccessMetadata((KBookmarkManager*)self, qstring(url));
}

const char* k_bookmarkmanager_path(void* self) {
    libqt_string _str = KBookmarkManager_Path((KBookmarkManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KBookmarkGroup* k_bookmarkmanager_root(void* self) {
    return KBookmarkManager_Root((KBookmarkManager*)self);
}

KBookmarkGroup* k_bookmarkmanager_toolbar(void* self) {
    return KBookmarkManager_Toolbar((KBookmarkManager*)self);
}

KBookmark* k_bookmarkmanager_find_by_address(void* self, const char* address) {
    return KBookmarkManager_FindByAddress((KBookmarkManager*)self, qstring(address));
}

void k_bookmarkmanager_emit_changed(void* self) {
    KBookmarkManager_EmitChanged((KBookmarkManager*)self);
}

void k_bookmarkmanager_emit_changed2(void* self, void* group) {
    KBookmarkManager_EmitChanged2((KBookmarkManager*)self, (KBookmarkGroup*)group);
}

bool k_bookmarkmanager_save(void* self) {
    return KBookmarkManager_Save((KBookmarkManager*)self);
}

QDomDocument* k_bookmarkmanager_internal_document(void* self) {
    return KBookmarkManager_InternalDocument((KBookmarkManager*)self);
}

void k_bookmarkmanager_changed(void* self, const char* groupAddress) {
    KBookmarkManager_Changed((KBookmarkManager*)self, qstring(groupAddress));
}

void k_bookmarkmanager_on_changed(void* self, void (*callback)(void*, const char*)) {
    KBookmarkManager_Connect_Changed((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_error(void* self, const char* errorMessage) {
    KBookmarkManager_Error((KBookmarkManager*)self, qstring(errorMessage));
}

void k_bookmarkmanager_on_error(void* self, void (*callback)(void*, const char*)) {
    KBookmarkManager_Connect_Error((KBookmarkManager*)self, (intptr_t)callback);
}

const char* k_bookmarkmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_bookmarkmanager_save_as2(void* self, const char* filename, bool toolbarCache) {
    return KBookmarkManager_SaveAs2((KBookmarkManager*)self, qstring(filename), toolbarCache);
}

bool k_bookmarkmanager_save1(void* self, bool toolbarCache) {
    return KBookmarkManager_Save1((KBookmarkManager*)self, toolbarCache);
}

const char* k_bookmarkmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bookmarkmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bookmarkmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_bookmarkmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bookmarkmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bookmarkmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bookmarkmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_bookmarkmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bookmarkmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bookmarkmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkmanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_bookmarkmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkmanager_dynamic_property_names");
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

QBindingStorage* k_bookmarkmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bookmarkmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_bookmarkmanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_bookmarkmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_bookmarkmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_bookmarkmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bookmarkmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_bookmarkmanager_event(void* self, void* event) {
    return KBookmarkManager_Event((KBookmarkManager*)self, (QEvent*)event);
}

bool k_bookmarkmanager_qbase_event(void* self, void* event) {
    return KBookmarkManager_QBaseEvent((KBookmarkManager*)self, (QEvent*)event);
}

void k_bookmarkmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkManager_OnEvent((KBookmarkManager*)self, (intptr_t)callback);
}

bool k_bookmarkmanager_event_filter(void* self, void* watched, void* event) {
    return KBookmarkManager_EventFilter((KBookmarkManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_bookmarkmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return KBookmarkManager_QBaseEventFilter((KBookmarkManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_bookmarkmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkManager_OnEventFilter((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_timer_event(void* self, void* event) {
    KBookmarkManager_TimerEvent((KBookmarkManager*)self, (QTimerEvent*)event);
}

void k_bookmarkmanager_qbase_timer_event(void* self, void* event) {
    KBookmarkManager_QBaseTimerEvent((KBookmarkManager*)self, (QTimerEvent*)event);
}

void k_bookmarkmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkManager_OnTimerEvent((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_child_event(void* self, void* event) {
    KBookmarkManager_ChildEvent((KBookmarkManager*)self, (QChildEvent*)event);
}

void k_bookmarkmanager_qbase_child_event(void* self, void* event) {
    KBookmarkManager_QBaseChildEvent((KBookmarkManager*)self, (QChildEvent*)event);
}

void k_bookmarkmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkManager_OnChildEvent((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_custom_event(void* self, void* event) {
    KBookmarkManager_CustomEvent((KBookmarkManager*)self, (QEvent*)event);
}

void k_bookmarkmanager_qbase_custom_event(void* self, void* event) {
    KBookmarkManager_QBaseCustomEvent((KBookmarkManager*)self, (QEvent*)event);
}

void k_bookmarkmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkManager_OnCustomEvent((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_connect_notify(void* self, void* signal) {
    KBookmarkManager_ConnectNotify((KBookmarkManager*)self, (QMetaMethod*)signal);
}

void k_bookmarkmanager_qbase_connect_notify(void* self, void* signal) {
    KBookmarkManager_QBaseConnectNotify((KBookmarkManager*)self, (QMetaMethod*)signal);
}

void k_bookmarkmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkManager_OnConnectNotify((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_disconnect_notify(void* self, void* signal) {
    KBookmarkManager_DisconnectNotify((KBookmarkManager*)self, (QMetaMethod*)signal);
}

void k_bookmarkmanager_qbase_disconnect_notify(void* self, void* signal) {
    KBookmarkManager_QBaseDisconnectNotify((KBookmarkManager*)self, (QMetaMethod*)signal);
}

void k_bookmarkmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkManager_OnDisconnectNotify((KBookmarkManager*)self, (intptr_t)callback);
}

QObject* k_bookmarkmanager_sender(void* self) {
    return KBookmarkManager_Sender((KBookmarkManager*)self);
}

QObject* k_bookmarkmanager_qbase_sender(void* self) {
    return KBookmarkManager_QBaseSender((KBookmarkManager*)self);
}

void k_bookmarkmanager_on_sender(void* self, QObject* (*callback)()) {
    KBookmarkManager_OnSender((KBookmarkManager*)self, (intptr_t)callback);
}

int32_t k_bookmarkmanager_sender_signal_index(void* self) {
    return KBookmarkManager_SenderSignalIndex((KBookmarkManager*)self);
}

int32_t k_bookmarkmanager_qbase_sender_signal_index(void* self) {
    return KBookmarkManager_QBaseSenderSignalIndex((KBookmarkManager*)self);
}

void k_bookmarkmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBookmarkManager_OnSenderSignalIndex((KBookmarkManager*)self, (intptr_t)callback);
}

int32_t k_bookmarkmanager_receivers(void* self, const char* signal) {
    return KBookmarkManager_Receivers((KBookmarkManager*)self, signal);
}

int32_t k_bookmarkmanager_qbase_receivers(void* self, const char* signal) {
    return KBookmarkManager_QBaseReceivers((KBookmarkManager*)self, signal);
}

void k_bookmarkmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBookmarkManager_OnReceivers((KBookmarkManager*)self, (intptr_t)callback);
}

bool k_bookmarkmanager_is_signal_connected(void* self, void* signal) {
    return KBookmarkManager_IsSignalConnected((KBookmarkManager*)self, (QMetaMethod*)signal);
}

bool k_bookmarkmanager_qbase_is_signal_connected(void* self, void* signal) {
    return KBookmarkManager_QBaseIsSignalConnected((KBookmarkManager*)self, (QMetaMethod*)signal);
}

void k_bookmarkmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBookmarkManager_OnIsSignalConnected((KBookmarkManager*)self, (intptr_t)callback);
}

void k_bookmarkmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkmanager_delete(void* self) {
    KBookmarkManager_Delete((KBookmarkManager*)(self));
}
