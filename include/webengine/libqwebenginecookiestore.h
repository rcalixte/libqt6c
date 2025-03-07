#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECOOKIESTORE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECOOKIESTORE_H

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
#include "../network/libqnetworkcookie.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_webenginecookiestore_meta_object(void* self);
void* q_webenginecookiestore_metacast(void* self, const char* param1);
int32_t q_webenginecookiestore_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginecookiestore_tr(const char* s);
void q_webenginecookiestore_set_cookie(void* self, void* cookie);
void q_webenginecookiestore_delete_cookie(void* self, void* cookie);
void q_webenginecookiestore_delete_session_cookies(void* self);
void q_webenginecookiestore_delete_all_cookies(void* self);
void q_webenginecookiestore_load_all_cookies(void* self);
void q_webenginecookiestore_cookie_added(void* self, void* cookie);
void q_webenginecookiestore_on_cookie_added(void* self, void (*slot)(void*, void*));
void q_webenginecookiestore_cookie_removed(void* self, void* cookie);
void q_webenginecookiestore_on_cookie_removed(void* self, void (*slot)(void*, void*));
const char* q_webenginecookiestore_tr2(const char* s, const char* c);
const char* q_webenginecookiestore_tr3(const char* s, const char* c, int n);
void q_webenginecookiestore_set_cookie2(void* self, void* cookie, void* origin);
void q_webenginecookiestore_delete_cookie2(void* self, void* cookie, void* origin);
bool q_webenginecookiestore_event(void* self, void* event);
bool q_webenginecookiestore_event_filter(void* self, void* watched, void* event);
const char* q_webenginecookiestore_object_name(void* self);
void q_webenginecookiestore_set_object_name(void* self, const char* name);
bool q_webenginecookiestore_is_widget_type(void* self);
bool q_webenginecookiestore_is_window_type(void* self);
bool q_webenginecookiestore_is_quick_item_type(void* self);
bool q_webenginecookiestore_signals_blocked(void* self);
bool q_webenginecookiestore_block_signals(void* self, bool b);
QThread* q_webenginecookiestore_thread(void* self);
void q_webenginecookiestore_move_to_thread(void* self, void* thread);
int32_t q_webenginecookiestore_start_timer(void* self, int interval);
void q_webenginecookiestore_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginecookiestore_children(void* self);
void q_webenginecookiestore_set_parent(void* self, void* parent);
void q_webenginecookiestore_install_event_filter(void* self, void* filterObj);
void q_webenginecookiestore_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginecookiestore_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginecookiestore_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginecookiestore_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginecookiestore_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginecookiestore_dump_object_tree(void* self);
void q_webenginecookiestore_dump_object_info(void* self);
bool q_webenginecookiestore_set_property(void* self, const char* name, void* value);
QVariant* q_webenginecookiestore_property(void* self, const char* name);
const char** q_webenginecookiestore_dynamic_property_names(void* self);
QBindingStorage* q_webenginecookiestore_binding_storage(void* self);
QBindingStorage* q_webenginecookiestore_binding_storage2(void* self);
void q_webenginecookiestore_destroyed(void* self);
void q_webenginecookiestore_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginecookiestore_parent(void* self);
bool q_webenginecookiestore_inherits(void* self, const char* classname);
void q_webenginecookiestore_delete_later(void* self);
int32_t q_webenginecookiestore_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginecookiestore_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginecookiestore_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginecookiestore_destroyed1(void* self, void* param1);
void q_webenginecookiestore_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_webenginecookiestore_delete(void* self);

#endif
