#include "libinlinenote.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "libinlinenoteprovider.hpp"
#include "libinlinenoteprovider.h"

KTextEditor__InlineNoteProvider* k_texteditor__inlinenoteprovider_new() {
    return KTextEditor__InlineNoteProvider_new();
}

const QMetaObject* k_texteditor__inlinenoteprovider_meta_object(void* self) {
    return KTextEditor__InlineNoteProvider_MetaObject((KTextEditor__InlineNoteProvider*)self);
}

void k_texteditor__inlinenoteprovider_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTextEditor__InlineNoteProvider_OnMetaObject((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

const QMetaObject* k_texteditor__inlinenoteprovider_qbase_meta_object(void* self) {
    return KTextEditor__InlineNoteProvider_QBaseMetaObject((KTextEditor__InlineNoteProvider*)self);
}

void* k_texteditor__inlinenoteprovider_metacast(void* self, const char* param1) {
    return KTextEditor__InlineNoteProvider_Metacast((KTextEditor__InlineNoteProvider*)self, param1);
}

void k_texteditor__inlinenoteprovider_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTextEditor__InlineNoteProvider_OnMetacast((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void* k_texteditor__inlinenoteprovider_qbase_metacast(void* self, const char* param1) {
    return KTextEditor__InlineNoteProvider_QBaseMetacast((KTextEditor__InlineNoteProvider*)self, param1);
}

int32_t k_texteditor__inlinenoteprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__InlineNoteProvider_Metacall((KTextEditor__InlineNoteProvider*)self, param1, param2, param3);
}

void k_texteditor__inlinenoteprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__InlineNoteProvider_OnMetacall((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

int32_t k_texteditor__inlinenoteprovider_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__InlineNoteProvider_QBaseMetacall((KTextEditor__InlineNoteProvider*)self, param1, param2, param3);
}

const char* k_texteditor__inlinenoteprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of int */ k_texteditor__inlinenoteprovider_inline_notes(void* self, int line) {
    libqt_list _arr = KTextEditor__InlineNoteProvider_InlineNotes((KTextEditor__InlineNoteProvider*)self, line);
    return _arr;
}

void k_texteditor__inlinenoteprovider_on_inline_notes(void* self, libqt_list /* of int */ (*callback)(void*, int)) {
    KTextEditor__InlineNoteProvider_OnInlineNotes((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

libqt_list /* of int */ k_texteditor__inlinenoteprovider_qbase_inline_notes(void* self, int line) {
    libqt_list _arr = KTextEditor__InlineNoteProvider_QBaseInlineNotes((KTextEditor__InlineNoteProvider*)self, line);
    return _arr;
}

QSize* k_texteditor__inlinenoteprovider_inline_note_size(void* self, void* note) {
    return KTextEditor__InlineNoteProvider_InlineNoteSize((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note);
}

void k_texteditor__inlinenoteprovider_on_inline_note_size(void* self, QSize* (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnInlineNoteSize((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

QSize* k_texteditor__inlinenoteprovider_qbase_inline_note_size(void* self, void* note) {
    return KTextEditor__InlineNoteProvider_QBaseInlineNoteSize((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note);
}

void k_texteditor__inlinenoteprovider_paint_inline_note(void* self, void* note, void* painter, int32_t direction) {
    KTextEditor__InlineNoteProvider_PaintInlineNote((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPainter*)painter, direction);
}

void k_texteditor__inlinenoteprovider_on_paint_inline_note(void* self, void (*callback)(void*, void*, void*, int32_t)) {
    KTextEditor__InlineNoteProvider_OnPaintInlineNote((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_qbase_paint_inline_note(void* self, void* note, void* painter, int32_t direction) {
    KTextEditor__InlineNoteProvider_QBasePaintInlineNote((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPainter*)painter, direction);
}

void k_texteditor__inlinenoteprovider_inline_note_activated(void* self, void* note, int32_t buttons, void* globalPos) {
    KTextEditor__InlineNoteProvider_InlineNoteActivated((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, buttons, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_on_inline_note_activated(void* self, void (*callback)(void*, void*, int32_t, void*)) {
    KTextEditor__InlineNoteProvider_OnInlineNoteActivated((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_qbase_inline_note_activated(void* self, void* note, int32_t buttons, void* globalPos) {
    KTextEditor__InlineNoteProvider_QBaseInlineNoteActivated((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, buttons, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_inline_note_focus_in_event(void* self, void* note, void* globalPos) {
    KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_on_inline_note_focus_in_event(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_qbase_inline_note_focus_in_event(void* self, void* note, void* globalPos) {
    KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusInEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_inline_note_focus_out_event(void* self, void* note) {
    KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note);
}

void k_texteditor__inlinenoteprovider_on_inline_note_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_qbase_inline_note_focus_out_event(void* self, void* note) {
    KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusOutEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note);
}

void k_texteditor__inlinenoteprovider_inline_note_mouse_move_event(void* self, void* note, void* globalPos) {
    KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_on_inline_note_mouse_move_event(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_qbase_inline_note_mouse_move_event(void* self, void* note, void* globalPos) {
    KTextEditor__InlineNoteProvider_QBaseInlineNoteMouseMoveEvent((KTextEditor__InlineNoteProvider*)self, (KTextEditor__InlineNote*)note, (QPoint*)globalPos);
}

void k_texteditor__inlinenoteprovider_inline_notes_reset(void* self) {
    KTextEditor__InlineNoteProvider_InlineNotesReset((KTextEditor__InlineNoteProvider*)self);
}

void k_texteditor__inlinenoteprovider_on_inline_notes_reset(void* self, void (*callback)(void*)) {
    KTextEditor__InlineNoteProvider_Connect_InlineNotesReset((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_inline_notes_changed(void* self, int line) {
    KTextEditor__InlineNoteProvider_InlineNotesChanged((KTextEditor__InlineNoteProvider*)self, line);
}

void k_texteditor__inlinenoteprovider_on_inline_notes_changed(void* self, void (*callback)(void*, int)) {
    KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

const char* k_texteditor__inlinenoteprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__inlinenoteprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__inlinenoteprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__inlinenoteprovider_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__inlinenoteprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__inlinenoteprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__inlinenoteprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__inlinenoteprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__inlinenoteprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__inlinenoteprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__inlinenoteprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__inlinenoteprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__inlinenoteprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__inlinenoteprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__inlinenoteprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texteditor__inlinenoteprovider_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__inlinenoteprovider_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texteditor__inlinenoteprovider_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texteditor__inlinenoteprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__inlinenoteprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__inlinenoteprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__inlinenoteprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__inlinenoteprovider_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__inlinenoteprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__inlinenoteprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__inlinenoteprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__inlinenoteprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__inlinenoteprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__inlinenoteprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__inlinenoteprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texteditor__inlinenoteprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__inlinenoteprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texteditor__inlinenoteprovider_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texteditor__inlinenoteprovider_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texteditor__inlinenoteprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texteditor__inlinenoteprovider_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texteditor__inlinenoteprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__inlinenoteprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__inlinenoteprovider_event(void* self, void* event) {
    return KTextEditor__InlineNoteProvider_Event((KTextEditor__InlineNoteProvider*)self, (QEvent*)event);
}

bool k_texteditor__inlinenoteprovider_qbase_event(void* self, void* event) {
    return KTextEditor__InlineNoteProvider_QBaseEvent((KTextEditor__InlineNoteProvider*)self, (QEvent*)event);
}

void k_texteditor__inlinenoteprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

bool k_texteditor__inlinenoteprovider_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__InlineNoteProvider_EventFilter((KTextEditor__InlineNoteProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__inlinenoteprovider_qbase_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__InlineNoteProvider_QBaseEventFilter((KTextEditor__InlineNoteProvider*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__inlinenoteprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__InlineNoteProvider_OnEventFilter((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_timer_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_TimerEvent((KTextEditor__InlineNoteProvider*)self, (QTimerEvent*)event);
}

void k_texteditor__inlinenoteprovider_qbase_timer_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_QBaseTimerEvent((KTextEditor__InlineNoteProvider*)self, (QTimerEvent*)event);
}

void k_texteditor__inlinenoteprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnTimerEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_child_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_ChildEvent((KTextEditor__InlineNoteProvider*)self, (QChildEvent*)event);
}

void k_texteditor__inlinenoteprovider_qbase_child_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_QBaseChildEvent((KTextEditor__InlineNoteProvider*)self, (QChildEvent*)event);
}

void k_texteditor__inlinenoteprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnChildEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_custom_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_CustomEvent((KTextEditor__InlineNoteProvider*)self, (QEvent*)event);
}

void k_texteditor__inlinenoteprovider_qbase_custom_event(void* self, void* event) {
    KTextEditor__InlineNoteProvider_QBaseCustomEvent((KTextEditor__InlineNoteProvider*)self, (QEvent*)event);
}

void k_texteditor__inlinenoteprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnCustomEvent((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_connect_notify(void* self, void* signal) {
    KTextEditor__InlineNoteProvider_ConnectNotify((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

void k_texteditor__inlinenoteprovider_qbase_connect_notify(void* self, void* signal) {
    KTextEditor__InlineNoteProvider_QBaseConnectNotify((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

void k_texteditor__inlinenoteprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnConnectNotify((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_disconnect_notify(void* self, void* signal) {
    KTextEditor__InlineNoteProvider_DisconnectNotify((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

void k_texteditor__inlinenoteprovider_qbase_disconnect_notify(void* self, void* signal) {
    KTextEditor__InlineNoteProvider_QBaseDisconnectNotify((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

void k_texteditor__inlinenoteprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnDisconnectNotify((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

QObject* k_texteditor__inlinenoteprovider_sender(void* self) {
    return KTextEditor__InlineNoteProvider_Sender((KTextEditor__InlineNoteProvider*)self);
}

QObject* k_texteditor__inlinenoteprovider_qbase_sender(void* self) {
    return KTextEditor__InlineNoteProvider_QBaseSender((KTextEditor__InlineNoteProvider*)self);
}

void k_texteditor__inlinenoteprovider_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__InlineNoteProvider_OnSender((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

int32_t k_texteditor__inlinenoteprovider_sender_signal_index(void* self) {
    return KTextEditor__InlineNoteProvider_SenderSignalIndex((KTextEditor__InlineNoteProvider*)self);
}

int32_t k_texteditor__inlinenoteprovider_qbase_sender_signal_index(void* self) {
    return KTextEditor__InlineNoteProvider_QBaseSenderSignalIndex((KTextEditor__InlineNoteProvider*)self);
}

void k_texteditor__inlinenoteprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__InlineNoteProvider_OnSenderSignalIndex((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

int32_t k_texteditor__inlinenoteprovider_receivers(void* self, const char* signal) {
    return KTextEditor__InlineNoteProvider_Receivers((KTextEditor__InlineNoteProvider*)self, signal);
}

int32_t k_texteditor__inlinenoteprovider_qbase_receivers(void* self, const char* signal) {
    return KTextEditor__InlineNoteProvider_QBaseReceivers((KTextEditor__InlineNoteProvider*)self, signal);
}

void k_texteditor__inlinenoteprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__InlineNoteProvider_OnReceivers((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

bool k_texteditor__inlinenoteprovider_is_signal_connected(void* self, void* signal) {
    return KTextEditor__InlineNoteProvider_IsSignalConnected((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

bool k_texteditor__inlinenoteprovider_qbase_is_signal_connected(void* self, void* signal) {
    return KTextEditor__InlineNoteProvider_QBaseIsSignalConnected((KTextEditor__InlineNoteProvider*)self, (QMetaMethod*)signal);
}

void k_texteditor__inlinenoteprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__InlineNoteProvider_OnIsSignalConnected((KTextEditor__InlineNoteProvider*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__inlinenoteprovider_delete(void* self) {
    KTextEditor__InlineNoteProvider_Delete((KTextEditor__InlineNoteProvider*)(self));
}
