#pragma once
#ifndef SRCQT6C_LIBQOFFSCREENSURFACE_H
#define SRCQT6C_LIBQOFFSCREENSURFACE_H

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
#include "libqscreen.h"
#include "libqsize.h"
#include <string.h>
#include "libqsurface.h"
#include "libqsurfaceformat.h"
#include "libqthread.h"
#include "libqvariant.h"

QOffscreenSurface* q_offscreensurface_new();
QOffscreenSurface* q_offscreensurface_new2(void* screen);
QOffscreenSurface* q_offscreensurface_new3(void* screen, void* parent);
QMetaObject* q_offscreensurface_meta_object(void* self);
void* q_offscreensurface_metacast(void* self, const char* param1);
int32_t q_offscreensurface_metacall(void* self, int64_t param1, int param2, void* param3);
void q_offscreensurface_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_offscreensurface_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_offscreensurface_tr(const char* s);
int64_t q_offscreensurface_surface_type(void* self);
void q_offscreensurface_on_surface_type(void* self, int64_t (*slot)());
int64_t q_offscreensurface_qbase_surface_type(void* self);
void q_offscreensurface_create(void* self);
void q_offscreensurface_destroy(void* self);
bool q_offscreensurface_is_valid(void* self);
void q_offscreensurface_set_format(void* self, void* format);
QSurfaceFormat* q_offscreensurface_format(void* self);
void q_offscreensurface_on_format(void* self, QSurfaceFormat* (*slot)());
QSurfaceFormat* q_offscreensurface_qbase_format(void* self);
QSurfaceFormat* q_offscreensurface_requested_format(void* self);
QSize* q_offscreensurface_size(void* self);
void q_offscreensurface_on_size(void* self, QSize* (*slot)());
QSize* q_offscreensurface_qbase_size(void* self);
QScreen* q_offscreensurface_screen(void* self);
void q_offscreensurface_set_screen(void* self, void* screen);
void* q_offscreensurface_resolve_interface(void* self, const char* name, int revision);
void q_offscreensurface_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
void* q_offscreensurface_qbase_resolve_interface(void* self, const char* name, int revision);
void q_offscreensurface_screen_changed(void* self, void* screen);
void q_offscreensurface_on_screen_changed(void* self, void (*slot)(void*, void*));
const char* q_offscreensurface_tr2(const char* s, const char* c);
const char* q_offscreensurface_tr3(const char* s, const char* c, int n);
const char* q_offscreensurface_object_name(void* self);
void q_offscreensurface_set_object_name(void* self, const char* name);
bool q_offscreensurface_is_widget_type(void* self);
bool q_offscreensurface_is_window_type(void* self);
bool q_offscreensurface_is_quick_item_type(void* self);
bool q_offscreensurface_signals_blocked(void* self);
bool q_offscreensurface_block_signals(void* self, bool b);
QThread* q_offscreensurface_thread(void* self);
void q_offscreensurface_move_to_thread(void* self, void* thread);
int32_t q_offscreensurface_start_timer(void* self, int interval);
void q_offscreensurface_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_offscreensurface_children(void* self);
void q_offscreensurface_set_parent(void* self, void* parent);
void q_offscreensurface_install_event_filter(void* self, void* filterObj);
void q_offscreensurface_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_offscreensurface_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_offscreensurface_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_offscreensurface_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_offscreensurface_disconnect_with_q_meta_object_connection(void* param1);
void q_offscreensurface_dump_object_tree(void* self);
void q_offscreensurface_dump_object_info(void* self);
bool q_offscreensurface_set_property(void* self, const char* name, void* value);
QVariant* q_offscreensurface_property(void* self, const char* name);
const char** q_offscreensurface_dynamic_property_names(void* self);
QBindingStorage* q_offscreensurface_binding_storage(void* self);
QBindingStorage* q_offscreensurface_binding_storage2(void* self);
void q_offscreensurface_destroyed(void* self);
void q_offscreensurface_on_destroyed(void* self, void (*slot)(void*));
QObject* q_offscreensurface_parent(void* self);
bool q_offscreensurface_inherits(void* self, const char* classname);
void q_offscreensurface_delete_later(void* self);
int32_t q_offscreensurface_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_offscreensurface_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_offscreensurface_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_offscreensurface_destroyed1(void* self, void* param1);
void q_offscreensurface_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_offscreensurface_surface_class(void* self);
bool q_offscreensurface_supports_open_g_l(void* self);
bool q_offscreensurface_event(void* self, void* event);
bool q_offscreensurface_qbase_event(void* self, void* event);
void q_offscreensurface_on_event(void* self, bool (*slot)(void*, void*));
bool q_offscreensurface_event_filter(void* self, void* watched, void* event);
bool q_offscreensurface_qbase_event_filter(void* self, void* watched, void* event);
void q_offscreensurface_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_offscreensurface_timer_event(void* self, void* event);
void q_offscreensurface_qbase_timer_event(void* self, void* event);
void q_offscreensurface_on_timer_event(void* self, void (*slot)(void*, void*));
void q_offscreensurface_child_event(void* self, void* event);
void q_offscreensurface_qbase_child_event(void* self, void* event);
void q_offscreensurface_on_child_event(void* self, void (*slot)(void*, void*));
void q_offscreensurface_custom_event(void* self, void* event);
void q_offscreensurface_qbase_custom_event(void* self, void* event);
void q_offscreensurface_on_custom_event(void* self, void (*slot)(void*, void*));
void q_offscreensurface_connect_notify(void* self, void* signal);
void q_offscreensurface_qbase_connect_notify(void* self, void* signal);
void q_offscreensurface_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_offscreensurface_disconnect_notify(void* self, void* signal);
void q_offscreensurface_qbase_disconnect_notify(void* self, void* signal);
void q_offscreensurface_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_offscreensurface_sender(void* self);
QObject* q_offscreensurface_qbase_sender(void* self);
void q_offscreensurface_on_sender(void* self, QObject* (*slot)());
int32_t q_offscreensurface_sender_signal_index(void* self);
int32_t q_offscreensurface_qbase_sender_signal_index(void* self);
void q_offscreensurface_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_offscreensurface_receivers(void* self, const char* signal);
int32_t q_offscreensurface_qbase_receivers(void* self, const char* signal);
void q_offscreensurface_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_offscreensurface_is_signal_connected(void* self, void* signal);
bool q_offscreensurface_qbase_is_signal_connected(void* self, void* signal);
void q_offscreensurface_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_offscreensurface_delete(void* self);

#endif
