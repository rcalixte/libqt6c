#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqtextobject.hpp"
#include "libqtextdocument.hpp"
#include "libqtextformat.hpp"
#include "libqtextlist.hpp"
#include "libqtextlist.h"

QTextList* q_textlist_new(void* doc) {
    return QTextList_New((QTextDocument*)doc);
}

const QMetaObject* q_textlist_meta_object(const void* self) {
    return QTextList_MetaObject((QTextList*)self);
}

void q_textlist_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QTextList_OnMetaObject((QTextList*)self, (intptr_t)callback);
}

const QMetaObject* q_textlist_super_meta_object(const void* self) {
    return QTextList_SuperMetaObject((QTextList*)self);
}

void* q_textlist_metacast(void* self, const char* param1) {
    return QTextList_Metacast((QTextList*)self, param1);
}

void q_textlist_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTextList_OnMetacast((QTextList*)self, (intptr_t)callback);
}

void* q_textlist_super_metacast(void* self, const char* param1) {
    return QTextList_SuperMetacast((QTextList*)self, param1);
}

int32_t q_textlist_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextList_Metacall((QTextList*)self, param1, param2, param3);
}

void q_textlist_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTextList_OnMetacall((QTextList*)self, (intptr_t)callback);
}

int32_t q_textlist_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTextList_SuperMetacall((QTextList*)self, param1, param2, param3);
}

const char* q_textlist_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_textlist_count(const void* self) {
    return QTextList_Count((QTextList*)self);
}

QTextBlock* q_textlist_item(const void* self, int i) {
    return QTextList_Item((QTextList*)self, i);
}

int32_t q_textlist_item_number(const void* self, const void* param1) {
    return QTextList_ItemNumber((QTextList*)self, (QTextBlock*)param1);
}

const char* q_textlist_item_text(const void* self, const void* param1) {
    libqt_string _str = QTextList_ItemText((QTextList*)self, (QTextBlock*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlist_remove_item(void* self, int i) {
    QTextList_RemoveItem((QTextList*)self, i);
}

void q_textlist_remove(void* self, const void* param1) {
    QTextList_Remove((QTextList*)self, (QTextBlock*)param1);
}

void q_textlist_add(void* self, const void* block) {
    QTextList_Add((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_set_format(void* self, const void* format) {
    QTextList_SetFormat((QTextList*)self, (QTextListFormat*)format);
}

QTextListFormat* q_textlist_format(const void* self) {
    return QTextList_Format((QTextList*)self);
}

const char* q_textlist_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textlist_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_textlist_format_index(const void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_textlist_document(const void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_textlist_object_index(const void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

const char* q_textlist_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlist_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_textlist_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textlist_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textlist_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textlist_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textlist_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textlist_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_textlist_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textlist_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_textlist_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_textlist_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_textlist_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textlist_children(const void* self) {
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

QMetaObject__Connection* q_textlist_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_textlist_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textlist_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textlist_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_textlist_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textlist_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_textlist_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_textlist_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_textlist_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textlist_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textlist_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textlist_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textlist_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_textlist_dynamic_property_names\n");
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

QBindingStorage* q_textlist_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_textlist_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textlist_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textlist_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_textlist_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textlist_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textlist_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_textlist_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_textlist_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_textlist_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_textlist_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_textlist_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_textlist_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_textlist_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_textlist_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_textlist_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_textlist_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textlist_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_textlist_block_inserted(void* self, const void* block) {
    QTextList_BlockInserted((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_super_block_inserted(void* self, const void* block) {
    QTextList_SuperBlockInserted((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_inserted(void* self, void (*callback)(void*, const void*)) {
    QTextList_OnBlockInserted((QTextList*)self, (intptr_t)callback);
}

void q_textlist_block_removed(void* self, const void* block) {
    QTextList_BlockRemoved((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_super_block_removed(void* self, const void* block) {
    QTextList_SuperBlockRemoved((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_removed(void* self, void (*callback)(void*, const void*)) {
    QTextList_OnBlockRemoved((QTextList*)self, (intptr_t)callback);
}

void q_textlist_block_format_changed(void* self, const void* block) {
    QTextList_BlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_super_block_format_changed(void* self, const void* block) {
    QTextList_SuperBlockFormatChanged((QTextList*)self, (QTextBlock*)block);
}

void q_textlist_on_block_format_changed(void* self, void (*callback)(void*, const void*)) {
    QTextList_OnBlockFormatChanged((QTextList*)self, (intptr_t)callback);
}

bool q_textlist_event(void* self, void* event) {
    return QTextList_Event((QTextList*)self, (QEvent*)event);
}

bool q_textlist_super_event(void* self, void* event) {
    return QTextList_SuperEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_on_event(void* self, bool (*callback)(void*, void*)) {
    QTextList_OnEvent((QTextList*)self, (intptr_t)callback);
}

bool q_textlist_event_filter(void* self, void* watched, void* event) {
    return QTextList_EventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

bool q_textlist_super_event_filter(void* self, void* watched, void* event) {
    return QTextList_SuperEventFilter((QTextList*)self, (QObject*)watched, (QEvent*)event);
}

void q_textlist_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTextList_OnEventFilter((QTextList*)self, (intptr_t)callback);
}

void q_textlist_timer_event(void* self, void* event) {
    QTextList_TimerEvent((QTextList*)self, (QTimerEvent*)event);
}

void q_textlist_super_timer_event(void* self, void* event) {
    QTextList_SuperTimerEvent((QTextList*)self, (QTimerEvent*)event);
}

void q_textlist_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTextList_OnTimerEvent((QTextList*)self, (intptr_t)callback);
}

void q_textlist_child_event(void* self, void* event) {
    QTextList_ChildEvent((QTextList*)self, (QChildEvent*)event);
}

void q_textlist_super_child_event(void* self, void* event) {
    QTextList_SuperChildEvent((QTextList*)self, (QChildEvent*)event);
}

void q_textlist_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTextList_OnChildEvent((QTextList*)self, (intptr_t)callback);
}

void q_textlist_custom_event(void* self, void* event) {
    QTextList_CustomEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_super_custom_event(void* self, void* event) {
    QTextList_SuperCustomEvent((QTextList*)self, (QEvent*)event);
}

void q_textlist_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTextList_OnCustomEvent((QTextList*)self, (intptr_t)callback);
}

void q_textlist_connect_notify(void* self, const void* signal) {
    QTextList_ConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_super_connect_notify(void* self, const void* signal) {
    QTextList_SuperConnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QTextList_OnConnectNotify((QTextList*)self, (intptr_t)callback);
}

void q_textlist_disconnect_notify(void* self, const void* signal) {
    QTextList_DisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_super_disconnect_notify(void* self, const void* signal) {
    QTextList_SuperDisconnectNotify((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QTextList_OnDisconnectNotify((QTextList*)self, (intptr_t)callback);
}

libqt_list /* of QTextBlock* */ q_textlist_block_list(const void* self) {
    libqt_list _arr = QTextList_BlockList((QTextList*)self);
    return _arr;
}

QObject* q_textlist_sender(const void* self) {
    return QTextList_Sender((QTextList*)self);
}

int32_t q_textlist_sender_signal_index(const void* self) {
    return QTextList_SenderSignalIndex((QTextList*)self);
}

int32_t q_textlist_receivers(const void* self, const char* signal) {
    return QTextList_Receivers((QTextList*)self, signal);
}

bool q_textlist_is_signal_connected(const void* self, const void* signal) {
    return QTextList_IsSignalConnected((QTextList*)self, (QMetaMethod*)signal);
}

void q_textlist_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_textlist_delete(void* self) {
    QTextList_Delete((QTextList*)(self));
}
