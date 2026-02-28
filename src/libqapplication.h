#pragma once
#ifndef SRC_QT6C_LIBQAPPLICATION_H
#define SRC_QT6C_LIBQAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html)

/// q_application_new constructs a new QApplication object.
///
/// @param argc int*
/// @param argv char**
///
QApplication* q_application_new(int* argc, char** argv);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html)

/// q_application_new2 constructs a new QApplication object.
///
/// @param argc int*
/// @param argv char**
/// @param param3 int
///
QApplication* q_application_new2(int* argc, char** argv, int param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QApplication*
///
const QMetaObject* q_application_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback const QMetaObject* func()
///
void q_application_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_application_super_meta_object` instead
///
#define q_application_qbase_meta_object q_application_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QApplication*
///
const QMetaObject* q_application_super_meta_object(void* self);

/// @param self QApplication*
/// @param param1 const char*
///
void* q_application_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback void* func(QApplication* self, const char* param1)
///
void q_application_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_application_super_metacast` instead
///
#define q_application_qbase_metacast q_application_super_metacast

/// Base class method implementation
///
/// @param self QApplication*
/// @param param1 const char*
///
void* q_application_super_metacast(void* self, const char* param1);

/// @param self QApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_application_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback int32_t func(QApplication* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_application_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_application_super_metacall` instead
///
#define q_application_qbase_metacall q_application_super_metacall

/// Base class method implementation
///
/// @param self QApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_application_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_application_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#style)
///
QStyle* q_application_style();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// @param style QStyle*
///
void q_application_set_style(void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// @param style const char*
///
QStyle* q_application_set_style2(const char* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// @param param1 QWidget*
///
QPalette* q_application_palette(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// @param className const char*
///
QPalette* q_application_palette2(const char* className);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// @param param1 QPalette*
///
void q_application_set_palette(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
///
QFont* q_application_font();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// @param param1 QWidget*
///
QFont* q_application_font2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// @param className const char*
///
QFont* q_application_font3(const char* className);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// @param param1 QFont*
///
void q_application_set_font(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
///
QFontMetrics* q_application_font_metrics();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
///
/// @return libqt_list of QWidget*
///
libqt_list q_application_all_widgets();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
///
/// @return libqt_list of QWidget*
///
libqt_list q_application_top_level_widgets();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
///
QWidget* q_application_active_popup_widget();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
///
QWidget* q_application_active_modal_widget();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
///
QWidget* q_application_focus_widget();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
///
QWidget* q_application_active_window();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
///
/// @param act QWidget*
///
void q_application_set_active_window(void* act);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// @param p QPoint*
///
QWidget* q_application_widget_at(void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// @param x int
/// @param y int
///
QWidget* q_application_widget_at2(int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// @param p QPoint*
///
QWidget* q_application_top_level_at(void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// @param x int
/// @param y int
///
QWidget* q_application_top_level_at2(int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#beep)
///
void q_application_beep();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// @param widget QWidget*
///
void q_application_alert(void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
///
/// @param cursorFlashTime int
///
void q_application_set_cursor_flash_time(int cursorFlashTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
///
int32_t q_application_cursor_flash_time();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
///
/// @param doubleClickInterval int
///
void q_application_set_double_click_interval(int doubleClickInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
///
int32_t q_application_double_click_interval();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
///
/// @param keyboardInputInterval int
///
void q_application_set_keyboard_input_interval(int keyboardInputInterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
///
int32_t q_application_keyboard_input_interval();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
///
/// @param wheelScrollLines int
///
void q_application_set_wheel_scroll_lines(int wheelScrollLines);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
///
int32_t q_application_wheel_scroll_lines();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
///
/// @param ms int
///
void q_application_set_start_drag_time(int ms);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
///
int32_t q_application_start_drag_time();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
///
/// @param l int
///
void q_application_set_start_drag_distance(int l);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
///
int32_t q_application_start_drag_distance();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
///
/// @param param1 enum Qt__UIEffect
///
bool q_application_is_effect_enabled(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// @param param1 enum Qt__UIEffect
///
void q_application_set_effect_enabled(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#exec)
///
int32_t q_application_exec();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// @param self QApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_application_notify(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback bool func(QApplication* self, QObject* param1, QEvent* param2)
///
void q_application_on_notify(void* self, bool (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `q_application_super_notify` instead
///
#define q_application_qbase_notify q_application_super_notify

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// Base class method implementation
///
/// @param self QApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_application_super_notify(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// @param self QApplication*
/// @param name const char*
/// @param revision int
///
void* q_application_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback void* func(QApplication* self, const char* name, int revision)
///
void q_application_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// @warning DEPRECATED: Use `q_application_super_resolve_interface` instead
///
#define q_application_qbase_resolve_interface q_application_super_resolve_interface

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QApplication*
/// @param name const char*
/// @param revision int
///
void* q_application_super_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
///
/// @param self QApplication*
/// @param old QWidget*
/// @param now QWidget*
///
void q_application_focus_changed(void* self, void* old, void* now);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QWidget* old, QWidget* now)
///
void q_application_on_focus_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QApplication*
///
const char* q_application_style_sheet(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
///
/// @param self QApplication*
///
bool q_application_auto_sip_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
///
/// @param self QApplication*
/// @param sheet const char*
///
void q_application_set_style_sheet(void* self, const char* sheet);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
///
/// @param self QApplication*
/// @param enabled bool
///
void q_application_set_auto_sip_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
///
void q_application_close_all_windows();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
///
void q_application_about_qt();

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// @param self QApplication*
/// @param param1 QEvent*
///
bool q_application_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QApplication*
/// @param callback bool func(QApplication* self, QEvent* param1)
///
void q_application_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_application_super_event` instead
///
#define q_application_qbase_event q_application_super_event

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// Base class method implementation
///
/// @param self QApplication*
/// @param param1 QEvent*
///
bool q_application_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_application_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_application_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// @param param1 QPalette*
/// @param className const char*
///
void q_application_set_palette2(void* param1, const char* className);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// @param param1 QFont*
/// @param className const char*
///
void q_application_set_font2(void* param1, const char* className);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// @param widget QWidget*
/// @param duration int
///
void q_application_alert2(void* widget, int duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// @param param1 enum Qt__UIEffect
/// @param enable bool
///
void q_application_set_effect_enabled2(int32_t param1, bool enable);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// @param name const char*
///
void q_application_set_application_display_name(const char* name);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_application_display_name();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
///
/// @param self QApplication*
/// @param number long long
///
void q_application_set_badge_number(void* self, long long number);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// @param name const char*
///
void q_application_set_desktop_file_name(const char* name);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_desktop_file_name();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
/// @return libqt_list of QWindow*
///
libqt_list q_application_all_windows();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
/// @return libqt_list of QWindow*
///
libqt_list q_application_top_level_windows();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// @param icon QIcon*
///
void q_application_set_window_icon(void* icon);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
QIcon* q_application_window_icon();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_platform_name();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
QWindow* q_application_modal_window();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
QWindow* q_application_focus_window();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
QObject* q_application_focus_object();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
QScreen* q_application_primary_screen();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
/// @return libqt_list of QScreen*
///
libqt_list q_application_screens();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// @param point QPoint*
///
QScreen* q_application_screen_at(void* point);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// @param self QApplication*
///
double q_application_device_pixel_ratio(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
QCursor* q_application_override_cursor();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// @param overrideCursor QCursor*
///
void q_application_set_override_cursor(void* overrideCursor);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// @param param1 QCursor*
///
void q_application_change_override_cursor(void* param1);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
void q_application_restore_override_cursor();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
QClipboard* q_application_clipboard();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_application_keyboard_modifiers();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_application_query_keyboard_modifiers();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_application_mouse_buttons();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// @param direction enum Qt__LayoutDirection
///
void q_application_set_layout_direction(int32_t direction);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
/// @return enum Qt__LayoutDirection
///
int32_t q_application_layout_direction();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
bool q_application_is_right_to_left();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
bool q_application_is_left_to_right();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
QStyleHints* q_application_style_hints();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// @param on bool
///
void q_application_set_desktop_settings_aware(bool on);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
bool q_application_desktop_settings_aware();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
QInputMethod* q_application_input_method();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformFunction)
///
/// @param function char*
///
/// @return void (*QFunctionPointer)()
///
QFunctionPointer q_application_platform_function(char* function);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// @param quit bool
///
void q_application_set_quit_on_last_window_closed(bool quit);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
bool q_application_quit_on_last_window_closed();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
/// @return enum Qt__ApplicationState
///
int32_t q_application_application_state();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// @param policy enum Qt__HighDpiScaleFactorRoundingPolicy
///
void q_application_set_high_dpi_scale_factor_rounding_policy(int32_t policy);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
/// @return enum Qt__HighDpiScaleFactorRoundingPolicy
///
int32_t q_application_high_dpi_scale_factor_rounding_policy();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// @param self QApplication*
///
bool q_application_is_session_restored(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QApplication*
///
const char* q_application_session_id(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QApplication*
///
const char* q_application_session_key(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// @param self QApplication*
///
bool q_application_is_saving_session(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
void q_application_sync();

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// @param self QApplication*
///
void q_application_font_database_changed(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_font_database_changed(void* self, void (*callback)(void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// @param self QApplication*
/// @param screen QScreen*
///
void q_application_screen_added(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QScreen* screen)
///
void q_application_on_screen_added(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// @param self QApplication*
/// @param screen QScreen*
///
void q_application_screen_removed(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QScreen* screen)
///
void q_application_on_screen_removed(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// @param self QApplication*
/// @param screen QScreen*
///
void q_application_primary_screen_changed(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QScreen* screen)
///
void q_application_on_primary_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// @param self QApplication*
///
void q_application_last_window_closed(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_last_window_closed(void* self, void (*callback)(void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// @param self QApplication*
/// @param focusObject QObject*
///
void q_application_focus_object_changed(void* self, void* focusObject);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QObject* focusObject)
///
void q_application_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// @param self QApplication*
/// @param focusWindow QWindow*
///
void q_application_focus_window_changed(void* self, void* focusWindow);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QWindow* focusWindow)
///
void q_application_on_focus_window_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// @param self QApplication*
/// @param state enum Qt__ApplicationState
///
void q_application_application_state_changed(void* self, int32_t state);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, enum Qt__ApplicationState state)
///
void q_application_on_application_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// @param self QApplication*
/// @param direction enum Qt__LayoutDirection
///
void q_application_layout_direction_changed(void* self, int32_t direction);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, enum Qt__LayoutDirection direction)
///
void q_application_on_layout_direction_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// @param self QApplication*
/// @param sessionManager QSessionManager*
///
void q_application_commit_data_request(void* self, void* sessionManager);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QSessionManager* sessionManager)
///
void q_application_on_commit_data_request(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// @param self QApplication*
/// @param sessionManager QSessionManager*
///
void q_application_save_state_request(void* self, void* sessionManager);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QSessionManager* sessionManager)
///
void q_application_on_save_state_request(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// @param self QApplication*
///
void q_application_application_display_name_changed(void* self);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_application_display_name_changed(void* self, void (*callback)(void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// @param self QApplication*
/// @param pal QPalette*
///
void q_application_palette_changed(void* self, void* pal);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QPalette* pal)
///
void q_application_on_palette_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// @param self QApplication*
/// @param font QFont*
///
void q_application_font_changed(void* self, void* font);

/// Inherited from QGuiApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QFont* font)
///
void q_application_on_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_application_arguments();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
///
void q_application_set_attribute(int32_t attribute);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
///
bool q_application_test_attribute(int32_t attribute);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// @param orgDomain const char*
///
void q_application_set_organization_domain(const char* orgDomain);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_organization_domain();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// @param orgName const char*
///
void q_application_set_organization_name(const char* orgName);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_organization_name();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// @param application const char*
///
void q_application_set_application_name(const char* application);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_application_name();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// @param version const char*
///
void q_application_set_application_version(const char* version);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_application_version();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// @param allow bool
///
void q_application_set_setuid_allowed(bool allow);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
bool q_application_is_setuid_allowed();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
QCoreApplication* q_application_instance();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
void q_application_process_events();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param maxtime int
///
void q_application_process_events2(int32_t flags, int maxtime);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param deadline QDeadlineTimer*
///
void q_application_process_events3(int32_t flags, void* deadline);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
///
bool q_application_send_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
///
void q_application_post_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
void q_application_send_posted_events();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
///
void q_application_remove_posted_events(void* receiver);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
QAbstractEventDispatcher* q_application_event_dispatcher();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// @param eventDispatcher QAbstractEventDispatcher*
///
void q_application_set_event_dispatcher(void* eventDispatcher);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
bool q_application_starting_up();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
bool q_application_closing_down();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_application_dir_path();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_application_application_file_path();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
long long q_application_application_pid();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
///
/// @param self QApplication*
/// @param permission QPermission*
///
/// @return enum Qt__PermissionStatus
///
int32_t q_application_check_permission(void* self, void* permission);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// @param libraryPaths const char**
///
void q_application_set_library_paths(const char* libraryPaths[static 1]);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_application_library_paths();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// @param param1 const char*
///
void q_application_add_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// @param param1 const char*
///
void q_application_remove_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// @param messageFile QTranslator*
///
bool q_application_install_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// @param messageFile QTranslator*
///
bool q_application_remove_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param context const char*
/// @param key const char*
///
const char* q_application_translate(const char* context, const char* key);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QApplication*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_application_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QAbstractNativeEventFilter* filterObj)
///
void q_application_on_install_native_event_filter(void* self, void (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QApplication*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_application_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QAbstractNativeEventFilter* filterObj)
///
void q_application_on_remove_native_event_filter(void* self, void (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
bool q_application_is_quit_lock_enabled();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// @param enabled bool
///
void q_application_set_quit_lock_enabled(bool enabled);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
void q_application_quit();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
void q_application_exit();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QApplication*
///
void q_application_organization_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_organization_name_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QApplication*
///
void q_application_organization_domain_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_organization_domain_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QApplication*
///
void q_application_application_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_application_name_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QApplication*
///
void q_application_application_version_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_application_version_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
/// @param on bool
///
void q_application_set_attribute2(int32_t attribute, bool on);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
///
void q_application_process_events1(int32_t flags);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
/// @param priority int
///
void q_application_post_event3(void* receiver, void* event, int priority);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
///
void q_application_send_posted_events1(void* receiver);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
/// @param event_type int
///
void q_application_send_posted_events2(void* receiver, int event_type);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
/// @param eventType int
///
void q_application_remove_posted_events2(void* receiver, int eventType);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param context const char*
/// @param key const char*
/// @param disambiguation const char*
///
const char* q_application_translate3(const char* context, const char* key, const char* disambiguation);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param context const char*
/// @param key const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_application_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// @param retcode int
///
void q_application_exit1(int retcode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QApplication*
///
const char* q_application_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QApplication*
/// @param name const char*
///
void q_application_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QApplication*
///
bool q_application_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QApplication*
///
bool q_application_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QApplication*
///
bool q_application_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QApplication*
///
bool q_application_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QApplication*
/// @param b bool
///
bool q_application_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QApplication*
///
QThread* q_application_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QApplication*
/// @param thread QThread*
///
bool q_application_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QApplication*
/// @param interval int
///
int32_t q_application_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QApplication*
/// @param time int64_t of nanoseconds
///
int32_t q_application_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QApplication*
/// @param id int
///
void q_application_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QApplication*
/// @param id enum Qt__TimerId
///
void q_application_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QApplication*
///
/// @return libqt_list of QObject*
///
libqt_list q_application_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QApplication*
/// @param parent QObject*
///
void q_application_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QApplication*
/// @param filterObj QObject*
///
void q_application_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QApplication*
/// @param obj QObject*
///
void q_application_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_application_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_application_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_application_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_application_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_application_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
///
bool q_application_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
/// @param receiver QObject*
///
bool q_application_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_application_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QApplication*
///
void q_application_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QApplication*
///
void q_application_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QApplication*
/// @param name const char*
/// @param value QVariant*
///
bool q_application_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QApplication*
/// @param name const char*
///
QVariant* q_application_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QApplication*
///
const char** q_application_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QApplication*
///
QBindingStorage* q_application_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QApplication*
///
const QBindingStorage* q_application_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QApplication*
///
void q_application_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QApplication*
///
QObject* q_application_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QApplication*
/// @param classname const char*
///
bool q_application_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QApplication*
///
void q_application_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QApplication*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_application_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QApplication*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_application_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_application_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_application_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_application_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
/// @param signal const char*
///
bool q_application_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_application_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_application_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QApplication*
/// @param receiver QObject*
/// @param member const char*
///
bool q_application_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QApplication*
/// @param param1 QObject*
///
void q_application_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QObject* param1)
///
void q_application_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_application_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_application_super_event_filter` instead
///
#define q_application_qbase_event_filter q_application_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_application_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback bool func(QApplication* self, QObject* watched, QEvent* event)
///
void q_application_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param event QTimerEvent*
///
void q_application_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_application_super_timer_event` instead
///
#define q_application_qbase_timer_event q_application_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param event QTimerEvent*
///
void q_application_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QTimerEvent* event)
///
void q_application_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param event QChildEvent*
///
void q_application_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_application_super_child_event` instead
///
#define q_application_qbase_child_event q_application_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param event QChildEvent*
///
void q_application_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QChildEvent* event)
///
void q_application_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param event QEvent*
///
void q_application_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_application_super_custom_event` instead
///
#define q_application_qbase_custom_event q_application_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param event QEvent*
///
void q_application_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QEvent* event)
///
void q_application_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
void q_application_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_application_super_connect_notify` instead
///
#define q_application_qbase_connect_notify q_application_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
void q_application_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QMetaMethod* signal)
///
void q_application_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
void q_application_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_application_super_disconnect_notify` instead
///
#define q_application_qbase_disconnect_notify q_application_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
void q_application_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, QMetaMethod* signal)
///
void q_application_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
///
QObject* q_application_sender(void* self);

/// @warning DEPRECATED: Use `q_application_super_sender` instead
///
#define q_application_qbase_sender q_application_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
///
QObject* q_application_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback QObject* func()
///
void q_application_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
///
int32_t q_application_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_application_super_sender_signal_index` instead
///
#define q_application_qbase_sender_signal_index q_application_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
///
int32_t q_application_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback int32_t func()
///
void q_application_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param signal const char*
///
int32_t q_application_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_application_super_receivers` instead
///
#define q_application_qbase_receivers q_application_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param signal const char*
///
int32_t q_application_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback int32_t func(QApplication* self, const char* signal)
///
void q_application_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
bool q_application_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_application_super_is_signal_connected` instead
///
#define q_application_qbase_is_signal_connected q_application_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplication*
/// @param signal QMetaMethod*
///
bool q_application_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplication*
/// @param callback bool func(QApplication* self, QMetaMethod* signal)
///
void q_application_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
///
/// Wrapper to allow calling private signal
///
/// @param self QApplication*
/// @param callback void func(QApplication* self)
///
void q_application_on_about_to_quit(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QApplication*
/// @param callback void func(QApplication* self, const char* objectName)
///
void q_application_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#dtor.QApplication)
///
/// Delete this object from C++ memory.
///
/// @param self QApplication*
///
void q_application_delete(void* self);

#endif
