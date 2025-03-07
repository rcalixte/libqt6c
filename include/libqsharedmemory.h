#pragma once
#ifndef SRCQT6C_LIBQSHAREDMEMORY_H
#define SRCQT6C_LIBQSHAREDMEMORY_H

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

QSharedMemory* q_sharedmemory_new();
QSharedMemory* q_sharedmemory_new2(const char* key);
QSharedMemory* q_sharedmemory_new3(void* parent);
QSharedMemory* q_sharedmemory_new4(const char* key, void* parent);
QMetaObject* q_sharedmemory_meta_object(void* self);
void* q_sharedmemory_metacast(void* self, const char* param1);
int32_t q_sharedmemory_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sharedmemory_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sharedmemory_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sharedmemory_tr(const char* s);
void q_sharedmemory_set_key(void* self, const char* key);
const char* q_sharedmemory_key(void* self);
void q_sharedmemory_set_native_key(void* self, const char* key);
const char* q_sharedmemory_native_key(void* self);
bool q_sharedmemory_create(void* self, int64_t size);
int64_t q_sharedmemory_size(void* self);
bool q_sharedmemory_attach(void* self);
bool q_sharedmemory_is_attached(void* self);
bool q_sharedmemory_detach(void* self);
void* q_sharedmemory_data(void* self);
void* q_sharedmemory_const_data(void* self);
void* q_sharedmemory_data2(void* self);
bool q_sharedmemory_lock(void* self);
bool q_sharedmemory_unlock(void* self);
int64_t q_sharedmemory_error(void* self);
const char* q_sharedmemory_error_string(void* self);
const char* q_sharedmemory_tr2(const char* s, const char* c);
const char* q_sharedmemory_tr3(const char* s, const char* c, int n);
bool q_sharedmemory_create2(void* self, int64_t size, int64_t mode);
bool q_sharedmemory_attach1(void* self, int64_t mode);
const char* q_sharedmemory_object_name(void* self);
void q_sharedmemory_set_object_name(void* self, const char* name);
bool q_sharedmemory_is_widget_type(void* self);
bool q_sharedmemory_is_window_type(void* self);
bool q_sharedmemory_is_quick_item_type(void* self);
bool q_sharedmemory_signals_blocked(void* self);
bool q_sharedmemory_block_signals(void* self, bool b);
QThread* q_sharedmemory_thread(void* self);
void q_sharedmemory_move_to_thread(void* self, void* thread);
int32_t q_sharedmemory_start_timer(void* self, int interval);
void q_sharedmemory_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sharedmemory_children(void* self);
void q_sharedmemory_set_parent(void* self, void* parent);
void q_sharedmemory_install_event_filter(void* self, void* filterObj);
void q_sharedmemory_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sharedmemory_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sharedmemory_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sharedmemory_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sharedmemory_disconnect_with_q_meta_object_connection(void* param1);
void q_sharedmemory_dump_object_tree(void* self);
void q_sharedmemory_dump_object_info(void* self);
bool q_sharedmemory_set_property(void* self, const char* name, void* value);
QVariant* q_sharedmemory_property(void* self, const char* name);
const char** q_sharedmemory_dynamic_property_names(void* self);
QBindingStorage* q_sharedmemory_binding_storage(void* self);
QBindingStorage* q_sharedmemory_binding_storage2(void* self);
void q_sharedmemory_destroyed(void* self);
void q_sharedmemory_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sharedmemory_parent(void* self);
bool q_sharedmemory_inherits(void* self, const char* classname);
void q_sharedmemory_delete_later(void* self);
int32_t q_sharedmemory_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sharedmemory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sharedmemory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sharedmemory_destroyed1(void* self, void* param1);
void q_sharedmemory_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sharedmemory_event(void* self, void* event);
bool q_sharedmemory_qbase_event(void* self, void* event);
void q_sharedmemory_on_event(void* self, bool (*slot)(void*, void*));
bool q_sharedmemory_event_filter(void* self, void* watched, void* event);
bool q_sharedmemory_qbase_event_filter(void* self, void* watched, void* event);
void q_sharedmemory_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sharedmemory_timer_event(void* self, void* event);
void q_sharedmemory_qbase_timer_event(void* self, void* event);
void q_sharedmemory_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sharedmemory_child_event(void* self, void* event);
void q_sharedmemory_qbase_child_event(void* self, void* event);
void q_sharedmemory_on_child_event(void* self, void (*slot)(void*, void*));
void q_sharedmemory_custom_event(void* self, void* event);
void q_sharedmemory_qbase_custom_event(void* self, void* event);
void q_sharedmemory_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sharedmemory_connect_notify(void* self, void* signal);
void q_sharedmemory_qbase_connect_notify(void* self, void* signal);
void q_sharedmemory_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sharedmemory_disconnect_notify(void* self, void* signal);
void q_sharedmemory_qbase_disconnect_notify(void* self, void* signal);
void q_sharedmemory_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_sharedmemory_sender(void* self);
QObject* q_sharedmemory_qbase_sender(void* self);
void q_sharedmemory_on_sender(void* self, QObject* (*slot)());
int32_t q_sharedmemory_sender_signal_index(void* self);
int32_t q_sharedmemory_qbase_sender_signal_index(void* self);
void q_sharedmemory_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sharedmemory_receivers(void* self, const char* signal);
int32_t q_sharedmemory_qbase_receivers(void* self, const char* signal);
void q_sharedmemory_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sharedmemory_is_signal_connected(void* self, void* signal);
bool q_sharedmemory_qbase_is_signal_connected(void* self, void* signal);
void q_sharedmemory_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sharedmemory_delete(void* self);

/// https://doc.qt.io/qt-6/qsharedmemory.html#types

typedef enum {
    QSHAREDMEMORY_ACCESSMODE_READONLY = 0,
    QSHAREDMEMORY_ACCESSMODE_READWRITE = 1
} QSharedMemory__AccessMode;

typedef enum {
    QSHAREDMEMORY_SHAREDMEMORYERROR_NOERROR = 0,
    QSHAREDMEMORY_SHAREDMEMORYERROR_PERMISSIONDENIED = 1,
    QSHAREDMEMORY_SHAREDMEMORYERROR_INVALIDSIZE = 2,
    QSHAREDMEMORY_SHAREDMEMORYERROR_KEYERROR = 3,
    QSHAREDMEMORY_SHAREDMEMORYERROR_ALREADYEXISTS = 4,
    QSHAREDMEMORY_SHAREDMEMORYERROR_NOTFOUND = 5,
    QSHAREDMEMORY_SHAREDMEMORYERROR_LOCKERROR = 6,
    QSHAREDMEMORY_SHAREDMEMORYERROR_OUTOFRESOURCES = 7,
    QSHAREDMEMORY_SHAREDMEMORYERROR_UNKNOWNERROR = 8
} QSharedMemory__SharedMemoryError;

#endif
