#include "libqchar.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqstylehints.hpp"
#include "libqstylehints.h"

const QMetaObject* q_stylehints_meta_object(void* self) {
    return QStyleHints_MetaObject((QStyleHints*)self);
}

void* q_stylehints_metacast(void* self, const char* param1) {
    return QStyleHints_Metacast((QStyleHints*)self, param1);
}

int32_t q_stylehints_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyleHints_Metacall((QStyleHints*)self, param1, param2, param3);
}

const char* q_stylehints_tr(const char* s) {
    libqt_string _str = QStyleHints_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stylehints_set_mouse_double_click_interval(void* self, int mouseDoubleClickInterval) {
    QStyleHints_SetMouseDoubleClickInterval((QStyleHints*)self, mouseDoubleClickInterval);
}

int32_t q_stylehints_mouse_double_click_interval(void* self) {
    return QStyleHints_MouseDoubleClickInterval((QStyleHints*)self);
}

int32_t q_stylehints_mouse_double_click_distance(void* self) {
    return QStyleHints_MouseDoubleClickDistance((QStyleHints*)self);
}

int32_t q_stylehints_touch_double_tap_distance(void* self) {
    return QStyleHints_TouchDoubleTapDistance((QStyleHints*)self);
}

void q_stylehints_set_mouse_press_and_hold_interval(void* self, int mousePressAndHoldInterval) {
    QStyleHints_SetMousePressAndHoldInterval((QStyleHints*)self, mousePressAndHoldInterval);
}

int32_t q_stylehints_mouse_press_and_hold_interval(void* self) {
    return QStyleHints_MousePressAndHoldInterval((QStyleHints*)self);
}

void q_stylehints_set_start_drag_distance(void* self, int startDragDistance) {
    QStyleHints_SetStartDragDistance((QStyleHints*)self, startDragDistance);
}

int32_t q_stylehints_start_drag_distance(void* self) {
    return QStyleHints_StartDragDistance((QStyleHints*)self);
}

void q_stylehints_set_start_drag_time(void* self, int startDragTime) {
    QStyleHints_SetStartDragTime((QStyleHints*)self, startDragTime);
}

int32_t q_stylehints_start_drag_time(void* self) {
    return QStyleHints_StartDragTime((QStyleHints*)self);
}

int32_t q_stylehints_start_drag_velocity(void* self) {
    return QStyleHints_StartDragVelocity((QStyleHints*)self);
}

void q_stylehints_set_keyboard_input_interval(void* self, int keyboardInputInterval) {
    QStyleHints_SetKeyboardInputInterval((QStyleHints*)self, keyboardInputInterval);
}

int32_t q_stylehints_keyboard_input_interval(void* self) {
    return QStyleHints_KeyboardInputInterval((QStyleHints*)self);
}

int32_t q_stylehints_keyboard_auto_repeat_rate(void* self) {
    return QStyleHints_KeyboardAutoRepeatRate((QStyleHints*)self);
}

double q_stylehints_keyboard_auto_repeat_rate_f(void* self) {
    return QStyleHints_KeyboardAutoRepeatRateF((QStyleHints*)self);
}

void q_stylehints_set_cursor_flash_time(void* self, int cursorFlashTime) {
    QStyleHints_SetCursorFlashTime((QStyleHints*)self, cursorFlashTime);
}

int32_t q_stylehints_cursor_flash_time(void* self) {
    return QStyleHints_CursorFlashTime((QStyleHints*)self);
}

bool q_stylehints_show_is_full_screen(void* self) {
    return QStyleHints_ShowIsFullScreen((QStyleHints*)self);
}

bool q_stylehints_show_is_maximized(void* self) {
    return QStyleHints_ShowIsMaximized((QStyleHints*)self);
}

bool q_stylehints_show_shortcuts_in_context_menus(void* self) {
    return QStyleHints_ShowShortcutsInContextMenus((QStyleHints*)self);
}

void q_stylehints_set_show_shortcuts_in_context_menus(void* self, bool showShortcutsInContextMenus) {
    QStyleHints_SetShowShortcutsInContextMenus((QStyleHints*)self, showShortcutsInContextMenus);
}

int64_t q_stylehints_context_menu_trigger(void* self) {
    return QStyleHints_ContextMenuTrigger((QStyleHints*)self);
}

void q_stylehints_set_context_menu_trigger(void* self, int64_t contextMenuTrigger) {
    QStyleHints_SetContextMenuTrigger((QStyleHints*)self, contextMenuTrigger);
}

int32_t q_stylehints_password_mask_delay(void* self) {
    return QStyleHints_PasswordMaskDelay((QStyleHints*)self);
}

QChar* q_stylehints_password_mask_character(void* self) {
    return QStyleHints_PasswordMaskCharacter((QStyleHints*)self);
}

double q_stylehints_font_smoothing_gamma(void* self) {
    return QStyleHints_FontSmoothingGamma((QStyleHints*)self);
}

bool q_stylehints_use_rtl_extensions(void* self) {
    return QStyleHints_UseRtlExtensions((QStyleHints*)self);
}

bool q_stylehints_set_focus_on_touch_release(void* self) {
    return QStyleHints_SetFocusOnTouchRelease((QStyleHints*)self);
}

int64_t q_stylehints_tab_focus_behavior(void* self) {
    return QStyleHints_TabFocusBehavior((QStyleHints*)self);
}

void q_stylehints_set_tab_focus_behavior(void* self, int64_t tabFocusBehavior) {
    QStyleHints_SetTabFocusBehavior((QStyleHints*)self, tabFocusBehavior);
}

bool q_stylehints_single_click_activation(void* self) {
    return QStyleHints_SingleClickActivation((QStyleHints*)self);
}

bool q_stylehints_use_hover_effects(void* self) {
    return QStyleHints_UseHoverEffects((QStyleHints*)self);
}

void q_stylehints_set_use_hover_effects(void* self, bool useHoverEffects) {
    QStyleHints_SetUseHoverEffects((QStyleHints*)self, useHoverEffects);
}

int32_t q_stylehints_wheel_scroll_lines(void* self) {
    return QStyleHints_WheelScrollLines((QStyleHints*)self);
}

void q_stylehints_set_wheel_scroll_lines(void* self, int scrollLines) {
    QStyleHints_SetWheelScrollLines((QStyleHints*)self, scrollLines);
}

void q_stylehints_set_mouse_quick_selection_threshold(void* self, int threshold) {
    QStyleHints_SetMouseQuickSelectionThreshold((QStyleHints*)self, threshold);
}

int32_t q_stylehints_mouse_quick_selection_threshold(void* self) {
    return QStyleHints_MouseQuickSelectionThreshold((QStyleHints*)self);
}

int64_t q_stylehints_color_scheme(void* self) {
    return QStyleHints_ColorScheme((QStyleHints*)self);
}

void q_stylehints_set_color_scheme(void* self, int64_t scheme) {
    QStyleHints_SetColorScheme((QStyleHints*)self, scheme);
}

void q_stylehints_unset_color_scheme(void* self) {
    QStyleHints_UnsetColorScheme((QStyleHints*)self);
}

void q_stylehints_cursor_flash_time_changed(void* self, int cursorFlashTime) {
    QStyleHints_CursorFlashTimeChanged((QStyleHints*)self, cursorFlashTime);
}

void q_stylehints_on_cursor_flash_time_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_CursorFlashTimeChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_keyboard_input_interval_changed(void* self, int keyboardInputInterval) {
    QStyleHints_KeyboardInputIntervalChanged((QStyleHints*)self, keyboardInputInterval);
}

void q_stylehints_on_keyboard_input_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_KeyboardInputIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_mouse_double_click_interval_changed(void* self, int mouseDoubleClickInterval) {
    QStyleHints_MouseDoubleClickIntervalChanged((QStyleHints*)self, mouseDoubleClickInterval);
}

void q_stylehints_on_mouse_double_click_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MouseDoubleClickIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_mouse_press_and_hold_interval_changed(void* self, int mousePressAndHoldInterval) {
    QStyleHints_MousePressAndHoldIntervalChanged((QStyleHints*)self, mousePressAndHoldInterval);
}

void q_stylehints_on_mouse_press_and_hold_interval_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MousePressAndHoldIntervalChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_start_drag_distance_changed(void* self, int startDragDistance) {
    QStyleHints_StartDragDistanceChanged((QStyleHints*)self, startDragDistance);
}

void q_stylehints_on_start_drag_distance_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_StartDragDistanceChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_start_drag_time_changed(void* self, int startDragTime) {
    QStyleHints_StartDragTimeChanged((QStyleHints*)self, startDragTime);
}

void q_stylehints_on_start_drag_time_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_StartDragTimeChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_tab_focus_behavior_changed(void* self, int64_t tabFocusBehavior) {
    QStyleHints_TabFocusBehaviorChanged((QStyleHints*)self, tabFocusBehavior);
}

void q_stylehints_on_tab_focus_behavior_changed(void* self, void (*slot)(void*, int64_t)) {
    QStyleHints_Connect_TabFocusBehaviorChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_use_hover_effects_changed(void* self, bool useHoverEffects) {
    QStyleHints_UseHoverEffectsChanged((QStyleHints*)self, useHoverEffects);
}

void q_stylehints_on_use_hover_effects_changed(void* self, void (*slot)(void*, bool)) {
    QStyleHints_Connect_UseHoverEffectsChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_show_shortcuts_in_context_menus_changed(void* self, bool param1) {
    QStyleHints_ShowShortcutsInContextMenusChanged((QStyleHints*)self, param1);
}

void q_stylehints_on_show_shortcuts_in_context_menus_changed(void* self, void (*slot)(void*, bool)) {
    QStyleHints_Connect_ShowShortcutsInContextMenusChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_context_menu_trigger_changed(void* self, int64_t contextMenuTrigger) {
    QStyleHints_ContextMenuTriggerChanged((QStyleHints*)self, contextMenuTrigger);
}

void q_stylehints_on_context_menu_trigger_changed(void* self, void (*slot)(void*, int64_t)) {
    QStyleHints_Connect_ContextMenuTriggerChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_wheel_scroll_lines_changed(void* self, int scrollLines) {
    QStyleHints_WheelScrollLinesChanged((QStyleHints*)self, scrollLines);
}

void q_stylehints_on_wheel_scroll_lines_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_WheelScrollLinesChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_mouse_quick_selection_threshold_changed(void* self, int threshold) {
    QStyleHints_MouseQuickSelectionThresholdChanged((QStyleHints*)self, threshold);
}

void q_stylehints_on_mouse_quick_selection_threshold_changed(void* self, void (*slot)(void*, int)) {
    QStyleHints_Connect_MouseQuickSelectionThresholdChanged((QStyleHints*)self, (intptr_t)slot);
}

void q_stylehints_color_scheme_changed(void* self, int64_t colorScheme) {
    QStyleHints_ColorSchemeChanged((QStyleHints*)self, colorScheme);
}

void q_stylehints_on_color_scheme_changed(void* self, void (*slot)(void*, int64_t)) {
    QStyleHints_Connect_ColorSchemeChanged((QStyleHints*)self, (intptr_t)slot);
}

const char* q_stylehints_tr2(const char* s, const char* c) {
    libqt_string _str = QStyleHints_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stylehints_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStyleHints_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_stylehints_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_stylehints_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_stylehints_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stylehints_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_stylehints_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_stylehints_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_stylehints_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_stylehints_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_stylehints_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_stylehints_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_stylehints_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_stylehints_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_stylehints_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_stylehints_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_stylehints_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_stylehints_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_stylehints_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_stylehints_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_stylehints_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_stylehints_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_stylehints_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_stylehints_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_stylehints_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_stylehints_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_stylehints_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_stylehints_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_stylehints_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_stylehints_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_stylehints_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_stylehints_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_stylehints_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_stylehints_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_stylehints_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_stylehints_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_stylehints_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_stylehints_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_stylehints_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_stylehints_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_stylehints_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_stylehints_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_stylehints_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_stylehints_delete(void* self) {
    QStyleHints_Delete((QStyleHints*)(self));
}
