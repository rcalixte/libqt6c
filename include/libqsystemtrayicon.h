#pragma once
#ifndef SRCQT6C_LIBQSYSTEMTRAYICON_H
#define SRCQT6C_LIBQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqicon.h"
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QSystemTrayIcon* q_systemtrayicon_new();
QSystemTrayIcon* q_systemtrayicon_new2(void* icon);
QSystemTrayIcon* q_systemtrayicon_new3(void* parent);
QSystemTrayIcon* q_systemtrayicon_new4(void* icon, void* parent);
QMetaObject* q_systemtrayicon_meta_object(void* self);
void* q_systemtrayicon_metacast(void* self, const char* param1);
int32_t q_systemtrayicon_metacall(void* self, int64_t param1, int param2, void* param3);
void q_systemtrayicon_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_systemtrayicon_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_systemtrayicon_tr(const char* s);
void q_systemtrayicon_set_context_menu(void* self, void* menu);
QMenu* q_systemtrayicon_context_menu(void* self);
QIcon* q_systemtrayicon_icon(void* self);
void q_systemtrayicon_set_icon(void* self, void* icon);
const char* q_systemtrayicon_tool_tip(void* self);
void q_systemtrayicon_set_tool_tip(void* self, const char* tip);
bool q_systemtrayicon_is_system_tray_available();
bool q_systemtrayicon_supports_messages();
QRect* q_systemtrayicon_geometry(void* self);
bool q_systemtrayicon_is_visible(void* self);
void q_systemtrayicon_set_visible(void* self, bool visible);
void q_systemtrayicon_show(void* self);
void q_systemtrayicon_hide(void* self);
void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, void* icon);
void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg);
void q_systemtrayicon_activated(void* self, int64_t reason);
void q_systemtrayicon_on_activated(void* self, void (*slot)(void*, int64_t));
void q_systemtrayicon_message_clicked(void* self);
void q_systemtrayicon_on_message_clicked(void* self, void (*slot)(void*));
bool q_systemtrayicon_event(void* self, void* event);
void q_systemtrayicon_on_event(void* self, bool (*slot)(void*, void*));
bool q_systemtrayicon_qbase_event(void* self, void* event);
const char* q_systemtrayicon_tr2(const char* s, const char* c);
const char* q_systemtrayicon_tr3(const char* s, const char* c, int n);
void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, void* icon, int msecs);
void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int64_t icon);
void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int64_t icon, int msecs);
const char* q_systemtrayicon_object_name(void* self);
void q_systemtrayicon_set_object_name(void* self, const char* name);
bool q_systemtrayicon_is_widget_type(void* self);
bool q_systemtrayicon_is_window_type(void* self);
bool q_systemtrayicon_is_quick_item_type(void* self);
bool q_systemtrayicon_signals_blocked(void* self);
bool q_systemtrayicon_block_signals(void* self, bool b);
QThread* q_systemtrayicon_thread(void* self);
void q_systemtrayicon_move_to_thread(void* self, void* thread);
int32_t q_systemtrayicon_start_timer(void* self, int interval);
void q_systemtrayicon_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_systemtrayicon_children(void* self);
void q_systemtrayicon_set_parent(void* self, void* parent);
void q_systemtrayicon_install_event_filter(void* self, void* filterObj);
void q_systemtrayicon_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_systemtrayicon_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_systemtrayicon_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_systemtrayicon_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_systemtrayicon_disconnect_with_q_meta_object_connection(void* param1);
void q_systemtrayicon_dump_object_tree(void* self);
void q_systemtrayicon_dump_object_info(void* self);
bool q_systemtrayicon_set_property(void* self, const char* name, void* value);
QVariant* q_systemtrayicon_property(void* self, const char* name);
const char** q_systemtrayicon_dynamic_property_names(void* self);
QBindingStorage* q_systemtrayicon_binding_storage(void* self);
QBindingStorage* q_systemtrayicon_binding_storage2(void* self);
void q_systemtrayicon_destroyed(void* self);
void q_systemtrayicon_on_destroyed(void* self, void (*slot)(void*));
QObject* q_systemtrayicon_parent(void* self);
bool q_systemtrayicon_inherits(void* self, const char* classname);
void q_systemtrayicon_delete_later(void* self);
int32_t q_systemtrayicon_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_systemtrayicon_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_systemtrayicon_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_systemtrayicon_destroyed1(void* self, void* param1);
void q_systemtrayicon_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_systemtrayicon_event_filter(void* self, void* watched, void* event);
bool q_systemtrayicon_qbase_event_filter(void* self, void* watched, void* event);
void q_systemtrayicon_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_systemtrayicon_timer_event(void* self, void* event);
void q_systemtrayicon_qbase_timer_event(void* self, void* event);
void q_systemtrayicon_on_timer_event(void* self, void (*slot)(void*, void*));
void q_systemtrayicon_child_event(void* self, void* event);
void q_systemtrayicon_qbase_child_event(void* self, void* event);
void q_systemtrayicon_on_child_event(void* self, void (*slot)(void*, void*));
void q_systemtrayicon_custom_event(void* self, void* event);
void q_systemtrayicon_qbase_custom_event(void* self, void* event);
void q_systemtrayicon_on_custom_event(void* self, void (*slot)(void*, void*));
void q_systemtrayicon_connect_notify(void* self, void* signal);
void q_systemtrayicon_qbase_connect_notify(void* self, void* signal);
void q_systemtrayicon_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_systemtrayicon_disconnect_notify(void* self, void* signal);
void q_systemtrayicon_qbase_disconnect_notify(void* self, void* signal);
void q_systemtrayicon_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_systemtrayicon_sender(void* self);
QObject* q_systemtrayicon_qbase_sender(void* self);
void q_systemtrayicon_on_sender(void* self, QObject* (*slot)());
int32_t q_systemtrayicon_sender_signal_index(void* self);
int32_t q_systemtrayicon_qbase_sender_signal_index(void* self);
void q_systemtrayicon_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_systemtrayicon_receivers(void* self, const char* signal);
int32_t q_systemtrayicon_qbase_receivers(void* self, const char* signal);
void q_systemtrayicon_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_systemtrayicon_is_signal_connected(void* self, void* signal);
bool q_systemtrayicon_qbase_is_signal_connected(void* self, void* signal);
void q_systemtrayicon_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_systemtrayicon_delete(void* self);

/// https://doc.qt.io/qt-6/qsystemtrayicon.html#types

typedef enum {
    QSYSTEMTRAYICON_ACTIVATIONREASON_UNKNOWN = 0,
    QSYSTEMTRAYICON_ACTIVATIONREASON_CONTEXT = 1,
    QSYSTEMTRAYICON_ACTIVATIONREASON_DOUBLECLICK = 2,
    QSYSTEMTRAYICON_ACTIVATIONREASON_TRIGGER = 3,
    QSYSTEMTRAYICON_ACTIVATIONREASON_MIDDLECLICK = 4
} QSystemTrayIcon__ActivationReason;

typedef enum {
    QSYSTEMTRAYICON_MESSAGEICON_NOICON = 0,
    QSYSTEMTRAYICON_MESSAGEICON_INFORMATION = 1,
    QSYSTEMTRAYICON_MESSAGEICON_WARNING = 2,
    QSYSTEMTRAYICON_MESSAGEICON_CRITICAL = 3
} QSystemTrayIcon__MessageIcon;

#endif
