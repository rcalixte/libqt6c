#pragma once
#ifndef SRCQT6C_LIBQAPPLICATION_H
#define SRCQT6C_LIBQAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqcoreapplication.h"
#include "libqfont.h"
#include "libqfontmetrics.h"
#include "libqguiapplication.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include <string.h>
#include "libqstyle.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qapplication.html

/// q_application_new constructs a new QApplication object.
///
/// ``` int *argc, char *argv[] ```
QApplication* q_application_new(int* argc, char* argv[]);

/// q_application_new2 constructs a new QApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QApplication* q_application_new2(int* argc, char* argv[], int param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QApplication* self ```
const QMetaObject* q_application_meta_object(void* self);

/// ``` QApplication* self, const char* param1 ```
void* q_application_metacast(void* self, const char* param1);

/// ``` QApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_application_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QApplication* self, int32_t (*slot)(QApplication*, enum QMetaObject__Call, int, void*) ```
void q_application_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_application_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_application_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#style)
///
///
QStyle* q_application_style();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// ``` QStyle* style ```
void q_application_set_style(void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// ``` const char* style ```
QStyle* q_application_set_style_with_style(const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// ``` QWidget* param1 ```
QPalette* q_application_palette(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// ``` const char* className ```
QPalette* q_application_palette_with_class_name(const char* className);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// ``` QPalette* param1 ```
void q_application_set_palette(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
///
QFont* q_application_font();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// ``` QWidget* param1 ```
QFont* q_application_font_with_q_widget(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// ``` const char* className ```
QFont* q_application_font_with_class_name(const char* className);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// ``` QFont* param1 ```
void q_application_set_font(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
///
///
QFontMetrics* q_application_font_metrics();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
///
///
libqt_list /* of QWidget* */ q_application_all_widgets();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
///
///
libqt_list /* of QWidget* */ q_application_top_level_widgets();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
///
///
QWidget* q_application_active_popup_widget();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
///
///
QWidget* q_application_active_modal_widget();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
///
///
QWidget* q_application_focus_widget();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
///
///
QWidget* q_application_active_window();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
///
/// ``` QWidget* act ```
void q_application_set_active_window(void* act);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// ``` QPoint* p ```
QWidget* q_application_widget_at(void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// ``` int x, int y ```
QWidget* q_application_widget_at2(int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// ``` QPoint* p ```
QWidget* q_application_top_level_at(void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// ``` int x, int y ```
QWidget* q_application_top_level_at2(int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#beep)
///
///
void q_application_beep();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// ``` QWidget* widget ```
void q_application_alert(void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
///
/// ``` int cursorFlashTime ```
void q_application_set_cursor_flash_time(int cursorFlashTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
///
///
int32_t q_application_cursor_flash_time();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
///
/// ``` int doubleClickInterval ```
void q_application_set_double_click_interval(int doubleClickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
///
///
int32_t q_application_double_click_interval();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
///
/// ``` int keyboardInputInterval ```
void q_application_set_keyboard_input_interval(int keyboardInputInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
///
///
int32_t q_application_keyboard_input_interval();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
///
/// ``` int wheelScrollLines ```
void q_application_set_wheel_scroll_lines(int wheelScrollLines);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
///
///
int32_t q_application_wheel_scroll_lines();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
///
/// ``` int ms ```
void q_application_set_start_drag_time(int ms);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
///
///
int32_t q_application_start_drag_time();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
///
/// ``` int l ```
void q_application_set_start_drag_distance(int l);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
///
///
int32_t q_application_start_drag_distance();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
///
/// ``` enum Qt__UIEffect param1 ```
bool q_application_is_effect_enabled(int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// ``` enum Qt__UIEffect param1 ```
void q_application_set_effect_enabled(int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#exec)
///
///
int32_t q_application_exec();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// ``` QApplication* self, QObject* param1, QEvent* param2 ```
bool q_application_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// Allows for overriding the related default method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QObject*, QEvent*) ```
void q_application_on_notify(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// Base class method implementation
///
/// ``` QApplication* self, QObject* param1, QEvent* param2 ```
bool q_application_qbase_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// ``` QApplication* self, const char* name, int revision ```
void* q_application_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// ``` QApplication* self, void* (*slot)(QApplication*, const char*, int) ```
void q_application_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// Base class method implementation
///
/// ``` QApplication* self, const char* name, int revision ```
void* q_application_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
///
/// ``` QApplication* self, QWidget* old, QWidget* now ```
void q_application_focus_changed(void* self, void* old, void* now);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
///
/// ``` QApplication* self, void (*slot)(QApplication*, QWidget*, QWidget*) ```
void q_application_on_focus_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
///
/// ``` QApplication* self ```
const char* q_application_style_sheet(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
///
/// ``` QApplication* self, const char* sheet ```
void q_application_set_style_sheet(void* self, const char* sheet);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
///
/// ``` QApplication* self, bool enabled ```
void q_application_set_auto_sip_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
///
/// ``` QApplication* self ```
bool q_application_auto_sip_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
///
///
void q_application_close_all_windows();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
///
///
void q_application_about_qt();

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// ``` QApplication* self, QEvent* param1 ```
bool q_application_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QEvent*) ```
void q_application_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// Base class method implementation
///
/// ``` QApplication* self, QEvent* param1 ```
bool q_application_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_application_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_application_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// ``` QPalette* param1, const char* className ```
void q_application_set_palette2(void* param1, const char* className);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// ``` QFont* param1, const char* className ```
void q_application_set_font2(void* param1, const char* className);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// ``` QWidget* widget, int duration ```
void q_application_alert2(void* widget, int duration);

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// ``` enum Qt__UIEffect param1, bool enable ```
void q_application_set_effect_enabled2(int64_t param1, bool enable);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// ``` const char* name ```
void q_application_set_application_display_name(const char* name);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
///
const char* q_application_application_display_name();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// ``` const char* name ```
void q_application_set_desktop_file_name(const char* name);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
///
const char* q_application_desktop_file_name();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
///
libqt_list /* of QWindow* */ q_application_all_windows();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
///
libqt_list /* of QWindow* */ q_application_top_level_windows();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// ``` QIcon* icon ```
void q_application_set_window_icon(void* icon);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
///
QIcon* q_application_window_icon();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
///
const char* q_application_platform_name();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
///
QWindow* q_application_modal_window();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
///
QWindow* q_application_focus_window();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
///
QObject* q_application_focus_object();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
///
QScreen* q_application_primary_screen();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
///
libqt_list /* of QScreen* */ q_application_screens();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// ``` QPoint* point ```
QScreen* q_application_screen_at(void* point);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// ``` QApplication* self ```
double q_application_device_pixel_ratio(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
///
QCursor* q_application_override_cursor();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// ``` QCursor* overrideCursor ```
void q_application_set_override_cursor(void* overrideCursor);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// ``` QCursor* param1 ```
void q_application_change_override_cursor(void* param1);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
///
void q_application_restore_override_cursor();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
///
QClipboard* q_application_clipboard();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
///
int64_t q_application_keyboard_modifiers();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
///
int64_t q_application_query_keyboard_modifiers();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
///
int64_t q_application_mouse_buttons();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// ``` enum Qt__LayoutDirection direction ```
void q_application_set_layout_direction(int64_t direction);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
///
int64_t q_application_layout_direction();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
///
bool q_application_is_right_to_left();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
///
bool q_application_is_left_to_right();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
///
QStyleHints* q_application_style_hints();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// ``` bool on ```
void q_application_set_desktop_settings_aware(bool on);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
///
bool q_application_desktop_settings_aware();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
///
QInputMethod* q_application_input_method();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// ``` bool quit ```
void q_application_set_quit_on_last_window_closed(bool quit);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
///
bool q_application_quit_on_last_window_closed();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
///
int64_t q_application_application_state();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// ``` enum Qt__HighDpiScaleFactorRoundingPolicy policy ```
void q_application_set_high_dpi_scale_factor_rounding_policy(int64_t policy);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
///
int64_t q_application_high_dpi_scale_factor_rounding_policy();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// ``` QApplication* self ```
bool q_application_is_session_restored(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// ``` QApplication* self ```
const char* q_application_session_id(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// ``` QApplication* self ```
const char* q_application_session_key(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// ``` QApplication* self ```
bool q_application_is_saving_session(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
///
void q_application_sync();

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// ``` QApplication* self ```
void q_application_font_database_changed(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_font_database_changed(void* self, void (*slot)(void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_screen_added(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_screen_added(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_screen_removed(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_screen_removed(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_primary_screen_changed(void* self, void* screen);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_primary_screen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// ``` QApplication* self ```
void q_application_last_window_closed(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_last_window_closed(void* self, void (*slot)(void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// ``` QApplication* self, QObject* focusObject ```
void q_application_focus_object_changed(void* self, void* focusObject);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QObject*) ```
void q_application_on_focus_object_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// ``` QApplication* self, QWindow* focusWindow ```
void q_application_focus_window_changed(void* self, void* focusWindow);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QWindow*) ```
void q_application_on_focus_window_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// ``` QApplication* self, enum Qt__ApplicationState state ```
void q_application_application_state_changed(void* self, int64_t state);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, enum Qt__ApplicationState) ```
void q_application_on_application_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// ``` QApplication* self, enum Qt__LayoutDirection direction ```
void q_application_layout_direction_changed(void* self, int64_t direction);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, enum Qt__LayoutDirection) ```
void q_application_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// ``` QApplication* self, QSessionManager* sessionManager ```
void q_application_commit_data_request(void* self, void* sessionManager);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_application_on_commit_data_request(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// ``` QApplication* self, QSessionManager* sessionManager ```
void q_application_save_state_request(void* self, void* sessionManager);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_application_on_save_state_request(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// ``` QApplication* self ```
void q_application_application_display_name_changed(void* self);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_application_display_name_changed(void* self, void (*slot)(void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// ``` QApplication* self, QPalette* pal ```
void q_application_palette_changed(void* self, void* pal);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QPalette*) ```
void q_application_on_palette_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// ``` QApplication* self, QFont* font ```
void q_application_font_changed(void* self, void* font);

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QFont*) ```
void q_application_on_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_application_arguments();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
void q_application_set_attribute(int64_t attribute);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_application_test_attribute(int64_t attribute);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_application_set_organization_domain(const char* orgDomain);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_application_organization_domain();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// ``` const char* orgName ```
void q_application_set_organization_name(const char* orgName);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_application_organization_name();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// ``` const char* application ```
void q_application_set_application_name(const char* application);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_application_application_name();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// ``` const char* version ```
void q_application_set_application_version(const char* version);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_application_application_version();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// ``` bool allow ```
void q_application_set_setuid_allowed(bool allow);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_application_is_setuid_allowed();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_application_instance();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_application_process_events();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_application_process_events2(int64_t flags, int maxtime);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_application_send_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_application_post_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_application_send_posted_events();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_application_remove_posted_events(void* receiver);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_application_event_dispatcher();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_application_set_event_dispatcher(void* eventDispatcher);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_application_starting_up();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_application_closing_down();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_application_application_dir_path();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
///
const char* q_application_application_file_path();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
///
long long q_application_application_pid();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_application_set_library_paths(const char* libraryPaths[]);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
///
const char** q_application_library_paths();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// ``` const char* param1 ```
void q_application_add_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_application_remove_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_application_install_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_application_remove_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_application_translate(const char* context, const char* key);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_application_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_application_on_install_native_event_filter(void* self, void (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_application_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_application_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_application_is_quit_lock_enabled();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_application_set_quit_lock_enabled(bool enabled);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_application_quit();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_application_exit();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QApplication* self ```
void q_application_organization_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_organization_name_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QApplication* self ```
void q_application_organization_domain_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_organization_domain_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QApplication* self ```
void q_application_application_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_application_name_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QApplication* self ```
void q_application_application_version_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_application_version_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_application_set_attribute2(int64_t attribute, bool on);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_application_process_events1(int64_t flags);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_application_post_event3(void* receiver, void* event, int priority);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_application_send_posted_events1(void* receiver);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_application_send_posted_events2(void* receiver, int event_type);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_application_remove_posted_events2(void* receiver, int eventType);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_application_translate3(const char* context, const char* key, const char* disambiguation);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation, int n ```
const char* q_application_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// ``` int retcode ```
void q_application_exit1(int retcode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QApplication* self ```
const char* q_application_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QApplication* self, char* name ```
void q_application_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QApplication* self ```
bool q_application_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QApplication* self ```
bool q_application_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QApplication* self ```
bool q_application_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QApplication* self ```
bool q_application_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QApplication* self, bool b ```
bool q_application_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QApplication* self ```
QThread* q_application_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QApplication* self, QThread* thread ```
void q_application_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QApplication* self, int interval ```
int32_t q_application_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QApplication* self, int id ```
void q_application_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QApplication* self ```
libqt_list /* of QObject* */ q_application_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QApplication* self, QObject* parent ```
void q_application_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QApplication* self, QObject* filterObj ```
void q_application_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QApplication* self, QObject* obj ```
void q_application_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_application_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_application_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_application_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_application_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QApplication* self ```
void q_application_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QApplication* self ```
void q_application_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QApplication* self, const char* name, QVariant* value ```
bool q_application_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QApplication* self, const char* name ```
QVariant* q_application_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QApplication* self ```
const char** q_application_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QApplication* self ```
QBindingStorage* q_application_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QApplication* self ```
const QBindingStorage* q_application_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self ```
void q_application_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self, void (*slot)(QObject*) ```
void q_application_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QApplication* self ```
QObject* q_application_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QApplication* self, const char* classname ```
bool q_application_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QApplication* self ```
void q_application_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_application_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_application_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_application_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self, QObject* param1 ```
void q_application_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self, void (*slot)(QObject*, QObject*) ```
void q_application_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QObject* watched, QEvent* event ```
bool q_application_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QObject* watched, QEvent* event ```
bool q_application_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QObject*, QEvent*) ```
void q_application_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QTimerEvent* event ```
void q_application_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QTimerEvent* event ```
void q_application_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QTimerEvent*) ```
void q_application_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QChildEvent* event ```
void q_application_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QChildEvent* event ```
void q_application_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QChildEvent*) ```
void q_application_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QEvent* event ```
void q_application_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QEvent* event ```
void q_application_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QEvent*) ```
void q_application_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self ```
QObject* q_application_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self ```
QObject* q_application_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, QObject* (*slot)() ```
void q_application_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self ```
int32_t q_application_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self ```
int32_t q_application_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, int32_t (*slot)() ```
void q_application_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, const char* signal ```
int32_t q_application_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, const char* signal ```
int32_t q_application_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, int32_t (*slot)(QApplication*, const char*) ```
void q_application_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
bool q_application_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
bool q_application_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
///
/// Wrapper to allow calling private signal
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_about_to_quit(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QApplication* self, void (*slot)(QObject*, const char*) ```
void q_application_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#dtor.QApplication)
///
/// Delete this object from C++ memory.
///
/// ``` QApplication* self ```
void q_application_delete(void* self);

#endif
