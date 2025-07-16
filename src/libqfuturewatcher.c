#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqfuturewatcher.hpp"
#include "libqfuturewatcher.h"

const QMetaObject* q_futurewatcherbase_meta_object(void* self) {
    return QFutureWatcherBase_MetaObject((QFutureWatcherBase*)self);
}

void* q_futurewatcherbase_metacast(void* self, const char* param1) {
    return QFutureWatcherBase_Metacast((QFutureWatcherBase*)self, param1);
}

int32_t q_futurewatcherbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFutureWatcherBase_Metacall((QFutureWatcherBase*)self, param1, param2, param3);
}

const char* q_futurewatcherbase_tr(const char* s) {
    libqt_string _str = QFutureWatcherBase_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_futurewatcherbase_progress_value(void* self) {
    return QFutureWatcherBase_ProgressValue((QFutureWatcherBase*)self);
}

int32_t q_futurewatcherbase_progress_minimum(void* self) {
    return QFutureWatcherBase_ProgressMinimum((QFutureWatcherBase*)self);
}

int32_t q_futurewatcherbase_progress_maximum(void* self) {
    return QFutureWatcherBase_ProgressMaximum((QFutureWatcherBase*)self);
}

const char* q_futurewatcherbase_progress_text(void* self) {
    libqt_string _str = QFutureWatcherBase_ProgressText((QFutureWatcherBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_futurewatcherbase_is_started(void* self) {
    return QFutureWatcherBase_IsStarted((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_finished(void* self) {
    return QFutureWatcherBase_IsFinished((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_running(void* self) {
    return QFutureWatcherBase_IsRunning((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_canceled(void* self) {
    return QFutureWatcherBase_IsCanceled((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_paused(void* self) {
    return QFutureWatcherBase_IsPaused((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_suspending(void* self) {
    return QFutureWatcherBase_IsSuspending((QFutureWatcherBase*)self);
}

bool q_futurewatcherbase_is_suspended(void* self) {
    return QFutureWatcherBase_IsSuspended((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_wait_for_finished(void* self) {
    QFutureWatcherBase_WaitForFinished((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_set_pending_results_limit(void* self, int limit) {
    QFutureWatcherBase_SetPendingResultsLimit((QFutureWatcherBase*)self, limit);
}

bool q_futurewatcherbase_event(void* self, void* event) {
    return QFutureWatcherBase_Event((QFutureWatcherBase*)self, (QEvent*)event);
}

void q_futurewatcherbase_started(void* self) {
    QFutureWatcherBase_Started((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_started(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Started((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_finished(void* self) {
    QFutureWatcherBase_Finished((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_finished(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Finished((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_canceled(void* self) {
    QFutureWatcherBase_Canceled((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_canceled(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Canceled((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_paused(void* self) {
    QFutureWatcherBase_Paused((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_paused(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Paused((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_suspending(void* self) {
    QFutureWatcherBase_Suspending((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_suspending(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Suspending((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_suspended(void* self) {
    QFutureWatcherBase_Suspended((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_suspended(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Suspended((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_resumed(void* self) {
    QFutureWatcherBase_Resumed((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_on_resumed(void* self, void (*slot)(void*)) {
    QFutureWatcherBase_Connect_Resumed((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_result_ready_at(void* self, int resultIndex) {
    QFutureWatcherBase_ResultReadyAt((QFutureWatcherBase*)self, resultIndex);
}

void q_futurewatcherbase_on_result_ready_at(void* self, void (*slot)(void*, int)) {
    QFutureWatcherBase_Connect_ResultReadyAt((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_results_ready_at(void* self, int beginIndex, int endIndex) {
    QFutureWatcherBase_ResultsReadyAt((QFutureWatcherBase*)self, beginIndex, endIndex);
}

void q_futurewatcherbase_on_results_ready_at(void* self, void (*slot)(void*, int, int)) {
    QFutureWatcherBase_Connect_ResultsReadyAt((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_progress_range_changed(void* self, int minimum, int maximum) {
    QFutureWatcherBase_ProgressRangeChanged((QFutureWatcherBase*)self, minimum, maximum);
}

void q_futurewatcherbase_on_progress_range_changed(void* self, void (*slot)(void*, int, int)) {
    QFutureWatcherBase_Connect_ProgressRangeChanged((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_progress_value_changed(void* self, int progressValue) {
    QFutureWatcherBase_ProgressValueChanged((QFutureWatcherBase*)self, progressValue);
}

void q_futurewatcherbase_on_progress_value_changed(void* self, void (*slot)(void*, int)) {
    QFutureWatcherBase_Connect_ProgressValueChanged((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_progress_text_changed(void* self, const char* progressText) {
    QFutureWatcherBase_ProgressTextChanged((QFutureWatcherBase*)self, qstring(progressText));
}

void q_futurewatcherbase_on_progress_text_changed(void* self, void (*slot)(void*, const char*)) {
    QFutureWatcherBase_Connect_ProgressTextChanged((QFutureWatcherBase*)self, (intptr_t)slot);
}

void q_futurewatcherbase_cancel(void* self) {
    QFutureWatcherBase_Cancel((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_set_suspended(void* self, bool suspendVal) {
    QFutureWatcherBase_SetSuspended((QFutureWatcherBase*)self, suspendVal);
}

void q_futurewatcherbase_suspend(void* self) {
    QFutureWatcherBase_Suspend((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_resume(void* self) {
    QFutureWatcherBase_Resume((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_toggle_suspended(void* self) {
    QFutureWatcherBase_ToggleSuspended((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_set_paused(void* self, bool paused) {
    QFutureWatcherBase_SetPaused((QFutureWatcherBase*)self, paused);
}

void q_futurewatcherbase_pause(void* self) {
    QFutureWatcherBase_Pause((QFutureWatcherBase*)self);
}

void q_futurewatcherbase_toggle_paused(void* self) {
    QFutureWatcherBase_TogglePaused((QFutureWatcherBase*)self);
}

const char* q_futurewatcherbase_tr2(const char* s, const char* c) {
    libqt_string _str = QFutureWatcherBase_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_futurewatcherbase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFutureWatcherBase_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_futurewatcherbase_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_futurewatcherbase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_futurewatcherbase_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_futurewatcherbase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_futurewatcherbase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_futurewatcherbase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_futurewatcherbase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_futurewatcherbase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_futurewatcherbase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_futurewatcherbase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_futurewatcherbase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_futurewatcherbase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_futurewatcherbase_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_futurewatcherbase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_futurewatcherbase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_futurewatcherbase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_futurewatcherbase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_futurewatcherbase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_futurewatcherbase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_futurewatcherbase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_futurewatcherbase_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_futurewatcherbase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_futurewatcherbase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_futurewatcherbase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_futurewatcherbase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_futurewatcherbase_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_futurewatcherbase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_futurewatcherbase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_futurewatcherbase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_futurewatcherbase_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_futurewatcherbase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_futurewatcherbase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_futurewatcherbase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_futurewatcherbase_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_futurewatcherbase_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_futurewatcherbase_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_futurewatcherbase_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_futurewatcherbase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_futurewatcherbase_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_futurewatcherbase_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_futurewatcherbase_delete(void* self) {
    QFutureWatcherBase_Delete((QFutureWatcherBase*)(self));
}
