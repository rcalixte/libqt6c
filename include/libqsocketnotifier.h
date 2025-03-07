#pragma once
#ifndef SRCQT6C_LIBQSOCKETNOTIFIER_H
#define SRCQT6C_LIBQSOCKETNOTIFIER_H

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

QSocketNotifier* q_socketnotifier_new(int64_t param1);
QSocketNotifier* q_socketnotifier_new2(intptr_t socket, int64_t param2);
QSocketNotifier* q_socketnotifier_new3(int64_t param1, void* parent);
QSocketNotifier* q_socketnotifier_new4(intptr_t socket, int64_t param2, void* parent);
QMetaObject* q_socketnotifier_meta_object(void* self);
void* q_socketnotifier_metacast(void* self, const char* param1);
int32_t q_socketnotifier_metacall(void* self, int64_t param1, int param2, void* param3);
void q_socketnotifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_socketnotifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_socketnotifier_tr(const char* s);
void q_socketnotifier_set_socket(void* self, intptr_t socket);
intptr_t q_socketnotifier_socket(void* self);
int64_t q_socketnotifier_type(void* self);
bool q_socketnotifier_is_valid(void* self);
bool q_socketnotifier_is_enabled(void* self);
void q_socketnotifier_set_enabled(void* self, bool enabled);
bool q_socketnotifier_event(void* self, void* param1);
void q_socketnotifier_on_event(void* self, bool (*slot)(void*, void*));
bool q_socketnotifier_qbase_event(void* self, void* param1);
const char* q_socketnotifier_tr2(const char* s, const char* c);
const char* q_socketnotifier_tr3(const char* s, const char* c, int n);
const char* q_socketnotifier_object_name(void* self);
void q_socketnotifier_set_object_name(void* self, const char* name);
bool q_socketnotifier_is_widget_type(void* self);
bool q_socketnotifier_is_window_type(void* self);
bool q_socketnotifier_is_quick_item_type(void* self);
bool q_socketnotifier_signals_blocked(void* self);
bool q_socketnotifier_block_signals(void* self, bool b);
QThread* q_socketnotifier_thread(void* self);
void q_socketnotifier_move_to_thread(void* self, void* thread);
int32_t q_socketnotifier_start_timer(void* self, int interval);
void q_socketnotifier_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_socketnotifier_children(void* self);
void q_socketnotifier_set_parent(void* self, void* parent);
void q_socketnotifier_install_event_filter(void* self, void* filterObj);
void q_socketnotifier_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_socketnotifier_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_socketnotifier_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_socketnotifier_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_socketnotifier_disconnect_with_q_meta_object_connection(void* param1);
void q_socketnotifier_dump_object_tree(void* self);
void q_socketnotifier_dump_object_info(void* self);
bool q_socketnotifier_set_property(void* self, const char* name, void* value);
QVariant* q_socketnotifier_property(void* self, const char* name);
const char** q_socketnotifier_dynamic_property_names(void* self);
QBindingStorage* q_socketnotifier_binding_storage(void* self);
QBindingStorage* q_socketnotifier_binding_storage2(void* self);
void q_socketnotifier_destroyed(void* self);
void q_socketnotifier_on_destroyed(void* self, void (*slot)(void*));
QObject* q_socketnotifier_parent(void* self);
bool q_socketnotifier_inherits(void* self, const char* classname);
void q_socketnotifier_delete_later(void* self);
int32_t q_socketnotifier_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_socketnotifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_socketnotifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_socketnotifier_destroyed1(void* self, void* param1);
void q_socketnotifier_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_socketnotifier_event_filter(void* self, void* watched, void* event);
bool q_socketnotifier_qbase_event_filter(void* self, void* watched, void* event);
void q_socketnotifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_socketnotifier_timer_event(void* self, void* event);
void q_socketnotifier_qbase_timer_event(void* self, void* event);
void q_socketnotifier_on_timer_event(void* self, void (*slot)(void*, void*));
void q_socketnotifier_child_event(void* self, void* event);
void q_socketnotifier_qbase_child_event(void* self, void* event);
void q_socketnotifier_on_child_event(void* self, void (*slot)(void*, void*));
void q_socketnotifier_custom_event(void* self, void* event);
void q_socketnotifier_qbase_custom_event(void* self, void* event);
void q_socketnotifier_on_custom_event(void* self, void (*slot)(void*, void*));
void q_socketnotifier_connect_notify(void* self, void* signal);
void q_socketnotifier_qbase_connect_notify(void* self, void* signal);
void q_socketnotifier_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_socketnotifier_disconnect_notify(void* self, void* signal);
void q_socketnotifier_qbase_disconnect_notify(void* self, void* signal);
void q_socketnotifier_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_socketnotifier_sender(void* self);
QObject* q_socketnotifier_qbase_sender(void* self);
void q_socketnotifier_on_sender(void* self, QObject* (*slot)());
int32_t q_socketnotifier_sender_signal_index(void* self);
int32_t q_socketnotifier_qbase_sender_signal_index(void* self);
void q_socketnotifier_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_socketnotifier_receivers(void* self, const char* signal);
int32_t q_socketnotifier_qbase_receivers(void* self, const char* signal);
void q_socketnotifier_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_socketnotifier_is_signal_connected(void* self, void* signal);
bool q_socketnotifier_qbase_is_signal_connected(void* self, void* signal);
void q_socketnotifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_socketnotifier_delete(void* self);

QSocketDescriptor* q_socketdescriptor_new(void* other);
QSocketDescriptor* q_socketdescriptor_new2(void* other);
QSocketDescriptor* q_socketdescriptor_new3();
QSocketDescriptor* q_socketdescriptor_new4(void* param1);
QSocketDescriptor* q_socketdescriptor_new5(int descriptor);
void q_socketdescriptor_copy_assign(void* self, void* other);
void q_socketdescriptor_move_assign(void* self, void* other);
int32_t q_socketdescriptor_to_int(void* self);
bool q_socketdescriptor_is_valid(void* self);
void q_socketdescriptor_delete(void* self);

/// https://doc.qt.io/qt-6/qsocketnotifier.html#types

typedef enum {
    QSOCKETNOTIFIER_TYPE_READ = 0,
    QSOCKETNOTIFIER_TYPE_WRITE = 1,
    QSOCKETNOTIFIER_TYPE_EXCEPTION = 2
} QSocketNotifier__Type;

#endif
