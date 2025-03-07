#pragma once
#ifndef SRCQT6C_LIBQWIDGETACTION_H
#define SRCQT6C_LIBQWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
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
#include "libqwidget.h"

QWidgetAction* q_widgetaction_new(void* parent);
QMetaObject* q_widgetaction_meta_object(void* self);
void* q_widgetaction_metacast(void* self, const char* param1);
int32_t q_widgetaction_metacall(void* self, int64_t param1, int param2, void* param3);
void q_widgetaction_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_widgetaction_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_widgetaction_tr(const char* s);
void q_widgetaction_set_default_widget(void* self, void* w);
QWidget* q_widgetaction_default_widget(void* self);
QWidget* q_widgetaction_request_widget(void* self, void* parent);
void q_widgetaction_release_widget(void* self, void* widget);
bool q_widgetaction_event(void* self, void* param1);
void q_widgetaction_on_event(void* self, bool (*slot)(void*, void*));
bool q_widgetaction_qbase_event(void* self, void* param1);
bool q_widgetaction_event_filter(void* self, void* param1, void* param2);
void q_widgetaction_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_widgetaction_qbase_event_filter(void* self, void* param1, void* param2);
QWidget* q_widgetaction_create_widget(void* self, void* parent);
void q_widgetaction_on_create_widget(void* self, QWidget* (*slot)(void*, void*));
QWidget* q_widgetaction_qbase_create_widget(void* self, void* parent);
void q_widgetaction_delete_widget(void* self, void* widget);
void q_widgetaction_on_delete_widget(void* self, void (*slot)(void*, void*));
void q_widgetaction_qbase_delete_widget(void* self, void* widget);
libqt_list /* of QWidget* */ q_widgetaction_created_widgets(void* self);
void q_widgetaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*slot)());
libqt_list /* of QWidget* */ q_widgetaction_qbase_created_widgets(void* self);
const char* q_widgetaction_tr2(const char* s, const char* c);
const char* q_widgetaction_tr3(const char* s, const char* c, int n);
libqt_list /* of QObject* */ q_widgetaction_associated_objects(void* self);
void q_widgetaction_set_action_group(void* self, void* group);
QActionGroup* q_widgetaction_action_group(void* self);
void q_widgetaction_set_icon(void* self, void* icon);
QIcon* q_widgetaction_icon(void* self);
void q_widgetaction_set_text(void* self, const char* text);
const char* q_widgetaction_text(void* self);
void q_widgetaction_set_icon_text(void* self, const char* text);
const char* q_widgetaction_icon_text(void* self);
void q_widgetaction_set_tool_tip(void* self, const char* tip);
const char* q_widgetaction_tool_tip(void* self);
void q_widgetaction_set_status_tip(void* self, const char* statusTip);
const char* q_widgetaction_status_tip(void* self);
void q_widgetaction_set_whats_this(void* self, const char* what);
const char* q_widgetaction_whats_this(void* self);
void q_widgetaction_set_priority(void* self, int64_t priority);
int64_t q_widgetaction_priority(void* self);
void q_widgetaction_set_separator(void* self, bool b);
bool q_widgetaction_is_separator(void* self);
void q_widgetaction_set_shortcut(void* self, void* shortcut);
QKeySequence* q_widgetaction_shortcut(void* self);
void q_widgetaction_set_shortcuts(void* self, void* shortcuts[]);
void q_widgetaction_set_shortcuts_with_shortcuts(void* self, int64_t shortcuts);
libqt_list /* of QKeySequence* */ q_widgetaction_shortcuts(void* self);
void q_widgetaction_set_shortcut_context(void* self, int64_t context);
int64_t q_widgetaction_shortcut_context(void* self);
void q_widgetaction_set_auto_repeat(void* self, bool autoRepeat);
bool q_widgetaction_auto_repeat(void* self);
void q_widgetaction_set_font(void* self, void* font);
QFont* q_widgetaction_font(void* self);
void q_widgetaction_set_checkable(void* self, bool checkable);
bool q_widgetaction_is_checkable(void* self);
QVariant* q_widgetaction_data(void* self);
void q_widgetaction_set_data(void* self, void* varVal);
bool q_widgetaction_is_checked(void* self);
bool q_widgetaction_is_enabled(void* self);
bool q_widgetaction_is_visible(void* self);
void q_widgetaction_activate(void* self, int64_t event);
void q_widgetaction_set_menu_role(void* self, int64_t menuRole);
int64_t q_widgetaction_menu_role(void* self);
void q_widgetaction_set_icon_visible_in_menu(void* self, bool visible);
bool q_widgetaction_is_icon_visible_in_menu(void* self);
void q_widgetaction_set_shortcut_visible_in_context_menu(void* self, bool show);
bool q_widgetaction_is_shortcut_visible_in_context_menu(void* self);
bool q_widgetaction_show_status_text(void* self);
void q_widgetaction_trigger(void* self);
void q_widgetaction_hover(void* self);
void q_widgetaction_set_checked(void* self, bool checked);
void q_widgetaction_toggle(void* self);
void q_widgetaction_set_enabled(void* self, bool enabled);
void q_widgetaction_reset_enabled(void* self);
void q_widgetaction_set_disabled(void* self, bool b);
void q_widgetaction_set_visible(void* self, bool visible);
void q_widgetaction_changed(void* self);
void q_widgetaction_on_changed(void* self, void (*slot)(void*));
void q_widgetaction_enabled_changed(void* self, bool enabled);
void q_widgetaction_on_enabled_changed(void* self, void (*slot)(void*, bool));
void q_widgetaction_checkable_changed(void* self, bool checkable);
void q_widgetaction_on_checkable_changed(void* self, void (*slot)(void*, bool));
void q_widgetaction_visible_changed(void* self);
void q_widgetaction_on_visible_changed(void* self, void (*slot)(void*));
void q_widgetaction_triggered(void* self);
void q_widgetaction_on_triggered(void* self, void (*slot)(void*));
void q_widgetaction_hovered(void* self);
void q_widgetaction_on_hovered(void* self, void (*slot)(void*));
void q_widgetaction_toggled(void* self, bool param1);
void q_widgetaction_on_toggled(void* self, void (*slot)(void*, bool));
bool q_widgetaction_show_status_text1(void* self, void* object);
void q_widgetaction_triggered1(void* self, bool checked);
void q_widgetaction_on_triggered1(void* self, void (*slot)(void*, bool));
const char* q_widgetaction_object_name(void* self);
void q_widgetaction_set_object_name(void* self, const char* name);
bool q_widgetaction_is_widget_type(void* self);
bool q_widgetaction_is_window_type(void* self);
bool q_widgetaction_is_quick_item_type(void* self);
bool q_widgetaction_signals_blocked(void* self);
bool q_widgetaction_block_signals(void* self, bool b);
QThread* q_widgetaction_thread(void* self);
void q_widgetaction_move_to_thread(void* self, void* thread);
int32_t q_widgetaction_start_timer(void* self, int interval);
void q_widgetaction_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_widgetaction_children(void* self);
void q_widgetaction_set_parent(void* self, void* parent);
void q_widgetaction_install_event_filter(void* self, void* filterObj);
void q_widgetaction_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_widgetaction_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_widgetaction_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_widgetaction_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_widgetaction_disconnect_with_q_meta_object_connection(void* param1);
void q_widgetaction_dump_object_tree(void* self);
void q_widgetaction_dump_object_info(void* self);
bool q_widgetaction_set_property(void* self, const char* name, void* value);
QVariant* q_widgetaction_property(void* self, const char* name);
const char** q_widgetaction_dynamic_property_names(void* self);
QBindingStorage* q_widgetaction_binding_storage(void* self);
QBindingStorage* q_widgetaction_binding_storage2(void* self);
void q_widgetaction_destroyed(void* self);
void q_widgetaction_on_destroyed(void* self, void (*slot)(void*));
QObject* q_widgetaction_parent(void* self);
bool q_widgetaction_inherits(void* self, const char* classname);
void q_widgetaction_delete_later(void* self);
int32_t q_widgetaction_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_widgetaction_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_widgetaction_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_widgetaction_destroyed1(void* self, void* param1);
void q_widgetaction_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_widgetaction_timer_event(void* self, void* event);
void q_widgetaction_qbase_timer_event(void* self, void* event);
void q_widgetaction_on_timer_event(void* self, void (*slot)(void*, void*));
void q_widgetaction_child_event(void* self, void* event);
void q_widgetaction_qbase_child_event(void* self, void* event);
void q_widgetaction_on_child_event(void* self, void (*slot)(void*, void*));
void q_widgetaction_custom_event(void* self, void* event);
void q_widgetaction_qbase_custom_event(void* self, void* event);
void q_widgetaction_on_custom_event(void* self, void (*slot)(void*, void*));
void q_widgetaction_connect_notify(void* self, void* signal);
void q_widgetaction_qbase_connect_notify(void* self, void* signal);
void q_widgetaction_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_widgetaction_disconnect_notify(void* self, void* signal);
void q_widgetaction_qbase_disconnect_notify(void* self, void* signal);
void q_widgetaction_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_widgetaction_sender(void* self);
QObject* q_widgetaction_qbase_sender(void* self);
void q_widgetaction_on_sender(void* self, QObject* (*slot)());
int32_t q_widgetaction_sender_signal_index(void* self);
int32_t q_widgetaction_qbase_sender_signal_index(void* self);
void q_widgetaction_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_widgetaction_receivers(void* self, const char* signal);
int32_t q_widgetaction_qbase_receivers(void* self, const char* signal);
void q_widgetaction_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_widgetaction_is_signal_connected(void* self, void* signal);
bool q_widgetaction_qbase_is_signal_connected(void* self, void* signal);
void q_widgetaction_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_widgetaction_delete(void* self);

#endif
