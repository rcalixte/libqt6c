#include "libqcoreevent.hpp"
#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqregularexpression.hpp"
#include "libqvalidator.hpp"
#include "libqvalidator.h"

QValidator* q_validator_new() {
    return QValidator_new();
}

QValidator* q_validator_new2(void* parent) {
    return QValidator_new2((QObject*)parent);
}

const QMetaObject* q_validator_meta_object(void* self) {
    return QValidator_MetaObject((QValidator*)self);
}

void* q_validator_metacast(void* self, const char* param1) {
    return QValidator_Metacast((QValidator*)self, param1);
}

int32_t q_validator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValidator_Metacall((QValidator*)self, param1, param2, param3);
}

void q_validator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QValidator_OnMetacall((QValidator*)self, (intptr_t)callback);
}

int32_t q_validator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValidator_QBaseMetacall((QValidator*)self, param1, param2, param3);
}

const char* q_validator_tr(const char* s) {
    libqt_string _str = QValidator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_validator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* q_validator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

int32_t q_validator_validate(void* self, const char* param1, int* param2) {
    return QValidator_Validate((QValidator*)self, qstring(param1), param2);
}

void q_validator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QValidator_OnValidate((QValidator*)self, (intptr_t)callback);
}

int32_t q_validator_qbase_validate(void* self, const char* param1, int* param2) {
    return QValidator_QBaseValidate((QValidator*)self, qstring(param1), param2);
}

void q_validator_fixup(void* self, const char* param1) {
    QValidator_Fixup((QValidator*)self, qstring(param1));
}

void q_validator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QValidator_OnFixup((QValidator*)self, (intptr_t)callback);
}

void q_validator_qbase_fixup(void* self, const char* param1) {
    QValidator_QBaseFixup((QValidator*)self, qstring(param1));
}

void q_validator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void q_validator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* q_validator_tr2(const char* s, const char* c) {
    libqt_string _str = QValidator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_validator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QValidator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_validator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_validator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_validator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_validator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_validator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_validator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_validator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_validator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_validator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_validator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_validator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_validator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_validator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_validator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_validator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_validator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_validator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_validator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_validator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_validator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_validator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_validator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_validator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_validator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_validator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_validator_dynamic_property_names");
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

QBindingStorage* q_validator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_validator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_validator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_validator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_validator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_validator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_validator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_validator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_validator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_validator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_validator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_validator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_validator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_validator_event(void* self, void* event) {
    return QValidator_Event((QValidator*)self, (QEvent*)event);
}

bool q_validator_qbase_event(void* self, void* event) {
    return QValidator_QBaseEvent((QValidator*)self, (QEvent*)event);
}

void q_validator_on_event(void* self, bool (*callback)(void*, void*)) {
    QValidator_OnEvent((QValidator*)self, (intptr_t)callback);
}

bool q_validator_event_filter(void* self, void* watched, void* event) {
    return QValidator_EventFilter((QValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_validator_qbase_event_filter(void* self, void* watched, void* event) {
    return QValidator_QBaseEventFilter((QValidator*)self, (QObject*)watched, (QEvent*)event);
}

void q_validator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QValidator_OnEventFilter((QValidator*)self, (intptr_t)callback);
}

void q_validator_timer_event(void* self, void* event) {
    QValidator_TimerEvent((QValidator*)self, (QTimerEvent*)event);
}

void q_validator_qbase_timer_event(void* self, void* event) {
    QValidator_QBaseTimerEvent((QValidator*)self, (QTimerEvent*)event);
}

void q_validator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QValidator_OnTimerEvent((QValidator*)self, (intptr_t)callback);
}

void q_validator_child_event(void* self, void* event) {
    QValidator_ChildEvent((QValidator*)self, (QChildEvent*)event);
}

void q_validator_qbase_child_event(void* self, void* event) {
    QValidator_QBaseChildEvent((QValidator*)self, (QChildEvent*)event);
}

void q_validator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QValidator_OnChildEvent((QValidator*)self, (intptr_t)callback);
}

void q_validator_custom_event(void* self, void* event) {
    QValidator_CustomEvent((QValidator*)self, (QEvent*)event);
}

void q_validator_qbase_custom_event(void* self, void* event) {
    QValidator_QBaseCustomEvent((QValidator*)self, (QEvent*)event);
}

void q_validator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QValidator_OnCustomEvent((QValidator*)self, (intptr_t)callback);
}

void q_validator_connect_notify(void* self, void* signal) {
    QValidator_ConnectNotify((QValidator*)self, (QMetaMethod*)signal);
}

void q_validator_qbase_connect_notify(void* self, void* signal) {
    QValidator_QBaseConnectNotify((QValidator*)self, (QMetaMethod*)signal);
}

void q_validator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QValidator_OnConnectNotify((QValidator*)self, (intptr_t)callback);
}

void q_validator_disconnect_notify(void* self, void* signal) {
    QValidator_DisconnectNotify((QValidator*)self, (QMetaMethod*)signal);
}

void q_validator_qbase_disconnect_notify(void* self, void* signal) {
    QValidator_QBaseDisconnectNotify((QValidator*)self, (QMetaMethod*)signal);
}

void q_validator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QValidator_OnDisconnectNotify((QValidator*)self, (intptr_t)callback);
}

QObject* q_validator_sender(void* self) {
    return QValidator_Sender((QValidator*)self);
}

QObject* q_validator_qbase_sender(void* self) {
    return QValidator_QBaseSender((QValidator*)self);
}

void q_validator_on_sender(void* self, QObject* (*callback)()) {
    QValidator_OnSender((QValidator*)self, (intptr_t)callback);
}

int32_t q_validator_sender_signal_index(void* self) {
    return QValidator_SenderSignalIndex((QValidator*)self);
}

int32_t q_validator_qbase_sender_signal_index(void* self) {
    return QValidator_QBaseSenderSignalIndex((QValidator*)self);
}

void q_validator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QValidator_OnSenderSignalIndex((QValidator*)self, (intptr_t)callback);
}

int32_t q_validator_receivers(void* self, const char* signal) {
    return QValidator_Receivers((QValidator*)self, signal);
}

int32_t q_validator_qbase_receivers(void* self, const char* signal) {
    return QValidator_QBaseReceivers((QValidator*)self, signal);
}

void q_validator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QValidator_OnReceivers((QValidator*)self, (intptr_t)callback);
}

bool q_validator_is_signal_connected(void* self, void* signal) {
    return QValidator_IsSignalConnected((QValidator*)self, (QMetaMethod*)signal);
}

bool q_validator_qbase_is_signal_connected(void* self, void* signal) {
    return QValidator_QBaseIsSignalConnected((QValidator*)self, (QMetaMethod*)signal);
}

void q_validator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QValidator_OnIsSignalConnected((QValidator*)self, (intptr_t)callback);
}

void q_validator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_validator_delete(void* self) {
    QValidator_Delete((QValidator*)(self));
}

QIntValidator* q_intvalidator_new() {
    return QIntValidator_new();
}

QIntValidator* q_intvalidator_new2(int bottom, int top) {
    return QIntValidator_new2(bottom, top);
}

QIntValidator* q_intvalidator_new3(void* parent) {
    return QIntValidator_new3((QObject*)parent);
}

QIntValidator* q_intvalidator_new4(int bottom, int top, void* parent) {
    return QIntValidator_new4(bottom, top, (QObject*)parent);
}

const QMetaObject* q_intvalidator_meta_object(void* self) {
    return QIntValidator_MetaObject((QIntValidator*)self);
}

void* q_intvalidator_metacast(void* self, const char* param1) {
    return QIntValidator_Metacast((QIntValidator*)self, param1);
}

int32_t q_intvalidator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIntValidator_Metacall((QIntValidator*)self, param1, param2, param3);
}

void q_intvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QIntValidator_OnMetacall((QIntValidator*)self, (intptr_t)callback);
}

int32_t q_intvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIntValidator_QBaseMetacall((QIntValidator*)self, param1, param2, param3);
}

const char* q_intvalidator_tr(const char* s) {
    libqt_string _str = QIntValidator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_intvalidator_validate(void* self, const char* param1, int* param2) {
    return QIntValidator_Validate((QIntValidator*)self, qstring(param1), param2);
}

void q_intvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QIntValidator_OnValidate((QIntValidator*)self, (intptr_t)callback);
}

int32_t q_intvalidator_qbase_validate(void* self, const char* param1, int* param2) {
    return QIntValidator_QBaseValidate((QIntValidator*)self, qstring(param1), param2);
}

void q_intvalidator_fixup(void* self, const char* input) {
    QIntValidator_Fixup((QIntValidator*)self, qstring(input));
}

void q_intvalidator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QIntValidator_OnFixup((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_qbase_fixup(void* self, const char* input) {
    QIntValidator_QBaseFixup((QIntValidator*)self, qstring(input));
}

void q_intvalidator_set_bottom(void* self, int bottom) {
    QIntValidator_SetBottom((QIntValidator*)self, bottom);
}

void q_intvalidator_set_top(void* self, int top) {
    QIntValidator_SetTop((QIntValidator*)self, top);
}

void q_intvalidator_set_range(void* self, int bottom, int top) {
    QIntValidator_SetRange((QIntValidator*)self, bottom, top);
}

int32_t q_intvalidator_bottom(void* self) {
    return QIntValidator_Bottom((QIntValidator*)self);
}

int32_t q_intvalidator_top(void* self) {
    return QIntValidator_Top((QIntValidator*)self);
}

void q_intvalidator_bottom_changed(void* self, int bottom) {
    QIntValidator_BottomChanged((QIntValidator*)self, bottom);
}

void q_intvalidator_on_bottom_changed(void* self, void (*callback)(void*, int)) {
    QIntValidator_Connect_BottomChanged((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_top_changed(void* self, int top) {
    QIntValidator_TopChanged((QIntValidator*)self, top);
}

void q_intvalidator_on_top_changed(void* self, void (*callback)(void*, int)) {
    QIntValidator_Connect_TopChanged((QIntValidator*)self, (intptr_t)callback);
}

const char* q_intvalidator_tr2(const char* s, const char* c) {
    libqt_string _str = QIntValidator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_intvalidator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QIntValidator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_intvalidator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* q_intvalidator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

void q_intvalidator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void q_intvalidator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* q_intvalidator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_intvalidator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_intvalidator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_intvalidator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_intvalidator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_intvalidator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_intvalidator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_intvalidator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_intvalidator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_intvalidator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_intvalidator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_intvalidator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_intvalidator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_intvalidator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_intvalidator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_intvalidator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_intvalidator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_intvalidator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_intvalidator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_intvalidator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_intvalidator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_intvalidator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_intvalidator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_intvalidator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_intvalidator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_intvalidator_dynamic_property_names");
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

QBindingStorage* q_intvalidator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_intvalidator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_intvalidator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_intvalidator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_intvalidator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_intvalidator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_intvalidator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_intvalidator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_intvalidator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_intvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_intvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_intvalidator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_intvalidator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_intvalidator_event(void* self, void* event) {
    return QIntValidator_Event((QIntValidator*)self, (QEvent*)event);
}

bool q_intvalidator_qbase_event(void* self, void* event) {
    return QIntValidator_QBaseEvent((QIntValidator*)self, (QEvent*)event);
}

void q_intvalidator_on_event(void* self, bool (*callback)(void*, void*)) {
    QIntValidator_OnEvent((QIntValidator*)self, (intptr_t)callback);
}

bool q_intvalidator_event_filter(void* self, void* watched, void* event) {
    return QIntValidator_EventFilter((QIntValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_intvalidator_qbase_event_filter(void* self, void* watched, void* event) {
    return QIntValidator_QBaseEventFilter((QIntValidator*)self, (QObject*)watched, (QEvent*)event);
}

void q_intvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QIntValidator_OnEventFilter((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_timer_event(void* self, void* event) {
    QIntValidator_TimerEvent((QIntValidator*)self, (QTimerEvent*)event);
}

void q_intvalidator_qbase_timer_event(void* self, void* event) {
    QIntValidator_QBaseTimerEvent((QIntValidator*)self, (QTimerEvent*)event);
}

void q_intvalidator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QIntValidator_OnTimerEvent((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_child_event(void* self, void* event) {
    QIntValidator_ChildEvent((QIntValidator*)self, (QChildEvent*)event);
}

void q_intvalidator_qbase_child_event(void* self, void* event) {
    QIntValidator_QBaseChildEvent((QIntValidator*)self, (QChildEvent*)event);
}

void q_intvalidator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QIntValidator_OnChildEvent((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_custom_event(void* self, void* event) {
    QIntValidator_CustomEvent((QIntValidator*)self, (QEvent*)event);
}

void q_intvalidator_qbase_custom_event(void* self, void* event) {
    QIntValidator_QBaseCustomEvent((QIntValidator*)self, (QEvent*)event);
}

void q_intvalidator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QIntValidator_OnCustomEvent((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_connect_notify(void* self, void* signal) {
    QIntValidator_ConnectNotify((QIntValidator*)self, (QMetaMethod*)signal);
}

void q_intvalidator_qbase_connect_notify(void* self, void* signal) {
    QIntValidator_QBaseConnectNotify((QIntValidator*)self, (QMetaMethod*)signal);
}

void q_intvalidator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QIntValidator_OnConnectNotify((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_disconnect_notify(void* self, void* signal) {
    QIntValidator_DisconnectNotify((QIntValidator*)self, (QMetaMethod*)signal);
}

void q_intvalidator_qbase_disconnect_notify(void* self, void* signal) {
    QIntValidator_QBaseDisconnectNotify((QIntValidator*)self, (QMetaMethod*)signal);
}

void q_intvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QIntValidator_OnDisconnectNotify((QIntValidator*)self, (intptr_t)callback);
}

QObject* q_intvalidator_sender(void* self) {
    return QIntValidator_Sender((QIntValidator*)self);
}

QObject* q_intvalidator_qbase_sender(void* self) {
    return QIntValidator_QBaseSender((QIntValidator*)self);
}

void q_intvalidator_on_sender(void* self, QObject* (*callback)()) {
    QIntValidator_OnSender((QIntValidator*)self, (intptr_t)callback);
}

int32_t q_intvalidator_sender_signal_index(void* self) {
    return QIntValidator_SenderSignalIndex((QIntValidator*)self);
}

int32_t q_intvalidator_qbase_sender_signal_index(void* self) {
    return QIntValidator_QBaseSenderSignalIndex((QIntValidator*)self);
}

void q_intvalidator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QIntValidator_OnSenderSignalIndex((QIntValidator*)self, (intptr_t)callback);
}

int32_t q_intvalidator_receivers(void* self, const char* signal) {
    return QIntValidator_Receivers((QIntValidator*)self, signal);
}

int32_t q_intvalidator_qbase_receivers(void* self, const char* signal) {
    return QIntValidator_QBaseReceivers((QIntValidator*)self, signal);
}

void q_intvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QIntValidator_OnReceivers((QIntValidator*)self, (intptr_t)callback);
}

bool q_intvalidator_is_signal_connected(void* self, void* signal) {
    return QIntValidator_IsSignalConnected((QIntValidator*)self, (QMetaMethod*)signal);
}

bool q_intvalidator_qbase_is_signal_connected(void* self, void* signal) {
    return QIntValidator_QBaseIsSignalConnected((QIntValidator*)self, (QMetaMethod*)signal);
}

void q_intvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QIntValidator_OnIsSignalConnected((QIntValidator*)self, (intptr_t)callback);
}

void q_intvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_intvalidator_delete(void* self) {
    QIntValidator_Delete((QIntValidator*)(self));
}

QDoubleValidator* q_doublevalidator_new() {
    return QDoubleValidator_new();
}

QDoubleValidator* q_doublevalidator_new2(double bottom, double top, int decimals) {
    return QDoubleValidator_new2(bottom, top, decimals);
}

QDoubleValidator* q_doublevalidator_new3(void* parent) {
    return QDoubleValidator_new3((QObject*)parent);
}

QDoubleValidator* q_doublevalidator_new4(double bottom, double top, int decimals, void* parent) {
    return QDoubleValidator_new4(bottom, top, decimals, (QObject*)parent);
}

const QMetaObject* q_doublevalidator_meta_object(void* self) {
    return QDoubleValidator_MetaObject((QDoubleValidator*)self);
}

void* q_doublevalidator_metacast(void* self, const char* param1) {
    return QDoubleValidator_Metacast((QDoubleValidator*)self, param1);
}

int32_t q_doublevalidator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDoubleValidator_Metacall((QDoubleValidator*)self, param1, param2, param3);
}

void q_doublevalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDoubleValidator_OnMetacall((QDoubleValidator*)self, (intptr_t)callback);
}

int32_t q_doublevalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDoubleValidator_QBaseMetacall((QDoubleValidator*)self, param1, param2, param3);
}

const char* q_doublevalidator_tr(const char* s) {
    libqt_string _str = QDoubleValidator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_doublevalidator_validate(void* self, const char* param1, int* param2) {
    return QDoubleValidator_Validate((QDoubleValidator*)self, qstring(param1), param2);
}

void q_doublevalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QDoubleValidator_OnValidate((QDoubleValidator*)self, (intptr_t)callback);
}

int32_t q_doublevalidator_qbase_validate(void* self, const char* param1, int* param2) {
    return QDoubleValidator_QBaseValidate((QDoubleValidator*)self, qstring(param1), param2);
}

void q_doublevalidator_fixup(void* self, const char* input) {
    QDoubleValidator_Fixup((QDoubleValidator*)self, qstring(input));
}

void q_doublevalidator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QDoubleValidator_OnFixup((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_qbase_fixup(void* self, const char* input) {
    QDoubleValidator_QBaseFixup((QDoubleValidator*)self, qstring(input));
}

void q_doublevalidator_set_range(void* self, double bottom, double top, int decimals) {
    QDoubleValidator_SetRange((QDoubleValidator*)self, bottom, top, decimals);
}

void q_doublevalidator_set_range2(void* self, double bottom, double top) {
    QDoubleValidator_SetRange2((QDoubleValidator*)self, bottom, top);
}

void q_doublevalidator_set_bottom(void* self, double bottom) {
    QDoubleValidator_SetBottom((QDoubleValidator*)self, bottom);
}

void q_doublevalidator_set_top(void* self, double top) {
    QDoubleValidator_SetTop((QDoubleValidator*)self, top);
}

void q_doublevalidator_set_decimals(void* self, int decimals) {
    QDoubleValidator_SetDecimals((QDoubleValidator*)self, decimals);
}

void q_doublevalidator_set_notation(void* self, int32_t notation) {
    QDoubleValidator_SetNotation((QDoubleValidator*)self, notation);
}

double q_doublevalidator_bottom(void* self) {
    return QDoubleValidator_Bottom((QDoubleValidator*)self);
}

double q_doublevalidator_top(void* self) {
    return QDoubleValidator_Top((QDoubleValidator*)self);
}

int32_t q_doublevalidator_decimals(void* self) {
    return QDoubleValidator_Decimals((QDoubleValidator*)self);
}

int32_t q_doublevalidator_notation(void* self) {
    return QDoubleValidator_Notation((QDoubleValidator*)self);
}

void q_doublevalidator_bottom_changed(void* self, double bottom) {
    QDoubleValidator_BottomChanged((QDoubleValidator*)self, bottom);
}

void q_doublevalidator_on_bottom_changed(void* self, void (*callback)(void*, double)) {
    QDoubleValidator_Connect_BottomChanged((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_top_changed(void* self, double top) {
    QDoubleValidator_TopChanged((QDoubleValidator*)self, top);
}

void q_doublevalidator_on_top_changed(void* self, void (*callback)(void*, double)) {
    QDoubleValidator_Connect_TopChanged((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_decimals_changed(void* self, int decimals) {
    QDoubleValidator_DecimalsChanged((QDoubleValidator*)self, decimals);
}

void q_doublevalidator_on_decimals_changed(void* self, void (*callback)(void*, int)) {
    QDoubleValidator_Connect_DecimalsChanged((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_notation_changed(void* self, int32_t notation) {
    QDoubleValidator_NotationChanged((QDoubleValidator*)self, notation);
}

void q_doublevalidator_on_notation_changed(void* self, void (*callback)(void*, int32_t)) {
    QDoubleValidator_Connect_NotationChanged((QDoubleValidator*)self, (intptr_t)callback);
}

const char* q_doublevalidator_tr2(const char* s, const char* c) {
    libqt_string _str = QDoubleValidator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_doublevalidator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDoubleValidator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublevalidator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* q_doublevalidator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

void q_doublevalidator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void q_doublevalidator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* q_doublevalidator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublevalidator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_doublevalidator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_doublevalidator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_doublevalidator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_doublevalidator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_doublevalidator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_doublevalidator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_doublevalidator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_doublevalidator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_doublevalidator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_doublevalidator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_doublevalidator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_doublevalidator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_doublevalidator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_doublevalidator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_doublevalidator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_doublevalidator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_doublevalidator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_doublevalidator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_doublevalidator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_doublevalidator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_doublevalidator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_doublevalidator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_doublevalidator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_doublevalidator_dynamic_property_names");
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

QBindingStorage* q_doublevalidator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_doublevalidator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_doublevalidator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_doublevalidator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_doublevalidator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_doublevalidator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_doublevalidator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_doublevalidator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_doublevalidator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_doublevalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_doublevalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_doublevalidator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_doublevalidator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_doublevalidator_event(void* self, void* event) {
    return QDoubleValidator_Event((QDoubleValidator*)self, (QEvent*)event);
}

bool q_doublevalidator_qbase_event(void* self, void* event) {
    return QDoubleValidator_QBaseEvent((QDoubleValidator*)self, (QEvent*)event);
}

void q_doublevalidator_on_event(void* self, bool (*callback)(void*, void*)) {
    QDoubleValidator_OnEvent((QDoubleValidator*)self, (intptr_t)callback);
}

bool q_doublevalidator_event_filter(void* self, void* watched, void* event) {
    return QDoubleValidator_EventFilter((QDoubleValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_doublevalidator_qbase_event_filter(void* self, void* watched, void* event) {
    return QDoubleValidator_QBaseEventFilter((QDoubleValidator*)self, (QObject*)watched, (QEvent*)event);
}

void q_doublevalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDoubleValidator_OnEventFilter((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_timer_event(void* self, void* event) {
    QDoubleValidator_TimerEvent((QDoubleValidator*)self, (QTimerEvent*)event);
}

void q_doublevalidator_qbase_timer_event(void* self, void* event) {
    QDoubleValidator_QBaseTimerEvent((QDoubleValidator*)self, (QTimerEvent*)event);
}

void q_doublevalidator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDoubleValidator_OnTimerEvent((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_child_event(void* self, void* event) {
    QDoubleValidator_ChildEvent((QDoubleValidator*)self, (QChildEvent*)event);
}

void q_doublevalidator_qbase_child_event(void* self, void* event) {
    QDoubleValidator_QBaseChildEvent((QDoubleValidator*)self, (QChildEvent*)event);
}

void q_doublevalidator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDoubleValidator_OnChildEvent((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_custom_event(void* self, void* event) {
    QDoubleValidator_CustomEvent((QDoubleValidator*)self, (QEvent*)event);
}

void q_doublevalidator_qbase_custom_event(void* self, void* event) {
    QDoubleValidator_QBaseCustomEvent((QDoubleValidator*)self, (QEvent*)event);
}

void q_doublevalidator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDoubleValidator_OnCustomEvent((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_connect_notify(void* self, void* signal) {
    QDoubleValidator_ConnectNotify((QDoubleValidator*)self, (QMetaMethod*)signal);
}

void q_doublevalidator_qbase_connect_notify(void* self, void* signal) {
    QDoubleValidator_QBaseConnectNotify((QDoubleValidator*)self, (QMetaMethod*)signal);
}

void q_doublevalidator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDoubleValidator_OnConnectNotify((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_disconnect_notify(void* self, void* signal) {
    QDoubleValidator_DisconnectNotify((QDoubleValidator*)self, (QMetaMethod*)signal);
}

void q_doublevalidator_qbase_disconnect_notify(void* self, void* signal) {
    QDoubleValidator_QBaseDisconnectNotify((QDoubleValidator*)self, (QMetaMethod*)signal);
}

void q_doublevalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDoubleValidator_OnDisconnectNotify((QDoubleValidator*)self, (intptr_t)callback);
}

QObject* q_doublevalidator_sender(void* self) {
    return QDoubleValidator_Sender((QDoubleValidator*)self);
}

QObject* q_doublevalidator_qbase_sender(void* self) {
    return QDoubleValidator_QBaseSender((QDoubleValidator*)self);
}

void q_doublevalidator_on_sender(void* self, QObject* (*callback)()) {
    QDoubleValidator_OnSender((QDoubleValidator*)self, (intptr_t)callback);
}

int32_t q_doublevalidator_sender_signal_index(void* self) {
    return QDoubleValidator_SenderSignalIndex((QDoubleValidator*)self);
}

int32_t q_doublevalidator_qbase_sender_signal_index(void* self) {
    return QDoubleValidator_QBaseSenderSignalIndex((QDoubleValidator*)self);
}

void q_doublevalidator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDoubleValidator_OnSenderSignalIndex((QDoubleValidator*)self, (intptr_t)callback);
}

int32_t q_doublevalidator_receivers(void* self, const char* signal) {
    return QDoubleValidator_Receivers((QDoubleValidator*)self, signal);
}

int32_t q_doublevalidator_qbase_receivers(void* self, const char* signal) {
    return QDoubleValidator_QBaseReceivers((QDoubleValidator*)self, signal);
}

void q_doublevalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDoubleValidator_OnReceivers((QDoubleValidator*)self, (intptr_t)callback);
}

bool q_doublevalidator_is_signal_connected(void* self, void* signal) {
    return QDoubleValidator_IsSignalConnected((QDoubleValidator*)self, (QMetaMethod*)signal);
}

bool q_doublevalidator_qbase_is_signal_connected(void* self, void* signal) {
    return QDoubleValidator_QBaseIsSignalConnected((QDoubleValidator*)self, (QMetaMethod*)signal);
}

void q_doublevalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDoubleValidator_OnIsSignalConnected((QDoubleValidator*)self, (intptr_t)callback);
}

void q_doublevalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_doublevalidator_delete(void* self) {
    QDoubleValidator_Delete((QDoubleValidator*)(self));
}

QRegularExpressionValidator* q_regularexpressionvalidator_new() {
    return QRegularExpressionValidator_new();
}

QRegularExpressionValidator* q_regularexpressionvalidator_new2(void* re) {
    return QRegularExpressionValidator_new2((QRegularExpression*)re);
}

QRegularExpressionValidator* q_regularexpressionvalidator_new3(void* parent) {
    return QRegularExpressionValidator_new3((QObject*)parent);
}

QRegularExpressionValidator* q_regularexpressionvalidator_new4(void* re, void* parent) {
    return QRegularExpressionValidator_new4((QRegularExpression*)re, (QObject*)parent);
}

const QMetaObject* q_regularexpressionvalidator_meta_object(void* self) {
    return QRegularExpressionValidator_MetaObject((QRegularExpressionValidator*)self);
}

void* q_regularexpressionvalidator_metacast(void* self, const char* param1) {
    return QRegularExpressionValidator_Metacast((QRegularExpressionValidator*)self, param1);
}

int32_t q_regularexpressionvalidator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRegularExpressionValidator_Metacall((QRegularExpressionValidator*)self, param1, param2, param3);
}

void q_regularexpressionvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QRegularExpressionValidator_OnMetacall((QRegularExpressionValidator*)self, (intptr_t)callback);
}

int32_t q_regularexpressionvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRegularExpressionValidator_QBaseMetacall((QRegularExpressionValidator*)self, param1, param2, param3);
}

const char* q_regularexpressionvalidator_tr(const char* s) {
    libqt_string _str = QRegularExpressionValidator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_regularexpressionvalidator_validate(void* self, const char* input, int* pos) {
    return QRegularExpressionValidator_Validate((QRegularExpressionValidator*)self, qstring(input), pos);
}

void q_regularexpressionvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QRegularExpressionValidator_OnValidate((QRegularExpressionValidator*)self, (intptr_t)callback);
}

int32_t q_regularexpressionvalidator_qbase_validate(void* self, const char* input, int* pos) {
    return QRegularExpressionValidator_QBaseValidate((QRegularExpressionValidator*)self, qstring(input), pos);
}

QRegularExpression* q_regularexpressionvalidator_regular_expression(void* self) {
    return QRegularExpressionValidator_RegularExpression((QRegularExpressionValidator*)self);
}

void q_regularexpressionvalidator_set_regular_expression(void* self, void* re) {
    QRegularExpressionValidator_SetRegularExpression((QRegularExpressionValidator*)self, (QRegularExpression*)re);
}

void q_regularexpressionvalidator_regular_expression_changed(void* self, void* re) {
    QRegularExpressionValidator_RegularExpressionChanged((QRegularExpressionValidator*)self, (QRegularExpression*)re);
}

void q_regularexpressionvalidator_on_regular_expression_changed(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_Connect_RegularExpressionChanged((QRegularExpressionValidator*)self, (intptr_t)callback);
}

const char* q_regularexpressionvalidator_tr2(const char* s, const char* c) {
    libqt_string _str = QRegularExpressionValidator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_regularexpressionvalidator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRegularExpressionValidator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_regularexpressionvalidator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* q_regularexpressionvalidator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

void q_regularexpressionvalidator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void q_regularexpressionvalidator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* q_regularexpressionvalidator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_regularexpressionvalidator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_regularexpressionvalidator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_regularexpressionvalidator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_regularexpressionvalidator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_regularexpressionvalidator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_regularexpressionvalidator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_regularexpressionvalidator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_regularexpressionvalidator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_regularexpressionvalidator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_regularexpressionvalidator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_regularexpressionvalidator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_regularexpressionvalidator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_regularexpressionvalidator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_regularexpressionvalidator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_regularexpressionvalidator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_regularexpressionvalidator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_regularexpressionvalidator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_regularexpressionvalidator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_regularexpressionvalidator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_regularexpressionvalidator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_regularexpressionvalidator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_regularexpressionvalidator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_regularexpressionvalidator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_regularexpressionvalidator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_regularexpressionvalidator_dynamic_property_names");
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

QBindingStorage* q_regularexpressionvalidator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_regularexpressionvalidator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_regularexpressionvalidator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_regularexpressionvalidator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_regularexpressionvalidator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_regularexpressionvalidator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_regularexpressionvalidator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_regularexpressionvalidator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_regularexpressionvalidator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_regularexpressionvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_regularexpressionvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_regularexpressionvalidator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_regularexpressionvalidator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_fixup(void* self, const char* param1) {
    QRegularExpressionValidator_Fixup((QRegularExpressionValidator*)self, qstring(param1));
}

void q_regularexpressionvalidator_qbase_fixup(void* self, const char* param1) {
    QRegularExpressionValidator_QBaseFixup((QRegularExpressionValidator*)self, qstring(param1));
}

void q_regularexpressionvalidator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QRegularExpressionValidator_OnFixup((QRegularExpressionValidator*)self, (intptr_t)callback);
}

bool q_regularexpressionvalidator_event(void* self, void* event) {
    return QRegularExpressionValidator_Event((QRegularExpressionValidator*)self, (QEvent*)event);
}

bool q_regularexpressionvalidator_qbase_event(void* self, void* event) {
    return QRegularExpressionValidator_QBaseEvent((QRegularExpressionValidator*)self, (QEvent*)event);
}

void q_regularexpressionvalidator_on_event(void* self, bool (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnEvent((QRegularExpressionValidator*)self, (intptr_t)callback);
}

bool q_regularexpressionvalidator_event_filter(void* self, void* watched, void* event) {
    return QRegularExpressionValidator_EventFilter((QRegularExpressionValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_regularexpressionvalidator_qbase_event_filter(void* self, void* watched, void* event) {
    return QRegularExpressionValidator_QBaseEventFilter((QRegularExpressionValidator*)self, (QObject*)watched, (QEvent*)event);
}

void q_regularexpressionvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QRegularExpressionValidator_OnEventFilter((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_timer_event(void* self, void* event) {
    QRegularExpressionValidator_TimerEvent((QRegularExpressionValidator*)self, (QTimerEvent*)event);
}

void q_regularexpressionvalidator_qbase_timer_event(void* self, void* event) {
    QRegularExpressionValidator_QBaseTimerEvent((QRegularExpressionValidator*)self, (QTimerEvent*)event);
}

void q_regularexpressionvalidator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnTimerEvent((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_child_event(void* self, void* event) {
    QRegularExpressionValidator_ChildEvent((QRegularExpressionValidator*)self, (QChildEvent*)event);
}

void q_regularexpressionvalidator_qbase_child_event(void* self, void* event) {
    QRegularExpressionValidator_QBaseChildEvent((QRegularExpressionValidator*)self, (QChildEvent*)event);
}

void q_regularexpressionvalidator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnChildEvent((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_custom_event(void* self, void* event) {
    QRegularExpressionValidator_CustomEvent((QRegularExpressionValidator*)self, (QEvent*)event);
}

void q_regularexpressionvalidator_qbase_custom_event(void* self, void* event) {
    QRegularExpressionValidator_QBaseCustomEvent((QRegularExpressionValidator*)self, (QEvent*)event);
}

void q_regularexpressionvalidator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnCustomEvent((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_connect_notify(void* self, void* signal) {
    QRegularExpressionValidator_ConnectNotify((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

void q_regularexpressionvalidator_qbase_connect_notify(void* self, void* signal) {
    QRegularExpressionValidator_QBaseConnectNotify((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

void q_regularexpressionvalidator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnConnectNotify((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_disconnect_notify(void* self, void* signal) {
    QRegularExpressionValidator_DisconnectNotify((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

void q_regularexpressionvalidator_qbase_disconnect_notify(void* self, void* signal) {
    QRegularExpressionValidator_QBaseDisconnectNotify((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

void q_regularexpressionvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnDisconnectNotify((QRegularExpressionValidator*)self, (intptr_t)callback);
}

QObject* q_regularexpressionvalidator_sender(void* self) {
    return QRegularExpressionValidator_Sender((QRegularExpressionValidator*)self);
}

QObject* q_regularexpressionvalidator_qbase_sender(void* self) {
    return QRegularExpressionValidator_QBaseSender((QRegularExpressionValidator*)self);
}

void q_regularexpressionvalidator_on_sender(void* self, QObject* (*callback)()) {
    QRegularExpressionValidator_OnSender((QRegularExpressionValidator*)self, (intptr_t)callback);
}

int32_t q_regularexpressionvalidator_sender_signal_index(void* self) {
    return QRegularExpressionValidator_SenderSignalIndex((QRegularExpressionValidator*)self);
}

int32_t q_regularexpressionvalidator_qbase_sender_signal_index(void* self) {
    return QRegularExpressionValidator_QBaseSenderSignalIndex((QRegularExpressionValidator*)self);
}

void q_regularexpressionvalidator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QRegularExpressionValidator_OnSenderSignalIndex((QRegularExpressionValidator*)self, (intptr_t)callback);
}

int32_t q_regularexpressionvalidator_receivers(void* self, const char* signal) {
    return QRegularExpressionValidator_Receivers((QRegularExpressionValidator*)self, signal);
}

int32_t q_regularexpressionvalidator_qbase_receivers(void* self, const char* signal) {
    return QRegularExpressionValidator_QBaseReceivers((QRegularExpressionValidator*)self, signal);
}

void q_regularexpressionvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QRegularExpressionValidator_OnReceivers((QRegularExpressionValidator*)self, (intptr_t)callback);
}

bool q_regularexpressionvalidator_is_signal_connected(void* self, void* signal) {
    return QRegularExpressionValidator_IsSignalConnected((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

bool q_regularexpressionvalidator_qbase_is_signal_connected(void* self, void* signal) {
    return QRegularExpressionValidator_QBaseIsSignalConnected((QRegularExpressionValidator*)self, (QMetaMethod*)signal);
}

void q_regularexpressionvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QRegularExpressionValidator_OnIsSignalConnected((QRegularExpressionValidator*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_regularexpressionvalidator_delete(void* self) {
    QRegularExpressionValidator_Delete((QRegularExpressionValidator*)(self));
}
