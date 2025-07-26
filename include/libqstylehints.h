#pragma once
#ifndef SRCQT6C_LIBQSTYLEHINTS_H
#define SRCQT6C_LIBQSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstylehints.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStyleHints* self ```
const QMetaObject* q_stylehints_meta_object(void* self);

/// ``` QStyleHints* self, const char* param1 ```
void* q_stylehints_metacast(void* self, const char* param1);

/// ``` QStyleHints* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stylehints_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_stylehints_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
///
/// ``` QStyleHints* self, int mouseDoubleClickInterval ```
void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_double_click_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_double_click_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_touch_double_tap_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
///
/// ``` QStyleHints* self, int mousePressAndHoldInterval ```
void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_press_and_hold_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
///
/// ``` QStyleHints* self, int startDragDistance ```
void q_stylehints_set_start_drag_distance(void* self, int startDragDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
///
/// ``` QStyleHints* self, int startDragTime ```
void q_stylehints_set_start_drag_time(void* self, int startDragTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_velocity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
///
/// ``` QStyleHints* self, int keyboardInputInterval ```
void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_keyboard_input_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_keyboard_auto_repeat_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRateF)
///
/// ``` QStyleHints* self ```
double q_stylehints_keyboard_auto_repeat_rate_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
///
/// ``` QStyleHints* self, int cursorFlashTime ```
void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_cursor_flash_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_is_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_is_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_shortcuts_in_context_menus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
///
/// ``` QStyleHints* self, bool showShortcutsInContextMenus ```
void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTrigger)
///
/// ``` QStyleHints* self ```
int64_t q_stylehints_context_menu_trigger(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setContextMenuTrigger)
///
/// ``` QStyleHints* self, enum Qt__ContextMenuTrigger contextMenuTrigger ```
void q_stylehints_set_context_menu_trigger(void* self, int64_t contextMenuTrigger);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_password_mask_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
///
/// ``` QStyleHints* self ```
QChar* q_stylehints_password_mask_character(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
///
/// ``` QStyleHints* self ```
double q_stylehints_font_smoothing_gamma(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
///
/// ``` QStyleHints* self ```
bool q_stylehints_use_rtl_extensions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
///
/// ``` QStyleHints* self ```
bool q_stylehints_set_focus_on_touch_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
///
/// ``` QStyleHints* self ```
int64_t q_stylehints_tab_focus_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
///
/// ``` QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior ```
void q_stylehints_set_tab_focus_behavior(void* self, int64_t tabFocusBehavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
///
/// ``` QStyleHints* self ```
bool q_stylehints_single_click_activation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
///
/// ``` QStyleHints* self ```
bool q_stylehints_use_hover_effects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
///
/// ``` QStyleHints* self, bool useHoverEffects ```
void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_wheel_scroll_lines(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
///
/// ``` QStyleHints* self, int scrollLines ```
void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
///
/// ``` QStyleHints* self, int threshold ```
void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_quick_selection_threshold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorScheme)
///
/// ``` QStyleHints* self ```
int64_t q_stylehints_color_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setColorScheme)
///
/// ``` QStyleHints* self, enum Qt__ColorScheme scheme ```
void q_stylehints_set_color_scheme(void* self, int64_t scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#unsetColorScheme)
///
/// ``` QStyleHints* self ```
void q_stylehints_unset_color_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// ``` QStyleHints* self, int cursorFlashTime ```
void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_cursor_flash_time_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// ``` QStyleHints* self, int keyboardInputInterval ```
void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// ``` QStyleHints* self, int mouseDoubleClickInterval ```
void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// ``` QStyleHints* self, int mousePressAndHoldInterval ```
void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// ``` QStyleHints* self, int startDragDistance ```
void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_start_drag_distance_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// ``` QStyleHints* self, int startDragTime ```
void q_stylehints_start_drag_time_changed(void* self, int startDragTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_start_drag_time_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// ``` QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior ```
void q_stylehints_tab_focus_behavior_changed(void* self, int64_t tabFocusBehavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, enum Qt__TabFocusBehavior) ```
void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// ``` QStyleHints* self, bool useHoverEffects ```
void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, bool) ```
void q_stylehints_on_use_hover_effects_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// ``` QStyleHints* self, bool param1 ```
void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, bool) ```
void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// ``` QStyleHints* self, enum Qt__ContextMenuTrigger contextMenuTrigger ```
void q_stylehints_context_menu_trigger_changed(void* self, int64_t contextMenuTrigger);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#contextMenuTriggerChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, enum Qt__ContextMenuTrigger) ```
void q_stylehints_on_context_menu_trigger_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// ``` QStyleHints* self, int scrollLines ```
void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// ``` QStyleHints* self, int threshold ```
void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// ``` QStyleHints* self, enum Qt__ColorScheme colorScheme ```
void q_stylehints_color_scheme_changed(void* self, int64_t colorScheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#colorSchemeChanged)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, enum Qt__ColorScheme) ```
void q_stylehints_on_color_scheme_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_stylehints_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_stylehints_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QStyleHints* self, QEvent* event ```
bool q_stylehints_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QStyleHints* self, QObject* watched, QEvent* event ```
bool q_stylehints_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStyleHints* self ```
const char* q_stylehints_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStyleHints* self, char* name ```
void q_stylehints_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStyleHints* self ```
bool q_stylehints_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStyleHints* self, bool b ```
bool q_stylehints_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStyleHints* self ```
QThread* q_stylehints_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStyleHints* self, QThread* thread ```
bool q_stylehints_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyleHints* self, int interval ```
int32_t q_stylehints_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStyleHints* self, int id ```
void q_stylehints_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStyleHints* self, enum Qt__TimerId id ```
void q_stylehints_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStyleHints* self ```
libqt_list /* of QObject* */ q_stylehints_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStyleHints* self, QObject* parent ```
void q_stylehints_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStyleHints* self, QObject* filterObj ```
void q_stylehints_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStyleHints* self, QObject* obj ```
void q_stylehints_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_stylehints_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyleHints* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_stylehints_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_stylehints_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_stylehints_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStyleHints* self ```
void q_stylehints_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStyleHints* self ```
void q_stylehints_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStyleHints* self, const char* name, QVariant* value ```
bool q_stylehints_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStyleHints* self, const char* name ```
QVariant* q_stylehints_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStyleHints* self ```
const char** q_stylehints_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyleHints* self ```
QBindingStorage* q_stylehints_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyleHints* self ```
const QBindingStorage* q_stylehints_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self ```
void q_stylehints_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*) ```
void q_stylehints_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStyleHints* self ```
QObject* q_stylehints_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStyleHints* self, const char* classname ```
bool q_stylehints_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStyleHints* self ```
void q_stylehints_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStyleHints* self, QThread* thread, Disambiguated_t* param2 ```
bool q_stylehints_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyleHints* self, int interval, enum Qt__TimerType timerType ```
int32_t q_stylehints_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stylehints_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyleHints* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stylehints_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self, QObject* param1 ```
void q_stylehints_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, QObject*) ```
void q_stylehints_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QStyleHints* self, void (*slot)(QStyleHints*, const char*) ```
void q_stylehints_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#dtor.QStyleHints)
///
/// Delete this object from C++ memory.
///
/// ``` QStyleHints* self ```
void q_stylehints_delete(void* self);

#endif
