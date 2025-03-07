#pragma once
#ifndef SRCQT6C_LIBQSTYLEHINTS_H
#define SRCQT6C_LIBQSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqchar.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_stylehints_meta_object(void* self);
void* q_stylehints_metacast(void* self, const char* param1);
int32_t q_stylehints_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_stylehints_tr(const char* s);
void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval);
int32_t q_stylehints_mouse_double_click_interval(void* self);
int32_t q_stylehints_mouse_double_click_distance(void* self);
int32_t q_stylehints_touch_double_tap_distance(void* self);
void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval);
int32_t q_stylehints_mouse_press_and_hold_interval(void* self);
void q_stylehints_set_start_drag_distance(void* self, int startDragDistance);
int32_t q_stylehints_start_drag_distance(void* self);
void q_stylehints_set_start_drag_time(void* self, int startDragTime);
int32_t q_stylehints_start_drag_time(void* self);
int32_t q_stylehints_start_drag_velocity(void* self);
void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval);
int32_t q_stylehints_keyboard_input_interval(void* self);
int32_t q_stylehints_keyboard_auto_repeat_rate(void* self);
void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime);
int32_t q_stylehints_cursor_flash_time(void* self);
bool q_stylehints_show_is_full_screen(void* self);
bool q_stylehints_show_is_maximized(void* self);
bool q_stylehints_show_shortcuts_in_context_menus(void* self);
void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus);
int32_t q_stylehints_password_mask_delay(void* self);
QChar* q_stylehints_password_mask_character(void* self);
double q_stylehints_font_smoothing_gamma(void* self);
bool q_stylehints_use_rtl_extensions(void* self);
bool q_stylehints_set_focus_on_touch_release(void* self);
int64_t q_stylehints_tab_focus_behavior(void* self);
void q_stylehints_set_tab_focus_behavior(void* self, int64_t tabFocusBehavior);
bool q_stylehints_single_click_activation(void* self);
bool q_stylehints_use_hover_effects(void* self);
void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects);
int32_t q_stylehints_wheel_scroll_lines(void* self);
void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines);
void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold);
int32_t q_stylehints_mouse_quick_selection_threshold(void* self);
void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime);
void q_stylehints_on_cursor_flash_time_changed(void* self, void (*slot)(void*, int));
void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval);
void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*slot)(void*, int));
void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval);
void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*slot)(void*, int));
void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval);
void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*slot)(void*, int));
void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance);
void q_stylehints_on_start_drag_distance_changed(void* self, void (*slot)(void*, int));
void q_stylehints_start_drag_time_changed(void* self, int startDragTime);
void q_stylehints_on_start_drag_time_changed(void* self, void (*slot)(void*, int));
void q_stylehints_tab_focus_behavior_changed(void* self, int64_t tabFocusBehavior);
void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*slot)(void*, int64_t));
void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects);
void q_stylehints_on_use_hover_effects_changed(void* self, void (*slot)(void*, bool));
void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1);
void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*slot)(void*, bool));
void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines);
void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*slot)(void*, int));
void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold);
void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*slot)(void*, int));
const char* q_stylehints_tr2(const char* s, const char* c);
const char* q_stylehints_tr3(const char* s, const char* c, int n);
bool q_stylehints_event(void* self, void* event);
bool q_stylehints_event_filter(void* self, void* watched, void* event);
const char* q_stylehints_object_name(void* self);
void q_stylehints_set_object_name(void* self, const char* name);
bool q_stylehints_is_widget_type(void* self);
bool q_stylehints_is_window_type(void* self);
bool q_stylehints_is_quick_item_type(void* self);
bool q_stylehints_signals_blocked(void* self);
bool q_stylehints_block_signals(void* self, bool b);
QThread* q_stylehints_thread(void* self);
void q_stylehints_move_to_thread(void* self, void* thread);
int32_t q_stylehints_start_timer(void* self, int interval);
void q_stylehints_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_stylehints_children(void* self);
void q_stylehints_set_parent(void* self, void* parent);
void q_stylehints_install_event_filter(void* self, void* filterObj);
void q_stylehints_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_stylehints_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_stylehints_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_stylehints_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_stylehints_disconnect_with_q_meta_object_connection(void* param1);
void q_stylehints_dump_object_tree(void* self);
void q_stylehints_dump_object_info(void* self);
bool q_stylehints_set_property(void* self, const char* name, void* value);
QVariant* q_stylehints_property(void* self, const char* name);
const char** q_stylehints_dynamic_property_names(void* self);
QBindingStorage* q_stylehints_binding_storage(void* self);
QBindingStorage* q_stylehints_binding_storage2(void* self);
void q_stylehints_destroyed(void* self);
void q_stylehints_on_destroyed(void* self, void (*slot)(void*));
QObject* q_stylehints_parent(void* self);
bool q_stylehints_inherits(void* self, const char* classname);
void q_stylehints_delete_later(void* self);
int32_t q_stylehints_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_stylehints_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_stylehints_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_stylehints_destroyed1(void* self, void* param1);
void q_stylehints_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_stylehints_delete(void* self);

#endif
