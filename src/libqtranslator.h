#pragma once
#ifndef SRCQT6C_LIBQTRANSLATOR_H
#define SRCQT6C_LIBQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QTranslator* q_translator_new();
QTranslator* q_translator_new2(void* parent);
QMetaObject* q_translator_meta_object(void* self);
void* q_translator_metacast(void* self, const char* param1);
int32_t q_translator_metacall(void* self, int64_t param1, int param2, void* param3);
void q_translator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_translator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_translator_tr(const char* s);
const char* q_translator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);
void q_translator_on_translate(void* self, const char* (*slot)(void*, const char*, const char*, const char*, int));
const char* q_translator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool q_translator_is_empty(void* self);
void q_translator_on_is_empty(void* self, bool (*slot)());
bool q_translator_qbase_is_empty(void* self);
const char* q_translator_language(void* self);
const char* q_translator_file_path(void* self);
bool q_translator_load(void* self, const char* filename);
bool q_translator_load2(void* self, void* locale, const char* filename);
bool q_translator_load3(void* self, unsigned char* data, int lenVal);
const char* q_translator_tr2(const char* s, const char* c);
const char* q_translator_tr3(const char* s, const char* c, int n);
bool q_translator_load22(void* self, const char* filename, const char* directory);
bool q_translator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters);
bool q_translator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix);
bool q_translator_load33(void* self, void* locale, const char* filename, const char* prefix);
bool q_translator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory);
bool q_translator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix);
bool q_translator_load34(void* self, unsigned char* data, int lenVal, const char* directory);
const char* q_translator_object_name(void* self);
void q_translator_set_object_name(void* self, const char* name);
bool q_translator_is_widget_type(void* self);
bool q_translator_is_window_type(void* self);
bool q_translator_is_quick_item_type(void* self);
bool q_translator_signals_blocked(void* self);
bool q_translator_block_signals(void* self, bool b);
QThread* q_translator_thread(void* self);
void q_translator_move_to_thread(void* self, void* thread);
int32_t q_translator_start_timer(void* self, int interval);
void q_translator_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_translator_children(void* self);
void q_translator_set_parent(void* self, void* parent);
void q_translator_install_event_filter(void* self, void* filterObj);
void q_translator_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_translator_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_translator_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_translator_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_translator_disconnect_with_q_meta_object_connection(void* param1);
void q_translator_dump_object_tree(void* self);
void q_translator_dump_object_info(void* self);
bool q_translator_set_property(void* self, const char* name, void* value);
QVariant* q_translator_property(void* self, const char* name);
const char** q_translator_dynamic_property_names(void* self);
QBindingStorage* q_translator_binding_storage(void* self);
QBindingStorage* q_translator_binding_storage2(void* self);
void q_translator_destroyed(void* self);
void q_translator_on_destroyed(void* self, void (*slot)(void*));
QObject* q_translator_parent(void* self);
bool q_translator_inherits(void* self, const char* classname);
void q_translator_delete_later(void* self);
int32_t q_translator_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_translator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_translator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_translator_destroyed1(void* self, void* param1);
void q_translator_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_translator_event(void* self, void* event);
bool q_translator_qbase_event(void* self, void* event);
void q_translator_on_event(void* self, bool (*slot)(void*, void*));
bool q_translator_event_filter(void* self, void* watched, void* event);
bool q_translator_qbase_event_filter(void* self, void* watched, void* event);
void q_translator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_translator_timer_event(void* self, void* event);
void q_translator_qbase_timer_event(void* self, void* event);
void q_translator_on_timer_event(void* self, void (*slot)(void*, void*));
void q_translator_child_event(void* self, void* event);
void q_translator_qbase_child_event(void* self, void* event);
void q_translator_on_child_event(void* self, void (*slot)(void*, void*));
void q_translator_custom_event(void* self, void* event);
void q_translator_qbase_custom_event(void* self, void* event);
void q_translator_on_custom_event(void* self, void (*slot)(void*, void*));
void q_translator_connect_notify(void* self, void* signal);
void q_translator_qbase_connect_notify(void* self, void* signal);
void q_translator_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_translator_disconnect_notify(void* self, void* signal);
void q_translator_qbase_disconnect_notify(void* self, void* signal);
void q_translator_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_translator_sender(void* self);
QObject* q_translator_qbase_sender(void* self);
void q_translator_on_sender(void* self, QObject* (*slot)());
int32_t q_translator_sender_signal_index(void* self);
int32_t q_translator_qbase_sender_signal_index(void* self);
void q_translator_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_translator_receivers(void* self, const char* signal);
int32_t q_translator_qbase_receivers(void* self, const char* signal);
void q_translator_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_translator_is_signal_connected(void* self, void* signal);
bool q_translator_qbase_is_signal_connected(void* self, void* signal);
void q_translator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_translator_delete(void* self);

#endif
