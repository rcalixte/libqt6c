#include "libqabstractbutton.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqbuttongroup.hpp"
#include "libqbuttongroup.h"

QButtonGroup* q_buttongroup_new() {
    return QButtonGroup_new();
}

QButtonGroup* q_buttongroup_new2(void* parent) {
    return QButtonGroup_new2((QObject*)parent);
}

QMetaObject* q_buttongroup_meta_object(void* self) {
    return QButtonGroup_MetaObject((QButtonGroup*)self);
}

void* q_buttongroup_metacast(void* self, const char* param1) {
    return QButtonGroup_Metacast((QButtonGroup*)self, param1);
}

int32_t q_buttongroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QButtonGroup_Metacall((QButtonGroup*)self, param1, param2, param3);
}

void q_buttongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QButtonGroup_OnMetacall((QButtonGroup*)self, (intptr_t)slot);
}

int32_t q_buttongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QButtonGroup_QBaseMetacall((QButtonGroup*)self, param1, param2, param3);
}

const char* q_buttongroup_tr(const char* s) {
    libqt_string _str = QButtonGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buttongroup_set_exclusive(void* self, bool exclusive) {
    QButtonGroup_SetExclusive((QButtonGroup*)self, exclusive);
}

bool q_buttongroup_exclusive(void* self) {
    return QButtonGroup_Exclusive((QButtonGroup*)self);
}

void q_buttongroup_add_button(void* self, void* param1) {
    QButtonGroup_AddButton((QButtonGroup*)self, (QAbstractButton*)param1);
}

void q_buttongroup_remove_button(void* self, void* param1) {
    QButtonGroup_RemoveButton((QButtonGroup*)self, (QAbstractButton*)param1);
}

libqt_list /* of QAbstractButton* */ q_buttongroup_buttons(void* self) {
    libqt_list _arr = QButtonGroup_Buttons((QButtonGroup*)self);
    return _arr;
}

QAbstractButton* q_buttongroup_checked_button(void* self) {
    return QButtonGroup_CheckedButton((QButtonGroup*)self);
}

QAbstractButton* q_buttongroup_button(void* self, int id) {
    return QButtonGroup_Button((QButtonGroup*)self, id);
}

void q_buttongroup_set_id(void* self, void* button, int id) {
    QButtonGroup_SetId((QButtonGroup*)self, (QAbstractButton*)button, id);
}

int32_t q_buttongroup_id(void* self, void* button) {
    return QButtonGroup_Id((QButtonGroup*)self, (QAbstractButton*)button);
}

int32_t q_buttongroup_checked_id(void* self) {
    return QButtonGroup_CheckedId((QButtonGroup*)self);
}

void q_buttongroup_button_clicked(void* self, void* param1) {
    QButtonGroup_ButtonClicked((QButtonGroup*)self, (QAbstractButton*)param1);
}

void q_buttongroup_on_button_clicked(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_Connect_ButtonClicked((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_button_pressed(void* self, void* param1) {
    QButtonGroup_ButtonPressed((QButtonGroup*)self, (QAbstractButton*)param1);
}

void q_buttongroup_on_button_pressed(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_Connect_ButtonPressed((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_button_released(void* self, void* param1) {
    QButtonGroup_ButtonReleased((QButtonGroup*)self, (QAbstractButton*)param1);
}

void q_buttongroup_on_button_released(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_Connect_ButtonReleased((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_button_toggled(void* self, void* param1, bool param2) {
    QButtonGroup_ButtonToggled((QButtonGroup*)self, (QAbstractButton*)param1, param2);
}

void q_buttongroup_on_button_toggled(void* self, void (*slot)(void*, void*, bool)) {
    QButtonGroup_Connect_ButtonToggled((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_id_clicked(void* self, int param1) {
    QButtonGroup_IdClicked((QButtonGroup*)self, param1);
}

void q_buttongroup_on_id_clicked(void* self, void (*slot)(void*, int)) {
    QButtonGroup_Connect_IdClicked((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_id_pressed(void* self, int param1) {
    QButtonGroup_IdPressed((QButtonGroup*)self, param1);
}

void q_buttongroup_on_id_pressed(void* self, void (*slot)(void*, int)) {
    QButtonGroup_Connect_IdPressed((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_id_released(void* self, int param1) {
    QButtonGroup_IdReleased((QButtonGroup*)self, param1);
}

void q_buttongroup_on_id_released(void* self, void (*slot)(void*, int)) {
    QButtonGroup_Connect_IdReleased((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_id_toggled(void* self, int param1, bool param2) {
    QButtonGroup_IdToggled((QButtonGroup*)self, param1, param2);
}

void q_buttongroup_on_id_toggled(void* self, void (*slot)(void*, int, bool)) {
    QButtonGroup_Connect_IdToggled((QButtonGroup*)self, (intptr_t)slot);
}

const char* q_buttongroup_tr2(const char* s, const char* c) {
    libqt_string _str = QButtonGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_buttongroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QButtonGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buttongroup_add_button2(void* self, void* param1, int id) {
    QButtonGroup_AddButton2((QButtonGroup*)self, (QAbstractButton*)param1, id);
}

const char* q_buttongroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buttongroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_buttongroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_buttongroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_buttongroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_buttongroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_buttongroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_buttongroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_buttongroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_buttongroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_buttongroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_buttongroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_buttongroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_buttongroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_buttongroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_buttongroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_buttongroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_buttongroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_buttongroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_buttongroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_buttongroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_buttongroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_buttongroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_buttongroup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_buttongroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_buttongroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_buttongroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_buttongroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_buttongroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_buttongroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_buttongroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_buttongroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_buttongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_buttongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_buttongroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_buttongroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_buttongroup_event(void* self, void* event) {
    return QButtonGroup_Event((QButtonGroup*)self, (QEvent*)event);
}

bool q_buttongroup_qbase_event(void* self, void* event) {
    return QButtonGroup_QBaseEvent((QButtonGroup*)self, (QEvent*)event);
}

void q_buttongroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QButtonGroup_OnEvent((QButtonGroup*)self, (intptr_t)slot);
}

bool q_buttongroup_event_filter(void* self, void* watched, void* event) {
    return QButtonGroup_EventFilter((QButtonGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_buttongroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QButtonGroup_QBaseEventFilter((QButtonGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_buttongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QButtonGroup_OnEventFilter((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_timer_event(void* self, void* event) {
    QButtonGroup_TimerEvent((QButtonGroup*)self, (QTimerEvent*)event);
}

void q_buttongroup_qbase_timer_event(void* self, void* event) {
    QButtonGroup_QBaseTimerEvent((QButtonGroup*)self, (QTimerEvent*)event);
}

void q_buttongroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_OnTimerEvent((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_child_event(void* self, void* event) {
    QButtonGroup_ChildEvent((QButtonGroup*)self, (QChildEvent*)event);
}

void q_buttongroup_qbase_child_event(void* self, void* event) {
    QButtonGroup_QBaseChildEvent((QButtonGroup*)self, (QChildEvent*)event);
}

void q_buttongroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_OnChildEvent((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_custom_event(void* self, void* event) {
    QButtonGroup_CustomEvent((QButtonGroup*)self, (QEvent*)event);
}

void q_buttongroup_qbase_custom_event(void* self, void* event) {
    QButtonGroup_QBaseCustomEvent((QButtonGroup*)self, (QEvent*)event);
}

void q_buttongroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_OnCustomEvent((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_connect_notify(void* self, void* signal) {
    QButtonGroup_ConnectNotify((QButtonGroup*)self, (QMetaMethod*)signal);
}

void q_buttongroup_qbase_connect_notify(void* self, void* signal) {
    QButtonGroup_QBaseConnectNotify((QButtonGroup*)self, (QMetaMethod*)signal);
}

void q_buttongroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_OnConnectNotify((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_disconnect_notify(void* self, void* signal) {
    QButtonGroup_DisconnectNotify((QButtonGroup*)self, (QMetaMethod*)signal);
}

void q_buttongroup_qbase_disconnect_notify(void* self, void* signal) {
    QButtonGroup_QBaseDisconnectNotify((QButtonGroup*)self, (QMetaMethod*)signal);
}

void q_buttongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QButtonGroup_OnDisconnectNotify((QButtonGroup*)self, (intptr_t)slot);
}

QObject* q_buttongroup_sender(void* self) {
    return QButtonGroup_Sender((QButtonGroup*)self);
}

QObject* q_buttongroup_qbase_sender(void* self) {
    return QButtonGroup_QBaseSender((QButtonGroup*)self);
}

void q_buttongroup_on_sender(void* self, QObject* (*slot)()) {
    QButtonGroup_OnSender((QButtonGroup*)self, (intptr_t)slot);
}

int32_t q_buttongroup_sender_signal_index(void* self) {
    return QButtonGroup_SenderSignalIndex((QButtonGroup*)self);
}

int32_t q_buttongroup_qbase_sender_signal_index(void* self) {
    return QButtonGroup_QBaseSenderSignalIndex((QButtonGroup*)self);
}

void q_buttongroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QButtonGroup_OnSenderSignalIndex((QButtonGroup*)self, (intptr_t)slot);
}

int32_t q_buttongroup_receivers(void* self, const char* signal) {
    return QButtonGroup_Receivers((QButtonGroup*)self, signal);
}

int32_t q_buttongroup_qbase_receivers(void* self, const char* signal) {
    return QButtonGroup_QBaseReceivers((QButtonGroup*)self, signal);
}

void q_buttongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QButtonGroup_OnReceivers((QButtonGroup*)self, (intptr_t)slot);
}

bool q_buttongroup_is_signal_connected(void* self, void* signal) {
    return QButtonGroup_IsSignalConnected((QButtonGroup*)self, (QMetaMethod*)signal);
}

bool q_buttongroup_qbase_is_signal_connected(void* self, void* signal) {
    return QButtonGroup_QBaseIsSignalConnected((QButtonGroup*)self, (QMetaMethod*)signal);
}

void q_buttongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QButtonGroup_OnIsSignalConnected((QButtonGroup*)self, (intptr_t)slot);
}

void q_buttongroup_delete(void* self) {
    QButtonGroup_Delete((QButtonGroup*)(self));
}
