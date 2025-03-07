#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHTTPMULTIPART_H
#define SRC_NETWORKQT6C_LIBQHTTPMULTIPART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QHttpPart* q_httppart_new();
QHttpPart* q_httppart_new2(void* other);
void q_httppart_operator_assign(void* self, void* other);
void q_httppart_swap(void* self, void* other);
bool q_httppart_operator_equal(void* self, void* other);
bool q_httppart_operator_not_equal(void* self, void* other);
void q_httppart_set_header(void* self, int64_t header, void* value);
void q_httppart_set_raw_header(void* self, const char* headerName, const char* headerValue);
void q_httppart_set_body(void* self, const char* body);
void q_httppart_set_body_device(void* self, void* device);
void q_httppart_delete(void* self);

QHttpMultiPart* q_httpmultipart_new();
QHttpMultiPart* q_httpmultipart_new2(int64_t contentType);
QHttpMultiPart* q_httpmultipart_new3(void* parent);
QHttpMultiPart* q_httpmultipart_new4(int64_t contentType, void* parent);
QMetaObject* q_httpmultipart_meta_object(void* self);
void* q_httpmultipart_metacast(void* self, const char* param1);
int32_t q_httpmultipart_metacall(void* self, int64_t param1, int param2, void* param3);
void q_httpmultipart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_httpmultipart_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_httpmultipart_tr(const char* s);
void q_httpmultipart_append(void* self, void* httpPart);
void q_httpmultipart_set_content_type(void* self, int64_t contentType);
char* q_httpmultipart_boundary(void* self);
void q_httpmultipart_set_boundary(void* self, const char* boundary);
const char* q_httpmultipart_tr2(const char* s, const char* c);
const char* q_httpmultipart_tr3(const char* s, const char* c, int n);
const char* q_httpmultipart_object_name(void* self);
void q_httpmultipart_set_object_name(void* self, const char* name);
bool q_httpmultipart_is_widget_type(void* self);
bool q_httpmultipart_is_window_type(void* self);
bool q_httpmultipart_is_quick_item_type(void* self);
bool q_httpmultipart_signals_blocked(void* self);
bool q_httpmultipart_block_signals(void* self, bool b);
QThread* q_httpmultipart_thread(void* self);
void q_httpmultipart_move_to_thread(void* self, void* thread);
int32_t q_httpmultipart_start_timer(void* self, int interval);
void q_httpmultipart_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_httpmultipart_children(void* self);
void q_httpmultipart_set_parent(void* self, void* parent);
void q_httpmultipart_install_event_filter(void* self, void* filterObj);
void q_httpmultipart_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_httpmultipart_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_httpmultipart_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_httpmultipart_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_httpmultipart_disconnect_with_q_meta_object_connection(void* param1);
void q_httpmultipart_dump_object_tree(void* self);
void q_httpmultipart_dump_object_info(void* self);
bool q_httpmultipart_set_property(void* self, const char* name, void* value);
QVariant* q_httpmultipart_property(void* self, const char* name);
const char** q_httpmultipart_dynamic_property_names(void* self);
QBindingStorage* q_httpmultipart_binding_storage(void* self);
QBindingStorage* q_httpmultipart_binding_storage2(void* self);
void q_httpmultipart_destroyed(void* self);
void q_httpmultipart_on_destroyed(void* self, void (*slot)(void*));
QObject* q_httpmultipart_parent(void* self);
bool q_httpmultipart_inherits(void* self, const char* classname);
void q_httpmultipart_delete_later(void* self);
int32_t q_httpmultipart_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_httpmultipart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_httpmultipart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_httpmultipart_destroyed1(void* self, void* param1);
void q_httpmultipart_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_httpmultipart_event(void* self, void* event);
bool q_httpmultipart_qbase_event(void* self, void* event);
void q_httpmultipart_on_event(void* self, bool (*slot)(void*, void*));
bool q_httpmultipart_event_filter(void* self, void* watched, void* event);
bool q_httpmultipart_qbase_event_filter(void* self, void* watched, void* event);
void q_httpmultipart_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_httpmultipart_timer_event(void* self, void* event);
void q_httpmultipart_qbase_timer_event(void* self, void* event);
void q_httpmultipart_on_timer_event(void* self, void (*slot)(void*, void*));
void q_httpmultipart_child_event(void* self, void* event);
void q_httpmultipart_qbase_child_event(void* self, void* event);
void q_httpmultipart_on_child_event(void* self, void (*slot)(void*, void*));
void q_httpmultipart_custom_event(void* self, void* event);
void q_httpmultipart_qbase_custom_event(void* self, void* event);
void q_httpmultipart_on_custom_event(void* self, void (*slot)(void*, void*));
void q_httpmultipart_connect_notify(void* self, void* signal);
void q_httpmultipart_qbase_connect_notify(void* self, void* signal);
void q_httpmultipart_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_httpmultipart_disconnect_notify(void* self, void* signal);
void q_httpmultipart_qbase_disconnect_notify(void* self, void* signal);
void q_httpmultipart_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_httpmultipart_sender(void* self);
QObject* q_httpmultipart_qbase_sender(void* self);
void q_httpmultipart_on_sender(void* self, QObject* (*slot)());
int32_t q_httpmultipart_sender_signal_index(void* self);
int32_t q_httpmultipart_qbase_sender_signal_index(void* self);
void q_httpmultipart_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_httpmultipart_receivers(void* self, const char* signal);
int32_t q_httpmultipart_qbase_receivers(void* self, const char* signal);
void q_httpmultipart_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_httpmultipart_is_signal_connected(void* self, void* signal);
bool q_httpmultipart_qbase_is_signal_connected(void* self, void* signal);
void q_httpmultipart_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_httpmultipart_delete(void* self);

/// https://doc.qt.io/qt-6/qhttpmultipart.html#types

typedef enum {
    QHTTPMULTIPART_CONTENTTYPE_MIXEDTYPE = 0,
    QHTTPMULTIPART_CONTENTTYPE_RELATEDTYPE = 1,
    QHTTPMULTIPART_CONTENTTYPE_FORMDATATYPE = 2,
    QHTTPMULTIPART_CONTENTTYPE_ALTERNATIVETYPE = 3
} QHttpMultiPart__ContentType;

#endif
