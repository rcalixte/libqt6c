#pragma once
#ifndef SRCQT6C_LIBQEVENTLOOP_H
#define SRCQT6C_LIBQEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QEventLoop* q_eventloop_new();
QEventLoop* q_eventloop_new2(void* parent);
QMetaObject* q_eventloop_meta_object(void* self);
void* q_eventloop_metacast(void* self, const char* param1);
int32_t q_eventloop_metacall(void* self, int64_t param1, int param2, void* param3);
void q_eventloop_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_eventloop_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_eventloop_tr(const char* s);
bool q_eventloop_process_events(void* self);
void q_eventloop_process_events2(void* self, int64_t flags, int maximumTime);
int32_t q_eventloop_exec(void* self);
bool q_eventloop_is_running(void* self);
void q_eventloop_wake_up(void* self);
bool q_eventloop_event(void* self, void* event);
void q_eventloop_on_event(void* self, bool (*slot)(void*, void*));
bool q_eventloop_qbase_event(void* self, void* event);
void q_eventloop_exit(void* self);
void q_eventloop_quit(void* self);
const char* q_eventloop_tr2(const char* s, const char* c);
const char* q_eventloop_tr3(const char* s, const char* c, int n);
bool q_eventloop_process_events1(void* self, int64_t flags);
int32_t q_eventloop_exec1(void* self, int64_t flags);
void q_eventloop_exit1(void* self, int returnCode);
const char* q_eventloop_object_name(void* self);
void q_eventloop_set_object_name(void* self, const char* name);
bool q_eventloop_is_widget_type(void* self);
bool q_eventloop_is_window_type(void* self);
bool q_eventloop_is_quick_item_type(void* self);
bool q_eventloop_signals_blocked(void* self);
bool q_eventloop_block_signals(void* self, bool b);
QThread* q_eventloop_thread(void* self);
void q_eventloop_move_to_thread(void* self, void* thread);
int32_t q_eventloop_start_timer(void* self, int interval);
void q_eventloop_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_eventloop_children(void* self);
void q_eventloop_set_parent(void* self, void* parent);
void q_eventloop_install_event_filter(void* self, void* filterObj);
void q_eventloop_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_eventloop_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_eventloop_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_eventloop_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_eventloop_disconnect_with_q_meta_object_connection(void* param1);
void q_eventloop_dump_object_tree(void* self);
void q_eventloop_dump_object_info(void* self);
bool q_eventloop_set_property(void* self, const char* name, void* value);
QVariant* q_eventloop_property(void* self, const char* name);
const char** q_eventloop_dynamic_property_names(void* self);
QBindingStorage* q_eventloop_binding_storage(void* self);
QBindingStorage* q_eventloop_binding_storage2(void* self);
void q_eventloop_destroyed(void* self);
void q_eventloop_on_destroyed(void* self, void (*slot)(void*));
QObject* q_eventloop_parent(void* self);
bool q_eventloop_inherits(void* self, const char* classname);
void q_eventloop_delete_later(void* self);
int32_t q_eventloop_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_eventloop_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_eventloop_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_eventloop_destroyed1(void* self, void* param1);
void q_eventloop_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_eventloop_event_filter(void* self, void* watched, void* event);
bool q_eventloop_qbase_event_filter(void* self, void* watched, void* event);
void q_eventloop_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_eventloop_timer_event(void* self, void* event);
void q_eventloop_qbase_timer_event(void* self, void* event);
void q_eventloop_on_timer_event(void* self, void (*slot)(void*, void*));
void q_eventloop_child_event(void* self, void* event);
void q_eventloop_qbase_child_event(void* self, void* event);
void q_eventloop_on_child_event(void* self, void (*slot)(void*, void*));
void q_eventloop_custom_event(void* self, void* event);
void q_eventloop_qbase_custom_event(void* self, void* event);
void q_eventloop_on_custom_event(void* self, void (*slot)(void*, void*));
void q_eventloop_connect_notify(void* self, void* signal);
void q_eventloop_qbase_connect_notify(void* self, void* signal);
void q_eventloop_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_eventloop_disconnect_notify(void* self, void* signal);
void q_eventloop_qbase_disconnect_notify(void* self, void* signal);
void q_eventloop_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_eventloop_sender(void* self);
QObject* q_eventloop_qbase_sender(void* self);
void q_eventloop_on_sender(void* self, QObject* (*slot)());
int32_t q_eventloop_sender_signal_index(void* self);
int32_t q_eventloop_qbase_sender_signal_index(void* self);
void q_eventloop_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_eventloop_receivers(void* self, const char* signal);
int32_t q_eventloop_qbase_receivers(void* self, const char* signal);
void q_eventloop_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_eventloop_is_signal_connected(void* self, void* signal);
bool q_eventloop_qbase_is_signal_connected(void* self, void* signal);
void q_eventloop_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_eventloop_delete(void* self);

QEventLoopLocker* q_eventlooplocker_new();
QEventLoopLocker* q_eventlooplocker_new2(void* loop);
QEventLoopLocker* q_eventlooplocker_new3(void* thread);
void q_eventlooplocker_delete(void* self);

/// https://doc.qt.io/qt-6/qeventloop.html#types

typedef enum {
    QEVENTLOOP_PROCESSEVENTSFLAG_ALLEVENTS = 0,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDEUSERINPUTEVENTS = 1,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDESOCKETNOTIFIERS = 2,
    QEVENTLOOP_PROCESSEVENTSFLAG_WAITFORMOREEVENTS = 4,
    QEVENTLOOP_PROCESSEVENTSFLAG_X11EXCLUDETIMERS = 8,
    QEVENTLOOP_PROCESSEVENTSFLAG_EVENTLOOPEXEC = 32,
    QEVENTLOOP_PROCESSEVENTSFLAG_DIALOGEXEC = 64,
    QEVENTLOOP_PROCESSEVENTSFLAG_APPLICATIONEXEC = 128
} QEventLoop__ProcessEventsFlag;

#endif
