#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtexttospeechactions.hpp"
#include "libtexttospeechactions.h"

TextEditTextToSpeech__TextToSpeechActions* k_textedittexttospeech__texttospeechactions_new() {
    return TextEditTextToSpeech__TextToSpeechActions_new();
}

TextEditTextToSpeech__TextToSpeechActions* k_textedittexttospeech__texttospeechactions_new2(void* parent) {
    return TextEditTextToSpeech__TextToSpeechActions_new2((QObject*)parent);
}

const QMetaObject* k_textedittexttospeech__texttospeechactions_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_MetaObject((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void k_textedittexttospeech__texttospeechactions_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechActions_OnMetaObject((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

const QMetaObject* k_textedittexttospeech__texttospeechactions_super_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperMetaObject((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void* k_textedittexttospeech__texttospeechactions_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechActions_Metacast((TextEditTextToSpeech__TextToSpeechActions*)self, param1);
}

void k_textedittexttospeech__texttospeechactions_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnMetacast((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void* k_textedittexttospeech__texttospeechactions_super_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperMetacast((TextEditTextToSpeech__TextToSpeechActions*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechactions_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechActions_Metacall((TextEditTextToSpeech__TextToSpeechActions*)self, param1, param2, param3);
}

void k_textedittexttospeech__texttospeechactions_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnMetacall((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechactions_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperMetacall((TextEditTextToSpeech__TextToSpeechActions*)self, param1, param2, param3);
}

const char* k_textedittexttospeech__texttospeechactions_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* k_textedittexttospeech__texttospeechactions_stop_action(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_StopAction((TextEditTextToSpeech__TextToSpeechActions*)self);
}

QAction* k_textedittexttospeech__texttospeechactions_play_pause_action(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_PlayPauseAction((TextEditTextToSpeech__TextToSpeechActions*)self);
}

int32_t k_textedittexttospeech__texttospeechactions_state(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_State((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void k_textedittexttospeech__texttospeechactions_set_state(void* self, int32_t state) {
    TextEditTextToSpeech__TextToSpeechActions_SetState((TextEditTextToSpeech__TextToSpeechActions*)self, state);
}

void k_textedittexttospeech__texttospeechactions_slot_stop(void* self) {
    TextEditTextToSpeech__TextToSpeechActions_SlotStop((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void k_textedittexttospeech__texttospeechactions_state_changed(void* self, int32_t state) {
    TextEditTextToSpeech__TextToSpeechActions_StateChanged((TextEditTextToSpeech__TextToSpeechActions*)self, state);
}

void k_textedittexttospeech__texttospeechactions_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    TextEditTextToSpeech__TextToSpeechActions_Connect_StateChanged((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

const char* k_textedittexttospeech__texttospeechactions_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechactions_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechactions_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechactions_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textedittexttospeech__texttospeechactions_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textedittexttospeech__texttospeechactions_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textedittexttospeech__texttospeechactions_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textedittexttospeech__texttospeechactions_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textedittexttospeech__texttospeechactions_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textedittexttospeech__texttospeechactions_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textedittexttospeech__texttospeechactions_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textedittexttospeech__texttospeechactions_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textedittexttospeech__texttospeechactions_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textedittexttospeech__texttospeechactions_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textedittexttospeech__texttospeechactions_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechactions_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textedittexttospeech__texttospeechactions_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechactions_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textedittexttospeech__texttospeechactions_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textedittexttospeech__texttospeechactions_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textedittexttospeech__texttospeechactions_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textedittexttospeech__texttospeechactions_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textedittexttospeech__texttospeechactions_dynamic_property_names\n");
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

QBindingStorage* k_textedittexttospeech__texttospeechactions_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textedittexttospeech__texttospeechactions_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textedittexttospeech__texttospeechactions_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textedittexttospeech__texttospeechactions_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechactions_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textedittexttospeech__texttospeechactions_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textedittexttospeech__texttospeechactions_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textedittexttospeech__texttospeechactions_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textedittexttospeech__texttospeechactions_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechactions_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textedittexttospeech__texttospeechactions_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textedittexttospeech__texttospeechactions_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechactions_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechactions_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textedittexttospeech__texttospeechactions_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textedittexttospeech__texttospeechactions_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechactions_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechActions_Event((TextEditTextToSpeech__TextToSpeechActions*)self, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechactions_super_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechactions_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechActions_EventFilter((TextEditTextToSpeech__TextToSpeechActions*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechactions_super_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperEventFilter((TextEditTextToSpeech__TextToSpeechActions*)self, (QObject*)watched, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnEventFilter((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_TimerEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_super_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_SuperTimerEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnTimerEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_ChildEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_super_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_SuperChildEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnChildEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_CustomEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_super_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechActions_SuperCustomEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechactions_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnCustomEvent((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechActions_ConnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechactions_super_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechActions_SuperConnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechactions_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnConnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechactions_super_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechActions_SuperDisconnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechactions_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnDisconnectNotify((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechactions_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_Sender((TextEditTextToSpeech__TextToSpeechActions*)self);
}

QObject* k_textedittexttospeech__texttospeechactions_super_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperSender((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void k_textedittexttospeech__texttospeechactions_on_sender(void* self, QObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechActions_OnSender((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechactions_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex((TextEditTextToSpeech__TextToSpeechActions*)self);
}

int32_t k_textedittexttospeech__texttospeechactions_super_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperSenderSignalIndex((TextEditTextToSpeech__TextToSpeechActions*)self);
}

void k_textedittexttospeech__texttospeechactions_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechActions_OnSenderSignalIndex((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechactions_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechActions_Receivers((TextEditTextToSpeech__TextToSpeechActions*)self, signal);
}

int32_t k_textedittexttospeech__texttospeechactions_super_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperReceivers((TextEditTextToSpeech__TextToSpeechActions*)self, signal);
}

void k_textedittexttospeech__texttospeechactions_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnReceivers((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechactions_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

bool k_textedittexttospeech__texttospeechactions_super_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechActions_SuperIsSignalConnected((TextEditTextToSpeech__TextToSpeechActions*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechactions_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechActions_OnIsSignalConnected((TextEditTextToSpeech__TextToSpeechActions*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechactions_delete(void* self) {
    TextEditTextToSpeech__TextToSpeechActions_Delete((TextEditTextToSpeech__TextToSpeechActions*)(self));
}
