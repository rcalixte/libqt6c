#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkselectionowner.hpp"
#include "libkselectionowner.h"

#ifdef __linux__
KSelectionOwner* k_selectionowner_new(xcb_atom_t selection) {
    return KSelectionOwner_new(selection);
}
#endif

KSelectionOwner* k_selectionowner_new2(const char* selection) {
    return KSelectionOwner_new2(selection);
}

#ifdef __linux__
KSelectionOwner* k_selectionowner_new3(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root) {
    return KSelectionOwner_new3(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionOwner* k_selectionowner_new4(const char* selection, xcb_connection_t* c, xcb_window_t root) {
    return KSelectionOwner_new4(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionOwner* k_selectionowner_new5(xcb_atom_t selection, int screen) {
    return KSelectionOwner_new5(selection, screen);
}
#endif

#ifdef __linux__
KSelectionOwner* k_selectionowner_new6(xcb_atom_t selection, int screen, void* parent) {
    return KSelectionOwner_new6(selection, screen, (QObject*)parent);
}
#endif

KSelectionOwner* k_selectionowner_new7(const char* selection, int screen) {
    return KSelectionOwner_new7(selection, screen);
}

KSelectionOwner* k_selectionowner_new8(const char* selection, int screen, void* parent) {
    return KSelectionOwner_new8(selection, screen, (QObject*)parent);
}

#ifdef __linux__
KSelectionOwner* k_selectionowner_new9(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, void* parent) {
    return KSelectionOwner_new9(selection, c, root, (QObject*)parent);
}
#endif

#ifdef __linux__
KSelectionOwner* k_selectionowner_new10(const char* selection, xcb_connection_t* c, xcb_window_t root, void* parent) {
    return KSelectionOwner_new10(selection, c, root, (QObject*)parent);
}
#endif

const QMetaObject* k_selectionowner_meta_object(void* self) {
    return KSelectionOwner_MetaObject((KSelectionOwner*)self);
}

void* k_selectionowner_metacast(void* self, const char* param1) {
    return KSelectionOwner_Metacast((KSelectionOwner*)self, param1);
}

int32_t k_selectionowner_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionOwner_Metacall((KSelectionOwner*)self, param1, param2, param3);
}

void k_selectionowner_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelectionOwner_OnMetacall((KSelectionOwner*)self, (intptr_t)callback);
}

int32_t k_selectionowner_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionOwner_QBaseMetacall((KSelectionOwner*)self, param1, param2, param3);
}

const char* k_selectionowner_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionowner_claim(void* self, bool force) {
    KSelectionOwner_Claim((KSelectionOwner*)self, force);
}

void k_selectionowner_release(void* self) {
    KSelectionOwner_Release((KSelectionOwner*)self);
}

#ifdef __linux__
xcb_window_t k_selectionowner_owner_window(void* self) {
    return (int)KSelectionOwner_OwnerWindow((KSelectionOwner*)self);
}
#endif

bool k_selectionowner_filter_event(void* self, void* ev_P) {
    return KSelectionOwner_FilterEvent((KSelectionOwner*)self, ev_P);
}

void k_selectionowner_timer_event(void* self, void* event) {
    KSelectionOwner_TimerEvent((KSelectionOwner*)self, (QTimerEvent*)event);
}

void k_selectionowner_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelectionOwner_OnTimerEvent((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_qbase_timer_event(void* self, void* event) {
    KSelectionOwner_QBaseTimerEvent((KSelectionOwner*)self, (QTimerEvent*)event);
}

void k_selectionowner_lost_ownership(void* self) {
    KSelectionOwner_LostOwnership((KSelectionOwner*)self);
}

void k_selectionowner_on_lost_ownership(void* self, void (*callback)(void*)) {
    KSelectionOwner_Connect_LostOwnership((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_claimed_ownership(void* self) {
    KSelectionOwner_ClaimedOwnership((KSelectionOwner*)self);
}

void k_selectionowner_on_claimed_ownership(void* self, void (*callback)(void*)) {
    KSelectionOwner_Connect_ClaimedOwnership((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_failed_to_claim_ownership(void* self) {
    KSelectionOwner_FailedToClaimOwnership((KSelectionOwner*)self);
}

void k_selectionowner_on_failed_to_claim_ownership(void* self, void (*callback)(void*)) {
    KSelectionOwner_Connect_FailedToClaimOwnership((KSelectionOwner*)self, (intptr_t)callback);
}

#ifdef __linux__
bool k_selectionowner_generic_reply(void* self, xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor) {
    return KSelectionOwner_GenericReply((KSelectionOwner*)self, target, property, requestor);
}
#endif

#ifdef __linux__
void k_selectionowner_on_generic_reply(void* self, bool (*callback)(void*, xcb_atom_t, xcb_atom_t, xcb_window_t)) {
    KSelectionOwner_OnGenericReply((KSelectionOwner*)self, (intptr_t)callback);
}
#endif

#ifdef __linux__
bool k_selectionowner_qbase_generic_reply(void* self, xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor) {
    return KSelectionOwner_QBaseGenericReply((KSelectionOwner*)self, target, property, requestor);
}
#endif

#ifdef __linux__
void k_selectionowner_reply_targets(void* self, xcb_atom_t property, xcb_window_t requestor) {
    KSelectionOwner_ReplyTargets((KSelectionOwner*)self, property, requestor);
}
#endif

#ifdef __linux__
void k_selectionowner_on_reply_targets(void* self, void (*callback)(void*, xcb_atom_t, xcb_window_t)) {
    KSelectionOwner_OnReplyTargets((KSelectionOwner*)self, (intptr_t)callback);
}
#endif

#ifdef __linux__
void k_selectionowner_qbase_reply_targets(void* self, xcb_atom_t property, xcb_window_t requestor) {
    KSelectionOwner_QBaseReplyTargets((KSelectionOwner*)self, property, requestor);
}
#endif

void k_selectionowner_get_atoms(void* self) {
    KSelectionOwner_GetAtoms((KSelectionOwner*)self);
}

void k_selectionowner_on_get_atoms(void* self, void (*callback)()) {
    KSelectionOwner_OnGetAtoms((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_qbase_get_atoms(void* self) {
    KSelectionOwner_QBaseGetAtoms((KSelectionOwner*)self);
}

void k_selectionowner_set_data(void* self, uint32_t extra1, uint32_t extra2) {
    KSelectionOwner_SetData((KSelectionOwner*)self, extra1, extra2);
}

void k_selectionowner_on_set_data(void* self, void (*callback)(void*, uint32_t, uint32_t)) {
    KSelectionOwner_OnSetData((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_qbase_set_data(void* self, uint32_t extra1, uint32_t extra2) {
    KSelectionOwner_QBaseSetData((KSelectionOwner*)self, extra1, extra2);
}

const char* k_selectionowner_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selectionowner_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionowner_claim2(void* self, bool force, bool force_kill) {
    KSelectionOwner_Claim2((KSelectionOwner*)self, force, force_kill);
}

const char* k_selectionowner_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionowner_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selectionowner_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selectionowner_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selectionowner_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selectionowner_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selectionowner_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selectionowner_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_selectionowner_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_selectionowner_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_selectionowner_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_selectionowner_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_selectionowner_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_selectionowner_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_selectionowner_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_selectionowner_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_selectionowner_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selectionowner_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selectionowner_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selectionowner_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_selectionowner_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selectionowner_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selectionowner_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selectionowner_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selectionowner_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionowner_dynamic_property_names");
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

QBindingStorage* k_selectionowner_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selectionowner_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selectionowner_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selectionowner_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_selectionowner_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_selectionowner_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_selectionowner_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_selectionowner_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_selectionowner_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_selectionowner_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selectionowner_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_selectionowner_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_selectionowner_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_selectionowner_event(void* self, void* event) {
    return KSelectionOwner_Event((KSelectionOwner*)self, (QEvent*)event);
}

bool k_selectionowner_qbase_event(void* self, void* event) {
    return KSelectionOwner_QBaseEvent((KSelectionOwner*)self, (QEvent*)event);
}

void k_selectionowner_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelectionOwner_OnEvent((KSelectionOwner*)self, (intptr_t)callback);
}

bool k_selectionowner_event_filter(void* self, void* watched, void* event) {
    return KSelectionOwner_EventFilter((KSelectionOwner*)self, (QObject*)watched, (QEvent*)event);
}

bool k_selectionowner_qbase_event_filter(void* self, void* watched, void* event) {
    return KSelectionOwner_QBaseEventFilter((KSelectionOwner*)self, (QObject*)watched, (QEvent*)event);
}

void k_selectionowner_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelectionOwner_OnEventFilter((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_child_event(void* self, void* event) {
    KSelectionOwner_ChildEvent((KSelectionOwner*)self, (QChildEvent*)event);
}

void k_selectionowner_qbase_child_event(void* self, void* event) {
    KSelectionOwner_QBaseChildEvent((KSelectionOwner*)self, (QChildEvent*)event);
}

void k_selectionowner_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelectionOwner_OnChildEvent((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_custom_event(void* self, void* event) {
    KSelectionOwner_CustomEvent((KSelectionOwner*)self, (QEvent*)event);
}

void k_selectionowner_qbase_custom_event(void* self, void* event) {
    KSelectionOwner_QBaseCustomEvent((KSelectionOwner*)self, (QEvent*)event);
}

void k_selectionowner_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelectionOwner_OnCustomEvent((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_connect_notify(void* self, void* signal) {
    KSelectionOwner_ConnectNotify((KSelectionOwner*)self, (QMetaMethod*)signal);
}

void k_selectionowner_qbase_connect_notify(void* self, void* signal) {
    KSelectionOwner_QBaseConnectNotify((KSelectionOwner*)self, (QMetaMethod*)signal);
}

void k_selectionowner_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionOwner_OnConnectNotify((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_disconnect_notify(void* self, void* signal) {
    KSelectionOwner_DisconnectNotify((KSelectionOwner*)self, (QMetaMethod*)signal);
}

void k_selectionowner_qbase_disconnect_notify(void* self, void* signal) {
    KSelectionOwner_QBaseDisconnectNotify((KSelectionOwner*)self, (QMetaMethod*)signal);
}

void k_selectionowner_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionOwner_OnDisconnectNotify((KSelectionOwner*)self, (intptr_t)callback);
}

QObject* k_selectionowner_sender(void* self) {
    return KSelectionOwner_Sender((KSelectionOwner*)self);
}

QObject* k_selectionowner_qbase_sender(void* self) {
    return KSelectionOwner_QBaseSender((KSelectionOwner*)self);
}

void k_selectionowner_on_sender(void* self, QObject* (*callback)()) {
    KSelectionOwner_OnSender((KSelectionOwner*)self, (intptr_t)callback);
}

int32_t k_selectionowner_sender_signal_index(void* self) {
    return KSelectionOwner_SenderSignalIndex((KSelectionOwner*)self);
}

int32_t k_selectionowner_qbase_sender_signal_index(void* self) {
    return KSelectionOwner_QBaseSenderSignalIndex((KSelectionOwner*)self);
}

void k_selectionowner_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSelectionOwner_OnSenderSignalIndex((KSelectionOwner*)self, (intptr_t)callback);
}

int32_t k_selectionowner_receivers(void* self, const char* signal) {
    return KSelectionOwner_Receivers((KSelectionOwner*)self, signal);
}

int32_t k_selectionowner_qbase_receivers(void* self, const char* signal) {
    return KSelectionOwner_QBaseReceivers((KSelectionOwner*)self, signal);
}

void k_selectionowner_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSelectionOwner_OnReceivers((KSelectionOwner*)self, (intptr_t)callback);
}

bool k_selectionowner_is_signal_connected(void* self, void* signal) {
    return KSelectionOwner_IsSignalConnected((KSelectionOwner*)self, (QMetaMethod*)signal);
}

bool k_selectionowner_qbase_is_signal_connected(void* self, void* signal) {
    return KSelectionOwner_QBaseIsSignalConnected((KSelectionOwner*)self, (QMetaMethod*)signal);
}

void k_selectionowner_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSelectionOwner_OnIsSignalConnected((KSelectionOwner*)self, (intptr_t)callback);
}

void k_selectionowner_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selectionowner_delete(void* self) {
    KSelectionOwner_Delete((KSelectionOwner*)(self));
}
