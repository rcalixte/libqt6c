#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENOTIFICATION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqimage.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_webenginenotification_meta_object(void* self);
void* q_webenginenotification_metacast(void* self, const char* param1);
int32_t q_webenginenotification_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginenotification_tr(const char* s);
bool q_webenginenotification_matches(void* self, void* other);
QUrl* q_webenginenotification_origin(void* self);
QImage* q_webenginenotification_icon(void* self);
const char* q_webenginenotification_title(void* self);
const char* q_webenginenotification_message(void* self);
const char* q_webenginenotification_tag(void* self);
const char* q_webenginenotification_language(void* self);
int64_t q_webenginenotification_direction(void* self);
void q_webenginenotification_show(void* self);
void q_webenginenotification_click(void* self);
void q_webenginenotification_close(void* self);
void q_webenginenotification_closed(void* self);
void q_webenginenotification_on_closed(void* self, void (*slot)(void*));
const char* q_webenginenotification_tr2(const char* s, const char* c);
const char* q_webenginenotification_tr3(const char* s, const char* c, int n);
bool q_webenginenotification_event(void* self, void* event);
bool q_webenginenotification_event_filter(void* self, void* watched, void* event);
const char* q_webenginenotification_object_name(void* self);
void q_webenginenotification_set_object_name(void* self, const char* name);
bool q_webenginenotification_is_widget_type(void* self);
bool q_webenginenotification_is_window_type(void* self);
bool q_webenginenotification_is_quick_item_type(void* self);
bool q_webenginenotification_signals_blocked(void* self);
bool q_webenginenotification_block_signals(void* self, bool b);
QThread* q_webenginenotification_thread(void* self);
void q_webenginenotification_move_to_thread(void* self, void* thread);
int32_t q_webenginenotification_start_timer(void* self, int interval);
void q_webenginenotification_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginenotification_children(void* self);
void q_webenginenotification_set_parent(void* self, void* parent);
void q_webenginenotification_install_event_filter(void* self, void* filterObj);
void q_webenginenotification_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginenotification_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginenotification_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginenotification_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginenotification_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginenotification_dump_object_tree(void* self);
void q_webenginenotification_dump_object_info(void* self);
bool q_webenginenotification_set_property(void* self, const char* name, void* value);
QVariant* q_webenginenotification_property(void* self, const char* name);
const char** q_webenginenotification_dynamic_property_names(void* self);
QBindingStorage* q_webenginenotification_binding_storage(void* self);
QBindingStorage* q_webenginenotification_binding_storage2(void* self);
void q_webenginenotification_destroyed(void* self);
void q_webenginenotification_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginenotification_parent(void* self);
bool q_webenginenotification_inherits(void* self, const char* classname);
void q_webenginenotification_delete_later(void* self);
int32_t q_webenginenotification_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginenotification_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginenotification_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginenotification_destroyed1(void* self, void* param1);
void q_webenginenotification_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_webenginenotification_delete(void* self);

#endif
