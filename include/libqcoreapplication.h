#pragma once
#ifndef SRCQT6C_LIBQCOREAPPLICATION_H
#define SRCQT6C_LIBQCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracteventdispatcher.h"
#include "libqabstractnativeeventfilter.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqtranslator.h"
#include "libqvariant.h"

QCoreApplication* q_coreapplication_new(int* argc, char* argv[]);
QCoreApplication* q_coreapplication_new2(int* argc, char* argv[], int param3);
QMetaObject* q_coreapplication_meta_object(void* self);
void* q_coreapplication_metacast(void* self, const char* param1);
int32_t q_coreapplication_metacall(void* self, int64_t param1, int param2, void* param3);
void q_coreapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_coreapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_coreapplication_tr(const char* s);
const char** q_coreapplication_arguments();
void q_coreapplication_set_attribute(int64_t attribute);
bool q_coreapplication_test_attribute(int64_t attribute);
void q_coreapplication_set_organization_domain(const char* orgDomain);
const char* q_coreapplication_organization_domain();
void q_coreapplication_set_organization_name(const char* orgName);
const char* q_coreapplication_organization_name();
void q_coreapplication_set_application_name(const char* application);
const char* q_coreapplication_application_name();
void q_coreapplication_set_application_version(const char* version);
const char* q_coreapplication_application_version();
void q_coreapplication_set_setuid_allowed(bool allow);
bool q_coreapplication_is_setuid_allowed();
QCoreApplication* q_coreapplication_instance();
int32_t q_coreapplication_exec();
void q_coreapplication_process_events();
void q_coreapplication_process_events2(int64_t flags, int maxtime);
bool q_coreapplication_send_event(void* receiver, void* event);
void q_coreapplication_post_event(void* receiver, void* event);
void q_coreapplication_send_posted_events();
void q_coreapplication_remove_posted_events(void* receiver);
QAbstractEventDispatcher* q_coreapplication_event_dispatcher();
void q_coreapplication_set_event_dispatcher(void* eventDispatcher);
bool q_coreapplication_notify(void* self, void* param1, void* param2);
void q_coreapplication_on_notify(void* self, bool (*slot)(void*, void*, void*));
bool q_coreapplication_qbase_notify(void* self, void* param1, void* param2);
bool q_coreapplication_starting_up();
bool q_coreapplication_closing_down();
const char* q_coreapplication_application_dir_path();
const char* q_coreapplication_application_file_path();
long long q_coreapplication_application_pid();
void q_coreapplication_set_library_paths(const char* libraryPaths[]);
const char** q_coreapplication_library_paths();
void q_coreapplication_add_library_path(const char* param1);
void q_coreapplication_remove_library_path(const char* param1);
bool q_coreapplication_install_translator(void* messageFile);
bool q_coreapplication_remove_translator(void* messageFile);
const char* q_coreapplication_translate(const char* context, const char* key);
void* q_coreapplication_resolve_interface(void* self, const char* name, int revision);
void q_coreapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
void* q_coreapplication_qbase_resolve_interface(void* self, const char* name, int revision);
void q_coreapplication_install_native_event_filter(void* self, void* filterObj);
void q_coreapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*));
void q_coreapplication_remove_native_event_filter(void* self, void* filterObj);
void q_coreapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));
bool q_coreapplication_is_quit_lock_enabled();
void q_coreapplication_set_quit_lock_enabled(bool enabled);
void q_coreapplication_quit();
void q_coreapplication_exit();
void q_coreapplication_organization_name_changed(void* self);
void q_coreapplication_on_organization_name_changed(void* self, void (*slot)(void*));
void q_coreapplication_organization_domain_changed(void* self);
void q_coreapplication_on_organization_domain_changed(void* self, void (*slot)(void*));
void q_coreapplication_application_name_changed(void* self);
void q_coreapplication_on_application_name_changed(void* self, void (*slot)(void*));
void q_coreapplication_application_version_changed(void* self);
void q_coreapplication_on_application_version_changed(void* self, void (*slot)(void*));
bool q_coreapplication_event(void* self, void* param1);
void q_coreapplication_on_event(void* self, bool (*slot)(void*, void*));
bool q_coreapplication_qbase_event(void* self, void* param1);
const char* q_coreapplication_tr2(const char* s, const char* c);
const char* q_coreapplication_tr3(const char* s, const char* c, int n);
void q_coreapplication_set_attribute2(int64_t attribute, bool on);
void q_coreapplication_process_events1(int64_t flags);
void q_coreapplication_post_event3(void* receiver, void* event, int priority);
void q_coreapplication_send_posted_events1(void* receiver);
void q_coreapplication_send_posted_events2(void* receiver, int event_type);
void q_coreapplication_remove_posted_events2(void* receiver, int eventType);
const char* q_coreapplication_translate3(const char* context, const char* key, const char* disambiguation);
const char* q_coreapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);
void q_coreapplication_exit1(int retcode);
const char* q_coreapplication_object_name(void* self);
void q_coreapplication_set_object_name(void* self, const char* name);
bool q_coreapplication_is_widget_type(void* self);
bool q_coreapplication_is_window_type(void* self);
bool q_coreapplication_is_quick_item_type(void* self);
bool q_coreapplication_signals_blocked(void* self);
bool q_coreapplication_block_signals(void* self, bool b);
QThread* q_coreapplication_thread(void* self);
void q_coreapplication_move_to_thread(void* self, void* thread);
int32_t q_coreapplication_start_timer(void* self, int interval);
void q_coreapplication_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_coreapplication_children(void* self);
void q_coreapplication_set_parent(void* self, void* parent);
void q_coreapplication_install_event_filter(void* self, void* filterObj);
void q_coreapplication_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_coreapplication_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_coreapplication_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_coreapplication_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_coreapplication_disconnect_with_q_meta_object_connection(void* param1);
void q_coreapplication_dump_object_tree(void* self);
void q_coreapplication_dump_object_info(void* self);
bool q_coreapplication_set_property(void* self, const char* name, void* value);
QVariant* q_coreapplication_property(void* self, const char* name);
const char** q_coreapplication_dynamic_property_names(void* self);
QBindingStorage* q_coreapplication_binding_storage(void* self);
QBindingStorage* q_coreapplication_binding_storage2(void* self);
void q_coreapplication_destroyed(void* self);
void q_coreapplication_on_destroyed(void* self, void (*slot)(void*));
QObject* q_coreapplication_parent(void* self);
bool q_coreapplication_inherits(void* self, const char* classname);
void q_coreapplication_delete_later(void* self);
int32_t q_coreapplication_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_coreapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_coreapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_coreapplication_destroyed1(void* self, void* param1);
void q_coreapplication_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_coreapplication_event_filter(void* self, void* watched, void* event);
bool q_coreapplication_qbase_event_filter(void* self, void* watched, void* event);
void q_coreapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_coreapplication_timer_event(void* self, void* event);
void q_coreapplication_qbase_timer_event(void* self, void* event);
void q_coreapplication_on_timer_event(void* self, void (*slot)(void*, void*));
void q_coreapplication_child_event(void* self, void* event);
void q_coreapplication_qbase_child_event(void* self, void* event);
void q_coreapplication_on_child_event(void* self, void (*slot)(void*, void*));
void q_coreapplication_custom_event(void* self, void* event);
void q_coreapplication_qbase_custom_event(void* self, void* event);
void q_coreapplication_on_custom_event(void* self, void (*slot)(void*, void*));
void q_coreapplication_connect_notify(void* self, void* signal);
void q_coreapplication_qbase_connect_notify(void* self, void* signal);
void q_coreapplication_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_coreapplication_disconnect_notify(void* self, void* signal);
void q_coreapplication_qbase_disconnect_notify(void* self, void* signal);
void q_coreapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_coreapplication_sender(void* self);
QObject* q_coreapplication_qbase_sender(void* self);
void q_coreapplication_on_sender(void* self, QObject* (*slot)());
int32_t q_coreapplication_sender_signal_index(void* self);
int32_t q_coreapplication_qbase_sender_signal_index(void* self);
void q_coreapplication_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_coreapplication_receivers(void* self, const char* signal);
int32_t q_coreapplication_qbase_receivers(void* self, const char* signal);
void q_coreapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_coreapplication_is_signal_connected(void* self, void* signal);
bool q_coreapplication_qbase_is_signal_connected(void* self, void* signal);
void q_coreapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_coreapplication_delete(void* self);

/// https://doc.qt.io/qt-6/qcoreapplication.html#types

typedef enum {
    QCOREAPPLICATION__APPLICATIONFLAGS = 394242
} QCoreApplication__;

#endif
