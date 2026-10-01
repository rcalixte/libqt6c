#pragma once
#ifndef LIBQSTYLEHINTS_H
#define LIBQSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QStyleHints*
///
const QMetaObject* q_stylehints_meta_object(const void* self);

/// @param self QStyleHints*
/// @param param1 const char*
///
void* q_stylehints_metacast(void* self, const char* param1);

/// @param self QStyleHints*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_stylehints_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_stylehints_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
///
/// @param self QStyleHints*
/// @param mouseDoubleClickInterval int
///
void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_mouse_double_click_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_mouse_double_click_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_touch_double_tap_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
///
/// @param self QStyleHints*
/// @param mousePressAndHoldInterval int
///
void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_mouse_press_and_hold_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
///
/// @param self QStyleHints*
/// @param startDragDistance int
///
void q_stylehints_set_start_drag_distance(void* self, int startDragDistance);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_start_drag_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
///
/// @param self QStyleHints*
/// @param startDragTime int
///
void q_stylehints_set_start_drag_time(void* self, int startDragTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_start_drag_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_start_drag_velocity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
///
/// @param self QStyleHints*
/// @param keyboardInputInterval int
///
void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_keyboard_input_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_keyboard_auto_repeat_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRateF)
///
/// @param self const QStyleHints*
///
double q_stylehints_keyboard_auto_repeat_rate_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
///
/// @param self QStyleHints*
/// @param cursorFlashTime int
///
void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_cursor_flash_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
///
/// @param self const QStyleHints*
///
bool q_stylehints_show_is_full_screen(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
///
/// @param self const QStyleHints*
///
bool q_stylehints_show_is_maximized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
///
/// @param self const QStyleHints*
///
bool q_stylehints_show_shortcuts_in_context_menus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
///
/// @param self QStyleHints*
/// @param showShortcutsInContextMenus bool
///
void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTrigger)
///
/// @param self const QStyleHints*
///
/// @return enum Qt__ContextMenuTrigger
///
int32_t q_stylehints_context_menu_trigger(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setContextMenuTrigger)
///
/// @param self QStyleHints*
/// @param contextMenuTrigger enum Qt__ContextMenuTrigger
///
void q_stylehints_set_context_menu_trigger(void* self, int32_t contextMenuTrigger);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_password_mask_delay(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
///
/// @param self const QStyleHints*
///
QChar* q_stylehints_password_mask_character(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
///
/// @param self const QStyleHints*
///
double q_stylehints_font_smoothing_gamma(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
///
/// @param self const QStyleHints*
///
bool q_stylehints_use_rtl_extensions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
///
/// @param self const QStyleHints*
///
bool q_stylehints_set_focus_on_touch_release(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
///
/// @param self const QStyleHints*
///
/// @return enum Qt__TabFocusBehavior
///
int32_t q_stylehints_tab_focus_behavior(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
///
/// @param self QStyleHints*
/// @param tabFocusBehavior enum Qt__TabFocusBehavior
///
void q_stylehints_set_tab_focus_behavior(void* self, int32_t tabFocusBehavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
///
/// @param self const QStyleHints*
///
bool q_stylehints_single_click_activation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
///
/// @param self const QStyleHints*
///
bool q_stylehints_use_hover_effects(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
///
/// @param self QStyleHints*
/// @param useHoverEffects bool
///
void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_wheel_scroll_lines(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
///
/// @param self QStyleHints*
/// @param scrollLines int
///
void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
///
/// @param self QStyleHints*
/// @param threshold int
///
void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
///
/// @param self const QStyleHints*
///
int32_t q_stylehints_mouse_quick_selection_threshold(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorScheme)
///
/// @param self const QStyleHints*
///
/// @return enum Qt__ColorScheme
///
int32_t q_stylehints_color_scheme(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#setColorScheme)
///
/// @param self QStyleHints*
/// @param scheme enum Qt__ColorScheme
///
void q_stylehints_set_color_scheme(void* self, int32_t scheme);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#unsetColorScheme)
///
/// @param self QStyleHints*
///
void q_stylehints_unset_color_scheme(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// @param self QStyleHints*
/// @param cursorFlashTime int
///
void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int cursorFlashTime)
///
void q_stylehints_on_cursor_flash_time_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// @param self QStyleHints*
/// @param keyboardInputInterval int
///
void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int keyboardInputInterval)
///
void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// @param self QStyleHints*
/// @param mouseDoubleClickInterval int
///
void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int mouseDoubleClickInterval)
///
void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// @param self QStyleHints*
/// @param mousePressAndHoldInterval int
///
void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int mousePressAndHoldInterval)
///
void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// @param self QStyleHints*
/// @param startDragDistance int
///
void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int startDragDistance)
///
void q_stylehints_on_start_drag_distance_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// @param self QStyleHints*
/// @param startDragTime int
///
void q_stylehints_start_drag_time_changed(void* self, int startDragTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int startDragTime)
///
void q_stylehints_on_start_drag_time_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// @param self QStyleHints*
/// @param tabFocusBehavior enum Qt__TabFocusBehavior
///
void q_stylehints_tab_focus_behavior_changed(void* self, int32_t tabFocusBehavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior)
///
void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// @param self QStyleHints*
/// @param useHoverEffects bool
///
void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, bool useHoverEffects)
///
void q_stylehints_on_use_hover_effects_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// @param self QStyleHints*
/// @param param1 bool
///
void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, bool param1)
///
void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// @param self QStyleHints*
/// @param contextMenuTrigger enum Qt__ContextMenuTrigger
///
void q_stylehints_context_menu_trigger_changed(void* self, int32_t contextMenuTrigger);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__ContextMenuTrigger contextMenuTrigger)
///
void q_stylehints_on_context_menu_trigger_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// @param self QStyleHints*
/// @param scrollLines int
///
void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int scrollLines)
///
void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// @param self QStyleHints*
/// @param threshold int
///
void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int threshold)
///
void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// @param self QStyleHints*
/// @param colorScheme enum Qt__ColorScheme
///
void q_stylehints_color_scheme_changed(void* self, int32_t colorScheme);

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__ColorScheme colorScheme)
///
void q_stylehints_on_color_scheme_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_stylehints_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_stylehints_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QStyleHints*
/// @param event QEvent*
///
bool q_stylehints_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QStyleHints*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_stylehints_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStyleHints*
///
const char* q_stylehints_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStyleHints*
/// @param name const char*
///
void q_stylehints_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QStyleHints*
///
bool q_stylehints_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QStyleHints*
///
bool q_stylehints_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QStyleHints*
///
bool q_stylehints_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QStyleHints*
///
bool q_stylehints_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStyleHints*
/// @param b bool
///
bool q_stylehints_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QStyleHints*
///
QThread* q_stylehints_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyleHints*
/// @param thread QThread*
///
bool q_stylehints_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param interval int
///
int32_t q_stylehints_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param time int64_t of nanoseconds
///
int32_t q_stylehints_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyleHints*
/// @param id int
///
void q_stylehints_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyleHints*
/// @param id enum Qt__TimerId
///
void q_stylehints_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QStyleHints*
///
/// @return libqt_list of QObject*
///
libqt_list q_stylehints_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStyleHints*
/// @param parent QObject*
///
void q_stylehints_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStyleHints*
/// @param filterObj QObject*
///
void q_stylehints_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStyleHints*
/// @param obj QObject*
///
void q_stylehints_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_stylehints_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_stylehints_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QStyleHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_stylehints_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_stylehints_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_stylehints_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
///
bool q_stylehints_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
/// @param receiver QObject*
///
bool q_stylehints_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_stylehints_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QStyleHints*
///
void q_stylehints_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QStyleHints*
///
void q_stylehints_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStyleHints*
/// @param name const char*
/// @param value QVariant*
///
bool q_stylehints_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QStyleHints*
/// @param name const char*
///
QVariant* q_stylehints_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QStyleHints*
///
const char** q_stylehints_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyleHints*
///
QBindingStorage* q_stylehints_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QStyleHints*
///
const QBindingStorage* q_stylehints_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
///
void q_stylehints_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self)
///
void q_stylehints_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QStyleHints*
///
QObject* q_stylehints_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QStyleHints*
/// @param classname const char*
///
bool q_stylehints_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStyleHints*
///
void q_stylehints_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_stylehints_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_stylehints_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_stylehints_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_stylehints_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QStyleHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_stylehints_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
/// @param signal const char*
///
bool q_stylehints_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_stylehints_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_stylehints_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QStyleHints*
/// @param receiver QObject*
/// @param member const char*
///
bool q_stylehints_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param param1 QObject*
///
void q_stylehints_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, QObject* param1)
///
void q_stylehints_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, const char* objectName)
///
void q_stylehints_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstylehints.html#dtor.QStyleHints)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHints*
///
void q_stylehints_delete(void* self);

#endif
