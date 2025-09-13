#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqplaintextedit.hpp"
#include "../libqtextedit.hpp"
#include "libhighlighter.hpp"
#include "libspellcheckdecorator.hpp"
#include "libspellcheckdecorator.h"

Sonnet__SpellCheckDecorator* k_sonnet__spellcheckdecorator_new(void* textEdit) {
    return Sonnet__SpellCheckDecorator_new((QTextEdit*)textEdit);
}

Sonnet__SpellCheckDecorator* k_sonnet__spellcheckdecorator_new2(void* textEdit) {
    return Sonnet__SpellCheckDecorator_new2((QPlainTextEdit*)textEdit);
}

const QMetaObject* k_sonnet__spellcheckdecorator_meta_object(void* self) {
    return Sonnet__SpellCheckDecorator_MetaObject((Sonnet__SpellCheckDecorator*)self);
}

void* k_sonnet__spellcheckdecorator_metacast(void* self, const char* param1) {
    return Sonnet__SpellCheckDecorator_Metacast((Sonnet__SpellCheckDecorator*)self, param1);
}

int32_t k_sonnet__spellcheckdecorator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__SpellCheckDecorator_Metacall((Sonnet__SpellCheckDecorator*)self, param1, param2, param3);
}

void k_sonnet__spellcheckdecorator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__SpellCheckDecorator_OnMetacall((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

int32_t k_sonnet__spellcheckdecorator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__SpellCheckDecorator_QBaseMetacall((Sonnet__SpellCheckDecorator*)self, param1, param2, param3);
}

const char* k_sonnet__spellcheckdecorator_tr(const char* s) {
    libqt_string _str = Sonnet__SpellCheckDecorator_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__spellcheckdecorator_set_highlighter(void* self, void* highlighter) {
    Sonnet__SpellCheckDecorator_SetHighlighter((Sonnet__SpellCheckDecorator*)self, (Sonnet__Highlighter*)highlighter);
}

Sonnet__Highlighter* k_sonnet__spellcheckdecorator_highlighter(void* self) {
    return Sonnet__SpellCheckDecorator_Highlighter((Sonnet__SpellCheckDecorator*)self);
}

bool k_sonnet__spellcheckdecorator_event_filter(void* self, void* obj, void* event) {
    return Sonnet__SpellCheckDecorator_EventFilter((Sonnet__SpellCheckDecorator*)self, (QObject*)obj, (QEvent*)event);
}

void k_sonnet__spellcheckdecorator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__SpellCheckDecorator_OnEventFilter((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

bool k_sonnet__spellcheckdecorator_qbase_event_filter(void* self, void* obj, void* event) {
    return Sonnet__SpellCheckDecorator_QBaseEventFilter((Sonnet__SpellCheckDecorator*)self, (QObject*)obj, (QEvent*)event);
}

bool k_sonnet__spellcheckdecorator_is_spell_checking_enabled_for_block(void* self, const char* textBlock) {
    return Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock((Sonnet__SpellCheckDecorator*)self, qstring(textBlock));
}

void k_sonnet__spellcheckdecorator_on_is_spell_checking_enabled_for_block(void* self, bool (*callback)(void*, const char*)) {
    Sonnet__SpellCheckDecorator_OnIsSpellCheckingEnabledForBlock((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

bool k_sonnet__spellcheckdecorator_qbase_is_spell_checking_enabled_for_block(void* self, const char* textBlock) {
    return Sonnet__SpellCheckDecorator_QBaseIsSpellCheckingEnabledForBlock((Sonnet__SpellCheckDecorator*)self, qstring(textBlock));
}

const char* k_sonnet__spellcheckdecorator_tr2(const char* s, const char* c) {
    libqt_string _str = Sonnet__SpellCheckDecorator_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__spellcheckdecorator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Sonnet__SpellCheckDecorator_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__spellcheckdecorator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__spellcheckdecorator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__spellcheckdecorator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__spellcheckdecorator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__spellcheckdecorator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_sonnet__spellcheckdecorator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__spellcheckdecorator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__spellcheckdecorator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__spellcheckdecorator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_sonnet__spellcheckdecorator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__spellcheckdecorator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__spellcheckdecorator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__spellcheckdecorator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__spellcheckdecorator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__spellcheckdecorator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_sonnet__spellcheckdecorator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__spellcheckdecorator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__spellcheckdecorator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__spellcheckdecorator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__spellcheckdecorator_dynamic_property_names");
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

QBindingStorage* k_sonnet__spellcheckdecorator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__spellcheckdecorator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__spellcheckdecorator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__spellcheckdecorator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__spellcheckdecorator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__spellcheckdecorator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_sonnet__spellcheckdecorator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_sonnet__spellcheckdecorator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_sonnet__spellcheckdecorator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_sonnet__spellcheckdecorator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_sonnet__spellcheckdecorator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__spellcheckdecorator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__spellcheckdecorator_event(void* self, void* event) {
    return Sonnet__SpellCheckDecorator_Event((Sonnet__SpellCheckDecorator*)self, (QEvent*)event);
}

bool k_sonnet__spellcheckdecorator_qbase_event(void* self, void* event) {
    return Sonnet__SpellCheckDecorator_QBaseEvent((Sonnet__SpellCheckDecorator*)self, (QEvent*)event);
}

void k_sonnet__spellcheckdecorator_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnEvent((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_timer_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_TimerEvent((Sonnet__SpellCheckDecorator*)self, (QTimerEvent*)event);
}

void k_sonnet__spellcheckdecorator_qbase_timer_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_QBaseTimerEvent((Sonnet__SpellCheckDecorator*)self, (QTimerEvent*)event);
}

void k_sonnet__spellcheckdecorator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnTimerEvent((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_child_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_ChildEvent((Sonnet__SpellCheckDecorator*)self, (QChildEvent*)event);
}

void k_sonnet__spellcheckdecorator_qbase_child_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_QBaseChildEvent((Sonnet__SpellCheckDecorator*)self, (QChildEvent*)event);
}

void k_sonnet__spellcheckdecorator_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnChildEvent((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_custom_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_CustomEvent((Sonnet__SpellCheckDecorator*)self, (QEvent*)event);
}

void k_sonnet__spellcheckdecorator_qbase_custom_event(void* self, void* event) {
    Sonnet__SpellCheckDecorator_QBaseCustomEvent((Sonnet__SpellCheckDecorator*)self, (QEvent*)event);
}

void k_sonnet__spellcheckdecorator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnCustomEvent((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_connect_notify(void* self, void* signal) {
    Sonnet__SpellCheckDecorator_ConnectNotify((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

void k_sonnet__spellcheckdecorator_qbase_connect_notify(void* self, void* signal) {
    Sonnet__SpellCheckDecorator_QBaseConnectNotify((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

void k_sonnet__spellcheckdecorator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnConnectNotify((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_disconnect_notify(void* self, void* signal) {
    Sonnet__SpellCheckDecorator_DisconnectNotify((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

void k_sonnet__spellcheckdecorator_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__SpellCheckDecorator_QBaseDisconnectNotify((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

void k_sonnet__spellcheckdecorator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnDisconnectNotify((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

QObject* k_sonnet__spellcheckdecorator_sender(void* self) {
    return Sonnet__SpellCheckDecorator_Sender((Sonnet__SpellCheckDecorator*)self);
}

QObject* k_sonnet__spellcheckdecorator_qbase_sender(void* self) {
    return Sonnet__SpellCheckDecorator_QBaseSender((Sonnet__SpellCheckDecorator*)self);
}

void k_sonnet__spellcheckdecorator_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__SpellCheckDecorator_OnSender((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

int32_t k_sonnet__spellcheckdecorator_sender_signal_index(void* self) {
    return Sonnet__SpellCheckDecorator_SenderSignalIndex((Sonnet__SpellCheckDecorator*)self);
}

int32_t k_sonnet__spellcheckdecorator_qbase_sender_signal_index(void* self) {
    return Sonnet__SpellCheckDecorator_QBaseSenderSignalIndex((Sonnet__SpellCheckDecorator*)self);
}

void k_sonnet__spellcheckdecorator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__SpellCheckDecorator_OnSenderSignalIndex((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

int32_t k_sonnet__spellcheckdecorator_receivers(void* self, const char* signal) {
    return Sonnet__SpellCheckDecorator_Receivers((Sonnet__SpellCheckDecorator*)self, signal);
}

int32_t k_sonnet__spellcheckdecorator_qbase_receivers(void* self, const char* signal) {
    return Sonnet__SpellCheckDecorator_QBaseReceivers((Sonnet__SpellCheckDecorator*)self, signal);
}

void k_sonnet__spellcheckdecorator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__SpellCheckDecorator_OnReceivers((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

bool k_sonnet__spellcheckdecorator_is_signal_connected(void* self, void* signal) {
    return Sonnet__SpellCheckDecorator_IsSignalConnected((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

bool k_sonnet__spellcheckdecorator_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__SpellCheckDecorator_QBaseIsSignalConnected((Sonnet__SpellCheckDecorator*)self, (QMetaMethod*)signal);
}

void k_sonnet__spellcheckdecorator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__SpellCheckDecorator_OnIsSignalConnected((Sonnet__SpellCheckDecorator*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__spellcheckdecorator_delete(void* self) {
    Sonnet__SpellCheckDecorator_Delete((Sonnet__SpellCheckDecorator*)(self));
}
