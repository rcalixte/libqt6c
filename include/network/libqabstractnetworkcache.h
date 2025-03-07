#pragma once
#ifndef SRC_NETWORKQT6C_LIBQABSTRACTNETWORKCACHE_H
#define SRC_NETWORKQT6C_LIBQABSTRACTNETWORKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqdatetime.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QNetworkCacheMetaData* q_networkcachemetadata_new();
QNetworkCacheMetaData* q_networkcachemetadata_new2(void* other);
void q_networkcachemetadata_operator_assign(void* self, void* other);
void q_networkcachemetadata_swap(void* self, void* other);
bool q_networkcachemetadata_operator_equal(void* self, void* other);
bool q_networkcachemetadata_operator_not_equal(void* self, void* other);
bool q_networkcachemetadata_is_valid(void* self);
QUrl* q_networkcachemetadata_url(void* self);
void q_networkcachemetadata_set_url(void* self, void* url);
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkcachemetadata_raw_headers(void* self);
void q_networkcachemetadata_set_raw_headers(void* self, libqt_list /* of libqt_pair  tuple of char* and char*  */ headers);
QDateTime* q_networkcachemetadata_last_modified(void* self);
void q_networkcachemetadata_set_last_modified(void* self, void* dateTime);
QDateTime* q_networkcachemetadata_expiration_date(void* self);
void q_networkcachemetadata_set_expiration_date(void* self, void* dateTime);
bool q_networkcachemetadata_save_to_disk(void* self);
void q_networkcachemetadata_set_save_to_disk(void* self, bool allow);
libqt_map /* of int64_t to QVariant* */ q_networkcachemetadata_attributes(void* self);
void q_networkcachemetadata_set_attributes(void* self, libqt_map /* of int64_t to QVariant* */ attributes);
void q_networkcachemetadata_delete(void* self);

QMetaObject* q_abstractnetworkcache_meta_object(void* self);
void* q_abstractnetworkcache_metacast(void* self, const char* param1);
int32_t q_abstractnetworkcache_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractnetworkcache_tr(const char* s);
QNetworkCacheMetaData* q_abstractnetworkcache_meta_data(void* self, void* url);
void q_abstractnetworkcache_update_meta_data(void* self, void* metaData);
QIODevice* q_abstractnetworkcache_data(void* self, void* url);
bool q_abstractnetworkcache_remove(void* self, void* url);
long long q_abstractnetworkcache_cache_size(void* self);
QIODevice* q_abstractnetworkcache_prepare(void* self, void* metaData);
void q_abstractnetworkcache_insert(void* self, void* device);
void q_abstractnetworkcache_clear(void* self);
const char* q_abstractnetworkcache_tr2(const char* s, const char* c);
const char* q_abstractnetworkcache_tr3(const char* s, const char* c, int n);
bool q_abstractnetworkcache_event(void* self, void* event);
bool q_abstractnetworkcache_event_filter(void* self, void* watched, void* event);
const char* q_abstractnetworkcache_object_name(void* self);
void q_abstractnetworkcache_set_object_name(void* self, const char* name);
bool q_abstractnetworkcache_is_widget_type(void* self);
bool q_abstractnetworkcache_is_window_type(void* self);
bool q_abstractnetworkcache_is_quick_item_type(void* self);
bool q_abstractnetworkcache_signals_blocked(void* self);
bool q_abstractnetworkcache_block_signals(void* self, bool b);
QThread* q_abstractnetworkcache_thread(void* self);
void q_abstractnetworkcache_move_to_thread(void* self, void* thread);
int32_t q_abstractnetworkcache_start_timer(void* self, int interval);
void q_abstractnetworkcache_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractnetworkcache_children(void* self);
void q_abstractnetworkcache_set_parent(void* self, void* parent);
void q_abstractnetworkcache_install_event_filter(void* self, void* filterObj);
void q_abstractnetworkcache_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractnetworkcache_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractnetworkcache_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractnetworkcache_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractnetworkcache_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractnetworkcache_dump_object_tree(void* self);
void q_abstractnetworkcache_dump_object_info(void* self);
bool q_abstractnetworkcache_set_property(void* self, const char* name, void* value);
QVariant* q_abstractnetworkcache_property(void* self, const char* name);
const char** q_abstractnetworkcache_dynamic_property_names(void* self);
QBindingStorage* q_abstractnetworkcache_binding_storage(void* self);
QBindingStorage* q_abstractnetworkcache_binding_storage2(void* self);
void q_abstractnetworkcache_destroyed(void* self);
void q_abstractnetworkcache_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractnetworkcache_parent(void* self);
bool q_abstractnetworkcache_inherits(void* self, const char* classname);
void q_abstractnetworkcache_delete_later(void* self);
int32_t q_abstractnetworkcache_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractnetworkcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractnetworkcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractnetworkcache_destroyed1(void* self, void* param1);
void q_abstractnetworkcache_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_abstractnetworkcache_delete(void* self);

#endif
