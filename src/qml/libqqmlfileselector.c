#include "../libqcoreevent.hpp"
#include "../libqfileselector.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlfileselector.hpp"
#include "libqqmlfileselector.h"

QQmlFileSelector* q_qmlfileselector_new(void* engine) {
    return QQmlFileSelector_New((QQmlEngine*)engine);
}

QQmlFileSelector* q_qmlfileselector_new2(void* engine, void* parent) {
    return QQmlFileSelector_New2((QQmlEngine*)engine, (QObject*)parent);
}

const QMetaObject* q_qmlfileselector_meta_object(void* self) {
    return QQmlFileSelector_MetaObject((QQmlFileSelector*)self);
}

void q_qmlfileselector_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlFileSelector_OnMetaObject((QQmlFileSelector*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlfileselector_super_meta_object(void* self) {
    return QQmlFileSelector_SuperMetaObject((QQmlFileSelector*)self);
}

void* q_qmlfileselector_metacast(void* self, const char* param1) {
    return QQmlFileSelector_Metacast((QQmlFileSelector*)self, param1);
}

void q_qmlfileselector_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlFileSelector_OnMetacast((QQmlFileSelector*)self, (intptr_t)callback);
}

void* q_qmlfileselector_super_metacast(void* self, const char* param1) {
    return QQmlFileSelector_SuperMetacast((QQmlFileSelector*)self, param1);
}

int32_t q_qmlfileselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlFileSelector_Metacall((QQmlFileSelector*)self, param1, param2, param3);
}

void q_qmlfileselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlFileSelector_OnMetacall((QQmlFileSelector*)self, (intptr_t)callback);
}

int32_t q_qmlfileselector_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlFileSelector_SuperMetacall((QQmlFileSelector*)self, param1, param2, param3);
}

const char* q_qmlfileselector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFileSelector* q_qmlfileselector_selector(void* self) {
    return QQmlFileSelector_Selector((QQmlFileSelector*)self);
}

void q_qmlfileselector_set_selector(void* self, void* selector) {
    QQmlFileSelector_SetSelector((QQmlFileSelector*)self, (QFileSelector*)selector);
}

void q_qmlfileselector_set_extra_selectors(void* self, const char* strings[static 1]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlfileselector_set_extra_selectors\n");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i)
        strings_qstr[i] = qstring(strings[i]);
    libqt_list strings_list = qlist(strings_qstr, strings_len);
    QQmlFileSelector_SetExtraSelectors((QQmlFileSelector*)self, strings_list);
    free(strings_qstr);
}

QQmlFileSelector* q_qmlfileselector_get(void* param1) {
    return QQmlFileSelector_Get((QQmlEngine*)param1);
}

const char* q_qmlfileselector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlfileselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlfileselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlfileselector_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlfileselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlfileselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlfileselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlfileselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlfileselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlfileselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlfileselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlfileselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlfileselector_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlfileselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlfileselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlfileselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlfileselector_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlfileselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlfileselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlfileselector_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlfileselector_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlfileselector_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlfileselector_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlfileselector_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlfileselector_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlfileselector_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlfileselector_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlfileselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlfileselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlfileselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlfileselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlfileselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlfileselector_dynamic_property_names\n");
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

QBindingStorage* q_qmlfileselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlfileselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlfileselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlfileselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlfileselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlfileselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlfileselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlfileselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlfileselector_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlfileselector_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlfileselector_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlfileselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlfileselector_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlfileselector_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlfileselector_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlfileselector_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlfileselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlfileselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlfileselector_event(void* self, void* event) {
    return QQmlFileSelector_Event((QQmlFileSelector*)self, (QEvent*)event);
}

bool q_qmlfileselector_super_event(void* self, void* event) {
    return QQmlFileSelector_SuperEvent((QQmlFileSelector*)self, (QEvent*)event);
}

void q_qmlfileselector_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlFileSelector_OnEvent((QQmlFileSelector*)self, (intptr_t)callback);
}

bool q_qmlfileselector_event_filter(void* self, void* watched, void* event) {
    return QQmlFileSelector_EventFilter((QQmlFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlfileselector_super_event_filter(void* self, void* watched, void* event) {
    return QQmlFileSelector_SuperEventFilter((QQmlFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlfileselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlFileSelector_OnEventFilter((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_timer_event(void* self, void* event) {
    QQmlFileSelector_TimerEvent((QQmlFileSelector*)self, (QTimerEvent*)event);
}

void q_qmlfileselector_super_timer_event(void* self, void* event) {
    QQmlFileSelector_SuperTimerEvent((QQmlFileSelector*)self, (QTimerEvent*)event);
}

void q_qmlfileselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlFileSelector_OnTimerEvent((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_child_event(void* self, void* event) {
    QQmlFileSelector_ChildEvent((QQmlFileSelector*)self, (QChildEvent*)event);
}

void q_qmlfileselector_super_child_event(void* self, void* event) {
    QQmlFileSelector_SuperChildEvent((QQmlFileSelector*)self, (QChildEvent*)event);
}

void q_qmlfileselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlFileSelector_OnChildEvent((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_custom_event(void* self, void* event) {
    QQmlFileSelector_CustomEvent((QQmlFileSelector*)self, (QEvent*)event);
}

void q_qmlfileselector_super_custom_event(void* self, void* event) {
    QQmlFileSelector_SuperCustomEvent((QQmlFileSelector*)self, (QEvent*)event);
}

void q_qmlfileselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlFileSelector_OnCustomEvent((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_connect_notify(void* self, void* signal) {
    QQmlFileSelector_ConnectNotify((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

void q_qmlfileselector_super_connect_notify(void* self, void* signal) {
    QQmlFileSelector_SuperConnectNotify((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

void q_qmlfileselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlFileSelector_OnConnectNotify((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_disconnect_notify(void* self, void* signal) {
    QQmlFileSelector_DisconnectNotify((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

void q_qmlfileselector_super_disconnect_notify(void* self, void* signal) {
    QQmlFileSelector_SuperDisconnectNotify((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

void q_qmlfileselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlFileSelector_OnDisconnectNotify((QQmlFileSelector*)self, (intptr_t)callback);
}

QObject* q_qmlfileselector_sender(void* self) {
    return QQmlFileSelector_Sender((QQmlFileSelector*)self);
}

QObject* q_qmlfileselector_super_sender(void* self) {
    return QQmlFileSelector_SuperSender((QQmlFileSelector*)self);
}

void q_qmlfileselector_on_sender(void* self, QObject* (*callback)()) {
    QQmlFileSelector_OnSender((QQmlFileSelector*)self, (intptr_t)callback);
}

int32_t q_qmlfileselector_sender_signal_index(void* self) {
    return QQmlFileSelector_SenderSignalIndex((QQmlFileSelector*)self);
}

int32_t q_qmlfileselector_super_sender_signal_index(void* self) {
    return QQmlFileSelector_SuperSenderSignalIndex((QQmlFileSelector*)self);
}

void q_qmlfileselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlFileSelector_OnSenderSignalIndex((QQmlFileSelector*)self, (intptr_t)callback);
}

int32_t q_qmlfileselector_receivers(void* self, const char* signal) {
    return QQmlFileSelector_Receivers((QQmlFileSelector*)self, signal);
}

int32_t q_qmlfileselector_super_receivers(void* self, const char* signal) {
    return QQmlFileSelector_SuperReceivers((QQmlFileSelector*)self, signal);
}

void q_qmlfileselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlFileSelector_OnReceivers((QQmlFileSelector*)self, (intptr_t)callback);
}

bool q_qmlfileselector_is_signal_connected(void* self, void* signal) {
    return QQmlFileSelector_IsSignalConnected((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

bool q_qmlfileselector_super_is_signal_connected(void* self, void* signal) {
    return QQmlFileSelector_SuperIsSignalConnected((QQmlFileSelector*)self, (QMetaMethod*)signal);
}

void q_qmlfileselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlFileSelector_OnIsSignalConnected((QQmlFileSelector*)self, (intptr_t)callback);
}

void q_qmlfileselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlfileselector_delete(void* self) {
    QQmlFileSelector_Delete((QQmlFileSelector*)(self));
}
