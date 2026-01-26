#include "libkabstractviewadapter.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqabstractproxymodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkfilepreviewgenerator.hpp"
#include "libkfilepreviewgenerator.h"

KFilePreviewGenerator* k_filepreviewgenerator_new(void* parent) {
    return KFilePreviewGenerator_new((QAbstractItemView*)parent);
}

KFilePreviewGenerator* k_filepreviewgenerator_new2(void* parent, void* model) {
    return KFilePreviewGenerator_new2((KAbstractViewAdapter*)parent, (QAbstractProxyModel*)model);
}

const QMetaObject* k_filepreviewgenerator_meta_object(void* self) {
    return KFilePreviewGenerator_MetaObject((KFilePreviewGenerator*)self);
}

void k_filepreviewgenerator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFilePreviewGenerator_OnMetaObject((KFilePreviewGenerator*)self, (intptr_t)callback);
}

const QMetaObject* k_filepreviewgenerator_qbase_meta_object(void* self) {
    return KFilePreviewGenerator_QBaseMetaObject((KFilePreviewGenerator*)self);
}

void* k_filepreviewgenerator_metacast(void* self, const char* param1) {
    return KFilePreviewGenerator_Metacast((KFilePreviewGenerator*)self, param1);
}

void k_filepreviewgenerator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFilePreviewGenerator_OnMetacast((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void* k_filepreviewgenerator_qbase_metacast(void* self, const char* param1) {
    return KFilePreviewGenerator_QBaseMetacast((KFilePreviewGenerator*)self, param1);
}

int32_t k_filepreviewgenerator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePreviewGenerator_Metacall((KFilePreviewGenerator*)self, param1, param2, param3);
}

void k_filepreviewgenerator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFilePreviewGenerator_OnMetacall((KFilePreviewGenerator*)self, (intptr_t)callback);
}

int32_t k_filepreviewgenerator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePreviewGenerator_QBaseMetacall((KFilePreviewGenerator*)self, param1, param2, param3);
}

const char* k_filepreviewgenerator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filepreviewgenerator_set_preview_shown(void* self, bool show) {
    KFilePreviewGenerator_SetPreviewShown((KFilePreviewGenerator*)self, show);
}

bool k_filepreviewgenerator_is_preview_shown(void* self) {
    return KFilePreviewGenerator_IsPreviewShown((KFilePreviewGenerator*)self);
}

void k_filepreviewgenerator_set_enabled_plugins(void* self, const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filepreviewgenerator_set_enabled_plugins\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    KFilePreviewGenerator_SetEnabledPlugins((KFilePreviewGenerator*)self, list_list);
    free(list_qstr);
}

const char** k_filepreviewgenerator_enabled_plugins(void* self) {
    libqt_list _arr = KFilePreviewGenerator_EnabledPlugins((KFilePreviewGenerator*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filepreviewgenerator_enabled_plugins\n");
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

void k_filepreviewgenerator_update_icons(void* self) {
    KFilePreviewGenerator_UpdateIcons((KFilePreviewGenerator*)self);
}

void k_filepreviewgenerator_cancel_previews(void* self) {
    KFilePreviewGenerator_CancelPreviews((KFilePreviewGenerator*)self);
}

const char* k_filepreviewgenerator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filepreviewgenerator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filepreviewgenerator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filepreviewgenerator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_filepreviewgenerator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_filepreviewgenerator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_filepreviewgenerator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_filepreviewgenerator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_filepreviewgenerator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_filepreviewgenerator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_filepreviewgenerator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_filepreviewgenerator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_filepreviewgenerator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_filepreviewgenerator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_filepreviewgenerator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_filepreviewgenerator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_filepreviewgenerator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_filepreviewgenerator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_filepreviewgenerator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_filepreviewgenerator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_filepreviewgenerator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_filepreviewgenerator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_filepreviewgenerator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_filepreviewgenerator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_filepreviewgenerator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_filepreviewgenerator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_filepreviewgenerator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_filepreviewgenerator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filepreviewgenerator_dynamic_property_names\n");
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

QBindingStorage* k_filepreviewgenerator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_filepreviewgenerator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_filepreviewgenerator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_filepreviewgenerator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_filepreviewgenerator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_filepreviewgenerator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_filepreviewgenerator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_filepreviewgenerator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_filepreviewgenerator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_filepreviewgenerator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_filepreviewgenerator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_filepreviewgenerator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_filepreviewgenerator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_filepreviewgenerator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_filepreviewgenerator_event(void* self, void* event) {
    return KFilePreviewGenerator_Event((KFilePreviewGenerator*)self, (QEvent*)event);
}

bool k_filepreviewgenerator_qbase_event(void* self, void* event) {
    return KFilePreviewGenerator_QBaseEvent((KFilePreviewGenerator*)self, (QEvent*)event);
}

void k_filepreviewgenerator_on_event(void* self, bool (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnEvent((KFilePreviewGenerator*)self, (intptr_t)callback);
}

bool k_filepreviewgenerator_event_filter(void* self, void* watched, void* event) {
    return KFilePreviewGenerator_EventFilter((KFilePreviewGenerator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_filepreviewgenerator_qbase_event_filter(void* self, void* watched, void* event) {
    return KFilePreviewGenerator_QBaseEventFilter((KFilePreviewGenerator*)self, (QObject*)watched, (QEvent*)event);
}

void k_filepreviewgenerator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFilePreviewGenerator_OnEventFilter((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_timer_event(void* self, void* event) {
    KFilePreviewGenerator_TimerEvent((KFilePreviewGenerator*)self, (QTimerEvent*)event);
}

void k_filepreviewgenerator_qbase_timer_event(void* self, void* event) {
    KFilePreviewGenerator_QBaseTimerEvent((KFilePreviewGenerator*)self, (QTimerEvent*)event);
}

void k_filepreviewgenerator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnTimerEvent((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_child_event(void* self, void* event) {
    KFilePreviewGenerator_ChildEvent((KFilePreviewGenerator*)self, (QChildEvent*)event);
}

void k_filepreviewgenerator_qbase_child_event(void* self, void* event) {
    KFilePreviewGenerator_QBaseChildEvent((KFilePreviewGenerator*)self, (QChildEvent*)event);
}

void k_filepreviewgenerator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnChildEvent((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_custom_event(void* self, void* event) {
    KFilePreviewGenerator_CustomEvent((KFilePreviewGenerator*)self, (QEvent*)event);
}

void k_filepreviewgenerator_qbase_custom_event(void* self, void* event) {
    KFilePreviewGenerator_QBaseCustomEvent((KFilePreviewGenerator*)self, (QEvent*)event);
}

void k_filepreviewgenerator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnCustomEvent((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_connect_notify(void* self, void* signal) {
    KFilePreviewGenerator_ConnectNotify((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

void k_filepreviewgenerator_qbase_connect_notify(void* self, void* signal) {
    KFilePreviewGenerator_QBaseConnectNotify((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

void k_filepreviewgenerator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnConnectNotify((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_disconnect_notify(void* self, void* signal) {
    KFilePreviewGenerator_DisconnectNotify((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

void k_filepreviewgenerator_qbase_disconnect_notify(void* self, void* signal) {
    KFilePreviewGenerator_QBaseDisconnectNotify((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

void k_filepreviewgenerator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnDisconnectNotify((KFilePreviewGenerator*)self, (intptr_t)callback);
}

QObject* k_filepreviewgenerator_sender(void* self) {
    return KFilePreviewGenerator_Sender((KFilePreviewGenerator*)self);
}

QObject* k_filepreviewgenerator_qbase_sender(void* self) {
    return KFilePreviewGenerator_QBaseSender((KFilePreviewGenerator*)self);
}

void k_filepreviewgenerator_on_sender(void* self, QObject* (*callback)()) {
    KFilePreviewGenerator_OnSender((KFilePreviewGenerator*)self, (intptr_t)callback);
}

int32_t k_filepreviewgenerator_sender_signal_index(void* self) {
    return KFilePreviewGenerator_SenderSignalIndex((KFilePreviewGenerator*)self);
}

int32_t k_filepreviewgenerator_qbase_sender_signal_index(void* self) {
    return KFilePreviewGenerator_QBaseSenderSignalIndex((KFilePreviewGenerator*)self);
}

void k_filepreviewgenerator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFilePreviewGenerator_OnSenderSignalIndex((KFilePreviewGenerator*)self, (intptr_t)callback);
}

int32_t k_filepreviewgenerator_receivers(void* self, const char* signal) {
    return KFilePreviewGenerator_Receivers((KFilePreviewGenerator*)self, signal);
}

int32_t k_filepreviewgenerator_qbase_receivers(void* self, const char* signal) {
    return KFilePreviewGenerator_QBaseReceivers((KFilePreviewGenerator*)self, signal);
}

void k_filepreviewgenerator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFilePreviewGenerator_OnReceivers((KFilePreviewGenerator*)self, (intptr_t)callback);
}

bool k_filepreviewgenerator_is_signal_connected(void* self, void* signal) {
    return KFilePreviewGenerator_IsSignalConnected((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

bool k_filepreviewgenerator_qbase_is_signal_connected(void* self, void* signal) {
    return KFilePreviewGenerator_QBaseIsSignalConnected((KFilePreviewGenerator*)self, (QMetaMethod*)signal);
}

void k_filepreviewgenerator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFilePreviewGenerator_OnIsSignalConnected((KFilePreviewGenerator*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_filepreviewgenerator_delete(void* self) {
    KFilePreviewGenerator_Delete((KFilePreviewGenerator*)(self));
}
