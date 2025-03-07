#pragma once
#ifndef SRCQT6C_LIBQSESSIONMANAGER_H
#define SRCQT6C_LIBQSESSIONMANAGER_H

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

QMetaObject* q_sessionmanager_meta_object(void* self);
void* q_sessionmanager_metacast(void* self, const char* param1);
int32_t q_sessionmanager_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sessionmanager_tr(const char* s);
const char* q_sessionmanager_session_id(void* self);
const char* q_sessionmanager_session_key(void* self);
bool q_sessionmanager_allows_interaction(void* self);
bool q_sessionmanager_allows_error_interaction(void* self);
void q_sessionmanager_release(void* self);
void q_sessionmanager_cancel(void* self);
void q_sessionmanager_set_restart_hint(void* self, int64_t restartHint);
int64_t q_sessionmanager_restart_hint(void* self);
void q_sessionmanager_set_restart_command(void* self, const char* restartCommand[]);
const char** q_sessionmanager_restart_command(void* self);
void q_sessionmanager_set_discard_command(void* self, const char* discardCommand[]);
const char** q_sessionmanager_discard_command(void* self);
void q_sessionmanager_set_manager_property(void* self, const char* name, const char* value);
void q_sessionmanager_set_manager_property2(void* self, const char* name, const char* value[]);
bool q_sessionmanager_is_phase2(void* self);
void q_sessionmanager_request_phase2(void* self);
const char* q_sessionmanager_tr2(const char* s, const char* c);
const char* q_sessionmanager_tr3(const char* s, const char* c, int n);
bool q_sessionmanager_event(void* self, void* event);
bool q_sessionmanager_event_filter(void* self, void* watched, void* event);
const char* q_sessionmanager_object_name(void* self);
void q_sessionmanager_set_object_name(void* self, const char* name);
bool q_sessionmanager_is_widget_type(void* self);
bool q_sessionmanager_is_window_type(void* self);
bool q_sessionmanager_is_quick_item_type(void* self);
bool q_sessionmanager_signals_blocked(void* self);
bool q_sessionmanager_block_signals(void* self, bool b);
QThread* q_sessionmanager_thread(void* self);
void q_sessionmanager_move_to_thread(void* self, void* thread);
int32_t q_sessionmanager_start_timer(void* self, int interval);
void q_sessionmanager_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sessionmanager_children(void* self);
void q_sessionmanager_set_parent(void* self, void* parent);
void q_sessionmanager_install_event_filter(void* self, void* filterObj);
void q_sessionmanager_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sessionmanager_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sessionmanager_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sessionmanager_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sessionmanager_disconnect_with_q_meta_object_connection(void* param1);
void q_sessionmanager_dump_object_tree(void* self);
void q_sessionmanager_dump_object_info(void* self);
bool q_sessionmanager_set_property(void* self, const char* name, void* value);
QVariant* q_sessionmanager_property(void* self, const char* name);
const char** q_sessionmanager_dynamic_property_names(void* self);
QBindingStorage* q_sessionmanager_binding_storage(void* self);
QBindingStorage* q_sessionmanager_binding_storage2(void* self);
void q_sessionmanager_destroyed(void* self);
void q_sessionmanager_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sessionmanager_parent(void* self);
bool q_sessionmanager_inherits(void* self, const char* classname);
void q_sessionmanager_delete_later(void* self);
int32_t q_sessionmanager_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sessionmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sessionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sessionmanager_destroyed1(void* self, void* param1);
void q_sessionmanager_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qsessionmanager.html#types

typedef enum {
    QSESSIONMANAGER_RESTARTHINT_RESTARTIFRUNNING = 0,
    QSESSIONMANAGER_RESTARTHINT_RESTARTANYWAY = 1,
    QSESSIONMANAGER_RESTARTHINT_RESTARTIMMEDIATELY = 2,
    QSESSIONMANAGER_RESTARTHINT_RESTARTNEVER = 3
} QSessionManager__RestartHint;

#endif
