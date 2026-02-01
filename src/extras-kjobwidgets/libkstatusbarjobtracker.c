#include "libkabstractwidgetjobtracker.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkstatusbarjobtracker.hpp"
#include "libkstatusbarjobtracker.h"

KStatusBarJobTracker* k_statusbarjobtracker_new(void* parent) {
    return KStatusBarJobTracker_new((QWidget*)parent);
}

KStatusBarJobTracker* k_statusbarjobtracker_new2() {
    return KStatusBarJobTracker_new2();
}

KStatusBarJobTracker* k_statusbarjobtracker_new3(void* parent, bool button) {
    return KStatusBarJobTracker_new3((QWidget*)parent, button);
}

const QMetaObject* k_statusbarjobtracker_meta_object(void* self) {
    return KStatusBarJobTracker_MetaObject((KStatusBarJobTracker*)self);
}

void* k_statusbarjobtracker_metacast(void* self, const char* param1) {
    return KStatusBarJobTracker_Metacast((KStatusBarJobTracker*)self, param1);
}

int32_t k_statusbarjobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStatusBarJobTracker_Metacall((KStatusBarJobTracker*)self, param1, param2, param3);
}

const char* k_statusbarjobtracker_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_register_job(void* self, void* job) {
    KStatusBarJobTracker_RegisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_unregister_job(void* self, void* job) {
    KStatusBarJobTracker_UnregisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

QWidget* k_statusbarjobtracker_widget(void* self, void* job) {
    return KStatusBarJobTracker_Widget((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_set_status_bar_mode(void* self, int32_t statusBarMode) {
    KStatusBarJobTracker_SetStatusBarMode((KStatusBarJobTracker*)self, statusBarMode);
}

void k_statusbarjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    libqt_string field1_first_str = qstring(field1.first);
    libqt_string field1_second_str = qstring(field1.second);
    libqt_pair field1_pair = {
        &field1_first_str,
        &field1_second_str,
    };
    libqt_string field2_first_str = qstring(field2.first);
    libqt_string field2_second_str = qstring(field2.second);
    libqt_pair field2_pair = {
        &field2_first_str,
        &field2_second_str,
    };
    KStatusBarJobTracker_Description((KStatusBarJobTracker*)self, (KJob*)job, qstring(title), field1_pair, field2_pair);
}

void k_statusbarjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KStatusBarJobTracker_TotalAmount((KStatusBarJobTracker*)self, (KJob*)job, unit, amount);
}

void k_statusbarjobtracker_percent(void* self, void* job, uint64_t percent) {
    KStatusBarJobTracker_Percent((KStatusBarJobTracker*)self, (KJob*)job, percent);
}

void k_statusbarjobtracker_speed(void* self, void* job, uint64_t value) {
    KStatusBarJobTracker_Speed((KStatusBarJobTracker*)self, (KJob*)job, value);
}

void k_statusbarjobtracker_slot_clean(void* self, void* job) {
    KStatusBarJobTracker_SlotClean((KStatusBarJobTracker*)self, (KJob*)job);
}

const char* k_statusbarjobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_statusbarjobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose) {
    KAbstractWidgetJobTracker_SetStopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job, stopOnClose);
}

bool k_statusbarjobtracker_stop_on_close(void* self, void* job) {
    return KAbstractWidgetJobTracker_StopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_set_auto_delete(void* self, void* job, bool autoDelete) {
    KAbstractWidgetJobTracker_SetAutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job, autoDelete);
}

bool k_statusbarjobtracker_auto_delete(void* self, void* job) {
    return KAbstractWidgetJobTracker_AutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_stopped(void* self, void* job) {
    KAbstractWidgetJobTracker_Stopped((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_stopped(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Stopped((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_Suspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_suspend(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Suspend((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_Resume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_resume(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Resume((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_statusbarjobtracker_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_statusbarjobtracker_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_statusbarjobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_statusbarjobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_statusbarjobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_statusbarjobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_statusbarjobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_statusbarjobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_statusbarjobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_statusbarjobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_statusbarjobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_statusbarjobtracker_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_statusbarjobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_statusbarjobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_statusbarjobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_statusbarjobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_statusbarjobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_statusbarjobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_statusbarjobtracker_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_statusbarjobtracker_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_statusbarjobtracker_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_statusbarjobtracker_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_statusbarjobtracker_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_statusbarjobtracker_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_statusbarjobtracker_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_statusbarjobtracker_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_statusbarjobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_statusbarjobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_statusbarjobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_statusbarjobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_statusbarjobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_statusbarjobtracker_dynamic_property_names\n");
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

QBindingStorage* k_statusbarjobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_statusbarjobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_statusbarjobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_statusbarjobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_statusbarjobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_statusbarjobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_statusbarjobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_statusbarjobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_statusbarjobtracker_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_statusbarjobtracker_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_statusbarjobtracker_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_statusbarjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_statusbarjobtracker_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_statusbarjobtracker_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_statusbarjobtracker_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_statusbarjobtracker_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_statusbarjobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_statusbarjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_delete(void* self) {
    KStatusBarJobTracker_Delete((KStatusBarJobTracker*)(self));
}
