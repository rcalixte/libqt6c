#include "libdocument.hpp"
#include "libview.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libmessage_1.hpp"
#include "libmessage_1.h"

KTextEditor__Message* k_texteditor__message_new(const char* richtext) {
    return KTextEditor__Message_new(qstring(richtext));
}

KTextEditor__Message* k_texteditor__message_new2(const char* richtext, int32_t type) {
    return KTextEditor__Message_new2(qstring(richtext), type);
}

const QMetaObject* k_texteditor__message_meta_object(void* self) {
    return KTextEditor__Message_MetaObject((KTextEditor__Message*)self);
}

void* k_texteditor__message_metacast(void* self, const char* param1) {
    return KTextEditor__Message_Metacast((KTextEditor__Message*)self, param1);
}

int32_t k_texteditor__message_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Message_Metacall((KTextEditor__Message*)self, param1, param2, param3);
}

void k_texteditor__message_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__Message_OnMetacall((KTextEditor__Message*)self, (intptr_t)callback);
}

int32_t k_texteditor__message_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Message_QBaseMetacall((KTextEditor__Message*)self, param1, param2, param3);
}

const char* k_texteditor__message_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__message_text(void* self) {
    libqt_string _str = KTextEditor__Message_Text((KTextEditor__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_texteditor__message_icon(void* self) {
    return KTextEditor__Message_Icon((KTextEditor__Message*)self);
}

int32_t k_texteditor__message_message_type(void* self) {
    return KTextEditor__Message_MessageType((KTextEditor__Message*)self);
}

void k_texteditor__message_add_action(void* self, void* action) {
    KTextEditor__Message_AddAction((KTextEditor__Message*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texteditor__message_actions(void* self) {
    libqt_list _arr = KTextEditor__Message_Actions((KTextEditor__Message*)self);
    return _arr;
}

void k_texteditor__message_set_auto_hide(void* self) {
    KTextEditor__Message_SetAutoHide((KTextEditor__Message*)self);
}

int32_t k_texteditor__message_auto_hide(void* self) {
    return KTextEditor__Message_AutoHide((KTextEditor__Message*)self);
}

void k_texteditor__message_set_auto_hide_mode(void* self, int32_t mode) {
    KTextEditor__Message_SetAutoHideMode((KTextEditor__Message*)self, mode);
}

int32_t k_texteditor__message_auto_hide_mode(void* self) {
    return KTextEditor__Message_AutoHideMode((KTextEditor__Message*)self);
}

void k_texteditor__message_set_word_wrap(void* self, bool wordWrap) {
    KTextEditor__Message_SetWordWrap((KTextEditor__Message*)self, wordWrap);
}

bool k_texteditor__message_word_wrap(void* self) {
    return KTextEditor__Message_WordWrap((KTextEditor__Message*)self);
}

void k_texteditor__message_set_priority(void* self, int priority) {
    KTextEditor__Message_SetPriority((KTextEditor__Message*)self, priority);
}

int32_t k_texteditor__message_priority(void* self) {
    return KTextEditor__Message_Priority((KTextEditor__Message*)self);
}

void k_texteditor__message_set_view(void* self, void* view) {
    KTextEditor__Message_SetView((KTextEditor__Message*)self, (KTextEditor__View*)view);
}

KTextEditor__View* k_texteditor__message_view(void* self) {
    return KTextEditor__Message_View((KTextEditor__Message*)self);
}

void k_texteditor__message_set_document(void* self, void* document) {
    KTextEditor__Message_SetDocument((KTextEditor__Message*)self, (KTextEditor__Document*)document);
}

KTextEditor__Document* k_texteditor__message_document(void* self) {
    return KTextEditor__Message_Document((KTextEditor__Message*)self);
}

void k_texteditor__message_set_position(void* self, int32_t position) {
    KTextEditor__Message_SetPosition((KTextEditor__Message*)self, position);
}

int32_t k_texteditor__message_position(void* self) {
    return KTextEditor__Message_Position((KTextEditor__Message*)self);
}

void k_texteditor__message_set_text(void* self, const char* richtext) {
    KTextEditor__Message_SetText((KTextEditor__Message*)self, qstring(richtext));
}

void k_texteditor__message_set_icon(void* self, void* icon) {
    KTextEditor__Message_SetIcon((KTextEditor__Message*)self, (QIcon*)icon);
}

void k_texteditor__message_closed(void* self, void* message) {
    KTextEditor__Message_Closed((KTextEditor__Message*)self, (KTextEditor__Message*)message);
}

void k_texteditor__message_on_closed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_Connect_Closed((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_text_changed(void* self, const char* text) {
    KTextEditor__Message_TextChanged((KTextEditor__Message*)self, qstring(text));
}

void k_texteditor__message_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    KTextEditor__Message_Connect_TextChanged((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_icon_changed(void* self, void* icon) {
    KTextEditor__Message_IconChanged((KTextEditor__Message*)self, (QIcon*)icon);
}

void k_texteditor__message_on_icon_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_Connect_IconChanged((KTextEditor__Message*)self, (intptr_t)callback);
}

const char* k_texteditor__message_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__message_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__message_add_action2(void* self, void* action, bool closeOnTrigger) {
    KTextEditor__Message_AddAction2((KTextEditor__Message*)self, (QAction*)action, closeOnTrigger);
}

void k_texteditor__message_set_auto_hide1(void* self, int delay) {
    KTextEditor__Message_SetAutoHide1((KTextEditor__Message*)self, delay);
}

const char* k_texteditor__message_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__message_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__message_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__message_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__message_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__message_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__message_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__message_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__message_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__message_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__message_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__message_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__message_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__message_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__message_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__message_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__message_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__message_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__message_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__message_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__message_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__message_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__message_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__message_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__message_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__message_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__message_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__message_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__message_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__message_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__message_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__message_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__message_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__message_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__message_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__message_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__message_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__message_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__message_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__message_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__message_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__message_event(void* self, void* event) {
    return KTextEditor__Message_Event((KTextEditor__Message*)self, (QEvent*)event);
}

bool k_texteditor__message_qbase_event(void* self, void* event) {
    return KTextEditor__Message_QBaseEvent((KTextEditor__Message*)self, (QEvent*)event);
}

void k_texteditor__message_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Message_OnEvent((KTextEditor__Message*)self, (intptr_t)callback);
}

bool k_texteditor__message_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Message_EventFilter((KTextEditor__Message*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__message_qbase_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Message_QBaseEventFilter((KTextEditor__Message*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__message_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__Message_OnEventFilter((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_timer_event(void* self, void* event) {
    KTextEditor__Message_TimerEvent((KTextEditor__Message*)self, (QTimerEvent*)event);
}

void k_texteditor__message_qbase_timer_event(void* self, void* event) {
    KTextEditor__Message_QBaseTimerEvent((KTextEditor__Message*)self, (QTimerEvent*)event);
}

void k_texteditor__message_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_OnTimerEvent((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_child_event(void* self, void* event) {
    KTextEditor__Message_ChildEvent((KTextEditor__Message*)self, (QChildEvent*)event);
}

void k_texteditor__message_qbase_child_event(void* self, void* event) {
    KTextEditor__Message_QBaseChildEvent((KTextEditor__Message*)self, (QChildEvent*)event);
}

void k_texteditor__message_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_OnChildEvent((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_custom_event(void* self, void* event) {
    KTextEditor__Message_CustomEvent((KTextEditor__Message*)self, (QEvent*)event);
}

void k_texteditor__message_qbase_custom_event(void* self, void* event) {
    KTextEditor__Message_QBaseCustomEvent((KTextEditor__Message*)self, (QEvent*)event);
}

void k_texteditor__message_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_OnCustomEvent((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_connect_notify(void* self, void* signal) {
    KTextEditor__Message_ConnectNotify((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

void k_texteditor__message_qbase_connect_notify(void* self, void* signal) {
    KTextEditor__Message_QBaseConnectNotify((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

void k_texteditor__message_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_OnConnectNotify((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_disconnect_notify(void* self, void* signal) {
    KTextEditor__Message_DisconnectNotify((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

void k_texteditor__message_qbase_disconnect_notify(void* self, void* signal) {
    KTextEditor__Message_QBaseDisconnectNotify((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

void k_texteditor__message_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Message_OnDisconnectNotify((KTextEditor__Message*)self, (intptr_t)callback);
}

QObject* k_texteditor__message_sender(void* self) {
    return KTextEditor__Message_Sender((KTextEditor__Message*)self);
}

QObject* k_texteditor__message_qbase_sender(void* self) {
    return KTextEditor__Message_QBaseSender((KTextEditor__Message*)self);
}

void k_texteditor__message_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__Message_OnSender((KTextEditor__Message*)self, (intptr_t)callback);
}

int32_t k_texteditor__message_sender_signal_index(void* self) {
    return KTextEditor__Message_SenderSignalIndex((KTextEditor__Message*)self);
}

int32_t k_texteditor__message_qbase_sender_signal_index(void* self) {
    return KTextEditor__Message_QBaseSenderSignalIndex((KTextEditor__Message*)self);
}

void k_texteditor__message_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__Message_OnSenderSignalIndex((KTextEditor__Message*)self, (intptr_t)callback);
}

int32_t k_texteditor__message_receivers(void* self, const char* signal) {
    return KTextEditor__Message_Receivers((KTextEditor__Message*)self, signal);
}

int32_t k_texteditor__message_qbase_receivers(void* self, const char* signal) {
    return KTextEditor__Message_QBaseReceivers((KTextEditor__Message*)self, signal);
}

void k_texteditor__message_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__Message_OnReceivers((KTextEditor__Message*)self, (intptr_t)callback);
}

bool k_texteditor__message_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Message_IsSignalConnected((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

bool k_texteditor__message_qbase_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Message_QBaseIsSignalConnected((KTextEditor__Message*)self, (QMetaMethod*)signal);
}

void k_texteditor__message_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Message_OnIsSignalConnected((KTextEditor__Message*)self, (intptr_t)callback);
}

void k_texteditor__message_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__message_delete(void* self) {
    KTextEditor__Message_Delete((KTextEditor__Message*)(self));
}
