#include "libqevent.hpp"
#include "libqlocale.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqtranslator.hpp"
#include "libqtranslator.h"

QTranslator* q_translator_new() {
    return QTranslator_new();
}

QTranslator* q_translator_new2(void* parent) {
    return QTranslator_new2((QObject*)parent);
}

const QMetaObject* q_translator_meta_object(void* self) {
    return QTranslator_MetaObject((QTranslator*)self);
}

void* q_translator_metacast(void* self, const char* param1) {
    return QTranslator_Metacast((QTranslator*)self, param1);
}

int32_t q_translator_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTranslator_Metacall((QTranslator*)self, param1, param2, param3);
}

void q_translator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTranslator_OnMetacall((QTranslator*)self, (intptr_t)slot);
}

int32_t q_translator_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTranslator_QBaseMetacall((QTranslator*)self, param1, param2, param3);
}

const char* q_translator_tr(const char* s) {
    libqt_string _str = QTranslator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_translator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QTranslator_Translate((QTranslator*)self, context, sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_translator_on_translate(void* self, const char* (*slot)(void*, const char*, const char*, const char*, int)) {
    QTranslator_OnTranslate((QTranslator*)self, (intptr_t)slot);
}

const char* q_translator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QTranslator_QBaseTranslate((QTranslator*)self, context, sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_translator_is_empty(void* self) {
    return QTranslator_IsEmpty((QTranslator*)self);
}

void q_translator_on_is_empty(void* self, bool (*slot)()) {
    QTranslator_OnIsEmpty((QTranslator*)self, (intptr_t)slot);
}

bool q_translator_qbase_is_empty(void* self) {
    return QTranslator_QBaseIsEmpty((QTranslator*)self);
}

const char* q_translator_language(void* self) {
    libqt_string _str = QTranslator_Language((QTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_translator_file_path(void* self) {
    libqt_string _str = QTranslator_FilePath((QTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_translator_load(void* self, const char* filename) {
    return QTranslator_Load((QTranslator*)self, qstring(filename));
}

bool q_translator_load2(void* self, void* locale, const char* filename) {
    return QTranslator_Load2((QTranslator*)self, (QLocale*)locale, qstring(filename));
}

bool q_translator_load3(void* self, unsigned char* data, int lenVal) {
    return QTranslator_Load3((QTranslator*)self, data, lenVal);
}

const char* q_translator_tr2(const char* s, const char* c) {
    libqt_string _str = QTranslator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_translator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTranslator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_translator_load22(void* self, const char* filename, const char* directory) {
    return QTranslator_Load22((QTranslator*)self, qstring(filename), qstring(directory));
}

bool q_translator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters) {
    return QTranslator_Load32((QTranslator*)self, qstring(filename), qstring(directory), qstring(search_delimiters));
}

bool q_translator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix) {
    return QTranslator_Load4((QTranslator*)self, qstring(filename), qstring(directory), qstring(search_delimiters), qstring(suffix));
}

bool q_translator_load33(void* self, void* locale, const char* filename, const char* prefix) {
    return QTranslator_Load33((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix));
}

bool q_translator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory) {
    return QTranslator_Load42((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix), qstring(directory));
}

bool q_translator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix) {
    return QTranslator_Load5((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix), qstring(directory), qstring(suffix));
}

bool q_translator_load34(void* self, unsigned char* data, int lenVal, const char* directory) {
    return QTranslator_Load34((QTranslator*)self, data, lenVal, qstring(directory));
}

const char* q_translator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_translator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_translator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_translator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_translator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_translator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_translator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_translator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_translator_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_translator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_translator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_translator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_translator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_translator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_translator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_translator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_translator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_translator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_translator_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_translator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_translator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_translator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_translator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_translator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_translator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_translator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_translator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_translator_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_translator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_translator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_translator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_translator_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_translator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_translator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_translator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_translator_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_translator_event(void* self, void* event) {
    return QTranslator_Event((QTranslator*)self, (QEvent*)event);
}

bool q_translator_qbase_event(void* self, void* event) {
    return QTranslator_QBaseEvent((QTranslator*)self, (QEvent*)event);
}

void q_translator_on_event(void* self, bool (*slot)(void*, void*)) {
    QTranslator_OnEvent((QTranslator*)self, (intptr_t)slot);
}

bool q_translator_event_filter(void* self, void* watched, void* event) {
    return QTranslator_EventFilter((QTranslator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_translator_qbase_event_filter(void* self, void* watched, void* event) {
    return QTranslator_QBaseEventFilter((QTranslator*)self, (QObject*)watched, (QEvent*)event);
}

void q_translator_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTranslator_OnEventFilter((QTranslator*)self, (intptr_t)slot);
}

void q_translator_timer_event(void* self, void* event) {
    QTranslator_TimerEvent((QTranslator*)self, (QTimerEvent*)event);
}

void q_translator_qbase_timer_event(void* self, void* event) {
    QTranslator_QBaseTimerEvent((QTranslator*)self, (QTimerEvent*)event);
}

void q_translator_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTranslator_OnTimerEvent((QTranslator*)self, (intptr_t)slot);
}

void q_translator_child_event(void* self, void* event) {
    QTranslator_ChildEvent((QTranslator*)self, (QChildEvent*)event);
}

void q_translator_qbase_child_event(void* self, void* event) {
    QTranslator_QBaseChildEvent((QTranslator*)self, (QChildEvent*)event);
}

void q_translator_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTranslator_OnChildEvent((QTranslator*)self, (intptr_t)slot);
}

void q_translator_custom_event(void* self, void* event) {
    QTranslator_CustomEvent((QTranslator*)self, (QEvent*)event);
}

void q_translator_qbase_custom_event(void* self, void* event) {
    QTranslator_QBaseCustomEvent((QTranslator*)self, (QEvent*)event);
}

void q_translator_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTranslator_OnCustomEvent((QTranslator*)self, (intptr_t)slot);
}

void q_translator_connect_notify(void* self, void* signal) {
    QTranslator_ConnectNotify((QTranslator*)self, (QMetaMethod*)signal);
}

void q_translator_qbase_connect_notify(void* self, void* signal) {
    QTranslator_QBaseConnectNotify((QTranslator*)self, (QMetaMethod*)signal);
}

void q_translator_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTranslator_OnConnectNotify((QTranslator*)self, (intptr_t)slot);
}

void q_translator_disconnect_notify(void* self, void* signal) {
    QTranslator_DisconnectNotify((QTranslator*)self, (QMetaMethod*)signal);
}

void q_translator_qbase_disconnect_notify(void* self, void* signal) {
    QTranslator_QBaseDisconnectNotify((QTranslator*)self, (QMetaMethod*)signal);
}

void q_translator_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTranslator_OnDisconnectNotify((QTranslator*)self, (intptr_t)slot);
}

QObject* q_translator_sender(void* self) {
    return QTranslator_Sender((QTranslator*)self);
}

QObject* q_translator_qbase_sender(void* self) {
    return QTranslator_QBaseSender((QTranslator*)self);
}

void q_translator_on_sender(void* self, QObject* (*slot)()) {
    QTranslator_OnSender((QTranslator*)self, (intptr_t)slot);
}

int32_t q_translator_sender_signal_index(void* self) {
    return QTranslator_SenderSignalIndex((QTranslator*)self);
}

int32_t q_translator_qbase_sender_signal_index(void* self) {
    return QTranslator_QBaseSenderSignalIndex((QTranslator*)self);
}

void q_translator_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTranslator_OnSenderSignalIndex((QTranslator*)self, (intptr_t)slot);
}

int32_t q_translator_receivers(void* self, const char* signal) {
    return QTranslator_Receivers((QTranslator*)self, signal);
}

int32_t q_translator_qbase_receivers(void* self, const char* signal) {
    return QTranslator_QBaseReceivers((QTranslator*)self, signal);
}

void q_translator_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTranslator_OnReceivers((QTranslator*)self, (intptr_t)slot);
}

bool q_translator_is_signal_connected(void* self, void* signal) {
    return QTranslator_IsSignalConnected((QTranslator*)self, (QMetaMethod*)signal);
}

bool q_translator_qbase_is_signal_connected(void* self, void* signal) {
    return QTranslator_QBaseIsSignalConnected((QTranslator*)self, (QMetaMethod*)signal);
}

void q_translator_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTranslator_OnIsSignalConnected((QTranslator*)self, (intptr_t)slot);
}

void q_translator_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_translator_delete(void* self) {
    QTranslator_Delete((QTranslator*)(self));
}
