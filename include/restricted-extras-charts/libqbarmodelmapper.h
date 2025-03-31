#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractbarseries.h"
#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_barmodelmapper_meta_object(void* self);
void* q_barmodelmapper_metacast(void* self, const char* param1);
int32_t q_barmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_barmodelmapper_tr(const char* s);
const char* q_barmodelmapper_tr2(const char* s, const char* c);
const char* q_barmodelmapper_tr3(const char* s, const char* c, int n);
bool q_barmodelmapper_event(void* self, void* event);
bool q_barmodelmapper_event_filter(void* self, void* watched, void* event);
const char* q_barmodelmapper_object_name(void* self);
void q_barmodelmapper_set_object_name(void* self, const char* name);
bool q_barmodelmapper_is_widget_type(void* self);
bool q_barmodelmapper_is_window_type(void* self);
bool q_barmodelmapper_is_quick_item_type(void* self);
bool q_barmodelmapper_signals_blocked(void* self);
bool q_barmodelmapper_block_signals(void* self, bool b);
QThread* q_barmodelmapper_thread(void* self);
void q_barmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_barmodelmapper_start_timer(void* self, int interval);
void q_barmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_barmodelmapper_children(void* self);
void q_barmodelmapper_set_parent(void* self, void* parent);
void q_barmodelmapper_install_event_filter(void* self, void* filterObj);
void q_barmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_barmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_barmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_barmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_barmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_barmodelmapper_dump_object_tree(void* self);
void q_barmodelmapper_dump_object_info(void* self);
bool q_barmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_barmodelmapper_property(void* self, const char* name);
const char** q_barmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_barmodelmapper_binding_storage(void* self);
QBindingStorage* q_barmodelmapper_binding_storage2(void* self);
void q_barmodelmapper_destroyed(void* self);
void q_barmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_barmodelmapper_parent(void* self);
bool q_barmodelmapper_inherits(void* self, const char* classname);
void q_barmodelmapper_delete_later(void* self);
int32_t q_barmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_barmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_barmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_barmodelmapper_destroyed1(void* self, void* param1);
void q_barmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_barmodelmapper_delete(void* self);

#endif
