#pragma once
#ifndef SRC_QT6C_LIBQSTYLEHINTS_H
#define SRC_QT6C_LIBQSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstylehints.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStyleHints*
const QMetaObject* q_stylehints_meta_object(void* self);

/// @param self QStyleHints*
/// @param param1 const char*
void* q_stylehints_metacast(void* self, const char* param1);

/// @param self QStyleHints*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_stylehints_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_stylehints_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
///
/// @param self QStyleHints*
/// @param mouseDoubleClickInterval int
void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
///
/// @param self QStyleHints*
int32_t q_stylehints_mouse_double_click_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
///
/// @param self QStyleHints*
int32_t q_stylehints_mouse_double_click_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
///
/// @param self QStyleHints*
int32_t q_stylehints_touch_double_tap_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
///
/// @param self QStyleHints*
/// @param mousePressAndHoldInterval int
void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
///
/// @param self QStyleHints*
int32_t q_stylehints_mouse_press_and_hold_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
///
/// @param self QStyleHints*
/// @param startDragDistance int
void q_stylehints_set_start_drag_distance(void* self, int startDragDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
///
/// @param self QStyleHints*
int32_t q_stylehints_start_drag_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
///
/// @param self QStyleHints*
/// @param startDragTime int
void q_stylehints_set_start_drag_time(void* self, int startDragTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
///
/// @param self QStyleHints*
int32_t q_stylehints_start_drag_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
///
/// @param self QStyleHints*
int32_t q_stylehints_start_drag_velocity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
///
/// @param self QStyleHints*
/// @param keyboardInputInterval int
void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
///
/// @param self QStyleHints*
int32_t q_stylehints_keyboard_input_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
///
/// @param self QStyleHints*
int32_t q_stylehints_keyboard_auto_repeat_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRateF)
///
/// @param self QStyleHints*
double q_stylehints_keyboard_auto_repeat_rate_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
///
/// @param self QStyleHints*
/// @param cursorFlashTime int
void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
///
/// @param self QStyleHints*
int32_t q_stylehints_cursor_flash_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
///
/// @param self QStyleHints*
bool q_stylehints_show_is_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
///
/// @param self QStyleHints*
bool q_stylehints_show_is_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
///
/// @param self QStyleHints*
bool q_stylehints_show_shortcuts_in_context_menus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
///
/// @param self QStyleHints*
/// @param showShortcutsInContextMenus bool
void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTrigger)
///
/// @param self QStyleHints*
///
/// @return enum Qt__ContextMenuTrigger
int32_t q_stylehints_context_menu_trigger(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setContextMenuTrigger)
///
/// @param self QStyleHints*
/// @param contextMenuTrigger enum Qt__ContextMenuTrigger
void q_stylehints_set_context_menu_trigger(void* self, int32_t contextMenuTrigger);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
///
/// @param self QStyleHints*
int32_t q_stylehints_password_mask_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
///
/// @param self QStyleHints*
QChar* q_stylehints_password_mask_character(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
///
/// @param self QStyleHints*
double q_stylehints_font_smoothing_gamma(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
///
/// @param self QStyleHints*
bool q_stylehints_use_rtl_extensions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
///
/// @param self QStyleHints*
bool q_stylehints_set_focus_on_touch_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
///
/// @param self QStyleHints*
///
/// @return enum Qt__TabFocusBehavior
int32_t q_stylehints_tab_focus_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
///
/// @param self QStyleHints*
/// @param tabFocusBehavior enum Qt__TabFocusBehavior
void q_stylehints_set_tab_focus_behavior(void* self, int32_t tabFocusBehavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
///
/// @param self QStyleHints*
bool q_stylehints_single_click_activation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
///
/// @param self QStyleHints*
bool q_stylehints_use_hover_effects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
///
/// @param self QStyleHints*
/// @param useHoverEffects bool
void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
///
/// @param self QStyleHints*
int32_t q_stylehints_wheel_scroll_lines(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
///
/// @param self QStyleHints*
/// @param scrollLines int
void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
///
/// @param self QStyleHints*
/// @param threshold int
void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
///
/// @param self QStyleHints*
int32_t q_stylehints_mouse_quick_selection_threshold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorScheme)
///
/// @param self QStyleHints*
///
/// @return enum Qt__ColorScheme
int32_t q_stylehints_color_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setColorScheme)
///
/// @param self QStyleHints*
/// @param scheme enum Qt__ColorScheme
void q_stylehints_set_color_scheme(void* self, int32_t scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#unsetColorScheme)
///
/// @param self QStyleHints*
void q_stylehints_unset_color_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// @param self QStyleHints*
/// @param cursorFlashTime int
void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int cursorFlashTime)
void q_stylehints_on_cursor_flash_time_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// @param self QStyleHints*
/// @param keyboardInputInterval int
void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int keyboardInputInterval)
void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// @param self QStyleHints*
/// @param mouseDoubleClickInterval int
void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int mouseDoubleClickInterval)
void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// @param self QStyleHints*
/// @param mousePressAndHoldInterval int
void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int mousePressAndHoldInterval)
void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// @param self QStyleHints*
/// @param startDragDistance int
void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int startDragDistance)
void q_stylehints_on_start_drag_distance_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// @param self QStyleHints*
/// @param startDragTime int
void q_stylehints_start_drag_time_changed(void* self, int startDragTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int startDragTime)
void q_stylehints_on_start_drag_time_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// @param self QStyleHints*
/// @param tabFocusBehavior enum Qt__TabFocusBehavior
void q_stylehints_tab_focus_behavior_changed(void* self, int32_t tabFocusBehavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior)
void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// @param self QStyleHints*
/// @param useHoverEffects bool
void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, bool useHoverEffects)
void q_stylehints_on_use_hover_effects_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// @param self QStyleHints*
/// @param param1 bool
void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, bool param1)
void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// @param self QStyleHints*
/// @param contextMenuTrigger enum Qt__ContextMenuTrigger
void q_stylehints_context_menu_trigger_changed(void* self, int32_t contextMenuTrigger);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__ContextMenuTrigger contextMenuTrigger)
void q_stylehints_on_context_menu_trigger_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// @param self QStyleHints*
/// @param scrollLines int
void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int scrollLines)
void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// @param self QStyleHints*
/// @param threshold int
void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, int threshold)
void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// @param self QStyleHints*
/// @param colorScheme enum Qt__ColorScheme
void q_stylehints_color_scheme_changed(void* self, int32_t colorScheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, enum Qt__ColorScheme colorScheme)
void q_stylehints_on_color_scheme_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_stylehints_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_stylehints_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QStyleHints*
/// @param event QEvent*
bool q_stylehints_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QStyleHints*
/// @param watched QObject*
/// @param event QEvent*
bool q_stylehints_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleHints*
const char* q_stylehints_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStyleHints*
/// @param name char*
void q_stylehints_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStyleHints*
bool q_stylehints_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStyleHints*
bool q_stylehints_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStyleHints*
bool q_stylehints_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStyleHints*
bool q_stylehints_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStyleHints*
/// @param b bool
bool q_stylehints_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStyleHints*
QThread* q_stylehints_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyleHints*
/// @param thread QThread*
bool q_stylehints_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param interval int
int32_t q_stylehints_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyleHints*
/// @param id int
void q_stylehints_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyleHints*
/// @param id enum Qt__TimerId
void q_stylehints_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStyleHints*
libqt_list /* of QObject* */ q_stylehints_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStyleHints*
/// @param parent QObject*
void q_stylehints_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStyleHints*
/// @param filterObj QObject*
void q_stylehints_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStyleHints*
/// @param obj QObject*
void q_stylehints_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_stylehints_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyleHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_stylehints_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_stylehints_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_stylehints_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStyleHints*
void q_stylehints_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStyleHints*
void q_stylehints_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStyleHints*
/// @param name const char*
/// @param value QVariant*
bool q_stylehints_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStyleHints*
/// @param name const char*
QVariant* q_stylehints_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleHints*
const char** q_stylehints_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyleHints*
QBindingStorage* q_stylehints_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyleHints*
const QBindingStorage* q_stylehints_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
void q_stylehints_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self)
void q_stylehints_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStyleHints*
QObject* q_stylehints_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStyleHints*
/// @param classname const char*
bool q_stylehints_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStyleHints*
void q_stylehints_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyleHints*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_stylehints_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyleHints*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_stylehints_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_stylehints_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyleHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_stylehints_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param param1 QObject*
void q_stylehints_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, QObject* param1)
void q_stylehints_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStyleHints*
/// @param callback void func(QStyleHints* self, const char* objectName)
void q_stylehints_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#dtor.QStyleHints)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHints*
void q_stylehints_delete(void* self);

#endif
