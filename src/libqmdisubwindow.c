#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmdiarea.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqmdisubwindow.hpp"
#include "libqmdisubwindow.h"

/// https://doc.qt.io/qt-6/qmdisubwindow.html

/// q_mdisubwindow_new constructs a new QMdiSubWindow object.
///
/// ``` QWidget* parent ```
QMdiSubWindow* q_mdisubwindow_new(void* parent) {
    return QMdiSubWindow_new((QWidget*)parent);
}

/// q_mdisubwindow_new2 constructs a new QMdiSubWindow object.
///
///
QMdiSubWindow* q_mdisubwindow_new2() {
    return QMdiSubWindow_new2();
}

/// q_mdisubwindow_new3 constructs a new QMdiSubWindow object.
///
/// ``` QWidget* parent, int flags ```
QMdiSubWindow* q_mdisubwindow_new3(void* parent, int64_t flags) {
    return QMdiSubWindow_new3((QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMdiSubWindow* self ```
QMetaObject* q_mdisubwindow_meta_object(void* self) {
    return QMdiSubWindow_MetaObject((QMdiSubWindow*)self);
}

/// ``` QMdiSubWindow* self, const char* param1 ```
void* q_mdisubwindow_metacast(void* self, const char* param1) {
    return QMdiSubWindow_Metacast((QMdiSubWindow*)self, param1);
}

/// ``` QMdiSubWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdisubwindow_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMdiSubWindow_Metacall((QMdiSubWindow*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, enum QMetaObject__Call, int, void*) ```
void q_mdisubwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMdiSubWindow_OnMetacall((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdisubwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMdiSubWindow_QBaseMetacall((QMdiSubWindow*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mdisubwindow_tr(const char* s) {
    libqt_string _str = QMdiSubWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#sizeHint)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size_hint(void* self) {
    return QMdiSubWindow_SizeHint((QMdiSubWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, QSize* (*slot)() ```
void q_mdisubwindow_on_size_hint(void* self, QSize* (*slot)()) {
    QMdiSubWindow_OnSizeHint((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_qbase_size_hint(void* self) {
    return QMdiSubWindow_QBaseSizeHint((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#minimumSizeHint)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_minimum_size_hint(void* self) {
    return QMdiSubWindow_MinimumSizeHint((QMdiSubWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, QSize* (*slot)() ```
void q_mdisubwindow_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMdiSubWindow_OnMinimumSizeHint((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_qbase_minimum_size_hint(void* self) {
    return QMdiSubWindow_QBaseMinimumSizeHint((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setWidget)
///
/// ``` QMdiSubWindow* self, QWidget* widget ```
void q_mdisubwindow_set_widget(void* self, void* widget) {
    QMdiSubWindow_SetWidget((QMdiSubWindow*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#widget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_widget(void* self) {
    return QMdiSubWindow_Widget((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedButtonsWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_maximized_buttons_widget(void* self) {
    return QMdiSubWindow_MaximizedButtonsWidget((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedSystemMenuIconWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_maximized_system_menu_icon_widget(void* self) {
    return QMdiSubWindow_MaximizedSystemMenuIconWidget((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#isShaded)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_shaded(void* self) {
    return QMdiSubWindow_IsShaded((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption option ```
void q_mdisubwindow_set_option(void* self, int64_t option) {
    QMdiSubWindow_SetOption((QMdiSubWindow*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#testOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption param1 ```
bool q_mdisubwindow_test_option(void* self, int64_t param1) {
    return QMdiSubWindow_TestOption((QMdiSubWindow*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardSingleStep)
///
/// ``` QMdiSubWindow* self, int step ```
void q_mdisubwindow_set_keyboard_single_step(void* self, int step) {
    QMdiSubWindow_SetKeyboardSingleStep((QMdiSubWindow*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardSingleStep)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_keyboard_single_step(void* self) {
    return QMdiSubWindow_KeyboardSingleStep((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardPageStep)
///
/// ``` QMdiSubWindow* self, int step ```
void q_mdisubwindow_set_keyboard_page_step(void* self, int step) {
    QMdiSubWindow_SetKeyboardPageStep((QMdiSubWindow*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardPageStep)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_keyboard_page_step(void* self) {
    return QMdiSubWindow_KeyboardPageStep((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setSystemMenu)
///
/// ``` QMdiSubWindow* self, QMenu* systemMenu ```
void q_mdisubwindow_set_system_menu(void* self, void* systemMenu) {
    QMdiSubWindow_SetSystemMenu((QMdiSubWindow*)self, (QMenu*)systemMenu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#systemMenu)
///
/// ``` QMdiSubWindow* self ```
QMenu* q_mdisubwindow_system_menu(void* self) {
    return QMdiSubWindow_SystemMenu((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mdiArea)
///
/// ``` QMdiSubWindow* self ```
QMdiArea* q_mdisubwindow_mdi_area(void* self) {
    return QMdiSubWindow_MdiArea((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#windowStateChanged)
///
/// ``` QMdiSubWindow* self, int oldState, int newState ```
void q_mdisubwindow_window_state_changed(void* self, int64_t oldState, int64_t newState) {
    QMdiSubWindow_WindowStateChanged((QMdiSubWindow*)self, oldState, newState);
}

/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, int, int) ```
void q_mdisubwindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QMdiSubWindow_Connect_WindowStateChanged((QMdiSubWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#aboutToActivate)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_about_to_activate(void* self) {
    QMdiSubWindow_AboutToActivate((QMdiSubWindow*)self);
}

/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*) ```
void q_mdisubwindow_on_about_to_activate(void* self, void (*slot)(void*)) {
    QMdiSubWindow_Connect_AboutToActivate((QMdiSubWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showSystemMenu)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_system_menu(void* self) {
    QMdiSubWindow_ShowSystemMenu((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showShaded)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_shaded(void* self) {
    QMdiSubWindow_ShowShaded((QMdiSubWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#eventFilter)
///
/// ``` QMdiSubWindow* self, QObject* object, QEvent* event ```
bool q_mdisubwindow_event_filter(void* self, void* object, void* event) {
    return QMdiSubWindow_EventFilter((QMdiSubWindow*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QObject*, QEvent*) ```
void q_mdisubwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMdiSubWindow_OnEventFilter((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QObject* object, QEvent* event ```
bool q_mdisubwindow_qbase_event_filter(void* self, void* object, void* event) {
    return QMdiSubWindow_QBaseEventFilter((QMdiSubWindow*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#event)
///
/// ``` QMdiSubWindow* self, QEvent* event ```
bool q_mdisubwindow_event(void* self, void* event) {
    return QMdiSubWindow_Event((QMdiSubWindow*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_event(void* self, bool (*slot)(void*, void*)) {
    QMdiSubWindow_OnEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* event ```
bool q_mdisubwindow_qbase_event(void* self, void* event) {
    return QMdiSubWindow_QBaseEvent((QMdiSubWindow*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showEvent)
///
/// ``` QMdiSubWindow* self, QShowEvent* showEvent ```
void q_mdisubwindow_show_event(void* self, void* showEvent) {
    QMdiSubWindow_ShowEvent((QMdiSubWindow*)self, (QShowEvent*)showEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QShowEvent*) ```
void q_mdisubwindow_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnShowEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QShowEvent* showEvent ```
void q_mdisubwindow_qbase_show_event(void* self, void* showEvent) {
    QMdiSubWindow_QBaseShowEvent((QMdiSubWindow*)self, (QShowEvent*)showEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#hideEvent)
///
/// ``` QMdiSubWindow* self, QHideEvent* hideEvent ```
void q_mdisubwindow_hide_event(void* self, void* hideEvent) {
    QMdiSubWindow_HideEvent((QMdiSubWindow*)self, (QHideEvent*)hideEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QHideEvent*) ```
void q_mdisubwindow_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnHideEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QHideEvent* hideEvent ```
void q_mdisubwindow_qbase_hide_event(void* self, void* hideEvent) {
    QMdiSubWindow_QBaseHideEvent((QMdiSubWindow*)self, (QHideEvent*)hideEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#changeEvent)
///
/// ``` QMdiSubWindow* self, QEvent* changeEvent ```
void q_mdisubwindow_change_event(void* self, void* changeEvent) {
    QMdiSubWindow_ChangeEvent((QMdiSubWindow*)self, (QEvent*)changeEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnChangeEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* changeEvent ```
void q_mdisubwindow_qbase_change_event(void* self, void* changeEvent) {
    QMdiSubWindow_QBaseChangeEvent((QMdiSubWindow*)self, (QEvent*)changeEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#closeEvent)
///
/// ``` QMdiSubWindow* self, QCloseEvent* closeEvent ```
void q_mdisubwindow_close_event(void* self, void* closeEvent) {
    QMdiSubWindow_CloseEvent((QMdiSubWindow*)self, (QCloseEvent*)closeEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QCloseEvent*) ```
void q_mdisubwindow_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnCloseEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QCloseEvent* closeEvent ```
void q_mdisubwindow_qbase_close_event(void* self, void* closeEvent) {
    QMdiSubWindow_QBaseCloseEvent((QMdiSubWindow*)self, (QCloseEvent*)closeEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#leaveEvent)
///
/// ``` QMdiSubWindow* self, QEvent* leaveEvent ```
void q_mdisubwindow_leave_event(void* self, void* leaveEvent) {
    QMdiSubWindow_LeaveEvent((QMdiSubWindow*)self, (QEvent*)leaveEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnLeaveEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* leaveEvent ```
void q_mdisubwindow_qbase_leave_event(void* self, void* leaveEvent) {
    QMdiSubWindow_QBaseLeaveEvent((QMdiSubWindow*)self, (QEvent*)leaveEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#resizeEvent)
///
/// ``` QMdiSubWindow* self, QResizeEvent* resizeEvent ```
void q_mdisubwindow_resize_event(void* self, void* resizeEvent) {
    QMdiSubWindow_ResizeEvent((QMdiSubWindow*)self, (QResizeEvent*)resizeEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QResizeEvent*) ```
void q_mdisubwindow_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnResizeEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QResizeEvent* resizeEvent ```
void q_mdisubwindow_qbase_resize_event(void* self, void* resizeEvent) {
    QMdiSubWindow_QBaseResizeEvent((QMdiSubWindow*)self, (QResizeEvent*)resizeEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#timerEvent)
///
/// ``` QMdiSubWindow* self, QTimerEvent* timerEvent ```
void q_mdisubwindow_timer_event(void* self, void* timerEvent) {
    QMdiSubWindow_TimerEvent((QMdiSubWindow*)self, (QTimerEvent*)timerEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QTimerEvent*) ```
void q_mdisubwindow_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnTimerEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QTimerEvent* timerEvent ```
void q_mdisubwindow_qbase_timer_event(void* self, void* timerEvent) {
    QMdiSubWindow_QBaseTimerEvent((QMdiSubWindow*)self, (QTimerEvent*)timerEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#moveEvent)
///
/// ``` QMdiSubWindow* self, QMoveEvent* moveEvent ```
void q_mdisubwindow_move_event(void* self, void* moveEvent) {
    QMdiSubWindow_MoveEvent((QMdiSubWindow*)self, (QMoveEvent*)moveEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMoveEvent*) ```
void q_mdisubwindow_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnMoveEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMoveEvent* moveEvent ```
void q_mdisubwindow_qbase_move_event(void* self, void* moveEvent) {
    QMdiSubWindow_QBaseMoveEvent((QMdiSubWindow*)self, (QMoveEvent*)moveEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#paintEvent)
///
/// ``` QMdiSubWindow* self, QPaintEvent* paintEvent ```
void q_mdisubwindow_paint_event(void* self, void* paintEvent) {
    QMdiSubWindow_PaintEvent((QMdiSubWindow*)self, (QPaintEvent*)paintEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QPaintEvent*) ```
void q_mdisubwindow_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnPaintEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QPaintEvent* paintEvent ```
void q_mdisubwindow_qbase_paint_event(void* self, void* paintEvent) {
    QMdiSubWindow_QBasePaintEvent((QMdiSubWindow*)self, (QPaintEvent*)paintEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mousePressEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_press_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MousePressEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnMousePressEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_press_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMousePressEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseDoubleClickEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_double_click_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseDoubleClickEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnMouseDoubleClickEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_double_click_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseDoubleClickEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseReleaseEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_release_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseReleaseEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnMouseReleaseEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_release_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseReleaseEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseMoveEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_move_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseMoveEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnMouseMoveEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_move_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseMoveEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyPressEvent)
///
/// ``` QMdiSubWindow* self, QKeyEvent* keyEvent ```
void q_mdisubwindow_key_press_event(void* self, void* keyEvent) {
    QMdiSubWindow_KeyPressEvent((QMdiSubWindow*)self, (QKeyEvent*)keyEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QKeyEvent*) ```
void q_mdisubwindow_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnKeyPressEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QKeyEvent* keyEvent ```
void q_mdisubwindow_qbase_key_press_event(void* self, void* keyEvent) {
    QMdiSubWindow_QBaseKeyPressEvent((QMdiSubWindow*)self, (QKeyEvent*)keyEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#contextMenuEvent)
///
/// ``` QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent ```
void q_mdisubwindow_context_menu_event(void* self, void* contextMenuEvent) {
    QMdiSubWindow_ContextMenuEvent((QMdiSubWindow*)self, (QContextMenuEvent*)contextMenuEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QContextMenuEvent*) ```
void q_mdisubwindow_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnContextMenuEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent ```
void q_mdisubwindow_qbase_context_menu_event(void* self, void* contextMenuEvent) {
    QMdiSubWindow_QBaseContextMenuEvent((QMdiSubWindow*)self, (QContextMenuEvent*)contextMenuEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusInEvent)
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusInEvent ```
void q_mdisubwindow_focus_in_event(void* self, void* focusInEvent) {
    QMdiSubWindow_FocusInEvent((QMdiSubWindow*)self, (QFocusEvent*)focusInEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QFocusEvent*) ```
void q_mdisubwindow_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnFocusInEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusInEvent ```
void q_mdisubwindow_qbase_focus_in_event(void* self, void* focusInEvent) {
    QMdiSubWindow_QBaseFocusInEvent((QMdiSubWindow*)self, (QFocusEvent*)focusInEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusOutEvent)
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusOutEvent ```
void q_mdisubwindow_focus_out_event(void* self, void* focusOutEvent) {
    QMdiSubWindow_FocusOutEvent((QMdiSubWindow*)self, (QFocusEvent*)focusOutEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QFocusEvent*) ```
void q_mdisubwindow_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnFocusOutEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusOutEvent ```
void q_mdisubwindow_qbase_focus_out_event(void* self, void* focusOutEvent) {
    QMdiSubWindow_QBaseFocusOutEvent((QMdiSubWindow*)self, (QFocusEvent*)focusOutEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#childEvent)
///
/// ``` QMdiSubWindow* self, QChildEvent* childEvent ```
void q_mdisubwindow_child_event(void* self, void* childEvent) {
    QMdiSubWindow_ChildEvent((QMdiSubWindow*)self, (QChildEvent*)childEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QChildEvent*) ```
void q_mdisubwindow_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnChildEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QChildEvent* childEvent ```
void q_mdisubwindow_qbase_child_event(void* self, void* childEvent) {
    QMdiSubWindow_QBaseChildEvent((QMdiSubWindow*)self, (QChildEvent*)childEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mdisubwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QMdiSubWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mdisubwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMdiSubWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption option, bool on ```
void q_mdisubwindow_set_option2(void* self, int64_t option, bool on) {
    QMdiSubWindow_SetOption2((QMdiSubWindow*)self, option, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMdiSubWindow* self ```
QStyle* q_mdisubwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMdiSubWindow* self, QStyle* style ```
void q_mdisubwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowModality windowModality ```
void q_mdisubwindow_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
bool q_mdisubwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMdiSubWindow* self, bool enabled ```
void q_mdisubwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMdiSubWindow* self, bool disabled ```
void q_mdisubwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMdiSubWindow* self, bool windowModified ```
void q_mdisubwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMdiSubWindow* self ```
QPoint* q_mdisubwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiSubWindow* self, QSize* minimumSize ```
void q_mdisubwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiSubWindow* self, int minw, int minh ```
void q_mdisubwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiSubWindow* self, QSize* maximumSize ```
void q_mdisubwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiSubWindow* self, int maxw, int maxh ```
void q_mdisubwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMdiSubWindow* self, int minw ```
void q_mdisubwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMdiSubWindow* self, int minh ```
void q_mdisubwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMdiSubWindow* self, int maxw ```
void q_mdisubwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMdiSubWindow* self, int maxh ```
void q_mdisubwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiSubWindow* self, QSize* sizeIncrement ```
void q_mdisubwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiSubWindow* self, QSize* baseSize ```
void q_mdisubwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiSubWindow* self, int basew, int baseh ```
void q_mdisubwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiSubWindow* self, QSize* fixedSize ```
void q_mdisubwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMdiSubWindow* self, int w ```
void q_mdisubwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMdiSubWindow* self, int h ```
void q_mdisubwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdisubwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdisubwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdisubwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdisubwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMdiSubWindow* self ```
QPalette* q_mdisubwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMdiSubWindow* self, QPalette* palette ```
void q_mdisubwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMdiSubWindow* self, enum QPalette__ColorRole backgroundRole ```
void q_mdisubwindow_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMdiSubWindow* self, enum QPalette__ColorRole foregroundRole ```
void q_mdisubwindow_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMdiSubWindow* self ```
QFont* q_mdisubwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMdiSubWindow* self, QFont* font ```
void q_mdisubwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMdiSubWindow* self ```
QFontMetrics* q_mdisubwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMdiSubWindow* self ```
QFontInfo* q_mdisubwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMdiSubWindow* self ```
QCursor* q_mdisubwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMdiSubWindow* self, QCursor* cursor ```
void q_mdisubwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiSubWindow* self, QBitmap* mask ```
void q_mdisubwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiSubWindow* self, QRegion* mask ```
void q_mdisubwindow_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target ```
void q_mdisubwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiSubWindow* self ```
QPixmap* q_mdisubwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMdiSubWindow* self ```
QGraphicsEffect* q_mdisubwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMdiSubWindow* self, QGraphicsEffect* effect ```
void q_mdisubwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal ```
void q_mdisubwindow_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal ```
void q_mdisubwindow_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMdiSubWindow* self, const char* windowTitle ```
void q_mdisubwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMdiSubWindow* self, const char* styleSheet ```
void q_mdisubwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMdiSubWindow* self, QIcon* icon ```
void q_mdisubwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMdiSubWindow* self ```
QIcon* q_mdisubwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMdiSubWindow* self, const char* windowIconText ```
void q_mdisubwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMdiSubWindow* self, const char* windowRole ```
void q_mdisubwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMdiSubWindow* self, const char* filePath ```
void q_mdisubwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMdiSubWindow* self, double level ```
void q_mdisubwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMdiSubWindow* self, const char* toolTip ```
void q_mdisubwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMdiSubWindow* self, int msec ```
void q_mdisubwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMdiSubWindow* self, const char* statusTip ```
void q_mdisubwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMdiSubWindow* self, const char* whatsThis ```
void q_mdisubwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMdiSubWindow* self, const char* name ```
void q_mdisubwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMdiSubWindow* self, const char* description ```
void q_mdisubwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMdiSubWindow* self, enum Qt__LayoutDirection direction ```
void q_mdisubwindow_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMdiSubWindow* self, QLocale* locale ```
void q_mdisubwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMdiSubWindow* self ```
QLocale* q_mdisubwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiSubWindow* self, enum Qt__FocusReason reason ```
void q_mdisubwindow_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMdiSubWindow* self, enum Qt__FocusPolicy policy ```
void q_mdisubwindow_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_mdisubwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMdiSubWindow* self, QWidget* focusProxy ```
void q_mdisubwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMdiSubWindow* self, enum Qt__ContextMenuPolicy policy ```
void q_mdisubwindow_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiSubWindow* self, QCursor* param1 ```
void q_mdisubwindow_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiSubWindow* self, QKeySequence* key ```
int32_t q_mdisubwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_mdisubwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_mdisubwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMdiSubWindow* self ```
QGraphicsProxyWidget* q_mdisubwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, QRect* param1 ```
void q_mdisubwindow_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, QRegion* param1 ```
void q_mdisubwindow_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, QRect* param1 ```
void q_mdisubwindow_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, QRegion* param1 ```
void q_mdisubwindow_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMdiSubWindow* self, bool hidden ```
void q_mdisubwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
void q_mdisubwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiSubWindow* self, int x, int y ```
void q_mdisubwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
void q_mdisubwindow_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiSubWindow* self, QSize* param1 ```
void q_mdisubwindow_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiSubWindow* self, QRect* geometry ```
void q_mdisubwindow_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMdiSubWindow* self ```
char* q_mdisubwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMdiSubWindow* self, const char* geometry ```
bool q_mdisubwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
bool q_mdisubwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMdiSubWindow* self, int state ```
void q_mdisubwindow_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMdiSubWindow* self, int state ```
void q_mdisubwindow_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMdiSubWindow* self ```
QSizePolicy* q_mdisubwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiSubWindow* self, QSizePolicy* sizePolicy ```
void q_mdisubwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiSubWindow* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_mdisubwindow_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiSubWindow* self, int left, int top, int right, int bottom ```
void q_mdisubwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiSubWindow* self, QMargins* margins ```
void q_mdisubwindow_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMdiSubWindow* self ```
QMargins* q_mdisubwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMdiSubWindow* self ```
QLayout* q_mdisubwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMdiSubWindow* self, QLayout* layout ```
void q_mdisubwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiSubWindow* self, QWidget* parent ```
void q_mdisubwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiSubWindow* self, QWidget* parent, int f ```
void q_mdisubwindow_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiSubWindow* self, int dx, int dy ```
void q_mdisubwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiSubWindow* self, int dx, int dy, QRect* param3 ```
void q_mdisubwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMdiSubWindow* self, bool on ```
void q_mdisubwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QAction* action ```
void q_mdisubwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMdiSubWindow* self, QAction* actions[] ```
void q_mdisubwindow_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMdiSubWindow* self, QAction* before, QAction* actions[] ```
void q_mdisubwindow_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMdiSubWindow* self, QAction* before, QAction* action ```
void q_mdisubwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMdiSubWindow* self, QAction* action ```
void q_mdisubwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMdiSubWindow* self ```
libqt_list /* of QAction* */ q_mdisubwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, const char* text ```
QAction* q_mdisubwindow_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QIcon* icon, const char* text ```
QAction* q_mdisubwindow_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, const char* text, QKeySequence* shortcut ```
QAction* q_mdisubwindow_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_mdisubwindow_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMdiSubWindow* self, int typeVal ```
void q_mdisubwindow_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowType param1 ```
void q_mdisubwindow_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMdiSubWindow* self, int typeVal ```
void q_mdisubwindow_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_mdisubwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiSubWindow* self, int x, int y ```
QWidget* q_mdisubwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiSubWindow* self, QPoint* p ```
QWidget* q_mdisubwindow_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1 ```
void q_mdisubwindow_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1 ```
bool q_mdisubwindow_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMdiSubWindow* self, QWidget* child ```
bool q_mdisubwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMdiSubWindow* self, bool enabled ```
void q_mdisubwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMdiSubWindow* self ```
QBackingStore* q_mdisubwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMdiSubWindow* self ```
QWindow* q_mdisubwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMdiSubWindow* self ```
QScreen* q_mdisubwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMdiSubWindow* self, QScreen* screen ```
void q_mdisubwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_mdisubwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMdiSubWindow* self, const char* title ```
void q_mdisubwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mdisubwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMdiSubWindow* self, QIcon* icon ```
void q_mdisubwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, QIcon*) ```
void q_mdisubwindow_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMdiSubWindow* self, const char* iconText ```
void q_mdisubwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mdisubwindow_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMdiSubWindow* self, QPoint* pos ```
void q_mdisubwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, QPoint*) ```
void q_mdisubwindow_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMdiSubWindow* self, int hints ```
void q_mdisubwindow_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset ```
void q_mdisubwindow_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdisubwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdisubwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset ```
void q_mdisubwindow_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdisubwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdisubwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiSubWindow* self, QRect* rectangle ```
QPixmap* q_mdisubwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal, int flags ```
void q_mdisubwindow_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiSubWindow* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_mdisubwindow_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiSubWindow* self, int id, bool enable ```
void q_mdisubwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiSubWindow* self, int id, bool enable ```
void q_mdisubwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowType param1, bool on ```
void q_mdisubwindow_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1, bool on ```
void q_mdisubwindow_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_mdisubwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_mdisubwindow_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMdiSubWindow* self, const char* name ```
void q_mdisubwindow_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMdiSubWindow* self, bool b ```
bool q_mdisubwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMdiSubWindow* self ```
QThread* q_mdisubwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMdiSubWindow* self, QThread* thread ```
void q_mdisubwindow_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiSubWindow* self, int interval ```
int32_t q_mdisubwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMdiSubWindow* self ```
libqt_list /* of QObject* */ q_mdisubwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMdiSubWindow* self, QObject* filterObj ```
void q_mdisubwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMdiSubWindow* self, QObject* obj ```
void q_mdisubwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mdisubwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiSubWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mdisubwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mdisubwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mdisubwindow_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMdiSubWindow* self, const char* name, QVariant* value ```
bool q_mdisubwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMdiSubWindow* self, const char* name ```
QVariant* q_mdisubwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMdiSubWindow* self ```
const char** q_mdisubwindow_dynamic_property_names(void* self) {
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
/// ``` QMdiSubWindow* self ```
QBindingStorage* q_mdisubwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiSubWindow* self ```
QBindingStorage* q_mdisubwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMdiSubWindow* self, void (*slot)(QObject*) ```
void q_mdisubwindow_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMdiSubWindow* self, const char* classname ```
bool q_mdisubwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiSubWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mdisubwindow_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdisubwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiSubWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdisubwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiSubWindow* self, QObject* param1 ```
void q_mdisubwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMdiSubWindow* self, void (*slot)(QObject*, QObject*) ```
void q_mdisubwindow_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_mdisubwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_dev_type(void* self) {
    return QMdiSubWindow_DevType((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_qbase_dev_type(void* self) {
    return QMdiSubWindow_QBaseDevType((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)() ```
void q_mdisubwindow_on_dev_type(void* self, int32_t (*slot)()) {
    QMdiSubWindow_OnDevType((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, bool visible ```
void q_mdisubwindow_set_visible(void* self, bool visible) {
    QMdiSubWindow_SetVisible((QMdiSubWindow*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool visible ```
void q_mdisubwindow_qbase_set_visible(void* self, bool visible) {
    QMdiSubWindow_QBaseSetVisible((QMdiSubWindow*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, bool) ```
void q_mdisubwindow_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMdiSubWindow_OnSetVisible((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, int param1 ```
int32_t q_mdisubwindow_height_for_width(void* self, int param1) {
    return QMdiSubWindow_HeightForWidth((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int param1 ```
int32_t q_mdisubwindow_qbase_height_for_width(void* self, int param1) {
    return QMdiSubWindow_QBaseHeightForWidth((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, int) ```
void q_mdisubwindow_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMdiSubWindow_OnHeightForWidth((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_height_for_width(void* self) {
    return QMdiSubWindow_HasHeightForWidth((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_has_height_for_width(void* self) {
    return QMdiSubWindow_QBaseHasHeightForWidth((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_has_height_for_width(void* self, bool (*slot)()) {
    QMdiSubWindow_OnHasHeightForWidth((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPaintEngine* q_mdisubwindow_paint_engine(void* self) {
    return QMdiSubWindow_PaintEngine((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPaintEngine* q_mdisubwindow_qbase_paint_engine(void* self) {
    return QMdiSubWindow_QBasePaintEngine((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPaintEngine* (*slot)() ```
void q_mdisubwindow_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMdiSubWindow_OnPaintEngine((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QWheelEvent* event ```
void q_mdisubwindow_wheel_event(void* self, void* event) {
    QMdiSubWindow_WheelEvent((QMdiSubWindow*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QWheelEvent* event ```
void q_mdisubwindow_qbase_wheel_event(void* self, void* event) {
    QMdiSubWindow_QBaseWheelEvent((QMdiSubWindow*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QWheelEvent*) ```
void q_mdisubwindow_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnWheelEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QKeyEvent* event ```
void q_mdisubwindow_key_release_event(void* self, void* event) {
    QMdiSubWindow_KeyReleaseEvent((QMdiSubWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QKeyEvent* event ```
void q_mdisubwindow_qbase_key_release_event(void* self, void* event) {
    QMdiSubWindow_QBaseKeyReleaseEvent((QMdiSubWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QKeyEvent*) ```
void q_mdisubwindow_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnKeyReleaseEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QEnterEvent* event ```
void q_mdisubwindow_enter_event(void* self, void* event) {
    QMdiSubWindow_EnterEvent((QMdiSubWindow*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QEnterEvent* event ```
void q_mdisubwindow_qbase_enter_event(void* self, void* event) {
    QMdiSubWindow_QBaseEnterEvent((QMdiSubWindow*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEnterEvent*) ```
void q_mdisubwindow_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnEnterEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QTabletEvent* event ```
void q_mdisubwindow_tablet_event(void* self, void* event) {
    QMdiSubWindow_TabletEvent((QMdiSubWindow*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QTabletEvent* event ```
void q_mdisubwindow_qbase_tablet_event(void* self, void* event) {
    QMdiSubWindow_QBaseTabletEvent((QMdiSubWindow*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QTabletEvent*) ```
void q_mdisubwindow_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnTabletEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QActionEvent* event ```
void q_mdisubwindow_action_event(void* self, void* event) {
    QMdiSubWindow_ActionEvent((QMdiSubWindow*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QActionEvent* event ```
void q_mdisubwindow_qbase_action_event(void* self, void* event) {
    QMdiSubWindow_QBaseActionEvent((QMdiSubWindow*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QActionEvent*) ```
void q_mdisubwindow_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnActionEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragEnterEvent* event ```
void q_mdisubwindow_drag_enter_event(void* self, void* event) {
    QMdiSubWindow_DragEnterEvent((QMdiSubWindow*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragEnterEvent* event ```
void q_mdisubwindow_qbase_drag_enter_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragEnterEvent((QMdiSubWindow*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragEnterEvent*) ```
void q_mdisubwindow_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnDragEnterEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragMoveEvent* event ```
void q_mdisubwindow_drag_move_event(void* self, void* event) {
    QMdiSubWindow_DragMoveEvent((QMdiSubWindow*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragMoveEvent* event ```
void q_mdisubwindow_qbase_drag_move_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragMoveEvent((QMdiSubWindow*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragMoveEvent*) ```
void q_mdisubwindow_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnDragMoveEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragLeaveEvent* event ```
void q_mdisubwindow_drag_leave_event(void* self, void* event) {
    QMdiSubWindow_DragLeaveEvent((QMdiSubWindow*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragLeaveEvent* event ```
void q_mdisubwindow_qbase_drag_leave_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragLeaveEvent((QMdiSubWindow*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragLeaveEvent*) ```
void q_mdisubwindow_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnDragLeaveEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDropEvent* event ```
void q_mdisubwindow_drop_event(void* self, void* event) {
    QMdiSubWindow_DropEvent((QMdiSubWindow*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDropEvent* event ```
void q_mdisubwindow_qbase_drop_event(void* self, void* event) {
    QMdiSubWindow_QBaseDropEvent((QMdiSubWindow*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDropEvent*) ```
void q_mdisubwindow_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnDropEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdisubwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiSubWindow_NativeEvent((QMdiSubWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdisubwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiSubWindow_QBaseNativeEvent((QMdiSubWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, const char*, void*, intptr_t*) ```
void q_mdisubwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMdiSubWindow_OnNativeEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdisubwindow_metric(void* self, int64_t param1) {
    return QMdiSubWindow_Metric((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdisubwindow_qbase_metric(void* self, int64_t param1) {
    return QMdiSubWindow_QBaseMetric((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, enum QPaintDevice__PaintDeviceMetric) ```
void q_mdisubwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMdiSubWindow_OnMetric((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_init_painter(void* self, void* painter) {
    QMdiSubWindow_InitPainter((QMdiSubWindow*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_qbase_init_painter(void* self, void* painter) {
    QMdiSubWindow_QBaseInitPainter((QMdiSubWindow*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QPainter*) ```
void q_mdisubwindow_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnInitPainter((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QPoint* offset ```
QPaintDevice* q_mdisubwindow_redirected(void* self, void* offset) {
    return QMdiSubWindow_Redirected((QMdiSubWindow*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPoint* offset ```
QPaintDevice* q_mdisubwindow_qbase_redirected(void* self, void* offset) {
    return QMdiSubWindow_QBaseRedirected((QMdiSubWindow*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPaintDevice* (*slot)(QMdiSubWindow*, QPoint*) ```
void q_mdisubwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMdiSubWindow_OnRedirected((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPainter* q_mdisubwindow_shared_painter(void* self) {
    return QMdiSubWindow_SharedPainter((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPainter* q_mdisubwindow_qbase_shared_painter(void* self) {
    return QMdiSubWindow_QBaseSharedPainter((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* (*slot)() ```
void q_mdisubwindow_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMdiSubWindow_OnSharedPainter((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QInputMethodEvent* param1 ```
void q_mdisubwindow_input_method_event(void* self, void* param1) {
    QMdiSubWindow_InputMethodEvent((QMdiSubWindow*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QInputMethodEvent* param1 ```
void q_mdisubwindow_qbase_input_method_event(void* self, void* param1) {
    QMdiSubWindow_QBaseInputMethodEvent((QMdiSubWindow*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QInputMethodEvent*) ```
void q_mdisubwindow_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnInputMethodEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdisubwindow_input_method_query(void* self, int64_t param1) {
    return QMdiSubWindow_InputMethodQuery((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdisubwindow_qbase_input_method_query(void* self, int64_t param1) {
    return QMdiSubWindow_QBaseInputMethodQuery((QMdiSubWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QVariant* (*slot)(QMdiSubWindow*, enum Qt__InputMethodQuery) ```
void q_mdisubwindow_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMdiSubWindow_OnInputMethodQuery((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, bool next ```
bool q_mdisubwindow_focus_next_prev_child(void* self, bool next) {
    return QMdiSubWindow_FocusNextPrevChild((QMdiSubWindow*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool next ```
bool q_mdisubwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return QMdiSubWindow_QBaseFocusNextPrevChild((QMdiSubWindow*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, bool) ```
void q_mdisubwindow_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMdiSubWindow_OnFocusNextPrevChild((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QEvent* event ```
void q_mdisubwindow_custom_event(void* self, void* event) {
    QMdiSubWindow_CustomEvent((QMdiSubWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QEvent* event ```
void q_mdisubwindow_qbase_custom_event(void* self, void* event) {
    QMdiSubWindow_QBaseCustomEvent((QMdiSubWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnCustomEvent((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_connect_notify(void* self, void* signal) {
    QMdiSubWindow_ConnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_qbase_connect_notify(void* self, void* signal) {
    QMdiSubWindow_QBaseConnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnConnectNotify((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_disconnect_notify(void* self, void* signal) {
    QMdiSubWindow_DisconnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_qbase_disconnect_notify(void* self, void* signal) {
    QMdiSubWindow_QBaseDisconnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMdiSubWindow_OnDisconnectNotify((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update_micro_focus(void* self) {
    QMdiSubWindow_UpdateMicroFocus((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_update_micro_focus(void* self) {
    QMdiSubWindow_QBaseUpdateMicroFocus((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_update_micro_focus(void* self, void (*slot)()) {
    QMdiSubWindow_OnUpdateMicroFocus((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_create(void* self) {
    QMdiSubWindow_Create((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_create(void* self) {
    QMdiSubWindow_QBaseCreate((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_create(void* self, void (*slot)()) {
    QMdiSubWindow_OnCreate((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_destroy(void* self) {
    QMdiSubWindow_Destroy((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_destroy(void* self) {
    QMdiSubWindow_QBaseDestroy((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_destroy(void* self, void (*slot)()) {
    QMdiSubWindow_OnDestroy((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_focus_next_child(void* self) {
    return QMdiSubWindow_FocusNextChild((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_focus_next_child(void* self) {
    return QMdiSubWindow_QBaseFocusNextChild((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_focus_next_child(void* self, bool (*slot)()) {
    QMdiSubWindow_OnFocusNextChild((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_focus_previous_child(void* self) {
    return QMdiSubWindow_FocusPreviousChild((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_focus_previous_child(void* self) {
    return QMdiSubWindow_QBaseFocusPreviousChild((QMdiSubWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_focus_previous_child(void* self, bool (*slot)()) {
    QMdiSubWindow_OnFocusPreviousChild((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_sender(void* self) {
    return QMdiSubWindow_Sender((QMdiSubWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_qbase_sender(void* self) {
    return QMdiSubWindow_QBaseSender((QMdiSubWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QObject* (*slot)() ```
void q_mdisubwindow_on_sender(void* self, QObject* (*slot)()) {
    QMdiSubWindow_OnSender((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_sender_signal_index(void* self) {
    return QMdiSubWindow_SenderSignalIndex((QMdiSubWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_qbase_sender_signal_index(void* self) {
    return QMdiSubWindow_QBaseSenderSignalIndex((QMdiSubWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)() ```
void q_mdisubwindow_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMdiSubWindow_OnSenderSignalIndex((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* signal ```
int32_t q_mdisubwindow_receivers(void* self, const char* signal) {
    return QMdiSubWindow_Receivers((QMdiSubWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* signal ```
int32_t q_mdisubwindow_qbase_receivers(void* self, const char* signal) {
    return QMdiSubWindow_QBaseReceivers((QMdiSubWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, const char*) ```
void q_mdisubwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMdiSubWindow_OnReceivers((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
bool q_mdisubwindow_is_signal_connected(void* self, void* signal) {
    return QMdiSubWindow_IsSignalConnected((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
bool q_mdisubwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QMdiSubWindow_QBaseIsSignalConnected((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMdiSubWindow_OnIsSignalConnected((QMdiSubWindow*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_delete(void* self) {
    QMdiSubWindow_Delete((QMdiSubWindow*)(self));
}