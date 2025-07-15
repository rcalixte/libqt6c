#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextdocument.hpp"
#include "libqtextformat.hpp"
#include "libqcoreevent.hpp"
#include "libqtextlist.hpp"
#include "libqtextlist.h"

QTextList* q_textlist_new(void* doc) {
    return QTextList_new((QTextDocument*)doc);
}

const QMetaObject* q_textlist_meta_object(void* self) {
    return QTextList_MetaObject((QTextList*)self);
}

void* q_textlist_metacast(void* self, const char* param1) {
    return QTextList_Metacast((QTextList*)self, param1);
}

int32_t q_textlist_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextList_Metacall((QTextList*)self, param1, param2, param3);
}

void q_textlist_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextList_OnMetacall((QTextList*)self, (intptr_t)slot);
}

int32_t q_textlist_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextList_QBaseMetacall((QTextList*)self, param1, param2, param3);
}

const char* q_textlist_tr(const char* s) {
    libqt_string _str = QTextList_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_textlist_count(void* self) {
    return QTextList_Count((QTextList*)self);
}

QTextBlock* q_textlist_item(void* self, int i) {
    return QTextList_Item((QTextList*)self, i);
}

int32_t q_textlist_item_number(void* self, void* param1) {
    return QTextList_ItemNumber((QTextList*)self, (QTextBlock*)param1);
}

const char* q_textlist_item_text(void* self, void* param1) {
    libqt_string _str = QTextList_ItemText((QTextList*)self, (QTextBlock*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlist_remove_item(void* self, int i) {
    QTextList_RemoveItem((QTextList*)self, i);
}

void q_textlist_remove(void* self, void* param1) {
    QTextList_Remove((QTextList*)self, (QTextBlock*)param1);
}

void q_textlist_add(void* self, void* block) {
    QTextList_Add((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_set_format(void* self, void* format) {
    QTextList_SetFormat((QTextList*)self, (QTextListFormat*)format);
}

QTextListFormat* q_textlist_format(void* self) {
    return QTextList_Format((QTextList*)self);
}

const char* q_textlist_tr2(const char* s, const char* c) {
    libqt_string _str = QTextList_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textlist_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextList_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_textlist_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_textlist_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_textlist_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

const char* q_textlist_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlist_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_textlist_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textlist_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textlist_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textlist_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textlist_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textlist_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_textlist_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textlist_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textlist_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_textlist_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textlist_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textlist_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_textlist_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textlist_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textlist_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textlist_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textlist_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textlist_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_textlist_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textlist_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textlist_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textlist_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textlist_dynamic_property_names(void* self) {
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

QBindingStorage* q_textlist_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_textlist_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textlist_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textlist_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textlist_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textlist_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textlist_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_textlist_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_textlist_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textlist_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textlist_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textlist_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textlist_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_textlist_block_inserted(void* self, void* block) {
    QTextList_BlockInserted((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_qbase_block_inserted(void* self, void* block) {
    QTextList_QBaseBlockInserted((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_inserted(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockInserted((QTextList*)self, (intptr_t)slot);
}

void q_textlist_block_removed(void* self, void* block) {
    QTextList_BlockRemoved((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_qbase_block_removed(void* self, void* block) {
    QTextList_QBaseBlockRemoved((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_removed(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockRemoved((QTextList*)self, (intptr_t)slot);
}

void q_textlist_block_format_changed(void* self, void* block) {
    QTextList_BlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_qbase_block_format_changed(void* self, void* block) {
    QTextList_QBaseBlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_format_changed(void* self, void (*slot)(void*, void*)) {
    QTextList_OnBlockFormatChanged((QTextList*)self, (intptr_t)slot);
}

bool q_textlist_event(void* self, void* event) {
    return QTextList_Event((QTextList*)self, (QEvent*)event);
}

bool q_textlist_qbase_event(void* self, void* event) {
    return QTextList_QBaseEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextList_OnEvent((QTextList*)self, (intptr_t)slot);
}

bool q_textlist_event_filter(void* self, void* watched, void* event) {
    return QTextList_EventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

bool q_textlist_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextList_QBaseEventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

void q_textlist_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextList_OnEventFilter((QTextList*)self, (intptr_t)slot);
}

void q_textlist_timer_event(void* self, void* event) {
    QTextList_TimerEvent((QTextList*)self, (QTimerEvent*)event);
}

void q_textlist_qbase_timer_event(void* self, void* event) {
    QTextList_QBaseTimerEvent((QTextList*)self, (QTimerEvent*)event);
}

void q_textlist_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnTimerEvent((QTextList*)self, (intptr_t)slot);
}

void q_textlist_child_event(void* self, void* event) {
    QTextList_ChildEvent((QTextList*)self, (QChildEvent*)event);
}

void q_textlist_qbase_child_event(void* self, void* event) {
    QTextList_QBaseChildEvent((QTextList*)self, (QChildEvent*)event);
}

void q_textlist_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnChildEvent((QTextList*)self, (intptr_t)slot);
}

void q_textlist_custom_event(void* self, void* event) {
    QTextList_CustomEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_qbase_custom_event(void* self, void* event) {
    QTextList_QBaseCustomEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextList_OnCustomEvent((QTextList*)self, (intptr_t)slot);
}

void q_textlist_connect_notify(void* self, void* signal) {
    QTextList_ConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_qbase_connect_notify(void* self, void* signal) {
    QTextList_QBaseConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextList_OnConnectNotify((QTextList*)self, (intptr_t)slot);
}

void q_textlist_disconnect_notify(void* self, void* signal) {
    QTextList_DisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_qbase_disconnect_notify(void* self, void* signal) {
    QTextList_QBaseDisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextList_OnDisconnectNotify((QTextList*)self, (intptr_t)slot);
}

libqt_list /* of QTextBlock* */ q_textlist_block_list(void* self) {
    libqt_list _arr = QTextList_BlockList((QTextList*)self);
    return _arr;
}

libqt_list /* of QTextBlock* */ q_textlist_qbase_block_list(void* self) {
    libqt_list _arr = QTextList_QBaseBlockList((QTextList*)self);
    return _arr;
}

void q_textlist_on_block_list(void* self, libqt_list /* of QTextBlock* */ (*slot)()) {
    QTextList_OnBlockList((QTextList*)self, (intptr_t)slot);
}

QObject* q_textlist_sender(void* self) {
    return QTextList_Sender((QTextList*)self);
}

QObject* q_textlist_qbase_sender(void* self) {
    return QTextList_QBaseSender((QTextList*)self);
}

void q_textlist_on_sender(void* self, QObject* (*slot)()) {
    QTextList_OnSender((QTextList*)self, (intptr_t)slot);
}

int32_t q_textlist_sender_signal_index(void* self) {
    return QTextList_SenderSignalIndex((QTextList*)self);
}

int32_t q_textlist_qbase_sender_signal_index(void* self) {
    return QTextList_QBaseSenderSignalIndex((QTextList*)self);
}

void q_textlist_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextList_OnSenderSignalIndex((QTextList*)self, (intptr_t)slot);
}

int32_t q_textlist_receivers(void* self, const char* signal) {
    return QTextList_Receivers((QTextList*)self, signal);
}

int32_t q_textlist_qbase_receivers(void* self, const char* signal) {
    return QTextList_QBaseReceivers((QTextList*)self, signal);
}

void q_textlist_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextList_OnReceivers((QTextList*)self, (intptr_t)slot);
}

bool q_textlist_is_signal_connected(void* self, void* signal) {
    return QTextList_IsSignalConnected((QTextList*)self, (QMetaMethod*)signal);
}

bool q_textlist_qbase_is_signal_connected(void* self, void* signal) {
    return QTextList_QBaseIsSignalConnected((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextList_OnIsSignalConnected((QTextList*)self, (intptr_t)slot);
}

void q_textlist_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_textlist_delete(void* self) {
    QTextList_Delete((QTextList*)(self));
}
