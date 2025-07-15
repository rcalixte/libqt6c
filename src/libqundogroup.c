#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqundostack.hpp"
#include "libqcoreevent.hpp"
#include "libqundogroup.hpp"
#include "libqundogroup.h"

QUndoGroup* q_undogroup_new() {
    return QUndoGroup_new();
}

QUndoGroup* q_undogroup_new2(void* parent) {
    return QUndoGroup_new2((QObject*)parent);
}

const QMetaObject* q_undogroup_meta_object(void* self) {
    return QUndoGroup_MetaObject((QUndoGroup*)self);
}

void* q_undogroup_metacast(void* self, const char* param1) {
    return QUndoGroup_Metacast((QUndoGroup*)self, param1);
}

int32_t q_undogroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoGroup_Metacall((QUndoGroup*)self, param1, param2, param3);
}

void q_undogroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QUndoGroup_OnMetacall((QUndoGroup*)self, (intptr_t)slot);
}

int32_t q_undogroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoGroup_QBaseMetacall((QUndoGroup*)self, param1, param2, param3);
}

const char* q_undogroup_tr(const char* s) {
    libqt_string _str = QUndoGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undogroup_add_stack(void* self, void* stack) {
    QUndoGroup_AddStack((QUndoGroup*)self, (QUndoStack*)stack);
}

void q_undogroup_remove_stack(void* self, void* stack) {
    QUndoGroup_RemoveStack((QUndoGroup*)self, (QUndoStack*)stack);
}

libqt_list /* of QUndoStack* */ q_undogroup_stacks(void* self) {
    libqt_list _arr = QUndoGroup_Stacks((QUndoGroup*)self);
    return _arr;
}

QUndoStack* q_undogroup_active_stack(void* self) {
    return QUndoGroup_ActiveStack((QUndoGroup*)self);
}

QAction* q_undogroup_create_undo_action(void* self, void* parent) {
    return QUndoGroup_CreateUndoAction((QUndoGroup*)self, (QObject*)parent);
}

QAction* q_undogroup_create_redo_action(void* self, void* parent) {
    return QUndoGroup_CreateRedoAction((QUndoGroup*)self, (QObject*)parent);
}

bool q_undogroup_can_undo(void* self) {
    return QUndoGroup_CanUndo((QUndoGroup*)self);
}

bool q_undogroup_can_redo(void* self) {
    return QUndoGroup_CanRedo((QUndoGroup*)self);
}

const char* q_undogroup_undo_text(void* self) {
    libqt_string _str = QUndoGroup_UndoText((QUndoGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undogroup_redo_text(void* self) {
    libqt_string _str = QUndoGroup_RedoText((QUndoGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_undogroup_is_clean(void* self) {
    return QUndoGroup_IsClean((QUndoGroup*)self);
}

void q_undogroup_undo(void* self) {
    QUndoGroup_Undo((QUndoGroup*)self);
}

void q_undogroup_redo(void* self) {
    QUndoGroup_Redo((QUndoGroup*)self);
}

void q_undogroup_set_active_stack(void* self, void* stack) {
    QUndoGroup_SetActiveStack((QUndoGroup*)self, (QUndoStack*)stack);
}

void q_undogroup_active_stack_changed(void* self, void* stack) {
    QUndoGroup_ActiveStackChanged((QUndoGroup*)self, (QUndoStack*)stack);
}

void q_undogroup_on_active_stack_changed(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_Connect_ActiveStackChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_index_changed(void* self, int idx) {
    QUndoGroup_IndexChanged((QUndoGroup*)self, idx);
}

void q_undogroup_on_index_changed(void* self, void (*slot)(void*, int)) {
    QUndoGroup_Connect_IndexChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_clean_changed(void* self, bool clean) {
    QUndoGroup_CleanChanged((QUndoGroup*)self, clean);
}

void q_undogroup_on_clean_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CleanChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_can_undo_changed(void* self, bool canUndo) {
    QUndoGroup_CanUndoChanged((QUndoGroup*)self, canUndo);
}

void q_undogroup_on_can_undo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CanUndoChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_can_redo_changed(void* self, bool canRedo) {
    QUndoGroup_CanRedoChanged((QUndoGroup*)self, canRedo);
}

void q_undogroup_on_can_redo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CanRedoChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_undo_text_changed(void* self, const char* undoText) {
    QUndoGroup_UndoTextChanged((QUndoGroup*)self, qstring(undoText));
}

void q_undogroup_on_undo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoGroup_Connect_UndoTextChanged((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_redo_text_changed(void* self, const char* redoText) {
    QUndoGroup_RedoTextChanged((QUndoGroup*)self, qstring(redoText));
}

void q_undogroup_on_redo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoGroup_Connect_RedoTextChanged((QUndoGroup*)self, (intptr_t)slot);
}

const char* q_undogroup_tr2(const char* s, const char* c) {
    libqt_string _str = QUndoGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undogroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUndoGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_undogroup_create_undo_action2(void* self, void* parent, const char* prefix) {
    return QUndoGroup_CreateUndoAction2((QUndoGroup*)self, (QObject*)parent, qstring(prefix));
}

QAction* q_undogroup_create_redo_action2(void* self, void* parent, const char* prefix) {
    return QUndoGroup_CreateRedoAction2((QUndoGroup*)self, (QObject*)parent, qstring(prefix));
}

const char* q_undogroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undogroup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_undogroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_undogroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_undogroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_undogroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_undogroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_undogroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_undogroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_undogroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_undogroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_undogroup_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_undogroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_undogroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_undogroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_undogroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_undogroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_undogroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_undogroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_undogroup_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_undogroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_undogroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_undogroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_undogroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_undogroup_dynamic_property_names(void* self) {
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

QBindingStorage* q_undogroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_undogroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_undogroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_undogroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_undogroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_undogroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_undogroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_undogroup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_undogroup_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_undogroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_undogroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_undogroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_undogroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_undogroup_event(void* self, void* event) {
    return QUndoGroup_Event((QUndoGroup*)self, (QEvent*)event);
}

bool q_undogroup_qbase_event(void* self, void* event) {
    return QUndoGroup_QBaseEvent((QUndoGroup*)self, (QEvent*)event);
}

void q_undogroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QUndoGroup_OnEvent((QUndoGroup*)self, (intptr_t)slot);
}

bool q_undogroup_event_filter(void* self, void* watched, void* event) {
    return QUndoGroup_EventFilter((QUndoGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_undogroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QUndoGroup_QBaseEventFilter((QUndoGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_undogroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QUndoGroup_OnEventFilter((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_timer_event(void* self, void* event) {
    QUndoGroup_TimerEvent((QUndoGroup*)self, (QTimerEvent*)event);
}

void q_undogroup_qbase_timer_event(void* self, void* event) {
    QUndoGroup_QBaseTimerEvent((QUndoGroup*)self, (QTimerEvent*)event);
}

void q_undogroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnTimerEvent((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_child_event(void* self, void* event) {
    QUndoGroup_ChildEvent((QUndoGroup*)self, (QChildEvent*)event);
}

void q_undogroup_qbase_child_event(void* self, void* event) {
    QUndoGroup_QBaseChildEvent((QUndoGroup*)self, (QChildEvent*)event);
}

void q_undogroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnChildEvent((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_custom_event(void* self, void* event) {
    QUndoGroup_CustomEvent((QUndoGroup*)self, (QEvent*)event);
}

void q_undogroup_qbase_custom_event(void* self, void* event) {
    QUndoGroup_QBaseCustomEvent((QUndoGroup*)self, (QEvent*)event);
}

void q_undogroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnCustomEvent((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_connect_notify(void* self, void* signal) {
    QUndoGroup_ConnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

void q_undogroup_qbase_connect_notify(void* self, void* signal) {
    QUndoGroup_QBaseConnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

void q_undogroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnConnectNotify((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_disconnect_notify(void* self, void* signal) {
    QUndoGroup_DisconnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

void q_undogroup_qbase_disconnect_notify(void* self, void* signal) {
    QUndoGroup_QBaseDisconnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

void q_undogroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnDisconnectNotify((QUndoGroup*)self, (intptr_t)slot);
}

QObject* q_undogroup_sender(void* self) {
    return QUndoGroup_Sender((QUndoGroup*)self);
}

QObject* q_undogroup_qbase_sender(void* self) {
    return QUndoGroup_QBaseSender((QUndoGroup*)self);
}

void q_undogroup_on_sender(void* self, QObject* (*slot)()) {
    QUndoGroup_OnSender((QUndoGroup*)self, (intptr_t)slot);
}

int32_t q_undogroup_sender_signal_index(void* self) {
    return QUndoGroup_SenderSignalIndex((QUndoGroup*)self);
}

int32_t q_undogroup_qbase_sender_signal_index(void* self) {
    return QUndoGroup_QBaseSenderSignalIndex((QUndoGroup*)self);
}

void q_undogroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QUndoGroup_OnSenderSignalIndex((QUndoGroup*)self, (intptr_t)slot);
}

int32_t q_undogroup_receivers(void* self, const char* signal) {
    return QUndoGroup_Receivers((QUndoGroup*)self, signal);
}

int32_t q_undogroup_qbase_receivers(void* self, const char* signal) {
    return QUndoGroup_QBaseReceivers((QUndoGroup*)self, signal);
}

void q_undogroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QUndoGroup_OnReceivers((QUndoGroup*)self, (intptr_t)slot);
}

bool q_undogroup_is_signal_connected(void* self, void* signal) {
    return QUndoGroup_IsSignalConnected((QUndoGroup*)self, (QMetaMethod*)signal);
}

bool q_undogroup_qbase_is_signal_connected(void* self, void* signal) {
    return QUndoGroup_QBaseIsSignalConnected((QUndoGroup*)self, (QMetaMethod*)signal);
}

void q_undogroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QUndoGroup_OnIsSignalConnected((QUndoGroup*)self, (intptr_t)slot);
}

void q_undogroup_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_undogroup_delete(void* self) {
    QUndoGroup_Delete((QUndoGroup*)(self));
}
