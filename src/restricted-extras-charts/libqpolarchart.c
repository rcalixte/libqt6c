#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "libqchart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicslayoutitem.hpp"
#include "../libqgraphicssceneevent.hpp"
#include "../libqgraphicswidget.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqpolarchart.hpp"
#include "libqpolarchart.h"

QPolarChart* q_polarchart_new() {
    return QPolarChart_New();
}

QPolarChart* q_polarchart_new2(void* parent) {
    return QPolarChart_New2((QGraphicsItem*)parent);
}

QPolarChart* q_polarchart_new3(void* parent, int32_t wFlags) {
    return QPolarChart_New3((QGraphicsItem*)parent, wFlags);
}

const QMetaObject* q_polarchart_meta_object(const void* self) {
    return QPolarChart_MetaObject((QPolarChart*)self);
}

void q_polarchart_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QPolarChart_OnMetaObject((QPolarChart*)self, (intptr_t)callback);
}

const QMetaObject* q_polarchart_super_meta_object(const void* self) {
    return QPolarChart_SuperMetaObject((QPolarChart*)self);
}

void* q_polarchart_metacast(void* self, const char* param1) {
    return QPolarChart_Metacast((QPolarChart*)self, param1);
}

void q_polarchart_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPolarChart_OnMetacast((QPolarChart*)self, (intptr_t)callback);
}

void* q_polarchart_super_metacast(void* self, const char* param1) {
    return QPolarChart_SuperMetacast((QPolarChart*)self, param1);
}

int32_t q_polarchart_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPolarChart_Metacall((QPolarChart*)self, param1, param2, param3);
}

void q_polarchart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPolarChart_OnMetacall((QPolarChart*)self, (intptr_t)callback);
}

int32_t q_polarchart_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPolarChart_SuperMetacall((QPolarChart*)self, param1, param2, param3);
}

const char* q_polarchart_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_add_axis(void* self, void* axis, int32_t polarOrientation) {
    QPolarChart_AddAxis((QPolarChart*)self, (QAbstractAxis*)axis, polarOrientation);
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes(const void* self) {
    libqt_list _arr = QPolarChart_Axes((QPolarChart*)self);
    return _arr;
}

int32_t q_polarchart_axis_polar_orientation(void* axis) {
    return QPolarChart_AxisPolarOrientation((QAbstractAxis*)axis);
}

const char* q_polarchart_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_polarchart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes1(const void* self, int32_t polarOrientation) {
    libqt_list _arr = QPolarChart_Axes1((QPolarChart*)self, polarOrientation);
    return _arr;
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes2(const void* self, int32_t polarOrientation, void* series) {
    libqt_list _arr = QPolarChart_Axes2((QPolarChart*)self, polarOrientation, (QAbstractSeries*)series);
    return _arr;
}

void q_polarchart_add_series(void* self, void* series) {
    QChart_AddSeries((QChart*)self, (QAbstractSeries*)series);
}

void q_polarchart_remove_series(void* self, void* series) {
    QChart_RemoveSeries((QChart*)self, (QAbstractSeries*)series);
}

void q_polarchart_remove_all_series(void* self) {
    QChart_RemoveAllSeries((QChart*)self);
}

libqt_list /* of QAbstractSeries* */ q_polarchart_series(const void* self) {
    libqt_list _arr = QChart_Series((QChart*)self);
    return _arr;
}

void q_polarchart_set_axis_x(void* self, void* axis) {
    QChart_SetAxisX((QChart*)self, (QAbstractAxis*)axis);
}

void q_polarchart_set_axis_y(void* self, void* axis) {
    QChart_SetAxisY((QChart*)self, (QAbstractAxis*)axis);
}

QAbstractAxis* q_polarchart_axis_x(const void* self) {
    return QChart_AxisX((QChart*)self);
}

QAbstractAxis* q_polarchart_axis_y(const void* self) {
    return QChart_AxisY((QChart*)self);
}

void q_polarchart_remove_axis(void* self, void* axis) {
    QChart_RemoveAxis((QChart*)self, (QAbstractAxis*)axis);
}

void q_polarchart_create_default_axes(void* self) {
    QChart_CreateDefaultAxes((QChart*)self);
}

void q_polarchart_set_theme(void* self, int32_t theme) {
    QChart_SetTheme((QChart*)self, theme);
}

int32_t q_polarchart_theme(const void* self) {
    return QChart_Theme((QChart*)self);
}

void q_polarchart_set_title(void* self, const char* title) {
    QChart_SetTitle((QChart*)self, qstring(title));
}

const char* q_polarchart_title(const void* self) {
    libqt_string _str = QChart_Title((QChart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_title_font(void* self, const void* font) {
    QChart_SetTitleFont((QChart*)self, (QFont*)font);
}

QFont* q_polarchart_title_font(const void* self) {
    return QChart_TitleFont((QChart*)self);
}

void q_polarchart_set_title_brush(void* self, const void* brush) {
    QChart_SetTitleBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_title_brush(const void* self) {
    return QChart_TitleBrush((QChart*)self);
}

void q_polarchart_set_background_brush(void* self, const void* brush) {
    QChart_SetBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_background_brush(const void* self) {
    return QChart_BackgroundBrush((QChart*)self);
}

void q_polarchart_set_background_pen(void* self, const void* pen) {
    QChart_SetBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_polarchart_background_pen(const void* self) {
    return QChart_BackgroundPen((QChart*)self);
}

void q_polarchart_set_background_visible(void* self) {
    QChart_SetBackgroundVisible((QChart*)self);
}

bool q_polarchart_is_background_visible(const void* self) {
    return QChart_IsBackgroundVisible((QChart*)self);
}

void q_polarchart_set_drop_shadow_enabled(void* self) {
    QChart_SetDropShadowEnabled((QChart*)self);
}

bool q_polarchart_is_drop_shadow_enabled(const void* self) {
    return QChart_IsDropShadowEnabled((QChart*)self);
}

void q_polarchart_set_background_roundness(void* self, double diameter) {
    QChart_SetBackgroundRoundness((QChart*)self, diameter);
}

double q_polarchart_background_roundness(const void* self) {
    return QChart_BackgroundRoundness((QChart*)self);
}

void q_polarchart_set_animation_options(void* self, int32_t options) {
    QChart_SetAnimationOptions((QChart*)self, options);
}

int32_t q_polarchart_animation_options(const void* self) {
    return QChart_AnimationOptions((QChart*)self);
}

void q_polarchart_set_animation_duration(void* self, int msecs) {
    QChart_SetAnimationDuration((QChart*)self, msecs);
}

int32_t q_polarchart_animation_duration(const void* self) {
    return QChart_AnimationDuration((QChart*)self);
}

void q_polarchart_set_animation_easing_curve(void* self, const void* curve) {
    QChart_SetAnimationEasingCurve((QChart*)self, (QEasingCurve*)curve);
}

QEasingCurve* q_polarchart_animation_easing_curve(const void* self) {
    return QChart_AnimationEasingCurve((QChart*)self);
}

void q_polarchart_zoom_in(void* self) {
    QChart_ZoomIn((QChart*)self);
}

void q_polarchart_zoom_out(void* self) {
    QChart_ZoomOut((QChart*)self);
}

void q_polarchart_zoom_in2(void* self, const void* rect) {
    QChart_ZoomIn2((QChart*)self, (QRectF*)rect);
}

void q_polarchart_zoom(void* self, double factor) {
    QChart_Zoom((QChart*)self, factor);
}

void q_polarchart_zoom_reset(void* self) {
    QChart_ZoomReset((QChart*)self);
}

bool q_polarchart_is_zoomed(void* self) {
    return QChart_IsZoomed((QChart*)self);
}

void q_polarchart_scroll(void* self, double dx, double dy) {
    QChart_Scroll((QChart*)self, dx, dy);
}

QLegend* q_polarchart_legend(const void* self) {
    return QChart_Legend((QChart*)self);
}

void q_polarchart_set_margins(void* self, const void* margins) {
    QChart_SetMargins((QChart*)self, (QMargins*)margins);
}

QMargins* q_polarchart_margins(const void* self) {
    return QChart_Margins((QChart*)self);
}

QRectF* q_polarchart_plot_area(const void* self) {
    return QChart_PlotArea((QChart*)self);
}

void q_polarchart_set_plot_area(void* self, const void* rect) {
    QChart_SetPlotArea((QChart*)self, (QRectF*)rect);
}

void q_polarchart_set_plot_area_background_brush(void* self, const void* brush) {
    QChart_SetPlotAreaBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_plot_area_background_brush(const void* self) {
    return QChart_PlotAreaBackgroundBrush((QChart*)self);
}

void q_polarchart_set_plot_area_background_pen(void* self, const void* pen) {
    QChart_SetPlotAreaBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_polarchart_plot_area_background_pen(const void* self) {
    return QChart_PlotAreaBackgroundPen((QChart*)self);
}

void q_polarchart_set_plot_area_background_visible(void* self) {
    QChart_SetPlotAreaBackgroundVisible((QChart*)self);
}

bool q_polarchart_is_plot_area_background_visible(const void* self) {
    return QChart_IsPlotAreaBackgroundVisible((QChart*)self);
}

void q_polarchart_set_localize_numbers(void* self, bool localize) {
    QChart_SetLocalizeNumbers((QChart*)self, localize);
}

bool q_polarchart_localize_numbers(const void* self) {
    return QChart_LocalizeNumbers((QChart*)self);
}

void q_polarchart_set_locale(void* self, const void* locale) {
    QChart_SetLocale((QChart*)self, (QLocale*)locale);
}

QLocale* q_polarchart_locale(const void* self) {
    return QChart_Locale((QChart*)self);
}

QPointF* q_polarchart_map_to_value(void* self, const void* position) {
    return QChart_MapToValue((QChart*)self, (QPointF*)position);
}

QPointF* q_polarchart_map_to_position(void* self, const void* value) {
    return QChart_MapToPosition((QChart*)self, (QPointF*)value);
}

int32_t q_polarchart_chart_type(const void* self) {
    return QChart_ChartType((QChart*)self);
}

void q_polarchart_plot_area_changed(void* self, const void* plotArea) {
    QChart_PlotAreaChanged((QChart*)self, (QRectF*)plotArea);
}

void q_polarchart_on_plot_area_changed(void* self, void (*callback)(void*, const void*)) {
    QChart_Connect_PlotAreaChanged((QChart*)self, (intptr_t)callback);
}

void q_polarchart_set_axis_x2(void* self, void* axis, void* series) {
    QChart_SetAxisX2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

void q_polarchart_set_axis_y2(void* self, void* axis, void* series) {
    QChart_SetAxisY2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

QAbstractAxis* q_polarchart_axis_x1(const void* self, void* series) {
    return QChart_AxisX1((QChart*)self, (QAbstractSeries*)series);
}

QAbstractAxis* q_polarchart_axis_y1(const void* self, void* series) {
    return QChart_AxisY1((QChart*)self, (QAbstractSeries*)series);
}

void q_polarchart_set_background_visible1(void* self, bool visible) {
    QChart_SetBackgroundVisible1((QChart*)self, visible);
}

void q_polarchart_set_drop_shadow_enabled1(void* self, bool enabled) {
    QChart_SetDropShadowEnabled1((QChart*)self, enabled);
}

void q_polarchart_set_plot_area_background_visible1(void* self, bool visible) {
    QChart_SetPlotAreaBackgroundVisible1((QChart*)self, visible);
}

QPointF* q_polarchart_map_to_value2(void* self, const void* position, void* series) {
    return QChart_MapToValue2((QChart*)self, (QPointF*)position, (QAbstractSeries*)series);
}

QPointF* q_polarchart_map_to_position2(void* self, const void* value, void* series) {
    return QChart_MapToPosition2((QChart*)self, (QPointF*)value, (QAbstractSeries*)series);
}

QGraphicsLayoutItem* q_polarchart_as_q_graphics_layout_item(void* self) {
    return QGraphicsWidget_AsQGraphicsLayoutItem((QGraphicsWidget*)self);
}

QPolarChart* q_polarchart_from_q_graphics_layout_item(void* _qgraphicslayoutitem) {
    return (QPolarChart*)QGraphicsWidget_FromQGraphicsLayoutItem((QGraphicsLayoutItem*)_qgraphicslayoutitem);
}

QGraphicsLayout* q_polarchart_layout(const void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_polarchart_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_polarchart_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int32_t q_polarchart_layout_direction(const void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_polarchart_set_layout_direction(void* self, int32_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_polarchart_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_polarchart_style(const void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_polarchart_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_polarchart_font(const void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_polarchart_set_font(void* self, const void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_polarchart_palette(const void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_polarchart_set_palette(void* self, const void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_polarchart_auto_fill_background(const void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_polarchart_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_polarchart_resize(void* self, const void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_polarchart_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_polarchart_size(const void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_polarchart_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_polarchart_rect(const void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_polarchart_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_set_contents_margins2(void* self, void* margins) {
    QGraphicsWidget_SetContentsMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_polarchart_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_set_window_frame_margins2(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_polarchart_get_window_frame_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_polarchart_window_frame_geometry(const void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_polarchart_window_frame_rect(const void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int32_t q_polarchart_window_flags(const void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int32_t q_polarchart_window_type(const void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_polarchart_set_window_flags(void* self, int32_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_polarchart_is_active_window(const void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_polarchart_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_polarchart_window_title(const void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_polarchart_focus_policy(const void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_polarchart_set_focus_policy(void* self, int32_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_polarchart_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_polarchart_focus_widget(const void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_polarchart_grab_shortcut(void* self, const void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

void q_polarchart_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

void q_polarchart_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

void q_polarchart_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

void q_polarchart_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

void q_polarchart_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_polarchart_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_polarchart_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_polarchart_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_polarchart_actions(const void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_polarchart_set_attribute(void* self, int32_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_polarchart_test_attribute(const void* self, int32_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

void q_polarchart_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_polarchart_on_geometry_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

void q_polarchart_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_polarchart_on_layout_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

bool q_polarchart_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_polarchart_grab_shortcut2(void* self, const void* sequence, int32_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_polarchart_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_polarchart_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_polarchart_set_attribute2(void* self, int32_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

QGraphicsItem* q_polarchart_as_q_graphics_item(void* self) {
    return QGraphicsObject_AsQGraphicsItem((QGraphicsObject*)self);
}

QPolarChart* q_polarchart_from_q_graphics_item(void* _qgraphicsitem) {
    return (QPolarChart*)QGraphicsObject_FromQGraphicsItem((QGraphicsItem*)_qgraphicsitem);
}

void q_polarchart_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_polarchart_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_polarchart_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_polarchart_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_polarchart_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_polarchart_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_polarchart_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_polarchart_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_polarchart_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_polarchart_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_polarchart_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_polarchart_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_polarchart_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_polarchart_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_polarchart_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_polarchart_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_polarchart_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_polarchart_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_polarchart_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_polarchart_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_polarchart_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_polarchart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_polarchart_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_polarchart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_polarchart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_polarchart_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_polarchart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_polarchart_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_polarchart_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_polarchart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_polarchart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_polarchart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_polarchart_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_polarchart_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_polarchart_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_polarchart_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_polarchart_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_polarchart_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_polarchart_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_polarchart_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_polarchart_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_polarchart_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_polarchart_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_polarchart_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_polarchart_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_polarchart_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_polarchart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_polarchart_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_polarchart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_polarchart_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_polarchart_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_polarchart_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_polarchart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_polarchart_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_polarchart_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_polarchart_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_polarchart_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_polarchart_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_polarchart_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_polarchart_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_polarchart_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_polarchart_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_polarchart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_polarchart_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_polarchart_scene(const void* self) {
    return QGraphicsItem_Scene(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItem* q_polarchart_parent_item(const void* self) {
    return QGraphicsItem_ParentItem(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItem* q_polarchart_top_level_item(const void* self) {
    return QGraphicsItem_TopLevelItem(q_polarchart_as_q_graphics_item(self));
}

QGraphicsObject* q_polarchart_parent_object(const void* self) {
    return QGraphicsItem_ParentObject(q_polarchart_as_q_graphics_item(self));
}

QGraphicsWidget* q_polarchart_parent_widget(const void* self) {
    return QGraphicsItem_ParentWidget(q_polarchart_as_q_graphics_item(self));
}

QGraphicsWidget* q_polarchart_top_level_widget(const void* self) {
    return QGraphicsItem_TopLevelWidget(q_polarchart_as_q_graphics_item(self));
}

QGraphicsWidget* q_polarchart_window(const void* self) {
    return QGraphicsItem_Window(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItem* q_polarchart_panel(const void* self) {
    return QGraphicsItem_Panel(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_polarchart_child_items(const void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems(q_polarchart_as_q_graphics_item(self));
    return _arr;
}

bool q_polarchart_is_widget(const void* self) {
    return QGraphicsItem_IsWidget(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_window(const void* self) {
    return QGraphicsItem_IsWindow(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_panel(const void* self) {
    return QGraphicsItem_IsPanel(q_polarchart_as_q_graphics_item(self));
}

QGraphicsObject* q_polarchart_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject(q_polarchart_as_q_graphics_item(self));
}

const QGraphicsObject* q_polarchart_to_graphics_object2(const void* self) {
    return QGraphicsItem_ToGraphicsObject2(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItemGroup* q_polarchart_group(const void* self) {
    return QGraphicsItem_Group(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup(q_polarchart_as_q_graphics_item(self), (QGraphicsItemGroup*)group);
}

int32_t q_polarchart_flags(const void* self) {
    return QGraphicsItem_Flags(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag(q_polarchart_as_q_graphics_item(self), flag);
}

void q_polarchart_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags(q_polarchart_as_q_graphics_item(self), flags);
}

int32_t q_polarchart_cache_mode(const void* self) {
    return QGraphicsItem_CacheMode(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode(q_polarchart_as_q_graphics_item(self), mode);
}

int32_t q_polarchart_panel_modality(const void* self) {
    return QGraphicsItem_PanelModality(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality(q_polarchart_as_q_graphics_item(self), panelModality);
}

bool q_polarchart_is_blocked_by_modal_panel(const void* self) {
    return QGraphicsItem_IsBlockedByModalPanel(q_polarchart_as_q_graphics_item(self));
}

const char* q_polarchart_tool_tip(const void* self) {
    libqt_string _str = QGraphicsItem_ToolTip(q_polarchart_as_q_graphics_item(self));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip(q_polarchart_as_q_graphics_item(self), qstring(toolTip));
}

QCursor* q_polarchart_cursor(const void* self) {
    return QGraphicsItem_Cursor(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_cursor(void* self, const void* cursor) {
    QGraphicsItem_SetCursor(q_polarchart_as_q_graphics_item(self), (QCursor*)cursor);
}

bool q_polarchart_has_cursor(const void* self) {
    return QGraphicsItem_HasCursor(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_visible(const void* self) {
    return QGraphicsItem_IsVisible(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_visible_to(const void* self, const void* parent) {
    return QGraphicsItem_IsVisibleTo(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

void q_polarchart_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible(q_polarchart_as_q_graphics_item(self), visible);
}

void q_polarchart_hide(void* self) {
    QGraphicsItem_Hide(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_show(void* self) {
    QGraphicsItem_Show(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_enabled(const void* self) {
    return QGraphicsItem_IsEnabled(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled(q_polarchart_as_q_graphics_item(self), enabled);
}

bool q_polarchart_is_selected(const void* self) {
    return QGraphicsItem_IsSelected(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected(q_polarchart_as_q_graphics_item(self), selected);
}

bool q_polarchart_accept_drops(const void* self) {
    return QGraphicsItem_AcceptDrops(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops(q_polarchart_as_q_graphics_item(self), on);
}

double q_polarchart_opacity(const void* self) {
    return QGraphicsItem_Opacity(q_polarchart_as_q_graphics_item(self));
}

double q_polarchart_effective_opacity(const void* self) {
    return QGraphicsItem_EffectiveOpacity(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity(q_polarchart_as_q_graphics_item(self), opacity);
}

QGraphicsEffect* q_polarchart_graphics_effect(const void* self) {
    return QGraphicsItem_GraphicsEffect(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect(q_polarchart_as_q_graphics_item(self), (QGraphicsEffect*)effect);
}

int32_t q_polarchart_accepted_mouse_buttons(const void* self) {
    return QGraphicsItem_AcceptedMouseButtons(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons(q_polarchart_as_q_graphics_item(self), buttons);
}

bool q_polarchart_accept_hover_events(const void* self) {
    return QGraphicsItem_AcceptHoverEvents(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents(q_polarchart_as_q_graphics_item(self), enabled);
}

bool q_polarchart_accept_touch_events(const void* self) {
    return QGraphicsItem_AcceptTouchEvents(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents(q_polarchart_as_q_graphics_item(self), enabled);
}

bool q_polarchart_filters_child_events(const void* self) {
    return QGraphicsItem_FiltersChildEvents(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents(q_polarchart_as_q_graphics_item(self), enabled);
}

bool q_polarchart_handles_child_events(const void* self) {
    return QGraphicsItem_HandlesChildEvents(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents(q_polarchart_as_q_graphics_item(self), enabled);
}

bool q_polarchart_is_active(const void* self) {
    return QGraphicsItem_IsActive(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_active(void* self, bool active) {
    QGraphicsItem_SetActive(q_polarchart_as_q_graphics_item(self), active);
}

bool q_polarchart_has_focus(const void* self) {
    return QGraphicsItem_HasFocus(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_focus(void* self) {
    QGraphicsItem_SetFocus(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_clear_focus(void* self) {
    QGraphicsItem_ClearFocus(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItem* q_polarchart_focus_proxy(const void* self) {
    return QGraphicsItem_FocusProxy(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item);
}

QGraphicsItem* q_polarchart_focus_item(const void* self) {
    return QGraphicsItem_FocusItem(q_polarchart_as_q_graphics_item(self));
}

QGraphicsItem* q_polarchart_focus_scope_item(const void* self) {
    return QGraphicsItem_FocusScopeItem(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard(q_polarchart_as_q_graphics_item(self));
}

QPointF* q_polarchart_pos(const void* self) {
    return QGraphicsItem_Pos(q_polarchart_as_q_graphics_item(self));
}

double q_polarchart_x(const void* self) {
    return QGraphicsItem_X(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_x(void* self, double x) {
    QGraphicsItem_SetX(q_polarchart_as_q_graphics_item(self), x);
}

double q_polarchart_y(const void* self) {
    return QGraphicsItem_Y(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_y(void* self, double y) {
    QGraphicsItem_SetY(q_polarchart_as_q_graphics_item(self), y);
}

QPointF* q_polarchart_scene_pos(const void* self) {
    return QGraphicsItem_ScenePos(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_pos(void* self, const void* pos) {
    QGraphicsItem_SetPos(q_polarchart_as_q_graphics_item(self), (QPointF*)pos);
}

void q_polarchart_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2(q_polarchart_as_q_graphics_item(self), x, y);
}

void q_polarchart_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy(q_polarchart_as_q_graphics_item(self), dx, dy);
}

void q_polarchart_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QTransform* q_polarchart_transform(const void* self) {
    return QGraphicsItem_Transform(q_polarchart_as_q_graphics_item(self));
}

QTransform* q_polarchart_scene_transform(const void* self) {
    return QGraphicsItem_SceneTransform(q_polarchart_as_q_graphics_item(self));
}

QTransform* q_polarchart_device_transform(const void* self, const void* viewportTransform) {
    return QGraphicsItem_DeviceTransform(q_polarchart_as_q_graphics_item(self), (QTransform*)viewportTransform);
}

QTransform* q_polarchart_item_transform(const void* self, const void* other) {
    return QGraphicsItem_ItemTransform(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)other);
}

void q_polarchart_set_transform(void* self, const void* matrix) {
    QGraphicsItem_SetTransform(q_polarchart_as_q_graphics_item(self), (QTransform*)matrix);
}

void q_polarchart_reset_transform(void* self) {
    QGraphicsItem_ResetTransform(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation(q_polarchart_as_q_graphics_item(self), angle);
}

double q_polarchart_rotation(const void* self) {
    return QGraphicsItem_Rotation(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale(q_polarchart_as_q_graphics_item(self), scale);
}

double q_polarchart_scale(const void* self) {
    return QGraphicsItem_Scale(q_polarchart_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsTransform* */ q_polarchart_transformations(const void* self) {
    libqt_list _arr = QGraphicsItem_Transformations(q_polarchart_as_q_graphics_item(self));
    return _arr;
}

void q_polarchart_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations(q_polarchart_as_q_graphics_item(self), transformations);
}

QPointF* q_polarchart_transform_origin_point(const void* self) {
    return QGraphicsItem_TransformOriginPoint(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_transform_origin_point(void* self, const void* origin) {
    QGraphicsItem_SetTransformOriginPoint(q_polarchart_as_q_graphics_item(self), (QPointF*)origin);
}

void q_polarchart_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2(q_polarchart_as_q_graphics_item(self), ax, ay);
}

double q_polarchart_z_value(const void* self) {
    return QGraphicsItem_ZValue(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue(q_polarchart_as_q_graphics_item(self), z);
}

void q_polarchart_stack_before(void* self, const void* sibling) {
    QGraphicsItem_StackBefore(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)sibling);
}

QRectF* q_polarchart_children_bounding_rect(const void* self) {
    return QGraphicsItem_ChildrenBoundingRect(q_polarchart_as_q_graphics_item(self));
}

QRectF* q_polarchart_scene_bounding_rect(const void* self) {
    return QGraphicsItem_SceneBoundingRect(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_clipped(const void* self) {
    return QGraphicsItem_IsClipped(q_polarchart_as_q_graphics_item(self));
}

QPainterPath* q_polarchart_clip_path(const void* self) {
    return QGraphicsItem_ClipPath(q_polarchart_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items(const void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems(q_polarchart_as_q_graphics_item(self));
    return _arr;
}

bool q_polarchart_is_obscured(const void* self) {
    return QGraphicsItem_IsObscured(q_polarchart_as_q_graphics_item(self));
}

bool q_polarchart_is_obscured2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QRegion* q_polarchart_bounding_region(const void* self, const void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion(q_polarchart_as_q_graphics_item(self), (QTransform*)itemToDeviceTransform);
}

double q_polarchart_bounding_region_granularity(const void* self) {
    return QGraphicsItem_BoundingRegionGranularity(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity(q_polarchart_as_q_graphics_item(self), granularity);
}

void q_polarchart_update(void* self) {
    QGraphicsItem_Update(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2(q_polarchart_as_q_graphics_item(self), x, y, width, height);
}

QPointF* q_polarchart_map_to_item(const void* self, const void* item, const void* point) {
    return QGraphicsItem_MapToItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_polarchart_map_to_parent(const void* self, const void* point) {
    return QGraphicsItem_MapToParent(q_polarchart_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_polarchart_map_to_scene(const void* self, const void* point) {
    return QGraphicsItem_MapToScene(q_polarchart_as_q_graphics_item(self), (QPointF*)point);
}

QPolygonF* q_polarchart_map_to_item2(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapToItem2(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QPolygonF* q_polarchart_map_to_parent2(const void* self, const void* rect) {
    return QGraphicsItem_MapToParent2(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_polarchart_map_to_scene2(const void* self, const void* rect) {
    return QGraphicsItem_MapToScene2(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_to_item(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapRectToItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_to_parent(const void* self, const void* rect) {
    return QGraphicsItem_MapRectToParent(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_to_scene(const void* self, const void* rect) {
    return QGraphicsItem_MapRectToScene(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_polarchart_map_to_item3(const void* self, const void* item, const void* polygon) {
    return QGraphicsItem_MapToItem3(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPolygonF*)polygon);
}

QPolygonF* q_polarchart_map_to_parent3(const void* self, const void* polygon) {
    return QGraphicsItem_MapToParent3(q_polarchart_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPolygonF* q_polarchart_map_to_scene3(const void* self, const void* polygon) {
    return QGraphicsItem_MapToScene3(q_polarchart_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPainterPath* q_polarchart_map_to_item4(const void* self, const void* item, const void* path) {
    return QGraphicsItem_MapToItem4(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_to_parent4(const void* self, const void* path) {
    return QGraphicsItem_MapToParent4(q_polarchart_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_to_scene4(const void* self, const void* path) {
    return QGraphicsItem_MapToScene4(q_polarchart_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_polarchart_map_from_item(const void* self, const void* item, const void* point) {
    return QGraphicsItem_MapFromItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_polarchart_map_from_parent(const void* self, const void* point) {
    return QGraphicsItem_MapFromParent(q_polarchart_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_polarchart_map_from_scene(const void* self, const void* point) {
    return QGraphicsItem_MapFromScene(q_polarchart_as_q_graphics_item(self), (QPointF*)point);
}

QPolygonF* q_polarchart_map_from_item2(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapFromItem2(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QPolygonF* q_polarchart_map_from_parent2(const void* self, const void* rect) {
    return QGraphicsItem_MapFromParent2(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_polarchart_map_from_scene2(const void* self, const void* rect) {
    return QGraphicsItem_MapFromScene2(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_from_item(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapRectFromItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_from_parent(const void* self, const void* rect) {
    return QGraphicsItem_MapRectFromParent(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_from_scene(const void* self, const void* rect) {
    return QGraphicsItem_MapRectFromScene(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_polarchart_map_from_item3(const void* self, const void* item, const void* polygon) {
    return QGraphicsItem_MapFromItem3(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPolygonF*)polygon);
}

QPolygonF* q_polarchart_map_from_parent3(const void* self, const void* polygon) {
    return QGraphicsItem_MapFromParent3(q_polarchart_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPolygonF* q_polarchart_map_from_scene3(const void* self, const void* polygon) {
    return QGraphicsItem_MapFromScene3(q_polarchart_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPainterPath* q_polarchart_map_from_item4(const void* self, const void* item, const void* path) {
    return QGraphicsItem_MapFromItem4(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_from_parent4(const void* self, const void* path) {
    return QGraphicsItem_MapFromParent4(q_polarchart_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_from_scene4(const void* self, const void* path) {
    return QGraphicsItem_MapFromScene4(q_polarchart_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_polarchart_map_to_item5(const void* self, const void* item, double x, double y) {
    return QGraphicsItem_MapToItem5(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_polarchart_map_to_parent5(const void* self, double x, double y) {
    return QGraphicsItem_MapToParent5(q_polarchart_as_q_graphics_item(self), x, y);
}

QPointF* q_polarchart_map_to_scene5(const void* self, double x, double y) {
    return QGraphicsItem_MapToScene5(q_polarchart_as_q_graphics_item(self), x, y);
}

QPolygonF* q_polarchart_map_to_item6(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapToItem6(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QPolygonF* q_polarchart_map_to_parent6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapToParent6(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QPolygonF* q_polarchart_map_to_scene6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapToScene6(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_polarchart_map_rect_to_item2(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_polarchart_map_rect_to_parent2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_polarchart_map_rect_to_scene2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QPointF* q_polarchart_map_from_item5(const void* self, const void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_polarchart_map_from_parent5(const void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5(q_polarchart_as_q_graphics_item(self), x, y);
}

QPointF* q_polarchart_map_from_scene5(const void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5(q_polarchart_as_q_graphics_item(self), x, y);
}

QPolygonF* q_polarchart_map_from_item6(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromItem6(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QPolygonF* q_polarchart_map_from_parent6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromParent6(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QPolygonF* q_polarchart_map_from_scene6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromScene6(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_polarchart_map_rect_from_item2(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_polarchart_map_rect_from_parent2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_polarchart_map_rect_from_scene2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2(q_polarchart_as_q_graphics_item(self), x, y, w, h);
}

bool q_polarchart_is_ancestor_of(const void* self, const void* child) {
    return QGraphicsItem_IsAncestorOf(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)child);
}

QGraphicsItem* q_polarchart_common_ancestor_item(const void* self, const void* other) {
    return QGraphicsItem_CommonAncestorItem(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)other);
}

bool q_polarchart_is_under_mouse(const void* self) {
    return QGraphicsItem_IsUnderMouse(q_polarchart_as_q_graphics_item(self));
}

QVariant* q_polarchart_data(const void* self, int key) {
    return QGraphicsItem_Data(q_polarchart_as_q_graphics_item(self), key);
}

void q_polarchart_set_data(void* self, int key, const void* value) {
    QGraphicsItem_SetData(q_polarchart_as_q_graphics_item(self), key, (QVariant*)value);
}

int32_t q_polarchart_input_method_hints(const void* self) {
    return QGraphicsItem_InputMethodHints(q_polarchart_as_q_graphics_item(self));
}

void q_polarchart_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints(q_polarchart_as_q_graphics_item(self), hints);
}

void q_polarchart_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_polarchart_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_polarchart_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2(q_polarchart_as_q_graphics_item(self), flag, enabled);
}

void q_polarchart_set_cache_mode2(void* self, int32_t mode, const void* cacheSize) {
    QGraphicsItem_SetCacheMode2(q_polarchart_as_q_graphics_item(self), mode, (QSize*)cacheSize);
}

bool q_polarchart_is_blocked_by_modal_panel1(const void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1(q_polarchart_as_q_graphics_item(self), (QGraphicsItem**)blockingPanel);
}

void q_polarchart_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1(q_polarchart_as_q_graphics_item(self), focusReason);
}

void q_polarchart_ensure_visible1(void* self, const void* rect) {
    QGraphicsItem_EnsureVisible1(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

void q_polarchart_ensure_visible22(void* self, const void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22(q_polarchart_as_q_graphics_item(self), (QRectF*)rect, xmargin);
}

void q_polarchart_ensure_visible3(void* self, const void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3(q_polarchart_as_q_graphics_item(self), (QRectF*)rect, xmargin, ymargin);
}

void q_polarchart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5(q_polarchart_as_q_graphics_item(self), x, y, w, h, xmargin);
}

void q_polarchart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6(q_polarchart_as_q_graphics_item(self), x, y, w, h, xmargin, ymargin);
}

QTransform* q_polarchart_item_transform2(const void* self, const void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2(q_polarchart_as_q_graphics_item(self), (QGraphicsItem*)other, (bool*)ok);
}

void q_polarchart_set_transform2(void* self, const void* matrix, bool combine) {
    QGraphicsItem_SetTransform2(q_polarchart_as_q_graphics_item(self), (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items1(const void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1(q_polarchart_as_q_graphics_item(self), mode);
    return _arr;
}

bool q_polarchart_is_obscured1(const void* self, const void* rect) {
    return QGraphicsItem_IsObscured1(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

void q_polarchart_update1(void* self, const void* rect) {
    QGraphicsItem_Update1(q_polarchart_as_q_graphics_item(self), (QRectF*)rect);
}

void q_polarchart_scroll3(void* self, double dx, double dy, const void* rect) {
    QGraphicsItem_Scroll3(q_polarchart_as_q_graphics_item(self), dx, dy, (QRectF*)rect);
}

void q_polarchart_set_size_policy(void* self, const void* policy) {
    QGraphicsLayoutItem_SetSizePolicy(q_polarchart_as_q_graphics_layout_item(self), (QSizePolicy*)policy);
}

void q_polarchart_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2(q_polarchart_as_q_graphics_layout_item(self), hPolicy, vPolicy);
}

QSizePolicy* q_polarchart_size_policy(const void* self) {
    return QGraphicsLayoutItem_SizePolicy(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_minimum_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetMinimumSize(q_polarchart_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_polarchart_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2(q_polarchart_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_polarchart_minimum_size(const void* self) {
    return QGraphicsLayoutItem_MinimumSize(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth(q_polarchart_as_q_graphics_layout_item(self), width);
}

double q_polarchart_minimum_width(const void* self) {
    return QGraphicsLayoutItem_MinimumWidth(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight(q_polarchart_as_q_graphics_layout_item(self), height);
}

double q_polarchart_minimum_height(const void* self) {
    return QGraphicsLayoutItem_MinimumHeight(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_preferred_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetPreferredSize(q_polarchart_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_polarchart_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2(q_polarchart_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_polarchart_preferred_size(const void* self) {
    return QGraphicsLayoutItem_PreferredSize(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth(q_polarchart_as_q_graphics_layout_item(self), width);
}

double q_polarchart_preferred_width(const void* self) {
    return QGraphicsLayoutItem_PreferredWidth(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight(q_polarchart_as_q_graphics_layout_item(self), height);
}

double q_polarchart_preferred_height(const void* self) {
    return QGraphicsLayoutItem_PreferredHeight(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_maximum_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetMaximumSize(q_polarchart_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_polarchart_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2(q_polarchart_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_polarchart_maximum_size(const void* self) {
    return QGraphicsLayoutItem_MaximumSize(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth(q_polarchart_as_q_graphics_layout_item(self), width);
}

double q_polarchart_maximum_width(const void* self) {
    return QGraphicsLayoutItem_MaximumWidth(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight(q_polarchart_as_q_graphics_layout_item(self), height);
}

double q_polarchart_maximum_height(const void* self) {
    return QGraphicsLayoutItem_MaximumHeight(q_polarchart_as_q_graphics_layout_item(self));
}

QRectF* q_polarchart_geometry(const void* self) {
    return QGraphicsLayoutItem_Geometry(q_polarchart_as_q_graphics_layout_item(self));
}

QRectF* q_polarchart_contents_rect(const void* self) {
    return QGraphicsLayoutItem_ContentsRect(q_polarchart_as_q_graphics_layout_item(self));
}

QSizeF* q_polarchart_effective_size_hint(const void* self, int32_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint(q_polarchart_as_q_graphics_layout_item(self), which);
}

QGraphicsLayoutItem* q_polarchart_parent_layout_item(const void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem(q_polarchart_as_q_graphics_layout_item(self), (QGraphicsLayoutItem*)parent);
}

bool q_polarchart_is_layout(const void* self) {
    return QGraphicsLayoutItem_IsLayout(q_polarchart_as_q_graphics_layout_item(self));
}

QGraphicsItem* q_polarchart_graphics_item(const void* self) {
    return QGraphicsLayoutItem_GraphicsItem(q_polarchart_as_q_graphics_layout_item(self));
}

bool q_polarchart_owned_by_layout(const void* self) {
    return QGraphicsLayoutItem_OwnedByLayout(q_polarchart_as_q_graphics_layout_item(self));
}

void q_polarchart_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3(q_polarchart_as_q_graphics_layout_item(self), hPolicy, vPolicy, controlType);
}

QSizeF* q_polarchart_effective_size_hint2(const void* self, int32_t which, const void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2(q_polarchart_as_q_graphics_layout_item(self), which, (QSizeF*)constraint);
}

void q_polarchart_set_geometry(void* self, const void* rect) {
    QPolarChart_SetGeometry((QPolarChart*)self, (QRectF*)rect);
}

void q_polarchart_super_set_geometry(void* self, const void* rect) {
    QPolarChart_SuperSetGeometry((QPolarChart*)self, (QRectF*)rect);
}

void q_polarchart_on_set_geometry(void* self, void (*callback)(void*, const void*)) {
    QPolarChart_OnSetGeometry((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_GetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

void q_polarchart_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_SuperGetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

void q_polarchart_on_get_contents_margins(const void* self, void (*callback)(const void*, double*, double*, double*, double*)) {
    QPolarChart_OnGetContentsMargins((const QPolarChart*)self, (intptr_t)callback);
}

int32_t q_polarchart_type(const void* self) {
    return QPolarChart_Type((QPolarChart*)self);
}

int32_t q_polarchart_super_type(const void* self) {
    return QPolarChart_SuperType((QPolarChart*)self);
}

void q_polarchart_on_type(const void* self, int32_t (*callback)(const void*)) {
    QPolarChart_OnType((const QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_paint(void* self, void* painter, const void* option, void* widget) {
    QPolarChart_Paint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_super_paint(void* self, void* painter, const void* option, void* widget) {
    QPolarChart_SuperPaint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_on_paint(void* self, void (*callback)(void*, void*, const void*, void*)) {
    QPolarChart_OnPaint((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_paint_window_frame(void* self, void* painter, const void* option, void* widget) {
    QPolarChart_PaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_super_paint_window_frame(void* self, void* painter, const void* option, void* widget) {
    QPolarChart_SuperPaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_on_paint_window_frame(void* self, void (*callback)(void*, void*, const void*, void*)) {
    QPolarChart_OnPaintWindowFrame((QPolarChart*)self, (intptr_t)callback);
}

QRectF* q_polarchart_bounding_rect(const void* self) {
    return QPolarChart_BoundingRect((QPolarChart*)self);
}

QRectF* q_polarchart_super_bounding_rect(const void* self) {
    return QPolarChart_SuperBoundingRect((QPolarChart*)self);
}

void q_polarchart_on_bounding_rect(const void* self, QRectF* (*callback)(const void*)) {
    QPolarChart_OnBoundingRect((const QPolarChart*)self, (intptr_t)callback);
}

QPainterPath* q_polarchart_shape(const void* self) {
    return QPolarChart_Shape((QPolarChart*)self);
}

QPainterPath* q_polarchart_super_shape(const void* self) {
    return QPolarChart_SuperShape((QPolarChart*)self);
}

void q_polarchart_on_shape(const void* self, QPainterPath* (*callback)(const void*)) {
    QPolarChart_OnShape((const QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_init_style_option(const void* self, void* option) {
    QPolarChart_InitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

void q_polarchart_super_init_style_option(const void* self, void* option) {
    QPolarChart_SuperInitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

void q_polarchart_on_init_style_option(const void* self, void (*callback)(const void*, void*)) {
    QPolarChart_OnInitStyleOption((const QPolarChart*)self, (intptr_t)callback);
}

QSizeF* q_polarchart_size_hint(const void* self, int32_t which, const void* constraint) {
    return QPolarChart_SizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

QSizeF* q_polarchart_super_size_hint(const void* self, int32_t which, const void* constraint) {
    return QPolarChart_SuperSizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

void q_polarchart_on_size_hint(const void* self, QSizeF* (*callback)(const void*, int32_t, const void*)) {
    QPolarChart_OnSizeHint((const QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_update_geometry(void* self) {
    QPolarChart_UpdateGeometry((QPolarChart*)self);
}

void q_polarchart_super_update_geometry(void* self) {
    QPolarChart_SuperUpdateGeometry((QPolarChart*)self);
}

void q_polarchart_on_update_geometry(void* self, void (*callback)(void*)) {
    QPolarChart_OnUpdateGeometry((QPolarChart*)self, (intptr_t)callback);
}

QVariant* q_polarchart_item_change(void* self, int32_t change, const void* value) {
    return QPolarChart_ItemChange((QPolarChart*)self, change, (QVariant*)value);
}

QVariant* q_polarchart_super_item_change(void* self, int32_t change, const void* value) {
    return QPolarChart_SuperItemChange((QPolarChart*)self, change, (QVariant*)value);
}

void q_polarchart_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, const void*)) {
    QPolarChart_OnItemChange((QPolarChart*)self, (intptr_t)callback);
}

QVariant* q_polarchart_property_change(void* self, const char* propertyName, const void* value) {
    return QPolarChart_PropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

QVariant* q_polarchart_super_property_change(void* self, const char* propertyName, const void* value) {
    return QPolarChart_SuperPropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

void q_polarchart_on_property_change(void* self, QVariant* (*callback)(void*, const char*, const void*)) {
    QPolarChart_OnPropertyChange((QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_scene_event(void* self, void* event) {
    return QPolarChart_SceneEvent((QPolarChart*)self, (QEvent*)event);
}

bool q_polarchart_super_scene_event(void* self, void* event) {
    return QPolarChart_SuperSceneEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QPolarChart_OnSceneEvent((QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_window_frame_event(void* self, void* e) {
    return QPolarChart_WindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

bool q_polarchart_super_window_frame_event(void* self, void* e) {
    return QPolarChart_SuperWindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

void q_polarchart_on_window_frame_event(void* self, bool (*callback)(void*, void*)) {
    QPolarChart_OnWindowFrameEvent((QPolarChart*)self, (intptr_t)callback);
}

int32_t q_polarchart_window_frame_section_at(const void* self, const void* pos) {
    return QPolarChart_WindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

int32_t q_polarchart_super_window_frame_section_at(const void* self, const void* pos) {
    return QPolarChart_SuperWindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

void q_polarchart_on_window_frame_section_at(const void* self, int32_t (*callback)(const void*, const void*)) {
    QPolarChart_OnWindowFrameSectionAt((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_event(void* self, void* event) {
    return QPolarChart_Event((QPolarChart*)self, (QEvent*)event);
}

bool q_polarchart_super_event(void* self, void* event) {
    return QPolarChart_SuperEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_event(void* self, bool (*callback)(void*, void*)) {
    QPolarChart_OnEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_change_event(void* self, void* event) {
    QPolarChart_ChangeEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_change_event(void* self, void* event) {
    QPolarChart_SuperChangeEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnChangeEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_close_event(void* self, void* event) {
    QPolarChart_CloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

void q_polarchart_super_close_event(void* self, void* event) {
    QPolarChart_SuperCloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

void q_polarchart_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnCloseEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_focus_in_event(void* self, void* event) {
    QPolarChart_FocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_super_focus_in_event(void* self, void* event) {
    QPolarChart_SuperFocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnFocusInEvent((QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_FocusNextPrevChild((QPolarChart*)self, next);
}

bool q_polarchart_super_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_SuperFocusNextPrevChild((QPolarChart*)self, next);
}

void q_polarchart_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPolarChart_OnFocusNextPrevChild((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_focus_out_event(void* self, void* event) {
    QPolarChart_FocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_super_focus_out_event(void* self, void* event) {
    QPolarChart_SuperFocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnFocusOutEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_hide_event(void* self, void* event) {
    QPolarChart_HideEvent((QPolarChart*)self, (QHideEvent*)event);
}

void q_polarchart_super_hide_event(void* self, void* event) {
    QPolarChart_SuperHideEvent((QPolarChart*)self, (QHideEvent*)event);
}

void q_polarchart_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnHideEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_move_event(void* self, void* event) {
    QPolarChart_MoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_polarchart_super_move_event(void* self, void* event) {
    QPolarChart_SuperMoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_polarchart_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnMoveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_polish_event(void* self) {
    QPolarChart_PolishEvent((QPolarChart*)self);
}

void q_polarchart_super_polish_event(void* self) {
    QPolarChart_SuperPolishEvent((QPolarChart*)self);
}

void q_polarchart_on_polish_event(void* self, void (*callback)(void*)) {
    QPolarChart_OnPolishEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_resize_event(void* self, void* event) {
    QPolarChart_ResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_polarchart_super_resize_event(void* self, void* event) {
    QPolarChart_SuperResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_polarchart_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnResizeEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_show_event(void* self, void* event) {
    QPolarChart_ShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

void q_polarchart_super_show_event(void* self, void* event) {
    QPolarChart_SuperShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

void q_polarchart_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnShowEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_hover_move_event(void* self, void* event) {
    QPolarChart_HoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_super_hover_move_event(void* self, void* event) {
    QPolarChart_SuperHoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnHoverMoveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_hover_leave_event(void* self, void* event) {
    QPolarChart_HoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_super_hover_leave_event(void* self, void* event) {
    QPolarChart_SuperHoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnHoverLeaveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_grab_mouse_event(void* self, void* event) {
    QPolarChart_GrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_grab_mouse_event(void* self, void* event) {
    QPolarChart_SuperGrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_grab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnGrabMouseEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_UngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_SuperUngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnUngrabMouseEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_grab_keyboard_event(void* self, void* event) {
    QPolarChart_GrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_grab_keyboard_event(void* self, void* event) {
    QPolarChart_SuperGrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_grab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnGrabKeyboardEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_UngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_SuperUngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnUngrabKeyboardEvent((QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_EventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

bool q_polarchart_super_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_SuperEventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

void q_polarchart_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPolarChart_OnEventFilter((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_timer_event(void* self, void* event) {
    QPolarChart_TimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

void q_polarchart_super_timer_event(void* self, void* event) {
    QPolarChart_SuperTimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

void q_polarchart_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnTimerEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_child_event(void* self, void* event) {
    QPolarChart_ChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

void q_polarchart_super_child_event(void* self, void* event) {
    QPolarChart_SuperChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

void q_polarchart_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnChildEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_custom_event(void* self, void* event) {
    QPolarChart_CustomEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_super_custom_event(void* self, void* event) {
    QPolarChart_SuperCustomEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnCustomEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_connect_notify(void* self, const void* signal) {
    QPolarChart_ConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_super_connect_notify(void* self, const void* signal) {
    QPolarChart_SuperConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QPolarChart_OnConnectNotify((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_disconnect_notify(void* self, const void* signal) {
    QPolarChart_DisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_super_disconnect_notify(void* self, const void* signal) {
    QPolarChart_SuperDisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QPolarChart_OnDisconnectNotify((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_advance(void* self, int phase) {
    QPolarChart_Advance((QPolarChart*)self, phase);
}

void q_polarchart_super_advance(void* self, int phase) {
    QPolarChart_SuperAdvance((QPolarChart*)self, phase);
}

void q_polarchart_on_advance(void* self, void (*callback)(void*, int)) {
    QPolarChart_OnAdvance((QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_contains(const void* self, const void* point) {
    return QPolarChart_Contains((QPolarChart*)self, (QPointF*)point);
}

bool q_polarchart_super_contains(const void* self, const void* point) {
    return QPolarChart_SuperContains((QPolarChart*)self, (QPointF*)point);
}

void q_polarchart_on_contains(const void* self, bool (*callback)(const void*, const void*)) {
    QPolarChart_OnContains((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_collides_with_item(const void* self, const void* other, int32_t mode) {
    return QPolarChart_CollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

bool q_polarchart_super_collides_with_item(const void* self, const void* other, int32_t mode) {
    return QPolarChart_SuperCollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

void q_polarchart_on_collides_with_item(const void* self, bool (*callback)(const void*, const void*, int32_t)) {
    QPolarChart_OnCollidesWithItem((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_collides_with_path(const void* self, const void* path, int32_t mode) {
    return QPolarChart_CollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

bool q_polarchart_super_collides_with_path(const void* self, const void* path, int32_t mode) {
    return QPolarChart_SuperCollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

void q_polarchart_on_collides_with_path(const void* self, bool (*callback)(const void*, const void*, int32_t)) {
    QPolarChart_OnCollidesWithPath((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_is_obscured_by(const void* self, const void* item) {
    return QPolarChart_IsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

bool q_polarchart_super_is_obscured_by(const void* self, const void* item) {
    return QPolarChart_SuperIsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

void q_polarchart_on_is_obscured_by(const void* self, bool (*callback)(const void*, const void*)) {
    QPolarChart_OnIsObscuredBy((const QPolarChart*)self, (intptr_t)callback);
}

QPainterPath* q_polarchart_opaque_area(const void* self) {
    return QPolarChart_OpaqueArea((QPolarChart*)self);
}

QPainterPath* q_polarchart_super_opaque_area(const void* self) {
    return QPolarChart_SuperOpaqueArea((QPolarChart*)self);
}

void q_polarchart_on_opaque_area(const void* self, QPainterPath* (*callback)(const void*)) {
    QPolarChart_OnOpaqueArea((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_SceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_polarchart_super_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_SuperSceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_polarchart_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPolarChart_OnSceneEventFilter((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_context_menu_event(void* self, void* event) {
    QPolarChart_ContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_polarchart_super_context_menu_event(void* self, void* event) {
    QPolarChart_SuperContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_polarchart_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnContextMenuEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_drag_enter_event(void* self, void* event) {
    QPolarChart_DragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_super_drag_enter_event(void* self, void* event) {
    QPolarChart_SuperDragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnDragEnterEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_drag_leave_event(void* self, void* event) {
    QPolarChart_DragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_super_drag_leave_event(void* self, void* event) {
    QPolarChart_SuperDragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnDragLeaveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_drag_move_event(void* self, void* event) {
    QPolarChart_DragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_super_drag_move_event(void* self, void* event) {
    QPolarChart_SuperDragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnDragMoveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_drop_event(void* self, void* event) {
    QPolarChart_DropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_super_drop_event(void* self, void* event) {
    QPolarChart_SuperDropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnDropEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_hover_enter_event(void* self, void* event) {
    QPolarChart_HoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_super_hover_enter_event(void* self, void* event) {
    QPolarChart_SuperHoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnHoverEnterEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_key_press_event(void* self, void* event) {
    QPolarChart_KeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_super_key_press_event(void* self, void* event) {
    QPolarChart_SuperKeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnKeyPressEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_key_release_event(void* self, void* event) {
    QPolarChart_KeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_super_key_release_event(void* self, void* event) {
    QPolarChart_SuperKeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnKeyReleaseEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_mouse_press_event(void* self, void* event) {
    QPolarChart_MousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_super_mouse_press_event(void* self, void* event) {
    QPolarChart_SuperMousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnMousePressEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_mouse_move_event(void* self, void* event) {
    QPolarChart_MouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_super_mouse_move_event(void* self, void* event) {
    QPolarChart_SuperMouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnMouseMoveEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_mouse_release_event(void* self, void* event) {
    QPolarChart_MouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_super_mouse_release_event(void* self, void* event) {
    QPolarChart_SuperMouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnMouseReleaseEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_mouse_double_click_event(void* self, void* event) {
    QPolarChart_MouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_super_mouse_double_click_event(void* self, void* event) {
    QPolarChart_SuperMouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnMouseDoubleClickEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_wheel_event(void* self, void* event) {
    QPolarChart_WheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_polarchart_super_wheel_event(void* self, void* event) {
    QPolarChart_SuperWheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_polarchart_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnWheelEvent((QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_input_method_event(void* self, void* event) {
    QPolarChart_InputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

void q_polarchart_super_input_method_event(void* self, void* event) {
    QPolarChart_SuperInputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

void q_polarchart_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPolarChart_OnInputMethodEvent((QPolarChart*)self, (intptr_t)callback);
}

QVariant* q_polarchart_input_method_query(const void* self, int32_t query) {
    return QPolarChart_InputMethodQuery((QPolarChart*)self, query);
}

QVariant* q_polarchart_super_input_method_query(const void* self, int32_t query) {
    return QPolarChart_SuperInputMethodQuery((QPolarChart*)self, query);
}

void q_polarchart_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t)) {
    QPolarChart_OnInputMethodQuery((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_supports_extension(const void* self, int32_t extension) {
    return QPolarChart_SupportsExtension((QPolarChart*)self, extension);
}

bool q_polarchart_super_supports_extension(const void* self, int32_t extension) {
    return QPolarChart_SuperSupportsExtension((QPolarChart*)self, extension);
}

void q_polarchart_on_supports_extension(const void* self, bool (*callback)(const void*, int32_t)) {
    QPolarChart_OnSupportsExtension((const QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_set_extension(void* self, int32_t extension, const void* variant) {
    QPolarChart_SetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

void q_polarchart_super_set_extension(void* self, int32_t extension, const void* variant) {
    QPolarChart_SuperSetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

void q_polarchart_on_set_extension(void* self, void (*callback)(void*, int32_t, const void*)) {
    QPolarChart_OnSetExtension((QPolarChart*)self, (intptr_t)callback);
}

QVariant* q_polarchart_extension(const void* self, const void* variant) {
    return QPolarChart_Extension((QPolarChart*)self, (QVariant*)variant);
}

QVariant* q_polarchart_super_extension(const void* self, const void* variant) {
    return QPolarChart_SuperExtension((QPolarChart*)self, (QVariant*)variant);
}

void q_polarchart_on_extension(const void* self, QVariant* (*callback)(const void*, const void*)) {
    QPolarChart_OnExtension((const QPolarChart*)self, (intptr_t)callback);
}

bool q_polarchart_is_empty(const void* self) {
    return QPolarChart_IsEmpty((QPolarChart*)self);
}

bool q_polarchart_super_is_empty(const void* self) {
    return QPolarChart_SuperIsEmpty((QPolarChart*)self);
}

void q_polarchart_on_is_empty(const void* self, bool (*callback)(const void*)) {
    QPolarChart_OnIsEmpty((const QPolarChart*)self, (intptr_t)callback);
}

void q_polarchart_update_micro_focus(void* self) {
    QPolarChart_UpdateMicroFocus((QPolarChart*)self);
}

QObject* q_polarchart_sender(const void* self) {
    return QPolarChart_Sender((QPolarChart*)self);
}

int32_t q_polarchart_sender_signal_index(const void* self) {
    return QPolarChart_SenderSignalIndex((QPolarChart*)self);
}

int32_t q_polarchart_receivers(const void* self, const char* signal) {
    return QPolarChart_Receivers((QPolarChart*)self, signal);
}

bool q_polarchart_is_signal_connected(const void* self, const void* signal) {
    return QPolarChart_IsSignalConnected((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_add_to_index(void* self) {
    QPolarChart_AddToIndex((QPolarChart*)self);
}

void q_polarchart_remove_from_index(void* self) {
    QPolarChart_RemoveFromIndex((QPolarChart*)self);
}

void q_polarchart_prepare_geometry_change(void* self) {
    QPolarChart_PrepareGeometryChange((QPolarChart*)self);
}

void q_polarchart_set_graphics_item(void* self, void* item) {
    QPolarChart_SetGraphicsItem((QPolarChart*)self, (QGraphicsItem*)item);
}

void q_polarchart_set_owned_by_layout(void* self, bool ownedByLayout) {
    QPolarChart_SetOwnedByLayout((QPolarChart*)self, ownedByLayout);
}

void q_polarchart_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_polarchart_delete(void* self) {
    QPolarChart_Delete((QPolarChart*)(self));
}
