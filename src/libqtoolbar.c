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
#include "libqtoolbar.hpp"
#include "libqtoolbar.h"

/// https://doc.qt.io/qt-6/qtoolbar.html

/// q_toolbar_new constructs a new QToolBar object.
///
/// ``` QWidget* parent ```
QToolBar* q_toolbar_new(void* parent) {
    return QToolBar_new((QWidget*)parent);
}

/// q_toolbar_new2 constructs a new QToolBar object.
///
/// ``` const char* title ```
QToolBar* q_toolbar_new2(const char* title) {
    return QToolBar_new2(qstring(title));
}

/// q_toolbar_new3 constructs a new QToolBar object.
///
///
QToolBar* q_toolbar_new3() {
    return QToolBar_new3();
}

/// q_toolbar_new4 constructs a new QToolBar object.
///
/// ``` const char* title, QWidget* parent ```
QToolBar* q_toolbar_new4(const char* title, void* parent) {
    return QToolBar_new4(qstring(title), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QToolBar* self ```
QMetaObject* q_toolbar_meta_object(void* self) {
    return QToolBar_MetaObject((QToolBar*)self);
}

/// ``` QToolBar* self, const char* param1 ```
void* q_toolbar_metacast(void* self, const char* param1) {
    return QToolBar_Metacast((QToolBar*)self, param1);
}

/// ``` QToolBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBar_Metacall((QToolBar*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, int32_t (*slot)(QToolBar*, enum QMetaObject__Call, int, void*) ```
void q_toolbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QToolBar_OnMetacall((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_toolbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBar_QBaseMetacall((QToolBar*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_toolbar_tr(const char* s) {
    libqt_string _str = QToolBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setMovable)
///
/// ``` QToolBar* self, bool movable ```
void q_toolbar_set_movable(void* self, bool movable) {
    QToolBar_SetMovable((QToolBar*)self, movable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#isMovable)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_movable(void* self) {
    return QToolBar_IsMovable((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setAllowedAreas)
///
/// ``` QToolBar* self, int areas ```
void q_toolbar_set_allowed_areas(void* self, int64_t areas) {
    QToolBar_SetAllowedAreas((QToolBar*)self, areas);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#allowedAreas)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_allowed_areas(void* self) {
    return QToolBar_AllowedAreas((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#isAreaAllowed)
///
/// ``` QToolBar* self, enum Qt__ToolBarArea area ```
bool q_toolbar_is_area_allowed(void* self, int64_t area) {
    return QToolBar_IsAreaAllowed((QToolBar*)self, area);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setOrientation)
///
/// ``` QToolBar* self, enum Qt__Orientation orientation ```
void q_toolbar_set_orientation(void* self, int64_t orientation) {
    QToolBar_SetOrientation((QToolBar*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#orientation)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_orientation(void* self) {
    return QToolBar_Orientation((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#clear)
///
/// ``` QToolBar* self ```
void q_toolbar_clear(void* self) {
    QToolBar_Clear((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#addSeparator)
///
/// ``` QToolBar* self ```
QAction* q_toolbar_add_separator(void* self) {
    return QToolBar_AddSeparator((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#insertSeparator)
///
/// ``` QToolBar* self, QAction* before ```
QAction* q_toolbar_insert_separator(void* self, void* before) {
    return QToolBar_InsertSeparator((QToolBar*)self, (QAction*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#addWidget)
///
/// ``` QToolBar* self, QWidget* widget ```
QAction* q_toolbar_add_widget(void* self, void* widget) {
    return QToolBar_AddWidget((QToolBar*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#insertWidget)
///
/// ``` QToolBar* self, QAction* before, QWidget* widget ```
QAction* q_toolbar_insert_widget(void* self, void* before, void* widget) {
    return QToolBar_InsertWidget((QToolBar*)self, (QAction*)before, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#actionGeometry)
///
/// ``` QToolBar* self, QAction* action ```
QRect* q_toolbar_action_geometry(void* self, void* action) {
    return QToolBar_ActionGeometry((QToolBar*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#actionAt)
///
/// ``` QToolBar* self, QPoint* p ```
QAction* q_toolbar_action_at(void* self, void* p) {
    return QToolBar_ActionAt((QToolBar*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#actionAt)
///
/// ``` QToolBar* self, int x, int y ```
QAction* q_toolbar_action_at2(void* self, int x, int y) {
    return QToolBar_ActionAt2((QToolBar*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#toggleViewAction)
///
/// ``` QToolBar* self ```
QAction* q_toolbar_toggle_view_action(void* self) {
    return QToolBar_ToggleViewAction((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#iconSize)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_icon_size(void* self) {
    return QToolBar_IconSize((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#toolButtonStyle)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_tool_button_style(void* self) {
    return QToolBar_ToolButtonStyle((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#widgetForAction)
///
/// ``` QToolBar* self, QAction* action ```
QWidget* q_toolbar_widget_for_action(void* self, void* action) {
    return QToolBar_WidgetForAction((QToolBar*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#isFloatable)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_floatable(void* self) {
    return QToolBar_IsFloatable((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setFloatable)
///
/// ``` QToolBar* self, bool floatable ```
void q_toolbar_set_floatable(void* self, bool floatable) {
    QToolBar_SetFloatable((QToolBar*)self, floatable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#isFloating)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_floating(void* self) {
    return QToolBar_IsFloating((QToolBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setIconSize)
///
/// ``` QToolBar* self, QSize* iconSize ```
void q_toolbar_set_icon_size(void* self, void* iconSize) {
    QToolBar_SetIconSize((QToolBar*)self, (QSize*)iconSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#setToolButtonStyle)
///
/// ``` QToolBar* self, enum Qt__ToolButtonStyle toolButtonStyle ```
void q_toolbar_set_tool_button_style(void* self, int64_t toolButtonStyle) {
    QToolBar_SetToolButtonStyle((QToolBar*)self, toolButtonStyle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#actionTriggered)
///
/// ``` QToolBar* self, QAction* action ```
void q_toolbar_action_triggered(void* self, void* action) {
    QToolBar_ActionTriggered((QToolBar*)self, (QAction*)action);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, QAction*) ```
void q_toolbar_on_action_triggered(void* self, void (*slot)(void*, void*)) {
    QToolBar_Connect_ActionTriggered((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#movableChanged)
///
/// ``` QToolBar* self, bool movable ```
void q_toolbar_movable_changed(void* self, bool movable) {
    QToolBar_MovableChanged((QToolBar*)self, movable);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, bool) ```
void q_toolbar_on_movable_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_MovableChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#allowedAreasChanged)
///
/// ``` QToolBar* self, int allowedAreas ```
void q_toolbar_allowed_areas_changed(void* self, int64_t allowedAreas) {
    QToolBar_AllowedAreasChanged((QToolBar*)self, allowedAreas);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, int) ```
void q_toolbar_on_allowed_areas_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_AllowedAreasChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#orientationChanged)
///
/// ``` QToolBar* self, enum Qt__Orientation orientation ```
void q_toolbar_orientation_changed(void* self, int64_t orientation) {
    QToolBar_OrientationChanged((QToolBar*)self, orientation);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, enum Qt__Orientation) ```
void q_toolbar_on_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_OrientationChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#iconSizeChanged)
///
/// ``` QToolBar* self, QSize* iconSize ```
void q_toolbar_icon_size_changed(void* self, void* iconSize) {
    QToolBar_IconSizeChanged((QToolBar*)self, (QSize*)iconSize);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, QSize*) ```
void q_toolbar_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QToolBar_Connect_IconSizeChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#toolButtonStyleChanged)
///
/// ``` QToolBar* self, enum Qt__ToolButtonStyle toolButtonStyle ```
void q_toolbar_tool_button_style_changed(void* self, int64_t toolButtonStyle) {
    QToolBar_ToolButtonStyleChanged((QToolBar*)self, toolButtonStyle);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, enum Qt__ToolButtonStyle) ```
void q_toolbar_on_tool_button_style_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_ToolButtonStyleChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#topLevelChanged)
///
/// ``` QToolBar* self, bool topLevel ```
void q_toolbar_top_level_changed(void* self, bool topLevel) {
    QToolBar_TopLevelChanged((QToolBar*)self, topLevel);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, bool) ```
void q_toolbar_on_top_level_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_TopLevelChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#visibilityChanged)
///
/// ``` QToolBar* self, bool visible ```
void q_toolbar_visibility_changed(void* self, bool visible) {
    QToolBar_VisibilityChanged((QToolBar*)self, visible);
}

/// ``` QToolBar* self, void (*slot)(QToolBar*, bool) ```
void q_toolbar_on_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_VisibilityChanged((QToolBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#actionEvent)
///
/// ``` QToolBar* self, QActionEvent* event ```
void q_toolbar_action_event(void* self, void* event) {
    QToolBar_ActionEvent((QToolBar*)self, (QActionEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QActionEvent*) ```
void q_toolbar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnActionEvent((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, QActionEvent* event ```
void q_toolbar_qbase_action_event(void* self, void* event) {
    QToolBar_QBaseActionEvent((QToolBar*)self, (QActionEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#changeEvent)
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_change_event(void* self, void* event) {
    QToolBar_ChangeEvent((QToolBar*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QEvent*) ```
void q_toolbar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnChangeEvent((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_qbase_change_event(void* self, void* event) {
    QToolBar_QBaseChangeEvent((QToolBar*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#paintEvent)
///
/// ``` QToolBar* self, QPaintEvent* event ```
void q_toolbar_paint_event(void* self, void* event) {
    QToolBar_PaintEvent((QToolBar*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QPaintEvent*) ```
void q_toolbar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnPaintEvent((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, QPaintEvent* event ```
void q_toolbar_qbase_paint_event(void* self, void* event) {
    QToolBar_QBasePaintEvent((QToolBar*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#event)
///
/// ``` QToolBar* self, QEvent* event ```
bool q_toolbar_event(void* self, void* event) {
    return QToolBar_Event((QToolBar*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, bool (*slot)(QToolBar*, QEvent*) ```
void q_toolbar_on_event(void* self, bool (*slot)(void*, void*)) {
    QToolBar_OnEvent((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, QEvent* event ```
bool q_toolbar_qbase_event(void* self, void* event) {
    return QToolBar_QBaseEvent((QToolBar*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbar.html#initStyleOption)
///
/// ``` QToolBar* self, QStyleOptionToolBar* option ```
void q_toolbar_init_style_option(void* self, void* option) {
    QToolBar_InitStyleOption((QToolBar*)self, (QStyleOptionToolBar*)option);
}

/// Allows for overriding the related default method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QStyleOptionToolBar*) ```
void q_toolbar_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInitStyleOption((QToolBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBar* self, QStyleOptionToolBar* option ```
void q_toolbar_qbase_init_style_option(void* self, void* option) {
    QToolBar_QBaseInitStyleOption((QToolBar*)self, (QStyleOptionToolBar*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_toolbar_tr2(const char* s, const char* c) {
    libqt_string _str = QToolBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_toolbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QToolBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QToolBar* self ```
uintptr_t q_toolbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QToolBar* self ```
void q_toolbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QToolBar* self ```
uintptr_t q_toolbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QToolBar* self ```
uintptr_t q_toolbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QToolBar* self ```
QStyle* q_toolbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QToolBar* self, QStyle* style ```
void q_toolbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QToolBar* self, enum Qt__WindowModality windowModality ```
void q_toolbar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QToolBar* self, QWidget* param1 ```
bool q_toolbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QToolBar* self, bool enabled ```
void q_toolbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QToolBar* self, bool disabled ```
void q_toolbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QToolBar* self, bool windowModified ```
void q_toolbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QToolBar* self ```
QPoint* q_toolbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QToolBar* self ```
QRegion* q_toolbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolBar* self, QSize* minimumSize ```
void q_toolbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QToolBar* self, int minw, int minh ```
void q_toolbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolBar* self, QSize* maximumSize ```
void q_toolbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QToolBar* self, int maxw, int maxh ```
void q_toolbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QToolBar* self, int minw ```
void q_toolbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QToolBar* self, int minh ```
void q_toolbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QToolBar* self, int maxw ```
void q_toolbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QToolBar* self, int maxh ```
void q_toolbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolBar* self, QSize* sizeIncrement ```
void q_toolbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QToolBar* self, int w, int h ```
void q_toolbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QToolBar* self ```
QSize* q_toolbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolBar* self, QSize* baseSize ```
void q_toolbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QToolBar* self, int basew, int baseh ```
void q_toolbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolBar* self, QSize* fixedSize ```
void q_toolbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QToolBar* self, int w, int h ```
void q_toolbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QToolBar* self, int w ```
void q_toolbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QToolBar* self, int h ```
void q_toolbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolBar* self, QPointF* param1 ```
QPointF* q_toolbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QToolBar* self, QPoint* param1 ```
QPoint* q_toolbar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolBar* self, QPointF* param1 ```
QPointF* q_toolbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QToolBar* self, QPoint* param1 ```
QPoint* q_toolbar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolBar* self, QPointF* param1 ```
QPointF* q_toolbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QToolBar* self, QPoint* param1 ```
QPoint* q_toolbar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolBar* self, QPointF* param1 ```
QPointF* q_toolbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QToolBar* self, QPoint* param1 ```
QPoint* q_toolbar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QToolBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_toolbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QToolBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_toolbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QToolBar* self ```
QPalette* q_toolbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QToolBar* self, QPalette* palette ```
void q_toolbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QToolBar* self, enum QPalette__ColorRole backgroundRole ```
void q_toolbar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QToolBar* self, enum QPalette__ColorRole foregroundRole ```
void q_toolbar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QToolBar* self ```
QFont* q_toolbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QToolBar* self, QFont* font ```
void q_toolbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QToolBar* self ```
QFontMetrics* q_toolbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QToolBar* self ```
QFontInfo* q_toolbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QToolBar* self ```
QCursor* q_toolbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QToolBar* self, QCursor* cursor ```
void q_toolbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QToolBar* self ```
void q_toolbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QToolBar* self, bool enable ```
void q_toolbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QToolBar* self ```
bool q_toolbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QToolBar* self ```
bool q_toolbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QToolBar* self, bool enable ```
void q_toolbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QToolBar* self ```
bool q_toolbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolBar* self, QBitmap* mask ```
void q_toolbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QToolBar* self, QRegion* mask ```
void q_toolbar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QToolBar* self ```
QRegion* q_toolbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QToolBar* self ```
void q_toolbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPaintDevice* target ```
void q_toolbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPainter* painter ```
void q_toolbar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolBar* self ```
QPixmap* q_toolbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QToolBar* self ```
QGraphicsEffect* q_toolbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QToolBar* self, QGraphicsEffect* effect ```
void q_toolbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolBar* self, enum Qt__GestureType typeVal ```
void q_toolbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QToolBar* self, enum Qt__GestureType typeVal ```
void q_toolbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QToolBar* self, const char* windowTitle ```
void q_toolbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QToolBar* self, const char* styleSheet ```
void q_toolbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QToolBar* self ```
const char* q_toolbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QToolBar* self ```
const char* q_toolbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QToolBar* self, QIcon* icon ```
void q_toolbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QToolBar* self ```
QIcon* q_toolbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QToolBar* self, const char* windowIconText ```
void q_toolbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QToolBar* self ```
const char* q_toolbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QToolBar* self, const char* windowRole ```
void q_toolbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QToolBar* self ```
const char* q_toolbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QToolBar* self, const char* filePath ```
void q_toolbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QToolBar* self ```
const char* q_toolbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QToolBar* self, double level ```
void q_toolbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QToolBar* self ```
double q_toolbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QToolBar* self, const char* toolTip ```
void q_toolbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QToolBar* self ```
const char* q_toolbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QToolBar* self, int msec ```
void q_toolbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QToolBar* self, const char* statusTip ```
void q_toolbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QToolBar* self ```
const char* q_toolbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QToolBar* self, const char* whatsThis ```
void q_toolbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QToolBar* self ```
const char* q_toolbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QToolBar* self ```
const char* q_toolbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QToolBar* self, const char* name ```
void q_toolbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QToolBar* self ```
const char* q_toolbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QToolBar* self, const char* description ```
void q_toolbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QToolBar* self, enum Qt__LayoutDirection direction ```
void q_toolbar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QToolBar* self ```
void q_toolbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QToolBar* self, QLocale* locale ```
void q_toolbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QToolBar* self ```
QLocale* q_toolbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QToolBar* self ```
void q_toolbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolBar* self ```
void q_toolbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QToolBar* self ```
void q_toolbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QToolBar* self ```
void q_toolbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QToolBar* self, enum Qt__FocusReason reason ```
void q_toolbar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QToolBar* self, enum Qt__FocusPolicy policy ```
void q_toolbar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QToolBar* self ```
bool q_toolbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_toolbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QToolBar* self, QWidget* focusProxy ```
void q_toolbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QToolBar* self, enum Qt__ContextMenuPolicy policy ```
void q_toolbar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolBar* self ```
void q_toolbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QToolBar* self, QCursor* param1 ```
void q_toolbar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QToolBar* self ```
void q_toolbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QToolBar* self ```
void q_toolbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QToolBar* self ```
void q_toolbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolBar* self, QKeySequence* key ```
int32_t q_toolbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QToolBar* self, int id ```
void q_toolbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolBar* self, int id ```
void q_toolbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolBar* self, int id ```
void q_toolbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_toolbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_toolbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QToolBar* self ```
bool q_toolbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QToolBar* self, bool enable ```
void q_toolbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QToolBar* self ```
QGraphicsProxyWidget* q_toolbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBar* self ```
void q_toolbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBar* self ```
void q_toolbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBar* self, int x, int y, int w, int h ```
void q_toolbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBar* self, QRect* param1 ```
void q_toolbar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QToolBar* self, QRegion* param1 ```
void q_toolbar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBar* self, int x, int y, int w, int h ```
void q_toolbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBar* self, QRect* param1 ```
void q_toolbar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QToolBar* self, QRegion* param1 ```
void q_toolbar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QToolBar* self, bool hidden ```
void q_toolbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QToolBar* self ```
void q_toolbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QToolBar* self ```
void q_toolbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QToolBar* self ```
void q_toolbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QToolBar* self ```
void q_toolbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QToolBar* self ```
void q_toolbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QToolBar* self ```
void q_toolbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QToolBar* self ```
bool q_toolbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QToolBar* self ```
void q_toolbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QToolBar* self ```
void q_toolbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QToolBar* self, QWidget* param1 ```
void q_toolbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolBar* self, int x, int y ```
void q_toolbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QToolBar* self, QPoint* param1 ```
void q_toolbar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolBar* self, int w, int h ```
void q_toolbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QToolBar* self, QSize* param1 ```
void q_toolbar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolBar* self, int x, int y, int w, int h ```
void q_toolbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QToolBar* self, QRect* geometry ```
void q_toolbar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QToolBar* self ```
char* q_toolbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QToolBar* self, const char* geometry ```
bool q_toolbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QToolBar* self ```
void q_toolbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QToolBar* self, QWidget* param1 ```
bool q_toolbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QToolBar* self, int state ```
void q_toolbar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QToolBar* self, int state ```
void q_toolbar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QToolBar* self ```
QSizePolicy* q_toolbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolBar* self, QSizePolicy* sizePolicy ```
void q_toolbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QToolBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_toolbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QToolBar* self ```
QRegion* q_toolbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolBar* self, int left, int top, int right, int bottom ```
void q_toolbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QToolBar* self, QMargins* margins ```
void q_toolbar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QToolBar* self ```
QMargins* q_toolbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QToolBar* self ```
QRect* q_toolbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QToolBar* self ```
QLayout* q_toolbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QToolBar* self, QLayout* layout ```
void q_toolbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QToolBar* self ```
void q_toolbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolBar* self, QWidget* parent ```
void q_toolbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QToolBar* self, QWidget* parent, int f ```
void q_toolbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolBar* self, int dx, int dy ```
void q_toolbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QToolBar* self, int dx, int dy, QRect* param3 ```
void q_toolbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QToolBar* self ```
bool q_toolbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QToolBar* self, bool on ```
void q_toolbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBar* self, QAction* action ```
void q_toolbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QToolBar* self, QAction* actions[] ```
void q_toolbar_add_actions(void* self, void* actions[]) {
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
/// ``` QToolBar* self, QAction* before, QAction* actions[] ```
void q_toolbar_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QToolBar* self, QAction* before, QAction* action ```
void q_toolbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QToolBar* self, QAction* action ```
void q_toolbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QToolBar* self ```
libqt_list /* of QAction* */ q_toolbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBar* self, const char* text ```
QAction* q_toolbar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBar* self, QIcon* icon, const char* text ```
QAction* q_toolbar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_toolbar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QToolBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_toolbar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QToolBar* self ```
QWidget* q_toolbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QToolBar* self, int typeVal ```
void q_toolbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolBar* self, enum Qt__WindowType param1 ```
void q_toolbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QToolBar* self, int typeVal ```
void q_toolbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_toolbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolBar* self, int x, int y ```
QWidget* q_toolbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QToolBar* self, QPoint* p ```
QWidget* q_toolbar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolBar* self, enum Qt__WidgetAttribute param1 ```
void q_toolbar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QToolBar* self, enum Qt__WidgetAttribute param1 ```
bool q_toolbar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QToolBar* self ```
void q_toolbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QToolBar* self, QWidget* child ```
bool q_toolbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QToolBar* self ```
bool q_toolbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QToolBar* self, bool enabled ```
void q_toolbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QToolBar* self ```
QBackingStore* q_toolbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QToolBar* self ```
QWindow* q_toolbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QToolBar* self ```
QScreen* q_toolbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QToolBar* self, QScreen* screen ```
void q_toolbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_toolbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QToolBar* self, const char* title ```
void q_toolbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QToolBar* self, void (*slot)(QWidget*, const char*) ```
void q_toolbar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QToolBar* self, QIcon* icon ```
void q_toolbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QToolBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_toolbar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QToolBar* self, const char* iconText ```
void q_toolbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QToolBar* self, void (*slot)(QWidget*, const char*) ```
void q_toolbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QToolBar* self, QPoint* pos ```
void q_toolbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QToolBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_toolbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QToolBar* self ```
int64_t q_toolbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QToolBar* self, int hints ```
void q_toolbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_toolbar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPainter* painter, QPoint* targetOffset ```
void q_toolbar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_toolbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QToolBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_toolbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QToolBar* self, QRect* rectangle ```
QPixmap* q_toolbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QToolBar* self, enum Qt__GestureType typeVal, int flags ```
void q_toolbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QToolBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_toolbar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QToolBar* self, int id, bool enable ```
void q_toolbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QToolBar* self, int id, bool enable ```
void q_toolbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QToolBar* self, enum Qt__WindowType param1, bool on ```
void q_toolbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QToolBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_toolbar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_toolbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_toolbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QToolBar* self ```
const char* q_toolbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QToolBar* self, const char* name ```
void q_toolbar_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QToolBar* self ```
bool q_toolbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QToolBar* self ```
bool q_toolbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QToolBar* self, bool b ```
bool q_toolbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QToolBar* self ```
QThread* q_toolbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QToolBar* self, QThread* thread ```
void q_toolbar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolBar* self, int interval ```
int32_t q_toolbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QToolBar* self, int id ```
void q_toolbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QToolBar* self ```
libqt_list /* of QObject* */ q_toolbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QToolBar* self, QObject* filterObj ```
void q_toolbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QToolBar* self, QObject* obj ```
void q_toolbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_toolbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_toolbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_toolbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_toolbar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QToolBar* self ```
void q_toolbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QToolBar* self ```
void q_toolbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QToolBar* self, const char* name, QVariant* value ```
bool q_toolbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QToolBar* self, const char* name ```
QVariant* q_toolbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QToolBar* self ```
const char** q_toolbar_dynamic_property_names(void* self) {
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
/// ``` QToolBar* self ```
QBindingStorage* q_toolbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QToolBar* self ```
QBindingStorage* q_toolbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolBar* self ```
void q_toolbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QToolBar* self, void (*slot)(QObject*) ```
void q_toolbar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QToolBar* self ```
QObject* q_toolbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QToolBar* self, const char* classname ```
bool q_toolbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QToolBar* self ```
void q_toolbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QToolBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_toolbar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QToolBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_toolbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QToolBar* self, QObject* param1 ```
void q_toolbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QToolBar* self, void (*slot)(QObject*, QObject*) ```
void q_toolbar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QToolBar* self ```
bool q_toolbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QToolBar* self ```
double q_toolbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QToolBar* self ```
double q_toolbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QToolBar* self ```
int32_t q_toolbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_toolbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
int32_t q_toolbar_dev_type(void* self) {
    return QToolBar_DevType((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
int32_t q_toolbar_qbase_dev_type(void* self) {
    return QToolBar_QBaseDevType((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, int32_t (*slot)() ```
void q_toolbar_on_dev_type(void* self, int32_t (*slot)()) {
    QToolBar_OnDevType((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, bool visible ```
void q_toolbar_set_visible(void* self, bool visible) {
    QToolBar_SetVisible((QToolBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, bool visible ```
void q_toolbar_qbase_set_visible(void* self, bool visible) {
    QToolBar_QBaseSetVisible((QToolBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, bool) ```
void q_toolbar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QToolBar_OnSetVisible((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
QSize* q_toolbar_size_hint(void* self) {
    return QToolBar_SizeHint((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
QSize* q_toolbar_qbase_size_hint(void* self) {
    return QToolBar_QBaseSizeHint((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QSize* (*slot)() ```
void q_toolbar_on_size_hint(void* self, QSize* (*slot)()) {
    QToolBar_OnSizeHint((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
QSize* q_toolbar_minimum_size_hint(void* self) {
    return QToolBar_MinimumSizeHint((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
QSize* q_toolbar_qbase_minimum_size_hint(void* self) {
    return QToolBar_QBaseMinimumSizeHint((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QSize* (*slot)() ```
void q_toolbar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QToolBar_OnMinimumSizeHint((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, int param1 ```
int32_t q_toolbar_height_for_width(void* self, int param1) {
    return QToolBar_HeightForWidth((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, int param1 ```
int32_t q_toolbar_qbase_height_for_width(void* self, int param1) {
    return QToolBar_QBaseHeightForWidth((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, int32_t (*slot)(QToolBar*, int) ```
void q_toolbar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QToolBar_OnHeightForWidth((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_has_height_for_width(void* self) {
    return QToolBar_HasHeightForWidth((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_qbase_has_height_for_width(void* self) {
    return QToolBar_QBaseHasHeightForWidth((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)() ```
void q_toolbar_on_has_height_for_width(void* self, bool (*slot)()) {
    QToolBar_OnHasHeightForWidth((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
QPaintEngine* q_toolbar_paint_engine(void* self) {
    return QToolBar_PaintEngine((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
QPaintEngine* q_toolbar_qbase_paint_engine(void* self) {
    return QToolBar_QBasePaintEngine((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QPaintEngine* (*slot)() ```
void q_toolbar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QToolBar_OnPaintEngine((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_mouse_press_event(void* self, void* event) {
    QToolBar_MousePressEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_qbase_mouse_press_event(void* self, void* event) {
    QToolBar_QBaseMousePressEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMouseEvent*) ```
void q_toolbar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMousePressEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_mouse_release_event(void* self, void* event) {
    QToolBar_MouseReleaseEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_qbase_mouse_release_event(void* self, void* event) {
    QToolBar_QBaseMouseReleaseEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMouseEvent*) ```
void q_toolbar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseReleaseEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_mouse_double_click_event(void* self, void* event) {
    QToolBar_MouseDoubleClickEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_qbase_mouse_double_click_event(void* self, void* event) {
    QToolBar_QBaseMouseDoubleClickEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMouseEvent*) ```
void q_toolbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseDoubleClickEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_mouse_move_event(void* self, void* event) {
    QToolBar_MouseMoveEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMouseEvent* event ```
void q_toolbar_qbase_mouse_move_event(void* self, void* event) {
    QToolBar_QBaseMouseMoveEvent((QToolBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMouseEvent*) ```
void q_toolbar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseMoveEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QWheelEvent* event ```
void q_toolbar_wheel_event(void* self, void* event) {
    QToolBar_WheelEvent((QToolBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QWheelEvent* event ```
void q_toolbar_qbase_wheel_event(void* self, void* event) {
    QToolBar_QBaseWheelEvent((QToolBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QWheelEvent*) ```
void q_toolbar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnWheelEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QKeyEvent* event ```
void q_toolbar_key_press_event(void* self, void* event) {
    QToolBar_KeyPressEvent((QToolBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QKeyEvent* event ```
void q_toolbar_qbase_key_press_event(void* self, void* event) {
    QToolBar_QBaseKeyPressEvent((QToolBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QKeyEvent*) ```
void q_toolbar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnKeyPressEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QKeyEvent* event ```
void q_toolbar_key_release_event(void* self, void* event) {
    QToolBar_KeyReleaseEvent((QToolBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QKeyEvent* event ```
void q_toolbar_qbase_key_release_event(void* self, void* event) {
    QToolBar_QBaseKeyReleaseEvent((QToolBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QKeyEvent*) ```
void q_toolbar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnKeyReleaseEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QFocusEvent* event ```
void q_toolbar_focus_in_event(void* self, void* event) {
    QToolBar_FocusInEvent((QToolBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QFocusEvent* event ```
void q_toolbar_qbase_focus_in_event(void* self, void* event) {
    QToolBar_QBaseFocusInEvent((QToolBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QFocusEvent*) ```
void q_toolbar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnFocusInEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QFocusEvent* event ```
void q_toolbar_focus_out_event(void* self, void* event) {
    QToolBar_FocusOutEvent((QToolBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QFocusEvent* event ```
void q_toolbar_qbase_focus_out_event(void* self, void* event) {
    QToolBar_QBaseFocusOutEvent((QToolBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QFocusEvent*) ```
void q_toolbar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnFocusOutEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QEnterEvent* event ```
void q_toolbar_enter_event(void* self, void* event) {
    QToolBar_EnterEvent((QToolBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QEnterEvent* event ```
void q_toolbar_qbase_enter_event(void* self, void* event) {
    QToolBar_QBaseEnterEvent((QToolBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QEnterEvent*) ```
void q_toolbar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnEnterEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_leave_event(void* self, void* event) {
    QToolBar_LeaveEvent((QToolBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_qbase_leave_event(void* self, void* event) {
    QToolBar_QBaseLeaveEvent((QToolBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QEvent*) ```
void q_toolbar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnLeaveEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMoveEvent* event ```
void q_toolbar_move_event(void* self, void* event) {
    QToolBar_MoveEvent((QToolBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMoveEvent* event ```
void q_toolbar_qbase_move_event(void* self, void* event) {
    QToolBar_QBaseMoveEvent((QToolBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMoveEvent*) ```
void q_toolbar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMoveEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QResizeEvent* event ```
void q_toolbar_resize_event(void* self, void* event) {
    QToolBar_ResizeEvent((QToolBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QResizeEvent* event ```
void q_toolbar_qbase_resize_event(void* self, void* event) {
    QToolBar_QBaseResizeEvent((QToolBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QResizeEvent*) ```
void q_toolbar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnResizeEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QCloseEvent* event ```
void q_toolbar_close_event(void* self, void* event) {
    QToolBar_CloseEvent((QToolBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QCloseEvent* event ```
void q_toolbar_qbase_close_event(void* self, void* event) {
    QToolBar_QBaseCloseEvent((QToolBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QCloseEvent*) ```
void q_toolbar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnCloseEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QContextMenuEvent* event ```
void q_toolbar_context_menu_event(void* self, void* event) {
    QToolBar_ContextMenuEvent((QToolBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QContextMenuEvent* event ```
void q_toolbar_qbase_context_menu_event(void* self, void* event) {
    QToolBar_QBaseContextMenuEvent((QToolBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QContextMenuEvent*) ```
void q_toolbar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnContextMenuEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QTabletEvent* event ```
void q_toolbar_tablet_event(void* self, void* event) {
    QToolBar_TabletEvent((QToolBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QTabletEvent* event ```
void q_toolbar_qbase_tablet_event(void* self, void* event) {
    QToolBar_QBaseTabletEvent((QToolBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QTabletEvent*) ```
void q_toolbar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnTabletEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QDragEnterEvent* event ```
void q_toolbar_drag_enter_event(void* self, void* event) {
    QToolBar_DragEnterEvent((QToolBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QDragEnterEvent* event ```
void q_toolbar_qbase_drag_enter_event(void* self, void* event) {
    QToolBar_QBaseDragEnterEvent((QToolBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QDragEnterEvent*) ```
void q_toolbar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragEnterEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QDragMoveEvent* event ```
void q_toolbar_drag_move_event(void* self, void* event) {
    QToolBar_DragMoveEvent((QToolBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QDragMoveEvent* event ```
void q_toolbar_qbase_drag_move_event(void* self, void* event) {
    QToolBar_QBaseDragMoveEvent((QToolBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QDragMoveEvent*) ```
void q_toolbar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragMoveEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QDragLeaveEvent* event ```
void q_toolbar_drag_leave_event(void* self, void* event) {
    QToolBar_DragLeaveEvent((QToolBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QDragLeaveEvent* event ```
void q_toolbar_qbase_drag_leave_event(void* self, void* event) {
    QToolBar_QBaseDragLeaveEvent((QToolBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QDragLeaveEvent*) ```
void q_toolbar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragLeaveEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QDropEvent* event ```
void q_toolbar_drop_event(void* self, void* event) {
    QToolBar_DropEvent((QToolBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QDropEvent* event ```
void q_toolbar_qbase_drop_event(void* self, void* event) {
    QToolBar_QBaseDropEvent((QToolBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QDropEvent*) ```
void q_toolbar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDropEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QShowEvent* event ```
void q_toolbar_show_event(void* self, void* event) {
    QToolBar_ShowEvent((QToolBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QShowEvent* event ```
void q_toolbar_qbase_show_event(void* self, void* event) {
    QToolBar_QBaseShowEvent((QToolBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QShowEvent*) ```
void q_toolbar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnShowEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QHideEvent* event ```
void q_toolbar_hide_event(void* self, void* event) {
    QToolBar_HideEvent((QToolBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QHideEvent* event ```
void q_toolbar_qbase_hide_event(void* self, void* event) {
    QToolBar_QBaseHideEvent((QToolBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QHideEvent*) ```
void q_toolbar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnHideEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBar_NativeEvent((QToolBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_toolbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBar_QBaseNativeEvent((QToolBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)(QToolBar*, const char*, void*, intptr_t*) ```
void q_toolbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QToolBar_OnNativeEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbar_metric(void* self, int64_t param1) {
    return QToolBar_Metric((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_toolbar_qbase_metric(void* self, int64_t param1) {
    return QToolBar_QBaseMetric((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, int32_t (*slot)(QToolBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_toolbar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QToolBar_OnMetric((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QPainter* painter ```
void q_toolbar_init_painter(void* self, void* painter) {
    QToolBar_InitPainter((QToolBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QPainter* painter ```
void q_toolbar_qbase_init_painter(void* self, void* painter) {
    QToolBar_QBaseInitPainter((QToolBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QPainter*) ```
void q_toolbar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInitPainter((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QPoint* offset ```
QPaintDevice* q_toolbar_redirected(void* self, void* offset) {
    return QToolBar_Redirected((QToolBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QPoint* offset ```
QPaintDevice* q_toolbar_qbase_redirected(void* self, void* offset) {
    return QToolBar_QBaseRedirected((QToolBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QPaintDevice* (*slot)(QToolBar*, QPoint*) ```
void q_toolbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QToolBar_OnRedirected((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
QPainter* q_toolbar_shared_painter(void* self) {
    return QToolBar_SharedPainter((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
QPainter* q_toolbar_qbase_shared_painter(void* self) {
    return QToolBar_QBaseSharedPainter((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QPainter* (*slot)() ```
void q_toolbar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QToolBar_OnSharedPainter((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QInputMethodEvent* param1 ```
void q_toolbar_input_method_event(void* self, void* param1) {
    QToolBar_InputMethodEvent((QToolBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QInputMethodEvent* param1 ```
void q_toolbar_qbase_input_method_event(void* self, void* param1) {
    QToolBar_QBaseInputMethodEvent((QToolBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QInputMethodEvent*) ```
void q_toolbar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInputMethodEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbar_input_method_query(void* self, int64_t param1) {
    return QToolBar_InputMethodQuery((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_toolbar_qbase_input_method_query(void* self, int64_t param1) {
    return QToolBar_QBaseInputMethodQuery((QToolBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QVariant* (*slot)(QToolBar*, enum Qt__InputMethodQuery) ```
void q_toolbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QToolBar_OnInputMethodQuery((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, bool next ```
bool q_toolbar_focus_next_prev_child(void* self, bool next) {
    return QToolBar_FocusNextPrevChild((QToolBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, bool next ```
bool q_toolbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QToolBar_QBaseFocusNextPrevChild((QToolBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)(QToolBar*, bool) ```
void q_toolbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QToolBar_OnFocusNextPrevChild((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QObject* watched, QEvent* event ```
bool q_toolbar_event_filter(void* self, void* watched, void* event) {
    return QToolBar_EventFilter((QToolBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QObject* watched, QEvent* event ```
bool q_toolbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QToolBar_QBaseEventFilter((QToolBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)(QToolBar*, QObject*, QEvent*) ```
void q_toolbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QToolBar_OnEventFilter((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QTimerEvent* event ```
void q_toolbar_timer_event(void* self, void* event) {
    QToolBar_TimerEvent((QToolBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QTimerEvent* event ```
void q_toolbar_qbase_timer_event(void* self, void* event) {
    QToolBar_QBaseTimerEvent((QToolBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QTimerEvent*) ```
void q_toolbar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnTimerEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QChildEvent* event ```
void q_toolbar_child_event(void* self, void* event) {
    QToolBar_ChildEvent((QToolBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QChildEvent* event ```
void q_toolbar_qbase_child_event(void* self, void* event) {
    QToolBar_QBaseChildEvent((QToolBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QChildEvent*) ```
void q_toolbar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnChildEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_custom_event(void* self, void* event) {
    QToolBar_CustomEvent((QToolBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QEvent* event ```
void q_toolbar_qbase_custom_event(void* self, void* event) {
    QToolBar_QBaseCustomEvent((QToolBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QEvent*) ```
void q_toolbar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnCustomEvent((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
void q_toolbar_connect_notify(void* self, void* signal) {
    QToolBar_ConnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
void q_toolbar_qbase_connect_notify(void* self, void* signal) {
    QToolBar_QBaseConnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMetaMethod*) ```
void q_toolbar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnConnectNotify((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
void q_toolbar_disconnect_notify(void* self, void* signal) {
    QToolBar_DisconnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
void q_toolbar_qbase_disconnect_notify(void* self, void* signal) {
    QToolBar_QBaseDisconnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)(QToolBar*, QMetaMethod*) ```
void q_toolbar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDisconnectNotify((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_update_micro_focus(void* self) {
    QToolBar_UpdateMicroFocus((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_qbase_update_micro_focus(void* self) {
    QToolBar_QBaseUpdateMicroFocus((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)() ```
void q_toolbar_on_update_micro_focus(void* self, void (*slot)()) {
    QToolBar_OnUpdateMicroFocus((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_create(void* self) {
    QToolBar_Create((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_qbase_create(void* self) {
    QToolBar_QBaseCreate((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)() ```
void q_toolbar_on_create(void* self, void (*slot)()) {
    QToolBar_OnCreate((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_destroy(void* self) {
    QToolBar_Destroy((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
void q_toolbar_qbase_destroy(void* self) {
    QToolBar_QBaseDestroy((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, void (*slot)() ```
void q_toolbar_on_destroy(void* self, void (*slot)()) {
    QToolBar_OnDestroy((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_focus_next_child(void* self) {
    return QToolBar_FocusNextChild((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_qbase_focus_next_child(void* self) {
    return QToolBar_QBaseFocusNextChild((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)() ```
void q_toolbar_on_focus_next_child(void* self, bool (*slot)()) {
    QToolBar_OnFocusNextChild((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_focus_previous_child(void* self) {
    return QToolBar_FocusPreviousChild((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
bool q_toolbar_qbase_focus_previous_child(void* self) {
    return QToolBar_QBaseFocusPreviousChild((QToolBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)() ```
void q_toolbar_on_focus_previous_child(void* self, bool (*slot)()) {
    QToolBar_OnFocusPreviousChild((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
QObject* q_toolbar_sender(void* self) {
    return QToolBar_Sender((QToolBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
QObject* q_toolbar_qbase_sender(void* self) {
    return QToolBar_QBaseSender((QToolBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, QObject* (*slot)() ```
void q_toolbar_on_sender(void* self, QObject* (*slot)()) {
    QToolBar_OnSender((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self ```
int32_t q_toolbar_sender_signal_index(void* self) {
    return QToolBar_SenderSignalIndex((QToolBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self ```
int32_t q_toolbar_qbase_sender_signal_index(void* self) {
    return QToolBar_QBaseSenderSignalIndex((QToolBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, int32_t (*slot)() ```
void q_toolbar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QToolBar_OnSenderSignalIndex((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, const char* signal ```
int32_t q_toolbar_receivers(void* self, const char* signal) {
    return QToolBar_Receivers((QToolBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, const char* signal ```
int32_t q_toolbar_qbase_receivers(void* self, const char* signal) {
    return QToolBar_QBaseReceivers((QToolBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, int32_t (*slot)(QToolBar*, const char*) ```
void q_toolbar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QToolBar_OnReceivers((QToolBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
bool q_toolbar_is_signal_connected(void* self, void* signal) {
    return QToolBar_IsSignalConnected((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBar* self, QMetaMethod* signal ```
bool q_toolbar_qbase_is_signal_connected(void* self, void* signal) {
    return QToolBar_QBaseIsSignalConnected((QToolBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBar* self, bool (*slot)(QToolBar*, QMetaMethod*) ```
void q_toolbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QToolBar_OnIsSignalConnected((QToolBar*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QToolBar* self ```
void q_toolbar_delete(void* self) {
    QToolBar_Delete((QToolBar*)(self));
}