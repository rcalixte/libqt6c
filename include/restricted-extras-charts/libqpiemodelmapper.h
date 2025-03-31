#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIEMODELMAPPER_H

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
#include "libqpieseries.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_piemodelmapper_meta_object(void* self);
void* q_piemodelmapper_metacast(void* self, const char* param1);
int32_t q_piemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_piemodelmapper_tr(const char* s);
const char* q_piemodelmapper_tr2(const char* s, const char* c);
const char* q_piemodelmapper_tr3(const char* s, const char* c, int n);
bool q_piemodelmapper_event(void* self, void* event);
bool q_piemodelmapper_event_filter(void* self, void* watched, void* event);
const char* q_piemodelmapper_object_name(void* self);
void q_piemodelmapper_set_object_name(void* self, const char* name);
bool q_piemodelmapper_is_widget_type(void* self);
bool q_piemodelmapper_is_window_type(void* self);
bool q_piemodelmapper_is_quick_item_type(void* self);
bool q_piemodelmapper_signals_blocked(void* self);
bool q_piemodelmapper_block_signals(void* self, bool b);
QThread* q_piemodelmapper_thread(void* self);
void q_piemodelmapper_move_to_thread(void* self, void* thread);
int32_t q_piemodelmapper_start_timer(void* self, int interval);
void q_piemodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_piemodelmapper_children(void* self);
void q_piemodelmapper_set_parent(void* self, void* parent);
void q_piemodelmapper_install_event_filter(void* self, void* filterObj);
void q_piemodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_piemodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_piemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_piemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_piemodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_piemodelmapper_dump_object_tree(void* self);
void q_piemodelmapper_dump_object_info(void* self);
bool q_piemodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_piemodelmapper_property(void* self, const char* name);
const char** q_piemodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_piemodelmapper_binding_storage(void* self);
QBindingStorage* q_piemodelmapper_binding_storage2(void* self);
void q_piemodelmapper_destroyed(void* self);
void q_piemodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_piemodelmapper_parent(void* self);
bool q_piemodelmapper_inherits(void* self, const char* classname);
void q_piemodelmapper_delete_later(void* self);
int32_t q_piemodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_piemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_piemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_piemodelmapper_destroyed1(void* self, void* param1);
void q_piemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_piemodelmapper_delete(void* self);

#endif
