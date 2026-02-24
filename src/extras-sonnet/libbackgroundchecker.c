#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libspeller.hpp"
#include "libbackgroundchecker.hpp"
#include "libbackgroundchecker.h"

Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new() {
    return Sonnet__BackgroundChecker_new();
}

Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new2(void* speller) {
    return Sonnet__BackgroundChecker_new2((Sonnet__Speller*)speller);
}

Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new3(void* parent) {
    return Sonnet__BackgroundChecker_new3((QObject*)parent);
}

Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new4(void* speller, void* parent) {
    return Sonnet__BackgroundChecker_new4((Sonnet__Speller*)speller, (QObject*)parent);
}

const QMetaObject* k_sonnet__backgroundchecker_meta_object(void* self) {
    return Sonnet__BackgroundChecker_MetaObject((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Sonnet__BackgroundChecker_OnMetaObject((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

const QMetaObject* k_sonnet__backgroundchecker_super_meta_object(void* self) {
    return Sonnet__BackgroundChecker_SuperMetaObject((Sonnet__BackgroundChecker*)self);
}

void* k_sonnet__backgroundchecker_metacast(void* self, const char* param1) {
    return Sonnet__BackgroundChecker_Metacast((Sonnet__BackgroundChecker*)self, param1);
}

void k_sonnet__backgroundchecker_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Sonnet__BackgroundChecker_OnMetacast((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void* k_sonnet__backgroundchecker_super_metacast(void* self, const char* param1) {
    return Sonnet__BackgroundChecker_SuperMetacast((Sonnet__BackgroundChecker*)self, param1);
}

int32_t k_sonnet__backgroundchecker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__BackgroundChecker_Metacall((Sonnet__BackgroundChecker*)self, param1, param2, param3);
}

void k_sonnet__backgroundchecker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__BackgroundChecker_OnMetacall((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

int32_t k_sonnet__backgroundchecker_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__BackgroundChecker_SuperMetacall((Sonnet__BackgroundChecker*)self, param1, param2, param3);
}

const char* k_sonnet__backgroundchecker_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__backgroundchecker_set_text(void* self, const char* text) {
    Sonnet__BackgroundChecker_SetText((Sonnet__BackgroundChecker*)self, qstring(text));
}

const char* k_sonnet__backgroundchecker_text(void* self) {
    libqt_string _str = Sonnet__BackgroundChecker_Text((Sonnet__BackgroundChecker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__backgroundchecker_current_context(void* self) {
    libqt_string _str = Sonnet__BackgroundChecker_CurrentContext((Sonnet__BackgroundChecker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Sonnet__Speller* k_sonnet__backgroundchecker_speller(void* self) {
    return Sonnet__BackgroundChecker_Speller((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_set_speller(void* self, void* speller) {
    Sonnet__BackgroundChecker_SetSpeller((Sonnet__BackgroundChecker*)self, (Sonnet__Speller*)speller);
}

bool k_sonnet__backgroundchecker_check_word(void* self, const char* word) {
    return Sonnet__BackgroundChecker_CheckWord((Sonnet__BackgroundChecker*)self, qstring(word));
}

const char** k_sonnet__backgroundchecker_suggest(void* self, const char* word) {
    libqt_list _arr = Sonnet__BackgroundChecker_Suggest((Sonnet__BackgroundChecker*)self, qstring(word));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__backgroundchecker_suggest\n");
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

bool k_sonnet__backgroundchecker_add_word_to_personal(void* self, const char* word) {
    return Sonnet__BackgroundChecker_AddWordToPersonal((Sonnet__BackgroundChecker*)self, qstring(word));
}

bool k_sonnet__backgroundchecker_add_word_to_session(void* self, const char* word) {
    return Sonnet__BackgroundChecker_AddWordToSession((Sonnet__BackgroundChecker*)self, qstring(word));
}

bool k_sonnet__backgroundchecker_auto_detect_language_disabled(void* self) {
    return Sonnet__BackgroundChecker_AutoDetectLanguageDisabled((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled) {
    Sonnet__BackgroundChecker_SetAutoDetectLanguageDisabled((Sonnet__BackgroundChecker*)self, autoDetectDisabled);
}

void k_sonnet__backgroundchecker_start(void* self) {
    Sonnet__BackgroundChecker_Start((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_start(void* self, void (*callback)()) {
    Sonnet__BackgroundChecker_OnStart((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_super_start(void* self) {
    Sonnet__BackgroundChecker_SuperStart((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_stop(void* self) {
    Sonnet__BackgroundChecker_Stop((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_stop(void* self, void (*callback)()) {
    Sonnet__BackgroundChecker_OnStop((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_super_stop(void* self) {
    Sonnet__BackgroundChecker_SuperStop((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_replace(void* self, int start, const char* oldText, const char* newText) {
    Sonnet__BackgroundChecker_Replace((Sonnet__BackgroundChecker*)self, start, qstring(oldText), qstring(newText));
}

void k_sonnet__backgroundchecker_change_language(void* self, const char* lang) {
    Sonnet__BackgroundChecker_ChangeLanguage((Sonnet__BackgroundChecker*)self, qstring(lang));
}

void k_sonnet__backgroundchecker_continue_checking(void* self) {
    Sonnet__BackgroundChecker_ContinueChecking((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_continue_checking(void* self, void (*callback)()) {
    Sonnet__BackgroundChecker_OnContinueChecking((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_super_continue_checking(void* self) {
    Sonnet__BackgroundChecker_SuperContinueChecking((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_misspelling(void* self, const char* word, int start) {
    Sonnet__BackgroundChecker_Misspelling((Sonnet__BackgroundChecker*)self, qstring(word), start);
}

void k_sonnet__backgroundchecker_on_misspelling(void* self, void (*callback)(void*, const char*, int)) {
    Sonnet__BackgroundChecker_Connect_Misspelling((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_done(void* self) {
    Sonnet__BackgroundChecker_Done((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_done(void* self, void (*callback)(void*)) {
    Sonnet__BackgroundChecker_Connect_Done((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

const char* k_sonnet__backgroundchecker_fetch_more_text(void* self) {
    libqt_string _str = Sonnet__BackgroundChecker_FetchMoreText((Sonnet__BackgroundChecker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__backgroundchecker_on_fetch_more_text(void* self, const char* (*callback)()) {
    Sonnet__BackgroundChecker_OnFetchMoreText((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

const char* k_sonnet__backgroundchecker_super_fetch_more_text(void* self) {
    libqt_string _str = Sonnet__BackgroundChecker_SuperFetchMoreText((Sonnet__BackgroundChecker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__backgroundchecker_finished_current_feed(void* self) {
    Sonnet__BackgroundChecker_FinishedCurrentFeed((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_finished_current_feed(void* self, void (*callback)()) {
    Sonnet__BackgroundChecker_OnFinishedCurrentFeed((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_super_finished_current_feed(void* self) {
    Sonnet__BackgroundChecker_SuperFinishedCurrentFeed((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_slot_engine_done(void* self) {
    Sonnet__BackgroundChecker_SlotEngineDone((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_slot_engine_done(void* self, void (*callback)()) {
    Sonnet__BackgroundChecker_OnSlotEngineDone((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_super_slot_engine_done(void* self) {
    Sonnet__BackgroundChecker_SuperSlotEngineDone((Sonnet__BackgroundChecker*)self);
}

const char* k_sonnet__backgroundchecker_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__backgroundchecker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__backgroundchecker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__backgroundchecker_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__backgroundchecker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__backgroundchecker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__backgroundchecker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__backgroundchecker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__backgroundchecker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__backgroundchecker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__backgroundchecker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__backgroundchecker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_sonnet__backgroundchecker_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_sonnet__backgroundchecker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__backgroundchecker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__backgroundchecker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__backgroundchecker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_sonnet__backgroundchecker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__backgroundchecker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__backgroundchecker_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_sonnet__backgroundchecker_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__backgroundchecker_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_sonnet__backgroundchecker_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_sonnet__backgroundchecker_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_sonnet__backgroundchecker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__backgroundchecker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__backgroundchecker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__backgroundchecker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__backgroundchecker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__backgroundchecker_dynamic_property_names\n");
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

QBindingStorage* k_sonnet__backgroundchecker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__backgroundchecker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__backgroundchecker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__backgroundchecker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__backgroundchecker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__backgroundchecker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__backgroundchecker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_sonnet__backgroundchecker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_sonnet__backgroundchecker_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sonnet__backgroundchecker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_sonnet__backgroundchecker_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_sonnet__backgroundchecker_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_sonnet__backgroundchecker_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_sonnet__backgroundchecker_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_sonnet__backgroundchecker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__backgroundchecker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__backgroundchecker_event(void* self, void* event) {
    return Sonnet__BackgroundChecker_Event((Sonnet__BackgroundChecker*)self, (QEvent*)event);
}

bool k_sonnet__backgroundchecker_super_event(void* self, void* event) {
    return Sonnet__BackgroundChecker_SuperEvent((Sonnet__BackgroundChecker*)self, (QEvent*)event);
}

void k_sonnet__backgroundchecker_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnEvent((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

bool k_sonnet__backgroundchecker_event_filter(void* self, void* watched, void* event) {
    return Sonnet__BackgroundChecker_EventFilter((Sonnet__BackgroundChecker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_sonnet__backgroundchecker_super_event_filter(void* self, void* watched, void* event) {
    return Sonnet__BackgroundChecker_SuperEventFilter((Sonnet__BackgroundChecker*)self, (QObject*)watched, (QEvent*)event);
}

void k_sonnet__backgroundchecker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__BackgroundChecker_OnEventFilter((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_timer_event(void* self, void* event) {
    Sonnet__BackgroundChecker_TimerEvent((Sonnet__BackgroundChecker*)self, (QTimerEvent*)event);
}

void k_sonnet__backgroundchecker_super_timer_event(void* self, void* event) {
    Sonnet__BackgroundChecker_SuperTimerEvent((Sonnet__BackgroundChecker*)self, (QTimerEvent*)event);
}

void k_sonnet__backgroundchecker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnTimerEvent((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_child_event(void* self, void* event) {
    Sonnet__BackgroundChecker_ChildEvent((Sonnet__BackgroundChecker*)self, (QChildEvent*)event);
}

void k_sonnet__backgroundchecker_super_child_event(void* self, void* event) {
    Sonnet__BackgroundChecker_SuperChildEvent((Sonnet__BackgroundChecker*)self, (QChildEvent*)event);
}

void k_sonnet__backgroundchecker_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnChildEvent((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_custom_event(void* self, void* event) {
    Sonnet__BackgroundChecker_CustomEvent((Sonnet__BackgroundChecker*)self, (QEvent*)event);
}

void k_sonnet__backgroundchecker_super_custom_event(void* self, void* event) {
    Sonnet__BackgroundChecker_SuperCustomEvent((Sonnet__BackgroundChecker*)self, (QEvent*)event);
}

void k_sonnet__backgroundchecker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnCustomEvent((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_connect_notify(void* self, void* signal) {
    Sonnet__BackgroundChecker_ConnectNotify((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

void k_sonnet__backgroundchecker_super_connect_notify(void* self, void* signal) {
    Sonnet__BackgroundChecker_SuperConnectNotify((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

void k_sonnet__backgroundchecker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnConnectNotify((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_disconnect_notify(void* self, void* signal) {
    Sonnet__BackgroundChecker_DisconnectNotify((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

void k_sonnet__backgroundchecker_super_disconnect_notify(void* self, void* signal) {
    Sonnet__BackgroundChecker_SuperDisconnectNotify((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

void k_sonnet__backgroundchecker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnDisconnectNotify((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

QObject* k_sonnet__backgroundchecker_sender(void* self) {
    return Sonnet__BackgroundChecker_Sender((Sonnet__BackgroundChecker*)self);
}

QObject* k_sonnet__backgroundchecker_super_sender(void* self) {
    return Sonnet__BackgroundChecker_SuperSender((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__BackgroundChecker_OnSender((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

int32_t k_sonnet__backgroundchecker_sender_signal_index(void* self) {
    return Sonnet__BackgroundChecker_SenderSignalIndex((Sonnet__BackgroundChecker*)self);
}

int32_t k_sonnet__backgroundchecker_super_sender_signal_index(void* self) {
    return Sonnet__BackgroundChecker_SuperSenderSignalIndex((Sonnet__BackgroundChecker*)self);
}

void k_sonnet__backgroundchecker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__BackgroundChecker_OnSenderSignalIndex((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

int32_t k_sonnet__backgroundchecker_receivers(void* self, const char* signal) {
    return Sonnet__BackgroundChecker_Receivers((Sonnet__BackgroundChecker*)self, signal);
}

int32_t k_sonnet__backgroundchecker_super_receivers(void* self, const char* signal) {
    return Sonnet__BackgroundChecker_SuperReceivers((Sonnet__BackgroundChecker*)self, signal);
}

void k_sonnet__backgroundchecker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__BackgroundChecker_OnReceivers((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

bool k_sonnet__backgroundchecker_is_signal_connected(void* self, void* signal) {
    return Sonnet__BackgroundChecker_IsSignalConnected((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

bool k_sonnet__backgroundchecker_super_is_signal_connected(void* self, void* signal) {
    return Sonnet__BackgroundChecker_SuperIsSignalConnected((Sonnet__BackgroundChecker*)self, (QMetaMethod*)signal);
}

void k_sonnet__backgroundchecker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__BackgroundChecker_OnIsSignalConnected((Sonnet__BackgroundChecker*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__backgroundchecker_delete(void* self) {
    Sonnet__BackgroundChecker_Delete((Sonnet__BackgroundChecker*)(self));
}
