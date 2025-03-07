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
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqmenubar.hpp"
#include "libqmenubar.h"

/// https://doc.qt.io/qt-6/qmenubar.html

/// q_menubar_new constructs a new QMenuBar object.
///
/// ``` QWidget* parent ```
QMenuBar* q_menubar_new(void* parent) {
    return QMenuBar_new((QWidget*)parent);
}

/// q_menubar_new2 constructs a new QMenuBar object.
///
///
QMenuBar* q_menubar_new2() {
    return QMenuBar_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMenuBar* self ```
QMetaObject* q_menubar_meta_object(void* self) {
    return QMenuBar_MetaObject((QMenuBar*)self);
}

/// ``` QMenuBar* self, const char* param1 ```
void* q_menubar_metacast(void* self, const char* param1) {
    return QMenuBar_Metacast((QMenuBar*)self, param1);
}

/// ``` QMenuBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menubar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenuBar_Metacall((QMenuBar*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, enum QMetaObject__Call, int, void*) ```
void q_menubar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMenuBar_OnMetacall((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menubar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenuBar_QBaseMetacall((QMenuBar*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_menubar_tr(const char* s) {
    libqt_string _str = QMenuBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, QMenu* menu ```
QAction* q_menubar_add_menu(void* self, void* menu) {
    return QMenuBar_AddMenu((QMenuBar*)self, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, const char* title ```
QMenu* q_menubar_add_menu_with_title(void* self, const char* title) {
    return QMenuBar_AddMenuWithTitle((QMenuBar*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, QIcon* icon, const char* title ```
QMenu* q_menubar_add_menu2(void* self, void* icon, const char* title) {
    return QMenuBar_AddMenu2((QMenuBar*)self, (QIcon*)icon, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addSeparator)
///
/// ``` QMenuBar* self ```
QAction* q_menubar_add_separator(void* self) {
    return QMenuBar_AddSeparator((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#insertSeparator)
///
/// ``` QMenuBar* self, QAction* before ```
QAction* q_menubar_insert_separator(void* self, void* before) {
    return QMenuBar_InsertSeparator((QMenuBar*)self, (QAction*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#insertMenu)
///
/// ``` QMenuBar* self, QAction* before, QMenu* menu ```
QAction* q_menubar_insert_menu(void* self, void* before, void* menu) {
    return QMenuBar_InsertMenu((QMenuBar*)self, (QAction*)before, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#clear)
///
/// ``` QMenuBar* self ```
void q_menubar_clear(void* self) {
    QMenuBar_Clear((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#activeAction)
///
/// ``` QMenuBar* self ```
QAction* q_menubar_active_action(void* self) {
    return QMenuBar_ActiveAction((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setActiveAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_set_active_action(void* self, void* action) {
    QMenuBar_SetActiveAction((QMenuBar*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setDefaultUp)
///
/// ``` QMenuBar* self, bool defaultUp ```
void q_menubar_set_default_up(void* self, bool defaultUp) {
    QMenuBar_SetDefaultUp((QMenuBar*)self, defaultUp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#isDefaultUp)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_default_up(void* self) {
    return QMenuBar_IsDefaultUp((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#sizeHint)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size_hint(void* self) {
    return QMenuBar_SizeHint((QMenuBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, QSize* (*slot)() ```
void q_menubar_on_size_hint(void* self, QSize* (*slot)()) {
    QMenuBar_OnSizeHint((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self ```
QSize* q_menubar_qbase_size_hint(void* self) {
    return QMenuBar_QBaseSizeHint((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#minimumSizeHint)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_minimum_size_hint(void* self) {
    return QMenuBar_MinimumSizeHint((QMenuBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, QSize* (*slot)() ```
void q_menubar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMenuBar_OnMinimumSizeHint((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self ```
QSize* q_menubar_qbase_minimum_size_hint(void* self) {
    return QMenuBar_QBaseMinimumSizeHint((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#heightForWidth)
///
/// ``` QMenuBar* self, int param1 ```
int32_t q_menubar_height_for_width(void* self, int param1) {
    return QMenuBar_HeightForWidth((QMenuBar*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, int) ```
void q_menubar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMenuBar_OnHeightForWidth((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, int param1 ```
int32_t q_menubar_qbase_height_for_width(void* self, int param1) {
    return QMenuBar_QBaseHeightForWidth((QMenuBar*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionGeometry)
///
/// ``` QMenuBar* self, QAction* param1 ```
QRect* q_menubar_action_geometry(void* self, void* param1) {
    return QMenuBar_ActionGeometry((QMenuBar*)self, (QAction*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionAt)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QAction* q_menubar_action_at(void* self, void* param1) {
    return QMenuBar_ActionAt((QMenuBar*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// ``` QMenuBar* self, QWidget* w ```
void q_menubar_set_corner_widget(void* self, void* w) {
    QMenuBar_SetCornerWidget((QMenuBar*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_corner_widget(void* self) {
    return QMenuBar_CornerWidget((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#isNativeMenuBar)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_native_menu_bar(void* self) {
    return QMenuBar_IsNativeMenuBar((QMenuBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setNativeMenuBar)
///
/// ``` QMenuBar* self, bool nativeMenuBar ```
void q_menubar_set_native_menu_bar(void* self, bool nativeMenuBar) {
    QMenuBar_SetNativeMenuBar((QMenuBar*)self, nativeMenuBar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setVisible)
///
/// ``` QMenuBar* self, bool visible ```
void q_menubar_set_visible(void* self, bool visible) {
    QMenuBar_SetVisible((QMenuBar*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, bool) ```
void q_menubar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMenuBar_OnSetVisible((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, bool visible ```
void q_menubar_qbase_set_visible(void* self, bool visible) {
    QMenuBar_QBaseSetVisible((QMenuBar*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#triggered)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_triggered(void* self, void* action) {
    QMenuBar_Triggered((QMenuBar*)self, (QAction*)action);
}

/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QAction*) ```
void q_menubar_on_triggered(void* self, void (*slot)(void*, void*)) {
    QMenuBar_Connect_Triggered((QMenuBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#hovered)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_hovered(void* self, void* action) {
    QMenuBar_Hovered((QMenuBar*)self, (QAction*)action);
}

/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QAction*) ```
void q_menubar_on_hovered(void* self, void (*slot)(void*, void*)) {
    QMenuBar_Connect_Hovered((QMenuBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#changeEvent)
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_change_event(void* self, void* param1) {
    QMenuBar_ChangeEvent((QMenuBar*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnChangeEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_qbase_change_event(void* self, void* param1) {
    QMenuBar_QBaseChangeEvent((QMenuBar*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#keyPressEvent)
///
/// ``` QMenuBar* self, QKeyEvent* param1 ```
void q_menubar_key_press_event(void* self, void* param1) {
    QMenuBar_KeyPressEvent((QMenuBar*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QKeyEvent*) ```
void q_menubar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnKeyPressEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QKeyEvent* param1 ```
void q_menubar_qbase_key_press_event(void* self, void* param1) {
    QMenuBar_QBaseKeyPressEvent((QMenuBar*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mouseReleaseEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_release_event(void* self, void* param1) {
    QMenuBar_MouseReleaseEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnMouseReleaseEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_release_event(void* self, void* param1) {
    QMenuBar_QBaseMouseReleaseEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mousePressEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_press_event(void* self, void* param1) {
    QMenuBar_MousePressEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnMousePressEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_press_event(void* self, void* param1) {
    QMenuBar_QBaseMousePressEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mouseMoveEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_move_event(void* self, void* param1) {
    QMenuBar_MouseMoveEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnMouseMoveEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_move_event(void* self, void* param1) {
    QMenuBar_QBaseMouseMoveEvent((QMenuBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#leaveEvent)
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_leave_event(void* self, void* param1) {
    QMenuBar_LeaveEvent((QMenuBar*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnLeaveEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_qbase_leave_event(void* self, void* param1) {
    QMenuBar_QBaseLeaveEvent((QMenuBar*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#paintEvent)
///
/// ``` QMenuBar* self, QPaintEvent* param1 ```
void q_menubar_paint_event(void* self, void* param1) {
    QMenuBar_PaintEvent((QMenuBar*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QPaintEvent*) ```
void q_menubar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnPaintEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QPaintEvent* param1 ```
void q_menubar_qbase_paint_event(void* self, void* param1) {
    QMenuBar_QBasePaintEvent((QMenuBar*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#resizeEvent)
///
/// ``` QMenuBar* self, QResizeEvent* param1 ```
void q_menubar_resize_event(void* self, void* param1) {
    QMenuBar_ResizeEvent((QMenuBar*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QResizeEvent*) ```
void q_menubar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnResizeEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QResizeEvent* param1 ```
void q_menubar_qbase_resize_event(void* self, void* param1) {
    QMenuBar_QBaseResizeEvent((QMenuBar*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionEvent)
///
/// ``` QMenuBar* self, QActionEvent* param1 ```
void q_menubar_action_event(void* self, void* param1) {
    QMenuBar_ActionEvent((QMenuBar*)self, (QActionEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QActionEvent*) ```
void q_menubar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnActionEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QActionEvent* param1 ```
void q_menubar_qbase_action_event(void* self, void* param1) {
    QMenuBar_QBaseActionEvent((QMenuBar*)self, (QActionEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#focusOutEvent)
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_focus_out_event(void* self, void* param1) {
    QMenuBar_FocusOutEvent((QMenuBar*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QFocusEvent*) ```
void q_menubar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnFocusOutEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_qbase_focus_out_event(void* self, void* param1) {
    QMenuBar_QBaseFocusOutEvent((QMenuBar*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#focusInEvent)
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_focus_in_event(void* self, void* param1) {
    QMenuBar_FocusInEvent((QMenuBar*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QFocusEvent*) ```
void q_menubar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnFocusInEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_qbase_focus_in_event(void* self, void* param1) {
    QMenuBar_QBaseFocusInEvent((QMenuBar*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#timerEvent)
///
/// ``` QMenuBar* self, QTimerEvent* param1 ```
void q_menubar_timer_event(void* self, void* param1) {
    QMenuBar_TimerEvent((QMenuBar*)self, (QTimerEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QTimerEvent*) ```
void q_menubar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnTimerEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QTimerEvent* param1 ```
void q_menubar_qbase_timer_event(void* self, void* param1) {
    QMenuBar_QBaseTimerEvent((QMenuBar*)self, (QTimerEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#eventFilter)
///
/// ``` QMenuBar* self, QObject* param1, QEvent* param2 ```
bool q_menubar_event_filter(void* self, void* param1, void* param2) {
    return QMenuBar_EventFilter((QMenuBar*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QObject*, QEvent*) ```
void q_menubar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMenuBar_OnEventFilter((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QObject* param1, QEvent* param2 ```
bool q_menubar_qbase_event_filter(void* self, void* param1, void* param2) {
    return QMenuBar_QBaseEventFilter((QMenuBar*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#event)
///
/// ``` QMenuBar* self, QEvent* param1 ```
bool q_menubar_event(void* self, void* param1) {
    return QMenuBar_Event((QMenuBar*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_event(void* self, bool (*slot)(void*, void*)) {
    QMenuBar_OnEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
bool q_menubar_qbase_event(void* self, void* param1) {
    return QMenuBar_QBaseEvent((QMenuBar*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#initStyleOption)
///
/// ``` QMenuBar* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menubar_init_style_option(void* self, void* option, void* action) {
    QMenuBar_InitStyleOption((QMenuBar*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QStyleOptionMenuItem*, QAction*) ```
void q_menubar_on_init_style_option(void* self, void (*slot)(void*, void*, void*)) {
    QMenuBar_OnInitStyleOption((QMenuBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenuBar* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menubar_qbase_init_style_option(void* self, void* option, void* action) {
    QMenuBar_QBaseInitStyleOption((QMenuBar*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_menubar_tr2(const char* s, const char* c) {
    libqt_string _str = QMenuBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_menubar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMenuBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// ``` QMenuBar* self, QWidget* w, enum Qt__Corner corner ```
void q_menubar_set_corner_widget2(void* self, void* w, int64_t corner) {
    QMenuBar_SetCornerWidget2((QMenuBar*)self, (QWidget*)w, corner);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// ``` QMenuBar* self, enum Qt__Corner corner ```
QWidget* q_menubar_corner_widget1(void* self, int64_t corner) {
    return QMenuBar_CornerWidget1((QMenuBar*)self, corner);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMenuBar* self ```
void q_menubar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMenuBar* self ```
QStyle* q_menubar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMenuBar* self, QStyle* style ```
void q_menubar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMenuBar* self, enum Qt__WindowModality windowModality ```
void q_menubar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMenuBar* self, QWidget* param1 ```
bool q_menubar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMenuBar* self, bool enabled ```
void q_menubar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMenuBar* self, bool disabled ```
void q_menubar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMenuBar* self, bool windowModified ```
void q_menubar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMenuBar* self ```
QPoint* q_menubar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenuBar* self, QSize* minimumSize ```
void q_menubar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenuBar* self, int minw, int minh ```
void q_menubar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenuBar* self, QSize* maximumSize ```
void q_menubar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenuBar* self, int maxw, int maxh ```
void q_menubar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMenuBar* self, int minw ```
void q_menubar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMenuBar* self, int minh ```
void q_menubar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMenuBar* self, int maxw ```
void q_menubar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMenuBar* self, int maxh ```
void q_menubar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenuBar* self, QSize* sizeIncrement ```
void q_menubar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenuBar* self, QSize* baseSize ```
void q_menubar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenuBar* self, int basew, int baseh ```
void q_menubar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenuBar* self, QSize* fixedSize ```
void q_menubar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMenuBar* self, int w ```
void q_menubar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMenuBar* self, int h ```
void q_menubar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenuBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menubar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenuBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menubar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenuBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menubar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenuBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menubar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMenuBar* self ```
QPalette* q_menubar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMenuBar* self, QPalette* palette ```
void q_menubar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMenuBar* self, enum QPalette__ColorRole backgroundRole ```
void q_menubar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMenuBar* self, enum QPalette__ColorRole foregroundRole ```
void q_menubar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMenuBar* self ```
QFont* q_menubar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMenuBar* self, QFont* font ```
void q_menubar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMenuBar* self ```
QFontMetrics* q_menubar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMenuBar* self ```
QFontInfo* q_menubar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMenuBar* self ```
QCursor* q_menubar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMenuBar* self, QCursor* cursor ```
void q_menubar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMenuBar* self ```
bool q_menubar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenuBar* self, QBitmap* mask ```
void q_menubar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenuBar* self, QRegion* mask ```
void q_menubar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMenuBar* self ```
void q_menubar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target ```
void q_menubar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenuBar* self ```
QPixmap* q_menubar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMenuBar* self ```
QGraphicsEffect* q_menubar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMenuBar* self, QGraphicsEffect* effect ```
void q_menubar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal ```
void q_menubar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal ```
void q_menubar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMenuBar* self, const char* windowTitle ```
void q_menubar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMenuBar* self, const char* styleSheet ```
void q_menubar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMenuBar* self ```
const char* q_menubar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMenuBar* self, QIcon* icon ```
void q_menubar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMenuBar* self ```
QIcon* q_menubar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMenuBar* self, const char* windowIconText ```
void q_menubar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMenuBar* self, const char* windowRole ```
void q_menubar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMenuBar* self, const char* filePath ```
void q_menubar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMenuBar* self, double level ```
void q_menubar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMenuBar* self ```
double q_menubar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMenuBar* self, const char* toolTip ```
void q_menubar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMenuBar* self ```
const char* q_menubar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMenuBar* self, int msec ```
void q_menubar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMenuBar* self, const char* statusTip ```
void q_menubar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMenuBar* self ```
const char* q_menubar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMenuBar* self, const char* whatsThis ```
void q_menubar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMenuBar* self ```
const char* q_menubar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMenuBar* self ```
const char* q_menubar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMenuBar* self, const char* name ```
void q_menubar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMenuBar* self ```
const char* q_menubar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMenuBar* self, const char* description ```
void q_menubar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMenuBar* self, enum Qt__LayoutDirection direction ```
void q_menubar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMenuBar* self, QLocale* locale ```
void q_menubar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMenuBar* self ```
QLocale* q_menubar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenuBar* self ```
void q_menubar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMenuBar* self ```
void q_menubar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMenuBar* self ```
void q_menubar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenuBar* self, enum Qt__FocusReason reason ```
void q_menubar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMenuBar* self, enum Qt__FocusPolicy policy ```
void q_menubar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_menubar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMenuBar* self, QWidget* focusProxy ```
void q_menubar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMenuBar* self, enum Qt__ContextMenuPolicy policy ```
void q_menubar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenuBar* self ```
void q_menubar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenuBar* self, QCursor* param1 ```
void q_menubar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMenuBar* self ```
void q_menubar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMenuBar* self ```
void q_menubar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMenuBar* self ```
void q_menubar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenuBar* self, QKeySequence* key ```
int32_t q_menubar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_menubar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_menubar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMenuBar* self ```
bool q_menubar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMenuBar* self ```
QGraphicsProxyWidget* q_menubar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self ```
void q_menubar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self ```
void q_menubar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, QRect* param1 ```
void q_menubar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, QRegion* param1 ```
void q_menubar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, QRect* param1 ```
void q_menubar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, QRegion* param1 ```
void q_menubar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMenuBar* self, bool hidden ```
void q_menubar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMenuBar* self ```
void q_menubar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMenuBar* self ```
void q_menubar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMenuBar* self ```
void q_menubar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMenuBar* self ```
void q_menubar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMenuBar* self ```
void q_menubar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMenuBar* self ```
void q_menubar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMenuBar* self ```
bool q_menubar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMenuBar* self ```
void q_menubar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMenuBar* self ```
void q_menubar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMenuBar* self, QWidget* param1 ```
void q_menubar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenuBar* self, int x, int y ```
void q_menubar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenuBar* self, QPoint* param1 ```
void q_menubar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenuBar* self, QSize* param1 ```
void q_menubar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenuBar* self, QRect* geometry ```
void q_menubar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMenuBar* self ```
char* q_menubar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMenuBar* self, const char* geometry ```
bool q_menubar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMenuBar* self ```
void q_menubar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMenuBar* self, QWidget* param1 ```
bool q_menubar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMenuBar* self, int state ```
void q_menubar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMenuBar* self, int state ```
void q_menubar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMenuBar* self ```
QSizePolicy* q_menubar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenuBar* self, QSizePolicy* sizePolicy ```
void q_menubar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenuBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_menubar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenuBar* self, int left, int top, int right, int bottom ```
void q_menubar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenuBar* self, QMargins* margins ```
void q_menubar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMenuBar* self ```
QMargins* q_menubar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMenuBar* self ```
QLayout* q_menubar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMenuBar* self, QLayout* layout ```
void q_menubar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMenuBar* self ```
void q_menubar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenuBar* self, QWidget* parent ```
void q_menubar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenuBar* self, QWidget* parent, int f ```
void q_menubar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenuBar* self, int dx, int dy ```
void q_menubar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenuBar* self, int dx, int dy, QRect* param3 ```
void q_menubar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMenuBar* self ```
bool q_menubar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMenuBar* self, bool on ```
void q_menubar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMenuBar* self, QAction* actions[] ```
void q_menubar_add_actions(void* self, void* actions[]) {
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
/// ``` QMenuBar* self, QAction* before, QAction* actions[] ```
void q_menubar_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QMenuBar* self, QAction* before, QAction* action ```
void q_menubar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMenuBar* self ```
libqt_list /* of QAction* */ q_menubar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, const char* text ```
QAction* q_menubar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QIcon* icon, const char* text ```
QAction* q_menubar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_menubar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_menubar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMenuBar* self, int typeVal ```
void q_menubar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenuBar* self, enum Qt__WindowType param1 ```
void q_menubar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMenuBar* self, int typeVal ```
void q_menubar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_menubar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenuBar* self, int x, int y ```
QWidget* q_menubar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenuBar* self, QPoint* p ```
QWidget* q_menubar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1 ```
void q_menubar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1 ```
bool q_menubar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMenuBar* self ```
void q_menubar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMenuBar* self, QWidget* child ```
bool q_menubar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMenuBar* self ```
bool q_menubar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMenuBar* self, bool enabled ```
void q_menubar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMenuBar* self ```
QBackingStore* q_menubar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMenuBar* self ```
QWindow* q_menubar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMenuBar* self ```
QScreen* q_menubar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMenuBar* self, QScreen* screen ```
void q_menubar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_menubar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMenuBar* self, const char* title ```
void q_menubar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, const char*) ```
void q_menubar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMenuBar* self, QIcon* icon ```
void q_menubar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_menubar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMenuBar* self, const char* iconText ```
void q_menubar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, const char*) ```
void q_menubar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMenuBar* self, QPoint* pos ```
void q_menubar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_menubar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMenuBar* self, int hints ```
void q_menubar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_menubar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menubar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menubar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset ```
void q_menubar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menubar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menubar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenuBar* self, QRect* rectangle ```
QPixmap* q_menubar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal, int flags ```
void q_menubar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenuBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_menubar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenuBar* self, int id, bool enable ```
void q_menubar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenuBar* self, int id, bool enable ```
void q_menubar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenuBar* self, enum Qt__WindowType param1, bool on ```
void q_menubar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_menubar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_menubar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_menubar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMenuBar* self ```
const char* q_menubar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMenuBar* self, const char* name ```
void q_menubar_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMenuBar* self ```
bool q_menubar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMenuBar* self, bool b ```
bool q_menubar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMenuBar* self ```
QThread* q_menubar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMenuBar* self, QThread* thread ```
void q_menubar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenuBar* self, int interval ```
int32_t q_menubar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMenuBar* self ```
libqt_list /* of QObject* */ q_menubar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMenuBar* self, QObject* filterObj ```
void q_menubar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMenuBar* self, QObject* obj ```
void q_menubar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_menubar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenuBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_menubar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_menubar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_menubar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMenuBar* self ```
void q_menubar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMenuBar* self ```
void q_menubar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMenuBar* self, const char* name, QVariant* value ```
bool q_menubar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMenuBar* self, const char* name ```
QVariant* q_menubar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMenuBar* self ```
const char** q_menubar_dynamic_property_names(void* self) {
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
/// ``` QMenuBar* self ```
QBindingStorage* q_menubar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenuBar* self ```
QBindingStorage* q_menubar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenuBar* self ```
void q_menubar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMenuBar* self, void (*slot)(QObject*) ```
void q_menubar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMenuBar* self ```
QObject* q_menubar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMenuBar* self, const char* classname ```
bool q_menubar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMenuBar* self ```
void q_menubar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenuBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_menubar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menubar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenuBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menubar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenuBar* self, QObject* param1 ```
void q_menubar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMenuBar* self, void (*slot)(QObject*, QObject*) ```
void q_menubar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMenuBar* self ```
bool q_menubar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMenuBar* self ```
double q_menubar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMenuBar* self ```
double q_menubar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_menubar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_dev_type(void* self) {
    return QMenuBar_DevType((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_qbase_dev_type(void* self) {
    return QMenuBar_QBaseDevType((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)() ```
void q_menubar_on_dev_type(void* self, int32_t (*slot)()) {
    QMenuBar_OnDevType((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_has_height_for_width(void* self) {
    return QMenuBar_HasHeightForWidth((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_has_height_for_width(void* self) {
    return QMenuBar_QBaseHasHeightForWidth((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_has_height_for_width(void* self, bool (*slot)()) {
    QMenuBar_OnHasHeightForWidth((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QPaintEngine* q_menubar_paint_engine(void* self) {
    return QMenuBar_PaintEngine((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QPaintEngine* q_menubar_qbase_paint_engine(void* self) {
    return QMenuBar_QBasePaintEngine((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPaintEngine* (*slot)() ```
void q_menubar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMenuBar_OnPaintEngine((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMouseEvent* event ```
void q_menubar_mouse_double_click_event(void* self, void* event) {
    QMenuBar_MouseDoubleClickEvent((QMenuBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMouseEvent* event ```
void q_menubar_qbase_mouse_double_click_event(void* self, void* event) {
    QMenuBar_QBaseMouseDoubleClickEvent((QMenuBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnMouseDoubleClickEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QWheelEvent* event ```
void q_menubar_wheel_event(void* self, void* event) {
    QMenuBar_WheelEvent((QMenuBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QWheelEvent* event ```
void q_menubar_qbase_wheel_event(void* self, void* event) {
    QMenuBar_QBaseWheelEvent((QMenuBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QWheelEvent*) ```
void q_menubar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnWheelEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QKeyEvent* event ```
void q_menubar_key_release_event(void* self, void* event) {
    QMenuBar_KeyReleaseEvent((QMenuBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QKeyEvent* event ```
void q_menubar_qbase_key_release_event(void* self, void* event) {
    QMenuBar_QBaseKeyReleaseEvent((QMenuBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QKeyEvent*) ```
void q_menubar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnKeyReleaseEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QEnterEvent* event ```
void q_menubar_enter_event(void* self, void* event) {
    QMenuBar_EnterEvent((QMenuBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QEnterEvent* event ```
void q_menubar_qbase_enter_event(void* self, void* event) {
    QMenuBar_QBaseEnterEvent((QMenuBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEnterEvent*) ```
void q_menubar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnEnterEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMoveEvent* event ```
void q_menubar_move_event(void* self, void* event) {
    QMenuBar_MoveEvent((QMenuBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMoveEvent* event ```
void q_menubar_qbase_move_event(void* self, void* event) {
    QMenuBar_QBaseMoveEvent((QMenuBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMoveEvent*) ```
void q_menubar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnMoveEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QCloseEvent* event ```
void q_menubar_close_event(void* self, void* event) {
    QMenuBar_CloseEvent((QMenuBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QCloseEvent* event ```
void q_menubar_qbase_close_event(void* self, void* event) {
    QMenuBar_QBaseCloseEvent((QMenuBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QCloseEvent*) ```
void q_menubar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnCloseEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QContextMenuEvent* event ```
void q_menubar_context_menu_event(void* self, void* event) {
    QMenuBar_ContextMenuEvent((QMenuBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QContextMenuEvent* event ```
void q_menubar_qbase_context_menu_event(void* self, void* event) {
    QMenuBar_QBaseContextMenuEvent((QMenuBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QContextMenuEvent*) ```
void q_menubar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnContextMenuEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QTabletEvent* event ```
void q_menubar_tablet_event(void* self, void* event) {
    QMenuBar_TabletEvent((QMenuBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QTabletEvent* event ```
void q_menubar_qbase_tablet_event(void* self, void* event) {
    QMenuBar_QBaseTabletEvent((QMenuBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QTabletEvent*) ```
void q_menubar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnTabletEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragEnterEvent* event ```
void q_menubar_drag_enter_event(void* self, void* event) {
    QMenuBar_DragEnterEvent((QMenuBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragEnterEvent* event ```
void q_menubar_qbase_drag_enter_event(void* self, void* event) {
    QMenuBar_QBaseDragEnterEvent((QMenuBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragEnterEvent*) ```
void q_menubar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnDragEnterEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragMoveEvent* event ```
void q_menubar_drag_move_event(void* self, void* event) {
    QMenuBar_DragMoveEvent((QMenuBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragMoveEvent* event ```
void q_menubar_qbase_drag_move_event(void* self, void* event) {
    QMenuBar_QBaseDragMoveEvent((QMenuBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragMoveEvent*) ```
void q_menubar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnDragMoveEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragLeaveEvent* event ```
void q_menubar_drag_leave_event(void* self, void* event) {
    QMenuBar_DragLeaveEvent((QMenuBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragLeaveEvent* event ```
void q_menubar_qbase_drag_leave_event(void* self, void* event) {
    QMenuBar_QBaseDragLeaveEvent((QMenuBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragLeaveEvent*) ```
void q_menubar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnDragLeaveEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDropEvent* event ```
void q_menubar_drop_event(void* self, void* event) {
    QMenuBar_DropEvent((QMenuBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDropEvent* event ```
void q_menubar_qbase_drop_event(void* self, void* event) {
    QMenuBar_QBaseDropEvent((QMenuBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDropEvent*) ```
void q_menubar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnDropEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QShowEvent* event ```
void q_menubar_show_event(void* self, void* event) {
    QMenuBar_ShowEvent((QMenuBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QShowEvent* event ```
void q_menubar_qbase_show_event(void* self, void* event) {
    QMenuBar_QBaseShowEvent((QMenuBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QShowEvent*) ```
void q_menubar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnShowEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QHideEvent* event ```
void q_menubar_hide_event(void* self, void* event) {
    QMenuBar_HideEvent((QMenuBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QHideEvent* event ```
void q_menubar_qbase_hide_event(void* self, void* event) {
    QMenuBar_QBaseHideEvent((QMenuBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QHideEvent*) ```
void q_menubar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnHideEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_menubar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenuBar_NativeEvent((QMenuBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_menubar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenuBar_QBaseNativeEvent((QMenuBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, const char*, void*, intptr_t*) ```
void q_menubar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMenuBar_OnNativeEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menubar_metric(void* self, int64_t param1) {
    return QMenuBar_Metric((QMenuBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menubar_qbase_metric(void* self, int64_t param1) {
    return QMenuBar_QBaseMetric((QMenuBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_menubar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMenuBar_OnMetric((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_init_painter(void* self, void* painter) {
    QMenuBar_InitPainter((QMenuBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_qbase_init_painter(void* self, void* painter) {
    QMenuBar_QBaseInitPainter((QMenuBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QPainter*) ```
void q_menubar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnInitPainter((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QPoint* offset ```
QPaintDevice* q_menubar_redirected(void* self, void* offset) {
    return QMenuBar_Redirected((QMenuBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QPoint* offset ```
QPaintDevice* q_menubar_qbase_redirected(void* self, void* offset) {
    return QMenuBar_QBaseRedirected((QMenuBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPaintDevice* (*slot)(QMenuBar*, QPoint*) ```
void q_menubar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMenuBar_OnRedirected((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QPainter* q_menubar_shared_painter(void* self) {
    return QMenuBar_SharedPainter((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QPainter* q_menubar_qbase_shared_painter(void* self) {
    return QMenuBar_QBaseSharedPainter((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPainter* (*slot)() ```
void q_menubar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMenuBar_OnSharedPainter((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QInputMethodEvent* param1 ```
void q_menubar_input_method_event(void* self, void* param1) {
    QMenuBar_InputMethodEvent((QMenuBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QInputMethodEvent* param1 ```
void q_menubar_qbase_input_method_event(void* self, void* param1) {
    QMenuBar_QBaseInputMethodEvent((QMenuBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QInputMethodEvent*) ```
void q_menubar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnInputMethodEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menubar_input_method_query(void* self, int64_t param1) {
    return QMenuBar_InputMethodQuery((QMenuBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menubar_qbase_input_method_query(void* self, int64_t param1) {
    return QMenuBar_QBaseInputMethodQuery((QMenuBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QVariant* (*slot)(QMenuBar*, enum Qt__InputMethodQuery) ```
void q_menubar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMenuBar_OnInputMethodQuery((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, bool next ```
bool q_menubar_focus_next_prev_child(void* self, bool next) {
    return QMenuBar_FocusNextPrevChild((QMenuBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, bool next ```
bool q_menubar_qbase_focus_next_prev_child(void* self, bool next) {
    return QMenuBar_QBaseFocusNextPrevChild((QMenuBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, bool) ```
void q_menubar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMenuBar_OnFocusNextPrevChild((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QChildEvent* event ```
void q_menubar_child_event(void* self, void* event) {
    QMenuBar_ChildEvent((QMenuBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QChildEvent* event ```
void q_menubar_qbase_child_event(void* self, void* event) {
    QMenuBar_QBaseChildEvent((QMenuBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QChildEvent*) ```
void q_menubar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnChildEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QEvent* event ```
void q_menubar_custom_event(void* self, void* event) {
    QMenuBar_CustomEvent((QMenuBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QEvent* event ```
void q_menubar_qbase_custom_event(void* self, void* event) {
    QMenuBar_QBaseCustomEvent((QMenuBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnCustomEvent((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_connect_notify(void* self, void* signal) {
    QMenuBar_ConnectNotify((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_qbase_connect_notify(void* self, void* signal) {
    QMenuBar_QBaseConnectNotify((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnConnectNotify((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_disconnect_notify(void* self, void* signal) {
    QMenuBar_DisconnectNotify((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_qbase_disconnect_notify(void* self, void* signal) {
    QMenuBar_QBaseDisconnectNotify((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMenuBar_OnDisconnectNotify((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_update_micro_focus(void* self) {
    QMenuBar_UpdateMicroFocus((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_update_micro_focus(void* self) {
    QMenuBar_QBaseUpdateMicroFocus((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_update_micro_focus(void* self, void (*slot)()) {
    QMenuBar_OnUpdateMicroFocus((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_create(void* self) {
    QMenuBar_Create((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_create(void* self) {
    QMenuBar_QBaseCreate((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_create(void* self, void (*slot)()) {
    QMenuBar_OnCreate((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_destroy(void* self) {
    QMenuBar_Destroy((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_destroy(void* self) {
    QMenuBar_QBaseDestroy((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_destroy(void* self, void (*slot)()) {
    QMenuBar_OnDestroy((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_focus_next_child(void* self) {
    return QMenuBar_FocusNextChild((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_focus_next_child(void* self) {
    return QMenuBar_QBaseFocusNextChild((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_focus_next_child(void* self, bool (*slot)()) {
    QMenuBar_OnFocusNextChild((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_focus_previous_child(void* self) {
    return QMenuBar_FocusPreviousChild((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_focus_previous_child(void* self) {
    return QMenuBar_QBaseFocusPreviousChild((QMenuBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_focus_previous_child(void* self, bool (*slot)()) {
    QMenuBar_OnFocusPreviousChild((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QObject* q_menubar_sender(void* self) {
    return QMenuBar_Sender((QMenuBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QObject* q_menubar_qbase_sender(void* self) {
    return QMenuBar_QBaseSender((QMenuBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QObject* (*slot)() ```
void q_menubar_on_sender(void* self, QObject* (*slot)()) {
    QMenuBar_OnSender((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_sender_signal_index(void* self) {
    return QMenuBar_SenderSignalIndex((QMenuBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_qbase_sender_signal_index(void* self) {
    return QMenuBar_QBaseSenderSignalIndex((QMenuBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)() ```
void q_menubar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMenuBar_OnSenderSignalIndex((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, const char* signal ```
int32_t q_menubar_receivers(void* self, const char* signal) {
    return QMenuBar_Receivers((QMenuBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, const char* signal ```
int32_t q_menubar_qbase_receivers(void* self, const char* signal) {
    return QMenuBar_QBaseReceivers((QMenuBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, const char*) ```
void q_menubar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMenuBar_OnReceivers((QMenuBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
bool q_menubar_is_signal_connected(void* self, void* signal) {
    return QMenuBar_IsSignalConnected((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
bool q_menubar_qbase_is_signal_connected(void* self, void* signal) {
    return QMenuBar_QBaseIsSignalConnected((QMenuBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMenuBar_OnIsSignalConnected((QMenuBar*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMenuBar* self ```
void q_menubar_delete(void* self) {
    QMenuBar_Delete((QMenuBar*)(self));
}