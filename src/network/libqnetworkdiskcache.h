#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKDISKCACHE_H
#define SRC_NETWORKQT6C_LIBQNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractnetworkcache.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QNetworkDiskCache* q_networkdiskcache_new();
QNetworkDiskCache* q_networkdiskcache_new2(void* parent);
QMetaObject* q_networkdiskcache_meta_object(void* self);
void* q_networkdiskcache_metacast(void* self, const char* param1);
int32_t q_networkdiskcache_metacall(void* self, int64_t param1, int param2, void* param3);
void q_networkdiskcache_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_networkdiskcache_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_networkdiskcache_tr(const char* s);
const char* q_networkdiskcache_cache_directory(void* self);
void q_networkdiskcache_set_cache_directory(void* self, const char* cacheDir);
long long q_networkdiskcache_maximum_cache_size(void* self);
void q_networkdiskcache_set_maximum_cache_size(void* self, long long size);
long long q_networkdiskcache_cache_size(void* self);
void q_networkdiskcache_on_cache_size(void* self, long long (*slot)());
long long q_networkdiskcache_qbase_cache_size(void* self);
QNetworkCacheMetaData* q_networkdiskcache_meta_data(void* self, void* url);
void q_networkdiskcache_on_meta_data(void* self, QNetworkCacheMetaData* (*slot)(void*, void*));
QNetworkCacheMetaData* q_networkdiskcache_qbase_meta_data(void* self, void* url);
void q_networkdiskcache_update_meta_data(void* self, void* metaData);
void q_networkdiskcache_on_update_meta_data(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_qbase_update_meta_data(void* self, void* metaData);
QIODevice* q_networkdiskcache_data(void* self, void* url);
void q_networkdiskcache_on_data(void* self, QIODevice* (*slot)(void*, void*));
QIODevice* q_networkdiskcache_qbase_data(void* self, void* url);
bool q_networkdiskcache_remove(void* self, void* url);
void q_networkdiskcache_on_remove(void* self, bool (*slot)(void*, void*));
bool q_networkdiskcache_qbase_remove(void* self, void* url);
QIODevice* q_networkdiskcache_prepare(void* self, void* metaData);
void q_networkdiskcache_on_prepare(void* self, QIODevice* (*slot)(void*, void*));
QIODevice* q_networkdiskcache_qbase_prepare(void* self, void* metaData);
void q_networkdiskcache_insert(void* self, void* device);
void q_networkdiskcache_on_insert(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_qbase_insert(void* self, void* device);
QNetworkCacheMetaData* q_networkdiskcache_file_meta_data(void* self, const char* fileName);
void q_networkdiskcache_clear(void* self);
void q_networkdiskcache_on_clear(void* self, void (*slot)());
void q_networkdiskcache_qbase_clear(void* self);
long long q_networkdiskcache_expire(void* self);
void q_networkdiskcache_on_expire(void* self, long long (*slot)());
long long q_networkdiskcache_qbase_expire(void* self);
const char* q_networkdiskcache_tr2(const char* s, const char* c);
const char* q_networkdiskcache_tr3(const char* s, const char* c, int n);
const char* q_networkdiskcache_object_name(void* self);
void q_networkdiskcache_set_object_name(void* self, const char* name);
bool q_networkdiskcache_is_widget_type(void* self);
bool q_networkdiskcache_is_window_type(void* self);
bool q_networkdiskcache_is_quick_item_type(void* self);
bool q_networkdiskcache_signals_blocked(void* self);
bool q_networkdiskcache_block_signals(void* self, bool b);
QThread* q_networkdiskcache_thread(void* self);
void q_networkdiskcache_move_to_thread(void* self, void* thread);
int32_t q_networkdiskcache_start_timer(void* self, int interval);
void q_networkdiskcache_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_networkdiskcache_children(void* self);
void q_networkdiskcache_set_parent(void* self, void* parent);
void q_networkdiskcache_install_event_filter(void* self, void* filterObj);
void q_networkdiskcache_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_networkdiskcache_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_networkdiskcache_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_networkdiskcache_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_networkdiskcache_disconnect_with_q_meta_object_connection(void* param1);
void q_networkdiskcache_dump_object_tree(void* self);
void q_networkdiskcache_dump_object_info(void* self);
bool q_networkdiskcache_set_property(void* self, const char* name, void* value);
QVariant* q_networkdiskcache_property(void* self, const char* name);
const char** q_networkdiskcache_dynamic_property_names(void* self);
QBindingStorage* q_networkdiskcache_binding_storage(void* self);
QBindingStorage* q_networkdiskcache_binding_storage2(void* self);
void q_networkdiskcache_destroyed(void* self);
void q_networkdiskcache_on_destroyed(void* self, void (*slot)(void*));
QObject* q_networkdiskcache_parent(void* self);
bool q_networkdiskcache_inherits(void* self, const char* classname);
void q_networkdiskcache_delete_later(void* self);
int32_t q_networkdiskcache_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_networkdiskcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_networkdiskcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_networkdiskcache_destroyed1(void* self, void* param1);
void q_networkdiskcache_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_networkdiskcache_event(void* self, void* event);
bool q_networkdiskcache_qbase_event(void* self, void* event);
void q_networkdiskcache_on_event(void* self, bool (*slot)(void*, void*));
bool q_networkdiskcache_event_filter(void* self, void* watched, void* event);
bool q_networkdiskcache_qbase_event_filter(void* self, void* watched, void* event);
void q_networkdiskcache_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_networkdiskcache_timer_event(void* self, void* event);
void q_networkdiskcache_qbase_timer_event(void* self, void* event);
void q_networkdiskcache_on_timer_event(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_child_event(void* self, void* event);
void q_networkdiskcache_qbase_child_event(void* self, void* event);
void q_networkdiskcache_on_child_event(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_custom_event(void* self, void* event);
void q_networkdiskcache_qbase_custom_event(void* self, void* event);
void q_networkdiskcache_on_custom_event(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_connect_notify(void* self, void* signal);
void q_networkdiskcache_qbase_connect_notify(void* self, void* signal);
void q_networkdiskcache_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_networkdiskcache_disconnect_notify(void* self, void* signal);
void q_networkdiskcache_qbase_disconnect_notify(void* self, void* signal);
void q_networkdiskcache_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_networkdiskcache_sender(void* self);
QObject* q_networkdiskcache_qbase_sender(void* self);
void q_networkdiskcache_on_sender(void* self, QObject* (*slot)());
int32_t q_networkdiskcache_sender_signal_index(void* self);
int32_t q_networkdiskcache_qbase_sender_signal_index(void* self);
void q_networkdiskcache_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_networkdiskcache_receivers(void* self, const char* signal);
int32_t q_networkdiskcache_qbase_receivers(void* self, const char* signal);
void q_networkdiskcache_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_networkdiskcache_is_signal_connected(void* self, void* signal);
bool q_networkdiskcache_qbase_is_signal_connected(void* self, void* signal);
void q_networkdiskcache_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_networkdiskcache_delete(void* self);

#endif
