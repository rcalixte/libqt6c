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
#include "libqmenu.hpp"
#include "libqmenu.h"

/// https://doc.qt.io/qt-6/qmenu.html

/// q_menu_new constructs a new QMenu object.
///
/// ``` QWidget* parent ```
QMenu* q_menu_new(void* parent) {
    return QMenu_new((QWidget*)parent);
}

/// q_menu_new2 constructs a new QMenu object.
///
///
QMenu* q_menu_new2() {
    return QMenu_new2();
}

/// q_menu_new3 constructs a new QMenu object.
///
/// ``` const char* title ```
QMenu* q_menu_new3(const char* title) {
    return QMenu_new3(qstring(title));
}

/// q_menu_new4 constructs a new QMenu object.
///
/// ``` const char* title, QWidget* parent ```
QMenu* q_menu_new4(const char* title, void* parent) {
    return QMenu_new4(qstring(title), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMenu* self ```
QMetaObject* q_menu_meta_object(void* self) {
    return QMenu_MetaObject((QMenu*)self);
}

/// ``` QMenu* self, const char* param1 ```
void* q_menu_metacast(void* self, const char* param1) {
    return QMenu_Metacast((QMenu*)self, param1);
}

/// ``` QMenu* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menu_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenu_Metacall((QMenu*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, enum QMetaObject__Call, int, void*) ```
void q_menu_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMenu_OnMetacall((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menu_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenu_QBaseMetacall((QMenu*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_menu_tr(const char* s) {
    libqt_string _str = QMenu_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, QMenu* menu ```
QAction* q_menu_add_menu(void* self, void* menu) {
    return QMenu_AddMenu((QMenu*)self, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, const char* title ```
QMenu* q_menu_add_menu_with_title(void* self, const char* title) {
    return QMenu_AddMenuWithTitle((QMenu*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, QIcon* icon, const char* title ```
QMenu* q_menu_add_menu2(void* self, void* icon, const char* title) {
    return QMenu_AddMenu2((QMenu*)self, (QIcon*)icon, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// ``` QMenu* self ```
QAction* q_menu_add_separator(void* self) {
    return QMenu_AddSeparator((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// ``` QMenu* self, const char* text ```
QAction* q_menu_add_section(void* self, const char* text) {
    return QMenu_AddSection((QMenu*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// ``` QMenu* self, QIcon* icon, const char* text ```
QAction* q_menu_add_section2(void* self, void* icon, const char* text) {
    return QMenu_AddSection2((QMenu*)self, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// ``` QMenu* self, QAction* before, QMenu* menu ```
QAction* q_menu_insert_menu(void* self, void* before, void* menu) {
    return QMenu_InsertMenu((QMenu*)self, (QAction*)before, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// ``` QMenu* self, QAction* before ```
QAction* q_menu_insert_separator(void* self, void* before) {
    return QMenu_InsertSeparator((QMenu*)self, (QAction*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// ``` QMenu* self, QAction* before, const char* text ```
QAction* q_menu_insert_section(void* self, void* before, const char* text) {
    return QMenu_InsertSection((QMenu*)self, (QAction*)before, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// ``` QMenu* self, QAction* before, QIcon* icon, const char* text ```
QAction* q_menu_insert_section2(void* self, void* before, void* icon, const char* text) {
    return QMenu_InsertSection2((QMenu*)self, (QAction*)before, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// ``` QMenu* self ```
bool q_menu_is_empty(void* self) {
    return QMenu_IsEmpty((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// ``` QMenu* self ```
void q_menu_clear(void* self) {
    QMenu_Clear((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// ``` QMenu* self, bool tearOffEnabled ```
void q_menu_set_tear_off_enabled(void* self, bool tearOffEnabled) {
    QMenu_SetTearOffEnabled((QMenu*)self, tearOffEnabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// ``` QMenu* self ```
bool q_menu_is_tear_off_enabled(void* self) {
    return QMenu_IsTearOffEnabled((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// ``` QMenu* self ```
bool q_menu_is_tear_off_menu_visible(void* self) {
    return QMenu_IsTearOffMenuVisible((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// ``` QMenu* self ```
void q_menu_show_tear_off_menu(void* self) {
    QMenu_ShowTearOffMenu((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_show_tear_off_menu_with_pos(void* self, void* pos) {
    QMenu_ShowTearOffMenuWithPos((QMenu*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// ``` QMenu* self ```
void q_menu_hide_tear_off_menu(void* self) {
    QMenu_HideTearOffMenu((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// ``` QMenu* self, QAction* defaultAction ```
void q_menu_set_default_action(void* self, void* defaultAction) {
    QMenu_SetDefaultAction((QMenu*)self, (QAction*)defaultAction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// ``` QMenu* self ```
QAction* q_menu_default_action(void* self) {
    return QMenu_DefaultAction((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// ``` QMenu* self, QAction* act ```
void q_menu_set_active_action(void* self, void* act) {
    QMenu_SetActiveAction((QMenu*)self, (QAction*)act);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// ``` QMenu* self ```
QAction* q_menu_active_action(void* self) {
    return QMenu_ActiveAction((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_popup(void* self, void* pos) {
    QMenu_Popup((QMenu*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self ```
QAction* q_menu_exec(void* self) {
    return QMenu_Exec((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self, QPoint* pos ```
QAction* q_menu_exec_with_pos(void* self, void* pos) {
    return QMenu_ExecWithPos((QMenu*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QAction* actions[], QPoint* pos ```
QAction* q_menu_exec2(void* actions[], void* pos) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    return QMenu_Exec2(actions_list, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// ``` QMenu* self ```
QSize* q_menu_size_hint(void* self) {
    return QMenu_SizeHint((QMenu*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, QSize* (*slot)() ```
void q_menu_on_size_hint(void* self, QSize* (*slot)()) {
    QMenu_OnSizeHint((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self ```
QSize* q_menu_qbase_size_hint(void* self) {
    return QMenu_QBaseSizeHint((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// ``` QMenu* self, QAction* param1 ```
QRect* q_menu_action_geometry(void* self, void* param1) {
    return QMenu_ActionGeometry((QMenu*)self, (QAction*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// ``` QMenu* self, QPoint* param1 ```
QAction* q_menu_action_at(void* self, void* param1) {
    return QMenu_ActionAt((QMenu*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// ``` QMenu* self ```
QAction* q_menu_menu_action(void* self) {
    return QMenu_MenuAction((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// ``` QAction* action ```
QMenu* q_menu_menu_in_action(void* action) {
    return QMenu_MenuInAction((QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// ``` QMenu* self ```
const char* q_menu_title(void* self) {
    libqt_string _str = QMenu_Title((QMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// ``` QMenu* self, const char* title ```
void q_menu_set_title(void* self, const char* title) {
    QMenu_SetTitle((QMenu*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// ``` QMenu* self ```
QIcon* q_menu_icon(void* self) {
    return QMenu_Icon((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_set_icon(void* self, void* icon) {
    QMenu_SetIcon((QMenu*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// ``` QMenu* self, QWidget* widget ```
void q_menu_set_no_replay_for(void* self, void* widget) {
    QMenu_SetNoReplayFor((QMenu*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// ``` QMenu* self ```
bool q_menu_separators_collapsible(void* self) {
    return QMenu_SeparatorsCollapsible((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// ``` QMenu* self, bool collapse ```
void q_menu_set_separators_collapsible(void* self, bool collapse) {
    QMenu_SetSeparatorsCollapsible((QMenu*)self, collapse);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// ``` QMenu* self ```
bool q_menu_tool_tips_visible(void* self) {
    return QMenu_ToolTipsVisible((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// ``` QMenu* self, bool visible ```
void q_menu_set_tool_tips_visible(void* self, bool visible) {
    QMenu_SetToolTipsVisible((QMenu*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// ``` QMenu* self ```
void q_menu_about_to_show(void* self) {
    QMenu_AboutToShow((QMenu*)self);
}

/// ``` QMenu* self, void (*slot)(QMenu*) ```
void q_menu_on_about_to_show(void* self, void (*slot)(void*)) {
    QMenu_Connect_AboutToShow((QMenu*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// ``` QMenu* self ```
void q_menu_about_to_hide(void* self) {
    QMenu_AboutToHide((QMenu*)self);
}

/// ``` QMenu* self, void (*slot)(QMenu*) ```
void q_menu_on_about_to_hide(void* self, void (*slot)(void*)) {
    QMenu_Connect_AboutToHide((QMenu*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_triggered(void* self, void* action) {
    QMenu_Triggered((QMenu*)self, (QAction*)action);
}

/// ``` QMenu* self, void (*slot)(QMenu*, QAction*) ```
void q_menu_on_triggered(void* self, void (*slot)(void*, void*)) {
    QMenu_Connect_Triggered((QMenu*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_hovered(void* self, void* action) {
    QMenu_Hovered((QMenu*)self, (QAction*)action);
}

/// ``` QMenu* self, void (*slot)(QMenu*, QAction*) ```
void q_menu_on_hovered(void* self, void (*slot)(void*, void*)) {
    QMenu_Connect_Hovered((QMenu*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// ``` QMenu* self ```
int32_t q_menu_column_count(void* self) {
    return QMenu_ColumnCount((QMenu*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_column_count(void* self, int32_t (*slot)()) {
    QMenu_OnColumnCount((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_column_count(void* self) {
    return QMenu_QBaseColumnCount((QMenu*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_change_event(void* self, void* param1) {
    QMenu_ChangeEvent((QMenu*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnChangeEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_qbase_change_event(void* self, void* param1) {
    QMenu_QBaseChangeEvent((QMenu*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// ``` QMenu* self, QKeyEvent* param1 ```
void q_menu_key_press_event(void* self, void* param1) {
    QMenu_KeyPressEvent((QMenu*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QKeyEvent*) ```
void q_menu_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnKeyPressEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QKeyEvent* param1 ```
void q_menu_qbase_key_press_event(void* self, void* param1) {
    QMenu_QBaseKeyPressEvent((QMenu*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_release_event(void* self, void* param1) {
    QMenu_MouseReleaseEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseReleaseEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_release_event(void* self, void* param1) {
    QMenu_QBaseMouseReleaseEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_press_event(void* self, void* param1) {
    QMenu_MousePressEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMousePressEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_press_event(void* self, void* param1) {
    QMenu_QBaseMousePressEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_move_event(void* self, void* param1) {
    QMenu_MouseMoveEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseMoveEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_move_event(void* self, void* param1) {
    QMenu_QBaseMouseMoveEvent((QMenu*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// ``` QMenu* self, QWheelEvent* param1 ```
void q_menu_wheel_event(void* self, void* param1) {
    QMenu_WheelEvent((QMenu*)self, (QWheelEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QWheelEvent*) ```
void q_menu_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnWheelEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QWheelEvent* param1 ```
void q_menu_qbase_wheel_event(void* self, void* param1) {
    QMenu_QBaseWheelEvent((QMenu*)self, (QWheelEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// ``` QMenu* self, QEnterEvent* param1 ```
void q_menu_enter_event(void* self, void* param1) {
    QMenu_EnterEvent((QMenu*)self, (QEnterEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEnterEvent*) ```
void q_menu_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnEnterEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QEnterEvent* param1 ```
void q_menu_qbase_enter_event(void* self, void* param1) {
    QMenu_QBaseEnterEvent((QMenu*)self, (QEnterEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_leave_event(void* self, void* param1) {
    QMenu_LeaveEvent((QMenu*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnLeaveEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_qbase_leave_event(void* self, void* param1) {
    QMenu_QBaseLeaveEvent((QMenu*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// ``` QMenu* self, QHideEvent* param1 ```
void q_menu_hide_event(void* self, void* param1) {
    QMenu_HideEvent((QMenu*)self, (QHideEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QHideEvent*) ```
void q_menu_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnHideEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QHideEvent* param1 ```
void q_menu_qbase_hide_event(void* self, void* param1) {
    QMenu_QBaseHideEvent((QMenu*)self, (QHideEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// ``` QMenu* self, QPaintEvent* param1 ```
void q_menu_paint_event(void* self, void* param1) {
    QMenu_PaintEvent((QMenu*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QPaintEvent*) ```
void q_menu_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnPaintEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QPaintEvent* param1 ```
void q_menu_qbase_paint_event(void* self, void* param1) {
    QMenu_QBasePaintEvent((QMenu*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// ``` QMenu* self, QActionEvent* param1 ```
void q_menu_action_event(void* self, void* param1) {
    QMenu_ActionEvent((QMenu*)self, (QActionEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QActionEvent*) ```
void q_menu_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnActionEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QActionEvent* param1 ```
void q_menu_qbase_action_event(void* self, void* param1) {
    QMenu_QBaseActionEvent((QMenu*)self, (QActionEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// ``` QMenu* self, QTimerEvent* param1 ```
void q_menu_timer_event(void* self, void* param1) {
    QMenu_TimerEvent((QMenu*)self, (QTimerEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QTimerEvent*) ```
void q_menu_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnTimerEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QTimerEvent* param1 ```
void q_menu_qbase_timer_event(void* self, void* param1) {
    QMenu_QBaseTimerEvent((QMenu*)self, (QTimerEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// ``` QMenu* self, QEvent* param1 ```
bool q_menu_event(void* self, void* param1) {
    return QMenu_Event((QMenu*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QEvent*) ```
void q_menu_on_event(void* self, bool (*slot)(void*, void*)) {
    QMenu_OnEvent((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
bool q_menu_qbase_event(void* self, void* param1) {
    return QMenu_QBaseEvent((QMenu*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// ``` QMenu* self, bool next ```
bool q_menu_focus_next_prev_child(void* self, bool next) {
    return QMenu_FocusNextPrevChild((QMenu*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, bool) ```
void q_menu_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMenu_OnFocusNextPrevChild((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, bool next ```
bool q_menu_qbase_focus_next_prev_child(void* self, bool next) {
    return QMenu_QBaseFocusNextPrevChild((QMenu*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// ``` QMenu* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menu_init_style_option(void* self, void* option, void* action) {
    QMenu_InitStyleOption((QMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QStyleOptionMenuItem*, QAction*) ```
void q_menu_on_init_style_option(void* self, void (*slot)(void*, void*, void*)) {
    QMenu_OnInitStyleOption((QMenu*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMenu* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menu_qbase_init_style_option(void* self, void* option, void* action) {
    QMenu_QBaseInitStyleOption((QMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_menu_tr2(const char* s, const char* c) {
    libqt_string _str = QMenu_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_menu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMenu_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// ``` QMenu* self, QPoint* pos, QAction* at ```
void q_menu_popup2(void* self, void* pos, void* at) {
    QMenu_Popup2((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self, QPoint* pos, QAction* at ```
QAction* q_menu_exec22(void* self, void* pos, void* at) {
    return QMenu_Exec22((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QAction* actions[], QPoint* pos, QAction* at ```
QAction* q_menu_exec3(void* actions[], void* pos, void* at) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    return QMenu_Exec3(actions_list, (QPoint*)pos, (QAction*)at);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QAction* actions[], QPoint* pos, QAction* at, QWidget* parent ```
QAction* q_menu_exec4(void* actions[], void* pos, void* at, void* parent) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    return QMenu_Exec4(actions_list, (QPoint*)pos, (QAction*)at, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMenu* self ```
void q_menu_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMenu* self ```
QStyle* q_menu_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMenu* self, QStyle* style ```
void q_menu_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMenu* self ```
bool q_menu_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMenu* self ```
bool q_menu_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMenu* self ```
bool q_menu_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMenu* self ```
int64_t q_menu_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMenu* self, enum Qt__WindowModality windowModality ```
void q_menu_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMenu* self ```
bool q_menu_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMenu* self, QWidget* param1 ```
bool q_menu_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMenu* self, bool enabled ```
void q_menu_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMenu* self, bool disabled ```
void q_menu_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMenu* self, bool windowModified ```
void q_menu_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMenu* self ```
QRect* q_menu_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMenu* self ```
QRect* q_menu_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMenu* self ```
QRect* q_menu_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMenu* self ```
int32_t q_menu_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMenu* self ```
int32_t q_menu_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMenu* self ```
QPoint* q_menu_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMenu* self ```
QSize* q_menu_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMenu* self ```
QSize* q_menu_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMenu* self ```
int32_t q_menu_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMenu* self ```
int32_t q_menu_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMenu* self ```
QRect* q_menu_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMenu* self ```
QRect* q_menu_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMenu* self ```
QRegion* q_menu_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMenu* self ```
QSize* q_menu_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMenu* self ```
QSize* q_menu_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMenu* self ```
int32_t q_menu_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMenu* self ```
int32_t q_menu_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMenu* self ```
int32_t q_menu_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMenu* self ```
int32_t q_menu_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenu* self, QSize* minimumSize ```
void q_menu_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenu* self, int minw, int minh ```
void q_menu_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenu* self, QSize* maximumSize ```
void q_menu_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenu* self, int maxw, int maxh ```
void q_menu_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMenu* self, int minw ```
void q_menu_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMenu* self, int minh ```
void q_menu_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMenu* self, int maxw ```
void q_menu_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMenu* self, int maxh ```
void q_menu_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMenu* self ```
QSize* q_menu_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenu* self, QSize* sizeIncrement ```
void q_menu_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMenu* self ```
QSize* q_menu_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenu* self, QSize* baseSize ```
void q_menu_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenu* self, int basew, int baseh ```
void q_menu_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenu* self, QSize* fixedSize ```
void q_menu_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMenu* self, int w ```
void q_menu_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMenu* self, int h ```
void q_menu_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenu* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menu_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenu* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menu_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenu* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menu_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenu* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menu_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMenu* self ```
QWidget* q_menu_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMenu* self ```
QPalette* q_menu_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMenu* self, QPalette* palette ```
void q_menu_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMenu* self, enum QPalette__ColorRole backgroundRole ```
void q_menu_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMenu* self ```
int64_t q_menu_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMenu* self, enum QPalette__ColorRole foregroundRole ```
void q_menu_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMenu* self ```
int64_t q_menu_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMenu* self ```
QFont* q_menu_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMenu* self, QFont* font ```
void q_menu_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMenu* self ```
QFontMetrics* q_menu_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMenu* self ```
QFontInfo* q_menu_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMenu* self ```
QCursor* q_menu_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMenu* self, QCursor* cursor ```
void q_menu_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMenu* self ```
void q_menu_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMenu* self ```
bool q_menu_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMenu* self ```
bool q_menu_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMenu* self ```
bool q_menu_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenu* self, QBitmap* mask ```
void q_menu_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenu* self, QRegion* mask ```
void q_menu_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMenu* self ```
QRegion* q_menu_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMenu* self ```
void q_menu_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target ```
void q_menu_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenu* self ```
QPixmap* q_menu_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMenu* self ```
QGraphicsEffect* q_menu_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMenu* self, QGraphicsEffect* effect ```
void q_menu_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal ```
void q_menu_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal ```
void q_menu_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMenu* self, const char* windowTitle ```
void q_menu_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMenu* self, const char* styleSheet ```
void q_menu_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMenu* self ```
const char* q_menu_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMenu* self ```
const char* q_menu_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMenu* self ```
QIcon* q_menu_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMenu* self, const char* windowIconText ```
void q_menu_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMenu* self ```
const char* q_menu_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMenu* self, const char* windowRole ```
void q_menu_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMenu* self ```
const char* q_menu_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMenu* self, const char* filePath ```
void q_menu_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMenu* self ```
const char* q_menu_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMenu* self, double level ```
void q_menu_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMenu* self ```
double q_menu_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMenu* self ```
bool q_menu_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMenu* self, const char* toolTip ```
void q_menu_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMenu* self ```
const char* q_menu_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMenu* self, int msec ```
void q_menu_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMenu* self ```
int32_t q_menu_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMenu* self, const char* statusTip ```
void q_menu_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMenu* self ```
const char* q_menu_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMenu* self, const char* whatsThis ```
void q_menu_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMenu* self ```
const char* q_menu_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMenu* self ```
const char* q_menu_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMenu* self, const char* name ```
void q_menu_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMenu* self ```
const char* q_menu_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMenu* self, const char* description ```
void q_menu_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMenu* self, enum Qt__LayoutDirection direction ```
void q_menu_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMenu* self ```
int64_t q_menu_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMenu* self ```
void q_menu_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMenu* self, QLocale* locale ```
void q_menu_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMenu* self ```
QLocale* q_menu_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMenu* self ```
void q_menu_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMenu* self ```
bool q_menu_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMenu* self ```
bool q_menu_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenu* self ```
void q_menu_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMenu* self ```
bool q_menu_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMenu* self ```
void q_menu_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMenu* self ```
void q_menu_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenu* self, enum Qt__FocusReason reason ```
void q_menu_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMenu* self ```
int64_t q_menu_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMenu* self, enum Qt__FocusPolicy policy ```
void q_menu_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMenu* self ```
bool q_menu_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_menu_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMenu* self, QWidget* focusProxy ```
void q_menu_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMenu* self ```
QWidget* q_menu_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMenu* self ```
int64_t q_menu_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMenu* self, enum Qt__ContextMenuPolicy policy ```
void q_menu_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenu* self ```
void q_menu_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenu* self, QCursor* param1 ```
void q_menu_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMenu* self ```
void q_menu_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMenu* self ```
void q_menu_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMenu* self ```
void q_menu_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenu* self, QKeySequence* key ```
int32_t q_menu_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMenu* self, int id ```
void q_menu_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenu* self, int id ```
void q_menu_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenu* self, int id ```
void q_menu_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_menu_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_menu_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMenu* self ```
bool q_menu_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMenu* self ```
QGraphicsProxyWidget* q_menu_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self ```
void q_menu_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self ```
void q_menu_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, QRect* param1 ```
void q_menu_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, QRegion* param1 ```
void q_menu_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, QRect* param1 ```
void q_menu_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, QRegion* param1 ```
void q_menu_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMenu* self, bool hidden ```
void q_menu_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMenu* self ```
void q_menu_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMenu* self ```
void q_menu_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMenu* self ```
void q_menu_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMenu* self ```
void q_menu_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMenu* self ```
void q_menu_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMenu* self ```
void q_menu_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMenu* self ```
bool q_menu_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMenu* self ```
void q_menu_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMenu* self ```
void q_menu_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMenu* self, QWidget* param1 ```
void q_menu_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenu* self, int x, int y ```
void q_menu_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenu* self, QPoint* param1 ```
void q_menu_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenu* self, QSize* param1 ```
void q_menu_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenu* self, QRect* geometry ```
void q_menu_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMenu* self ```
char* q_menu_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMenu* self, const char* geometry ```
bool q_menu_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMenu* self ```
void q_menu_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMenu* self ```
bool q_menu_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMenu* self, QWidget* param1 ```
bool q_menu_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMenu* self ```
bool q_menu_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMenu* self ```
bool q_menu_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMenu* self ```
bool q_menu_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMenu* self ```
bool q_menu_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMenu* self ```
int64_t q_menu_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMenu* self, int state ```
void q_menu_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMenu* self, int state ```
void q_menu_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMenu* self ```
QSizePolicy* q_menu_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenu* self, QSizePolicy* sizePolicy ```
void q_menu_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenu* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_menu_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMenu* self ```
QRegion* q_menu_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenu* self, int left, int top, int right, int bottom ```
void q_menu_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenu* self, QMargins* margins ```
void q_menu_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMenu* self ```
QMargins* q_menu_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMenu* self ```
QRect* q_menu_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMenu* self ```
QLayout* q_menu_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMenu* self, QLayout* layout ```
void q_menu_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMenu* self ```
void q_menu_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenu* self, QWidget* parent ```
void q_menu_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenu* self, QWidget* parent, int f ```
void q_menu_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenu* self, int dx, int dy ```
void q_menu_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenu* self, int dx, int dy, QRect* param3 ```
void q_menu_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMenu* self ```
QWidget* q_menu_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMenu* self ```
QWidget* q_menu_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMenu* self ```
bool q_menu_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMenu* self, bool on ```
void q_menu_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMenu* self, QAction* actions[] ```
void q_menu_add_actions(void* self, void* actions[]) {
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
/// ``` QMenu* self, QAction* before, QAction* actions[] ```
void q_menu_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QMenu* self, QAction* before, QAction* action ```
void q_menu_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMenu* self ```
libqt_list /* of QAction* */ q_menu_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, const char* text ```
QAction* q_menu_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QIcon* icon, const char* text ```
QAction* q_menu_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, const char* text, QKeySequence* shortcut ```
QAction* q_menu_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_menu_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMenu* self, int typeVal ```
void q_menu_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMenu* self ```
int64_t q_menu_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenu* self, enum Qt__WindowType param1 ```
void q_menu_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMenu* self, int typeVal ```
void q_menu_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMenu* self ```
int64_t q_menu_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_menu_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenu* self, int x, int y ```
QWidget* q_menu_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenu* self, QPoint* p ```
QWidget* q_menu_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1 ```
void q_menu_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1 ```
bool q_menu_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMenu* self ```
void q_menu_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMenu* self, QWidget* child ```
bool q_menu_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMenu* self ```
bool q_menu_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMenu* self, bool enabled ```
void q_menu_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMenu* self ```
QBackingStore* q_menu_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMenu* self ```
QWindow* q_menu_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMenu* self ```
QScreen* q_menu_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMenu* self, QScreen* screen ```
void q_menu_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_menu_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMenu* self, const char* title ```
void q_menu_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMenu* self, void (*slot)(QWidget*, const char*) ```
void q_menu_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMenu* self, void (*slot)(QWidget*, QIcon*) ```
void q_menu_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMenu* self, const char* iconText ```
void q_menu_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMenu* self, void (*slot)(QWidget*, const char*) ```
void q_menu_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMenu* self, void (*slot)(QWidget*, QPoint*) ```
void q_menu_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMenu* self ```
int64_t q_menu_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMenu* self, int hints ```
void q_menu_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset ```
void q_menu_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menu_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset ```
void q_menu_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenu* self, QRect* rectangle ```
QPixmap* q_menu_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal, int flags ```
void q_menu_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenu* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_menu_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenu* self, int id, bool enable ```
void q_menu_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenu* self, int id, bool enable ```
void q_menu_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenu* self, enum Qt__WindowType param1, bool on ```
void q_menu_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1, bool on ```
void q_menu_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_menu_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_menu_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMenu* self ```
const char* q_menu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMenu* self, const char* name ```
void q_menu_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMenu* self ```
bool q_menu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMenu* self ```
bool q_menu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMenu* self ```
bool q_menu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMenu* self ```
bool q_menu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMenu* self, bool b ```
bool q_menu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMenu* self ```
QThread* q_menu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMenu* self, QThread* thread ```
void q_menu_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenu* self, int interval ```
int32_t q_menu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMenu* self, int id ```
void q_menu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMenu* self ```
libqt_list /* of QObject* */ q_menu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMenu* self, QObject* filterObj ```
void q_menu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMenu* self, QObject* obj ```
void q_menu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_menu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenu* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_menu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_menu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_menu_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMenu* self ```
void q_menu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMenu* self ```
void q_menu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMenu* self, const char* name, QVariant* value ```
bool q_menu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMenu* self, const char* name ```
QVariant* q_menu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMenu* self ```
const char** q_menu_dynamic_property_names(void* self) {
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
/// ``` QMenu* self ```
QBindingStorage* q_menu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenu* self ```
QBindingStorage* q_menu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self ```
void q_menu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMenu* self, void (*slot)(QObject*) ```
void q_menu_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMenu* self ```
QObject* q_menu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMenu* self, const char* classname ```
bool q_menu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMenu* self ```
void q_menu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenu* self, int interval, enum Qt__TimerType timerType ```
int32_t q_menu_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menu_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenu* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menu_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self, QObject* param1 ```
void q_menu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMenu* self, void (*slot)(QObject*, QObject*) ```
void q_menu_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMenu* self ```
bool q_menu_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMenu* self ```
int32_t q_menu_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMenu* self ```
int32_t q_menu_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMenu* self ```
int32_t q_menu_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMenu* self ```
int32_t q_menu_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMenu* self ```
int32_t q_menu_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMenu* self ```
int32_t q_menu_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMenu* self ```
double q_menu_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMenu* self ```
double q_menu_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMenu* self ```
int32_t q_menu_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMenu* self ```
int32_t q_menu_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_menu_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_dev_type(void* self) {
    return QMenu_DevType((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_dev_type(void* self) {
    return QMenu_QBaseDevType((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_dev_type(void* self, int32_t (*slot)()) {
    QMenu_OnDevType((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, bool visible ```
void q_menu_set_visible(void* self, bool visible) {
    QMenu_SetVisible((QMenu*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, bool visible ```
void q_menu_qbase_set_visible(void* self, bool visible) {
    QMenu_QBaseSetVisible((QMenu*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, bool) ```
void q_menu_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMenu_OnSetVisible((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QSize* q_menu_minimum_size_hint(void* self) {
    return QMenu_MinimumSizeHint((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QSize* q_menu_qbase_minimum_size_hint(void* self) {
    return QMenu_QBaseMinimumSizeHint((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QSize* (*slot)() ```
void q_menu_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMenu_OnMinimumSizeHint((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, int param1 ```
int32_t q_menu_height_for_width(void* self, int param1) {
    return QMenu_HeightForWidth((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, int param1 ```
int32_t q_menu_qbase_height_for_width(void* self, int param1) {
    return QMenu_QBaseHeightForWidth((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, int) ```
void q_menu_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMenu_OnHeightForWidth((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_has_height_for_width(void* self) {
    return QMenu_HasHeightForWidth((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_has_height_for_width(void* self) {
    return QMenu_QBaseHasHeightForWidth((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_has_height_for_width(void* self, bool (*slot)()) {
    QMenu_OnHasHeightForWidth((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QPaintEngine* q_menu_paint_engine(void* self) {
    return QMenu_PaintEngine((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QPaintEngine* q_menu_qbase_paint_engine(void* self) {
    return QMenu_QBasePaintEngine((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPaintEngine* (*slot)() ```
void q_menu_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMenu_OnPaintEngine((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMouseEvent* event ```
void q_menu_mouse_double_click_event(void* self, void* event) {
    QMenu_MouseDoubleClickEvent((QMenu*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMouseEvent* event ```
void q_menu_qbase_mouse_double_click_event(void* self, void* event) {
    QMenu_QBaseMouseDoubleClickEvent((QMenu*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseDoubleClickEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QKeyEvent* event ```
void q_menu_key_release_event(void* self, void* event) {
    QMenu_KeyReleaseEvent((QMenu*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QKeyEvent* event ```
void q_menu_qbase_key_release_event(void* self, void* event) {
    QMenu_QBaseKeyReleaseEvent((QMenu*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QKeyEvent*) ```
void q_menu_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnKeyReleaseEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_focus_in_event(void* self, void* event) {
    QMenu_FocusInEvent((QMenu*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_qbase_focus_in_event(void* self, void* event) {
    QMenu_QBaseFocusInEvent((QMenu*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QFocusEvent*) ```
void q_menu_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnFocusInEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_focus_out_event(void* self, void* event) {
    QMenu_FocusOutEvent((QMenu*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_qbase_focus_out_event(void* self, void* event) {
    QMenu_QBaseFocusOutEvent((QMenu*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QFocusEvent*) ```
void q_menu_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnFocusOutEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMoveEvent* event ```
void q_menu_move_event(void* self, void* event) {
    QMenu_MoveEvent((QMenu*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMoveEvent* event ```
void q_menu_qbase_move_event(void* self, void* event) {
    QMenu_QBaseMoveEvent((QMenu*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMoveEvent*) ```
void q_menu_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMoveEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QResizeEvent* event ```
void q_menu_resize_event(void* self, void* event) {
    QMenu_ResizeEvent((QMenu*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QResizeEvent* event ```
void q_menu_qbase_resize_event(void* self, void* event) {
    QMenu_QBaseResizeEvent((QMenu*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QResizeEvent*) ```
void q_menu_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnResizeEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QCloseEvent* event ```
void q_menu_close_event(void* self, void* event) {
    QMenu_CloseEvent((QMenu*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QCloseEvent* event ```
void q_menu_qbase_close_event(void* self, void* event) {
    QMenu_QBaseCloseEvent((QMenu*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QCloseEvent*) ```
void q_menu_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnCloseEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QContextMenuEvent* event ```
void q_menu_context_menu_event(void* self, void* event) {
    QMenu_ContextMenuEvent((QMenu*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QContextMenuEvent* event ```
void q_menu_qbase_context_menu_event(void* self, void* event) {
    QMenu_QBaseContextMenuEvent((QMenu*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QContextMenuEvent*) ```
void q_menu_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnContextMenuEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QTabletEvent* event ```
void q_menu_tablet_event(void* self, void* event) {
    QMenu_TabletEvent((QMenu*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QTabletEvent* event ```
void q_menu_qbase_tablet_event(void* self, void* event) {
    QMenu_QBaseTabletEvent((QMenu*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QTabletEvent*) ```
void q_menu_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnTabletEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragEnterEvent* event ```
void q_menu_drag_enter_event(void* self, void* event) {
    QMenu_DragEnterEvent((QMenu*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragEnterEvent* event ```
void q_menu_qbase_drag_enter_event(void* self, void* event) {
    QMenu_QBaseDragEnterEvent((QMenu*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragEnterEvent*) ```
void q_menu_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragEnterEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragMoveEvent* event ```
void q_menu_drag_move_event(void* self, void* event) {
    QMenu_DragMoveEvent((QMenu*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragMoveEvent* event ```
void q_menu_qbase_drag_move_event(void* self, void* event) {
    QMenu_QBaseDragMoveEvent((QMenu*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragMoveEvent*) ```
void q_menu_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragMoveEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragLeaveEvent* event ```
void q_menu_drag_leave_event(void* self, void* event) {
    QMenu_DragLeaveEvent((QMenu*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragLeaveEvent* event ```
void q_menu_qbase_drag_leave_event(void* self, void* event) {
    QMenu_QBaseDragLeaveEvent((QMenu*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragLeaveEvent*) ```
void q_menu_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragLeaveEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDropEvent* event ```
void q_menu_drop_event(void* self, void* event) {
    QMenu_DropEvent((QMenu*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDropEvent* event ```
void q_menu_qbase_drop_event(void* self, void* event) {
    QMenu_QBaseDropEvent((QMenu*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDropEvent*) ```
void q_menu_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDropEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QShowEvent* event ```
void q_menu_show_event(void* self, void* event) {
    QMenu_ShowEvent((QMenu*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QShowEvent* event ```
void q_menu_qbase_show_event(void* self, void* event) {
    QMenu_QBaseShowEvent((QMenu*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QShowEvent*) ```
void q_menu_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnShowEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, const char* eventType, void* message, intptr_t* result ```
bool q_menu_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenu_NativeEvent((QMenu*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, const char* eventType, void* message, intptr_t* result ```
bool q_menu_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenu_QBaseNativeEvent((QMenu*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, const char*, void*, intptr_t*) ```
void q_menu_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMenu_OnNativeEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menu_metric(void* self, int64_t param1) {
    return QMenu_Metric((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menu_qbase_metric(void* self, int64_t param1) {
    return QMenu_QBaseMetric((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, enum QPaintDevice__PaintDeviceMetric) ```
void q_menu_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMenu_OnMetric((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_init_painter(void* self, void* painter) {
    QMenu_InitPainter((QMenu*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_qbase_init_painter(void* self, void* painter) {
    QMenu_QBaseInitPainter((QMenu*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QPainter*) ```
void q_menu_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMenu_OnInitPainter((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QPoint* offset ```
QPaintDevice* q_menu_redirected(void* self, void* offset) {
    return QMenu_Redirected((QMenu*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QPoint* offset ```
QPaintDevice* q_menu_qbase_redirected(void* self, void* offset) {
    return QMenu_QBaseRedirected((QMenu*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPaintDevice* (*slot)(QMenu*, QPoint*) ```
void q_menu_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMenu_OnRedirected((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QPainter* q_menu_shared_painter(void* self) {
    return QMenu_SharedPainter((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QPainter* q_menu_qbase_shared_painter(void* self) {
    return QMenu_QBaseSharedPainter((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPainter* (*slot)() ```
void q_menu_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMenu_OnSharedPainter((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QInputMethodEvent* param1 ```
void q_menu_input_method_event(void* self, void* param1) {
    QMenu_InputMethodEvent((QMenu*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QInputMethodEvent* param1 ```
void q_menu_qbase_input_method_event(void* self, void* param1) {
    QMenu_QBaseInputMethodEvent((QMenu*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QInputMethodEvent*) ```
void q_menu_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnInputMethodEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menu_input_method_query(void* self, int64_t param1) {
    return QMenu_InputMethodQuery((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menu_qbase_input_method_query(void* self, int64_t param1) {
    return QMenu_QBaseInputMethodQuery((QMenu*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QVariant* (*slot)(QMenu*, enum Qt__InputMethodQuery) ```
void q_menu_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMenu_OnInputMethodQuery((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QObject* watched, QEvent* event ```
bool q_menu_event_filter(void* self, void* watched, void* event) {
    return QMenu_EventFilter((QMenu*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QObject* watched, QEvent* event ```
bool q_menu_qbase_event_filter(void* self, void* watched, void* event) {
    return QMenu_QBaseEventFilter((QMenu*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QObject*, QEvent*) ```
void q_menu_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMenu_OnEventFilter((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QChildEvent* event ```
void q_menu_child_event(void* self, void* event) {
    QMenu_ChildEvent((QMenu*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QChildEvent* event ```
void q_menu_qbase_child_event(void* self, void* event) {
    QMenu_QBaseChildEvent((QMenu*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QChildEvent*) ```
void q_menu_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnChildEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QEvent* event ```
void q_menu_custom_event(void* self, void* event) {
    QMenu_CustomEvent((QMenu*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QEvent* event ```
void q_menu_qbase_custom_event(void* self, void* event) {
    QMenu_QBaseCustomEvent((QMenu*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnCustomEvent((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_connect_notify(void* self, void* signal) {
    QMenu_ConnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_qbase_connect_notify(void* self, void* signal) {
    QMenu_QBaseConnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMenu_OnConnectNotify((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_disconnect_notify(void* self, void* signal) {
    QMenu_DisconnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_qbase_disconnect_notify(void* self, void* signal) {
    QMenu_QBaseDisconnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDisconnectNotify((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_update_micro_focus(void* self) {
    QMenu_UpdateMicroFocus((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_update_micro_focus(void* self) {
    QMenu_QBaseUpdateMicroFocus((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_update_micro_focus(void* self, void (*slot)()) {
    QMenu_OnUpdateMicroFocus((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_create(void* self) {
    QMenu_Create((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_create(void* self) {
    QMenu_QBaseCreate((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_create(void* self, void (*slot)()) {
    QMenu_OnCreate((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_destroy(void* self) {
    QMenu_Destroy((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_destroy(void* self) {
    QMenu_QBaseDestroy((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_destroy(void* self, void (*slot)()) {
    QMenu_OnDestroy((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_focus_next_child(void* self) {
    return QMenu_FocusNextChild((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_focus_next_child(void* self) {
    return QMenu_QBaseFocusNextChild((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_focus_next_child(void* self, bool (*slot)()) {
    QMenu_OnFocusNextChild((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_focus_previous_child(void* self) {
    return QMenu_FocusPreviousChild((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_focus_previous_child(void* self) {
    return QMenu_QBaseFocusPreviousChild((QMenu*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_focus_previous_child(void* self, bool (*slot)()) {
    QMenu_OnFocusPreviousChild((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QObject* q_menu_sender(void* self) {
    return QMenu_Sender((QMenu*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QObject* q_menu_qbase_sender(void* self) {
    return QMenu_QBaseSender((QMenu*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QObject* (*slot)() ```
void q_menu_on_sender(void* self, QObject* (*slot)()) {
    QMenu_OnSender((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_sender_signal_index(void* self) {
    return QMenu_SenderSignalIndex((QMenu*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_sender_signal_index(void* self) {
    return QMenu_QBaseSenderSignalIndex((QMenu*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMenu_OnSenderSignalIndex((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, const char* signal ```
int32_t q_menu_receivers(void* self, const char* signal) {
    return QMenu_Receivers((QMenu*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, const char* signal ```
int32_t q_menu_qbase_receivers(void* self, const char* signal) {
    return QMenu_QBaseReceivers((QMenu*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, const char*) ```
void q_menu_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMenu_OnReceivers((QMenu*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
bool q_menu_is_signal_connected(void* self, void* signal) {
    return QMenu_IsSignalConnected((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
bool q_menu_qbase_is_signal_connected(void* self, void* signal) {
    return QMenu_QBaseIsSignalConnected((QMenu*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMenu_OnIsSignalConnected((QMenu*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMenu* self ```
void q_menu_delete(void* self) {
    QMenu_Delete((QMenu*)(self));
}