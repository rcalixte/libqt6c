#include "libqabstractnativeeventfilter.hpp"
#include "libqdeadlinetimer.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqsocketnotifier.hpp"
#include "libqthread.hpp"
#include "libqabstracteventdispatcher.hpp"
#include "libqabstracteventdispatcher.h"

const QMetaObject* q_abstracteventdispatcher_meta_object(void* self) {
    return QAbstractEventDispatcher_MetaObject((QAbstractEventDispatcher*)self);
}

void* q_abstracteventdispatcher_metacast(void* self, const char* param1) {
    return QAbstractEventDispatcher_Metacast((QAbstractEventDispatcher*)self, param1);
}

int32_t q_abstracteventdispatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractEventDispatcher_Metacall((QAbstractEventDispatcher*)self, param1, param2, param3);
}

const char* q_abstracteventdispatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractEventDispatcher* q_abstracteventdispatcher_instance() {
    return QAbstractEventDispatcher_Instance();
}

bool q_abstracteventdispatcher_process_events(void* self, int32_t flags) {
    return QAbstractEventDispatcher_ProcessEvents((QAbstractEventDispatcher*)self, flags);
}

void q_abstracteventdispatcher_register_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_RegisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

void q_abstracteventdispatcher_unregister_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_UnregisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

int32_t q_abstracteventdispatcher_register_timer(void* self, long long interval, int32_t timerType, void* object) {
    return QAbstractEventDispatcher_RegisterTimer((QAbstractEventDispatcher*)self, interval, timerType, (QObject*)object);
}

void q_abstracteventdispatcher_register_timer2(void* self, int timerId, long long interval, int32_t timerType, void* object) {
    QAbstractEventDispatcher_RegisterTimer2((QAbstractEventDispatcher*)self, timerId, interval, timerType, (QObject*)object);
}

bool q_abstracteventdispatcher_unregister_timer(void* self, int timerId) {
    return QAbstractEventDispatcher_UnregisterTimer((QAbstractEventDispatcher*)self, timerId);
}

bool q_abstracteventdispatcher_unregister_timers(void* self, void* object) {
    return QAbstractEventDispatcher_UnregisterTimers((QAbstractEventDispatcher*)self, (QObject*)object);
}

libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcher_registered_timers(void* self, void* object) {
    libqt_list _arr = QAbstractEventDispatcher_RegisteredTimers((QAbstractEventDispatcher*)self, (QObject*)object);
    return _arr;
}

int32_t q_abstracteventdispatcher_remaining_time(void* self, int timerId) {
    return QAbstractEventDispatcher_RemainingTime((QAbstractEventDispatcher*)self, timerId);
}

bool q_abstracteventdispatcher_unregister_timer2(void* self, int32_t timerId) {
    return QAbstractEventDispatcher_UnregisterTimer2((QAbstractEventDispatcher*)self, timerId);
}

libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ q_abstracteventdispatcher_timers_for_object(void* self, void* object) {
    libqt_list _arr = QAbstractEventDispatcher_TimersForObject((QAbstractEventDispatcher*)self, (QObject*)object);
    return _arr;
}

void q_abstracteventdispatcher_wake_up(void* self) {
    QAbstractEventDispatcher_WakeUp((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_interrupt(void* self) {
    QAbstractEventDispatcher_Interrupt((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_starting_up(void* self) {
    QAbstractEventDispatcher_StartingUp((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_closing_down(void* self) {
    QAbstractEventDispatcher_ClosingDown((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_install_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_InstallNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_abstracteventdispatcher_remove_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_RemoveNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

bool q_abstracteventdispatcher_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractEventDispatcher_FilterNativeEvent((QAbstractEventDispatcher*)self, qstring(eventType), message, result);
}

void q_abstracteventdispatcher_about_to_block(void* self) {
    QAbstractEventDispatcher_AboutToBlock((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_on_about_to_block(void* self, void (*callback)(void*)) {
    QAbstractEventDispatcher_Connect_AboutToBlock((QAbstractEventDispatcher*)self, (intptr_t)callback);
}

void q_abstracteventdispatcher_awake(void* self) {
    QAbstractEventDispatcher_Awake((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcher_on_awake(void* self, void (*callback)(void*)) {
    QAbstractEventDispatcher_Connect_Awake((QAbstractEventDispatcher*)self, (intptr_t)callback);
}

const char* q_abstracteventdispatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracteventdispatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractEventDispatcher* q_abstracteventdispatcher_instance1(void* thread) {
    return QAbstractEventDispatcher_Instance1((QThread*)thread);
}

bool q_abstracteventdispatcher_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_abstracteventdispatcher_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_abstracteventdispatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracteventdispatcher_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstracteventdispatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstracteventdispatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstracteventdispatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstracteventdispatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstracteventdispatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstracteventdispatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstracteventdispatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstracteventdispatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstracteventdispatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracteventdispatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstracteventdispatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstracteventdispatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstracteventdispatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstracteventdispatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstracteventdispatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstracteventdispatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstracteventdispatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstracteventdispatcher_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstracteventdispatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstracteventdispatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstracteventdispatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstracteventdispatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstracteventdispatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstracteventdispatcher_dynamic_property_names");
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

QBindingStorage* q_abstracteventdispatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstracteventdispatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstracteventdispatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstracteventdispatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstracteventdispatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstracteventdispatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstracteventdispatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstracteventdispatcher_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstracteventdispatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstracteventdispatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstracteventdispatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_abstracteventdispatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracteventdispatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_abstracteventdispatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstracteventdispatcher_delete(void* self) {
    QAbstractEventDispatcher_Delete((QAbstractEventDispatcher*)(self));
}

const QMetaObject* q_abstracteventdispatcherv2_meta_object(void* self) {
    return QAbstractEventDispatcherV2_MetaObject((QAbstractEventDispatcherV2*)self);
}

void* q_abstracteventdispatcherv2_metacast(void* self, const char* param1) {
    return QAbstractEventDispatcherV2_Metacast((QAbstractEventDispatcherV2*)self, param1);
}

int32_t q_abstracteventdispatcherv2_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractEventDispatcherV2_Metacall((QAbstractEventDispatcherV2*)self, param1, param2, param3);
}

const char* q_abstracteventdispatcherv2_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstracteventdispatcherv2_unregister_timer(void* self, int32_t timerId) {
    return QAbstractEventDispatcherV2_UnregisterTimer((QAbstractEventDispatcherV2*)self, timerId);
}

libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ q_abstracteventdispatcherv2_timers_for_object(void* self, void* object) {
    libqt_list _arr = QAbstractEventDispatcherV2_TimersForObject((QAbstractEventDispatcherV2*)self, (QObject*)object);
    return _arr;
}

bool q_abstracteventdispatcherv2_process_events_with_deadline(void* self, int32_t flags, void* deadline) {
    return QAbstractEventDispatcherV2_ProcessEventsWithDeadline((QAbstractEventDispatcherV2*)self, flags, (QDeadlineTimer*)deadline);
}

const char* q_abstracteventdispatcherv2_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracteventdispatcherv2_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance() {
    return QAbstractEventDispatcher_Instance();
}

bool q_abstracteventdispatcherv2_process_events(void* self, int32_t flags) {
    return QAbstractEventDispatcher_ProcessEvents((QAbstractEventDispatcher*)self, flags);
}

void q_abstracteventdispatcherv2_register_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_RegisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

void q_abstracteventdispatcherv2_unregister_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_UnregisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

int32_t q_abstracteventdispatcherv2_register_timer(void* self, long long interval, int32_t timerType, void* object) {
    return QAbstractEventDispatcher_RegisterTimer((QAbstractEventDispatcher*)self, interval, timerType, (QObject*)object);
}

void q_abstracteventdispatcherv2_register_timer2(void* self, int timerId, long long interval, int32_t timerType, void* object) {
    QAbstractEventDispatcher_RegisterTimer2((QAbstractEventDispatcher*)self, timerId, interval, timerType, (QObject*)object);
}

bool q_abstracteventdispatcherv2_unregister_timers(void* self, void* object) {
    return QAbstractEventDispatcher_UnregisterTimers((QAbstractEventDispatcher*)self, (QObject*)object);
}

libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcherv2_registered_timers(void* self, void* object) {
    libqt_list _arr = QAbstractEventDispatcher_RegisteredTimers((QAbstractEventDispatcher*)self, (QObject*)object);
    return _arr;
}

int32_t q_abstracteventdispatcherv2_remaining_time(void* self, int timerId) {
    return QAbstractEventDispatcher_RemainingTime((QAbstractEventDispatcher*)self, timerId);
}

bool q_abstracteventdispatcherv2_unregister_timer2(void* self, int32_t timerId) {
    return QAbstractEventDispatcher_UnregisterTimer2((QAbstractEventDispatcher*)self, timerId);
}

void q_abstracteventdispatcherv2_wake_up(void* self) {
    QAbstractEventDispatcher_WakeUp((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_interrupt(void* self) {
    QAbstractEventDispatcher_Interrupt((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_starting_up(void* self) {
    QAbstractEventDispatcher_StartingUp((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_closing_down(void* self) {
    QAbstractEventDispatcher_ClosingDown((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_install_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_InstallNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_abstracteventdispatcherv2_remove_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_RemoveNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

bool q_abstracteventdispatcherv2_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractEventDispatcher_FilterNativeEvent((QAbstractEventDispatcher*)self, qstring(eventType), message, result);
}

void q_abstracteventdispatcherv2_about_to_block(void* self) {
    QAbstractEventDispatcher_AboutToBlock((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_on_about_to_block(void* self, void (*callback)(void*)) {
    QAbstractEventDispatcher_Connect_AboutToBlock((QAbstractEventDispatcher*)self, (intptr_t)callback);
}

void q_abstracteventdispatcherv2_awake(void* self) {
    QAbstractEventDispatcher_Awake((QAbstractEventDispatcher*)self);
}

void q_abstracteventdispatcherv2_on_awake(void* self, void (*callback)(void*)) {
    QAbstractEventDispatcher_Connect_Awake((QAbstractEventDispatcher*)self, (intptr_t)callback);
}

QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance1(void* thread) {
    return QAbstractEventDispatcher_Instance1((QThread*)thread);
}

bool q_abstracteventdispatcherv2_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_abstracteventdispatcherv2_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_abstracteventdispatcherv2_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracteventdispatcherv2_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstracteventdispatcherv2_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstracteventdispatcherv2_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstracteventdispatcherv2_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstracteventdispatcherv2_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstracteventdispatcherv2_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstracteventdispatcherv2_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstracteventdispatcherv2_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstracteventdispatcherv2_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstracteventdispatcherv2_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracteventdispatcherv2_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstracteventdispatcherv2_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstracteventdispatcherv2_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstracteventdispatcherv2_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstracteventdispatcherv2_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstracteventdispatcherv2_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstracteventdispatcherv2_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstracteventdispatcherv2_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstracteventdispatcherv2_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstracteventdispatcherv2_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstracteventdispatcherv2_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstracteventdispatcherv2_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstracteventdispatcherv2_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstracteventdispatcherv2_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstracteventdispatcherv2_dynamic_property_names");
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

QBindingStorage* q_abstracteventdispatcherv2_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstracteventdispatcherv2_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstracteventdispatcherv2_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstracteventdispatcherv2_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstracteventdispatcherv2_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstracteventdispatcherv2_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstracteventdispatcherv2_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstracteventdispatcherv2_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstracteventdispatcherv2_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstracteventdispatcherv2_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstracteventdispatcherv2_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_abstracteventdispatcherv2_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracteventdispatcherv2_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_abstracteventdispatcherv2_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstracteventdispatcherv2_delete(void* self) {
    QAbstractEventDispatcherV2_Delete((QAbstractEventDispatcherV2*)(self));
}

QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new(void* other) {
    return QAbstractEventDispatcher__TimerInfo_new((QAbstractEventDispatcher__TimerInfo*)other);
}

QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new2(void* other) {
    return QAbstractEventDispatcher__TimerInfo_new2((QAbstractEventDispatcher__TimerInfo*)other);
}

QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new3(int id, int i, int32_t t) {
    return QAbstractEventDispatcher__TimerInfo_new3(id, i, t);
}

QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new4(void* param1) {
    return QAbstractEventDispatcher__TimerInfo_new4((QAbstractEventDispatcher__TimerInfo*)param1);
}

void q_abstracteventdispatcher__timerinfo_copy_assign(void* self, void* other) {
    QAbstractEventDispatcher__TimerInfo_CopyAssign((QAbstractEventDispatcher__TimerInfo*)self, (QAbstractEventDispatcher__TimerInfo*)other);
}

void q_abstracteventdispatcher__timerinfo_move_assign(void* self, void* other) {
    QAbstractEventDispatcher__TimerInfo_MoveAssign((QAbstractEventDispatcher__TimerInfo*)self, (QAbstractEventDispatcher__TimerInfo*)other);
}

int32_t q_abstracteventdispatcher__timerinfo_timer_id(void* self) {
    return QAbstractEventDispatcher__TimerInfo_TimerId((QAbstractEventDispatcher__TimerInfo*)self);
}

void q_abstracteventdispatcher__timerinfo_set_timer_id(void* self, int timerId) {
    QAbstractEventDispatcher__TimerInfo_SetTimerId((QAbstractEventDispatcher__TimerInfo*)self, timerId);
}

int32_t q_abstracteventdispatcher__timerinfo_interval(void* self) {
    return QAbstractEventDispatcher__TimerInfo_Interval((QAbstractEventDispatcher__TimerInfo*)self);
}

void q_abstracteventdispatcher__timerinfo_set_interval(void* self, int interval) {
    QAbstractEventDispatcher__TimerInfo_SetInterval((QAbstractEventDispatcher__TimerInfo*)self, interval);
}

int32_t q_abstracteventdispatcher__timerinfo_timer_type(void* self) {
    return QAbstractEventDispatcher__TimerInfo_TimerType((QAbstractEventDispatcher__TimerInfo*)self);
}

void q_abstracteventdispatcher__timerinfo_set_timer_type(void* self, int32_t timerType) {
    QAbstractEventDispatcher__TimerInfo_SetTimerType((QAbstractEventDispatcher__TimerInfo*)self, timerType);
}

void q_abstracteventdispatcher__timerinfo_delete(void* self) {
    QAbstractEventDispatcher__TimerInfo_Delete((QAbstractEventDispatcher__TimerInfo*)(self));
}

QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new(void* param1) {
    return QAbstractEventDispatcher__TimerInfoV2_new((QAbstractEventDispatcher__TimerInfoV2*)param1);
}

QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new2() {
    return QAbstractEventDispatcher__TimerInfoV2_new2();
}

int32_t q_abstracteventdispatcher__timerinfov2_timer_id(void* self) {
    return QAbstractEventDispatcher__TimerInfoV2_TimerId((QAbstractEventDispatcher__TimerInfoV2*)self);
}

void q_abstracteventdispatcher__timerinfov2_set_timer_id(void* self, int32_t timerId) {
    QAbstractEventDispatcher__TimerInfoV2_SetTimerId((QAbstractEventDispatcher__TimerInfoV2*)self, timerId);
}

int32_t q_abstracteventdispatcher__timerinfov2_timer_type(void* self) {
    return QAbstractEventDispatcher__TimerInfoV2_TimerType((QAbstractEventDispatcher__TimerInfoV2*)self);
}

void q_abstracteventdispatcher__timerinfov2_set_timer_type(void* self, int32_t timerType) {
    QAbstractEventDispatcher__TimerInfoV2_SetTimerType((QAbstractEventDispatcher__TimerInfoV2*)self, timerType);
}

void q_abstracteventdispatcher__timerinfov2_operator_assign(void* self, void* param1) {
    QAbstractEventDispatcher__TimerInfoV2_OperatorAssign((QAbstractEventDispatcher__TimerInfoV2*)self, (QAbstractEventDispatcher__TimerInfoV2*)param1);
}

void q_abstracteventdispatcher__timerinfov2_delete(void* self) {
    QAbstractEventDispatcher__TimerInfoV2_Delete((QAbstractEventDispatcher__TimerInfoV2*)(self));
}
