#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEMEHANDLER_H

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
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqwebengineurlrequestjob.h"

QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new();
QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new2(void* parent);
QMetaObject* q_webengineurlschemehandler_meta_object(void* self);
void* q_webengineurlschemehandler_metacast(void* self, const char* param1);
int32_t q_webengineurlschemehandler_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webengineurlschemehandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webengineurlschemehandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webengineurlschemehandler_tr(const char* s);
void q_webengineurlschemehandler_request_started(void* self, void* param1);
void q_webengineurlschemehandler_on_request_started(void* self, void (*slot)(void*, void*));
void q_webengineurlschemehandler_qbase_request_started(void* self, void* param1);
const char* q_webengineurlschemehandler_tr2(const char* s, const char* c);
const char* q_webengineurlschemehandler_tr3(const char* s, const char* c, int n);
const char* q_webengineurlschemehandler_object_name(void* self);
void q_webengineurlschemehandler_set_object_name(void* self, const char* name);
bool q_webengineurlschemehandler_is_widget_type(void* self);
bool q_webengineurlschemehandler_is_window_type(void* self);
bool q_webengineurlschemehandler_is_quick_item_type(void* self);
bool q_webengineurlschemehandler_signals_blocked(void* self);
bool q_webengineurlschemehandler_block_signals(void* self, bool b);
QThread* q_webengineurlschemehandler_thread(void* self);
void q_webengineurlschemehandler_move_to_thread(void* self, void* thread);
int32_t q_webengineurlschemehandler_start_timer(void* self, int interval);
void q_webengineurlschemehandler_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webengineurlschemehandler_children(void* self);
void q_webengineurlschemehandler_set_parent(void* self, void* parent);
void q_webengineurlschemehandler_install_event_filter(void* self, void* filterObj);
void q_webengineurlschemehandler_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webengineurlschemehandler_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webengineurlschemehandler_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webengineurlschemehandler_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webengineurlschemehandler_disconnect_with_q_meta_object_connection(void* param1);
void q_webengineurlschemehandler_dump_object_tree(void* self);
void q_webengineurlschemehandler_dump_object_info(void* self);
bool q_webengineurlschemehandler_set_property(void* self, const char* name, void* value);
QVariant* q_webengineurlschemehandler_property(void* self, const char* name);
const char** q_webengineurlschemehandler_dynamic_property_names(void* self);
QBindingStorage* q_webengineurlschemehandler_binding_storage(void* self);
QBindingStorage* q_webengineurlschemehandler_binding_storage2(void* self);
void q_webengineurlschemehandler_destroyed(void* self);
void q_webengineurlschemehandler_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webengineurlschemehandler_parent(void* self);
bool q_webengineurlschemehandler_inherits(void* self, const char* classname);
void q_webengineurlschemehandler_delete_later(void* self);
int32_t q_webengineurlschemehandler_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webengineurlschemehandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webengineurlschemehandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webengineurlschemehandler_destroyed1(void* self, void* param1);
void q_webengineurlschemehandler_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webengineurlschemehandler_event(void* self, void* event);
bool q_webengineurlschemehandler_qbase_event(void* self, void* event);
void q_webengineurlschemehandler_on_event(void* self, bool (*slot)(void*, void*));
bool q_webengineurlschemehandler_event_filter(void* self, void* watched, void* event);
bool q_webengineurlschemehandler_qbase_event_filter(void* self, void* watched, void* event);
void q_webengineurlschemehandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webengineurlschemehandler_timer_event(void* self, void* event);
void q_webengineurlschemehandler_qbase_timer_event(void* self, void* event);
void q_webengineurlschemehandler_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webengineurlschemehandler_child_event(void* self, void* event);
void q_webengineurlschemehandler_qbase_child_event(void* self, void* event);
void q_webengineurlschemehandler_on_child_event(void* self, void (*slot)(void*, void*));
void q_webengineurlschemehandler_custom_event(void* self, void* event);
void q_webengineurlschemehandler_qbase_custom_event(void* self, void* event);
void q_webengineurlschemehandler_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webengineurlschemehandler_connect_notify(void* self, void* signal);
void q_webengineurlschemehandler_qbase_connect_notify(void* self, void* signal);
void q_webengineurlschemehandler_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webengineurlschemehandler_disconnect_notify(void* self, void* signal);
void q_webengineurlschemehandler_qbase_disconnect_notify(void* self, void* signal);
void q_webengineurlschemehandler_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_webengineurlschemehandler_sender(void* self);
QObject* q_webengineurlschemehandler_qbase_sender(void* self);
void q_webengineurlschemehandler_on_sender(void* self, QObject* (*slot)());
int32_t q_webengineurlschemehandler_sender_signal_index(void* self);
int32_t q_webengineurlschemehandler_qbase_sender_signal_index(void* self);
void q_webengineurlschemehandler_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webengineurlschemehandler_receivers(void* self, const char* signal);
int32_t q_webengineurlschemehandler_qbase_receivers(void* self, const char* signal);
void q_webengineurlschemehandler_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webengineurlschemehandler_is_signal_connected(void* self, void* signal);
bool q_webengineurlschemehandler_qbase_is_signal_connected(void* self, void* signal);
void q_webengineurlschemehandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_webengineurlschemehandler_delete(void* self);

#endif
