#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libkcoreurlnavigator.hpp"
#include "libkcoreurlnavigator.h"

KCoreUrlNavigator* k_coreurlnavigator_new() {
    return KCoreUrlNavigator_new();
}

KCoreUrlNavigator* k_coreurlnavigator_new2(void* url) {
    return KCoreUrlNavigator_new2((QUrl*)url);
}

KCoreUrlNavigator* k_coreurlnavigator_new3(void* url, void* parent) {
    return KCoreUrlNavigator_new3((QUrl*)url, (QObject*)parent);
}

const QMetaObject* k_coreurlnavigator_meta_object(void* self) {
    return KCoreUrlNavigator_MetaObject((KCoreUrlNavigator*)self);
}

void* k_coreurlnavigator_metacast(void* self, const char* param1) {
    return KCoreUrlNavigator_Metacast((KCoreUrlNavigator*)self, param1);
}

int32_t k_coreurlnavigator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreUrlNavigator_Metacall((KCoreUrlNavigator*)self, param1, param2, param3);
}

void k_coreurlnavigator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCoreUrlNavigator_OnMetacall((KCoreUrlNavigator*)self, (intptr_t)callback);
}

int32_t k_coreurlnavigator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreUrlNavigator_QBaseMetacall((KCoreUrlNavigator*)self, param1, param2, param3);
}

const char* k_coreurlnavigator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_coreurlnavigator_current_location_url(void* self) {
    return KCoreUrlNavigator_CurrentLocationUrl((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_set_current_location_url(void* self, void* url) {
    KCoreUrlNavigator_SetCurrentLocationUrl((KCoreUrlNavigator*)self, (QUrl*)url);
}

void k_coreurlnavigator_current_location_url_changed(void* self) {
    KCoreUrlNavigator_CurrentLocationUrlChanged((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_current_url_about_to_change(void* self, void* newUrl) {
    KCoreUrlNavigator_CurrentUrlAboutToChange((KCoreUrlNavigator*)self, (QUrl*)newUrl);
}

int32_t k_coreurlnavigator_history_size(void* self) {
    return KCoreUrlNavigator_HistorySize((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_history_size_changed(void* self) {
    KCoreUrlNavigator_HistorySizeChanged((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_url_selection_requested(void* self, void* url) {
    KCoreUrlNavigator_UrlSelectionRequested((KCoreUrlNavigator*)self, (QUrl*)url);
}

int32_t k_coreurlnavigator_history_index(void* self) {
    return KCoreUrlNavigator_HistoryIndex((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_history_index_changed(void* self) {
    KCoreUrlNavigator_HistoryIndexChanged((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_history_changed(void* self) {
    KCoreUrlNavigator_HistoryChanged((KCoreUrlNavigator*)self);
}

QUrl* k_coreurlnavigator_location_url(void* self) {
    return KCoreUrlNavigator_LocationUrl((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_save_location_state(void* self, void* state) {
    KCoreUrlNavigator_SaveLocationState((KCoreUrlNavigator*)self, (QVariant*)state);
}

QVariant* k_coreurlnavigator_location_state(void* self) {
    return KCoreUrlNavigator_LocationState((KCoreUrlNavigator*)self);
}

bool k_coreurlnavigator_go_back(void* self) {
    return KCoreUrlNavigator_GoBack((KCoreUrlNavigator*)self);
}

bool k_coreurlnavigator_go_forward(void* self) {
    return KCoreUrlNavigator_GoForward((KCoreUrlNavigator*)self);
}

bool k_coreurlnavigator_go_up(void* self) {
    return KCoreUrlNavigator_GoUp((KCoreUrlNavigator*)self);
}

const char* k_coreurlnavigator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_coreurlnavigator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_coreurlnavigator_location_url1(void* self, int historyIndex) {
    return KCoreUrlNavigator_LocationUrl1((KCoreUrlNavigator*)self, historyIndex);
}

QVariant* k_coreurlnavigator_location_state1(void* self, int historyIndex) {
    return KCoreUrlNavigator_LocationState1((KCoreUrlNavigator*)self, historyIndex);
}

const char* k_coreurlnavigator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreurlnavigator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_coreurlnavigator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_coreurlnavigator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_coreurlnavigator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_coreurlnavigator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_coreurlnavigator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_coreurlnavigator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_coreurlnavigator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_coreurlnavigator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_coreurlnavigator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_coreurlnavigator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_coreurlnavigator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_coreurlnavigator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_coreurlnavigator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_coreurlnavigator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_coreurlnavigator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_coreurlnavigator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_coreurlnavigator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_coreurlnavigator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_coreurlnavigator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_coreurlnavigator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_coreurlnavigator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_coreurlnavigator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_coreurlnavigator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_coreurlnavigator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreurlnavigator_dynamic_property_names\n");
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

QBindingStorage* k_coreurlnavigator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_coreurlnavigator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_coreurlnavigator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_coreurlnavigator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_coreurlnavigator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_coreurlnavigator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_coreurlnavigator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_coreurlnavigator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_coreurlnavigator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_coreurlnavigator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_coreurlnavigator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_coreurlnavigator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_coreurlnavigator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_coreurlnavigator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_coreurlnavigator_event(void* self, void* event) {
    return KCoreUrlNavigator_Event((KCoreUrlNavigator*)self, (QEvent*)event);
}

bool k_coreurlnavigator_qbase_event(void* self, void* event) {
    return KCoreUrlNavigator_QBaseEvent((KCoreUrlNavigator*)self, (QEvent*)event);
}

void k_coreurlnavigator_on_event(void* self, bool (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnEvent((KCoreUrlNavigator*)self, (intptr_t)callback);
}

bool k_coreurlnavigator_event_filter(void* self, void* watched, void* event) {
    return KCoreUrlNavigator_EventFilter((KCoreUrlNavigator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_coreurlnavigator_qbase_event_filter(void* self, void* watched, void* event) {
    return KCoreUrlNavigator_QBaseEventFilter((KCoreUrlNavigator*)self, (QObject*)watched, (QEvent*)event);
}

void k_coreurlnavigator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCoreUrlNavigator_OnEventFilter((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_timer_event(void* self, void* event) {
    KCoreUrlNavigator_TimerEvent((KCoreUrlNavigator*)self, (QTimerEvent*)event);
}

void k_coreurlnavigator_qbase_timer_event(void* self, void* event) {
    KCoreUrlNavigator_QBaseTimerEvent((KCoreUrlNavigator*)self, (QTimerEvent*)event);
}

void k_coreurlnavigator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnTimerEvent((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_child_event(void* self, void* event) {
    KCoreUrlNavigator_ChildEvent((KCoreUrlNavigator*)self, (QChildEvent*)event);
}

void k_coreurlnavigator_qbase_child_event(void* self, void* event) {
    KCoreUrlNavigator_QBaseChildEvent((KCoreUrlNavigator*)self, (QChildEvent*)event);
}

void k_coreurlnavigator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnChildEvent((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_custom_event(void* self, void* event) {
    KCoreUrlNavigator_CustomEvent((KCoreUrlNavigator*)self, (QEvent*)event);
}

void k_coreurlnavigator_qbase_custom_event(void* self, void* event) {
    KCoreUrlNavigator_QBaseCustomEvent((KCoreUrlNavigator*)self, (QEvent*)event);
}

void k_coreurlnavigator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnCustomEvent((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_connect_notify(void* self, void* signal) {
    KCoreUrlNavigator_ConnectNotify((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

void k_coreurlnavigator_qbase_connect_notify(void* self, void* signal) {
    KCoreUrlNavigator_QBaseConnectNotify((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

void k_coreurlnavigator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnConnectNotify((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_disconnect_notify(void* self, void* signal) {
    KCoreUrlNavigator_DisconnectNotify((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

void k_coreurlnavigator_qbase_disconnect_notify(void* self, void* signal) {
    KCoreUrlNavigator_QBaseDisconnectNotify((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

void k_coreurlnavigator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnDisconnectNotify((KCoreUrlNavigator*)self, (intptr_t)callback);
}

QObject* k_coreurlnavigator_sender(void* self) {
    return KCoreUrlNavigator_Sender((KCoreUrlNavigator*)self);
}

QObject* k_coreurlnavigator_qbase_sender(void* self) {
    return KCoreUrlNavigator_QBaseSender((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_on_sender(void* self, QObject* (*callback)()) {
    KCoreUrlNavigator_OnSender((KCoreUrlNavigator*)self, (intptr_t)callback);
}

int32_t k_coreurlnavigator_sender_signal_index(void* self) {
    return KCoreUrlNavigator_SenderSignalIndex((KCoreUrlNavigator*)self);
}

int32_t k_coreurlnavigator_qbase_sender_signal_index(void* self) {
    return KCoreUrlNavigator_QBaseSenderSignalIndex((KCoreUrlNavigator*)self);
}

void k_coreurlnavigator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCoreUrlNavigator_OnSenderSignalIndex((KCoreUrlNavigator*)self, (intptr_t)callback);
}

int32_t k_coreurlnavigator_receivers(void* self, const char* signal) {
    return KCoreUrlNavigator_Receivers((KCoreUrlNavigator*)self, signal);
}

int32_t k_coreurlnavigator_qbase_receivers(void* self, const char* signal) {
    return KCoreUrlNavigator_QBaseReceivers((KCoreUrlNavigator*)self, signal);
}

void k_coreurlnavigator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCoreUrlNavigator_OnReceivers((KCoreUrlNavigator*)self, (intptr_t)callback);
}

bool k_coreurlnavigator_is_signal_connected(void* self, void* signal) {
    return KCoreUrlNavigator_IsSignalConnected((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

bool k_coreurlnavigator_qbase_is_signal_connected(void* self, void* signal) {
    return KCoreUrlNavigator_QBaseIsSignalConnected((KCoreUrlNavigator*)self, (QMetaMethod*)signal);
}

void k_coreurlnavigator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCoreUrlNavigator_OnIsSignalConnected((KCoreUrlNavigator*)self, (intptr_t)callback);
}

void k_coreurlnavigator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_coreurlnavigator_delete(void* self) {
    KCoreUrlNavigator_Delete((KCoreUrlNavigator*)(self));
}
