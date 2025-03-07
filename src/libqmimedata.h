#pragma once
#ifndef SRCQT6C_LIBQMIMEDATA_H
#define SRCQT6C_LIBQMIMEDATA_H

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
#include "libqmetatype.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqurl.h"
#include "libqvariant.h"

QMimeData* q_mimedata_new();
QMetaObject* q_mimedata_meta_object(void* self);
void* q_mimedata_metacast(void* self, const char* param1);
int32_t q_mimedata_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mimedata_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mimedata_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mimedata_tr(const char* s);
libqt_list /* of QUrl* */ q_mimedata_urls(void* self);
void q_mimedata_set_urls(void* self, void* urls[]);
bool q_mimedata_has_urls(void* self);
const char* q_mimedata_text(void* self);
void q_mimedata_set_text(void* self, const char* text);
bool q_mimedata_has_text(void* self);
const char* q_mimedata_html(void* self);
void q_mimedata_set_html(void* self, const char* html);
bool q_mimedata_has_html(void* self);
QVariant* q_mimedata_image_data(void* self);
void q_mimedata_set_image_data(void* self, void* image);
bool q_mimedata_has_image(void* self);
QVariant* q_mimedata_color_data(void* self);
void q_mimedata_set_color_data(void* self, void* color);
bool q_mimedata_has_color(void* self);
char* q_mimedata_data(void* self, const char* mimetype);
void q_mimedata_set_data(void* self, const char* mimetype, const char* data);
void q_mimedata_remove_format(void* self, const char* mimetype);
bool q_mimedata_has_format(void* self, const char* mimetype);
void q_mimedata_on_has_format(void* self, bool (*slot)(void*, const char*));
bool q_mimedata_qbase_has_format(void* self, const char* mimetype);
const char** q_mimedata_formats(void* self);
void q_mimedata_on_formats(void* self, const char** (*slot)());
const char** q_mimedata_qbase_formats(void* self);
void q_mimedata_clear(void* self);
QVariant* q_mimedata_retrieve_data(void* self, const char* mimetype, void* preferredType);
void q_mimedata_on_retrieve_data(void* self, QVariant* (*slot)(void*, const char*, void*));
QVariant* q_mimedata_qbase_retrieve_data(void* self, const char* mimetype, void* preferredType);
const char* q_mimedata_tr2(const char* s, const char* c);
const char* q_mimedata_tr3(const char* s, const char* c, int n);
const char* q_mimedata_object_name(void* self);
void q_mimedata_set_object_name(void* self, const char* name);
bool q_mimedata_is_widget_type(void* self);
bool q_mimedata_is_window_type(void* self);
bool q_mimedata_is_quick_item_type(void* self);
bool q_mimedata_signals_blocked(void* self);
bool q_mimedata_block_signals(void* self, bool b);
QThread* q_mimedata_thread(void* self);
void q_mimedata_move_to_thread(void* self, void* thread);
int32_t q_mimedata_start_timer(void* self, int interval);
void q_mimedata_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mimedata_children(void* self);
void q_mimedata_set_parent(void* self, void* parent);
void q_mimedata_install_event_filter(void* self, void* filterObj);
void q_mimedata_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mimedata_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mimedata_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mimedata_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mimedata_disconnect_with_q_meta_object_connection(void* param1);
void q_mimedata_dump_object_tree(void* self);
void q_mimedata_dump_object_info(void* self);
bool q_mimedata_set_property(void* self, const char* name, void* value);
QVariant* q_mimedata_property(void* self, const char* name);
const char** q_mimedata_dynamic_property_names(void* self);
QBindingStorage* q_mimedata_binding_storage(void* self);
QBindingStorage* q_mimedata_binding_storage2(void* self);
void q_mimedata_destroyed(void* self);
void q_mimedata_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mimedata_parent(void* self);
bool q_mimedata_inherits(void* self, const char* classname);
void q_mimedata_delete_later(void* self);
int32_t q_mimedata_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mimedata_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mimedata_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mimedata_destroyed1(void* self, void* param1);
void q_mimedata_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mimedata_event(void* self, void* event);
bool q_mimedata_qbase_event(void* self, void* event);
void q_mimedata_on_event(void* self, bool (*slot)(void*, void*));
bool q_mimedata_event_filter(void* self, void* watched, void* event);
bool q_mimedata_qbase_event_filter(void* self, void* watched, void* event);
void q_mimedata_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mimedata_timer_event(void* self, void* event);
void q_mimedata_qbase_timer_event(void* self, void* event);
void q_mimedata_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mimedata_child_event(void* self, void* event);
void q_mimedata_qbase_child_event(void* self, void* event);
void q_mimedata_on_child_event(void* self, void (*slot)(void*, void*));
void q_mimedata_custom_event(void* self, void* event);
void q_mimedata_qbase_custom_event(void* self, void* event);
void q_mimedata_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mimedata_connect_notify(void* self, void* signal);
void q_mimedata_qbase_connect_notify(void* self, void* signal);
void q_mimedata_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mimedata_disconnect_notify(void* self, void* signal);
void q_mimedata_qbase_disconnect_notify(void* self, void* signal);
void q_mimedata_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_mimedata_sender(void* self);
QObject* q_mimedata_qbase_sender(void* self);
void q_mimedata_on_sender(void* self, QObject* (*slot)());
int32_t q_mimedata_sender_signal_index(void* self);
int32_t q_mimedata_qbase_sender_signal_index(void* self);
void q_mimedata_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mimedata_receivers(void* self, const char* signal);
int32_t q_mimedata_qbase_receivers(void* self, const char* signal);
void q_mimedata_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mimedata_is_signal_connected(void* self, void* signal);
bool q_mimedata_qbase_is_signal_connected(void* self, void* signal);
void q_mimedata_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_mimedata_delete(void* self);

#endif
