#include "libkfind.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkreplace.hpp"
#include "libkreplace.h"

KReplace* k_replace_new(const char* pattern, const char* replacement, int64_t options) {
    return KReplace_new(qstring(pattern), qstring(replacement), options);
}

KReplace* k_replace_new2(const char* pattern, const char* replacement, int64_t options, void* parent, void* replaceDialog) {
    return KReplace_new2(qstring(pattern), qstring(replacement), options, (QWidget*)parent, (QWidget*)replaceDialog);
}

KReplace* k_replace_new3(const char* pattern, const char* replacement, int64_t options, void* parent) {
    return KReplace_new3(qstring(pattern), qstring(replacement), options, (QWidget*)parent);
}

const QMetaObject* k_replace_meta_object(void* self) {
    return KReplace_MetaObject((KReplace*)self);
}

void k_replace_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KReplace_OnMetaObject((KReplace*)self, (intptr_t)callback);
}

const QMetaObject* k_replace_qbase_meta_object(void* self) {
    return KReplace_QBaseMetaObject((KReplace*)self);
}

void* k_replace_metacast(void* self, const char* param1) {
    return KReplace_Metacast((KReplace*)self, param1);
}

void k_replace_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KReplace_OnMetacast((KReplace*)self, (intptr_t)callback);
}

void* k_replace_qbase_metacast(void* self, const char* param1) {
    return KReplace_QBaseMetacast((KReplace*)self, param1);
}

int32_t k_replace_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KReplace_Metacall((KReplace*)self, param1, param2, param3);
}

void k_replace_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KReplace_OnMetacall((KReplace*)self, (intptr_t)callback);
}

int32_t k_replace_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KReplace_QBaseMetacall((KReplace*)self, param1, param2, param3);
}

const char* k_replace_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_replace_num_replacements(void* self) {
    return KReplace_NumReplacements((KReplace*)self);
}

void k_replace_reset_counts(void* self) {
    KReplace_ResetCounts((KReplace*)self);
}

void k_replace_on_reset_counts(void* self, void (*callback)()) {
    KReplace_OnResetCounts((KReplace*)self, (intptr_t)callback);
}

void k_replace_qbase_reset_counts(void* self) {
    KReplace_QBaseResetCounts((KReplace*)self);
}

int32_t k_replace_replace(void* self) {
    return KReplace_Replace((KReplace*)self);
}

QDialog* k_replace_replace_next_dialog(void* self) {
    return KReplace_ReplaceNextDialog((KReplace*)self);
}

void k_replace_close_replace_next_dialog(void* self) {
    KReplace_CloseReplaceNextDialog((KReplace*)self);
}

int32_t k_replace_replace2(const char* text, const char* pattern, const char* replacement, int index, int64_t options, int* replacedLength) {
    return KReplace_Replace2(qstring(text), qstring(pattern), qstring(replacement), index, options, replacedLength);
}

bool k_replace_should_restart(void* self, bool forceAsking, bool showNumMatches) {
    return KReplace_ShouldRestart((KReplace*)self, forceAsking, showNumMatches);
}

void k_replace_on_should_restart(void* self, bool (*callback)(void*, bool, bool)) {
    KReplace_OnShouldRestart((KReplace*)self, (intptr_t)callback);
}

bool k_replace_qbase_should_restart(void* self, bool forceAsking, bool showNumMatches) {
    return KReplace_QBaseShouldRestart((KReplace*)self, forceAsking, showNumMatches);
}

void k_replace_display_final_dialog(void* self) {
    KReplace_DisplayFinalDialog((KReplace*)self);
}

void k_replace_on_display_final_dialog(void* self, void (*callback)()) {
    KReplace_OnDisplayFinalDialog((KReplace*)self, (intptr_t)callback);
}

void k_replace_qbase_display_final_dialog(void* self) {
    KReplace_QBaseDisplayFinalDialog((KReplace*)self);
}

void k_replace_text_replaced(void* self, const char* text, int replacementIndex, int replacedLength, int matchedLength) {
    KReplace_TextReplaced((KReplace*)self, qstring(text), replacementIndex, replacedLength, matchedLength);
}

void k_replace_on_text_replaced(void* self, void (*callback)(void*, const char*, int, int, int)) {
    KReplace_Connect_TextReplaced((KReplace*)self, (intptr_t)callback);
}

const char* k_replace_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_replace_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDialog* k_replace_replace_next_dialog1(void* self, bool create) {
    return KReplace_ReplaceNextDialog1((KReplace*)self, create);
}

bool k_replace_need_data(void* self) {
    return KFind_NeedData((KFind*)self);
}

void k_replace_set_data(void* self, const char* data) {
    KFind_SetData((KFind*)self, qstring(data));
}

void k_replace_set_data2(void* self, int id, const char* data) {
    KFind_SetData2((KFind*)self, id, qstring(data));
}

int32_t k_replace_find(void* self) {
    return KFind_Find((KFind*)self);
}

int64_t k_replace_options(void* self) {
    return KFind_Options((KFind*)self);
}

const char* k_replace_pattern(void* self) {
    libqt_string _str = KFind_Pattern((KFind*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replace_set_pattern(void* self, const char* pattern) {
    KFind_SetPattern((KFind*)self, qstring(pattern));
}

int32_t k_replace_num_matches(void* self) {
    return KFind_NumMatches((KFind*)self);
}

int32_t k_replace_find2(const char* text, const char* pattern, int index, int64_t options, int* matchedLength, void* rmatch) {
    return KFind_Find2(qstring(text), qstring(pattern), index, options, matchedLength, (QRegularExpressionMatch*)rmatch);
}

QDialog* k_replace_find_next_dialog(void* self) {
    return KFind_FindNextDialog((KFind*)self);
}

void k_replace_close_find_next_dialog(void* self) {
    KFind_CloseFindNextDialog((KFind*)self);
}

int32_t k_replace_index(void* self) {
    return KFind_Index((KFind*)self);
}

void k_replace_text_found(void* self, const char* text, int matchingIndex, int matchedLength) {
    KFind_TextFound((KFind*)self, qstring(text), matchingIndex, matchedLength);
}

void k_replace_on_text_found(void* self, void (*callback)(void*, const char*, int, int)) {
    KFind_Connect_TextFound((KFind*)self, (intptr_t)callback);
}

void k_replace_text_found_at_id(void* self, int id, int matchingIndex, int matchedLength) {
    KFind_TextFoundAtId((KFind*)self, id, matchingIndex, matchedLength);
}

void k_replace_on_text_found_at_id(void* self, void (*callback)(void*, int, int, int)) {
    KFind_Connect_TextFoundAtId((KFind*)self, (intptr_t)callback);
}

void k_replace_find_next(void* self) {
    KFind_FindNext((KFind*)self);
}

void k_replace_on_find_next(void* self, void (*callback)(void*)) {
    KFind_Connect_FindNext((KFind*)self, (intptr_t)callback);
}

void k_replace_options_changed(void* self) {
    KFind_OptionsChanged((KFind*)self);
}

void k_replace_on_options_changed(void* self, void (*callback)(void*)) {
    KFind_Connect_OptionsChanged((KFind*)self, (intptr_t)callback);
}

void k_replace_dialog_closed(void* self) {
    KFind_DialogClosed((KFind*)self);
}

void k_replace_on_dialog_closed(void* self, void (*callback)(void*)) {
    KFind_Connect_DialogClosed((KFind*)self, (intptr_t)callback);
}

void k_replace_set_data22(void* self, const char* data, int startPos) {
    KFind_SetData22((KFind*)self, qstring(data), startPos);
}

void k_replace_set_data3(void* self, int id, const char* data, int startPos) {
    KFind_SetData3((KFind*)self, id, qstring(data), startPos);
}

QDialog* k_replace_find_next_dialog1(void* self, bool create) {
    return KFind_FindNextDialog1((KFind*)self, create);
}

const char* k_replace_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replace_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_replace_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_replace_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_replace_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_replace_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_replace_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_replace_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_replace_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_replace_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_replace_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_replace_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_replace_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_replace_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_replace_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_replace_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_replace_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_replace_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_replace_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_replace_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_replace_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_replace_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_replace_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_replace_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_replace_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_replace_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_replace_dynamic_property_names\n");
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

QBindingStorage* k_replace_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_replace_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_replace_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_replace_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_replace_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_replace_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_replace_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_replace_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_replace_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_replace_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_replace_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_replace_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_replace_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_replace_set_options(void* self, int64_t options) {
    KReplace_SetOptions((KReplace*)self, options);
}

void k_replace_qbase_set_options(void* self, int64_t options) {
    KReplace_QBaseSetOptions((KReplace*)self, options);
}

void k_replace_on_set_options(void* self, void (*callback)(void*, int64_t)) {
    KReplace_OnSetOptions((KReplace*)self, (intptr_t)callback);
}

bool k_replace_validate_match(void* self, const char* text, int index, int matchedlength) {
    return KReplace_ValidateMatch((KReplace*)self, qstring(text), index, matchedlength);
}

bool k_replace_qbase_validate_match(void* self, const char* text, int index, int matchedlength) {
    return KReplace_QBaseValidateMatch((KReplace*)self, qstring(text), index, matchedlength);
}

void k_replace_on_validate_match(void* self, bool (*callback)(void*, const char*, int, int)) {
    KReplace_OnValidateMatch((KReplace*)self, (intptr_t)callback);
}

bool k_replace_event(void* self, void* event) {
    return KReplace_Event((KReplace*)self, (QEvent*)event);
}

bool k_replace_qbase_event(void* self, void* event) {
    return KReplace_QBaseEvent((KReplace*)self, (QEvent*)event);
}

void k_replace_on_event(void* self, bool (*callback)(void*, void*)) {
    KReplace_OnEvent((KReplace*)self, (intptr_t)callback);
}

bool k_replace_event_filter(void* self, void* watched, void* event) {
    return KReplace_EventFilter((KReplace*)self, (QObject*)watched, (QEvent*)event);
}

bool k_replace_qbase_event_filter(void* self, void* watched, void* event) {
    return KReplace_QBaseEventFilter((KReplace*)self, (QObject*)watched, (QEvent*)event);
}

void k_replace_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KReplace_OnEventFilter((KReplace*)self, (intptr_t)callback);
}

void k_replace_timer_event(void* self, void* event) {
    KReplace_TimerEvent((KReplace*)self, (QTimerEvent*)event);
}

void k_replace_qbase_timer_event(void* self, void* event) {
    KReplace_QBaseTimerEvent((KReplace*)self, (QTimerEvent*)event);
}

void k_replace_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KReplace_OnTimerEvent((KReplace*)self, (intptr_t)callback);
}

void k_replace_child_event(void* self, void* event) {
    KReplace_ChildEvent((KReplace*)self, (QChildEvent*)event);
}

void k_replace_qbase_child_event(void* self, void* event) {
    KReplace_QBaseChildEvent((KReplace*)self, (QChildEvent*)event);
}

void k_replace_on_child_event(void* self, void (*callback)(void*, void*)) {
    KReplace_OnChildEvent((KReplace*)self, (intptr_t)callback);
}

void k_replace_custom_event(void* self, void* event) {
    KReplace_CustomEvent((KReplace*)self, (QEvent*)event);
}

void k_replace_qbase_custom_event(void* self, void* event) {
    KReplace_QBaseCustomEvent((KReplace*)self, (QEvent*)event);
}

void k_replace_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KReplace_OnCustomEvent((KReplace*)self, (intptr_t)callback);
}

void k_replace_connect_notify(void* self, void* signal) {
    KReplace_ConnectNotify((KReplace*)self, (QMetaMethod*)signal);
}

void k_replace_qbase_connect_notify(void* self, void* signal) {
    KReplace_QBaseConnectNotify((KReplace*)self, (QMetaMethod*)signal);
}

void k_replace_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KReplace_OnConnectNotify((KReplace*)self, (intptr_t)callback);
}

void k_replace_disconnect_notify(void* self, void* signal) {
    KReplace_DisconnectNotify((KReplace*)self, (QMetaMethod*)signal);
}

void k_replace_qbase_disconnect_notify(void* self, void* signal) {
    KReplace_QBaseDisconnectNotify((KReplace*)self, (QMetaMethod*)signal);
}

void k_replace_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KReplace_OnDisconnectNotify((KReplace*)self, (intptr_t)callback);
}

QWidget* k_replace_parent_widget(void* self) {
    return KReplace_ParentWidget((KReplace*)self);
}

QWidget* k_replace_qbase_parent_widget(void* self) {
    return KReplace_QBaseParentWidget((KReplace*)self);
}

void k_replace_on_parent_widget(void* self, QWidget* (*callback)()) {
    KReplace_OnParentWidget((KReplace*)self, (intptr_t)callback);
}

QWidget* k_replace_dialogs_parent(void* self) {
    return KReplace_DialogsParent((KReplace*)self);
}

QWidget* k_replace_qbase_dialogs_parent(void* self) {
    return KReplace_QBaseDialogsParent((KReplace*)self);
}

void k_replace_on_dialogs_parent(void* self, QWidget* (*callback)()) {
    KReplace_OnDialogsParent((KReplace*)self, (intptr_t)callback);
}

QObject* k_replace_sender(void* self) {
    return KReplace_Sender((KReplace*)self);
}

QObject* k_replace_qbase_sender(void* self) {
    return KReplace_QBaseSender((KReplace*)self);
}

void k_replace_on_sender(void* self, QObject* (*callback)()) {
    KReplace_OnSender((KReplace*)self, (intptr_t)callback);
}

int32_t k_replace_sender_signal_index(void* self) {
    return KReplace_SenderSignalIndex((KReplace*)self);
}

int32_t k_replace_qbase_sender_signal_index(void* self) {
    return KReplace_QBaseSenderSignalIndex((KReplace*)self);
}

void k_replace_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KReplace_OnSenderSignalIndex((KReplace*)self, (intptr_t)callback);
}

int32_t k_replace_receivers(void* self, const char* signal) {
    return KReplace_Receivers((KReplace*)self, signal);
}

int32_t k_replace_qbase_receivers(void* self, const char* signal) {
    return KReplace_QBaseReceivers((KReplace*)self, signal);
}

void k_replace_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KReplace_OnReceivers((KReplace*)self, (intptr_t)callback);
}

bool k_replace_is_signal_connected(void* self, void* signal) {
    return KReplace_IsSignalConnected((KReplace*)self, (QMetaMethod*)signal);
}

bool k_replace_qbase_is_signal_connected(void* self, void* signal) {
    return KReplace_QBaseIsSignalConnected((KReplace*)self, (QMetaMethod*)signal);
}

void k_replace_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KReplace_OnIsSignalConnected((KReplace*)self, (intptr_t)callback);
}

void k_replace_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_replace_delete(void* self) {
    KReplace_Delete((KReplace*)(self));
}
