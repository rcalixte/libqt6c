#include "libqabstracteventdispatcher.hpp"
#include "libqabstractnativeeventfilter.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqclipboard.hpp"
#include "libqcoreapplication.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontmetrics.hpp"
#include "libqguiapplication.hpp"
#include "libqicon.hpp"
#include "libqinputmethod.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqsessionmanager.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstylehints.hpp"
#include "libqthread.hpp"
#include "libqtranslator.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqapplication.hpp"
#include "libqapplication.h"

/// https://doc.qt.io/qt-6/qapplication.html

/// q_application_new constructs a new QApplication object.
///
/// ``` int *argc, char *argv[] ```
QApplication* q_application_new(int* argc, char* argv[]) {
    return QApplication_new(argc, argv);
}

/// q_application_new2 constructs a new QApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QApplication* q_application_new2(int* argc, char* argv[], int param3) {
    return QApplication_new2(argc, argv, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QApplication* self ```
QMetaObject* q_application_meta_object(void* self) {
    return QApplication_MetaObject((QApplication*)self);
}

/// ``` QApplication* self, const char* param1 ```
void* q_application_metacast(void* self, const char* param1) {
    return QApplication_Metacast((QApplication*)self, param1);
}

/// ``` QApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_application_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QApplication_Metacall((QApplication*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QApplication* self, int32_t (*slot)(QApplication*, enum QMetaObject__Call, int, void*) ```
void q_application_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QApplication_OnMetacall((QApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_application_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QApplication_QBaseMetacall((QApplication*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_application_tr(const char* s) {
    libqt_string _str = QApplication_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#style)
///
///
QStyle* q_application_style() {
    return QApplication_Style();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// ``` QStyle* style ```
void q_application_set_style(void* style) {
    QApplication_SetStyle((QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
///
/// ``` const char* style ```
QStyle* q_application_set_style_with_style(const char* style) {
    return QApplication_SetStyleWithStyle(qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// ``` QWidget* param1 ```
QPalette* q_application_palette(void* param1) {
    return QApplication_Palette((QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
///
/// ``` const char* className ```
QPalette* q_application_palette_with_class_name(const char* className) {
    return QApplication_PaletteWithClassName(className);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// ``` QPalette* param1 ```
void q_application_set_palette(void* param1) {
    QApplication_SetPalette((QPalette*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
///
QFont* q_application_font() {
    return QApplication_Font();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// ``` QWidget* param1 ```
QFont* q_application_font_with_q_widget(void* param1) {
    return QApplication_FontWithQWidget((QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
///
/// ``` const char* className ```
QFont* q_application_font_with_class_name(const char* className) {
    return QApplication_FontWithClassName(className);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// ``` QFont* param1 ```
void q_application_set_font(void* param1) {
    QApplication_SetFont((QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
///
///
QFontMetrics* q_application_font_metrics() {
    return QApplication_FontMetrics();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
///
///
libqt_list /* of QWidget* */ q_application_all_widgets() {
    libqt_list _arr = QApplication_AllWidgets();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
///
///
libqt_list /* of QWidget* */ q_application_top_level_widgets() {
    libqt_list _arr = QApplication_TopLevelWidgets();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
///
///
QWidget* q_application_active_popup_widget() {
    return QApplication_ActivePopupWidget();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
///
///
QWidget* q_application_active_modal_widget() {
    return QApplication_ActiveModalWidget();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
///
///
QWidget* q_application_focus_widget() {
    return QApplication_FocusWidget();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
///
///
QWidget* q_application_active_window() {
    return QApplication_ActiveWindow();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
///
/// ``` QWidget* act ```
void q_application_set_active_window(void* act) {
    QApplication_SetActiveWindow((QWidget*)act);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// ``` QPoint* p ```
QWidget* q_application_widget_at(void* p) {
    return QApplication_WidgetAt((QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
///
/// ``` int x, int y ```
QWidget* q_application_widget_at2(int x, int y) {
    return QApplication_WidgetAt2(x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// ``` QPoint* p ```
QWidget* q_application_top_level_at(void* p) {
    return QApplication_TopLevelAt((QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
///
/// ``` int x, int y ```
QWidget* q_application_top_level_at2(int x, int y) {
    return QApplication_TopLevelAt2(x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#beep)
///
///
void q_application_beep() {
    QApplication_Beep();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// ``` QWidget* widget ```
void q_application_alert(void* widget) {
    QApplication_Alert((QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
///
/// ``` int cursorFlashTime ```
void q_application_set_cursor_flash_time(int cursorFlashTime) {
    QApplication_SetCursorFlashTime(cursorFlashTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
///
///
int32_t q_application_cursor_flash_time() {
    return QApplication_CursorFlashTime();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
///
/// ``` int doubleClickInterval ```
void q_application_set_double_click_interval(int doubleClickInterval) {
    QApplication_SetDoubleClickInterval(doubleClickInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
///
///
int32_t q_application_double_click_interval() {
    return QApplication_DoubleClickInterval();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
///
/// ``` int keyboardInputInterval ```
void q_application_set_keyboard_input_interval(int keyboardInputInterval) {
    QApplication_SetKeyboardInputInterval(keyboardInputInterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
///
///
int32_t q_application_keyboard_input_interval() {
    return QApplication_KeyboardInputInterval();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
///
/// ``` int wheelScrollLines ```
void q_application_set_wheel_scroll_lines(int wheelScrollLines) {
    QApplication_SetWheelScrollLines(wheelScrollLines);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
///
///
int32_t q_application_wheel_scroll_lines() {
    return QApplication_WheelScrollLines();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
///
/// ``` int ms ```
void q_application_set_start_drag_time(int ms) {
    QApplication_SetStartDragTime(ms);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
///
///
int32_t q_application_start_drag_time() {
    return QApplication_StartDragTime();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
///
/// ``` int l ```
void q_application_set_start_drag_distance(int l) {
    QApplication_SetStartDragDistance(l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
///
///
int32_t q_application_start_drag_distance() {
    return QApplication_StartDragDistance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
///
/// ``` enum Qt__UIEffect param1 ```
bool q_application_is_effect_enabled(int64_t param1) {
    return QApplication_IsEffectEnabled(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// ``` enum Qt__UIEffect param1 ```
void q_application_set_effect_enabled(int64_t param1) {
    QApplication_SetEffectEnabled(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#exec)
///
///
int32_t q_application_exec() {
    return QApplication_Exec();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
///
/// ``` QApplication* self, QObject* param1, QEvent* param2 ```
bool q_application_notify(void* self, void* param1, void* param2) {
    return QApplication_Notify((QApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QObject*, QEvent*) ```
void q_application_on_notify(void* self, bool (*slot)(void*, void*, void*)) {
    QApplication_OnNotify((QApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QApplication* self, QObject* param1, QEvent* param2 ```
bool q_application_qbase_notify(void* self, void* param1, void* param2) {
    return QApplication_QBaseNotify((QApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
///
/// ``` QApplication* self, const char* name, int revision ```
void* q_application_resolve_interface(void* self, const char* name, int revision) {
    return QApplication_ResolveInterface((QApplication*)self, name, revision);
}

/// Allows for overriding the related default method
///
/// ``` QApplication* self, void* (*slot)(QApplication*, const char*, int) ```
void q_application_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QApplication_OnResolveInterface((QApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QApplication* self, const char* name, int revision ```
void* q_application_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QApplication_QBaseResolveInterface((QApplication*)self, name, revision);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
///
/// ``` QApplication* self, QWidget* old, QWidget* now ```
void q_application_focus_changed(void* self, void* old, void* now) {
    QApplication_FocusChanged((QApplication*)self, (QWidget*)old, (QWidget*)now);
}

/// ``` QApplication* self, void (*slot)(QApplication*, QWidget*, QWidget*) ```
void q_application_on_focus_changed(void* self, void (*slot)(void*, void*, void*)) {
    QApplication_Connect_FocusChanged((QApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
///
/// ``` QApplication* self ```
const char* q_application_style_sheet(void* self) {
    libqt_string _str = QApplication_StyleSheet((QApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
///
/// ``` QApplication* self, const char* sheet ```
void q_application_set_style_sheet(void* self, const char* sheet) {
    QApplication_SetStyleSheet((QApplication*)self, qstring(sheet));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
///
/// ``` QApplication* self, bool enabled ```
void q_application_set_auto_sip_enabled(void* self, bool enabled) {
    QApplication_SetAutoSipEnabled((QApplication*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
///
/// ``` QApplication* self ```
bool q_application_auto_sip_enabled(void* self) {
    return QApplication_AutoSipEnabled((QApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
///
///
void q_application_close_all_windows() {
    QApplication_CloseAllWindows();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
///
///
void q_application_about_qt() {
    QApplication_AboutQt();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
///
/// ``` QApplication* self, QEvent* param1 ```
bool q_application_event(void* self, void* param1) {
    return QApplication_Event((QApplication*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QEvent*) ```
void q_application_on_event(void* self, bool (*slot)(void*, void*)) {
    QApplication_OnEvent((QApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QApplication* self, QEvent* param1 ```
bool q_application_qbase_event(void* self, void* param1) {
    return QApplication_QBaseEvent((QApplication*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_application_tr2(const char* s, const char* c) {
    libqt_string _str = QApplication_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_application_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QApplication_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
///
/// ``` QPalette* param1, const char* className ```
void q_application_set_palette2(void* param1, const char* className) {
    QApplication_SetPalette2((QPalette*)param1, className);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
///
/// ``` QFont* param1, const char* className ```
void q_application_set_font2(void* param1, const char* className) {
    QApplication_SetFont2((QFont*)param1, className);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
///
/// ``` QWidget* widget, int duration ```
void q_application_alert2(void* widget, int duration) {
    QApplication_Alert2((QWidget*)widget, duration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
///
/// ``` enum Qt__UIEffect param1, bool enable ```
void q_application_set_effect_enabled2(int64_t param1, bool enable) {
    QApplication_SetEffectEnabled2(param1, enable);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
///
/// ``` const char* name ```
void q_application_set_application_display_name(const char* name) {
    QGuiApplication_SetApplicationDisplayName(qstring(name));
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
///
///
const char* q_application_application_display_name() {
    libqt_string _str = QGuiApplication_ApplicationDisplayName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
///
/// ``` const char* name ```
void q_application_set_desktop_file_name(const char* name) {
    QGuiApplication_SetDesktopFileName(qstring(name));
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
///
///
const char* q_application_desktop_file_name() {
    libqt_string _str = QGuiApplication_DesktopFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
///
///
libqt_list /* of QWindow* */ q_application_all_windows() {
    libqt_list _arr = QGuiApplication_AllWindows();
    return _arr;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
///
///
libqt_list /* of QWindow* */ q_application_top_level_windows() {
    libqt_list _arr = QGuiApplication_TopLevelWindows();
    return _arr;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
///
/// ``` QIcon* icon ```
void q_application_set_window_icon(void* icon) {
    QGuiApplication_SetWindowIcon((QIcon*)icon);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
///
///
QIcon* q_application_window_icon() {
    return QGuiApplication_WindowIcon();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
///
///
const char* q_application_platform_name() {
    libqt_string _str = QGuiApplication_PlatformName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
///
///
QWindow* q_application_modal_window() {
    return QGuiApplication_ModalWindow();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
///
///
QWindow* q_application_focus_window() {
    return QGuiApplication_FocusWindow();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
///
///
QObject* q_application_focus_object() {
    return QGuiApplication_FocusObject();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
///
///
QScreen* q_application_primary_screen() {
    return QGuiApplication_PrimaryScreen();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
///
///
libqt_list /* of QScreen* */ q_application_screens() {
    libqt_list _arr = QGuiApplication_Screens();
    return _arr;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
///
/// ``` QPoint* point ```
QScreen* q_application_screen_at(void* point) {
    return QGuiApplication_ScreenAt((QPoint*)point);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
///
/// ``` QApplication* self ```
double q_application_device_pixel_ratio(void* self) {
    return QGuiApplication_DevicePixelRatio((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
///
///
QCursor* q_application_override_cursor() {
    return QGuiApplication_OverrideCursor();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
///
/// ``` QCursor* overrideCursor ```
void q_application_set_override_cursor(void* overrideCursor) {
    QGuiApplication_SetOverrideCursor((QCursor*)overrideCursor);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
///
/// ``` QCursor* param1 ```
void q_application_change_override_cursor(void* param1) {
    QGuiApplication_ChangeOverrideCursor((QCursor*)param1);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
///
///
void q_application_restore_override_cursor() {
    QGuiApplication_RestoreOverrideCursor();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
///
///
QClipboard* q_application_clipboard() {
    return QGuiApplication_Clipboard();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
///
///
int64_t q_application_keyboard_modifiers() {
    return QGuiApplication_KeyboardModifiers();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
///
///
int64_t q_application_query_keyboard_modifiers() {
    return QGuiApplication_QueryKeyboardModifiers();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
///
///
int64_t q_application_mouse_buttons() {
    return QGuiApplication_MouseButtons();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
///
/// ``` enum Qt__LayoutDirection direction ```
void q_application_set_layout_direction(int64_t direction) {
    QGuiApplication_SetLayoutDirection(direction);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
///
///
int64_t q_application_layout_direction() {
    return QGuiApplication_LayoutDirection();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
///
///
bool q_application_is_right_to_left() {
    return QGuiApplication_IsRightToLeft();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
///
///
bool q_application_is_left_to_right() {
    return QGuiApplication_IsLeftToRight();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
///
///
QStyleHints* q_application_style_hints() {
    return QGuiApplication_StyleHints();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
///
/// ``` bool on ```
void q_application_set_desktop_settings_aware(bool on) {
    QGuiApplication_SetDesktopSettingsAware(on);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
///
///
bool q_application_desktop_settings_aware() {
    return QGuiApplication_DesktopSettingsAware();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
///
///
QInputMethod* q_application_input_method() {
    return QGuiApplication_InputMethod();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
///
/// ``` bool quit ```
void q_application_set_quit_on_last_window_closed(bool quit) {
    QGuiApplication_SetQuitOnLastWindowClosed(quit);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
///
///
bool q_application_quit_on_last_window_closed() {
    return QGuiApplication_QuitOnLastWindowClosed();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
///
///
int64_t q_application_application_state() {
    return QGuiApplication_ApplicationState();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
///
/// ``` enum Qt__HighDpiScaleFactorRoundingPolicy policy ```
void q_application_set_high_dpi_scale_factor_rounding_policy(int64_t policy) {
    QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
///
///
int64_t q_application_high_dpi_scale_factor_rounding_policy() {
    return QGuiApplication_HighDpiScaleFactorRoundingPolicy();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
///
/// ``` QApplication* self ```
bool q_application_is_session_restored(void* self) {
    return QGuiApplication_IsSessionRestored((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
///
/// ``` QApplication* self ```
const char* q_application_session_id(void* self) {
    libqt_string _str = QGuiApplication_SessionId((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
///
/// ``` QApplication* self ```
const char* q_application_session_key(void* self) {
    libqt_string _str = QGuiApplication_SessionKey((QGuiApplication*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
///
/// ``` QApplication* self ```
bool q_application_is_saving_session(void* self) {
    return QGuiApplication_IsSavingSession((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
///
///
void q_application_sync() {
    QGuiApplication_Sync();
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
///
/// ``` QApplication* self ```
void q_application_font_database_changed(void* self) {
    QGuiApplication_FontDatabaseChanged((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_font_database_changed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_FontDatabaseChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_screen_added(void* self, void* screen) {
    QGuiApplication_ScreenAdded((QGuiApplication*)self, (QScreen*)screen);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_screen_added(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_ScreenAdded((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_screen_removed(void* self, void* screen) {
    QGuiApplication_ScreenRemoved((QGuiApplication*)self, (QScreen*)screen);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_screen_removed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_ScreenRemoved((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
///
/// ``` QApplication* self, QScreen* screen ```
void q_application_primary_screen_changed(void* self, void* screen) {
    QGuiApplication_PrimaryScreenChanged((QGuiApplication*)self, (QScreen*)screen);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QScreen*) ```
void q_application_on_primary_screen_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_PrimaryScreenChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
///
/// ``` QApplication* self ```
void q_application_last_window_closed(void* self) {
    QGuiApplication_LastWindowClosed((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_last_window_closed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_LastWindowClosed((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
///
/// ``` QApplication* self, QObject* focusObject ```
void q_application_focus_object_changed(void* self, void* focusObject) {
    QGuiApplication_FocusObjectChanged((QGuiApplication*)self, (QObject*)focusObject);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QObject*) ```
void q_application_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FocusObjectChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
///
/// ``` QApplication* self, QWindow* focusWindow ```
void q_application_focus_window_changed(void* self, void* focusWindow) {
    QGuiApplication_FocusWindowChanged((QGuiApplication*)self, (QWindow*)focusWindow);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QWindow*) ```
void q_application_on_focus_window_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FocusWindowChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
///
/// ``` QApplication* self, enum Qt__ApplicationState state ```
void q_application_application_state_changed(void* self, int64_t state) {
    QGuiApplication_ApplicationStateChanged((QGuiApplication*)self, state);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, enum Qt__ApplicationState) ```
void q_application_on_application_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QGuiApplication_Connect_ApplicationStateChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
///
/// ``` QApplication* self, enum Qt__LayoutDirection direction ```
void q_application_layout_direction_changed(void* self, int64_t direction) {
    QGuiApplication_LayoutDirectionChanged((QGuiApplication*)self, direction);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, enum Qt__LayoutDirection) ```
void q_application_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QGuiApplication_Connect_LayoutDirectionChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
///
/// ``` QApplication* self, QSessionManager* sessionManager ```
void q_application_commit_data_request(void* self, void* sessionManager) {
    QGuiApplication_CommitDataRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_application_on_commit_data_request(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_CommitDataRequest((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
///
/// ``` QApplication* self, QSessionManager* sessionManager ```
void q_application_save_state_request(void* self, void* sessionManager) {
    QGuiApplication_SaveStateRequest((QGuiApplication*)self, (QSessionManager*)sessionManager);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QSessionManager*) ```
void q_application_on_save_state_request(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_SaveStateRequest((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
///
/// ``` QApplication* self ```
void q_application_application_display_name_changed(void* self) {
    QGuiApplication_ApplicationDisplayNameChanged((QGuiApplication*)self);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*) ```
void q_application_on_application_display_name_changed(void* self, void (*slot)(void*)) {
    QGuiApplication_Connect_ApplicationDisplayNameChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
///
/// ``` QApplication* self, QPalette* pal ```
void q_application_palette_changed(void* self, void* pal) {
    QGuiApplication_PaletteChanged((QGuiApplication*)self, (QPalette*)pal);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QPalette*) ```
void q_application_on_palette_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_PaletteChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QGuiApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
///
/// ``` QApplication* self, QFont* font ```
void q_application_font_changed(void* self, void* font) {
    QGuiApplication_FontChanged((QGuiApplication*)self, (QFont*)font);
}

/// Inherited from QGuiApplication
///
/// ``` QApplication* self, void (*slot)(QGuiApplication*, QFont*) ```
void q_application_on_font_changed(void* self, void (*slot)(void*, void*)) {
    QGuiApplication_Connect_FontChanged((QGuiApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_application_arguments() {
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
void q_application_set_attribute(int64_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_application_test_attribute(int64_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_application_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_application_organization_domain() {
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
void q_application_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_application_organization_name() {
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
void q_application_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_application_application_name() {
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
void q_application_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_application_application_version() {
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
void q_application_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_application_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_application_instance() {
    return QCoreApplication_Instance();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_application_process_events() {
    QCoreApplication_ProcessEvents();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_application_process_events2(int64_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_application_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_application_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_application_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_application_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_application_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_application_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_application_starting_up() {
    return QCoreApplication_StartingUp();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_application_closing_down() {
    return QCoreApplication_ClosingDown();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_application_application_dir_path() {
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
const char* q_application_application_file_path() {
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
long long q_application_application_pid() {
    return QCoreApplication_ApplicationPid();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_application_set_library_paths(const char* libraryPaths[]) {
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
const char** q_application_library_paths() {
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
void q_application_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_application_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_application_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_application_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_application_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_application_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_application_on_install_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_application_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_application_on_remove_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_application_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_application_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_application_quit() {
    QCoreApplication_Quit();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_application_exit() {
    QCoreApplication_Exit();
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QApplication* self ```
void q_application_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_organization_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QApplication* self ```
void q_application_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_organization_domain_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QApplication* self ```
void q_application_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_application_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QApplication* self ```
void q_application_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

/// Inherited from QCoreApplication
///
/// ``` QApplication* self, void (*slot)(QCoreApplication*) ```
void q_application_on_application_version_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_application_set_attribute2(int64_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_application_process_events1(int64_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_application_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_application_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_application_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_application_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

/// Inherited from QCoreApplication
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_application_translate3(const char* context, const char* key, const char* disambiguation) {
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
const char* q_application_translate4(const char* context, const char* key, const char* disambiguation, int n) {
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
void q_application_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QApplication* self ```
const char* q_application_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QApplication* self, const char* name ```
void q_application_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QApplication* self ```
bool q_application_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QApplication* self ```
bool q_application_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QApplication* self ```
bool q_application_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QApplication* self ```
bool q_application_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QApplication* self, bool b ```
bool q_application_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QApplication* self ```
QThread* q_application_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QApplication* self, QThread* thread ```
void q_application_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QApplication* self, int interval ```
int32_t q_application_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QApplication* self, int id ```
void q_application_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QApplication* self ```
libqt_list /* of QObject* */ q_application_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QApplication* self, QObject* parent ```
void q_application_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QApplication* self, QObject* filterObj ```
void q_application_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QApplication* self, QObject* obj ```
void q_application_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_application_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_application_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_application_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_application_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QApplication* self ```
void q_application_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QApplication* self ```
void q_application_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QApplication* self, const char* name, QVariant* value ```
bool q_application_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QApplication* self, const char* name ```
QVariant* q_application_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QApplication* self ```
const char** q_application_dynamic_property_names(void* self) {
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
/// ``` QApplication* self ```
QBindingStorage* q_application_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QApplication* self ```
QBindingStorage* q_application_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self ```
void q_application_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QApplication* self, void (*slot)(QObject*) ```
void q_application_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QApplication* self ```
QObject* q_application_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QApplication* self, const char* classname ```
bool q_application_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QApplication* self ```
void q_application_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_application_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_application_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_application_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QApplication* self, QObject* param1 ```
void q_application_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QApplication* self, void (*slot)(QObject*, QObject*) ```
void q_application_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QObject* watched, QEvent* event ```
bool q_application_event_filter(void* self, void* watched, void* event) {
    return QApplication_EventFilter((QApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QObject* watched, QEvent* event ```
bool q_application_qbase_event_filter(void* self, void* watched, void* event) {
    return QApplication_QBaseEventFilter((QApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QObject*, QEvent*) ```
void q_application_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QApplication_OnEventFilter((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QTimerEvent* event ```
void q_application_timer_event(void* self, void* event) {
    QApplication_TimerEvent((QApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QTimerEvent* event ```
void q_application_qbase_timer_event(void* self, void* event) {
    QApplication_QBaseTimerEvent((QApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QTimerEvent*) ```
void q_application_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QApplication_OnTimerEvent((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QChildEvent* event ```
void q_application_child_event(void* self, void* event) {
    QApplication_ChildEvent((QApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QChildEvent* event ```
void q_application_qbase_child_event(void* self, void* event) {
    QApplication_QBaseChildEvent((QApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QChildEvent*) ```
void q_application_on_child_event(void* self, void (*slot)(void*, void*)) {
    QApplication_OnChildEvent((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QEvent* event ```
void q_application_custom_event(void* self, void* event) {
    QApplication_CustomEvent((QApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QEvent* event ```
void q_application_qbase_custom_event(void* self, void* event) {
    QApplication_QBaseCustomEvent((QApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QEvent*) ```
void q_application_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QApplication_OnCustomEvent((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_connect_notify(void* self, void* signal) {
    QApplication_ConnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_qbase_connect_notify(void* self, void* signal) {
    QApplication_QBaseConnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QApplication_OnConnectNotify((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_disconnect_notify(void* self, void* signal) {
    QApplication_DisconnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
void q_application_qbase_disconnect_notify(void* self, void* signal) {
    QApplication_QBaseDisconnectNotify((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, void (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QApplication_OnDisconnectNotify((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self ```
QObject* q_application_sender(void* self) {
    return QApplication_Sender((QApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self ```
QObject* q_application_qbase_sender(void* self) {
    return QApplication_QBaseSender((QApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, QObject* (*slot)() ```
void q_application_on_sender(void* self, QObject* (*slot)()) {
    QApplication_OnSender((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self ```
int32_t q_application_sender_signal_index(void* self) {
    return QApplication_SenderSignalIndex((QApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self ```
int32_t q_application_qbase_sender_signal_index(void* self) {
    return QApplication_QBaseSenderSignalIndex((QApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, int32_t (*slot)() ```
void q_application_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QApplication_OnSenderSignalIndex((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, const char* signal ```
int32_t q_application_receivers(void* self, const char* signal) {
    return QApplication_Receivers((QApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, const char* signal ```
int32_t q_application_qbase_receivers(void* self, const char* signal) {
    return QApplication_QBaseReceivers((QApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, int32_t (*slot)(QApplication*, const char*) ```
void q_application_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QApplication_OnReceivers((QApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
bool q_application_is_signal_connected(void* self, void* signal) {
    return QApplication_IsSignalConnected((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplication* self, QMetaMethod* signal ```
bool q_application_qbase_is_signal_connected(void* self, void* signal) {
    return QApplication_QBaseIsSignalConnected((QApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplication* self, bool (*slot)(QApplication*, QMetaMethod*) ```
void q_application_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QApplication_OnIsSignalConnected((QApplication*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QApplication* self ```
void q_application_delete(void* self) {
    QApplication_Delete((QApplication*)(self));
}