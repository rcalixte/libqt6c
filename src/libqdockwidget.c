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
#include "libqdockwidget.hpp"
#include "libqdockwidget.h"

/// https://doc.qt.io/qt-6/qdockwidget.html

/// q_dockwidget_new constructs a new QDockWidget object.
///
/// ``` QWidget* parent ```
QDockWidget* q_dockwidget_new(void* parent) {
    return QDockWidget_new((QWidget*)parent);
}

/// q_dockwidget_new2 constructs a new QDockWidget object.
///
/// ``` const char* title ```
QDockWidget* q_dockwidget_new2(const char* title) {
    return QDockWidget_new2(qstring(title));
}

/// q_dockwidget_new3 constructs a new QDockWidget object.
///
///
QDockWidget* q_dockwidget_new3() {
    return QDockWidget_new3();
}

/// q_dockwidget_new4 constructs a new QDockWidget object.
///
/// ``` const char* title, QWidget* parent ```
QDockWidget* q_dockwidget_new4(const char* title, void* parent) {
    return QDockWidget_new4(qstring(title), (QWidget*)parent);
}

/// q_dockwidget_new5 constructs a new QDockWidget object.
///
/// ``` const char* title, QWidget* parent, int flags ```
QDockWidget* q_dockwidget_new5(const char* title, void* parent, int64_t flags) {
    return QDockWidget_new5(qstring(title), (QWidget*)parent, flags);
}

/// q_dockwidget_new6 constructs a new QDockWidget object.
///
/// ``` QWidget* parent, int flags ```
QDockWidget* q_dockwidget_new6(void* parent, int64_t flags) {
    return QDockWidget_new6((QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDockWidget* self ```
QMetaObject* q_dockwidget_meta_object(void* self) {
    return QDockWidget_MetaObject((QDockWidget*)self);
}

/// ``` QDockWidget* self, const char* param1 ```
void* q_dockwidget_metacast(void* self, const char* param1) {
    return QDockWidget_Metacast((QDockWidget*)self, param1);
}

/// ``` QDockWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dockwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDockWidget_Metacall((QDockWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, int32_t (*slot)(QDockWidget*, enum QMetaObject__Call, int, void*) ```
void q_dockwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDockWidget_OnMetacall((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dockwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDockWidget_QBaseMetacall((QDockWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dockwidget_tr(const char* s) {
    libqt_string _str = QDockWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#widget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_widget(void* self) {
    return QDockWidget_Widget((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#setWidget)
///
/// ``` QDockWidget* self, QWidget* widget ```
void q_dockwidget_set_widget(void* self, void* widget) {
    QDockWidget_SetWidget((QDockWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#setFeatures)
///
/// ``` QDockWidget* self, int features ```
void q_dockwidget_set_features(void* self, int64_t features) {
    QDockWidget_SetFeatures((QDockWidget*)self, features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#features)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_features(void* self) {
    return QDockWidget_Features((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#setFloating)
///
/// ``` QDockWidget* self, bool floating ```
void q_dockwidget_set_floating(void* self, bool floating) {
    QDockWidget_SetFloating((QDockWidget*)self, floating);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#isFloating)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_floating(void* self) {
    return QDockWidget_IsFloating((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#setAllowedAreas)
///
/// ``` QDockWidget* self, int areas ```
void q_dockwidget_set_allowed_areas(void* self, int64_t areas) {
    QDockWidget_SetAllowedAreas((QDockWidget*)self, areas);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#allowedAreas)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_allowed_areas(void* self) {
    return QDockWidget_AllowedAreas((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#setTitleBarWidget)
///
/// ``` QDockWidget* self, QWidget* widget ```
void q_dockwidget_set_title_bar_widget(void* self, void* widget) {
    QDockWidget_SetTitleBarWidget((QDockWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#titleBarWidget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_title_bar_widget(void* self) {
    return QDockWidget_TitleBarWidget((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#isAreaAllowed)
///
/// ``` QDockWidget* self, enum Qt__DockWidgetArea area ```
bool q_dockwidget_is_area_allowed(void* self, int64_t area) {
    return QDockWidget_IsAreaAllowed((QDockWidget*)self, area);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#toggleViewAction)
///
/// ``` QDockWidget* self ```
QAction* q_dockwidget_toggle_view_action(void* self) {
    return QDockWidget_ToggleViewAction((QDockWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#featuresChanged)
///
/// ``` QDockWidget* self, int features ```
void q_dockwidget_features_changed(void* self, int64_t features) {
    QDockWidget_FeaturesChanged((QDockWidget*)self, features);
}

/// ``` QDockWidget* self, void (*slot)(QDockWidget*, int) ```
void q_dockwidget_on_features_changed(void* self, void (*slot)(void*, int64_t)) {
    QDockWidget_Connect_FeaturesChanged((QDockWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#topLevelChanged)
///
/// ``` QDockWidget* self, bool topLevel ```
void q_dockwidget_top_level_changed(void* self, bool topLevel) {
    QDockWidget_TopLevelChanged((QDockWidget*)self, topLevel);
}

/// ``` QDockWidget* self, void (*slot)(QDockWidget*, bool) ```
void q_dockwidget_on_top_level_changed(void* self, void (*slot)(void*, bool)) {
    QDockWidget_Connect_TopLevelChanged((QDockWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#allowedAreasChanged)
///
/// ``` QDockWidget* self, int allowedAreas ```
void q_dockwidget_allowed_areas_changed(void* self, int64_t allowedAreas) {
    QDockWidget_AllowedAreasChanged((QDockWidget*)self, allowedAreas);
}

/// ``` QDockWidget* self, void (*slot)(QDockWidget*, int) ```
void q_dockwidget_on_allowed_areas_changed(void* self, void (*slot)(void*, int64_t)) {
    QDockWidget_Connect_AllowedAreasChanged((QDockWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#visibilityChanged)
///
/// ``` QDockWidget* self, bool visible ```
void q_dockwidget_visibility_changed(void* self, bool visible) {
    QDockWidget_VisibilityChanged((QDockWidget*)self, visible);
}

/// ``` QDockWidget* self, void (*slot)(QDockWidget*, bool) ```
void q_dockwidget_on_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QDockWidget_Connect_VisibilityChanged((QDockWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#dockLocationChanged)
///
/// ``` QDockWidget* self, enum Qt__DockWidgetArea area ```
void q_dockwidget_dock_location_changed(void* self, int64_t area) {
    QDockWidget_DockLocationChanged((QDockWidget*)self, area);
}

/// ``` QDockWidget* self, void (*slot)(QDockWidget*, enum Qt__DockWidgetArea) ```
void q_dockwidget_on_dock_location_changed(void* self, void (*slot)(void*, int64_t)) {
    QDockWidget_Connect_DockLocationChanged((QDockWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#changeEvent)
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_change_event(void* self, void* event) {
    QDockWidget_ChangeEvent((QDockWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QEvent*) ```
void q_dockwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnChangeEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_qbase_change_event(void* self, void* event) {
    QDockWidget_QBaseChangeEvent((QDockWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#closeEvent)
///
/// ``` QDockWidget* self, QCloseEvent* event ```
void q_dockwidget_close_event(void* self, void* event) {
    QDockWidget_CloseEvent((QDockWidget*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QCloseEvent*) ```
void q_dockwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnCloseEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, QCloseEvent* event ```
void q_dockwidget_qbase_close_event(void* self, void* event) {
    QDockWidget_QBaseCloseEvent((QDockWidget*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#paintEvent)
///
/// ``` QDockWidget* self, QPaintEvent* event ```
void q_dockwidget_paint_event(void* self, void* event) {
    QDockWidget_PaintEvent((QDockWidget*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QPaintEvent*) ```
void q_dockwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnPaintEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, QPaintEvent* event ```
void q_dockwidget_qbase_paint_event(void* self, void* event) {
    QDockWidget_QBasePaintEvent((QDockWidget*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#event)
///
/// ``` QDockWidget* self, QEvent* event ```
bool q_dockwidget_event(void* self, void* event) {
    return QDockWidget_Event((QDockWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, bool (*slot)(QDockWidget*, QEvent*) ```
void q_dockwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QDockWidget_OnEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, QEvent* event ```
bool q_dockwidget_qbase_event(void* self, void* event) {
    return QDockWidget_QBaseEvent((QDockWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdockwidget.html#initStyleOption)
///
/// ``` QDockWidget* self, QStyleOptionDockWidget* option ```
void q_dockwidget_init_style_option(void* self, void* option) {
    QDockWidget_InitStyleOption((QDockWidget*)self, (QStyleOptionDockWidget*)option);
}

/// Allows for overriding the related default method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QStyleOptionDockWidget*) ```
void q_dockwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnInitStyleOption((QDockWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDockWidget* self, QStyleOptionDockWidget* option ```
void q_dockwidget_qbase_init_style_option(void* self, void* option) {
    QDockWidget_QBaseInitStyleOption((QDockWidget*)self, (QStyleOptionDockWidget*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dockwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QDockWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dockwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDockWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDockWidget* self ```
uintptr_t q_dockwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDockWidget* self ```
void q_dockwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDockWidget* self ```
uintptr_t q_dockwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDockWidget* self ```
uintptr_t q_dockwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDockWidget* self ```
QStyle* q_dockwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDockWidget* self, QStyle* style ```
void q_dockwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDockWidget* self, enum Qt__WindowModality windowModality ```
void q_dockwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDockWidget* self, QWidget* param1 ```
bool q_dockwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDockWidget* self, bool enabled ```
void q_dockwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDockWidget* self, bool disabled ```
void q_dockwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDockWidget* self, bool windowModified ```
void q_dockwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDockWidget* self ```
QPoint* q_dockwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDockWidget* self ```
QRegion* q_dockwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDockWidget* self, QSize* minimumSize ```
void q_dockwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDockWidget* self, int minw, int minh ```
void q_dockwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDockWidget* self, QSize* maximumSize ```
void q_dockwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDockWidget* self, int maxw, int maxh ```
void q_dockwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDockWidget* self, int minw ```
void q_dockwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDockWidget* self, int minh ```
void q_dockwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDockWidget* self, int maxw ```
void q_dockwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDockWidget* self, int maxh ```
void q_dockwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDockWidget* self, QSize* sizeIncrement ```
void q_dockwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDockWidget* self, int w, int h ```
void q_dockwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDockWidget* self, QSize* baseSize ```
void q_dockwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDockWidget* self, int basew, int baseh ```
void q_dockwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDockWidget* self, QSize* fixedSize ```
void q_dockwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDockWidget* self, int w, int h ```
void q_dockwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDockWidget* self, int w ```
void q_dockwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDockWidget* self, int h ```
void q_dockwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDockWidget* self, QPointF* param1 ```
QPointF* q_dockwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDockWidget* self, QPoint* param1 ```
QPoint* q_dockwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDockWidget* self, QPointF* param1 ```
QPointF* q_dockwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDockWidget* self, QPoint* param1 ```
QPoint* q_dockwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDockWidget* self, QPointF* param1 ```
QPointF* q_dockwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDockWidget* self, QPoint* param1 ```
QPoint* q_dockwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDockWidget* self, QPointF* param1 ```
QPointF* q_dockwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDockWidget* self, QPoint* param1 ```
QPoint* q_dockwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDockWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dockwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDockWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dockwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDockWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dockwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDockWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dockwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDockWidget* self ```
QPalette* q_dockwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDockWidget* self, QPalette* palette ```
void q_dockwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDockWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_dockwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDockWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_dockwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDockWidget* self ```
QFont* q_dockwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDockWidget* self, QFont* font ```
void q_dockwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDockWidget* self ```
QFontMetrics* q_dockwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDockWidget* self ```
QFontInfo* q_dockwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDockWidget* self ```
QCursor* q_dockwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDockWidget* self, QCursor* cursor ```
void q_dockwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDockWidget* self ```
void q_dockwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDockWidget* self, bool enable ```
void q_dockwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDockWidget* self, bool enable ```
void q_dockwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDockWidget* self, QBitmap* mask ```
void q_dockwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDockWidget* self, QRegion* mask ```
void q_dockwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDockWidget* self ```
QRegion* q_dockwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDockWidget* self ```
void q_dockwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPaintDevice* target ```
void q_dockwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPainter* painter ```
void q_dockwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDockWidget* self ```
QPixmap* q_dockwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDockWidget* self ```
QGraphicsEffect* q_dockwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDockWidget* self, QGraphicsEffect* effect ```
void q_dockwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDockWidget* self, enum Qt__GestureType typeVal ```
void q_dockwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDockWidget* self, enum Qt__GestureType typeVal ```
void q_dockwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDockWidget* self, const char* windowTitle ```
void q_dockwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDockWidget* self, const char* styleSheet ```
void q_dockwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDockWidget* self, QIcon* icon ```
void q_dockwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDockWidget* self ```
QIcon* q_dockwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDockWidget* self, const char* windowIconText ```
void q_dockwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDockWidget* self, const char* windowRole ```
void q_dockwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDockWidget* self, const char* filePath ```
void q_dockwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDockWidget* self, double level ```
void q_dockwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDockWidget* self ```
double q_dockwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDockWidget* self, const char* toolTip ```
void q_dockwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDockWidget* self, int msec ```
void q_dockwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDockWidget* self, const char* statusTip ```
void q_dockwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDockWidget* self, const char* whatsThis ```
void q_dockwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDockWidget* self, const char* name ```
void q_dockwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDockWidget* self, const char* description ```
void q_dockwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDockWidget* self, enum Qt__LayoutDirection direction ```
void q_dockwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDockWidget* self ```
void q_dockwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDockWidget* self, QLocale* locale ```
void q_dockwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDockWidget* self ```
QLocale* q_dockwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDockWidget* self ```
void q_dockwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDockWidget* self ```
void q_dockwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDockWidget* self ```
void q_dockwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDockWidget* self ```
void q_dockwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDockWidget* self, enum Qt__FocusReason reason ```
void q_dockwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDockWidget* self, enum Qt__FocusPolicy policy ```
void q_dockwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_dockwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDockWidget* self, QWidget* focusProxy ```
void q_dockwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDockWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_dockwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDockWidget* self ```
void q_dockwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDockWidget* self, QCursor* param1 ```
void q_dockwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDockWidget* self ```
void q_dockwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDockWidget* self ```
void q_dockwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDockWidget* self ```
void q_dockwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDockWidget* self, QKeySequence* key ```
int32_t q_dockwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDockWidget* self, int id ```
void q_dockwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDockWidget* self, int id ```
void q_dockwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDockWidget* self, int id ```
void q_dockwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_dockwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_dockwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDockWidget* self, bool enable ```
void q_dockwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDockWidget* self ```
QGraphicsProxyWidget* q_dockwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDockWidget* self ```
void q_dockwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDockWidget* self ```
void q_dockwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDockWidget* self, int x, int y, int w, int h ```
void q_dockwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDockWidget* self, QRect* param1 ```
void q_dockwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDockWidget* self, QRegion* param1 ```
void q_dockwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDockWidget* self, int x, int y, int w, int h ```
void q_dockwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDockWidget* self, QRect* param1 ```
void q_dockwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDockWidget* self, QRegion* param1 ```
void q_dockwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDockWidget* self, bool hidden ```
void q_dockwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDockWidget* self ```
void q_dockwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDockWidget* self ```
void q_dockwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDockWidget* self ```
void q_dockwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDockWidget* self ```
void q_dockwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDockWidget* self ```
void q_dockwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDockWidget* self ```
void q_dockwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDockWidget* self ```
void q_dockwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDockWidget* self ```
void q_dockwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDockWidget* self, QWidget* param1 ```
void q_dockwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDockWidget* self, int x, int y ```
void q_dockwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDockWidget* self, QPoint* param1 ```
void q_dockwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDockWidget* self, int w, int h ```
void q_dockwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDockWidget* self, QSize* param1 ```
void q_dockwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDockWidget* self, int x, int y, int w, int h ```
void q_dockwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDockWidget* self, QRect* geometry ```
void q_dockwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDockWidget* self ```
char* q_dockwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDockWidget* self, const char* geometry ```
bool q_dockwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDockWidget* self ```
void q_dockwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDockWidget* self, QWidget* param1 ```
bool q_dockwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDockWidget* self, int state ```
void q_dockwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDockWidget* self, int state ```
void q_dockwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDockWidget* self ```
QSizePolicy* q_dockwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDockWidget* self, QSizePolicy* sizePolicy ```
void q_dockwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDockWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_dockwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDockWidget* self ```
QRegion* q_dockwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDockWidget* self, int left, int top, int right, int bottom ```
void q_dockwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDockWidget* self, QMargins* margins ```
void q_dockwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDockWidget* self ```
QMargins* q_dockwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDockWidget* self ```
QRect* q_dockwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDockWidget* self ```
QLayout* q_dockwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDockWidget* self, QLayout* layout ```
void q_dockwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDockWidget* self ```
void q_dockwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDockWidget* self, QWidget* parent ```
void q_dockwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDockWidget* self, QWidget* parent, int f ```
void q_dockwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDockWidget* self, int dx, int dy ```
void q_dockwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDockWidget* self, int dx, int dy, QRect* param3 ```
void q_dockwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDockWidget* self, bool on ```
void q_dockwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDockWidget* self, QAction* action ```
void q_dockwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDockWidget* self, QAction* actions[] ```
void q_dockwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QDockWidget* self, QAction* before, QAction* actions[] ```
void q_dockwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QDockWidget* self, QAction* before, QAction* action ```
void q_dockwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDockWidget* self, QAction* action ```
void q_dockwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDockWidget* self ```
libqt_list /* of QAction* */ q_dockwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDockWidget* self, const char* text ```
QAction* q_dockwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDockWidget* self, QIcon* icon, const char* text ```
QAction* q_dockwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDockWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_dockwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDockWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_dockwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDockWidget* self ```
QWidget* q_dockwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDockWidget* self, int typeVal ```
void q_dockwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDockWidget* self, enum Qt__WindowType param1 ```
void q_dockwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDockWidget* self, int typeVal ```
void q_dockwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_dockwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDockWidget* self, int x, int y ```
QWidget* q_dockwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDockWidget* self, QPoint* p ```
QWidget* q_dockwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDockWidget* self, enum Qt__WidgetAttribute param1 ```
void q_dockwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDockWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_dockwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDockWidget* self ```
void q_dockwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDockWidget* self, QWidget* child ```
bool q_dockwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDockWidget* self, bool enabled ```
void q_dockwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDockWidget* self ```
QBackingStore* q_dockwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDockWidget* self ```
QWindow* q_dockwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDockWidget* self ```
QScreen* q_dockwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDockWidget* self, QScreen* screen ```
void q_dockwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_dockwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDockWidget* self, const char* title ```
void q_dockwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QDockWidget* self, void (*slot)(QWidget*, const char*) ```
void q_dockwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDockWidget* self, QIcon* icon ```
void q_dockwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QDockWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_dockwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDockWidget* self, const char* iconText ```
void q_dockwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QDockWidget* self, void (*slot)(QWidget*, const char*) ```
void q_dockwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDockWidget* self, QPoint* pos ```
void q_dockwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QDockWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_dockwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDockWidget* self ```
int64_t q_dockwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDockWidget* self, int hints ```
void q_dockwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_dockwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dockwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dockwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_dockwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dockwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDockWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dockwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDockWidget* self, QRect* rectangle ```
QPixmap* q_dockwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDockWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_dockwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDockWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_dockwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDockWidget* self, int id, bool enable ```
void q_dockwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDockWidget* self, int id, bool enable ```
void q_dockwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDockWidget* self, enum Qt__WindowType param1, bool on ```
void q_dockwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDockWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_dockwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_dockwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_dockwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDockWidget* self ```
const char* q_dockwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDockWidget* self, const char* name ```
void q_dockwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDockWidget* self, bool b ```
bool q_dockwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDockWidget* self ```
QThread* q_dockwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDockWidget* self, QThread* thread ```
void q_dockwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDockWidget* self, int interval ```
int32_t q_dockwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDockWidget* self, int id ```
void q_dockwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDockWidget* self ```
libqt_list /* of QObject* */ q_dockwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDockWidget* self, QObject* filterObj ```
void q_dockwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDockWidget* self, QObject* obj ```
void q_dockwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dockwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDockWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dockwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dockwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dockwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDockWidget* self ```
void q_dockwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDockWidget* self ```
void q_dockwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDockWidget* self, const char* name, QVariant* value ```
bool q_dockwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDockWidget* self, const char* name ```
QVariant* q_dockwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDockWidget* self ```
const char** q_dockwidget_dynamic_property_names(void* self) {
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
/// ``` QDockWidget* self ```
QBindingStorage* q_dockwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDockWidget* self ```
QBindingStorage* q_dockwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDockWidget* self ```
void q_dockwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDockWidget* self, void (*slot)(QObject*) ```
void q_dockwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDockWidget* self ```
QObject* q_dockwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDockWidget* self, const char* classname ```
bool q_dockwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDockWidget* self ```
void q_dockwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDockWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dockwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dockwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDockWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dockwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDockWidget* self, QObject* param1 ```
void q_dockwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDockWidget* self, void (*slot)(QObject*, QObject*) ```
void q_dockwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDockWidget* self ```
bool q_dockwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDockWidget* self ```
double q_dockwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDockWidget* self ```
double q_dockwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_dockwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_dev_type(void* self) {
    return QDockWidget_DevType((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_qbase_dev_type(void* self) {
    return QDockWidget_QBaseDevType((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, int32_t (*slot)() ```
void q_dockwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QDockWidget_OnDevType((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, bool visible ```
void q_dockwidget_set_visible(void* self, bool visible) {
    QDockWidget_SetVisible((QDockWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, bool visible ```
void q_dockwidget_qbase_set_visible(void* self, bool visible) {
    QDockWidget_QBaseSetVisible((QDockWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, bool) ```
void q_dockwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDockWidget_OnSetVisible((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_size_hint(void* self) {
    return QDockWidget_SizeHint((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_qbase_size_hint(void* self) {
    return QDockWidget_QBaseSizeHint((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QSize* (*slot)() ```
void q_dockwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QDockWidget_OnSizeHint((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_minimum_size_hint(void* self) {
    return QDockWidget_MinimumSizeHint((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
QSize* q_dockwidget_qbase_minimum_size_hint(void* self) {
    return QDockWidget_QBaseMinimumSizeHint((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QSize* (*slot)() ```
void q_dockwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDockWidget_OnMinimumSizeHint((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, int param1 ```
int32_t q_dockwidget_height_for_width(void* self, int param1) {
    return QDockWidget_HeightForWidth((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, int param1 ```
int32_t q_dockwidget_qbase_height_for_width(void* self, int param1) {
    return QDockWidget_QBaseHeightForWidth((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, int32_t (*slot)(QDockWidget*, int) ```
void q_dockwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDockWidget_OnHeightForWidth((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_has_height_for_width(void* self) {
    return QDockWidget_HasHeightForWidth((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_qbase_has_height_for_width(void* self) {
    return QDockWidget_QBaseHasHeightForWidth((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)() ```
void q_dockwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QDockWidget_OnHasHeightForWidth((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
QPaintEngine* q_dockwidget_paint_engine(void* self) {
    return QDockWidget_PaintEngine((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
QPaintEngine* q_dockwidget_qbase_paint_engine(void* self) {
    return QDockWidget_QBasePaintEngine((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QPaintEngine* (*slot)() ```
void q_dockwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDockWidget_OnPaintEngine((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_mouse_press_event(void* self, void* event) {
    QDockWidget_MousePressEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_qbase_mouse_press_event(void* self, void* event) {
    QDockWidget_QBaseMousePressEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMouseEvent*) ```
void q_dockwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnMousePressEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_mouse_release_event(void* self, void* event) {
    QDockWidget_MouseReleaseEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_qbase_mouse_release_event(void* self, void* event) {
    QDockWidget_QBaseMouseReleaseEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMouseEvent*) ```
void q_dockwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnMouseReleaseEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_mouse_double_click_event(void* self, void* event) {
    QDockWidget_MouseDoubleClickEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QDockWidget_QBaseMouseDoubleClickEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMouseEvent*) ```
void q_dockwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnMouseDoubleClickEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_mouse_move_event(void* self, void* event) {
    QDockWidget_MouseMoveEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMouseEvent* event ```
void q_dockwidget_qbase_mouse_move_event(void* self, void* event) {
    QDockWidget_QBaseMouseMoveEvent((QDockWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMouseEvent*) ```
void q_dockwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnMouseMoveEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QWheelEvent* event ```
void q_dockwidget_wheel_event(void* self, void* event) {
    QDockWidget_WheelEvent((QDockWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QWheelEvent* event ```
void q_dockwidget_qbase_wheel_event(void* self, void* event) {
    QDockWidget_QBaseWheelEvent((QDockWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QWheelEvent*) ```
void q_dockwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnWheelEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QKeyEvent* event ```
void q_dockwidget_key_press_event(void* self, void* event) {
    QDockWidget_KeyPressEvent((QDockWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QKeyEvent* event ```
void q_dockwidget_qbase_key_press_event(void* self, void* event) {
    QDockWidget_QBaseKeyPressEvent((QDockWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QKeyEvent*) ```
void q_dockwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnKeyPressEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QKeyEvent* event ```
void q_dockwidget_key_release_event(void* self, void* event) {
    QDockWidget_KeyReleaseEvent((QDockWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QKeyEvent* event ```
void q_dockwidget_qbase_key_release_event(void* self, void* event) {
    QDockWidget_QBaseKeyReleaseEvent((QDockWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QKeyEvent*) ```
void q_dockwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnKeyReleaseEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QFocusEvent* event ```
void q_dockwidget_focus_in_event(void* self, void* event) {
    QDockWidget_FocusInEvent((QDockWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QFocusEvent* event ```
void q_dockwidget_qbase_focus_in_event(void* self, void* event) {
    QDockWidget_QBaseFocusInEvent((QDockWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QFocusEvent*) ```
void q_dockwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnFocusInEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QFocusEvent* event ```
void q_dockwidget_focus_out_event(void* self, void* event) {
    QDockWidget_FocusOutEvent((QDockWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QFocusEvent* event ```
void q_dockwidget_qbase_focus_out_event(void* self, void* event) {
    QDockWidget_QBaseFocusOutEvent((QDockWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QFocusEvent*) ```
void q_dockwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnFocusOutEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QEnterEvent* event ```
void q_dockwidget_enter_event(void* self, void* event) {
    QDockWidget_EnterEvent((QDockWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QEnterEvent* event ```
void q_dockwidget_qbase_enter_event(void* self, void* event) {
    QDockWidget_QBaseEnterEvent((QDockWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QEnterEvent*) ```
void q_dockwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnEnterEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_leave_event(void* self, void* event) {
    QDockWidget_LeaveEvent((QDockWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_qbase_leave_event(void* self, void* event) {
    QDockWidget_QBaseLeaveEvent((QDockWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QEvent*) ```
void q_dockwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnLeaveEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMoveEvent* event ```
void q_dockwidget_move_event(void* self, void* event) {
    QDockWidget_MoveEvent((QDockWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMoveEvent* event ```
void q_dockwidget_qbase_move_event(void* self, void* event) {
    QDockWidget_QBaseMoveEvent((QDockWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMoveEvent*) ```
void q_dockwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnMoveEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QResizeEvent* event ```
void q_dockwidget_resize_event(void* self, void* event) {
    QDockWidget_ResizeEvent((QDockWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QResizeEvent* event ```
void q_dockwidget_qbase_resize_event(void* self, void* event) {
    QDockWidget_QBaseResizeEvent((QDockWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QResizeEvent*) ```
void q_dockwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnResizeEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QContextMenuEvent* event ```
void q_dockwidget_context_menu_event(void* self, void* event) {
    QDockWidget_ContextMenuEvent((QDockWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QContextMenuEvent* event ```
void q_dockwidget_qbase_context_menu_event(void* self, void* event) {
    QDockWidget_QBaseContextMenuEvent((QDockWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QContextMenuEvent*) ```
void q_dockwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnContextMenuEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QTabletEvent* event ```
void q_dockwidget_tablet_event(void* self, void* event) {
    QDockWidget_TabletEvent((QDockWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QTabletEvent* event ```
void q_dockwidget_qbase_tablet_event(void* self, void* event) {
    QDockWidget_QBaseTabletEvent((QDockWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QTabletEvent*) ```
void q_dockwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnTabletEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QActionEvent* event ```
void q_dockwidget_action_event(void* self, void* event) {
    QDockWidget_ActionEvent((QDockWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QActionEvent* event ```
void q_dockwidget_qbase_action_event(void* self, void* event) {
    QDockWidget_QBaseActionEvent((QDockWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QActionEvent*) ```
void q_dockwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnActionEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QDragEnterEvent* event ```
void q_dockwidget_drag_enter_event(void* self, void* event) {
    QDockWidget_DragEnterEvent((QDockWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QDragEnterEvent* event ```
void q_dockwidget_qbase_drag_enter_event(void* self, void* event) {
    QDockWidget_QBaseDragEnterEvent((QDockWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QDragEnterEvent*) ```
void q_dockwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnDragEnterEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QDragMoveEvent* event ```
void q_dockwidget_drag_move_event(void* self, void* event) {
    QDockWidget_DragMoveEvent((QDockWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QDragMoveEvent* event ```
void q_dockwidget_qbase_drag_move_event(void* self, void* event) {
    QDockWidget_QBaseDragMoveEvent((QDockWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QDragMoveEvent*) ```
void q_dockwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnDragMoveEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QDragLeaveEvent* event ```
void q_dockwidget_drag_leave_event(void* self, void* event) {
    QDockWidget_DragLeaveEvent((QDockWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QDragLeaveEvent* event ```
void q_dockwidget_qbase_drag_leave_event(void* self, void* event) {
    QDockWidget_QBaseDragLeaveEvent((QDockWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QDragLeaveEvent*) ```
void q_dockwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnDragLeaveEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QDropEvent* event ```
void q_dockwidget_drop_event(void* self, void* event) {
    QDockWidget_DropEvent((QDockWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QDropEvent* event ```
void q_dockwidget_qbase_drop_event(void* self, void* event) {
    QDockWidget_QBaseDropEvent((QDockWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QDropEvent*) ```
void q_dockwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnDropEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QShowEvent* event ```
void q_dockwidget_show_event(void* self, void* event) {
    QDockWidget_ShowEvent((QDockWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QShowEvent* event ```
void q_dockwidget_qbase_show_event(void* self, void* event) {
    QDockWidget_QBaseShowEvent((QDockWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QShowEvent*) ```
void q_dockwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnShowEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QHideEvent* event ```
void q_dockwidget_hide_event(void* self, void* event) {
    QDockWidget_HideEvent((QDockWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QHideEvent* event ```
void q_dockwidget_qbase_hide_event(void* self, void* event) {
    QDockWidget_QBaseHideEvent((QDockWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QHideEvent*) ```
void q_dockwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnHideEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_dockwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDockWidget_NativeEvent((QDockWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_dockwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDockWidget_QBaseNativeEvent((QDockWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)(QDockWidget*, const char*, void*, intptr_t*) ```
void q_dockwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDockWidget_OnNativeEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dockwidget_metric(void* self, int64_t param1) {
    return QDockWidget_Metric((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dockwidget_qbase_metric(void* self, int64_t param1) {
    return QDockWidget_QBaseMetric((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, int32_t (*slot)(QDockWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_dockwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDockWidget_OnMetric((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QPainter* painter ```
void q_dockwidget_init_painter(void* self, void* painter) {
    QDockWidget_InitPainter((QDockWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QPainter* painter ```
void q_dockwidget_qbase_init_painter(void* self, void* painter) {
    QDockWidget_QBaseInitPainter((QDockWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QPainter*) ```
void q_dockwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnInitPainter((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QPoint* offset ```
QPaintDevice* q_dockwidget_redirected(void* self, void* offset) {
    return QDockWidget_Redirected((QDockWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QPoint* offset ```
QPaintDevice* q_dockwidget_qbase_redirected(void* self, void* offset) {
    return QDockWidget_QBaseRedirected((QDockWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QPaintDevice* (*slot)(QDockWidget*, QPoint*) ```
void q_dockwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDockWidget_OnRedirected((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
QPainter* q_dockwidget_shared_painter(void* self) {
    return QDockWidget_SharedPainter((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
QPainter* q_dockwidget_qbase_shared_painter(void* self) {
    return QDockWidget_QBaseSharedPainter((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QPainter* (*slot)() ```
void q_dockwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDockWidget_OnSharedPainter((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QInputMethodEvent* param1 ```
void q_dockwidget_input_method_event(void* self, void* param1) {
    QDockWidget_InputMethodEvent((QDockWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QInputMethodEvent* param1 ```
void q_dockwidget_qbase_input_method_event(void* self, void* param1) {
    QDockWidget_QBaseInputMethodEvent((QDockWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QInputMethodEvent*) ```
void q_dockwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnInputMethodEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dockwidget_input_method_query(void* self, int64_t param1) {
    return QDockWidget_InputMethodQuery((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dockwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QDockWidget_QBaseInputMethodQuery((QDockWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QVariant* (*slot)(QDockWidget*, enum Qt__InputMethodQuery) ```
void q_dockwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDockWidget_OnInputMethodQuery((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, bool next ```
bool q_dockwidget_focus_next_prev_child(void* self, bool next) {
    return QDockWidget_FocusNextPrevChild((QDockWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, bool next ```
bool q_dockwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QDockWidget_QBaseFocusNextPrevChild((QDockWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)(QDockWidget*, bool) ```
void q_dockwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDockWidget_OnFocusNextPrevChild((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QObject* watched, QEvent* event ```
bool q_dockwidget_event_filter(void* self, void* watched, void* event) {
    return QDockWidget_EventFilter((QDockWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QObject* watched, QEvent* event ```
bool q_dockwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QDockWidget_QBaseEventFilter((QDockWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)(QDockWidget*, QObject*, QEvent*) ```
void q_dockwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDockWidget_OnEventFilter((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QTimerEvent* event ```
void q_dockwidget_timer_event(void* self, void* event) {
    QDockWidget_TimerEvent((QDockWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QTimerEvent* event ```
void q_dockwidget_qbase_timer_event(void* self, void* event) {
    QDockWidget_QBaseTimerEvent((QDockWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QTimerEvent*) ```
void q_dockwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnTimerEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QChildEvent* event ```
void q_dockwidget_child_event(void* self, void* event) {
    QDockWidget_ChildEvent((QDockWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QChildEvent* event ```
void q_dockwidget_qbase_child_event(void* self, void* event) {
    QDockWidget_QBaseChildEvent((QDockWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QChildEvent*) ```
void q_dockwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnChildEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_custom_event(void* self, void* event) {
    QDockWidget_CustomEvent((QDockWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QEvent* event ```
void q_dockwidget_qbase_custom_event(void* self, void* event) {
    QDockWidget_QBaseCustomEvent((QDockWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QEvent*) ```
void q_dockwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnCustomEvent((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
void q_dockwidget_connect_notify(void* self, void* signal) {
    QDockWidget_ConnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
void q_dockwidget_qbase_connect_notify(void* self, void* signal) {
    QDockWidget_QBaseConnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMetaMethod*) ```
void q_dockwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnConnectNotify((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
void q_dockwidget_disconnect_notify(void* self, void* signal) {
    QDockWidget_DisconnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
void q_dockwidget_qbase_disconnect_notify(void* self, void* signal) {
    QDockWidget_QBaseDisconnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)(QDockWidget*, QMetaMethod*) ```
void q_dockwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDockWidget_OnDisconnectNotify((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_update_micro_focus(void* self) {
    QDockWidget_UpdateMicroFocus((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_qbase_update_micro_focus(void* self) {
    QDockWidget_QBaseUpdateMicroFocus((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)() ```
void q_dockwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QDockWidget_OnUpdateMicroFocus((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_create(void* self) {
    QDockWidget_Create((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_qbase_create(void* self) {
    QDockWidget_QBaseCreate((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)() ```
void q_dockwidget_on_create(void* self, void (*slot)()) {
    QDockWidget_OnCreate((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_destroy(void* self) {
    QDockWidget_Destroy((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
void q_dockwidget_qbase_destroy(void* self) {
    QDockWidget_QBaseDestroy((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, void (*slot)() ```
void q_dockwidget_on_destroy(void* self, void (*slot)()) {
    QDockWidget_OnDestroy((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_focus_next_child(void* self) {
    return QDockWidget_FocusNextChild((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_qbase_focus_next_child(void* self) {
    return QDockWidget_QBaseFocusNextChild((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)() ```
void q_dockwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QDockWidget_OnFocusNextChild((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_focus_previous_child(void* self) {
    return QDockWidget_FocusPreviousChild((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
bool q_dockwidget_qbase_focus_previous_child(void* self) {
    return QDockWidget_QBaseFocusPreviousChild((QDockWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)() ```
void q_dockwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QDockWidget_OnFocusPreviousChild((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
QObject* q_dockwidget_sender(void* self) {
    return QDockWidget_Sender((QDockWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
QObject* q_dockwidget_qbase_sender(void* self) {
    return QDockWidget_QBaseSender((QDockWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, QObject* (*slot)() ```
void q_dockwidget_on_sender(void* self, QObject* (*slot)()) {
    QDockWidget_OnSender((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_sender_signal_index(void* self) {
    return QDockWidget_SenderSignalIndex((QDockWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self ```
int32_t q_dockwidget_qbase_sender_signal_index(void* self) {
    return QDockWidget_QBaseSenderSignalIndex((QDockWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, int32_t (*slot)() ```
void q_dockwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDockWidget_OnSenderSignalIndex((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, const char* signal ```
int32_t q_dockwidget_receivers(void* self, const char* signal) {
    return QDockWidget_Receivers((QDockWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, const char* signal ```
int32_t q_dockwidget_qbase_receivers(void* self, const char* signal) {
    return QDockWidget_QBaseReceivers((QDockWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, int32_t (*slot)(QDockWidget*, const char*) ```
void q_dockwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDockWidget_OnReceivers((QDockWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
bool q_dockwidget_is_signal_connected(void* self, void* signal) {
    return QDockWidget_IsSignalConnected((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDockWidget* self, QMetaMethod* signal ```
bool q_dockwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QDockWidget_QBaseIsSignalConnected((QDockWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDockWidget* self, bool (*slot)(QDockWidget*, QMetaMethod*) ```
void q_dockwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDockWidget_OnIsSignalConnected((QDockWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDockWidget* self ```
void q_dockwidget_delete(void* self) {
    QDockWidget_Delete((QDockWidget*)(self));
}