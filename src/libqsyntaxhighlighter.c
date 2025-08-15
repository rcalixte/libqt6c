#include "libqcoreevent.hpp"
#include "libqcolor.hpp"
#include "libqfont.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextdocument.hpp"
#include "libqsyntaxhighlighter.hpp"
#include "libqsyntaxhighlighter.h"

QSyntaxHighlighter* q_syntaxhighlighter_new(void* parent) {
    return QSyntaxHighlighter_new((QObject*)parent);
}

QSyntaxHighlighter* q_syntaxhighlighter_new2(void* parent) {
    return QSyntaxHighlighter_new2((QTextDocument*)parent);
}

const QMetaObject* q_syntaxhighlighter_meta_object(void* self) {
    return QSyntaxHighlighter_MetaObject((QSyntaxHighlighter*)self);
}

void* q_syntaxhighlighter_metacast(void* self, const char* param1) {
    return QSyntaxHighlighter_Metacast((QSyntaxHighlighter*)self, param1);
}

int32_t q_syntaxhighlighter_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSyntaxHighlighter_Metacall((QSyntaxHighlighter*)self, param1, param2, param3);
}

void q_syntaxhighlighter_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QSyntaxHighlighter_OnMetacall((QSyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t q_syntaxhighlighter_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSyntaxHighlighter_QBaseMetacall((QSyntaxHighlighter*)self, param1, param2, param3);
}

const char* q_syntaxhighlighter_tr(const char* s) {
    libqt_string _str = QSyntaxHighlighter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_syntaxhighlighter_set_document(void* self, void* doc) {
    QSyntaxHighlighter_SetDocument((QSyntaxHighlighter*)self, (QTextDocument*)doc);
}

QTextDocument* q_syntaxhighlighter_document(void* self) {
    return QSyntaxHighlighter_Document((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_rehighlight(void* self) {
    QSyntaxHighlighter_Rehighlight((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_rehighlight_block(void* self, void* block) {
    QSyntaxHighlighter_RehighlightBlock((QSyntaxHighlighter*)self, (QTextBlock*)block);
}

void q_syntaxhighlighter_highlight_block(void* self, const char* text) {
    QSyntaxHighlighter_HighlightBlock((QSyntaxHighlighter*)self, qstring(text));
}

void q_syntaxhighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*)) {
    QSyntaxHighlighter_OnHighlightBlock((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_highlight_block(void* self, const char* text) {
    QSyntaxHighlighter_QBaseHighlightBlock((QSyntaxHighlighter*)self, qstring(text));
}

void q_syntaxhighlighter_set_format(void* self, int start, int count, void* format) {
    QSyntaxHighlighter_SetFormat((QSyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void q_syntaxhighlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format) {
    QSyntaxHighlighter_QBaseSetFormat((QSyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void q_syntaxhighlighter_set_format2(void* self, int start, int count, void* color) {
    QSyntaxHighlighter_SetFormat2((QSyntaxHighlighter*)self, start, count, (QColor*)color);
}

void q_syntaxhighlighter_on_set_format2(void* self, void (*callback)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat2((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_set_format2(void* self, int start, int count, void* color) {
    QSyntaxHighlighter_QBaseSetFormat2((QSyntaxHighlighter*)self, start, count, (QColor*)color);
}

void q_syntaxhighlighter_set_format3(void* self, int start, int count, void* font) {
    QSyntaxHighlighter_SetFormat3((QSyntaxHighlighter*)self, start, count, (QFont*)font);
}

void q_syntaxhighlighter_on_set_format3(void* self, void (*callback)(void*, int, int, void*)) {
    QSyntaxHighlighter_OnSetFormat3((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_set_format3(void* self, int start, int count, void* font) {
    QSyntaxHighlighter_QBaseSetFormat3((QSyntaxHighlighter*)self, start, count, (QFont*)font);
}

QTextCharFormat* q_syntaxhighlighter_format(void* self, int pos) {
    return QSyntaxHighlighter_Format((QSyntaxHighlighter*)self, pos);
}

void q_syntaxhighlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    QSyntaxHighlighter_OnFormat((QSyntaxHighlighter*)self, (intptr_t)callback);
}

QTextCharFormat* q_syntaxhighlighter_qbase_format(void* self, int pos) {
    return QSyntaxHighlighter_QBaseFormat((QSyntaxHighlighter*)self, pos);
}

int32_t q_syntaxhighlighter_previous_block_state(void* self) {
    return QSyntaxHighlighter_PreviousBlockState((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_previous_block_state(void* self, int32_t (*callback)()) {
    QSyntaxHighlighter_OnPreviousBlockState((QSyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t q_syntaxhighlighter_qbase_previous_block_state(void* self) {
    return QSyntaxHighlighter_QBasePreviousBlockState((QSyntaxHighlighter*)self);
}

int32_t q_syntaxhighlighter_current_block_state(void* self) {
    return QSyntaxHighlighter_CurrentBlockState((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_current_block_state(void* self, int32_t (*callback)()) {
    QSyntaxHighlighter_OnCurrentBlockState((QSyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t q_syntaxhighlighter_qbase_current_block_state(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlockState((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_set_current_block_state(void* self, int newState) {
    QSyntaxHighlighter_SetCurrentBlockState((QSyntaxHighlighter*)self, newState);
}

void q_syntaxhighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int)) {
    QSyntaxHighlighter_OnSetCurrentBlockState((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_set_current_block_state(void* self, int newState) {
    QSyntaxHighlighter_QBaseSetCurrentBlockState((QSyntaxHighlighter*)self, newState);
}

void q_syntaxhighlighter_set_current_block_user_data(void* self, void* data) {
    QSyntaxHighlighter_SetCurrentBlockUserData((QSyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

void q_syntaxhighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnSetCurrentBlockUserData((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data) {
    QSyntaxHighlighter_QBaseSetCurrentBlockUserData((QSyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

QTextBlockUserData* q_syntaxhighlighter_current_block_user_data(void* self) {
    return QSyntaxHighlighter_CurrentBlockUserData((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)()) {
    QSyntaxHighlighter_OnCurrentBlockUserData((QSyntaxHighlighter*)self, (intptr_t)callback);
}

QTextBlockUserData* q_syntaxhighlighter_qbase_current_block_user_data(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlockUserData((QSyntaxHighlighter*)self);
}

QTextBlock* q_syntaxhighlighter_current_block(void* self) {
    return QSyntaxHighlighter_CurrentBlock((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_current_block(void* self, QTextBlock* (*callback)()) {
    QSyntaxHighlighter_OnCurrentBlock((QSyntaxHighlighter*)self, (intptr_t)callback);
}

QTextBlock* q_syntaxhighlighter_qbase_current_block(void* self) {
    return QSyntaxHighlighter_QBaseCurrentBlock((QSyntaxHighlighter*)self);
}

const char* q_syntaxhighlighter_tr2(const char* s, const char* c) {
    libqt_string _str = QSyntaxHighlighter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_syntaxhighlighter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSyntaxHighlighter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_syntaxhighlighter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_syntaxhighlighter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_syntaxhighlighter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_syntaxhighlighter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_syntaxhighlighter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_syntaxhighlighter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_syntaxhighlighter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_syntaxhighlighter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_syntaxhighlighter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_syntaxhighlighter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_syntaxhighlighter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_syntaxhighlighter_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_syntaxhighlighter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_syntaxhighlighter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_syntaxhighlighter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_syntaxhighlighter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_syntaxhighlighter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_syntaxhighlighter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_syntaxhighlighter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_syntaxhighlighter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_syntaxhighlighter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_syntaxhighlighter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_syntaxhighlighter_dynamic_property_names");
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

QBindingStorage* q_syntaxhighlighter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_syntaxhighlighter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_syntaxhighlighter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_syntaxhighlighter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_syntaxhighlighter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_syntaxhighlighter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_syntaxhighlighter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_syntaxhighlighter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_syntaxhighlighter_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_syntaxhighlighter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_syntaxhighlighter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_syntaxhighlighter_event(void* self, void* event) {
    return QSyntaxHighlighter_Event((QSyntaxHighlighter*)self, (QEvent*)event);
}

bool q_syntaxhighlighter_qbase_event(void* self, void* event) {
    return QSyntaxHighlighter_QBaseEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

void q_syntaxhighlighter_on_event(void* self, bool (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnEvent((QSyntaxHighlighter*)self, (intptr_t)callback);
}

bool q_syntaxhighlighter_event_filter(void* self, void* watched, void* event) {
    return QSyntaxHighlighter_EventFilter((QSyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event) {
    return QSyntaxHighlighter_QBaseEventFilter((QSyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

void q_syntaxhighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSyntaxHighlighter_OnEventFilter((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_timer_event(void* self, void* event) {
    QSyntaxHighlighter_TimerEvent((QSyntaxHighlighter*)self, (QTimerEvent*)event);
}

void q_syntaxhighlighter_qbase_timer_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseTimerEvent((QSyntaxHighlighter*)self, (QTimerEvent*)event);
}

void q_syntaxhighlighter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnTimerEvent((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_child_event(void* self, void* event) {
    QSyntaxHighlighter_ChildEvent((QSyntaxHighlighter*)self, (QChildEvent*)event);
}

void q_syntaxhighlighter_qbase_child_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseChildEvent((QSyntaxHighlighter*)self, (QChildEvent*)event);
}

void q_syntaxhighlighter_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnChildEvent((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_custom_event(void* self, void* event) {
    QSyntaxHighlighter_CustomEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

void q_syntaxhighlighter_qbase_custom_event(void* self, void* event) {
    QSyntaxHighlighter_QBaseCustomEvent((QSyntaxHighlighter*)self, (QEvent*)event);
}

void q_syntaxhighlighter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnCustomEvent((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_connect_notify(void* self, void* signal) {
    QSyntaxHighlighter_ConnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void q_syntaxhighlighter_qbase_connect_notify(void* self, void* signal) {
    QSyntaxHighlighter_QBaseConnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void q_syntaxhighlighter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnConnectNotify((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_disconnect_notify(void* self, void* signal) {
    QSyntaxHighlighter_DisconnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void q_syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal) {
    QSyntaxHighlighter_QBaseDisconnectNotify((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void q_syntaxhighlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnDisconnectNotify((QSyntaxHighlighter*)self, (intptr_t)callback);
}

QObject* q_syntaxhighlighter_sender(void* self) {
    return QSyntaxHighlighter_Sender((QSyntaxHighlighter*)self);
}

QObject* q_syntaxhighlighter_qbase_sender(void* self) {
    return QSyntaxHighlighter_QBaseSender((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_sender(void* self, QObject* (*callback)()) {
    QSyntaxHighlighter_OnSender((QSyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t q_syntaxhighlighter_sender_signal_index(void* self) {
    return QSyntaxHighlighter_SenderSignalIndex((QSyntaxHighlighter*)self);
}

int32_t q_syntaxhighlighter_qbase_sender_signal_index(void* self) {
    return QSyntaxHighlighter_QBaseSenderSignalIndex((QSyntaxHighlighter*)self);
}

void q_syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSyntaxHighlighter_OnSenderSignalIndex((QSyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t q_syntaxhighlighter_receivers(void* self, const char* signal) {
    return QSyntaxHighlighter_Receivers((QSyntaxHighlighter*)self, signal);
}

int32_t q_syntaxhighlighter_qbase_receivers(void* self, const char* signal) {
    return QSyntaxHighlighter_QBaseReceivers((QSyntaxHighlighter*)self, signal);
}

void q_syntaxhighlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSyntaxHighlighter_OnReceivers((QSyntaxHighlighter*)self, (intptr_t)callback);
}

bool q_syntaxhighlighter_is_signal_connected(void* self, void* signal) {
    return QSyntaxHighlighter_IsSignalConnected((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

bool q_syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal) {
    return QSyntaxHighlighter_QBaseIsSignalConnected((QSyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void q_syntaxhighlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSyntaxHighlighter_OnIsSignalConnected((QSyntaxHighlighter*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_syntaxhighlighter_delete(void* self) {
    QSyntaxHighlighter_Delete((QSyntaxHighlighter*)(self));
}
