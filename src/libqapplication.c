#include "libqcoreevent.hpp"
#include "libqcoreapplication.hpp"
#include "libqfont.hpp"
#include "libqfontmetrics.hpp"
#include "libqguiapplication.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqstyle.hpp"
#include "libqwidget.hpp"
#include "libqapplication.hpp"
#include "libqapplication.h"

QApplication* q_application_new(int* argc, char** argv) {
    return QApplication_new(argc, argv);
}

QApplication* q_application_new2(int* argc, char** argv, int param3) {
    return QApplication_new2(argc, argv, param3);
}

const QMetaObject* q_application_meta_object(void* self) {
    return QApplication_MetaObject((QApplication*)self);
}

void q_application_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QApplication_OnMetaObject((QApplication*)self, (intptr_t)callback);
}

const QMetaObject* q_application_super_meta_object(void* self) {
    return QApplication_SuperMetaObject((QApplication*)self);
}

void* q_application_metacast(void* self, const char* param1) {
    return QApplication_Metacast((QApplication*)self, param1);
}

void q_application_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QApplication_OnMetacast((QApplication*)self, (intptr_t)callback);
}

void* q_application_super_metacast(void* self, const char* param1) {
    return QApplication_SuperMetacast((QApplication*)self, param1);
}

int32_t q_application_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QApplication_Metacall((QApplication*)self, param1, param2, param3);
}

void q_application_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QApplication_OnMetacall((QApplication*)self, (intptr_t)callback);
}

int32_t q_application_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QApplication_SuperMetacall((QApplication*)self, param1, param2, param3);
}

const char* q_application_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QStyle* q_application_style() {
    return QApplication_Style();
}

void q_application_set_style(void* style) {
    QApplication_SetStyle((QStyle*)style);
}

QStyle* q_application_set_style2(const char* style) {
    return QApplication_SetStyle2(qstring(style));
}

QPalette* q_application_palette(void* param1) {
    return QApplication_Palette((QWidget*)param1);
}

QPalette* q_application_palette2(const char* className) {
    return QApplication_Palette2(className);
}

void q_application_set_palette(void* param1) {
    QApplication_SetPalette((QPalette*)param1);
}

QFont* q_application_font() {
    return QApplication_Font();
}

QFont* q_application_font2(void* param1) {
    return QApplication_Font2((QWidget*)param1);
}

QFont* q_application_font3(const char* className) {
    return QApplication_Font3(className);
}

void q_application_set_font(void* param1) {
    QApplication_SetFont((QFont*)param1);
}

QFontMetrics* q_application_font_metrics() {
    return QApplication_FontMetrics();
}

libqt_list /* of QWidget* */ q_application_all_widgets() {
    libqt_list _arr = QApplication_AllWidgets();
    return _arr;
}

libqt_list /* of QWidget* */ q_application_top_level_widgets() {
    libqt_list _arr = QApplication_TopLevelWidgets();
    return _arr;
}

QWidget* q_application_active_popup_widget() {
    return QApplication_ActivePopupWidget();
}

QWidget* q_application_active_modal_widget() {
    return QApplication_ActiveModalWidget();
}

QWidget* q_application_focus_widget() {
    return QApplication_FocusWidget();
}

QWidget* q_application_active_window() {
    return QApplication_ActiveWindow();
}

void q_application_set_active_window(void* act) {
    QApplication_SetActiveWindow((QWidget*)act);
}

QWidget* q_application_widget_at(void* p) {
    return QApplication_WidgetAt((QPoint*)p);
}

QWidget* q_application_widget_at2(int x, int y) {
    return QApplication_WidgetAt2(x, y);
}

QWidget* q_application_top_level_at(void* p) {
    return QApplication_TopLevelAt((QPoint*)p);
}

QWidget* q_application_top_level_at2(int x, int y) {
    return QApplication_TopLevelAt2(x, y);
}

void q_application_beep() {
    QApplication_Beep();
}

void q_application_alert(void* widget) {
    QApplication_Alert((QWidget*)widget);
}

void q_application_set_cursor_flash_time(int cursorFlashTime) {
    QApplication_SetCursorFlashTime(cursorFlashTime);
}

int32_t q_application_cursor_flash_time() {
    return QApplication_CursorFlashTime();
}

void q_application_set_double_click_interval(int doubleClickInterval) {
    QApplication_SetDoubleClickInterval(doubleClickInterval);
}

int32_t q_application_double_click_interval() {
    return QApplication_DoubleClickInterval();
}

void q_application_set_keyboard_input_interval(int keyboardInputInterval) {
    QApplication_SetKeyboardInputInterval(keyboardInputInterval);
}

int32_t q_application_keyboard_input_interval() {
    return QApplication_KeyboardInputInterval();
}

void q_application_set_wheel_scroll_lines(int wheelScrollLines) {
    QApplication_SetWheelScrollLines(wheelScrollLines);
}

int32_t q_application_wheel_scroll_lines() {
    return QApplication_WheelScrollLines();
}

void q_application_set_start_drag_time(int ms) {
    QApplication_SetStartDragTime(ms);
}

int32_t q_application_start_drag_time() {
    return QApplication_StartDragTime();
}

void q_application_set_start_drag_distance(int l) {
    QApplication_SetStartDragDistance(l);
}

int32_t q_application_start_drag_distance() {
    return QApplication_StartDragDistance();
}

bool q_application_is_effect_enabled(int32_t param1) {
    return QApplication_IsEffectEnabled(param1);
}

void q_application_set_effect_enabled(int32_t param1) {
    QApplication_SetEffectEnabled(param1);
}

int32_t q_application_exec() {
    return QApplication_Exec();
}

bool q_application_notify(void* self, void* param1, void* param2) {
    return QApplication_Notify((QApplication*)self, (QObject*)param1, (QEvent*)param2);
}

void q_application_on_notify(void* self, bool (*callback)(void*, void*, void*)) {
    QApplication_OnNotify((QApplication*)self, (intptr_t)callback);
}

bool q_application_super_notify(void* self, void* param1, void* param2) {
    return QApplication_SuperNotify((QApplication*)self, (QObject*)param1, (QEvent*)param2);
}

void* q_application_resolve_interface(void* self, const char* name, int revision) {
    return QApplication_ResolveInterface((QApplication*)self, name, revision);
}

void q_application_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QApplication_OnResolveInterface((QApplication*)self, (intptr_t)callback);
}

void* q_application_super_resolve_interface(void* self, const char* name, int revision) {
    return QApplication_SuperResolveInterface((QApplication*)self, name, revision);
}

void q_application_focus_changed(void* self, void* old, void* now) {
    QApplication_FocusChanged((QApplication*)self, (QWidget*)old, (QWidget*)now);
}

void q_application_on_focus_changed(void* self, void (*callback)(void*, void*, void*)) {
    QApplication_Connect_FocusChanged((QApplication*)self, (intptr_t)callback);
}

const char* q_application_style_sheet(void* self) {
    libqt_string _str = QApplication_StyleSheet((QApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_application_auto_sip_enabled(void* self) {
    return QApplication_AutoSipEnabled((QApplication*)self);
}

void q_application_set_style_sheet(void* self, const char* sheet) {
    QApplication_SetStyleSheet((QApplication*)self, qstring(sheet));
}

void q_application_set_auto_sip_enabled(void* self, bool enabled) {
    QApplication_SetAutoSipEnabled((QApplication*)self, enabled);
}

void q_application_close_all_windows() {
    QApplication_CloseAllWindows();
}

void q_application_about_qt() {
    QApplication_AboutQt();
}

bool q_application_event(void* self, void* param1) {
    return QApplication_Event((QApplication*)self, (QEvent*)param1);
}

void q_application_on_event(void* self, bool (*callback)(void*, void*)) {
    QApplication_OnEvent((QApplication*)self, (intptr_t)callback);
}

bool q_application_super_event(void* self, void* param1) {
    return QApplication_SuperEvent((QApplication*)self, (QEvent*)param1);
}

const char* q_application_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_application_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_palette2(void* param1, const char* className) {
    QApplication_SetPalette2((QPalette*)param1, className);
}

void q_application_set_font2(void* param1, const char* className) {
    QApplication_SetFont2((QFont*)param1, className);
}

void q_application_alert2(void* widget, int duration) {
    QApplication_Alert2((QWidget*)widget, duration);
}

void q_application_set_effect_enabled2(int32_t param1, bool enable) {
    QApplication_SetEffectEnabled2(param1, enable);
}

void q_application_set_application_display_name(const char* name) {
    QGuiApplication_SetApplicationDisplayName(qstring(name));
}

const char* q_application_application_display_name() {
    libqt_string _str = QGuiApplication_ApplicationDisplayName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_badge_number(void* self, long long number) {
    QGuiApplication_SetBadgeNumber((QGuiApplication*)self, number);
}

void q_application_set_desktop_file_name(const char* name) {
    QGuiApplication_SetDesktopFileName(qstring(name));
}

const char* q_application_desktop_file_name() {
    libqt_string _str = QGuiApplication_DesktopFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QWindow* */ q_application_all_windows() {
    libqt_list _arr = QGuiApplication_AllWindows();
    return _arr;
}

libqt_list /* of QWindow* */ q_application_top_level_windows() {
    libqt_list _arr = QGuiApplication_TopLevelWindows();
    return _arr;
}

void q_application_set_window_icon(void* icon) {
    QGuiApplication_SetWindowIcon((QIcon*)icon);
}

QIcon* q_application_window_icon() {
    return QGuiApplication_WindowIcon();
}

const char* q_application_platform_name() {
    libqt_string _str = QGuiApplication_PlatformName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWindow* q_application_modal_window() {
    return QGuiApplication_ModalWindow();
}

QWindow* q_application_focus_window() {
    return QGuiApplication_FocusWindow();
}

QObject* q_application_focus_object() {
    return QGuiApplication_FocusObject();
}

QScreen* q_application_primary_screen() {
    return QGuiApplication_PrimaryScreen();
}

libqt_list /* of QScreen* */ q_application_screens() {
    libqt_list _arr = QGuiApplication_Screens();
    return _arr;
}

QScreen* q_application_screen_at(void* point) {
    return QGuiApplication_ScreenAt((QPoint*)point);
}

double q_application_device_pixel_ratio(void* self) {
    return QGuiApplication_DevicePixelRatio((QGuiApplication*)self);
}

QCursor* q_application_override_cursor() {
    return QGuiApplication_OverrideCursor();
}

void q_application_set_override_cursor(void* overrideCursor) {
    QGuiApplication_SetOverrideCursor((QCursor*)overrideCursor);
}

void q_application_change_override_cursor(void* param1) {
    QGuiApplication_ChangeOverrideCursor((QCursor*)param1);
}

void q_application_restore_override_cursor() {
    QGuiApplication_RestoreOverrideCursor();
}

QClipboard* q_application_clipboard() {
    return QGuiApplication_Clipboard();
}

int32_t q_application_keyboard_modifiers() {
    return QGuiApplication_KeyboardModifiers();
}

int32_t q_application_query_keyboard_modifiers() {
    return QGuiApplication_QueryKeyboardModifiers();
}

int32_t q_application_mouse_buttons() {
    return QGuiApplication_MouseButtons();
}

void q_application_set_layout_direction(int32_t direction) {
    QGuiApplication_SetLayoutDirection(direction);
}

int32_t q_application_layout_direction() {
    return QGuiApplication_LayoutDirection();
}

bool q_application_is_right_to_left() {
    return QGuiApplication_IsRightToLeft();
}

bool q_application_is_left_to_right() {
    return QGuiApplication_IsLeftToRight();
}

QStyleHints* q_application_style_hints() {
    return QGuiApplication_StyleHints();
}

void q_application_set_desktop_settings_aware(bool on) {
    QGuiApplication_SetDesktopSettingsAware(on);
}

bool q_application_desktop_settings_aware() {
    return QGuiApplication_DesktopSettingsAware();
}

QInputMethod* q_application_input_method() {
    return QGuiApplication_InputMethod();
}

void q_application_set_quit_on_last_window_closed(bool quit) {
    QGuiApplication_SetQuitOnLastWindowClosed(quit);
}

bool q_application_quit_on_last_window_closed() {
    return QGuiApplication_QuitOnLastWindowClosed();
}

int32_t q_application_application_state() {
    return QGuiApplication_ApplicationState();
}

void q_application_set_high_dpi_scale_factor_rounding_policy(int32_t policy) {
    QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy);
}

int32_t q_application_high_dpi_scale_factor_rounding_policy() {
    return QGuiApplication_HighDpiScaleFactorRoundingPolicy();
}

bool q_application_is_session_restored(void* self) {
    return QGuiApplication_IsSessionRestored((QGuiApplication*)self);
}

const char* q_application_session_id(void* self) {
    libqt_string _str = QGuiApplication_SessionId((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_application_session_key(void* self) {
    libqt_string _str = QGuiApplication_SessionKey((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_application_is_saving_session(void* self) {
    return QGuiApplication_IsSavingSession((QGuiApplication*)self);
}

void q_application_sync() {
    QGuiApplication_Sync();
}

void q_application_font_database_changed(void* self) {
    QGuiApplication_FontDatabaseChanged((QGuiApplication*)self);
}

void q_application_on_font_database_changed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_FontDatabaseChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_screen_added(void* self, void* screen) {
    QGuiApplication_ScreenAdded((QGuiApplication*)self, (QScreen*)screen);
}

void q_application_on_screen_added(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_ScreenAdded((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_screen_removed(void* self, void* screen) {
    QGuiApplication_ScreenRemoved((QGuiApplication*)self, (QScreen*)screen);
}

void q_application_on_screen_removed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_ScreenRemoved((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_primary_screen_changed(void* self, void* screen) {
    QGuiApplication_PrimaryScreenChanged((QGuiApplication*)self, (QScreen*)screen);
}

void q_application_on_primary_screen_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_PrimaryScreenChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_last_window_closed(void* self) {
    QGuiApplication_LastWindowClosed((QGuiApplication*)self);
}

void q_application_on_last_window_closed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_LastWindowClosed((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_focus_object_changed(void* self, void* focusObject) {
    QGuiApplication_FocusObjectChanged((QGuiApplication*)self, (QObject*)focusObject);
}

void q_application_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FocusObjectChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_focus_window_changed(void* self, void* focusWindow) {
    QGuiApplication_FocusWindowChanged((QGuiApplication*)self, (QWindow*)focusWindow);
}

void q_application_on_focus_window_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FocusWindowChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_application_state_changed(void* self, int32_t state) {
    QGuiApplication_ApplicationStateChanged((QGuiApplication*)self, state);
}

void q_application_on_application_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QGuiApplication_Connect_ApplicationStateChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_layout_direction_changed(void* self, int32_t direction) {
    QGuiApplication_LayoutDirectionChanged((QGuiApplication*)self, direction);
}

void q_application_on_layout_direction_changed(void* self, void (*callback)(void*, int32_t)) {
    QGuiApplication_Connect_LayoutDirectionChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_commit_data_request(void* self, void* sessionManager) {
    QGuiApplication_CommitDataRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

void q_application_on_commit_data_request(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_CommitDataRequest((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_save_state_request(void* self, void* sessionManager) {
    QGuiApplication_SaveStateRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

void q_application_on_save_state_request(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_SaveStateRequest((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_application_display_name_changed(void* self) {
    QGuiApplication_ApplicationDisplayNameChanged((QGuiApplication*)self);
}

void q_application_on_application_display_name_changed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_ApplicationDisplayNameChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_palette_changed(void* self, void* pal) {
    QGuiApplication_PaletteChanged((QGuiApplication*)self, (QPalette*)pal);
}

void q_application_on_palette_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_PaletteChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_application_font_changed(void* self, void* font) {
    QGuiApplication_FontChanged((QGuiApplication*)self, (QFont*)font);
}

void q_application_on_font_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FontChanged((QGuiApplication*)self, (intptr_t)callback);
}

const char** q_application_arguments() {
    libqt_list _arr = QCoreApplication_Arguments();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_application_arguments\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_application_set_attribute(int32_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

bool q_application_test_attribute(int32_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

void q_application_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

const char* q_application_organization_domain() {
    libqt_string _str = QCoreApplication_OrganizationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

const char* q_application_organization_name() {
    libqt_string _str = QCoreApplication_OrganizationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

const char* q_application_application_name() {
    libqt_string _str = QCoreApplication_ApplicationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

const char* q_application_application_version() {
    libqt_string _str = QCoreApplication_ApplicationVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

bool q_application_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

QCoreApplication* q_application_instance() {
    return QCoreApplication_Instance();
}

void q_application_process_events() {
    QCoreApplication_ProcessEvents();
}

void q_application_process_events2(int32_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

void q_application_process_events3(int32_t flags, void* deadline) {
    QCoreApplication_ProcessEvents3(flags, (QDeadlineTimer*)deadline);
}

bool q_application_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

void q_application_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

void q_application_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

void q_application_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

QAbstractEventDispatcher* q_application_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

void q_application_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

bool q_application_starting_up() {
    return QCoreApplication_StartingUp();
}

bool q_application_closing_down() {
    return QCoreApplication_ClosingDown();
}

const char* q_application_application_dir_path() {
    libqt_string _str = QCoreApplication_ApplicationDirPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_application_application_file_path() {
    libqt_string _str = QCoreApplication_ApplicationFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_application_application_pid() {
    return QCoreApplication_ApplicationPid();
}

int32_t q_application_check_permission(void* self, void* permission) {
    return QCoreApplication_CheckPermission((QCoreApplication*)self, (QPermission*)permission);
}

void q_application_set_library_paths(const char* libraryPaths[static 1]) {
    size_t libraryPaths_len = libqt_strv_length(libraryPaths);
    libqt_string* libraryPaths_qstr = (libqt_string*)malloc(libraryPaths_len * sizeof(libqt_string));
    if (libraryPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_application_set_library_paths\n");
        abort();
    }
    for (size_t i = 0; i < libraryPaths_len; ++i) {
        libraryPaths_qstr[i] = qstring(libraryPaths[i]);
    }
    libqt_list libraryPaths_list = qlist(libraryPaths_qstr, libraryPaths_len);
    QCoreApplication_SetLibraryPaths(libraryPaths_list);
    free(libraryPaths_qstr);
}

const char** q_application_library_paths() {
    libqt_list _arr = QCoreApplication_LibraryPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_application_library_paths\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_application_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

void q_application_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

bool q_application_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

bool q_application_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

const char* q_application_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_application_on_install_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_application_on_remove_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

bool q_application_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

void q_application_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

void q_application_quit() {
    QCoreApplication_Quit();
}

void q_application_exit() {
    QCoreApplication_Exit();
}

void q_application_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

void q_application_on_organization_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

void q_application_on_organization_domain_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

void q_application_on_application_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

void q_application_on_application_version_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_set_attribute2(int32_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

void q_application_process_events1(int32_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

void q_application_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

void q_application_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

void q_application_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

void q_application_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

const char* q_application_translate3(const char* context, const char* key, const char* disambiguation) {
    libqt_string _str = QCoreApplication_Translate3(context, key, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_application_translate4(const char* context, const char* key, const char* disambiguation, int n) {
    libqt_string _str = QCoreApplication_Translate4(context, key, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

const char* q_application_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_application_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_application_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_application_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_application_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_application_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_application_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_application_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_application_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_application_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_application_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_application_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_application_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_application_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_application_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_application_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_application_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_application_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_application_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_application_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_application_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_application_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_application_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_application_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_application_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_application_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_application_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_application_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_application_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_application_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_application_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_application_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_application_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_application_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_application_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_application_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_application_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_application_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_application_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_application_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_application_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_application_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_application_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_application_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_application_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_application_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_application_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_application_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_application_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_application_event_filter(void* self, void* watched, void* event) {
    return QApplication_EventFilter((QApplication*)self, (QObject*)watched, (QEvent*)event);
}

bool q_application_super_event_filter(void* self, void* watched, void* event) {
    return QApplication_SuperEventFilter((QApplication*)self, (QObject*)watched, (QEvent*)event);
}

void q_application_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QApplication_OnEventFilter((QApplication*)self, (intptr_t)callback);
}

void q_application_timer_event(void* self, void* event) {
    QApplication_TimerEvent((QApplication*)self, (QTimerEvent*)event);
}

void q_application_super_timer_event(void* self, void* event) {
    QApplication_SuperTimerEvent((QApplication*)self, (QTimerEvent*)event);
}

void q_application_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QApplication_OnTimerEvent((QApplication*)self, (intptr_t)callback);
}

void q_application_child_event(void* self, void* event) {
    QApplication_ChildEvent((QApplication*)self, (QChildEvent*)event);
}

void q_application_super_child_event(void* self, void* event) {
    QApplication_SuperChildEvent((QApplication*)self, (QChildEvent*)event);
}

void q_application_on_child_event(void* self, void (*callback)(void*, void*)) {
    QApplication_OnChildEvent((QApplication*)self, (intptr_t)callback);
}

void q_application_custom_event(void* self, void* event) {
    QApplication_CustomEvent((QApplication*)self, (QEvent*)event);
}

void q_application_super_custom_event(void* self, void* event) {
    QApplication_SuperCustomEvent((QApplication*)self, (QEvent*)event);
}

void q_application_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QApplication_OnCustomEvent((QApplication*)self, (intptr_t)callback);
}

void q_application_connect_notify(void* self, void* signal) {
    QApplication_ConnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

void q_application_super_connect_notify(void* self, void* signal) {
    QApplication_SuperConnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

void q_application_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QApplication_OnConnectNotify((QApplication*)self, (intptr_t)callback);
}

void q_application_disconnect_notify(void* self, void* signal) {
    QApplication_DisconnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

void q_application_super_disconnect_notify(void* self, void* signal) {
    QApplication_SuperDisconnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

void q_application_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QApplication_OnDisconnectNotify((QApplication*)self, (intptr_t)callback);
}

QObject* q_application_sender(void* self) {
    return QApplication_Sender((QApplication*)self);
}

QObject* q_application_super_sender(void* self) {
    return QApplication_SuperSender((QApplication*)self);
}

void q_application_on_sender(void* self, QObject* (*callback)()) {
    QApplication_OnSender((QApplication*)self, (intptr_t)callback);
}

int32_t q_application_sender_signal_index(void* self) {
    return QApplication_SenderSignalIndex((QApplication*)self);
}

int32_t q_application_super_sender_signal_index(void* self) {
    return QApplication_SuperSenderSignalIndex((QApplication*)self);
}

void q_application_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QApplication_OnSenderSignalIndex((QApplication*)self, (intptr_t)callback);
}

int32_t q_application_receivers(void* self, const char* signal) {
    return QApplication_Receivers((QApplication*)self, signal);
}

int32_t q_application_super_receivers(void* self, const char* signal) {
    return QApplication_SuperReceivers((QApplication*)self, signal);
}

void q_application_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QApplication_OnReceivers((QApplication*)self, (intptr_t)callback);
}

bool q_application_is_signal_connected(void* self, void* signal) {
    return QApplication_IsSignalConnected((QApplication*)self, (QMetaMethod*)signal);
}

bool q_application_super_is_signal_connected(void* self, void* signal) {
    return QApplication_SuperIsSignalConnected((QApplication*)self, (QMetaMethod*)signal);
}

void q_application_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QApplication_OnIsSignalConnected((QApplication*)self, (intptr_t)callback);
}

void q_application_on_about_to_quit(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_AboutToQuit((QCoreApplication*)self, (intptr_t)callback);
}

void q_application_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_application_delete(void* self) {
    QApplication_Delete((QApplication*)(self));
}
