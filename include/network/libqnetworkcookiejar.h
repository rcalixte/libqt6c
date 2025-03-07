#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKCOOKIEJAR_H
#define SRC_NETWORKQT6C_LIBQNETWORKCOOKIEJAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "libqnetworkcookie.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QNetworkCookieJar* q_networkcookiejar_new();
QNetworkCookieJar* q_networkcookiejar_new2(void* parent);
QMetaObject* q_networkcookiejar_meta_object(void* self);
void* q_networkcookiejar_metacast(void* self, const char* param1);
int32_t q_networkcookiejar_metacall(void* self, int64_t param1, int param2, void* param3);
void q_networkcookiejar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_networkcookiejar_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_networkcookiejar_tr(const char* s);
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_cookies_for_url(void* self, void* url);
void q_networkcookiejar_on_cookies_for_url(void* self, libqt_list /* of QNetworkCookie* */ (*slot)(void*, void*));
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_cookies_for_url(void* self, void* url);
bool q_networkcookiejar_set_cookies_from_url(void* self, void* cookieList[], void* url);
void q_networkcookiejar_on_set_cookies_from_url(void* self, bool (*slot)(void*, void*, void*));
bool q_networkcookiejar_qbase_set_cookies_from_url(void* self, void* cookieList[], void* url);
bool q_networkcookiejar_insert_cookie(void* self, void* cookie);
void q_networkcookiejar_on_insert_cookie(void* self, bool (*slot)(void*, void*));
bool q_networkcookiejar_qbase_insert_cookie(void* self, void* cookie);
bool q_networkcookiejar_update_cookie(void* self, void* cookie);
void q_networkcookiejar_on_update_cookie(void* self, bool (*slot)(void*, void*));
bool q_networkcookiejar_qbase_update_cookie(void* self, void* cookie);
bool q_networkcookiejar_delete_cookie(void* self, void* cookie);
void q_networkcookiejar_on_delete_cookie(void* self, bool (*slot)(void*, void*));
bool q_networkcookiejar_qbase_delete_cookie(void* self, void* cookie);
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_all_cookies(void* self);
void q_networkcookiejar_on_all_cookies(void* self, libqt_list /* of QNetworkCookie* */ (*slot)());
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_all_cookies(void* self);
void q_networkcookiejar_set_all_cookies(void* self, void* cookieList[]);
void q_networkcookiejar_on_set_all_cookies(void* self, void (*slot)(void*, void*));
void q_networkcookiejar_qbase_set_all_cookies(void* self, void* cookieList[]);
bool q_networkcookiejar_validate_cookie(void* self, void* cookie, void* url);
void q_networkcookiejar_on_validate_cookie(void* self, bool (*slot)(void*, void*, void*));
bool q_networkcookiejar_qbase_validate_cookie(void* self, void* cookie, void* url);
const char* q_networkcookiejar_tr2(const char* s, const char* c);
const char* q_networkcookiejar_tr3(const char* s, const char* c, int n);
const char* q_networkcookiejar_object_name(void* self);
void q_networkcookiejar_set_object_name(void* self, const char* name);
bool q_networkcookiejar_is_widget_type(void* self);
bool q_networkcookiejar_is_window_type(void* self);
bool q_networkcookiejar_is_quick_item_type(void* self);
bool q_networkcookiejar_signals_blocked(void* self);
bool q_networkcookiejar_block_signals(void* self, bool b);
QThread* q_networkcookiejar_thread(void* self);
void q_networkcookiejar_move_to_thread(void* self, void* thread);
int32_t q_networkcookiejar_start_timer(void* self, int interval);
void q_networkcookiejar_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_networkcookiejar_children(void* self);
void q_networkcookiejar_set_parent(void* self, void* parent);
void q_networkcookiejar_install_event_filter(void* self, void* filterObj);
void q_networkcookiejar_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_networkcookiejar_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_networkcookiejar_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_networkcookiejar_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_networkcookiejar_disconnect_with_q_meta_object_connection(void* param1);
void q_networkcookiejar_dump_object_tree(void* self);
void q_networkcookiejar_dump_object_info(void* self);
bool q_networkcookiejar_set_property(void* self, const char* name, void* value);
QVariant* q_networkcookiejar_property(void* self, const char* name);
const char** q_networkcookiejar_dynamic_property_names(void* self);
QBindingStorage* q_networkcookiejar_binding_storage(void* self);
QBindingStorage* q_networkcookiejar_binding_storage2(void* self);
void q_networkcookiejar_destroyed(void* self);
void q_networkcookiejar_on_destroyed(void* self, void (*slot)(void*));
QObject* q_networkcookiejar_parent(void* self);
bool q_networkcookiejar_inherits(void* self, const char* classname);
void q_networkcookiejar_delete_later(void* self);
int32_t q_networkcookiejar_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_networkcookiejar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_networkcookiejar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_networkcookiejar_destroyed1(void* self, void* param1);
void q_networkcookiejar_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_networkcookiejar_event(void* self, void* event);
bool q_networkcookiejar_qbase_event(void* self, void* event);
void q_networkcookiejar_on_event(void* self, bool (*slot)(void*, void*));
bool q_networkcookiejar_event_filter(void* self, void* watched, void* event);
bool q_networkcookiejar_qbase_event_filter(void* self, void* watched, void* event);
void q_networkcookiejar_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_networkcookiejar_timer_event(void* self, void* event);
void q_networkcookiejar_qbase_timer_event(void* self, void* event);
void q_networkcookiejar_on_timer_event(void* self, void (*slot)(void*, void*));
void q_networkcookiejar_child_event(void* self, void* event);
void q_networkcookiejar_qbase_child_event(void* self, void* event);
void q_networkcookiejar_on_child_event(void* self, void (*slot)(void*, void*));
void q_networkcookiejar_custom_event(void* self, void* event);
void q_networkcookiejar_qbase_custom_event(void* self, void* event);
void q_networkcookiejar_on_custom_event(void* self, void (*slot)(void*, void*));
void q_networkcookiejar_connect_notify(void* self, void* signal);
void q_networkcookiejar_qbase_connect_notify(void* self, void* signal);
void q_networkcookiejar_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_networkcookiejar_disconnect_notify(void* self, void* signal);
void q_networkcookiejar_qbase_disconnect_notify(void* self, void* signal);
void q_networkcookiejar_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_networkcookiejar_sender(void* self);
QObject* q_networkcookiejar_qbase_sender(void* self);
void q_networkcookiejar_on_sender(void* self, QObject* (*slot)());
int32_t q_networkcookiejar_sender_signal_index(void* self);
int32_t q_networkcookiejar_qbase_sender_signal_index(void* self);
void q_networkcookiejar_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_networkcookiejar_receivers(void* self, const char* signal);
int32_t q_networkcookiejar_qbase_receivers(void* self, const char* signal);
void q_networkcookiejar_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_networkcookiejar_is_signal_connected(void* self, void* signal);
bool q_networkcookiejar_qbase_is_signal_connected(void* self, void* signal);
void q_networkcookiejar_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_networkcookiejar_delete(void* self);

#endif
