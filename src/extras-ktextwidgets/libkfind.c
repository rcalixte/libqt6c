#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "../libqwidget.hpp"
#include "libkfind.hpp"
#include "libkfind.h"

KFind* k_find_new(const char* pattern, int64_t options, void* parent) {
    return KFind_new(qstring(pattern), options, (QWidget*)parent);
}

KFind* k_find_new2(const char* pattern, int64_t options, void* parent, void* findDialog) {
    return KFind_new2(qstring(pattern), options, (QWidget*)parent, (QWidget*)findDialog);
}

const QMetaObject* k_find_meta_object(void* self) {
    return KFind_MetaObject((KFind*)self);
}

void k_find_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFind_OnMetaObject((KFind*)self, (intptr_t)callback);
}

const QMetaObject* k_find_qbase_meta_object(void* self) {
    return KFind_QBaseMetaObject((KFind*)self);
}

void* k_find_metacast(void* self, const char* param1) {
    return KFind_Metacast((KFind*)self, param1);
}

void k_find_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFind_OnMetacast((KFind*)self, (intptr_t)callback);
}

void* k_find_qbase_metacast(void* self, const char* param1) {
    return KFind_QBaseMetacast((KFind*)self, param1);
}

int32_t k_find_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFind_Metacall((KFind*)self, param1, param2, param3);
}

void k_find_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFind_OnMetacall((KFind*)self, (intptr_t)callback);
}

int32_t k_find_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFind_QBaseMetacall((KFind*)self, param1, param2, param3);
}

const char* k_find_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_find_need_data(void* self) {
    return KFind_NeedData((KFind*)self);
}

void k_find_set_data(void* self, const char* data) {
    KFind_SetData((KFind*)self, qstring(data));
}

void k_find_set_data2(void* self, int id, const char* data) {
    KFind_SetData2((KFind*)self, id, qstring(data));
}

int32_t k_find_find(void* self) {
    return KFind_Find((KFind*)self);
}

int64_t k_find_options(void* self) {
    return KFind_Options((KFind*)self);
}

void k_find_set_options(void* self, int64_t options) {
    KFind_SetOptions((KFind*)self, options);
}

void k_find_on_set_options(void* self, void (*callback)(void*, int64_t)) {
    KFind_OnSetOptions((KFind*)self, (intptr_t)callback);
}

void k_find_qbase_set_options(void* self, int64_t options) {
    KFind_QBaseSetOptions((KFind*)self, options);
}

const char* k_find_pattern(void* self) {
    libqt_string _str = KFind_Pattern((KFind*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_find_set_pattern(void* self, const char* pattern) {
    KFind_SetPattern((KFind*)self, qstring(pattern));
}

int32_t k_find_num_matches(void* self) {
    return KFind_NumMatches((KFind*)self);
}

void k_find_reset_counts(void* self) {
    KFind_ResetCounts((KFind*)self);
}

void k_find_on_reset_counts(void* self, void (*callback)()) {
    KFind_OnResetCounts((KFind*)self, (intptr_t)callback);
}

void k_find_qbase_reset_counts(void* self) {
    KFind_QBaseResetCounts((KFind*)self);
}

bool k_find_validate_match(void* self, const char* text, int index, int matchedlength) {
    return KFind_ValidateMatch((KFind*)self, qstring(text), index, matchedlength);
}

void k_find_on_validate_match(void* self, bool (*callback)(void*, const char*, int, int)) {
    KFind_OnValidateMatch((KFind*)self, (intptr_t)callback);
}

bool k_find_qbase_validate_match(void* self, const char* text, int index, int matchedlength) {
    return KFind_QBaseValidateMatch((KFind*)self, qstring(text), index, matchedlength);
}

bool k_find_should_restart(void* self, bool forceAsking, bool showNumMatches) {
    return KFind_ShouldRestart((KFind*)self, forceAsking, showNumMatches);
}

void k_find_on_should_restart(void* self, bool (*callback)(void*, bool, bool)) {
    KFind_OnShouldRestart((KFind*)self, (intptr_t)callback);
}

bool k_find_qbase_should_restart(void* self, bool forceAsking, bool showNumMatches) {
    return KFind_QBaseShouldRestart((KFind*)self, forceAsking, showNumMatches);
}

int32_t k_find_find2(const char* text, const char* pattern, int index, int64_t options, int* matchedLength, void* rmatch) {
    return KFind_Find2(qstring(text), qstring(pattern), index, options, matchedLength, (QRegularExpressionMatch*)rmatch);
}

void k_find_display_final_dialog(void* self) {
    KFind_DisplayFinalDialog((KFind*)self);
}

void k_find_on_display_final_dialog(void* self, void (*callback)()) {
    KFind_OnDisplayFinalDialog((KFind*)self, (intptr_t)callback);
}

void k_find_qbase_display_final_dialog(void* self) {
    KFind_QBaseDisplayFinalDialog((KFind*)self);
}

QDialog* k_find_find_next_dialog(void* self) {
    return KFind_FindNextDialog((KFind*)self);
}

void k_find_close_find_next_dialog(void* self) {
    KFind_CloseFindNextDialog((KFind*)self);
}

int32_t k_find_index(void* self) {
    return KFind_Index((KFind*)self);
}

void k_find_text_found(void* self, const char* text, int matchingIndex, int matchedLength) {
    KFind_TextFound((KFind*)self, qstring(text), matchingIndex, matchedLength);
}

void k_find_on_text_found(void* self, void (*callback)(void*, const char*, int, int)) {
    KFind_Connect_TextFound((KFind*)self, (intptr_t)callback);
}

void k_find_text_found_at_id(void* self, int id, int matchingIndex, int matchedLength) {
    KFind_TextFoundAtId((KFind*)self, id, matchingIndex, matchedLength);
}

void k_find_on_text_found_at_id(void* self, void (*callback)(void*, int, int, int)) {
    KFind_Connect_TextFoundAtId((KFind*)self, (intptr_t)callback);
}

void k_find_find_next(void* self) {
    KFind_FindNext((KFind*)self);
}

void k_find_on_find_next(void* self, void (*callback)(void*)) {
    KFind_Connect_FindNext((KFind*)self, (intptr_t)callback);
}

void k_find_options_changed(void* self) {
    KFind_OptionsChanged((KFind*)self);
}

void k_find_on_options_changed(void* self, void (*callback)(void*)) {
    KFind_Connect_OptionsChanged((KFind*)self, (intptr_t)callback);
}

void k_find_dialog_closed(void* self) {
    KFind_DialogClosed((KFind*)self);
}

void k_find_on_dialog_closed(void* self, void (*callback)(void*)) {
    KFind_Connect_DialogClosed((KFind*)self, (intptr_t)callback);
}

QWidget* k_find_parent_widget(void* self) {
    return KFind_ParentWidget((KFind*)self);
}

void k_find_on_parent_widget(void* self, QWidget* (*callback)()) {
    KFind_OnParentWidget((KFind*)self, (intptr_t)callback);
}

QWidget* k_find_qbase_parent_widget(void* self) {
    return KFind_QBaseParentWidget((KFind*)self);
}

QWidget* k_find_dialogs_parent(void* self) {
    return KFind_DialogsParent((KFind*)self);
}

void k_find_on_dialogs_parent(void* self, QWidget* (*callback)()) {
    KFind_OnDialogsParent((KFind*)self, (intptr_t)callback);
}

QWidget* k_find_qbase_dialogs_parent(void* self) {
    return KFind_QBaseDialogsParent((KFind*)self);
}

const char* k_find_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_find_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_find_set_data22(void* self, const char* data, int startPos) {
    KFind_SetData22((KFind*)self, qstring(data), startPos);
}

void k_find_set_data3(void* self, int id, const char* data, int startPos) {
    KFind_SetData3((KFind*)self, id, qstring(data), startPos);
}

QDialog* k_find_find_next_dialog1(void* self, bool create) {
    return KFind_FindNextDialog1((KFind*)self, create);
}

const char* k_find_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_find_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_find_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_find_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_find_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_find_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_find_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_find_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_find_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_find_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_find_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_find_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_find_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_find_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_find_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_find_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_find_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_find_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_find_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_find_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_find_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_find_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_find_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_find_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_find_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_find_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_find_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_find_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_find_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_find_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_find_dynamic_property_names\n");
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

QBindingStorage* k_find_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_find_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_find_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_find_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_find_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_find_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_find_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_find_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_find_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_find_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_find_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_find_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_find_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_find_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_find_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_find_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_find_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_find_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_find_event(void* self, void* event) {
    return KFind_Event((KFind*)self, (QEvent*)event);
}

bool k_find_qbase_event(void* self, void* event) {
    return KFind_QBaseEvent((KFind*)self, (QEvent*)event);
}

void k_find_on_event(void* self, bool (*callback)(void*, void*)) {
    KFind_OnEvent((KFind*)self, (intptr_t)callback);
}

bool k_find_event_filter(void* self, void* watched, void* event) {
    return KFind_EventFilter((KFind*)self, (QObject*)watched, (QEvent*)event);
}

bool k_find_qbase_event_filter(void* self, void* watched, void* event) {
    return KFind_QBaseEventFilter((KFind*)self, (QObject*)watched, (QEvent*)event);
}

void k_find_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFind_OnEventFilter((KFind*)self, (intptr_t)callback);
}

void k_find_timer_event(void* self, void* event) {
    KFind_TimerEvent((KFind*)self, (QTimerEvent*)event);
}

void k_find_qbase_timer_event(void* self, void* event) {
    KFind_QBaseTimerEvent((KFind*)self, (QTimerEvent*)event);
}

void k_find_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFind_OnTimerEvent((KFind*)self, (intptr_t)callback);
}

void k_find_child_event(void* self, void* event) {
    KFind_ChildEvent((KFind*)self, (QChildEvent*)event);
}

void k_find_qbase_child_event(void* self, void* event) {
    KFind_QBaseChildEvent((KFind*)self, (QChildEvent*)event);
}

void k_find_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFind_OnChildEvent((KFind*)self, (intptr_t)callback);
}

void k_find_custom_event(void* self, void* event) {
    KFind_CustomEvent((KFind*)self, (QEvent*)event);
}

void k_find_qbase_custom_event(void* self, void* event) {
    KFind_QBaseCustomEvent((KFind*)self, (QEvent*)event);
}

void k_find_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFind_OnCustomEvent((KFind*)self, (intptr_t)callback);
}

void k_find_connect_notify(void* self, void* signal) {
    KFind_ConnectNotify((KFind*)self, (QMetaMethod*)signal);
}

void k_find_qbase_connect_notify(void* self, void* signal) {
    KFind_QBaseConnectNotify((KFind*)self, (QMetaMethod*)signal);
}

void k_find_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFind_OnConnectNotify((KFind*)self, (intptr_t)callback);
}

void k_find_disconnect_notify(void* self, void* signal) {
    KFind_DisconnectNotify((KFind*)self, (QMetaMethod*)signal);
}

void k_find_qbase_disconnect_notify(void* self, void* signal) {
    KFind_QBaseDisconnectNotify((KFind*)self, (QMetaMethod*)signal);
}

void k_find_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFind_OnDisconnectNotify((KFind*)self, (intptr_t)callback);
}

QObject* k_find_sender(void* self) {
    return KFind_Sender((KFind*)self);
}

QObject* k_find_qbase_sender(void* self) {
    return KFind_QBaseSender((KFind*)self);
}

void k_find_on_sender(void* self, QObject* (*callback)()) {
    KFind_OnSender((KFind*)self, (intptr_t)callback);
}

int32_t k_find_sender_signal_index(void* self) {
    return KFind_SenderSignalIndex((KFind*)self);
}

int32_t k_find_qbase_sender_signal_index(void* self) {
    return KFind_QBaseSenderSignalIndex((KFind*)self);
}

void k_find_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFind_OnSenderSignalIndex((KFind*)self, (intptr_t)callback);
}

int32_t k_find_receivers(void* self, const char* signal) {
    return KFind_Receivers((KFind*)self, signal);
}

int32_t k_find_qbase_receivers(void* self, const char* signal) {
    return KFind_QBaseReceivers((KFind*)self, signal);
}

void k_find_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFind_OnReceivers((KFind*)self, (intptr_t)callback);
}

bool k_find_is_signal_connected(void* self, void* signal) {
    return KFind_IsSignalConnected((KFind*)self, (QMetaMethod*)signal);
}

bool k_find_qbase_is_signal_connected(void* self, void* signal) {
    return KFind_QBaseIsSignalConnected((KFind*)self, (QMetaMethod*)signal);
}

void k_find_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFind_OnIsSignalConnected((KFind*)self, (intptr_t)callback);
}

void k_find_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_find_delete(void* self) {
    KFind_Delete((KFind*)(self));
}
