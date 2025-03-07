#pragma once
#ifndef SRCQT6C_LIBQSETTINGS_H
#define SRCQT6C_LIBQSETTINGS_H

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

QSettings* q_settings_new(const char* organization);
QSettings* q_settings_new2(int64_t scope, const char* organization);
QSettings* q_settings_new3(int64_t format, int64_t scope, const char* organization);
QSettings* q_settings_new4(const char* fileName, int64_t format);
QSettings* q_settings_new5();
QSettings* q_settings_new6(int64_t scope);
QSettings* q_settings_new7(const char* organization, const char* application);
QSettings* q_settings_new8(const char* organization, const char* application, void* parent);
QSettings* q_settings_new9(int64_t scope, const char* organization, const char* application);
QSettings* q_settings_new10(int64_t scope, const char* organization, const char* application, void* parent);
QSettings* q_settings_new11(int64_t format, int64_t scope, const char* organization, const char* application);
QSettings* q_settings_new12(int64_t format, int64_t scope, const char* organization, const char* application, void* parent);
QSettings* q_settings_new13(const char* fileName, int64_t format, void* parent);
QSettings* q_settings_new14(void* parent);
QSettings* q_settings_new15(int64_t scope, void* parent);
QMetaObject* q_settings_meta_object(void* self);
void* q_settings_metacast(void* self, const char* param1);
int32_t q_settings_metacall(void* self, int64_t param1, int param2, void* param3);
void q_settings_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_settings_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_settings_tr(const char* s);
void q_settings_clear(void* self);
void q_settings_sync(void* self);
int64_t q_settings_status(void* self);
bool q_settings_is_atomic_sync_required(void* self);
void q_settings_set_atomic_sync_required(void* self, bool enable);
void q_settings_begin_group(void* self, const char* prefix);
void q_settings_end_group(void* self);
const char* q_settings_group(void* self);
int32_t q_settings_begin_read_array(void* self, const char* prefix);
void q_settings_begin_write_array(void* self, const char* prefix);
void q_settings_end_array(void* self);
void q_settings_set_array_index(void* self, int i);
const char** q_settings_all_keys(void* self);
const char** q_settings_child_keys(void* self);
const char** q_settings_child_groups(void* self);
bool q_settings_is_writable(void* self);
void q_settings_set_value(void* self, const char* key, void* value);
QVariant* q_settings_value(void* self, const char* key, void* defaultValue);
QVariant* q_settings_value_with_key(void* self, const char* key);
void q_settings_remove(void* self, const char* key);
bool q_settings_contains(void* self, const char* key);
void q_settings_set_fallbacks_enabled(void* self, bool b);
bool q_settings_fallbacks_enabled(void* self);
const char* q_settings_file_name(void* self);
int64_t q_settings_format(void* self);
int64_t q_settings_scope(void* self);
const char* q_settings_organization_name(void* self);
const char* q_settings_application_name(void* self);
void q_settings_set_default_format(int64_t format);
int64_t q_settings_default_format();
void q_settings_set_path(int64_t format, int64_t scope, const char* path);
bool q_settings_event(void* self, void* event);
void q_settings_on_event(void* self, bool (*slot)(void*, void*));
bool q_settings_qbase_event(void* self, void* event);
const char* q_settings_tr2(const char* s, const char* c);
const char* q_settings_tr3(const char* s, const char* c, int n);
void q_settings_begin_write_array2(void* self, const char* prefix, int size);
const char* q_settings_object_name(void* self);
void q_settings_set_object_name(void* self, const char* name);
bool q_settings_is_widget_type(void* self);
bool q_settings_is_window_type(void* self);
bool q_settings_is_quick_item_type(void* self);
bool q_settings_signals_blocked(void* self);
bool q_settings_block_signals(void* self, bool b);
QThread* q_settings_thread(void* self);
void q_settings_move_to_thread(void* self, void* thread);
int32_t q_settings_start_timer(void* self, int interval);
void q_settings_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_settings_children(void* self);
void q_settings_set_parent(void* self, void* parent);
void q_settings_install_event_filter(void* self, void* filterObj);
void q_settings_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_settings_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_settings_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_settings_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_settings_disconnect_with_q_meta_object_connection(void* param1);
void q_settings_dump_object_tree(void* self);
void q_settings_dump_object_info(void* self);
bool q_settings_set_property(void* self, const char* name, void* value);
QVariant* q_settings_property(void* self, const char* name);
const char** q_settings_dynamic_property_names(void* self);
QBindingStorage* q_settings_binding_storage(void* self);
QBindingStorage* q_settings_binding_storage2(void* self);
void q_settings_destroyed(void* self);
void q_settings_on_destroyed(void* self, void (*slot)(void*));
QObject* q_settings_parent(void* self);
bool q_settings_inherits(void* self, const char* classname);
void q_settings_delete_later(void* self);
int32_t q_settings_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_settings_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_settings_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_settings_destroyed1(void* self, void* param1);
void q_settings_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_settings_event_filter(void* self, void* watched, void* event);
bool q_settings_qbase_event_filter(void* self, void* watched, void* event);
void q_settings_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_settings_timer_event(void* self, void* event);
void q_settings_qbase_timer_event(void* self, void* event);
void q_settings_on_timer_event(void* self, void (*slot)(void*, void*));
void q_settings_child_event(void* self, void* event);
void q_settings_qbase_child_event(void* self, void* event);
void q_settings_on_child_event(void* self, void (*slot)(void*, void*));
void q_settings_custom_event(void* self, void* event);
void q_settings_qbase_custom_event(void* self, void* event);
void q_settings_on_custom_event(void* self, void (*slot)(void*, void*));
void q_settings_connect_notify(void* self, void* signal);
void q_settings_qbase_connect_notify(void* self, void* signal);
void q_settings_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_settings_disconnect_notify(void* self, void* signal);
void q_settings_qbase_disconnect_notify(void* self, void* signal);
void q_settings_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_settings_sender(void* self);
QObject* q_settings_qbase_sender(void* self);
void q_settings_on_sender(void* self, QObject* (*slot)());
int32_t q_settings_sender_signal_index(void* self);
int32_t q_settings_qbase_sender_signal_index(void* self);
void q_settings_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_settings_receivers(void* self, const char* signal);
int32_t q_settings_qbase_receivers(void* self, const char* signal);
void q_settings_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_settings_is_signal_connected(void* self, void* signal);
bool q_settings_qbase_is_signal_connected(void* self, void* signal);
void q_settings_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_settings_delete(void* self);

/// https://doc.qt.io/qt-6/qsettings.html#types

typedef enum {
    QSETTINGS_STATUS_NOERROR = 0,
    QSETTINGS_STATUS_ACCESSERROR = 1,
    QSETTINGS_STATUS_FORMATERROR = 2
} QSettings__Status;

typedef enum {
    QSETTINGS_FORMAT_NATIVEFORMAT = 0,
    QSETTINGS_FORMAT_INIFORMAT = 1,
    QSETTINGS_FORMAT_INVALIDFORMAT = 16,
    QSETTINGS_FORMAT_CUSTOMFORMAT1 = 17,
    QSETTINGS_FORMAT_CUSTOMFORMAT2 = 18,
    QSETTINGS_FORMAT_CUSTOMFORMAT3 = 19,
    QSETTINGS_FORMAT_CUSTOMFORMAT4 = 20,
    QSETTINGS_FORMAT_CUSTOMFORMAT5 = 21,
    QSETTINGS_FORMAT_CUSTOMFORMAT6 = 22,
    QSETTINGS_FORMAT_CUSTOMFORMAT7 = 23,
    QSETTINGS_FORMAT_CUSTOMFORMAT8 = 24,
    QSETTINGS_FORMAT_CUSTOMFORMAT9 = 25,
    QSETTINGS_FORMAT_CUSTOMFORMAT10 = 26,
    QSETTINGS_FORMAT_CUSTOMFORMAT11 = 27,
    QSETTINGS_FORMAT_CUSTOMFORMAT12 = 28,
    QSETTINGS_FORMAT_CUSTOMFORMAT13 = 29,
    QSETTINGS_FORMAT_CUSTOMFORMAT14 = 30,
    QSETTINGS_FORMAT_CUSTOMFORMAT15 = 31,
    QSETTINGS_FORMAT_CUSTOMFORMAT16 = 32
} QSettings__Format;

typedef enum {
    QSETTINGS_SCOPE_USERSCOPE = 0,
    QSETTINGS_SCOPE_SYSTEMSCOPE = 1
} QSettings__Scope;

#endif
