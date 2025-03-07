#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqchar.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqstylehints.hpp"
#include "libqstylehints.h"

/// https://doc.qt.io/qt-6/qstylehints.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStyleHints* self ```
QMetaObject* q_stylehints_meta_object(void* self) {
    return QStyleHints_MetaObject((QStyleHints*)self);
}

/// ``` QStyleHints* self, const char* param1 ```
void* q_stylehints_metacast(void* self, const char* param1) {
    return QStyleHints_Metacast((QStyleHints*)self, param1);
}

/// ``` QStyleHints* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stylehints_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyleHints_Metacall((QStyleHints*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_stylehints_tr(const char* s) {
    libqt_string _str = QStyleHints_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseDoubleClickInterval)
///
/// ``` QStyleHints* self, int mouseDoubleClickInterval ```
void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval) {
    QStyleHints_SetMouseDoubleClickInterval((QStyleHints*)self, mouseDoubleClickInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_double_click_interval(void* self) {
    return QStyleHints_MouseDoubleClickInterval((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_double_click_distance(void* self) {
    return QStyleHints_MouseDoubleClickDistance((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#touchDoubleTapDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_touch_double_tap_distance(void* self) {
    return QStyleHints_TouchDoubleTapDistance((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMousePressAndHoldInterval)
///
/// ``` QStyleHints* self, int mousePressAndHoldInterval ```
void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval) {
    QStyleHints_SetMousePressAndHoldInterval((QStyleHints*)self, mousePressAndHoldInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_press_and_hold_interval(void* self) {
    return QStyleHints_MousePressAndHoldInterval((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragDistance)
///
/// ``` QStyleHints* self, int startDragDistance ```
void q_stylehints_set_start_drag_distance(void* self, int startDragDistance) {
    QStyleHints_SetStartDragDistance((QStyleHints*)self, startDragDistance);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistance)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_distance(void* self) {
    return QStyleHints_StartDragDistance((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setStartDragTime)
///
/// ``` QStyleHints* self, int startDragTime ```
void q_stylehints_set_start_drag_time(void* self, int startDragTime) {
    QStyleHints_SetStartDragTime((QStyleHints*)self, startDragTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTime)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_time(void* self) {
    return QStyleHints_StartDragTime((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragVelocity)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_start_drag_velocity(void* self) {
    return QStyleHints_StartDragVelocity((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setKeyboardInputInterval)
///
/// ``` QStyleHints* self, int keyboardInputInterval ```
void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval) {
    QStyleHints_SetKeyboardInputInterval((QStyleHints*)self, keyboardInputInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputInterval)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_keyboard_input_interval(void* self) {
    return QStyleHints_KeyboardInputInterval((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardAutoRepeatRate)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_keyboard_auto_repeat_rate(void* self) {
    return QStyleHints_KeyboardAutoRepeatRate((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setCursorFlashTime)
///
/// ``` QStyleHints* self, int cursorFlashTime ```
void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime) {
    QStyleHints_SetCursorFlashTime((QStyleHints*)self, cursorFlashTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTime)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_cursor_flash_time(void* self) {
    return QStyleHints_CursorFlashTime((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsFullScreen)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_is_full_screen(void* self) {
    return QStyleHints_ShowIsFullScreen((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showIsMaximized)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_is_maximized(void* self) {
    return QStyleHints_ShowIsMaximized((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenus)
///
/// ``` QStyleHints* self ```
bool q_stylehints_show_shortcuts_in_context_menus(void* self) {
    return QStyleHints_ShowShortcutsInContextMenus((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setShowShortcutsInContextMenus)
///
/// ``` QStyleHints* self, bool showShortcutsInContextMenus ```
void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus) {
    QStyleHints_SetShowShortcutsInContextMenus((QStyleHints*)self, showShortcutsInContextMenus);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskDelay)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_password_mask_delay(void* self) {
    return QStyleHints_PasswordMaskDelay((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#passwordMaskCharacter)
///
/// ``` QStyleHints* self ```
QChar* q_stylehints_password_mask_character(void* self) {
    return QStyleHints_PasswordMaskCharacter((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#fontSmoothingGamma)
///
/// ``` QStyleHints* self ```
double q_stylehints_font_smoothing_gamma(void* self) {
    return QStyleHints_FontSmoothingGamma((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useRtlExtensions)
///
/// ``` QStyleHints* self ```
bool q_stylehints_use_rtl_extensions(void* self) {
    return QStyleHints_UseRtlExtensions((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setFocusOnTouchRelease)
///
/// ``` QStyleHints* self ```
bool q_stylehints_set_focus_on_touch_release(void* self) {
    return QStyleHints_SetFocusOnTouchRelease((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehavior)
///
/// ``` QStyleHints* self ```
int64_t q_stylehints_tab_focus_behavior(void* self) {
    return QStyleHints_TabFocusBehavior((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setTabFocusBehavior)
///
/// ``` QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior ```
void q_stylehints_set_tab_focus_behavior(void* self, int64_t tabFocusBehavior) {
    QStyleHints_SetTabFocusBehavior((QStyleHints*)self, tabFocusBehavior);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#singleClickActivation)
///
/// ``` QStyleHints* self ```
bool q_stylehints_single_click_activation(void* self) {
    return QStyleHints_SingleClickActivation((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffects)
///
/// ``` QStyleHints* self ```
bool q_stylehints_use_hover_effects(void* self) {
    return QStyleHints_UseHoverEffects((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setUseHoverEffects)
///
/// ``` QStyleHints* self, bool useHoverEffects ```
void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects) {
    QStyleHints_SetUseHoverEffects((QStyleHints*)self, useHoverEffects);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLines)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_wheel_scroll_lines(void* self) {
    return QStyleHints_WheelScrollLines((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setWheelScrollLines)
///
/// ``` QStyleHints* self, int scrollLines ```
void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines) {
    QStyleHints_SetWheelScrollLines((QStyleHints*)self, scrollLines);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#setMouseQuickSelectionThreshold)
///
/// ``` QStyleHints* self, int threshold ```
void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold) {
    QStyleHints_SetMouseQuickSelectionThreshold((QStyleHints*)self, threshold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThreshold)
///
/// ``` QStyleHints* self ```
int32_t q_stylehints_mouse_quick_selection_threshold(void* self) {
    return QStyleHints_MouseQuickSelectionThreshold((QStyleHints*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#cursorFlashTimeChanged)
///
/// ``` QStyleHints* self, int cursorFlashTime ```
void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime) {
    QStyleHints_CursorFlashTimeChanged((QStyleHints*)self, cursorFlashTime);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_cursor_flash_time_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_CursorFlashTimeChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#keyboardInputIntervalChanged)
///
/// ``` QStyleHints* self, int keyboardInputInterval ```
void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval) {
    QStyleHints_KeyboardInputIntervalChanged((QStyleHints*)self, keyboardInputInterval);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_KeyboardInputIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseDoubleClickIntervalChanged)
///
/// ``` QStyleHints* self, int mouseDoubleClickInterval ```
void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval) {
    QStyleHints_MouseDoubleClickIntervalChanged((QStyleHints*)self, mouseDoubleClickInterval);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MouseDoubleClickIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mousePressAndHoldIntervalChanged)
///
/// ``` QStyleHints* self, int mousePressAndHoldInterval ```
void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval) {
    QStyleHints_MousePressAndHoldIntervalChanged((QStyleHints*)self, mousePressAndHoldInterval);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MousePressAndHoldIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragDistanceChanged)
///
/// ``` QStyleHints* self, int startDragDistance ```
void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance) {
    QStyleHints_StartDragDistanceChanged((QStyleHints*)self, startDragDistance);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_start_drag_distance_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_StartDragDistanceChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#startDragTimeChanged)
///
/// ``` QStyleHints* self, int startDragTime ```
void q_stylehints_start_drag_time_changed(void* self, int startDragTime) {
    QStyleHints_StartDragTimeChanged((QStyleHints*)self, startDragTime);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_start_drag_time_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_StartDragTimeChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#tabFocusBehaviorChanged)
///
/// ``` QStyleHints* self, enum Qt__TabFocusBehavior tabFocusBehavior ```
void q_stylehints_tab_focus_behavior_changed(void* self, int64_t tabFocusBehavior) {
    QStyleHints_TabFocusBehaviorChanged((QStyleHints*)self, tabFocusBehavior);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, enum Qt__TabFocusBehavior) ```
void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*slot)(void*, int64_t)) {
    QStyleHints_Connect_TabFocusBehaviorChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#useHoverEffectsChanged)
///
/// ``` QStyleHints* self, bool useHoverEffects ```
void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects) {
    QStyleHints_UseHoverEffectsChanged((QStyleHints*)self, useHoverEffects);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, bool) ```
void q_stylehints_on_use_hover_effects_changed(void* self, void (*slot)(void*, bool)) {
    QStyleHints_Connect_UseHoverEffectsChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#showShortcutsInContextMenusChanged)
///
/// ``` QStyleHints* self, bool param1 ```
void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1) {
    QStyleHints_ShowShortcutsInContextMenusChanged((QStyleHints*)self, param1);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, bool) ```
void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*slot)(void*, bool)) {
    QStyleHints_Connect_ShowShortcutsInContextMenusChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#wheelScrollLinesChanged)
///
/// ``` QStyleHints* self, int scrollLines ```
void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines) {
    QStyleHints_WheelScrollLinesChanged((QStyleHints*)self, scrollLines);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_WheelScrollLinesChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehints.html#mouseQuickSelectionThresholdChanged)
///
/// ``` QStyleHints* self, int threshold ```
void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold) {
    QStyleHints_MouseQuickSelectionThresholdChanged((QStyleHints*)self, threshold);
}

/// ``` QStyleHints* self, void (*slot)(QStyleHints*, int) ```
void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MouseQuickSelectionThresholdChanged((QStyleHints*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_stylehints_tr2(const char* s, const char* c) {
    libqt_string _str = QStyleHints_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_stylehints_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStyleHints_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QStyleHints* self, QEvent* event ```
bool q_stylehints_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QStyleHints* self, QObject* watched, QEvent* event ```
bool q_stylehints_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStyleHints* self ```
const char* q_stylehints_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStyleHints* self, const char* name ```
void q_stylehints_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStyleHints* self ```
bool q_stylehints_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStyleHints* self ```
bool q_stylehints_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStyleHints* self, bool b ```
bool q_stylehints_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStyleHints* self ```
QThread* q_stylehints_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStyleHints* self, QThread* thread ```
void q_stylehints_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyleHints* self, int interval ```
int32_t q_stylehints_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStyleHints* self, int id ```
void q_stylehints_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStyleHints* self ```
libqt_list /* of QObject* */ q_stylehints_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStyleHints* self, QObject* parent ```
void q_stylehints_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStyleHints* self, QObject* filterObj ```
void q_stylehints_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStyleHints* self, QObject* obj ```
void q_stylehints_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_stylehints_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyleHints* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_stylehints_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_stylehints_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_stylehints_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStyleHints* self ```
void q_stylehints_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStyleHints* self ```
void q_stylehints_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStyleHints* self, const char* name, QVariant* value ```
bool q_stylehints_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStyleHints* self, const char* name ```
QVariant* q_stylehints_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStyleHints* self ```
const char** q_stylehints_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyleHints* self ```
QBindingStorage* q_stylehints_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyleHints* self ```
QBindingStorage* q_stylehints_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self ```
void q_stylehints_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStyleHints* self, void (*slot)(QObject*) ```
void q_stylehints_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStyleHints* self ```
QObject* q_stylehints_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStyleHints* self, const char* classname ```
bool q_stylehints_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStyleHints* self ```
void q_stylehints_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyleHints* self, int interval, enum Qt__TimerType timerType ```
int32_t q_stylehints_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stylehints_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyleHints* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stylehints_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyleHints* self, QObject* param1 ```
void q_stylehints_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStyleHints* self, void (*slot)(QObject*, QObject*) ```
void q_stylehints_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleHints* self ```
void q_stylehints_delete(void* self) {
    QStyleHints_Delete((QStyleHints*)(self));
}