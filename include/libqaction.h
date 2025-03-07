#pragma once
#ifndef SRCQT6C_LIBQACTION_H
#define SRCQT6C_LIBQACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqactiongroup.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqfont.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QAction* q_action_new();
QAction* q_action_new2(const char* text);
QAction* q_action_new3(void* icon, const char* text);
QAction* q_action_new4(void* parent);
QAction* q_action_new5(const char* text, void* parent);
QAction* q_action_new6(void* icon, const char* text, void* parent);
QMetaObject* q_action_meta_object(void* self);
void* q_action_metacast(void* self, const char* param1);
int32_t q_action_metacall(void* self, int64_t param1, int param2, void* param3);
void q_action_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_action_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_action_tr(const char* s);
libqt_list /* of QObject* */ q_action_associated_objects(void* self);
void q_action_set_action_group(void* self, void* group);
QActionGroup* q_action_action_group(void* self);
void q_action_set_icon(void* self, void* icon);
QIcon* q_action_icon(void* self);
void q_action_set_text(void* self, const char* text);
const char* q_action_text(void* self);
void q_action_set_icon_text(void* self, const char* text);
const char* q_action_icon_text(void* self);
void q_action_set_tool_tip(void* self, const char* tip);
const char* q_action_tool_tip(void* self);
void q_action_set_status_tip(void* self, const char* statusTip);
const char* q_action_status_tip(void* self);
void q_action_set_whats_this(void* self, const char* what);
const char* q_action_whats_this(void* self);
void q_action_set_priority(void* self, int64_t priority);
int64_t q_action_priority(void* self);
void q_action_set_separator(void* self, bool b);
bool q_action_is_separator(void* self);
void q_action_set_shortcut(void* self, void* shortcut);
QKeySequence* q_action_shortcut(void* self);
void q_action_set_shortcuts(void* self, void* shortcuts[]);
void q_action_set_shortcuts_with_shortcuts(void* self, int64_t shortcuts);
libqt_list /* of QKeySequence* */ q_action_shortcuts(void* self);
void q_action_set_shortcut_context(void* self, int64_t context);
int64_t q_action_shortcut_context(void* self);
void q_action_set_auto_repeat(void* self, bool autoRepeat);
bool q_action_auto_repeat(void* self);
void q_action_set_font(void* self, void* font);
QFont* q_action_font(void* self);
void q_action_set_checkable(void* self, bool checkable);
bool q_action_is_checkable(void* self);
QVariant* q_action_data(void* self);
void q_action_set_data(void* self, void* varVal);
bool q_action_is_checked(void* self);
bool q_action_is_enabled(void* self);
bool q_action_is_visible(void* self);
void q_action_activate(void* self, int64_t event);
void q_action_set_menu_role(void* self, int64_t menuRole);
int64_t q_action_menu_role(void* self);
void q_action_set_icon_visible_in_menu(void* self, bool visible);
bool q_action_is_icon_visible_in_menu(void* self);
void q_action_set_shortcut_visible_in_context_menu(void* self, bool show);
bool q_action_is_shortcut_visible_in_context_menu(void* self);
bool q_action_show_status_text(void* self);
bool q_action_event(void* self, void* param1);
void q_action_on_event(void* self, bool (*slot)(void*, void*));
bool q_action_qbase_event(void* self, void* param1);
void q_action_trigger(void* self);
void q_action_hover(void* self);
void q_action_set_checked(void* self, bool checked);
void q_action_toggle(void* self);
void q_action_set_enabled(void* self, bool enabled);
void q_action_reset_enabled(void* self);
void q_action_set_disabled(void* self, bool b);
void q_action_set_visible(void* self, bool visible);
void q_action_changed(void* self);
void q_action_on_changed(void* self, void (*slot)(void*));
void q_action_enabled_changed(void* self, bool enabled);
void q_action_on_enabled_changed(void* self, void (*slot)(void*, bool));
void q_action_checkable_changed(void* self, bool checkable);
void q_action_on_checkable_changed(void* self, void (*slot)(void*, bool));
void q_action_visible_changed(void* self);
void q_action_on_visible_changed(void* self, void (*slot)(void*));
void q_action_triggered(void* self);
void q_action_on_triggered(void* self, void (*slot)(void*));
void q_action_hovered(void* self);
void q_action_on_hovered(void* self, void (*slot)(void*));
void q_action_toggled(void* self, bool param1);
void q_action_on_toggled(void* self, void (*slot)(void*, bool));
const char* q_action_tr2(const char* s, const char* c);
const char* q_action_tr3(const char* s, const char* c, int n);
bool q_action_show_status_text1(void* self, void* object);
void q_action_triggered1(void* self, bool checked);
void q_action_on_triggered1(void* self, void (*slot)(void*, bool));
const char* q_action_object_name(void* self);
void q_action_set_object_name(void* self, const char* name);
bool q_action_is_widget_type(void* self);
bool q_action_is_window_type(void* self);
bool q_action_is_quick_item_type(void* self);
bool q_action_signals_blocked(void* self);
bool q_action_block_signals(void* self, bool b);
QThread* q_action_thread(void* self);
void q_action_move_to_thread(void* self, void* thread);
int32_t q_action_start_timer(void* self, int interval);
void q_action_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_action_children(void* self);
void q_action_set_parent(void* self, void* parent);
void q_action_install_event_filter(void* self, void* filterObj);
void q_action_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_action_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_action_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_action_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_action_disconnect_with_q_meta_object_connection(void* param1);
void q_action_dump_object_tree(void* self);
void q_action_dump_object_info(void* self);
bool q_action_set_property(void* self, const char* name, void* value);
QVariant* q_action_property(void* self, const char* name);
const char** q_action_dynamic_property_names(void* self);
QBindingStorage* q_action_binding_storage(void* self);
QBindingStorage* q_action_binding_storage2(void* self);
void q_action_destroyed(void* self);
void q_action_on_destroyed(void* self, void (*slot)(void*));
QObject* q_action_parent(void* self);
bool q_action_inherits(void* self, const char* classname);
void q_action_delete_later(void* self);
int32_t q_action_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_action_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_action_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_action_destroyed1(void* self, void* param1);
void q_action_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_action_event_filter(void* self, void* watched, void* event);
bool q_action_qbase_event_filter(void* self, void* watched, void* event);
void q_action_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_action_timer_event(void* self, void* event);
void q_action_qbase_timer_event(void* self, void* event);
void q_action_on_timer_event(void* self, void (*slot)(void*, void*));
void q_action_child_event(void* self, void* event);
void q_action_qbase_child_event(void* self, void* event);
void q_action_on_child_event(void* self, void (*slot)(void*, void*));
void q_action_custom_event(void* self, void* event);
void q_action_qbase_custom_event(void* self, void* event);
void q_action_on_custom_event(void* self, void (*slot)(void*, void*));
void q_action_connect_notify(void* self, void* signal);
void q_action_qbase_connect_notify(void* self, void* signal);
void q_action_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_action_disconnect_notify(void* self, void* signal);
void q_action_qbase_disconnect_notify(void* self, void* signal);
void q_action_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_action_sender(void* self);
QObject* q_action_qbase_sender(void* self);
void q_action_on_sender(void* self, QObject* (*slot)());
int32_t q_action_sender_signal_index(void* self);
int32_t q_action_qbase_sender_signal_index(void* self);
void q_action_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_action_receivers(void* self, const char* signal);
int32_t q_action_qbase_receivers(void* self, const char* signal);
void q_action_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_action_is_signal_connected(void* self, void* signal);
bool q_action_qbase_is_signal_connected(void* self, void* signal);
void q_action_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_action_delete(void* self);

/// https://doc.qt.io/qt-6/qaction.html#types

typedef enum {
    QACTION_MENUROLE_NOROLE = 0,
    QACTION_MENUROLE_TEXTHEURISTICROLE = 1,
    QACTION_MENUROLE_APPLICATIONSPECIFICROLE = 2,
    QACTION_MENUROLE_ABOUTQTROLE = 3,
    QACTION_MENUROLE_ABOUTROLE = 4,
    QACTION_MENUROLE_PREFERENCESROLE = 5,
    QACTION_MENUROLE_QUITROLE = 6
} QAction__MenuRole;

typedef enum {
    QACTION_PRIORITY_LOWPRIORITY = 0,
    QACTION_PRIORITY_NORMALPRIORITY = 128,
    QACTION_PRIORITY_HIGHPRIORITY = 256
} QAction__Priority;

typedef enum {
    QACTION_ACTIONEVENT_TRIGGER = 0,
    QACTION_ACTIONEVENT_HOVER = 1
} QAction__ActionEvent;

#endif
