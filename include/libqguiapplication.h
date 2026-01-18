#pragma once
#ifndef SRC_QT6C_LIBQGUIAPPLICATION_H
#define SRC_QT6C_LIBQGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html)

/// q_guiapplication_new constructs a new QGuiApplication object.
///
/// @param argc int*
/// @param argv char**
///
QGuiApplication* q_guiapplication_new(int* argc, char** argv);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html)

/// q_guiapplication_new2 constructs a new QGuiApplication object.
///
/// @param argc int*
/// @param argv char**
/// @param param3 int
///
QGuiApplication* q_guiapplication_new2(int* argc, char** argv, int param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGuiApplication*
///
const QMetaObject* q_guiapplication_meta_object(void* self);

/// @param self QGuiApplication*
/// @param param1 const char*
///
void* q_guiapplication_metacast(void* self, const char* param1);

/// @param self QGuiApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_guiapplication_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGuiApplication*
/// @param callback int32_t func(QGuiApplication* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_guiapplication_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGuiApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_guiapplication_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_guiapplication_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// @param name const char*
///
void q_guiapplication_set_application_display_name(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_application_display_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
///
/// @param self QGuiApplication*
/// @param number long long
///
void q_guiapplication_set_badge_number(void* self, long long number);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// @param name const char*
///
void q_guiapplication_set_desktop_file_name(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_desktop_file_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
/// @return libqt_list of QWindow*
///
libqt_list q_guiapplication_all_windows();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
/// @return libqt_list of QWindow*
///
libqt_list q_guiapplication_top_level_windows();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
///
/// @param pos QPoint*
///
QWindow* q_guiapplication_top_level_at(void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// @param icon QIcon*
///
void q_guiapplication_set_window_icon(void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
QIcon* q_guiapplication_window_icon();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_platform_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
QWindow* q_guiapplication_modal_window();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
QWindow* q_guiapplication_focus_window();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
QObject* q_guiapplication_focus_object();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
QScreen* q_guiapplication_primary_screen();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
/// @return libqt_list of QScreen*
///
libqt_list q_guiapplication_screens();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// @param point QPoint*
///
QScreen* q_guiapplication_screen_at(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// @param self QGuiApplication*
///
double q_guiapplication_device_pixel_ratio(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
QCursor* q_guiapplication_override_cursor();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// @param overrideCursor QCursor*
///
void q_guiapplication_set_override_cursor(void* overrideCursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// @param param1 QCursor*
///
void q_guiapplication_change_override_cursor(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
void q_guiapplication_restore_override_cursor();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#font)
///
QFont* q_guiapplication_font();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
///
/// @param font QFont*
///
void q_guiapplication_set_font(void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
QClipboard* q_guiapplication_clipboard();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#palette)
///
QPalette* q_guiapplication_palette();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
///
/// @param pal QPalette*
///
void q_guiapplication_set_palette(void* pal);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_guiapplication_keyboard_modifiers();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_guiapplication_query_keyboard_modifiers();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_guiapplication_mouse_buttons();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// @param direction enum Qt__LayoutDirection
///
void q_guiapplication_set_layout_direction(int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
/// @return enum Qt__LayoutDirection
///
int32_t q_guiapplication_layout_direction();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
bool q_guiapplication_is_right_to_left();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
bool q_guiapplication_is_left_to_right();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
QStyleHints* q_guiapplication_style_hints();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// @param on bool
///
void q_guiapplication_set_desktop_settings_aware(bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
bool q_guiapplication_desktop_settings_aware();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
QInputMethod* q_guiapplication_input_method();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// @param quit bool
///
void q_guiapplication_set_quit_on_last_window_closed(bool quit);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
bool q_guiapplication_quit_on_last_window_closed();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
/// @return enum Qt__ApplicationState
///
int32_t q_guiapplication_application_state();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// @param policy enum Qt__HighDpiScaleFactorRoundingPolicy
///
void q_guiapplication_set_high_dpi_scale_factor_rounding_policy(int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
/// @return enum Qt__HighDpiScaleFactorRoundingPolicy
///
int32_t q_guiapplication_high_dpi_scale_factor_rounding_policy();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#exec)
///
int32_t q_guiapplication_exec();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
///
/// @param self QGuiApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_guiapplication_notify(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
///
/// Allows for overriding the related default method
///
/// @param self QGuiApplication*
/// @param callback bool func(QGuiApplication* self, QObject* param1, QEvent* param2)
///
void q_guiapplication_on_notify(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
///
/// Base class method implementation
///
/// @param self QGuiApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_guiapplication_qbase_notify(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_is_session_restored(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGuiApplication*
///
const char* q_guiapplication_session_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGuiApplication*
///
const char* q_guiapplication_session_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_is_saving_session(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
///
/// @param self QGuiApplication*
/// @param name const char*
/// @param revision int
///
void* q_guiapplication_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QGuiApplication*
/// @param callback void* func(QGuiApplication* self, const char* name, int revision)
///
void q_guiapplication_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QGuiApplication*
/// @param name const char*
/// @param revision int
///
void* q_guiapplication_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
void q_guiapplication_sync();

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_font_database_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_font_database_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// @param self QGuiApplication*
/// @param screen QScreen*
///
void q_guiapplication_screen_added(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QScreen* screen)
///
void q_guiapplication_on_screen_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// @param self QGuiApplication*
/// @param screen QScreen*
///
void q_guiapplication_screen_removed(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QScreen* screen)
///
void q_guiapplication_on_screen_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// @param self QGuiApplication*
/// @param screen QScreen*
///
void q_guiapplication_primary_screen_changed(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QScreen* screen)
///
void q_guiapplication_on_primary_screen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// @param self QGuiApplication*
///
void q_guiapplication_last_window_closed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_last_window_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// @param self QGuiApplication*
/// @param focusObject QObject*
///
void q_guiapplication_focus_object_changed(void* self, void* focusObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QObject* focusObject)
///
void q_guiapplication_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// @param self QGuiApplication*
/// @param focusWindow QWindow*
///
void q_guiapplication_focus_window_changed(void* self, void* focusWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QWindow* focusWindow)
///
void q_guiapplication_on_focus_window_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// @param self QGuiApplication*
/// @param state enum Qt__ApplicationState
///
void q_guiapplication_application_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, enum Qt__ApplicationState state)
///
void q_guiapplication_on_application_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// @param self QGuiApplication*
/// @param direction enum Qt__LayoutDirection
///
void q_guiapplication_layout_direction_changed(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, enum Qt__LayoutDirection direction)
///
void q_guiapplication_on_layout_direction_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// @param self QGuiApplication*
/// @param sessionManager QSessionManager*
///
void q_guiapplication_commit_data_request(void* self, void* sessionManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QSessionManager* sessionManager)
///
void q_guiapplication_on_commit_data_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// @param self QGuiApplication*
/// @param sessionManager QSessionManager*
///
void q_guiapplication_save_state_request(void* self, void* sessionManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QSessionManager* sessionManager)
///
void q_guiapplication_on_save_state_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_application_display_name_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_application_display_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// @param self QGuiApplication*
/// @param pal QPalette*
///
void q_guiapplication_palette_changed(void* self, void* pal);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QPalette* pal)
///
void q_guiapplication_on_palette_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// @param self QGuiApplication*
/// @param font QFont*
///
void q_guiapplication_font_changed(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QFont* font)
///
void q_guiapplication_on_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
///
/// @param self QGuiApplication*
/// @param param1 QEvent*
///
bool q_guiapplication_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGuiApplication*
/// @param callback bool func(QGuiApplication* self, QEvent* param1)
///
void q_guiapplication_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
///
/// Base class method implementation
///
/// @param self QGuiApplication*
/// @param param1 QEvent*
///
bool q_guiapplication_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_guiapplication_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_guiapplication_tr3(const char* s, const char* c, int n);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_guiapplication_arguments();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
///
void q_guiapplication_set_attribute(int32_t attribute);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
///
bool q_guiapplication_test_attribute(int32_t attribute);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// @param orgDomain const char*
///
void q_guiapplication_set_organization_domain(const char* orgDomain);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_organization_domain();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// @param orgName const char*
///
void q_guiapplication_set_organization_name(const char* orgName);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_organization_name();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// @param application const char*
///
void q_guiapplication_set_application_name(const char* application);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_application_name();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// @param version const char*
///
void q_guiapplication_set_application_version(const char* version);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_application_version();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// @param allow bool
///
void q_guiapplication_set_setuid_allowed(bool allow);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
bool q_guiapplication_is_setuid_allowed();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
QCoreApplication* q_guiapplication_instance();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
void q_guiapplication_process_events();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param maxtime int
///
void q_guiapplication_process_events2(int32_t flags, int maxtime);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param deadline QDeadlineTimer*
///
void q_guiapplication_process_events3(int32_t flags, void* deadline);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
///
bool q_guiapplication_send_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
///
void q_guiapplication_post_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
void q_guiapplication_send_posted_events();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
///
void q_guiapplication_remove_posted_events(void* receiver);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
QAbstractEventDispatcher* q_guiapplication_event_dispatcher();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// @param eventDispatcher QAbstractEventDispatcher*
///
void q_guiapplication_set_event_dispatcher(void* eventDispatcher);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
bool q_guiapplication_starting_up();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
bool q_guiapplication_closing_down();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_application_dir_path();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_guiapplication_application_file_path();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
long long q_guiapplication_application_pid();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
///
/// @param self QGuiApplication*
/// @param permission QPermission*
///
/// @return enum Qt__PermissionStatus
///
int32_t q_guiapplication_check_permission(void* self, void* permission);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// @param libraryPaths const char**
///
void q_guiapplication_set_library_paths(const char* libraryPaths[static 1]);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_guiapplication_library_paths();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// @param param1 const char*
///
void q_guiapplication_add_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// @param param1 const char*
///
void q_guiapplication_remove_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// @param messageFile QTranslator*
///
bool q_guiapplication_install_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// @param messageFile QTranslator*
///
bool q_guiapplication_remove_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param context const char*
/// @param key const char*
///
const char* q_guiapplication_translate(const char* context, const char* key);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QGuiApplication*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_guiapplication_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QAbstractNativeEventFilter* filterObj)
///
void q_guiapplication_on_install_native_event_filter(void* self, void (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QGuiApplication*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_guiapplication_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QAbstractNativeEventFilter* filterObj)
///
void q_guiapplication_on_remove_native_event_filter(void* self, void (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
bool q_guiapplication_is_quit_lock_enabled();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// @param enabled bool
///
void q_guiapplication_set_quit_lock_enabled(bool enabled);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
void q_guiapplication_quit();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
void q_guiapplication_exit();

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_organization_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_organization_name_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_organization_domain_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_organization_domain_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_application_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_application_name_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QGuiApplication*
///
void q_guiapplication_application_version_changed(void* self);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_application_version_changed(void* self, void (*callback)(void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
/// @param on bool
///
void q_guiapplication_set_attribute2(int32_t attribute, bool on);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
///
void q_guiapplication_process_events1(int32_t flags);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
/// @param priority int
///
void q_guiapplication_post_event3(void* receiver, void* event, int priority);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
///
void q_guiapplication_send_posted_events1(void* receiver);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
/// @param event_type int
///
void q_guiapplication_send_posted_events2(void* receiver, int event_type);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
/// @param eventType int
///
void q_guiapplication_remove_posted_events2(void* receiver, int eventType);

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
const char* q_guiapplication_translate3(const char* context, const char* key, const char* disambiguation);

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
const char* q_guiapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// @param retcode int
///
void q_guiapplication_exit1(int retcode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGuiApplication*
///
const char* q_guiapplication_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGuiApplication*
/// @param name char*
///
void q_guiapplication_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGuiApplication*
///
bool q_guiapplication_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGuiApplication*
/// @param b bool
///
bool q_guiapplication_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGuiApplication*
///
QThread* q_guiapplication_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGuiApplication*
/// @param thread QThread*
///
bool q_guiapplication_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGuiApplication*
/// @param interval int
///
int32_t q_guiapplication_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGuiApplication*
/// @param id int
///
void q_guiapplication_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGuiApplication*
/// @param id enum Qt__TimerId
///
void q_guiapplication_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGuiApplication*
///
/// @return libqt_list of QObject*
///
libqt_list q_guiapplication_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGuiApplication*
/// @param parent QObject*
///
void q_guiapplication_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGuiApplication*
/// @param filterObj QObject*
///
void q_guiapplication_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGuiApplication*
/// @param obj QObject*
///
void q_guiapplication_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_guiapplication_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGuiApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_guiapplication_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_guiapplication_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_guiapplication_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGuiApplication*
///
void q_guiapplication_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGuiApplication*
///
void q_guiapplication_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGuiApplication*
/// @param name const char*
/// @param value QVariant*
///
bool q_guiapplication_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGuiApplication*
/// @param name const char*
///
QVariant* q_guiapplication_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGuiApplication*
///
const char** q_guiapplication_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGuiApplication*
///
QBindingStorage* q_guiapplication_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGuiApplication*
///
const QBindingStorage* q_guiapplication_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGuiApplication*
///
void q_guiapplication_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGuiApplication*
///
QObject* q_guiapplication_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGuiApplication*
/// @param classname const char*
///
bool q_guiapplication_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGuiApplication*
///
void q_guiapplication_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGuiApplication*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_guiapplication_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGuiApplication*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_guiapplication_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_guiapplication_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGuiApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_guiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGuiApplication*
/// @param param1 QObject*
///
void q_guiapplication_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QObject* param1)
///
void q_guiapplication_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_guiapplication_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_guiapplication_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback bool func(QGuiApplication* self, QObject* watched, QEvent* event)
///
void q_guiapplication_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QTimerEvent*
///
void q_guiapplication_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QTimerEvent*
///
void q_guiapplication_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QTimerEvent* event)
///
void q_guiapplication_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QChildEvent*
///
void q_guiapplication_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QChildEvent*
///
void q_guiapplication_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QChildEvent* event)
///
void q_guiapplication_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QEvent*
///
void q_guiapplication_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param event QEvent*
///
void q_guiapplication_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QEvent* event)
///
void q_guiapplication_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
void q_guiapplication_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
void q_guiapplication_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QMetaMethod* signal)
///
void q_guiapplication_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
void q_guiapplication_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
void q_guiapplication_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, QMetaMethod* signal)
///
void q_guiapplication_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
///
QObject* q_guiapplication_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
///
QObject* q_guiapplication_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback QObject* func()
///
void q_guiapplication_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
///
int32_t q_guiapplication_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
///
int32_t q_guiapplication_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback int32_t func()
///
void q_guiapplication_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal const char*
///
int32_t q_guiapplication_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal const char*
///
int32_t q_guiapplication_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback int32_t func(QGuiApplication* self, const char* signal)
///
void q_guiapplication_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
bool q_guiapplication_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param signal QMetaMethod*
///
bool q_guiapplication_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGuiApplication*
/// @param callback bool func(QGuiApplication* self, QMetaMethod* signal)
///
void q_guiapplication_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
///
/// Wrapper to allow calling private signal
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self)
///
void q_guiapplication_on_about_to_quit(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGuiApplication*
/// @param callback void func(QGuiApplication* self, const char* objectName)
///
void q_guiapplication_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#dtor.QGuiApplication)
///
/// Delete this object from C++ memory.
///
/// @param self QGuiApplication*
///
void q_guiapplication_delete(void* self);

#endif
