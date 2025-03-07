#pragma once
#ifndef SRCQT6C_LIBQLIBRARY_H
#define SRCQT6C_LIBQLIBRARY_H

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
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QLibrary* q_library_new();
QLibrary* q_library_new2(const char* fileName);
QLibrary* q_library_new3(const char* fileName, int verNum);
QLibrary* q_library_new4(const char* fileName, const char* version);
QLibrary* q_library_new5(void* parent);
QLibrary* q_library_new6(const char* fileName, void* parent);
QLibrary* q_library_new7(const char* fileName, int verNum, void* parent);
QLibrary* q_library_new8(const char* fileName, const char* version, void* parent);
QMetaObject* q_library_meta_object(void* self);
void* q_library_metacast(void* self, const char* param1);
int32_t q_library_metacall(void* self, int64_t param1, int param2, void* param3);
void q_library_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_library_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_library_tr(const char* s);
bool q_library_load(void* self);
bool q_library_unload(void* self);
bool q_library_is_loaded(void* self);
bool q_library_is_library(const char* fileName);
void q_library_set_file_name(void* self, const char* fileName);
const char* q_library_file_name(void* self);
void q_library_set_file_name_and_version(void* self, const char* fileName, int verNum);
void q_library_set_file_name_and_version2(void* self, const char* fileName, const char* version);
const char* q_library_error_string(void* self);
void q_library_set_load_hints(void* self, int64_t hints);
int64_t q_library_load_hints(void* self);
const char* q_library_tr2(const char* s, const char* c);
const char* q_library_tr3(const char* s, const char* c, int n);
const char* q_library_object_name(void* self);
void q_library_set_object_name(void* self, const char* name);
bool q_library_is_widget_type(void* self);
bool q_library_is_window_type(void* self);
bool q_library_is_quick_item_type(void* self);
bool q_library_signals_blocked(void* self);
bool q_library_block_signals(void* self, bool b);
QThread* q_library_thread(void* self);
void q_library_move_to_thread(void* self, void* thread);
int32_t q_library_start_timer(void* self, int interval);
void q_library_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_library_children(void* self);
void q_library_set_parent(void* self, void* parent);
void q_library_install_event_filter(void* self, void* filterObj);
void q_library_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_library_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_library_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_library_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_library_disconnect_with_q_meta_object_connection(void* param1);
void q_library_dump_object_tree(void* self);
void q_library_dump_object_info(void* self);
bool q_library_set_property(void* self, const char* name, void* value);
QVariant* q_library_property(void* self, const char* name);
const char** q_library_dynamic_property_names(void* self);
QBindingStorage* q_library_binding_storage(void* self);
QBindingStorage* q_library_binding_storage2(void* self);
void q_library_destroyed(void* self);
void q_library_on_destroyed(void* self, void (*slot)(void*));
QObject* q_library_parent(void* self);
bool q_library_inherits(void* self, const char* classname);
void q_library_delete_later(void* self);
int32_t q_library_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_library_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_library_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_library_destroyed1(void* self, void* param1);
void q_library_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_library_event(void* self, void* event);
bool q_library_qbase_event(void* self, void* event);
void q_library_on_event(void* self, bool (*slot)(void*, void*));
bool q_library_event_filter(void* self, void* watched, void* event);
bool q_library_qbase_event_filter(void* self, void* watched, void* event);
void q_library_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_library_timer_event(void* self, void* event);
void q_library_qbase_timer_event(void* self, void* event);
void q_library_on_timer_event(void* self, void (*slot)(void*, void*));
void q_library_child_event(void* self, void* event);
void q_library_qbase_child_event(void* self, void* event);
void q_library_on_child_event(void* self, void (*slot)(void*, void*));
void q_library_custom_event(void* self, void* event);
void q_library_qbase_custom_event(void* self, void* event);
void q_library_on_custom_event(void* self, void (*slot)(void*, void*));
void q_library_connect_notify(void* self, void* signal);
void q_library_qbase_connect_notify(void* self, void* signal);
void q_library_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_library_disconnect_notify(void* self, void* signal);
void q_library_qbase_disconnect_notify(void* self, void* signal);
void q_library_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_library_sender(void* self);
QObject* q_library_qbase_sender(void* self);
void q_library_on_sender(void* self, QObject* (*slot)());
int32_t q_library_sender_signal_index(void* self);
int32_t q_library_qbase_sender_signal_index(void* self);
void q_library_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_library_receivers(void* self, const char* signal);
int32_t q_library_qbase_receivers(void* self, const char* signal);
void q_library_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_library_is_signal_connected(void* self, void* signal);
bool q_library_qbase_is_signal_connected(void* self, void* signal);
void q_library_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_library_delete(void* self);

/// https://doc.qt.io/qt-6/qlibrary.html#types

typedef enum {
    QLIBRARY_LOADHINT_RESOLVEALLSYMBOLSHINT = 1,
    QLIBRARY_LOADHINT_EXPORTEXTERNALSYMBOLSHINT = 2,
    QLIBRARY_LOADHINT_LOADARCHIVEMEMBERHINT = 4,
    QLIBRARY_LOADHINT_PREVENTUNLOADHINT = 8,
    QLIBRARY_LOADHINT_DEEPBINDHINT = 16
} QLibrary__LoadHint;

#endif
