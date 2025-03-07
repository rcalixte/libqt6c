#include "libqabstracteventdispatcher.hpp"
#include "libqabstractnativeeventfilter.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqclipboard.hpp"
#include "libqcoreapplication.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqinputmethod.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqsessionmanager.hpp"
#include <string.h>
#include "libqstylehints.hpp"
#include "libqthread.hpp"
#include "libqtranslator.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqguiapplication.hpp"
#include "libqguiapplication.h"

/// https://doc.qt.io/qt-6/qguiapplication.html

/// q_guiapplication_new constructs a new QGuiApplication object.
///
/// ``` int *argc, char *argv[] ```
QGuiApplication* q_guiapplication_new(int* argc, char* argv[]) {
    return QGuiApplication_new(argc, argv);
}

/// q_guiapplication_new2 constructs a new QGuiApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QGuiApplication* q_guiapplication_new2(int* argc, char* argv[], int param3) {
    return QGuiApplication_new2(argc, argv, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGuiApplication* self ```
QMetaObject* q_guiapplication_meta_object(void* self) {
    return QGuiApplication_MetaObject((QGuiApplication*)self);
}

/// ``` QGuiApplication* self, const char* param1 ```
void* q_guiapplication_metacast(void* self, const char* param1) {
    return QGuiApplication_Metacast((QGuiApplication*)self, param1);
}

/// ``` QGuiApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_guiapplication_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGuiApplication_Metacall((QGuiApplication*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, int32_t (*slot)(QGuiApplication*, enum QMetaObject__Call, int, void*) ```
void q_guiapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGuiApplication_OnMetacall((QGuiApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGuiApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_guiapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGuiApplication_QBaseMetacall((QGuiApplication*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_guiapplication_tr(const char* s) {
    libqt_string _str = QGuiApplication_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// ``` const char* name ```
void q_guiapplication_set_application_display_name(const char* name) {
    QGuiApplication_SetApplicationDisplayName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
///
const char* q_guiapplication_application_display_name() {
    libqt_string _str = QGuiApplication_ApplicationDisplayName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// ``` const char* name ```
void q_guiapplication_set_desktop_file_name(const char* name) {
    QGuiApplication_SetDesktopFileName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
///
const char* q_guiapplication_desktop_file_name() {
    libqt_string _str = QGuiApplication_DesktopFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
///
libqt_list /* of QWindow* */ q_guiapplication_all_windows() {
    libqt_list _arr = QGuiApplication_AllWindows();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
///
libqt_list /* of QWindow* */ q_guiapplication_top_level_windows() {
    libqt_list _arr = QGuiApplication_TopLevelWindows();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
///
/// ``` QPoint* pos ```
QWindow* q_guiapplication_top_level_at(void* pos) {
    return QGuiApplication_TopLevelAt((QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// ``` QIcon* icon ```
void q_guiapplication_set_window_icon(void* icon) {
    QGuiApplication_SetWindowIcon((QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
///
QIcon* q_guiapplication_window_icon() {
    return QGuiApplication_WindowIcon();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
///
const char* q_guiapplication_platform_name() {
    libqt_string _str = QGuiApplication_PlatformName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
///
QWindow* q_guiapplication_modal_window() {
    return QGuiApplication_ModalWindow();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
///
QWindow* q_guiapplication_focus_window() {
    return QGuiApplication_FocusWindow();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
///
QObject* q_guiapplication_focus_object() {
    return QGuiApplication_FocusObject();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
///
QScreen* q_guiapplication_primary_screen() {
    return QGuiApplication_PrimaryScreen();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
///
libqt_list /* of QScreen* */ q_guiapplication_screens() {
    libqt_list _arr = QGuiApplication_Screens();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// ``` QPoint* point ```
QScreen* q_guiapplication_screen_at(void* point) {
    return QGuiApplication_ScreenAt((QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// ``` QGuiApplication* self ```
double q_guiapplication_device_pixel_ratio(void* self) {
    return QGuiApplication_DevicePixelRatio((QGuiApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
///
QCursor* q_guiapplication_override_cursor() {
    return QGuiApplication_OverrideCursor();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// ``` QCursor* overrideCursor ```
void q_guiapplication_set_override_cursor(void* overrideCursor) {
    QGuiApplication_SetOverrideCursor((QCursor*)overrideCursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// ``` QCursor* param1 ```
void q_guiapplication_change_override_cursor(void* param1) {
    QGuiApplication_ChangeOverrideCursor((QCursor*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
///
void q_guiapplication_restore_override_cursor() {
    QGuiApplication_RestoreOverrideCursor();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#font)
///
///
QFont* q_guiapplication_font() {
    return QGuiApplication_Font();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
///
/// ``` QFont* font ```
void q_guiapplication_set_font(void* font) {
    QGuiApplication_SetFont((QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
///
QClipboard* q_guiapplication_clipboard() {
    return QGuiApplication_Clipboard();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#palette)
///
///
QPalette* q_guiapplication_palette() {
    return QGuiApplication_Palette();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
///
/// ``` QPalette* pal ```
void q_guiapplication_set_palette(void* pal) {
    QGuiApplication_SetPalette((QPalette*)pal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
///
int64_t q_guiapplication_keyboard_modifiers() {
    return QGuiApplication_KeyboardModifiers();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
///
int64_t q_guiapplication_query_keyboard_modifiers() {
    return QGuiApplication_QueryKeyboardModifiers();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
///
int64_t q_guiapplication_mouse_buttons() {
    return QGuiApplication_MouseButtons();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// ``` enum Qt__LayoutDirection direction ```
void q_guiapplication_set_layout_direction(int64_t direction) {
    QGuiApplication_SetLayoutDirection(direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
///
int64_t q_guiapplication_layout_direction() {
    return QGuiApplication_LayoutDirection();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
///
bool q_guiapplication_is_right_to_left() {
    return QGuiApplication_IsRightToLeft();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
///
bool q_guiapplication_is_left_to_right() {
    return QGuiApplication_IsLeftToRight();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
///
QStyleHints* q_guiapplication_style_hints() {
    return QGuiApplication_StyleHints();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// ``` bool on ```
void q_guiapplication_set_desktop_settings_aware(bool on) {
    QGuiApplication_SetDesktopSettingsAware(on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
///
bool q_guiapplication_desktop_settings_aware() {
    return QGuiApplication_DesktopSettingsAware();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
///
QInputMethod* q_guiapplication_input_method() {
    return QGuiApplication_InputMethod();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// ``` bool quit ```
void q_guiapplication_set_quit_on_last_window_closed(bool quit) {
    QGuiApplication_SetQuitOnLastWindowClosed(quit);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
///
bool q_guiapplication_quit_on_last_window_closed() {
    return QGuiApplication_QuitOnLastWindowClosed();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
///
int64_t q_guiapplication_application_state() {
    return QGuiApplication_ApplicationState();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// ``` enum Qt__HighDpiScaleFactorRoundingPolicy policy ```
void q_guiapplication_set_high_dpi_scale_factor_rounding_policy(int64_t policy) {
    QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
///
int64_t q_guiapplication_high_dpi_scale_factor_rounding_policy() {
    return QGuiApplication_HighDpiScaleFactorRoundingPolicy();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#exec)
///
///
int32_t q_guiapplication_exec() {
    return QGuiApplication_Exec();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
///
/// ``` QGuiApplication* self, QObject* param1, QEvent* param2 ```
bool q_guiapplication_notify(void* self, void* param1, void* param2) {
    return QGuiApplication_Notify((QGuiApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QObject*, QEvent*) ```
void q_guiapplication_on_notify(void* self, bool (*slot)(void*, void*, void*)) {
    QGuiApplication_OnNotify((QGuiApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGuiApplication* self, QObject* param1, QEvent* param2 ```
bool q_guiapplication_qbase_notify(void* self, void* param1, void* param2) {
    return QGuiApplication_QBaseNotify((QGuiApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_session_restored(void* self) {
    return QGuiApplication_IsSessionRestored((QGuiApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_session_id(void* self) {
    libqt_string _str = QGuiApplication_SessionId((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_session_key(void* self) {
    libqt_string _str = QGuiApplication_SessionKey((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_saving_session(void* self) {
    return QGuiApplication_IsSavingSession((QGuiApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
///
/// ``` QGuiApplication* self, const char* name, int revision ```
void* q_guiapplication_resolve_interface(void* self, const char* name, int revision) {
    return QGuiApplication_ResolveInterface((QGuiApplication*)self, name, revision);
}

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, void* (*slot)(QGuiApplication*, const char*, int) ```
void q_guiapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QGuiApplication_OnResolveInterface((QGuiApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGuiApplication* self, const char* name, int revision ```
void* q_guiapplication_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QGuiApplication_QBaseResolveInterface((QGuiApplication*)self, name, revision);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
///
void q_guiapplication_sync() {
    QGuiApplication_Sync();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_font_database_changed(void* self) {
    QGuiApplication_FontDatabaseChanged((QGuiApplication*)self);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_font_database_changed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_FontDatabaseChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_screen_added(void* self, void* screen) {
    QGuiApplication_ScreenAdded((QGuiApplication*)self, (QScreen*)screen);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_screen_added(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_ScreenAdded((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_screen_removed(void* self, void* screen) {
    QGuiApplication_ScreenRemoved((QGuiApplication*)self, (QScreen*)screen);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_screen_removed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_ScreenRemoved((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// ``` QGuiApplication* self, QScreen* screen ```
void q_guiapplication_primary_screen_changed(void* self, void* screen) {
    QGuiApplication_PrimaryScreenChanged((QGuiApplication*)self, (QScreen*)screen);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_guiapplication_on_primary_screen_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_PrimaryScreenChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_last_window_closed(void* self) {
    QGuiApplication_LastWindowClosed((QGuiApplication*)self);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_last_window_closed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_LastWindowClosed((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// ``` QGuiApplication* self, QObject* focusObject ```
void q_guiapplication_focus_object_changed(void* self, void* focusObject) {
    QGuiApplication_FocusObjectChanged((QGuiApplication*)self, (QObject*)focusObject);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QObject*) ```
void q_guiapplication_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FocusObjectChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// ``` QGuiApplication* self, QWindow* focusWindow ```
void q_guiapplication_focus_window_changed(void* self, void* focusWindow) {
    QGuiApplication_FocusWindowChanged((QGuiApplication*)self, (QWindow*)focusWindow);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QWindow*) ```
void q_guiapplication_on_focus_window_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FocusWindowChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// ``` QGuiApplication* self, enum Qt__ApplicationState state ```
void q_guiapplication_application_state_changed(void* self, int64_t state) {
    QGuiApplication_ApplicationStateChanged((QGuiApplication*)self, state);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, enum Qt__ApplicationState) ```
void q_guiapplication_on_application_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QGuiApplication_Connect_ApplicationStateChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// ``` QGuiApplication* self, enum Qt__LayoutDirection direction ```
void q_guiapplication_layout_direction_changed(void* self, int64_t direction) {
    QGuiApplication_LayoutDirectionChanged((QGuiApplication*)self, direction);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, enum Qt__LayoutDirection) ```
void q_guiapplication_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QGuiApplication_Connect_LayoutDirectionChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// ``` QGuiApplication* self, QSessionManager* sessionManager ```
void q_guiapplication_commit_data_request(void* self, void* sessionManager) {
    QGuiApplication_CommitDataRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_guiapplication_on_commit_data_request(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_CommitDataRequest((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// ``` QGuiApplication* self, QSessionManager* sessionManager ```
void q_guiapplication_save_state_request(void* self, void* sessionManager) {
    QGuiApplication_SaveStateRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_guiapplication_on_save_state_request(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_SaveStateRequest((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_display_name_changed(void* self) {
    QGuiApplication_ApplicationDisplayNameChanged((QGuiApplication*)self);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*) ```
void q_guiapplication_on_application_display_name_changed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_ApplicationDisplayNameChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// ``` QGuiApplication* self, QPalette* pal ```
void q_guiapplication_palette_changed(void* self, void* pal) {
    QGuiApplication_PaletteChanged((QGuiApplication*)self, (QPalette*)pal);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QPalette*) ```
void q_guiapplication_on_palette_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_PaletteChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// ``` QGuiApplication* self, QFont* font ```
void q_guiapplication_font_changed(void* self, void* font) {
    QGuiApplication_FontChanged((QGuiApplication*)self, (QFont*)font);
}

/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QFont*) ```
void q_guiapplication_on_font_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FontChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
///
/// ``` QGuiApplication* self, QEvent* param1 ```
bool q_guiapplication_event(void* self, void* param1) {
    return QGuiApplication_Event((QGuiApplication*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QEvent*) ```
void q_guiapplication_on_event(void* self, bool (*slot)(void*, void*)) {
    QGuiApplication_OnEvent((QGuiApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGuiApplication* self, QEvent* param1 ```
bool q_guiapplication_qbase_event(void* self, void* param1) {
    return QGuiApplication_QBaseEvent((QGuiApplication*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_guiapplication_tr2(const char* s, const char* c) {
    libqt_string _str = QGuiApplication_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_guiapplication_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGuiApplication_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_guiapplication_arguments() {
    libqt_list _arr = QCoreApplication_Arguments();
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

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
void q_guiapplication_set_attribute(int64_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_guiapplication_test_attribute(int64_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_guiapplication_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_guiapplication_organization_domain() {
    libqt_string _str = QCoreApplication_OrganizationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// ``` const char* orgName ```
void q_guiapplication_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_guiapplication_organization_name() {
    libqt_string _str = QCoreApplication_OrganizationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// ``` const char* application ```
void q_guiapplication_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_guiapplication_application_name() {
    libqt_string _str = QCoreApplication_ApplicationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// ``` const char* version ```
void q_guiapplication_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_guiapplication_application_version() {
    libqt_string _str = QCoreApplication_ApplicationVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// ``` bool allow ```
void q_guiapplication_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_guiapplication_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_guiapplication_instance() {
    return QCoreApplication_Instance();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_guiapplication_process_events() {
    QCoreApplication_ProcessEvents();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_guiapplication_process_events2(int64_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_guiapplication_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_guiapplication_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_guiapplication_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_guiapplication_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_guiapplication_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_guiapplication_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_guiapplication_starting_up() {
    return QCoreApplication_StartingUp();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_guiapplication_closing_down() {
    return QCoreApplication_ClosingDown();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_guiapplication_application_dir_path() {
    libqt_string _str = QCoreApplication_ApplicationDirPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
///
const char* q_guiapplication_application_file_path() {
    libqt_string _str = QCoreApplication_ApplicationFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
///
long long q_guiapplication_application_pid() {
    return QCoreApplication_ApplicationPid();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_guiapplication_set_library_paths(const char* libraryPaths[]) {
    size_t libraryPaths_len = libqt_strv_length(libraryPaths);
    libqt_string* libraryPaths_qstr = malloc(libraryPaths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < libraryPaths_len; ++_i) {
        libraryPaths_qstr[_i] = qstring(libraryPaths[_i]);
    }
    libqt_list libraryPaths_list = qstrlist(libraryPaths_qstr, libraryPaths_len);
    QCoreApplication_SetLibraryPaths(libraryPaths_list);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
///
const char** q_guiapplication_library_paths() {
    libqt_list _arr = QCoreApplication_LibraryPaths();
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

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// ``` const char* param1 ```
void q_guiapplication_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_guiapplication_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_guiapplication_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_guiapplication_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_guiapplication_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QGuiApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_guiapplication_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_guiapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QGuiApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_guiapplication_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_guiapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_guiapplication_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_guiapplication_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_guiapplication_quit() {
    QCoreApplication_Quit();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_guiapplication_exit() {
    QCoreApplication_Exit();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_organization_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_organization_domain_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_application_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QGuiApplication* self, void (*slot)(QCoreApplication*) ```
void q_guiapplication_on_application_version_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_guiapplication_set_attribute2(int64_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_guiapplication_process_events1(int64_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_guiapplication_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_guiapplication_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_guiapplication_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_guiapplication_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_guiapplication_translate3(const char* context, const char* key, const char* disambiguation) {
    libqt_string _str = QCoreApplication_Translate3(context, key, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation, int n ```
const char* q_guiapplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
    libqt_string _str = QCoreApplication_Translate4(context, key, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// ``` int retcode ```
void q_guiapplication_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGuiApplication* self ```
const char* q_guiapplication_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGuiApplication* self, const char* name ```
void q_guiapplication_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGuiApplication* self ```
bool q_guiapplication_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGuiApplication* self, bool b ```
bool q_guiapplication_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGuiApplication* self ```
QThread* q_guiapplication_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGuiApplication* self, QThread* thread ```
void q_guiapplication_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGuiApplication* self, int interval ```
int32_t q_guiapplication_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGuiApplication* self, int id ```
void q_guiapplication_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGuiApplication* self ```
libqt_list /* of QObject* */ q_guiapplication_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGuiApplication* self, QObject* parent ```
void q_guiapplication_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGuiApplication* self, QObject* filterObj ```
void q_guiapplication_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGuiApplication* self, QObject* obj ```
void q_guiapplication_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_guiapplication_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGuiApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_guiapplication_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_guiapplication_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_guiapplication_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGuiApplication* self, const char* name, QVariant* value ```
bool q_guiapplication_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGuiApplication* self, const char* name ```
QVariant* q_guiapplication_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGuiApplication* self ```
const char** q_guiapplication_dynamic_property_names(void* self) {
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
/// ``` QGuiApplication* self ```
QBindingStorage* q_guiapplication_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGuiApplication* self ```
QBindingStorage* q_guiapplication_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGuiApplication* self, void (*slot)(QObject*) ```
void q_guiapplication_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGuiApplication* self, const char* classname ```
bool q_guiapplication_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGuiApplication* self ```
void q_guiapplication_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGuiApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_guiapplication_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_guiapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGuiApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_guiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGuiApplication* self, QObject* param1 ```
void q_guiapplication_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGuiApplication* self, void (*slot)(QObject*, QObject*) ```
void q_guiapplication_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QObject* watched, QEvent* event ```
bool q_guiapplication_event_filter(void* self, void* watched, void* event) {
    return QGuiApplication_EventFilter((QGuiApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QObject* watched, QEvent* event ```
bool q_guiapplication_qbase_event_filter(void* self, void* watched, void* event) {
    return QGuiApplication_QBaseEventFilter((QGuiApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QObject*, QEvent*) ```
void q_guiapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGuiApplication_OnEventFilter((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QTimerEvent* event ```
void q_guiapplication_timer_event(void* self, void* event) {
    QGuiApplication_TimerEvent((QGuiApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QTimerEvent* event ```
void q_guiapplication_qbase_timer_event(void* self, void* event) {
    QGuiApplication_QBaseTimerEvent((QGuiApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QTimerEvent*) ```
void q_guiapplication_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_OnTimerEvent((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QChildEvent* event ```
void q_guiapplication_child_event(void* self, void* event) {
    QGuiApplication_ChildEvent((QGuiApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QChildEvent* event ```
void q_guiapplication_qbase_child_event(void* self, void* event) {
    QGuiApplication_QBaseChildEvent((QGuiApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QChildEvent*) ```
void q_guiapplication_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_OnChildEvent((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QEvent* event ```
void q_guiapplication_custom_event(void* self, void* event) {
    QGuiApplication_CustomEvent((QGuiApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QEvent* event ```
void q_guiapplication_qbase_custom_event(void* self, void* event) {
    QGuiApplication_QBaseCustomEvent((QGuiApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QEvent*) ```
void q_guiapplication_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_OnCustomEvent((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_connect_notify(void* self, void* signal) {
    QGuiApplication_ConnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_qbase_connect_notify(void* self, void* signal) {
    QGuiApplication_QBaseConnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_OnConnectNotify((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_disconnect_notify(void* self, void* signal) {
    QGuiApplication_DisconnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
void q_guiapplication_qbase_disconnect_notify(void* self, void* signal) {
    QGuiApplication_QBaseDisconnectNotify((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, void (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_OnDisconnectNotify((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_sender(void* self) {
    return QGuiApplication_Sender((QGuiApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self ```
QObject* q_guiapplication_qbase_sender(void* self) {
    return QGuiApplication_QBaseSender((QGuiApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, QObject* (*slot)() ```
void q_guiapplication_on_sender(void* self, QObject* (*slot)()) {
    QGuiApplication_OnSender((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self ```
int32_t q_guiapplication_sender_signal_index(void* self) {
    return QGuiApplication_SenderSignalIndex((QGuiApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self ```
int32_t q_guiapplication_qbase_sender_signal_index(void* self) {
    return QGuiApplication_QBaseSenderSignalIndex((QGuiApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, int32_t (*slot)() ```
void q_guiapplication_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGuiApplication_OnSenderSignalIndex((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, const char* signal ```
int32_t q_guiapplication_receivers(void* self, const char* signal) {
    return QGuiApplication_Receivers((QGuiApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, const char* signal ```
int32_t q_guiapplication_qbase_receivers(void* self, const char* signal) {
    return QGuiApplication_QBaseReceivers((QGuiApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, int32_t (*slot)(QGuiApplication*, const char*) ```
void q_guiapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGuiApplication_OnReceivers((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
bool q_guiapplication_is_signal_connected(void* self, void* signal) {
    return QGuiApplication_IsSignalConnected((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGuiApplication* self, QMetaMethod* signal ```
bool q_guiapplication_qbase_is_signal_connected(void* self, void* signal) {
    return QGuiApplication_QBaseIsSignalConnected((QGuiApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGuiApplication* self, bool (*slot)(QGuiApplication*, QMetaMethod*) ```
void q_guiapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGuiApplication_OnIsSignalConnected((QGuiApplication*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGuiApplication* self ```
void q_guiapplication_delete(void* self) {
    QGuiApplication_Delete((QGuiApplication*)(self));
}