#include "libqcoreevent.hpp"
#include "libqclipboard.hpp"
#include "libqcoreapplication.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqinputmethod.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqsessionmanager.hpp"
#include "libqstylehints.hpp"
#include "libqwindow.hpp"
#include "libqguiapplication.hpp"
#include "libqguiapplication.h"

QGuiApplication* q_guiapplication_new(int* argc, char* argv[]) {
    return QGuiApplication_new(argc, argv);
}

QGuiApplication* q_guiapplication_new2(int* argc, char* argv[], int param3) {
    return QGuiApplication_new2(argc, argv, param3);
}

const QMetaObject* q_guiapplication_meta_object(void* self) {
    return QGuiApplication_MetaObject((QGuiApplication*)self);
}

void* q_guiapplication_metacast(void* self, const char* param1) {
    return QGuiApplication_Metacast((QGuiApplication*)self, param1);
}

int32_t q_guiapplication_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGuiApplication_Metacall((QGuiApplication*)self, param1, param2, param3);
}

void q_guiapplication_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGuiApplication_OnMetacall((QGuiApplication*)self, (intptr_t)callback);
}

int32_t q_guiapplication_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGuiApplication_QBaseMetacall((QGuiApplication*)self, param1, param2, param3);
}

const char* q_guiapplication_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_application_display_name(const char* name) {
    QGuiApplication_SetApplicationDisplayName(qstring(name));
}

const char* q_guiapplication_application_display_name() {
    libqt_string _str = QGuiApplication_ApplicationDisplayName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_badge_number(void* self, long long number) {
    QGuiApplication_SetBadgeNumber((QGuiApplication*)self, number);
}

void q_guiapplication_set_desktop_file_name(const char* name) {
    QGuiApplication_SetDesktopFileName(qstring(name));
}

const char* q_guiapplication_desktop_file_name() {
    libqt_string _str = QGuiApplication_DesktopFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QWindow* */ q_guiapplication_all_windows() {
    libqt_list _arr = QGuiApplication_AllWindows();
    return _arr;
}

libqt_list /* of QWindow* */ q_guiapplication_top_level_windows() {
    libqt_list _arr = QGuiApplication_TopLevelWindows();
    return _arr;
}

QWindow* q_guiapplication_top_level_at(void* pos) {
    return QGuiApplication_TopLevelAt((QPoint*)pos);
}

void q_guiapplication_set_window_icon(void* icon) {
    QGuiApplication_SetWindowIcon((QIcon*)icon);
}

QIcon* q_guiapplication_window_icon() {
    return QGuiApplication_WindowIcon();
}

const char* q_guiapplication_platform_name() {
    libqt_string _str = QGuiApplication_PlatformName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWindow* q_guiapplication_modal_window() {
    return QGuiApplication_ModalWindow();
}

QWindow* q_guiapplication_focus_window() {
    return QGuiApplication_FocusWindow();
}

QObject* q_guiapplication_focus_object() {
    return QGuiApplication_FocusObject();
}

QScreen* q_guiapplication_primary_screen() {
    return QGuiApplication_PrimaryScreen();
}

libqt_list /* of QScreen* */ q_guiapplication_screens() {
    libqt_list _arr = QGuiApplication_Screens();
    return _arr;
}

QScreen* q_guiapplication_screen_at(void* point) {
    return QGuiApplication_ScreenAt((QPoint*)point);
}

double q_guiapplication_device_pixel_ratio(void* self) {
    return QGuiApplication_DevicePixelRatio((QGuiApplication*)self);
}

QCursor* q_guiapplication_override_cursor() {
    return QGuiApplication_OverrideCursor();
}

void q_guiapplication_set_override_cursor(void* overrideCursor) {
    QGuiApplication_SetOverrideCursor((QCursor*)overrideCursor);
}

void q_guiapplication_change_override_cursor(void* param1) {
    QGuiApplication_ChangeOverrideCursor((QCursor*)param1);
}

void q_guiapplication_restore_override_cursor() {
    QGuiApplication_RestoreOverrideCursor();
}

QFont* q_guiapplication_font() {
    return QGuiApplication_Font();
}

void q_guiapplication_set_font(void* font) {
    QGuiApplication_SetFont((QFont*)font);
}

QClipboard* q_guiapplication_clipboard() {
    return QGuiApplication_Clipboard();
}

QPalette* q_guiapplication_palette() {
    return QGuiApplication_Palette();
}

void q_guiapplication_set_palette(void* pal) {
    QGuiApplication_SetPalette((QPalette*)pal);
}

int64_t q_guiapplication_keyboard_modifiers() {
    return QGuiApplication_KeyboardModifiers();
}

int64_t q_guiapplication_query_keyboard_modifiers() {
    return QGuiApplication_QueryKeyboardModifiers();
}

int64_t q_guiapplication_mouse_buttons() {
    return QGuiApplication_MouseButtons();
}

void q_guiapplication_set_layout_direction(int32_t direction) {
    QGuiApplication_SetLayoutDirection(direction);
}

int32_t q_guiapplication_layout_direction() {
    return QGuiApplication_LayoutDirection();
}

bool q_guiapplication_is_right_to_left() {
    return QGuiApplication_IsRightToLeft();
}

bool q_guiapplication_is_left_to_right() {
    return QGuiApplication_IsLeftToRight();
}

QStyleHints* q_guiapplication_style_hints() {
    return QGuiApplication_StyleHints();
}

void q_guiapplication_set_desktop_settings_aware(bool on) {
    QGuiApplication_SetDesktopSettingsAware(on);
}

bool q_guiapplication_desktop_settings_aware() {
    return QGuiApplication_DesktopSettingsAware();
}

QInputMethod* q_guiapplication_input_method() {
    return QGuiApplication_InputMethod();
}

void q_guiapplication_set_quit_on_last_window_closed(bool quit) {
    QGuiApplication_SetQuitOnLastWindowClosed(quit);
}

bool q_guiapplication_quit_on_last_window_closed() {
    return QGuiApplication_QuitOnLastWindowClosed();
}

int32_t q_guiapplication_application_state() {
    return QGuiApplication_ApplicationState();
}

void q_guiapplication_set_high_dpi_scale_factor_rounding_policy(int32_t policy) {
    QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy);
}

int32_t q_guiapplication_high_dpi_scale_factor_rounding_policy() {
    return QGuiApplication_HighDpiScaleFactorRoundingPolicy();
}

int32_t q_guiapplication_exec() {
    return QGuiApplication_Exec();
}

bool q_guiapplication_notify(void* self, void* param1, void* param2) {
    return QGuiApplication_Notify((QGuiApplication*)self, (QObject*)param1, (QEvent*)param2);
}

void q_guiapplication_on_notify(void* self, bool (*callback)(void*, void*, void*)) {
    QGuiApplication_OnNotify((QGuiApplication*)self, (intptr_t)callback);
}

bool q_guiapplication_qbase_notify(void* self, void* param1, void* param2) {
    return QGuiApplication_QBaseNotify((QGuiApplication*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_guiapplication_is_session_restored(void* self) {
    return QGuiApplication_IsSessionRestored((QGuiApplication*)self);
}

const char* q_guiapplication_session_id(void* self) {
    libqt_string _str = QGuiApplication_SessionId((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_guiapplication_session_key(void* self) {
    libqt_string _str = QGuiApplication_SessionKey((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_guiapplication_is_saving_session(void* self) {
    return QGuiApplication_IsSavingSession((QGuiApplication*)self);
}

void* q_guiapplication_resolve_interface(void* self, const char* name, int revision) {
    return QGuiApplication_ResolveInterface((QGuiApplication*)self, name, revision);
}

void q_guiapplication_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QGuiApplication_OnResolveInterface((QGuiApplication*)self, (intptr_t)callback);
}

void* q_guiapplication_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QGuiApplication_QBaseResolveInterface((QGuiApplication*)self, name, revision);
}

void q_guiapplication_sync() {
    QGuiApplication_Sync();
}

void q_guiapplication_font_database_changed(void* self) {
    QGuiApplication_FontDatabaseChanged((QGuiApplication*)self);
}

void q_guiapplication_on_font_database_changed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_FontDatabaseChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_screen_added(void* self, void* screen) {
    QGuiApplication_ScreenAdded((QGuiApplication*)self, (QScreen*)screen);
}

void q_guiapplication_on_screen_added(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_ScreenAdded((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_screen_removed(void* self, void* screen) {
    QGuiApplication_ScreenRemoved((QGuiApplication*)self, (QScreen*)screen);
}

void q_guiapplication_on_screen_removed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_ScreenRemoved((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_primary_screen_changed(void* self, void* screen) {
    QGuiApplication_PrimaryScreenChanged((QGuiApplication*)self, (QScreen*)screen);
}

void q_guiapplication_on_primary_screen_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_PrimaryScreenChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_last_window_closed(void* self) {
    QGuiApplication_LastWindowClosed((QGuiApplication*)self);
}

void q_guiapplication_on_last_window_closed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_LastWindowClosed((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_focus_object_changed(void* self, void* focusObject) {
    QGuiApplication_FocusObjectChanged((QGuiApplication*)self, (QObject*)focusObject);
}

void q_guiapplication_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FocusObjectChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_focus_window_changed(void* self, void* focusWindow) {
    QGuiApplication_FocusWindowChanged((QGuiApplication*)self, (QWindow*)focusWindow);
}

void q_guiapplication_on_focus_window_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FocusWindowChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_application_state_changed(void* self, int32_t state) {
    QGuiApplication_ApplicationStateChanged((QGuiApplication*)self, state);
}

void q_guiapplication_on_application_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QGuiApplication_Connect_ApplicationStateChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_layout_direction_changed(void* self, int32_t direction) {
    QGuiApplication_LayoutDirectionChanged((QGuiApplication*)self, direction);
}

void q_guiapplication_on_layout_direction_changed(void* self, void (*callback)(void*, int32_t)) {
    QGuiApplication_Connect_LayoutDirectionChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_commit_data_request(void* self, void* sessionManager) {
    QGuiApplication_CommitDataRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

void q_guiapplication_on_commit_data_request(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_CommitDataRequest((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_save_state_request(void* self, void* sessionManager) {
    QGuiApplication_SaveStateRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

void q_guiapplication_on_save_state_request(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_SaveStateRequest((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_application_display_name_changed(void* self) {
    QGuiApplication_ApplicationDisplayNameChanged((QGuiApplication*)self);
}

void q_guiapplication_on_application_display_name_changed(void* self, void (*callback)(void*)) {
    QGuiApplication_Connect_ApplicationDisplayNameChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_palette_changed(void* self, void* pal) {
    QGuiApplication_PaletteChanged((QGuiApplication*)self, (QPalette*)pal);
}

void q_guiapplication_on_palette_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_PaletteChanged((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_font_changed(void* self, void* font) {
    QGuiApplication_FontChanged((QGuiApplication*)self, (QFont*)font);
}

void q_guiapplication_on_font_changed(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_Connect_FontChanged((QGuiApplication*)self, (intptr_t)callback);
}

bool q_guiapplication_event(void* self, void* param1) {
    return QGuiApplication_Event((QGuiApplication*)self, (QEvent*)param1);
}

void q_guiapplication_on_event(void* self, bool (*callback)(void*, void*)) {
    QGuiApplication_OnEvent((QGuiApplication*)self, (intptr_t)callback);
}

bool q_guiapplication_qbase_event(void* self, void* param1) {
    return QGuiApplication_QBaseEvent((QGuiApplication*)self, (QEvent*)param1);
}

const char* q_guiapplication_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_guiapplication_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_guiapplication_arguments() {
    libqt_list _arr = QCoreApplication_Arguments();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_guiapplication_arguments");
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

void q_guiapplication_set_attribute(int32_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

bool q_guiapplication_test_attribute(int32_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

void q_guiapplication_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

const char* q_guiapplication_organization_domain() {
    libqt_string _str = QCoreApplication_OrganizationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

const char* q_guiapplication_organization_name() {
    libqt_string _str = QCoreApplication_OrganizationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

const char* q_guiapplication_application_name() {
    libqt_string _str = QCoreApplication_ApplicationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

const char* q_guiapplication_application_version() {
    libqt_string _str = QCoreApplication_ApplicationVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

bool q_guiapplication_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

QCoreApplication* q_guiapplication_instance() {
    return QCoreApplication_Instance();
}

void q_guiapplication_process_events() {
    QCoreApplication_ProcessEvents();
}

void q_guiapplication_process_events2(int32_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

void q_guiapplication_process_events3(int32_t flags, void* deadline) {
    QCoreApplication_ProcessEvents3(flags, (QDeadlineTimer*)deadline);
}

bool q_guiapplication_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

void q_guiapplication_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

void q_guiapplication_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

void q_guiapplication_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

QAbstractEventDispatcher* q_guiapplication_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

void q_guiapplication_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

bool q_guiapplication_starting_up() {
    return QCoreApplication_StartingUp();
}

bool q_guiapplication_closing_down() {
    return QCoreApplication_ClosingDown();
}

const char* q_guiapplication_application_dir_path() {
    libqt_string _str = QCoreApplication_ApplicationDirPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_guiapplication_application_file_path() {
    libqt_string _str = QCoreApplication_ApplicationFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_guiapplication_application_pid() {
    return QCoreApplication_ApplicationPid();
}

int32_t q_guiapplication_check_permission(void* self, void* permission) {
    return QCoreApplication_CheckPermission((QCoreApplication*)self, (QPermission*)permission);
}

void q_guiapplication_set_library_paths(const char* libraryPaths[static 1]) {
    size_t libraryPaths_len = libqt_strv_length(libraryPaths);
    libqt_string* libraryPaths_qstr = (libqt_string*)malloc(libraryPaths_len * sizeof(libqt_string));
    if (libraryPaths_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_guiapplication_set_library_paths");
        abort();
    }
    for (size_t i = 0; i < libraryPaths_len; ++i) {
        libraryPaths_qstr[i] = qstring(libraryPaths[i]);
    }
    libqt_list libraryPaths_list = qlist(libraryPaths_qstr, libraryPaths_len);
    QCoreApplication_SetLibraryPaths(libraryPaths_list);
    free(libraryPaths_qstr);
}

const char** q_guiapplication_library_paths() {
    libqt_list _arr = QCoreApplication_LibraryPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_guiapplication_library_paths");
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

void q_guiapplication_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

void q_guiapplication_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

bool q_guiapplication_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

bool q_guiapplication_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

const char* q_guiapplication_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_guiapplication_on_install_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_guiapplication_on_remove_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

bool q_guiapplication_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

void q_guiapplication_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

void q_guiapplication_quit() {
    QCoreApplication_Quit();
}

void q_guiapplication_exit() {
    QCoreApplication_Exit();
}

void q_guiapplication_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

void q_guiapplication_on_organization_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

void q_guiapplication_on_organization_domain_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

void q_guiapplication_on_application_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

void q_guiapplication_on_application_version_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_set_attribute2(int32_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

void q_guiapplication_process_events1(int32_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

void q_guiapplication_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

void q_guiapplication_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

void q_guiapplication_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

void q_guiapplication_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

const char* q_guiapplication_translate3(const char* context, const char* key, const char* disambiguation) {
    libqt_string _str = QCoreApplication_Translate3(context, key, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_guiapplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
    libqt_string _str = QCoreApplication_Translate4(context, key, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

const char* q_guiapplication_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_guiapplication_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_guiapplication_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_guiapplication_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_guiapplication_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_guiapplication_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_guiapplication_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_guiapplication_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_guiapplication_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_guiapplication_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_guiapplication_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_guiapplication_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_guiapplication_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_guiapplication_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_guiapplication_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_guiapplication_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_guiapplication_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_guiapplication_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_guiapplication_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_guiapplication_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_guiapplication_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_guiapplication_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_guiapplication_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_guiapplication_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_guiapplication_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_guiapplication_dynamic_property_names");
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

QBindingStorage* q_guiapplication_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_guiapplication_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_guiapplication_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_guiapplication_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_guiapplication_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_guiapplication_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_guiapplication_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_guiapplication_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_guiapplication_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_guiapplication_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_guiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_guiapplication_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_guiapplication_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_guiapplication_event_filter(void* self, void* watched, void* event) {
    return QGuiApplication_EventFilter((QGuiApplication*)self, (QObject*)watched, (QEvent*)event);
}

bool q_guiapplication_qbase_event_filter(void* self, void* watched, void* event) {
    return QGuiApplication_QBaseEventFilter((QGuiApplication*)self, (QObject*)watched, (QEvent*)event);
}

void q_guiapplication_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGuiApplication_OnEventFilter((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_timer_event(void* self, void* event) {
    QGuiApplication_TimerEvent((QGuiApplication*)self, (QTimerEvent*)event);
}

void q_guiapplication_qbase_timer_event(void* self, void* event) {
    QGuiApplication_QBaseTimerEvent((QGuiApplication*)self, (QTimerEvent*)event);
}

void q_guiapplication_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_OnTimerEvent((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_child_event(void* self, void* event) {
    QGuiApplication_ChildEvent((QGuiApplication*)self, (QChildEvent*)event);
}

void q_guiapplication_qbase_child_event(void* self, void* event) {
    QGuiApplication_QBaseChildEvent((QGuiApplication*)self, (QChildEvent*)event);
}

void q_guiapplication_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_OnChildEvent((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_custom_event(void* self, void* event) {
    QGuiApplication_CustomEvent((QGuiApplication*)self, (QEvent*)event);
}

void q_guiapplication_qbase_custom_event(void* self, void* event) {
    QGuiApplication_QBaseCustomEvent((QGuiApplication*)self, (QEvent*)event);
}

void q_guiapplication_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_OnCustomEvent((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_connect_notify(void* self, void* signal) {
    QGuiApplication_ConnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

void q_guiapplication_qbase_connect_notify(void* self, void* signal) {
    QGuiApplication_QBaseConnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

void q_guiapplication_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_OnConnectNotify((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_disconnect_notify(void* self, void* signal) {
    QGuiApplication_DisconnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

void q_guiapplication_qbase_disconnect_notify(void* self, void* signal) {
    QGuiApplication_QBaseDisconnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

void q_guiapplication_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGuiApplication_OnDisconnectNotify((QGuiApplication*)self, (intptr_t)callback);
}

QObject* q_guiapplication_sender(void* self) {
    return QGuiApplication_Sender((QGuiApplication*)self);
}

QObject* q_guiapplication_qbase_sender(void* self) {
    return QGuiApplication_QBaseSender((QGuiApplication*)self);
}

void q_guiapplication_on_sender(void* self, QObject* (*callback)()) {
    QGuiApplication_OnSender((QGuiApplication*)self, (intptr_t)callback);
}

int32_t q_guiapplication_sender_signal_index(void* self) {
    return QGuiApplication_SenderSignalIndex((QGuiApplication*)self);
}

int32_t q_guiapplication_qbase_sender_signal_index(void* self) {
    return QGuiApplication_QBaseSenderSignalIndex((QGuiApplication*)self);
}

void q_guiapplication_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGuiApplication_OnSenderSignalIndex((QGuiApplication*)self, (intptr_t)callback);
}

int32_t q_guiapplication_receivers(void* self, const char* signal) {
    return QGuiApplication_Receivers((QGuiApplication*)self, signal);
}

int32_t q_guiapplication_qbase_receivers(void* self, const char* signal) {
    return QGuiApplication_QBaseReceivers((QGuiApplication*)self, signal);
}

void q_guiapplication_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGuiApplication_OnReceivers((QGuiApplication*)self, (intptr_t)callback);
}

bool q_guiapplication_is_signal_connected(void* self, void* signal) {
    return QGuiApplication_IsSignalConnected((QGuiApplication*)self, (QMetaMethod*)signal);
}

bool q_guiapplication_qbase_is_signal_connected(void* self, void* signal) {
    return QGuiApplication_QBaseIsSignalConnected((QGuiApplication*)self, (QMetaMethod*)signal);
}

void q_guiapplication_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGuiApplication_OnIsSignalConnected((QGuiApplication*)self, (intptr_t)callback);
}

void q_guiapplication_on_about_to_quit(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_AboutToQuit((QCoreApplication*)self, (intptr_t)callback);
}

void q_guiapplication_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_guiapplication_delete(void* self) {
    QGuiApplication_Delete((QGuiApplication*)(self));
}
