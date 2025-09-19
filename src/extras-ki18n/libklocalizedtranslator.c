#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqtranslator.hpp"
#include "libklocalizedtranslator.hpp"
#include "libklocalizedtranslator.h"

KLocalizedTranslator* k_localizedtranslator_new() {
    return KLocalizedTranslator_new();
}

KLocalizedTranslator* k_localizedtranslator_new2(void* parent) {
    return KLocalizedTranslator_new2((QObject*)parent);
}

const QMetaObject* k_localizedtranslator_meta_object(void* self) {
    return KLocalizedTranslator_MetaObject((KLocalizedTranslator*)self);
}

void* k_localizedtranslator_metacast(void* self, const char* param1) {
    return KLocalizedTranslator_Metacast((KLocalizedTranslator*)self, param1);
}

int32_t k_localizedtranslator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedTranslator_Metacall((KLocalizedTranslator*)self, param1, param2, param3);
}

void k_localizedtranslator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLocalizedTranslator_OnMetacall((KLocalizedTranslator*)self, (intptr_t)callback);
}

int32_t k_localizedtranslator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedTranslator_QBaseMetacall((KLocalizedTranslator*)self, param1, param2, param3);
}

const char* k_localizedtranslator_tr(const char* s) {
    libqt_string _str = KLocalizedTranslator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedtranslator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = KLocalizedTranslator_Translate((KLocalizedTranslator*)self, context, sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedtranslator_on_translate(void* self, const char* (*callback)(void*, const char*, const char*, const char*, int)) {
    KLocalizedTranslator_OnTranslate((KLocalizedTranslator*)self, (intptr_t)callback);
}

const char* k_localizedtranslator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = KLocalizedTranslator_QBaseTranslate((KLocalizedTranslator*)self, context, sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedtranslator_set_translation_domain(void* self, const char* translationDomain) {
    KLocalizedTranslator_SetTranslationDomain((KLocalizedTranslator*)self, qstring(translationDomain));
}

void k_localizedtranslator_add_context_to_monitor(void* self, const char* context) {
    KLocalizedTranslator_AddContextToMonitor((KLocalizedTranslator*)self, qstring(context));
}

void k_localizedtranslator_remove_context_to_monitor(void* self, const char* context) {
    KLocalizedTranslator_RemoveContextToMonitor((KLocalizedTranslator*)self, qstring(context));
}

const char* k_localizedtranslator_tr2(const char* s, const char* c) {
    libqt_string _str = KLocalizedTranslator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedtranslator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KLocalizedTranslator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedtranslator_language(void* self) {
    libqt_string _str = QTranslator_Language((QTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedtranslator_file_path(void* self) {
    libqt_string _str = QTranslator_FilePath((QTranslator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_localizedtranslator_load(void* self, const char* filename) {
    return QTranslator_Load((QTranslator*)self, qstring(filename));
}

bool k_localizedtranslator_load2(void* self, void* locale, const char* filename) {
    return QTranslator_Load2((QTranslator*)self, (QLocale*)locale, qstring(filename));
}

bool k_localizedtranslator_load3(void* self, unsigned char* data, int lenVal) {
    return QTranslator_Load3((QTranslator*)self, data, lenVal);
}

bool k_localizedtranslator_load22(void* self, const char* filename, const char* directory) {
    return QTranslator_Load22((QTranslator*)self, qstring(filename), qstring(directory));
}

bool k_localizedtranslator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters) {
    return QTranslator_Load32((QTranslator*)self, qstring(filename), qstring(directory), qstring(search_delimiters));
}

bool k_localizedtranslator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix) {
    return QTranslator_Load4((QTranslator*)self, qstring(filename), qstring(directory), qstring(search_delimiters), qstring(suffix));
}

bool k_localizedtranslator_load33(void* self, void* locale, const char* filename, const char* prefix) {
    return QTranslator_Load33((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix));
}

bool k_localizedtranslator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory) {
    return QTranslator_Load42((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix), qstring(directory));
}

bool k_localizedtranslator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix) {
    return QTranslator_Load5((QTranslator*)self, (QLocale*)locale, qstring(filename), qstring(prefix), qstring(directory), qstring(suffix));
}

bool k_localizedtranslator_load34(void* self, unsigned char* data, int lenVal, const char* directory) {
    return QTranslator_Load34((QTranslator*)self, data, lenVal, qstring(directory));
}

const char* k_localizedtranslator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedtranslator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_localizedtranslator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_localizedtranslator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_localizedtranslator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_localizedtranslator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_localizedtranslator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_localizedtranslator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_localizedtranslator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_localizedtranslator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_localizedtranslator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_localizedtranslator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_localizedtranslator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_localizedtranslator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_localizedtranslator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_localizedtranslator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_localizedtranslator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_localizedtranslator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_localizedtranslator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_localizedtranslator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_localizedtranslator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_localizedtranslator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_localizedtranslator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_localizedtranslator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_localizedtranslator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_localizedtranslator_dynamic_property_names");
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

QBindingStorage* k_localizedtranslator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_localizedtranslator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_localizedtranslator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_localizedtranslator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_localizedtranslator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_localizedtranslator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_localizedtranslator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_localizedtranslator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_localizedtranslator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_localizedtranslator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_localizedtranslator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_localizedtranslator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_localizedtranslator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_localizedtranslator_is_empty(void* self) {
    return KLocalizedTranslator_IsEmpty((KLocalizedTranslator*)self);
}

bool k_localizedtranslator_qbase_is_empty(void* self) {
    return KLocalizedTranslator_QBaseIsEmpty((KLocalizedTranslator*)self);
}

void k_localizedtranslator_on_is_empty(void* self, bool (*callback)()) {
    KLocalizedTranslator_OnIsEmpty((KLocalizedTranslator*)self, (intptr_t)callback);
}

bool k_localizedtranslator_event(void* self, void* event) {
    return KLocalizedTranslator_Event((KLocalizedTranslator*)self, (QEvent*)event);
}

bool k_localizedtranslator_qbase_event(void* self, void* event) {
    return KLocalizedTranslator_QBaseEvent((KLocalizedTranslator*)self, (QEvent*)event);
}

void k_localizedtranslator_on_event(void* self, bool (*callback)(void*, void*)) {
    KLocalizedTranslator_OnEvent((KLocalizedTranslator*)self, (intptr_t)callback);
}

bool k_localizedtranslator_event_filter(void* self, void* watched, void* event) {
    return KLocalizedTranslator_EventFilter((KLocalizedTranslator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_localizedtranslator_qbase_event_filter(void* self, void* watched, void* event) {
    return KLocalizedTranslator_QBaseEventFilter((KLocalizedTranslator*)self, (QObject*)watched, (QEvent*)event);
}

void k_localizedtranslator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLocalizedTranslator_OnEventFilter((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_timer_event(void* self, void* event) {
    KLocalizedTranslator_TimerEvent((KLocalizedTranslator*)self, (QTimerEvent*)event);
}

void k_localizedtranslator_qbase_timer_event(void* self, void* event) {
    KLocalizedTranslator_QBaseTimerEvent((KLocalizedTranslator*)self, (QTimerEvent*)event);
}

void k_localizedtranslator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedTranslator_OnTimerEvent((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_child_event(void* self, void* event) {
    KLocalizedTranslator_ChildEvent((KLocalizedTranslator*)self, (QChildEvent*)event);
}

void k_localizedtranslator_qbase_child_event(void* self, void* event) {
    KLocalizedTranslator_QBaseChildEvent((KLocalizedTranslator*)self, (QChildEvent*)event);
}

void k_localizedtranslator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedTranslator_OnChildEvent((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_custom_event(void* self, void* event) {
    KLocalizedTranslator_CustomEvent((KLocalizedTranslator*)self, (QEvent*)event);
}

void k_localizedtranslator_qbase_custom_event(void* self, void* event) {
    KLocalizedTranslator_QBaseCustomEvent((KLocalizedTranslator*)self, (QEvent*)event);
}

void k_localizedtranslator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedTranslator_OnCustomEvent((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_connect_notify(void* self, void* signal) {
    KLocalizedTranslator_ConnectNotify((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

void k_localizedtranslator_qbase_connect_notify(void* self, void* signal) {
    KLocalizedTranslator_QBaseConnectNotify((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

void k_localizedtranslator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedTranslator_OnConnectNotify((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_disconnect_notify(void* self, void* signal) {
    KLocalizedTranslator_DisconnectNotify((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

void k_localizedtranslator_qbase_disconnect_notify(void* self, void* signal) {
    KLocalizedTranslator_QBaseDisconnectNotify((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

void k_localizedtranslator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedTranslator_OnDisconnectNotify((KLocalizedTranslator*)self, (intptr_t)callback);
}

QObject* k_localizedtranslator_sender(void* self) {
    return KLocalizedTranslator_Sender((KLocalizedTranslator*)self);
}

QObject* k_localizedtranslator_qbase_sender(void* self) {
    return KLocalizedTranslator_QBaseSender((KLocalizedTranslator*)self);
}

void k_localizedtranslator_on_sender(void* self, QObject* (*callback)()) {
    KLocalizedTranslator_OnSender((KLocalizedTranslator*)self, (intptr_t)callback);
}

int32_t k_localizedtranslator_sender_signal_index(void* self) {
    return KLocalizedTranslator_SenderSignalIndex((KLocalizedTranslator*)self);
}

int32_t k_localizedtranslator_qbase_sender_signal_index(void* self) {
    return KLocalizedTranslator_QBaseSenderSignalIndex((KLocalizedTranslator*)self);
}

void k_localizedtranslator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLocalizedTranslator_OnSenderSignalIndex((KLocalizedTranslator*)self, (intptr_t)callback);
}

int32_t k_localizedtranslator_receivers(void* self, const char* signal) {
    return KLocalizedTranslator_Receivers((KLocalizedTranslator*)self, signal);
}

int32_t k_localizedtranslator_qbase_receivers(void* self, const char* signal) {
    return KLocalizedTranslator_QBaseReceivers((KLocalizedTranslator*)self, signal);
}

void k_localizedtranslator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLocalizedTranslator_OnReceivers((KLocalizedTranslator*)self, (intptr_t)callback);
}

bool k_localizedtranslator_is_signal_connected(void* self, void* signal) {
    return KLocalizedTranslator_IsSignalConnected((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

bool k_localizedtranslator_qbase_is_signal_connected(void* self, void* signal) {
    return KLocalizedTranslator_QBaseIsSignalConnected((KLocalizedTranslator*)self, (QMetaMethod*)signal);
}

void k_localizedtranslator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLocalizedTranslator_OnIsSignalConnected((KLocalizedTranslator*)self, (intptr_t)callback);
}

void k_localizedtranslator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_localizedtranslator_delete(void* self) {
    KLocalizedTranslator_Delete((KLocalizedTranslator*)(self));
}
