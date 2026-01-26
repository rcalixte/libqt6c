#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkselectionwatcher.hpp"
#include "libkselectionwatcher.h"

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new(xcb_atom_t selection) {
    return KSelectionWatcher_new(selection);
}
#endif

KSelectionWatcher* k_selectionwatcher_new2(const char* selection) {
    return KSelectionWatcher_new2(selection);
}

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new3(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root) {
    return KSelectionWatcher_new3(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new4(const char* selection, xcb_connection_t* c, xcb_window_t root) {
    return KSelectionWatcher_new4(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new5(xcb_atom_t selection, int screen) {
    return KSelectionWatcher_new5(selection, screen);
}
#endif

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new6(xcb_atom_t selection, int screen, void* parent) {
    return KSelectionWatcher_new6(selection, screen, (QObject*)parent);
}
#endif

KSelectionWatcher* k_selectionwatcher_new7(const char* selection, int screen) {
    return KSelectionWatcher_new7(selection, screen);
}

KSelectionWatcher* k_selectionwatcher_new8(const char* selection, int screen, void* parent) {
    return KSelectionWatcher_new8(selection, screen, (QObject*)parent);
}

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new9(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, void* parent) {
    return KSelectionWatcher_new9(selection, c, root, (QObject*)parent);
}
#endif

#ifdef __linux__
KSelectionWatcher* k_selectionwatcher_new10(const char* selection, xcb_connection_t* c, xcb_window_t root, void* parent) {
    return KSelectionWatcher_new10(selection, c, root, (QObject*)parent);
}
#endif

const QMetaObject* k_selectionwatcher_meta_object(void* self) {
    return KSelectionWatcher_MetaObject((KSelectionWatcher*)self);
}

void k_selectionwatcher_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSelectionWatcher_OnMetaObject((KSelectionWatcher*)self, (intptr_t)callback);
}

const QMetaObject* k_selectionwatcher_qbase_meta_object(void* self) {
    return KSelectionWatcher_QBaseMetaObject((KSelectionWatcher*)self);
}

void* k_selectionwatcher_metacast(void* self, const char* param1) {
    return KSelectionWatcher_Metacast((KSelectionWatcher*)self, param1);
}

void k_selectionwatcher_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSelectionWatcher_OnMetacast((KSelectionWatcher*)self, (intptr_t)callback);
}

void* k_selectionwatcher_qbase_metacast(void* self, const char* param1) {
    return KSelectionWatcher_QBaseMetacast((KSelectionWatcher*)self, param1);
}

int32_t k_selectionwatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionWatcher_Metacall((KSelectionWatcher*)self, param1, param2, param3);
}

void k_selectionwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelectionWatcher_OnMetacall((KSelectionWatcher*)self, (intptr_t)callback);
}

int32_t k_selectionwatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionWatcher_QBaseMetacall((KSelectionWatcher*)self, param1, param2, param3);
}

const char* k_selectionwatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

#ifdef __linux__
xcb_window_t k_selectionwatcher_owner(void* self) {
    return (int)KSelectionWatcher_Owner((KSelectionWatcher*)self);
}
#endif

void k_selectionwatcher_filter_event(void* self, void* ev_P) {
    KSelectionWatcher_FilterEvent((KSelectionWatcher*)self, ev_P);
}

#ifdef __linux__
void k_selectionwatcher_new_owner(void* self, xcb_window_t owner) {
    KSelectionWatcher_NewOwner((KSelectionWatcher*)self, owner);
}
#endif

#ifdef __linux__
void k_selectionwatcher_on_new_owner(void* self, void (*callback)(void*, xcb_window_t)) {
    KSelectionWatcher_Connect_NewOwner((KSelectionWatcher*)self, (intptr_t)callback);
}
#endif

void k_selectionwatcher_lost_owner(void* self) {
    KSelectionWatcher_LostOwner((KSelectionWatcher*)self);
}

void k_selectionwatcher_on_lost_owner(void* self, void (*callback)(void*)) {
    KSelectionWatcher_Connect_LostOwner((KSelectionWatcher*)self, (intptr_t)callback);
}

const char* k_selectionwatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selectionwatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selectionwatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionwatcher_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selectionwatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selectionwatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selectionwatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selectionwatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selectionwatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selectionwatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_selectionwatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_selectionwatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_selectionwatcher_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_selectionwatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_selectionwatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_selectionwatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_selectionwatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_selectionwatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_selectionwatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_selectionwatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selectionwatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selectionwatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selectionwatcher_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_selectionwatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selectionwatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selectionwatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selectionwatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selectionwatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionwatcher_dynamic_property_names\n");
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

QBindingStorage* k_selectionwatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selectionwatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selectionwatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selectionwatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_selectionwatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_selectionwatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_selectionwatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_selectionwatcher_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_selectionwatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_selectionwatcher_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_selectionwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selectionwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_selectionwatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_selectionwatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_selectionwatcher_event(void* self, void* event) {
    return KSelectionWatcher_Event((KSelectionWatcher*)self, (QEvent*)event);
}

bool k_selectionwatcher_qbase_event(void* self, void* event) {
    return KSelectionWatcher_QBaseEvent((KSelectionWatcher*)self, (QEvent*)event);
}

void k_selectionwatcher_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelectionWatcher_OnEvent((KSelectionWatcher*)self, (intptr_t)callback);
}

bool k_selectionwatcher_event_filter(void* self, void* watched, void* event) {
    return KSelectionWatcher_EventFilter((KSelectionWatcher*)self, (QObject*)watched, (QEvent*)event);
}

bool k_selectionwatcher_qbase_event_filter(void* self, void* watched, void* event) {
    return KSelectionWatcher_QBaseEventFilter((KSelectionWatcher*)self, (QObject*)watched, (QEvent*)event);
}

void k_selectionwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelectionWatcher_OnEventFilter((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_timer_event(void* self, void* event) {
    KSelectionWatcher_TimerEvent((KSelectionWatcher*)self, (QTimerEvent*)event);
}

void k_selectionwatcher_qbase_timer_event(void* self, void* event) {
    KSelectionWatcher_QBaseTimerEvent((KSelectionWatcher*)self, (QTimerEvent*)event);
}

void k_selectionwatcher_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelectionWatcher_OnTimerEvent((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_child_event(void* self, void* event) {
    KSelectionWatcher_ChildEvent((KSelectionWatcher*)self, (QChildEvent*)event);
}

void k_selectionwatcher_qbase_child_event(void* self, void* event) {
    KSelectionWatcher_QBaseChildEvent((KSelectionWatcher*)self, (QChildEvent*)event);
}

void k_selectionwatcher_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelectionWatcher_OnChildEvent((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_custom_event(void* self, void* event) {
    KSelectionWatcher_CustomEvent((KSelectionWatcher*)self, (QEvent*)event);
}

void k_selectionwatcher_qbase_custom_event(void* self, void* event) {
    KSelectionWatcher_QBaseCustomEvent((KSelectionWatcher*)self, (QEvent*)event);
}

void k_selectionwatcher_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelectionWatcher_OnCustomEvent((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_connect_notify(void* self, void* signal) {
    KSelectionWatcher_ConnectNotify((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

void k_selectionwatcher_qbase_connect_notify(void* self, void* signal) {
    KSelectionWatcher_QBaseConnectNotify((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

void k_selectionwatcher_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionWatcher_OnConnectNotify((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_disconnect_notify(void* self, void* signal) {
    KSelectionWatcher_DisconnectNotify((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

void k_selectionwatcher_qbase_disconnect_notify(void* self, void* signal) {
    KSelectionWatcher_QBaseDisconnectNotify((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

void k_selectionwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionWatcher_OnDisconnectNotify((KSelectionWatcher*)self, (intptr_t)callback);
}

QObject* k_selectionwatcher_sender(void* self) {
    return KSelectionWatcher_Sender((KSelectionWatcher*)self);
}

QObject* k_selectionwatcher_qbase_sender(void* self) {
    return KSelectionWatcher_QBaseSender((KSelectionWatcher*)self);
}

void k_selectionwatcher_on_sender(void* self, QObject* (*callback)()) {
    KSelectionWatcher_OnSender((KSelectionWatcher*)self, (intptr_t)callback);
}

int32_t k_selectionwatcher_sender_signal_index(void* self) {
    return KSelectionWatcher_SenderSignalIndex((KSelectionWatcher*)self);
}

int32_t k_selectionwatcher_qbase_sender_signal_index(void* self) {
    return KSelectionWatcher_QBaseSenderSignalIndex((KSelectionWatcher*)self);
}

void k_selectionwatcher_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSelectionWatcher_OnSenderSignalIndex((KSelectionWatcher*)self, (intptr_t)callback);
}

int32_t k_selectionwatcher_receivers(void* self, const char* signal) {
    return KSelectionWatcher_Receivers((KSelectionWatcher*)self, signal);
}

int32_t k_selectionwatcher_qbase_receivers(void* self, const char* signal) {
    return KSelectionWatcher_QBaseReceivers((KSelectionWatcher*)self, signal);
}

void k_selectionwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSelectionWatcher_OnReceivers((KSelectionWatcher*)self, (intptr_t)callback);
}

bool k_selectionwatcher_is_signal_connected(void* self, void* signal) {
    return KSelectionWatcher_IsSignalConnected((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

bool k_selectionwatcher_qbase_is_signal_connected(void* self, void* signal) {
    return KSelectionWatcher_QBaseIsSignalConnected((KSelectionWatcher*)self, (QMetaMethod*)signal);
}

void k_selectionwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSelectionWatcher_OnIsSignalConnected((KSelectionWatcher*)self, (intptr_t)callback);
}

void k_selectionwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selectionwatcher_delete(void* self) {
    KSelectionWatcher_Delete((KSelectionWatcher*)(self));
}
