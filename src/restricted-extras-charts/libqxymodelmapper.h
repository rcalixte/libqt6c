#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxyseries.h"

QMetaObject* q_xymodelmapper_meta_object(void* self);
void* q_xymodelmapper_metacast(void* self, const char* param1);
int32_t q_xymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_xymodelmapper_tr(const char* s);
const char* q_xymodelmapper_tr2(const char* s, const char* c);
const char* q_xymodelmapper_tr3(const char* s, const char* c, int n);
bool q_xymodelmapper_event(void* self, void* event);
bool q_xymodelmapper_event_filter(void* self, void* watched, void* event);
const char* q_xymodelmapper_object_name(void* self);
void q_xymodelmapper_set_object_name(void* self, const char* name);
bool q_xymodelmapper_is_widget_type(void* self);
bool q_xymodelmapper_is_window_type(void* self);
bool q_xymodelmapper_is_quick_item_type(void* self);
bool q_xymodelmapper_signals_blocked(void* self);
bool q_xymodelmapper_block_signals(void* self, bool b);
QThread* q_xymodelmapper_thread(void* self);
void q_xymodelmapper_move_to_thread(void* self, void* thread);
int32_t q_xymodelmapper_start_timer(void* self, int interval);
void q_xymodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_xymodelmapper_children(void* self);
void q_xymodelmapper_set_parent(void* self, void* parent);
void q_xymodelmapper_install_event_filter(void* self, void* filterObj);
void q_xymodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_xymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_xymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_xymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_xymodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_xymodelmapper_dump_object_tree(void* self);
void q_xymodelmapper_dump_object_info(void* self);
bool q_xymodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_xymodelmapper_property(void* self, const char* name);
const char** q_xymodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_xymodelmapper_binding_storage(void* self);
QBindingStorage* q_xymodelmapper_binding_storage2(void* self);
void q_xymodelmapper_destroyed(void* self);
void q_xymodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_xymodelmapper_parent(void* self);
bool q_xymodelmapper_inherits(void* self, const char* classname);
void q_xymodelmapper_delete_later(void* self);
int32_t q_xymodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_xymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_xymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_xymodelmapper_destroyed1(void* self, void* param1);
void q_xymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_xymodelmapper_delete(void* self);

#endif
