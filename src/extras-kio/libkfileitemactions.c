#include "libkfileitemlistproperties.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkfileitemactions.hpp"
#include "libkfileitemactions.h"

KFileItemActions* k_fileitemactions_new() {
    return KFileItemActions_new();
}

KFileItemActions* k_fileitemactions_new2(void* parent) {
    return KFileItemActions_new2((QObject*)parent);
}

const QMetaObject* k_fileitemactions_meta_object(void* self) {
    return KFileItemActions_MetaObject((KFileItemActions*)self);
}

void k_fileitemactions_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFileItemActions_OnMetaObject((KFileItemActions*)self, (intptr_t)callback);
}

const QMetaObject* k_fileitemactions_qbase_meta_object(void* self) {
    return KFileItemActions_QBaseMetaObject((KFileItemActions*)self);
}

void* k_fileitemactions_metacast(void* self, const char* param1) {
    return KFileItemActions_Metacast((KFileItemActions*)self, param1);
}

void k_fileitemactions_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFileItemActions_OnMetacast((KFileItemActions*)self, (intptr_t)callback);
}

void* k_fileitemactions_qbase_metacast(void* self, const char* param1) {
    return KFileItemActions_QBaseMetacast((KFileItemActions*)self, param1);
}

int32_t k_fileitemactions_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileItemActions_Metacall((KFileItemActions*)self, param1, param2, param3);
}

void k_fileitemactions_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileItemActions_OnMetacall((KFileItemActions*)self, (intptr_t)callback);
}

int32_t k_fileitemactions_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileItemActions_QBaseMetacall((KFileItemActions*)self, param1, param2, param3);
}

const char* k_fileitemactions_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemactions_set_item_list_properties(void* self, void* itemList) {
    KFileItemActions_SetItemListProperties((KFileItemActions*)self, (KFileItemListProperties*)itemList);
}

void k_fileitemactions_set_parent_widget(void* self, void* widget) {
    KFileItemActions_SetParentWidget((KFileItemActions*)self, (QWidget*)widget);
}

void k_fileitemactions_insert_open_with_actions_to(void* self, void* before, void* topMenu, const char* excludedDesktopEntryNames[static 1]) {
    size_t excludedDesktopEntryNames_len = libqt_strv_length(excludedDesktopEntryNames);
    libqt_string* excludedDesktopEntryNames_qstr = (libqt_string*)malloc(excludedDesktopEntryNames_len * sizeof(libqt_string));
    if (excludedDesktopEntryNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileitemactions_insert_open_with_actions_to\n");
        abort();
    }
    for (size_t i = 0; i < excludedDesktopEntryNames_len; ++i) {
        excludedDesktopEntryNames_qstr[i] = qstring(excludedDesktopEntryNames[i]);
    }
    libqt_list excludedDesktopEntryNames_list = qlist(excludedDesktopEntryNames_qstr, excludedDesktopEntryNames_len);
    KFileItemActions_InsertOpenWithActionsTo((KFileItemActions*)self, (QAction*)before, (QMenu*)topMenu, excludedDesktopEntryNames_list);
    free(excludedDesktopEntryNames_qstr);
}

void k_fileitemactions_add_actions_to(void* self, void* menu) {
    KFileItemActions_AddActionsTo((KFileItemActions*)self, (QMenu*)menu);
}

void k_fileitemactions_open_with_dialog_about_to_be_shown(void* self) {
    KFileItemActions_OpenWithDialogAboutToBeShown((KFileItemActions*)self);
}

void k_fileitemactions_on_open_with_dialog_about_to_be_shown(void* self, void (*callback)(void*)) {
    KFileItemActions_Connect_OpenWithDialogAboutToBeShown((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_error(void* self, const char* errorMessage) {
    KFileItemActions_Error((KFileItemActions*)self, qstring(errorMessage));
}

void k_fileitemactions_on_error(void* self, void (*callback)(void*, const char*)) {
    KFileItemActions_Connect_Error((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_run_preferred_applications(void* self, void* fileOpenList) {
    KFileItemActions_RunPreferredApplications((KFileItemActions*)self, (KFileItemList*)fileOpenList);
}

const char* k_fileitemactions_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitemactions_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemactions_add_actions_to2(void* self, void* menu, int32_t sources) {
    KFileItemActions_AddActionsTo2((KFileItemActions*)self, (QMenu*)menu, sources);
}

void k_fileitemactions_add_actions_to3(void* self, void* menu, int32_t sources, libqt_list /* of QAction* */ additionalActions) {
    KFileItemActions_AddActionsTo3((KFileItemActions*)self, (QMenu*)menu, sources, additionalActions);
}

void k_fileitemactions_add_actions_to4(void* self, void* menu, int32_t sources, libqt_list /* of QAction* */ additionalActions, const char* excludeList[static 1]) {
    size_t excludeList_len = libqt_strv_length(excludeList);
    libqt_string* excludeList_qstr = (libqt_string*)malloc(excludeList_len * sizeof(libqt_string));
    if (excludeList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileitemactions_add_actions_to4\n");
        abort();
    }
    for (size_t i = 0; i < excludeList_len; ++i) {
        excludeList_qstr[i] = qstring(excludeList[i]);
    }
    libqt_list excludeList_list = qlist(excludeList_qstr, excludeList_len);
    KFileItemActions_AddActionsTo4((KFileItemActions*)self, (QMenu*)menu, sources, additionalActions, excludeList_list);
    free(excludeList_qstr);
}

const char* k_fileitemactions_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemactions_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fileitemactions_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fileitemactions_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fileitemactions_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fileitemactions_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fileitemactions_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fileitemactions_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fileitemactions_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fileitemactions_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fileitemactions_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fileitemactions_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fileitemactions_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fileitemactions_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fileitemactions_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_fileitemactions_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fileitemactions_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fileitemactions_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fileitemactions_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fileitemactions_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fileitemactions_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fileitemactions_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fileitemactions_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fileitemactions_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fileitemactions_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fileitemactions_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileitemactions_dynamic_property_names\n");
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

QBindingStorage* k_fileitemactions_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fileitemactions_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fileitemactions_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fileitemactions_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fileitemactions_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fileitemactions_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fileitemactions_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fileitemactions_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fileitemactions_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fileitemactions_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fileitemactions_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fileitemactions_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fileitemactions_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fileitemactions_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_fileitemactions_event(void* self, void* event) {
    return KFileItemActions_Event((KFileItemActions*)self, (QEvent*)event);
}

bool k_fileitemactions_qbase_event(void* self, void* event) {
    return KFileItemActions_QBaseEvent((KFileItemActions*)self, (QEvent*)event);
}

void k_fileitemactions_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileItemActions_OnEvent((KFileItemActions*)self, (intptr_t)callback);
}

bool k_fileitemactions_event_filter(void* self, void* watched, void* event) {
    return KFileItemActions_EventFilter((KFileItemActions*)self, (QObject*)watched, (QEvent*)event);
}

bool k_fileitemactions_qbase_event_filter(void* self, void* watched, void* event) {
    return KFileItemActions_QBaseEventFilter((KFileItemActions*)self, (QObject*)watched, (QEvent*)event);
}

void k_fileitemactions_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileItemActions_OnEventFilter((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_timer_event(void* self, void* event) {
    KFileItemActions_TimerEvent((KFileItemActions*)self, (QTimerEvent*)event);
}

void k_fileitemactions_qbase_timer_event(void* self, void* event) {
    KFileItemActions_QBaseTimerEvent((KFileItemActions*)self, (QTimerEvent*)event);
}

void k_fileitemactions_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileItemActions_OnTimerEvent((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_child_event(void* self, void* event) {
    KFileItemActions_ChildEvent((KFileItemActions*)self, (QChildEvent*)event);
}

void k_fileitemactions_qbase_child_event(void* self, void* event) {
    KFileItemActions_QBaseChildEvent((KFileItemActions*)self, (QChildEvent*)event);
}

void k_fileitemactions_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileItemActions_OnChildEvent((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_custom_event(void* self, void* event) {
    KFileItemActions_CustomEvent((KFileItemActions*)self, (QEvent*)event);
}

void k_fileitemactions_qbase_custom_event(void* self, void* event) {
    KFileItemActions_QBaseCustomEvent((KFileItemActions*)self, (QEvent*)event);
}

void k_fileitemactions_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileItemActions_OnCustomEvent((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_connect_notify(void* self, void* signal) {
    KFileItemActions_ConnectNotify((KFileItemActions*)self, (QMetaMethod*)signal);
}

void k_fileitemactions_qbase_connect_notify(void* self, void* signal) {
    KFileItemActions_QBaseConnectNotify((KFileItemActions*)self, (QMetaMethod*)signal);
}

void k_fileitemactions_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileItemActions_OnConnectNotify((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_disconnect_notify(void* self, void* signal) {
    KFileItemActions_DisconnectNotify((KFileItemActions*)self, (QMetaMethod*)signal);
}

void k_fileitemactions_qbase_disconnect_notify(void* self, void* signal) {
    KFileItemActions_QBaseDisconnectNotify((KFileItemActions*)self, (QMetaMethod*)signal);
}

void k_fileitemactions_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileItemActions_OnDisconnectNotify((KFileItemActions*)self, (intptr_t)callback);
}

QObject* k_fileitemactions_sender(void* self) {
    return KFileItemActions_Sender((KFileItemActions*)self);
}

QObject* k_fileitemactions_qbase_sender(void* self) {
    return KFileItemActions_QBaseSender((KFileItemActions*)self);
}

void k_fileitemactions_on_sender(void* self, QObject* (*callback)()) {
    KFileItemActions_OnSender((KFileItemActions*)self, (intptr_t)callback);
}

int32_t k_fileitemactions_sender_signal_index(void* self) {
    return KFileItemActions_SenderSignalIndex((KFileItemActions*)self);
}

int32_t k_fileitemactions_qbase_sender_signal_index(void* self) {
    return KFileItemActions_QBaseSenderSignalIndex((KFileItemActions*)self);
}

void k_fileitemactions_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileItemActions_OnSenderSignalIndex((KFileItemActions*)self, (intptr_t)callback);
}

int32_t k_fileitemactions_receivers(void* self, const char* signal) {
    return KFileItemActions_Receivers((KFileItemActions*)self, signal);
}

int32_t k_fileitemactions_qbase_receivers(void* self, const char* signal) {
    return KFileItemActions_QBaseReceivers((KFileItemActions*)self, signal);
}

void k_fileitemactions_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileItemActions_OnReceivers((KFileItemActions*)self, (intptr_t)callback);
}

bool k_fileitemactions_is_signal_connected(void* self, void* signal) {
    return KFileItemActions_IsSignalConnected((KFileItemActions*)self, (QMetaMethod*)signal);
}

bool k_fileitemactions_qbase_is_signal_connected(void* self, void* signal) {
    return KFileItemActions_QBaseIsSignalConnected((KFileItemActions*)self, (QMetaMethod*)signal);
}

void k_fileitemactions_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileItemActions_OnIsSignalConnected((KFileItemActions*)self, (intptr_t)callback);
}

void k_fileitemactions_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fileitemactions_delete(void* self) {
    KFileItemActions_Delete((KFileItemActions*)(self));
}
