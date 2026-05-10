#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtexttospeechwidget.hpp"
#include "libtexttospeechinterface.hpp"
#include "libtexttospeechinterface.h"

TextEditTextToSpeech__TextToSpeechInterface* k_textedittexttospeech__texttospeechinterface_new(void* textToSpeechWidget) {
    return TextEditTextToSpeech__TextToSpeechInterface_new((TextEditTextToSpeech__TextToSpeechWidget*)textToSpeechWidget);
}

TextEditTextToSpeech__TextToSpeechInterface* k_textedittexttospeech__texttospeechinterface_new2(void* textToSpeechWidget, void* parent) {
    return TextEditTextToSpeech__TextToSpeechInterface_new2((TextEditTextToSpeech__TextToSpeechWidget*)textToSpeechWidget, (QObject*)parent);
}

const QMetaObject* k_textedittexttospeech__texttospeechinterface_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_MetaObject((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void k_textedittexttospeech__texttospeechinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechInterface_OnMetaObject((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

const QMetaObject* k_textedittexttospeech__texttospeechinterface_super_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperMetaObject((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void* k_textedittexttospeech__texttospeechinterface_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechInterface_Metacast((TextEditTextToSpeech__TextToSpeechInterface*)self, param1);
}

void k_textedittexttospeech__texttospeechinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnMetacast((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void* k_textedittexttospeech__texttospeechinterface_super_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperMetacast((TextEditTextToSpeech__TextToSpeechInterface*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechInterface_Metacall((TextEditTextToSpeech__TextToSpeechInterface*)self, param1, param2, param3);
}

void k_textedittexttospeech__texttospeechinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnMetacall((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechinterface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperMetacall((TextEditTextToSpeech__TextToSpeechInterface*)self, param1, param2, param3);
}

const char* k_textedittexttospeech__texttospeechinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedittexttospeech__texttospeechinterface_is_ready(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_IsReady((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void k_textedittexttospeech__texttospeechinterface_say(void* self, const char* text) {
    TextEditTextToSpeech__TextToSpeechInterface_Say((TextEditTextToSpeech__TextToSpeechInterface*)self, qstring(text));
}

double k_textedittexttospeech__texttospeechinterface_volume(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_Volume((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void k_textedittexttospeech__texttospeechinterface_set_volume(void* self, double value) {
    TextEditTextToSpeech__TextToSpeechInterface_SetVolume((TextEditTextToSpeech__TextToSpeechInterface*)self, value);
}

void k_textedittexttospeech__texttospeechinterface_reload_settings(void* self) {
    TextEditTextToSpeech__TextToSpeechInterface_ReloadSettings((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

const char* k_textedittexttospeech__texttospeechinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechinterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textedittexttospeech__texttospeechinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textedittexttospeech__texttospeechinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textedittexttospeech__texttospeechinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textedittexttospeech__texttospeechinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textedittexttospeech__texttospeechinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textedittexttospeech__texttospeechinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textedittexttospeech__texttospeechinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textedittexttospeech__texttospeechinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textedittexttospeech__texttospeechinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textedittexttospeech__texttospeechinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textedittexttospeech__texttospeechinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textedittexttospeech__texttospeechinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textedittexttospeech__texttospeechinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textedittexttospeech__texttospeechinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textedittexttospeech__texttospeechinterface_dynamic_property_names\n");
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

QBindingStorage* k_textedittexttospeech__texttospeechinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textedittexttospeech__texttospeechinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textedittexttospeech__texttospeechinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textedittexttospeech__texttospeechinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textedittexttospeech__texttospeechinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textedittexttospeech__texttospeechinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textedittexttospeech__texttospeechinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textedittexttospeech__texttospeechinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechinterface_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textedittexttospeech__texttospeechinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textedittexttospeech__texttospeechinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechinterface_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechInterface_Event((TextEditTextToSpeech__TextToSpeechInterface*)self, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechinterface_super_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechinterface_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechInterface_EventFilter((TextEditTextToSpeech__TextToSpeechInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechinterface_super_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperEventFilter((TextEditTextToSpeech__TextToSpeechInterface*)self, (QObject*)watched, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnEventFilter((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_TimerEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_super_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_SuperTimerEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnTimerEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_ChildEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_super_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_SuperChildEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnChildEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_CustomEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_super_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechInterface_SuperCustomEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnCustomEvent((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechinterface_super_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechInterface_SuperConnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnConnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechinterface_super_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechInterface_SuperDisconnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnDisconnectNotify((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechinterface_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_Sender((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

QObject* k_textedittexttospeech__texttospeechinterface_super_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperSender((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void k_textedittexttospeech__texttospeechinterface_on_sender(void* self, QObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechInterface_OnSender((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechinterface_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

int32_t k_textedittexttospeech__texttospeechinterface_super_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperSenderSignalIndex((TextEditTextToSpeech__TextToSpeechInterface*)self);
}

void k_textedittexttospeech__texttospeechinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechInterface_OnSenderSignalIndex((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechinterface_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechInterface_Receivers((TextEditTextToSpeech__TextToSpeechInterface*)self, signal);
}

int32_t k_textedittexttospeech__texttospeechinterface_super_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperReceivers((TextEditTextToSpeech__TextToSpeechInterface*)self, signal);
}

void k_textedittexttospeech__texttospeechinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnReceivers((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechinterface_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

bool k_textedittexttospeech__texttospeechinterface_super_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechInterface_SuperIsSignalConnected((TextEditTextToSpeech__TextToSpeechInterface*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechInterface_OnIsSignalConnected((TextEditTextToSpeech__TextToSpeechInterface*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechinterface_delete(void* self) {
    TextEditTextToSpeech__TextToSpeechInterface_Delete((TextEditTextToSpeech__TextToSpeechInterface*)(self));
}
