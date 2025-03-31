#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxplotseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_boxplotmodelmapper_meta_object(void* self);
void* q_boxplotmodelmapper_metacast(void* self, const char* param1);
int32_t q_boxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_boxplotmodelmapper_tr(const char* s);
const char* q_boxplotmodelmapper_tr2(const char* s, const char* c);
const char* q_boxplotmodelmapper_tr3(const char* s, const char* c, int n);
bool q_boxplotmodelmapper_event(void* self, void* event);
bool q_boxplotmodelmapper_event_filter(void* self, void* watched, void* event);
const char* q_boxplotmodelmapper_object_name(void* self);
void q_boxplotmodelmapper_set_object_name(void* self, const char* name);
bool q_boxplotmodelmapper_is_widget_type(void* self);
bool q_boxplotmodelmapper_is_window_type(void* self);
bool q_boxplotmodelmapper_is_quick_item_type(void* self);
bool q_boxplotmodelmapper_signals_blocked(void* self);
bool q_boxplotmodelmapper_block_signals(void* self, bool b);
QThread* q_boxplotmodelmapper_thread(void* self);
void q_boxplotmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_boxplotmodelmapper_start_timer(void* self, int interval);
void q_boxplotmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_boxplotmodelmapper_children(void* self);
void q_boxplotmodelmapper_set_parent(void* self, void* parent);
void q_boxplotmodelmapper_install_event_filter(void* self, void* filterObj);
void q_boxplotmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_boxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_boxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_boxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_boxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_boxplotmodelmapper_dump_object_tree(void* self);
void q_boxplotmodelmapper_dump_object_info(void* self);
bool q_boxplotmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_boxplotmodelmapper_property(void* self, const char* name);
const char** q_boxplotmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_boxplotmodelmapper_binding_storage(void* self);
QBindingStorage* q_boxplotmodelmapper_binding_storage2(void* self);
void q_boxplotmodelmapper_destroyed(void* self);
void q_boxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_boxplotmodelmapper_parent(void* self);
bool q_boxplotmodelmapper_inherits(void* self, const char* classname);
void q_boxplotmodelmapper_delete_later(void* self);
int32_t q_boxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_boxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_boxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_boxplotmodelmapper_destroyed1(void* self, void* param1);
void q_boxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_boxplotmodelmapper_delete(void* self);

#endif
