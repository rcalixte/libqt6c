#pragma once
#ifndef SRCQT6C_LIBQOBJECT_H
#define SRCQT6C_LIBQOBJECT_H

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
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_objectdata_dynamic_meta_object(void* self);
void q_objectdata_delete(void* self);

QObject* q_object_new();
QObject* q_object_new2(void* parent);
QMetaObject* q_object_meta_object(void* self);
void* q_object_metacast(void* self, const char* param1);
int32_t q_object_metacall(void* self, int64_t param1, int param2, void* param3);
void q_object_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_object_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_object_tr(const char* s);
bool q_object_event(void* self, void* event);
void q_object_on_event(void* self, bool (*slot)(void*, void*));
bool q_object_qbase_event(void* self, void* event);
bool q_object_event_filter(void* self, void* watched, void* event);
void q_object_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_object_qbase_event_filter(void* self, void* watched, void* event);
const char* q_object_object_name(void* self);
void q_object_set_object_name(void* self, const char* name);
bool q_object_is_widget_type(void* self);
bool q_object_is_window_type(void* self);
bool q_object_is_quick_item_type(void* self);
bool q_object_signals_blocked(void* self);
bool q_object_block_signals(void* self, bool b);
QThread* q_object_thread(void* self);
void q_object_move_to_thread(void* self, void* thread);
int32_t q_object_start_timer(void* self, int interval);
void q_object_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_object_children(void* self);
void q_object_set_parent(void* self, void* parent);
void q_object_install_event_filter(void* self, void* filterObj);
void q_object_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_object_disconnect_with_q_meta_object_connection(void* param1);
void q_object_dump_object_tree(void* self);
void q_object_dump_object_info(void* self);
bool q_object_set_property(void* self, const char* name, void* value);
QVariant* q_object_property(void* self, const char* name);
const char** q_object_dynamic_property_names(void* self);
QBindingStorage* q_object_binding_storage(void* self);
QBindingStorage* q_object_binding_storage2(void* self);
void q_object_destroyed(void* self);
void q_object_on_destroyed(void* self, void (*slot)(void*));
QObject* q_object_parent(void* self);
bool q_object_inherits(void* self, const char* classname);
void q_object_delete_later(void* self);
QObject* q_object_sender(void* self);
void q_object_on_sender(void* self, QObject* (*slot)());
QObject* q_object_qbase_sender(void* self);
int32_t q_object_sender_signal_index(void* self);
void q_object_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_object_qbase_sender_signal_index(void* self);
int32_t q_object_receivers(void* self, const char* signal);
void q_object_on_receivers(void* self, int32_t (*slot)(void*, const char*));
int32_t q_object_qbase_receivers(void* self, const char* signal);
bool q_object_is_signal_connected(void* self, void* signal);
void q_object_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
bool q_object_qbase_is_signal_connected(void* self, void* signal);
void q_object_timer_event(void* self, void* event);
void q_object_on_timer_event(void* self, void (*slot)(void*, void*));
void q_object_qbase_timer_event(void* self, void* event);
void q_object_child_event(void* self, void* event);
void q_object_on_child_event(void* self, void (*slot)(void*, void*));
void q_object_qbase_child_event(void* self, void* event);
void q_object_custom_event(void* self, void* event);
void q_object_on_custom_event(void* self, void (*slot)(void*, void*));
void q_object_qbase_custom_event(void* self, void* event);
void q_object_connect_notify(void* self, void* signal);
void q_object_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_object_qbase_connect_notify(void* self, void* signal);
void q_object_disconnect_notify(void* self, void* signal);
void q_object_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_object_qbase_disconnect_notify(void* self, void* signal);
const char* q_object_tr2(const char* s, const char* c);
const char* q_object_tr3(const char* s, const char* c, int n);
int32_t q_object_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_object_destroyed1(void* self, void* param1);
void q_object_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_object_delete(void* self);

QSignalBlocker* q_signalblocker_new(void* o);
QSignalBlocker* q_signalblocker_new2(void* o);
void q_signalblocker_reblock(void* self);
void q_signalblocker_unblock(void* self);
void q_signalblocker_delete(void* self);

/// https://doc.qt.io/qt-6/qobject.html#types

typedef enum {
    QOBJECTDATA__CHECKFORPARENTCHILDLOOPSWARNDEPTH = 4096
} QObjectData__;

#endif
