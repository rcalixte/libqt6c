#pragma once
#ifndef SRCQT6C_LIBQGUIAPPLICATION_H
#define SRCQT6C_LIBQGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracteventdispatcher.h"
#include "libqabstractnativeeventfilter.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqclipboard.h"
#include "libqcoreapplication.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqicon.h"
#include "libqinputmethod.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include "libqscreen.h"
#include "libqsessionmanager.h"
#include <string.h>
#include "libqstylehints.h"
#include "libqthread.h"
#include "libqtranslator.h"
#include "libqvariant.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qguiapplication.html

/// q_guiapplication_new constructs a new QGuiApplication object.
///
/// ``` int *argc, char *argv[] ```
QGuiApplication* q_guiapplication_new(int* argc, char* argv[]);

/// q_guiapplication_new2 constructs a new QGuiApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QGuiApplication* q_guiapplication_new2(int* argc, char* argv[], int param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGuiApplication* self ```
QMetaObject* q_guiapplication_meta_object(void* self);

/// ``` QGuiApplication* self, const char* param1 ```
void* q_guiapplication_metacast(void* self, const char* param1);

/// ``` QGuiApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_guiapplication_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, int32_t (*slot)(QGuiApplication*, enum QMetaObject__Call, int, void*) ```
void q_guiapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGuiApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_guiapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_guiapplication_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// ``` const char* name ```
void q_guiapplication_set_application_display_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
///
const char* q_guiapplication_application_display_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// ``` const char* name ```
void q_guiapplication_set_desktop_file_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
///
const char* q_guiapplication_desktop_file_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
///
libqt_list /* of QWindow* */ q_guiapplication_all_windows();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
///
libqt_list /* of QWindow* */ q_guiapplication_top_level_windows();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
///
/// ``` QPoint* pos ```
QWindow* q_guiapplication_top_level_at(void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// ``` QIcon* icon ```
void q_guiapplication_set_window_icon(void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
///
QIcon* q_guiapplication_window_icon();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
///
const char* q_guiapplication_platform_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
///
QWindow* q_guiapplication_modal_window();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
///
QWindow* q_guiapplication_focus_window();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
///
QObject* q_guiapplication_focus_object();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
///
QScreen* q_guiapplication_primary_screen();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
///
libqt_list /* of QScreen* */ q_guiapplication_screens();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// ``` QPoint* point ```
QScreen* q_guiapplication_screen_at(void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// ``` QGuiApplication* self ```
double q_guiapplication_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
///
QCursor* q_guiapplication_override_cursor();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// ``` QCursor* overrideCursor ```
void q_guiapplication_set_override_cursor(void* overrideCursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// ``` QCursor* param1 ```
void q_guiapplication_change_override_cursor(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
///
void q_guiapplication_restore_override_cursor();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#font)
///
///
QFont* q_guiapplication_font();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
///
/// ``` QFont* font ```
void q_guiapplication_set_font(void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
///
QClipboard* q_guiapplication_clipboard();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#palette)
///
///
QPalette* q_guiapplication_palette();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
///
/// ``` QPalette* pal ```
void q_guiapplication_set_palette(void* pal);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
///
int64_t q_guiapplication_keyboard_modifiers();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
///
int64_t q_guiapplication_query_keyboard_modifiers();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
///
int64_t q_guiapplication_mouse_buttons();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// ``` enum Qt__LayoutDirection direction ```
void q_guiapplication_set_layout_direction(int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
///
int64_t q_guiapplication_layout_direction();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
///
bool q_guiapplication_is_right_to_left();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
///
bool q_guiapplication_is_left_to_right();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
///
QStyleHints* q_guiapplication_style_hints();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// ``` bool on ```
void q_guiapplication_set_desktop_settings_aware(bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
///
bool q_guiapplication_desktop_settings_aware();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
///
QInputMethod* q_guiapplication_input_method();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// ``` bool quit ```
void q_guiapplication_set_quit_on_last_window_closed(bool quit);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
///
bool q_guiapplication_quit_on_last_window_closed();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
///
int64_t q_guiapplication_application_state();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// ``` enum Qt__HighDpiScaleFactorRoundingPolicy policy ```
void q_guiapplication_set_high_dpi_scale_factor_rounding_policy(int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
///
int64_t q_guiapplication_high_dpi_scale_factor_rounding_policy();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#exec)
///
///
int32_t q_guiapplication_exec();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
///
/// ``` QGuiApplication* self, QObject* param1, QEvent* param2 ```
bool q_guiapplication_notify(void* self, void* param1, void* param2);

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QObject*, QEvent*) ```
void q_guiapplication_on_notify(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QGuiApplication* self, QObject* param1, QEvent* param2 ```
bool q_guiapplication_qbase_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_session_restored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_session_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_session_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_saving_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
///
/// ``` QGuiApplication* self, const char* name, int revision ```
void* q_guiapplication_resolve_interface(void* self, const char* name, int revision);

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, void* (*slot)(QGuiApplication*, const char*, int) ```
void q_guiapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// Base class method implementation
///
/// ``` QGuiApplication* self, const char* name, int revision ```
void* q_guiapplication_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
///
void q_guiapplication_sync();

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_font_database_changed(void* self);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_font_database_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_screen_added(void* self, void* screen);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_screen_added(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_screen_removed(void* self, void* screen);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_screen_removed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_primary_screen_changed(void* self, void* screen);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_primary_screen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_last_window_closed(void* self);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_last_window_closed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// ``` QGuiApplication* self, QObject* focusObject ```
void q_guiapplication_focus_object_changed(void* self, void* focusObject);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QObject*) ```
void q_guiapplication_on_focus_object_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// ``` QGuiApplication* self, QWindow* focusWindow ```
void q_guiapplication_focus_window_changed(void* self, void* focusWindow);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QWindow*) ```
void q_guiapplication_on_focus_window_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// ``` QGuiApplication* self, enum Qt__ApplicationState state ```
void q_guiapplication_application_state_changed(void* self, int64_t state);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, enum Qt__ApplicationState) ```
void q_guiapplication_on_application_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// ``` QGuiApplication* self, enum Qt__LayoutDirection direction ```
void q_guiapplication_layout_direction_changed(void* self, int64_t direction);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, enum Qt__LayoutDirection) ```
void q_guiapplication_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// ``` QGuiApplication* self, QSessionManager* sessionManager ```
void q_guiapplication_commit_data_request(void* self, void* sessionManager);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_guiapplication_on_commit_data_request(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// ``` QGuiApplication* self, QSessionManager* sessionManager ```
void q_guiapplication_save_state_request(void* self, void* sessionManager);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_guiapplication_on_save_state_request(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_display_name_changed(void* self);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_application_display_name_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// ``` QGuiApplication* self, QPalette* pal ```
void q_guiapplication_palette_changed(void* self, void* pal);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QPalette*) ```
void q_guiapplication_on_palette_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// ``` QGuiApplication* self, QFont* font ```
void q_guiapplication_font_changed(void* self, void* font);

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QFont*) ```
void q_guiapplication_on_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
///
/// ``` QGuiApplication* self, QEvent* param1 ```
bool q_guiapplication_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QEvent*) ```
void q_guiapplication_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGuiApplication* self, QEvent* param1 ```
bool q_guiapplication_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_guiapplication_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_guiapplication_tr3(const char* s, const char* c, int n);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_guiapplication_arguments();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
void q_guiapplication_set_attribute(int64_t attribute);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_guiapplication_test_attribute(int64_t attribute);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_guiapplication_set_organization_domain(const char* orgDomain);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_guiapplication_organization_domain();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// ``` const char* orgName ```
void q_guiapplication_set_organization_name(const char* orgName);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_guiapplication_organization_name();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// ``` const char* application ```
void q_guiapplication_set_application_name(const char* application);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_guiapplication_application_name();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// ``` const char* version ```
void q_guiapplication_set_application_version(const char* version);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_guiapplication_application_version();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// ``` bool allow ```
void q_guiapplication_set_setuid_allowed(bool allow);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_guiapplication_is_setuid_allowed();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_guiapplication_instance();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_guiapplication_process_events();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_guiapplication_process_events2(int64_t flags, int maxtime);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_guiapplication_send_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_guiapplication_post_event(void* receiver, void* event);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_guiapplication_send_posted_events();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_guiapplication_remove_posted_events(void* receiver);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_guiapplication_event_dispatcher();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_guiapplication_set_event_dispatcher(void* eventDispatcher);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_guiapplication_starting_up();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_guiapplication_closing_down();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_guiapplication_application_dir_path();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
///
const char* q_guiapplication_application_file_path();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
///
long long q_guiapplication_application_pid();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_guiapplication_set_library_paths(const char* libraryPaths[]);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
///
const char** q_guiapplication_library_paths();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// ``` const char* param1 ```
void q_guiapplication_add_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_guiapplication_remove_library_path(const char* param1);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_guiapplication_install_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_guiapplication_remove_translator(void* messageFile);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_guiapplication_translate(const char* context, const char* key);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QGuiApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_guiapplication_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_guiapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QGuiApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_guiapplication_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_guiapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_guiapplication_is_quit_lock_enabled();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_guiapplication_set_quit_lock_enabled(bool enabled);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_guiapplication_quit();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_guiapplication_exit();

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_organization_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_organization_name_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_organization_domain_changed(void* self);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_organization_domain_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_name_changed(void* self);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_application_name_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_version_changed(void* self);

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_application_version_changed(void* self, void (*slot)(void*));

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_guiapplication_set_attribute2(int64_t attribute, bool on);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_guiapplication_process_events1(int64_t flags);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_guiapplication_post_event3(void* receiver, void* event, int priority);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_guiapplication_send_posted_events1(void* receiver);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_guiapplication_send_posted_events2(void* receiver, int event_type);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_guiapplication_remove_posted_events2(void* receiver, int eventType);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_guiapplication_translate3(const char* context, const char* key, const char* disambiguation);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation, int n ```
const char* q_guiapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// ``` int retcode ```
void q_guiapplication_exit1(int retcode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGuiApplication* self, const char* name ```
void q_guiapplication_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGuiApplication* self, bool b ```
bool q_guiapplication_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGuiApplication* self ```
QThread* q_guiapplication_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGuiApplication* self, QThread* thread ```
void q_guiapplication_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGuiApplication* self, int interval ```
int32_t q_guiapplication_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGuiApplication* self, int id ```
void q_guiapplication_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGuiApplication* self ```
libqt_list /* of QObject* */ q_guiapplication_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGuiApplication* self, QObject* parent ```
void q_guiapplication_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGuiApplication* self, QObject* filterObj ```
void q_guiapplication_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGuiApplication* self, QObject* obj ```
void q_guiapplication_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_guiapplication_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGuiApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_guiapplication_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_guiapplication_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_guiapplication_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGuiApplication* self, const char* name, QVariant* value ```
bool q_guiapplication_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGuiApplication* self, const char* name ```
QVariant* q_guiapplication_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGuiApplication* self ```
const char** q_guiapplication_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGuiApplication* self ```
QBindingStorage* q_guiapplication_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGuiApplication* self ```
QBindingStorage* q_guiapplication_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QGuiApplication* self, void (*slot)(QObject*) ```
void q_guiapplication_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGuiApplication* self, const char* classname ```
bool q_guiapplication_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGuiApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_guiapplication_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_guiapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGuiApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_guiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGuiApplication* self, QObject* param1 ```
void q_guiapplication_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QGuiApplication* self, void (*slot)(QObject*, QObject*) ```
void q_guiapplication_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QObject* watched, QEvent* event ```
bool q_guiapplication_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QObject* watched, QEvent* event ```
bool q_guiapplication_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QObject*, QEvent*) ```
void q_guiapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QTimerEvent* event ```
void q_guiapplication_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QTimerEvent* event ```
void q_guiapplication_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QTimerEvent*) ```
void q_guiapplication_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QChildEvent* event ```
void q_guiapplication_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QChildEvent* event ```
void q_guiapplication_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QChildEvent*) ```
void q_guiapplication_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QEvent* event ```
void q_guiapplication_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QEvent* event ```
void q_guiapplication_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QEvent*) ```
void q_guiapplication_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, QObject* (*slot)() ```
void q_guiapplication_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self ```
int32_t q_guiapplication_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self ```
int32_t q_guiapplication_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, int32_t (*slot)() ```
void q_guiapplication_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, const char* signal ```
int32_t q_guiapplication_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, const char* signal ```
int32_t q_guiapplication_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, int32_t (*slot)(QGuiApplication*, const char*) ```
void q_guiapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
bool q_guiapplication_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
bool q_guiapplication_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QGuiApplication* self ```
void q_guiapplication_delete(void* self);

#endif
