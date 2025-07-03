#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqundostack.hpp"
#include "libqundostack.h"

QUndoCommand* q_undocommand_new() {
    return QUndoCommand_new();
}

QUndoCommand* q_undocommand_new2(const char* text) {
    return QUndoCommand_new2(qstring(text));
}

QUndoCommand* q_undocommand_new3(void* parent) {
    return QUndoCommand_new3((QUndoCommand*)parent);
}

QUndoCommand* q_undocommand_new4(const char* text, void* parent) {
    return QUndoCommand_new4(qstring(text), (QUndoCommand*)parent);
}

void q_undocommand_undo(void* self) {
    QUndoCommand_Undo((QUndoCommand*)self);
}

void q_undocommand_on_undo(void* self, void (*slot)()) {
    QUndoCommand_OnUndo((QUndoCommand*)self, (intptr_t)slot);
}

void q_undocommand_qbase_undo(void* self) {
    QUndoCommand_QBaseUndo((QUndoCommand*)self);
}

void q_undocommand_redo(void* self) {
    QUndoCommand_Redo((QUndoCommand*)self);
}

void q_undocommand_on_redo(void* self, void (*slot)()) {
    QUndoCommand_OnRedo((QUndoCommand*)self, (intptr_t)slot);
}

void q_undocommand_qbase_redo(void* self) {
    QUndoCommand_QBaseRedo((QUndoCommand*)self);
}

const char* q_undocommand_text(void* self) {
    libqt_string _str = QUndoCommand_Text((QUndoCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undocommand_action_text(void* self) {
    libqt_string _str = QUndoCommand_ActionText((QUndoCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undocommand_set_text(void* self, const char* text) {
    QUndoCommand_SetText((QUndoCommand*)self, qstring(text));
}

bool q_undocommand_is_obsolete(void* self) {
    return QUndoCommand_IsObsolete((QUndoCommand*)self);
}

void q_undocommand_set_obsolete(void* self, bool obsolete) {
    QUndoCommand_SetObsolete((QUndoCommand*)self, obsolete);
}

int32_t q_undocommand_id(void* self) {
    return QUndoCommand_Id((QUndoCommand*)self);
}

void q_undocommand_on_id(void* self, int32_t (*slot)()) {
    QUndoCommand_OnId((QUndoCommand*)self, (intptr_t)slot);
}

int32_t q_undocommand_qbase_id(void* self) {
    return QUndoCommand_QBaseId((QUndoCommand*)self);
}

bool q_undocommand_merge_with(void* self, void* other) {
    return QUndoCommand_MergeWith((QUndoCommand*)self, (QUndoCommand*)other);
}

void q_undocommand_on_merge_with(void* self, bool (*slot)(void*, void*)) {
    QUndoCommand_OnMergeWith((QUndoCommand*)self, (intptr_t)slot);
}

bool q_undocommand_qbase_merge_with(void* self, void* other) {
    return QUndoCommand_QBaseMergeWith((QUndoCommand*)self, (QUndoCommand*)other);
}

int32_t q_undocommand_child_count(void* self) {
    return QUndoCommand_ChildCount((QUndoCommand*)self);
}

const QUndoCommand* q_undocommand_child(void* self, int index) {
    return QUndoCommand_Child((QUndoCommand*)self, index);
}

void q_undocommand_delete(void* self) {
    QUndoCommand_Delete((QUndoCommand*)(self));
}

QUndoStack* q_undostack_new() {
    return QUndoStack_new();
}

QUndoStack* q_undostack_new2(void* parent) {
    return QUndoStack_new2((QObject*)parent);
}

const QMetaObject* q_undostack_meta_object(void* self) {
    return QUndoStack_MetaObject((QUndoStack*)self);
}

void* q_undostack_metacast(void* self, const char* param1) {
    return QUndoStack_Metacast((QUndoStack*)self, param1);
}

int32_t q_undostack_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoStack_Metacall((QUndoStack*)self, param1, param2, param3);
}

void q_undostack_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QUndoStack_OnMetacall((QUndoStack*)self, (intptr_t)slot);
}

int32_t q_undostack_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoStack_QBaseMetacall((QUndoStack*)self, param1, param2, param3);
}

const char* q_undostack_tr(const char* s) {
    libqt_string _str = QUndoStack_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undostack_clear(void* self) {
    QUndoStack_Clear((QUndoStack*)self);
}

void q_undostack_push(void* self, void* cmd) {
    QUndoStack_Push((QUndoStack*)self, (QUndoCommand*)cmd);
}

bool q_undostack_can_undo(void* self) {
    return QUndoStack_CanUndo((QUndoStack*)self);
}

bool q_undostack_can_redo(void* self) {
    return QUndoStack_CanRedo((QUndoStack*)self);
}

const char* q_undostack_undo_text(void* self) {
    libqt_string _str = QUndoStack_UndoText((QUndoStack*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undostack_redo_text(void* self) {
    libqt_string _str = QUndoStack_RedoText((QUndoStack*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_undostack_count(void* self) {
    return QUndoStack_Count((QUndoStack*)self);
}

int32_t q_undostack_index(void* self) {
    return QUndoStack_Index((QUndoStack*)self);
}

const char* q_undostack_text(void* self, int idx) {
    libqt_string _str = QUndoStack_Text((QUndoStack*)self, idx);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_undostack_create_undo_action(void* self, void* parent) {
    return QUndoStack_CreateUndoAction((QUndoStack*)self, (QObject*)parent);
}

QAction* q_undostack_create_redo_action(void* self, void* parent) {
    return QUndoStack_CreateRedoAction((QUndoStack*)self, (QObject*)parent);
}

bool q_undostack_is_active(void* self) {
    return QUndoStack_IsActive((QUndoStack*)self);
}

bool q_undostack_is_clean(void* self) {
    return QUndoStack_IsClean((QUndoStack*)self);
}

int32_t q_undostack_clean_index(void* self) {
    return QUndoStack_CleanIndex((QUndoStack*)self);
}

void q_undostack_begin_macro(void* self, const char* text) {
    QUndoStack_BeginMacro((QUndoStack*)self, qstring(text));
}

void q_undostack_end_macro(void* self) {
    QUndoStack_EndMacro((QUndoStack*)self);
}

void q_undostack_set_undo_limit(void* self, int limit) {
    QUndoStack_SetUndoLimit((QUndoStack*)self, limit);
}

int32_t q_undostack_undo_limit(void* self) {
    return QUndoStack_UndoLimit((QUndoStack*)self);
}

const QUndoCommand* q_undostack_command(void* self, int index) {
    return QUndoStack_Command((QUndoStack*)self, index);
}

void q_undostack_set_clean(void* self) {
    QUndoStack_SetClean((QUndoStack*)self);
}

void q_undostack_reset_clean(void* self) {
    QUndoStack_ResetClean((QUndoStack*)self);
}

void q_undostack_set_index(void* self, int idx) {
    QUndoStack_SetIndex((QUndoStack*)self, idx);
}

void q_undostack_undo(void* self) {
    QUndoStack_Undo((QUndoStack*)self);
}

void q_undostack_redo(void* self) {
    QUndoStack_Redo((QUndoStack*)self);
}

void q_undostack_set_active(void* self) {
    QUndoStack_SetActive((QUndoStack*)self);
}

void q_undostack_index_changed(void* self, int idx) {
    QUndoStack_IndexChanged((QUndoStack*)self, idx);
}

void q_undostack_on_index_changed(void* self, void (*slot)(void*, int)) {
    QUndoStack_Connect_IndexChanged((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_clean_changed(void* self, bool clean) {
    QUndoStack_CleanChanged((QUndoStack*)self, clean);
}

void q_undostack_on_clean_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CleanChanged((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_can_undo_changed(void* self, bool canUndo) {
    QUndoStack_CanUndoChanged((QUndoStack*)self, canUndo);
}

void q_undostack_on_can_undo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CanUndoChanged((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_can_redo_changed(void* self, bool canRedo) {
    QUndoStack_CanRedoChanged((QUndoStack*)self, canRedo);
}

void q_undostack_on_can_redo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CanRedoChanged((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_undo_text_changed(void* self, const char* undoText) {
    QUndoStack_UndoTextChanged((QUndoStack*)self, qstring(undoText));
}

void q_undostack_on_undo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoStack_Connect_UndoTextChanged((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_redo_text_changed(void* self, const char* redoText) {
    QUndoStack_RedoTextChanged((QUndoStack*)self, qstring(redoText));
}

void q_undostack_on_redo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoStack_Connect_RedoTextChanged((QUndoStack*)self, (intptr_t)slot);
}

const char* q_undostack_tr2(const char* s, const char* c) {
    libqt_string _str = QUndoStack_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undostack_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUndoStack_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_undostack_create_undo_action2(void* self, void* parent, const char* prefix) {
    return QUndoStack_CreateUndoAction2((QUndoStack*)self, (QObject*)parent, qstring(prefix));
}

QAction* q_undostack_create_redo_action2(void* self, void* parent, const char* prefix) {
    return QUndoStack_CreateRedoAction2((QUndoStack*)self, (QObject*)parent, qstring(prefix));
}

void q_undostack_set_active1(void* self, bool active) {
    QUndoStack_SetActive1((QUndoStack*)self, active);
}

const char* q_undostack_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undostack_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_undostack_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_undostack_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_undostack_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_undostack_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_undostack_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_undostack_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_undostack_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_undostack_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_undostack_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_undostack_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_undostack_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_undostack_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_undostack_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_undostack_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_undostack_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_undostack_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_undostack_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_undostack_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_undostack_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_undostack_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_undostack_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_undostack_dynamic_property_names(void* self) {
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

QBindingStorage* q_undostack_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_undostack_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_undostack_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_undostack_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_undostack_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_undostack_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_undostack_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_undostack_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_undostack_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_undostack_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_undostack_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_undostack_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_undostack_event(void* self, void* event) {
    return QUndoStack_Event((QUndoStack*)self, (QEvent*)event);
}

bool q_undostack_qbase_event(void* self, void* event) {
    return QUndoStack_QBaseEvent((QUndoStack*)self, (QEvent*)event);
}

void q_undostack_on_event(void* self, bool (*slot)(void*, void*)) {
    QUndoStack_OnEvent((QUndoStack*)self, (intptr_t)slot);
}

bool q_undostack_event_filter(void* self, void* watched, void* event) {
    return QUndoStack_EventFilter((QUndoStack*)self, (QObject*)watched, (QEvent*)event);
}

bool q_undostack_qbase_event_filter(void* self, void* watched, void* event) {
    return QUndoStack_QBaseEventFilter((QUndoStack*)self, (QObject*)watched, (QEvent*)event);
}

void q_undostack_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QUndoStack_OnEventFilter((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_timer_event(void* self, void* event) {
    QUndoStack_TimerEvent((QUndoStack*)self, (QTimerEvent*)event);
}

void q_undostack_qbase_timer_event(void* self, void* event) {
    QUndoStack_QBaseTimerEvent((QUndoStack*)self, (QTimerEvent*)event);
}

void q_undostack_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnTimerEvent((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_child_event(void* self, void* event) {
    QUndoStack_ChildEvent((QUndoStack*)self, (QChildEvent*)event);
}

void q_undostack_qbase_child_event(void* self, void* event) {
    QUndoStack_QBaseChildEvent((QUndoStack*)self, (QChildEvent*)event);
}

void q_undostack_on_child_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnChildEvent((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_custom_event(void* self, void* event) {
    QUndoStack_CustomEvent((QUndoStack*)self, (QEvent*)event);
}

void q_undostack_qbase_custom_event(void* self, void* event) {
    QUndoStack_QBaseCustomEvent((QUndoStack*)self, (QEvent*)event);
}

void q_undostack_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnCustomEvent((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_connect_notify(void* self, void* signal) {
    QUndoStack_ConnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

void q_undostack_qbase_connect_notify(void* self, void* signal) {
    QUndoStack_QBaseConnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

void q_undostack_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnConnectNotify((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_disconnect_notify(void* self, void* signal) {
    QUndoStack_DisconnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

void q_undostack_qbase_disconnect_notify(void* self, void* signal) {
    QUndoStack_QBaseDisconnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

void q_undostack_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnDisconnectNotify((QUndoStack*)self, (intptr_t)slot);
}

QObject* q_undostack_sender(void* self) {
    return QUndoStack_Sender((QUndoStack*)self);
}

QObject* q_undostack_qbase_sender(void* self) {
    return QUndoStack_QBaseSender((QUndoStack*)self);
}

void q_undostack_on_sender(void* self, QObject* (*slot)()) {
    QUndoStack_OnSender((QUndoStack*)self, (intptr_t)slot);
}

int32_t q_undostack_sender_signal_index(void* self) {
    return QUndoStack_SenderSignalIndex((QUndoStack*)self);
}

int32_t q_undostack_qbase_sender_signal_index(void* self) {
    return QUndoStack_QBaseSenderSignalIndex((QUndoStack*)self);
}

void q_undostack_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QUndoStack_OnSenderSignalIndex((QUndoStack*)self, (intptr_t)slot);
}

int32_t q_undostack_receivers(void* self, const char* signal) {
    return QUndoStack_Receivers((QUndoStack*)self, signal);
}

int32_t q_undostack_qbase_receivers(void* self, const char* signal) {
    return QUndoStack_QBaseReceivers((QUndoStack*)self, signal);
}

void q_undostack_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QUndoStack_OnReceivers((QUndoStack*)self, (intptr_t)slot);
}

bool q_undostack_is_signal_connected(void* self, void* signal) {
    return QUndoStack_IsSignalConnected((QUndoStack*)self, (QMetaMethod*)signal);
}

bool q_undostack_qbase_is_signal_connected(void* self, void* signal) {
    return QUndoStack_QBaseIsSignalConnected((QUndoStack*)self, (QMetaMethod*)signal);
}

void q_undostack_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QUndoStack_OnIsSignalConnected((QUndoStack*)self, (intptr_t)slot);
}

void q_undostack_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_undostack_delete(void* self) {
    QUndoStack_Delete((QUndoStack*)(self));
}
