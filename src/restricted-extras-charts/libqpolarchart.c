#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicslayoutitem.hpp"
#include "../libqgraphicswidget.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqpolarchart.hpp"
#include "libqpolarchart.h"

QPolarChart* q_polarchart_new() {
    return QPolarChart_new();
}

QPolarChart* q_polarchart_new2(void* parent) {
    return QPolarChart_new2((QGraphicsItem*)parent);
}

QPolarChart* q_polarchart_new3(void* parent, int64_t wFlags) {
    return QPolarChart_new3((QGraphicsItem*)parent, wFlags);
}

const QMetaObject* q_polarchart_meta_object(void* self) {
    return QPolarChart_MetaObject((QPolarChart*)self);
}

void* q_polarchart_metacast(void* self, const char* param1) {
    return QPolarChart_Metacast((QPolarChart*)self, param1);
}

int32_t q_polarchart_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPolarChart_Metacall((QPolarChart*)self, param1, param2, param3);
}

void q_polarchart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPolarChart_OnMetacall((QPolarChart*)self, (intptr_t)slot);
}

int32_t q_polarchart_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPolarChart_QBaseMetacall((QPolarChart*)self, param1, param2, param3);
}

const char* q_polarchart_tr(const char* s) {
    libqt_string _str = QPolarChart_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_add_axis(void* self, void* axis, int64_t polarOrientation) {
    QPolarChart_AddAxis((QPolarChart*)self, (QAbstractAxis*)axis, polarOrientation);
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes(void* self) {
    libqt_list _arr = QPolarChart_Axes((QPolarChart*)self);
    return _arr;
}

int64_t q_polarchart_axis_polar_orientation(void* axis) {
    return QPolarChart_AxisPolarOrientation((QAbstractAxis*)axis);
}

const char* q_polarchart_tr2(const char* s, const char* c) {
    libqt_string _str = QPolarChart_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_polarchart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPolarChart_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes1(void* self, int64_t polarOrientation) {
    libqt_list _arr = QPolarChart_Axes1((QPolarChart*)self, polarOrientation);
    return _arr;
}

libqt_list /* of QAbstractAxis* */ q_polarchart_axes2(void* self, int64_t polarOrientation, void* series) {
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

libqt_list /* of QAbstractSeries* */ q_polarchart_series(void* self) {
    libqt_list _arr = QChart_Series((QChart*)self);
    return _arr;
}

void q_polarchart_set_axis_x(void* self, void* axis) {
    QChart_SetAxisX((QChart*)self, (QAbstractAxis*)axis);
}

void q_polarchart_set_axis_y(void* self, void* axis) {
    QChart_SetAxisY((QChart*)self, (QAbstractAxis*)axis);
}

QAbstractAxis* q_polarchart_axis_x(void* self) {
    return QChart_AxisX((QChart*)self);
}

QAbstractAxis* q_polarchart_axis_y(void* self) {
    return QChart_AxisY((QChart*)self);
}

void q_polarchart_remove_axis(void* self, void* axis) {
    QChart_RemoveAxis((QChart*)self, (QAbstractAxis*)axis);
}

void q_polarchart_create_default_axes(void* self) {
    QChart_CreateDefaultAxes((QChart*)self);
}

void q_polarchart_set_theme(void* self, int64_t theme) {
    QChart_SetTheme((QChart*)self, theme);
}

int64_t q_polarchart_theme(void* self) {
    return QChart_Theme((QChart*)self);
}

void q_polarchart_set_title(void* self, const char* title) {
    QChart_SetTitle((QChart*)self, qstring(title));
}

const char* q_polarchart_title(void* self) {
    libqt_string _str = QChart_Title((QChart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_title_font(void* self, void* font) {
    QChart_SetTitleFont((QChart*)self, (QFont*)font);
}

QFont* q_polarchart_title_font(void* self) {
    return QChart_TitleFont((QChart*)self);
}

void q_polarchart_set_title_brush(void* self, void* brush) {
    QChart_SetTitleBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_title_brush(void* self) {
    return QChart_TitleBrush((QChart*)self);
}

void q_polarchart_set_background_brush(void* self, void* brush) {
    QChart_SetBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_background_brush(void* self) {
    return QChart_BackgroundBrush((QChart*)self);
}

void q_polarchart_set_background_pen(void* self, void* pen) {
    QChart_SetBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_polarchart_background_pen(void* self) {
    return QChart_BackgroundPen((QChart*)self);
}

void q_polarchart_set_background_visible(void* self) {
    QChart_SetBackgroundVisible((QChart*)self);
}

bool q_polarchart_is_background_visible(void* self) {
    return QChart_IsBackgroundVisible((QChart*)self);
}

void q_polarchart_set_drop_shadow_enabled(void* self) {
    QChart_SetDropShadowEnabled((QChart*)self);
}

bool q_polarchart_is_drop_shadow_enabled(void* self) {
    return QChart_IsDropShadowEnabled((QChart*)self);
}

void q_polarchart_set_background_roundness(void* self, double diameter) {
    QChart_SetBackgroundRoundness((QChart*)self, diameter);
}

double q_polarchart_background_roundness(void* self) {
    return QChart_BackgroundRoundness((QChart*)self);
}

void q_polarchart_set_animation_options(void* self, int64_t options) {
    QChart_SetAnimationOptions((QChart*)self, options);
}

int64_t q_polarchart_animation_options(void* self) {
    return QChart_AnimationOptions((QChart*)self);
}

void q_polarchart_set_animation_duration(void* self, int msecs) {
    QChart_SetAnimationDuration((QChart*)self, msecs);
}

int32_t q_polarchart_animation_duration(void* self) {
    return QChart_AnimationDuration((QChart*)self);
}

void q_polarchart_set_animation_easing_curve(void* self, void* curve) {
    QChart_SetAnimationEasingCurve((QChart*)self, (QEasingCurve*)curve);
}

QEasingCurve* q_polarchart_animation_easing_curve(void* self) {
    return QChart_AnimationEasingCurve((QChart*)self);
}

void q_polarchart_zoom_in(void* self) {
    QChart_ZoomIn((QChart*)self);
}

void q_polarchart_zoom_out(void* self) {
    QChart_ZoomOut((QChart*)self);
}

void q_polarchart_zoom_in_with_rect(void* self, void* rect) {
    QChart_ZoomInWithRect((QChart*)self, (QRectF*)rect);
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

QLegend* q_polarchart_legend(void* self) {
    return QChart_Legend((QChart*)self);
}

void q_polarchart_set_margins(void* self, void* margins) {
    QChart_SetMargins((QChart*)self, (QMargins*)margins);
}

QMargins* q_polarchart_margins(void* self) {
    return QChart_Margins((QChart*)self);
}

QRectF* q_polarchart_plot_area(void* self) {
    return QChart_PlotArea((QChart*)self);
}

void q_polarchart_set_plot_area(void* self, void* rect) {
    QChart_SetPlotArea((QChart*)self, (QRectF*)rect);
}

void q_polarchart_set_plot_area_background_brush(void* self, void* brush) {
    QChart_SetPlotAreaBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_polarchart_plot_area_background_brush(void* self) {
    return QChart_PlotAreaBackgroundBrush((QChart*)self);
}

void q_polarchart_set_plot_area_background_pen(void* self, void* pen) {
    QChart_SetPlotAreaBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_polarchart_plot_area_background_pen(void* self) {
    return QChart_PlotAreaBackgroundPen((QChart*)self);
}

void q_polarchart_set_plot_area_background_visible(void* self) {
    QChart_SetPlotAreaBackgroundVisible((QChart*)self);
}

bool q_polarchart_is_plot_area_background_visible(void* self) {
    return QChart_IsPlotAreaBackgroundVisible((QChart*)self);
}

void q_polarchart_set_localize_numbers(void* self, bool localize) {
    QChart_SetLocalizeNumbers((QChart*)self, localize);
}

bool q_polarchart_localize_numbers(void* self) {
    return QChart_LocalizeNumbers((QChart*)self);
}

void q_polarchart_set_locale(void* self, void* locale) {
    QChart_SetLocale((QChart*)self, (QLocale*)locale);
}

QLocale* q_polarchart_locale(void* self) {
    return QChart_Locale((QChart*)self);
}

QPointF* q_polarchart_map_to_value(void* self, void* position) {
    return QChart_MapToValue((QChart*)self, (QPointF*)position);
}

QPointF* q_polarchart_map_to_position(void* self, void* value) {
    return QChart_MapToPosition((QChart*)self, (QPointF*)value);
}

int64_t q_polarchart_chart_type(void* self) {
    return QChart_ChartType((QChart*)self);
}

void q_polarchart_plot_area_changed(void* self, void* plotArea) {
    QChart_PlotAreaChanged((QChart*)self, (QRectF*)plotArea);
}

void q_polarchart_on_plot_area_changed(void* self, void (*slot)(void*, void*)) {
    QChart_Connect_PlotAreaChanged((QChart*)self, (intptr_t)slot);
}

void q_polarchart_set_axis_x2(void* self, void* axis, void* series) {
    QChart_SetAxisX2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

void q_polarchart_set_axis_y2(void* self, void* axis, void* series) {
    QChart_SetAxisY2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

QAbstractAxis* q_polarchart_axis_x1(void* self, void* series) {
    return QChart_AxisX1((QChart*)self, (QAbstractSeries*)series);
}

QAbstractAxis* q_polarchart_axis_y1(void* self, void* series) {
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

QPointF* q_polarchart_map_to_value2(void* self, void* position, void* series) {
    return QChart_MapToValue2((QChart*)self, (QPointF*)position, (QAbstractSeries*)series);
}

QPointF* q_polarchart_map_to_position2(void* self, void* value, void* series) {
    return QChart_MapToPosition2((QChart*)self, (QPointF*)value, (QAbstractSeries*)series);
}

QGraphicsLayout* q_polarchart_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_polarchart_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_polarchart_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int64_t q_polarchart_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_polarchart_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_polarchart_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_polarchart_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_polarchart_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_polarchart_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_polarchart_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_polarchart_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_polarchart_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_polarchart_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_polarchart_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_polarchart_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_polarchart_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_polarchart_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_polarchart_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_polarchart_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_polarchart_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_polarchart_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_polarchart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_polarchart_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_polarchart_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_polarchart_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int64_t q_polarchart_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int64_t q_polarchart_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_polarchart_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_polarchart_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_polarchart_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_polarchart_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_polarchart_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_polarchart_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_polarchart_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_polarchart_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_polarchart_grab_shortcut(void* self, void* sequence) {
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

void q_polarchart_add_actions(void* self, libqt_list actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_polarchart_insert_actions(void* self, void* before, libqt_list actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_polarchart_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_polarchart_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_polarchart_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_polarchart_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_polarchart_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

void q_polarchart_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_polarchart_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_polarchart_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_polarchart_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_polarchart_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_polarchart_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_polarchart_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_polarchart_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_polarchart_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

void q_polarchart_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

void q_polarchart_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

void q_polarchart_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_polarchart_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_polarchart_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_polarchart_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_polarchart_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_polarchart_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_polarchart_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_polarchart_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_polarchart_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_polarchart_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_polarchart_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_polarchart_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_polarchart_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_polarchart_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

const char* q_polarchart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_polarchart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_polarchart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_polarchart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_polarchart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_polarchart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_polarchart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_polarchart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_polarchart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_polarchart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_polarchart_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_polarchart_children(void* self) {
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

QMetaObject__Connection* q_polarchart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_polarchart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_polarchart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_polarchart_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_polarchart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_polarchart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_polarchart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_polarchart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_polarchart_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_polarchart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_polarchart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_polarchart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_polarchart_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_polarchart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_polarchart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_polarchart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_polarchart_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_polarchart_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_polarchart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_polarchart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_polarchart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_polarchart_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QGraphicsScene* q_polarchart_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_polarchart_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_polarchart_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_polarchart_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_polarchart_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_polarchart_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_polarchart_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_polarchart_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_polarchart_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_polarchart_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_polarchart_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_polarchart_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_polarchart_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_polarchart_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_polarchart_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_polarchart_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_polarchart_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int64_t q_polarchart_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_polarchart_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_polarchart_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int64_t q_polarchart_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_polarchart_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int64_t q_polarchart_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_polarchart_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_polarchart_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_polarchart_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_polarchart_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_polarchart_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_polarchart_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_polarchart_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_polarchart_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_polarchart_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_polarchart_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_polarchart_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_polarchart_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_polarchart_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_polarchart_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_polarchart_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_polarchart_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_polarchart_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_polarchart_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_polarchart_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_polarchart_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_polarchart_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_polarchart_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_polarchart_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_polarchart_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int64_t q_polarchart_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_polarchart_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_polarchart_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_polarchart_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_polarchart_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_polarchart_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_polarchart_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_polarchart_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_polarchart_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_polarchart_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_polarchart_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_polarchart_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_polarchart_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_polarchart_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_polarchart_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_polarchart_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_polarchart_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_polarchart_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_polarchart_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_polarchart_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_polarchart_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_polarchart_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_polarchart_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_polarchart_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_polarchart_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_polarchart_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_polarchart_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_polarchart_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_polarchart_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_polarchart_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_polarchart_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_polarchart_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_polarchart_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_polarchart_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_polarchart_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_polarchart_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_polarchart_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_polarchart_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_polarchart_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_polarchart_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_polarchart_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_polarchart_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_polarchart_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_polarchart_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_polarchart_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_polarchart_set_transformations(void* self, libqt_list transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_polarchart_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_polarchart_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_polarchart_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_polarchart_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_polarchart_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_polarchart_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_polarchart_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_polarchart_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_polarchart_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_polarchart_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_polarchart_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_polarchart_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_polarchart_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_polarchart_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_polarchart_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_polarchart_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_polarchart_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

QPointF* q_polarchart_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_polarchart_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_polarchart_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_polarchart_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_polarchart_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_polarchart_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_polarchart_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_polarchart_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_polarchart_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_polarchart_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_polarchart_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_polarchart_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_polarchart_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_polarchart_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_polarchart_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_polarchart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_polarchart_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_polarchart_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_polarchart_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_polarchart_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_polarchart_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_polarchart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_polarchart_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_polarchart_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_polarchart_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_polarchart_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_polarchart_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_polarchart_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_polarchart_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int64_t q_polarchart_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_polarchart_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_polarchart_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_polarchart_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_polarchart_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_polarchart_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_polarchart_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_polarchart_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_polarchart_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_polarchart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_polarchart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_polarchart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_polarchart_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_polarchart_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_polarchart_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_polarchart_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_polarchart_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_polarchart_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_polarchart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_polarchart_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_polarchart_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_polarchart_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_polarchart_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_polarchart_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_polarchart_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_polarchart_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_polarchart_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_polarchart_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_polarchart_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_polarchart_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_polarchart_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_polarchart_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_polarchart_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_polarchart_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_polarchart_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_polarchart_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_polarchart_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_polarchart_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_polarchart_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_polarchart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_polarchart_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_polarchart_set_geometry(void* self, void* rect) {
    QPolarChart_SetGeometry((QPolarChart*)self, (QRectF*)rect);
}

void q_polarchart_qbase_set_geometry(void* self, void* rect) {
    QPolarChart_QBaseSetGeometry((QPolarChart*)self, (QRectF*)rect);
}

void q_polarchart_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnSetGeometry((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_GetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

void q_polarchart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_QBaseGetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

void q_polarchart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QPolarChart_OnGetContentsMargins((QPolarChart*)self, (intptr_t)slot);
}

int32_t q_polarchart_type(void* self) {
    return QPolarChart_Type((QPolarChart*)self);
}

int32_t q_polarchart_qbase_type(void* self) {
    return QPolarChart_QBaseType((QPolarChart*)self);
}

void q_polarchart_on_type(void* self, int32_t (*slot)()) {
    QPolarChart_OnType((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_paint(void* self, void* painter, void* option, void* widget) {
    QPolarChart_Paint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QPolarChart_QBasePaint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPolarChart_OnPaint((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QPolarChart_PaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QPolarChart_QBasePaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_polarchart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPolarChart_OnPaintWindowFrame((QPolarChart*)self, (intptr_t)slot);
}

QRectF* q_polarchart_bounding_rect(void* self) {
    return QPolarChart_BoundingRect((QPolarChart*)self);
}

QRectF* q_polarchart_qbase_bounding_rect(void* self) {
    return QPolarChart_QBaseBoundingRect((QPolarChart*)self);
}

void q_polarchart_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QPolarChart_OnBoundingRect((QPolarChart*)self, (intptr_t)slot);
}

QPainterPath* q_polarchart_shape(void* self) {
    return QPolarChart_Shape((QPolarChart*)self);
}

QPainterPath* q_polarchart_qbase_shape(void* self) {
    return QPolarChart_QBaseShape((QPolarChart*)self);
}

void q_polarchart_on_shape(void* self, QPainterPath* (*slot)()) {
    QPolarChart_OnShape((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_init_style_option(void* self, void* option) {
    QPolarChart_InitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

void q_polarchart_qbase_init_style_option(void* self, void* option) {
    QPolarChart_QBaseInitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

void q_polarchart_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnInitStyleOption((QPolarChart*)self, (intptr_t)slot);
}

QSizeF* q_polarchart_size_hint(void* self, int64_t which, void* constraint) {
    return QPolarChart_SizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

QSizeF* q_polarchart_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QPolarChart_QBaseSizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

void q_polarchart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnSizeHint((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_update_geometry(void* self) {
    QPolarChart_UpdateGeometry((QPolarChart*)self);
}

void q_polarchart_qbase_update_geometry(void* self) {
    QPolarChart_QBaseUpdateGeometry((QPolarChart*)self);
}

void q_polarchart_on_update_geometry(void* self, void (*slot)()) {
    QPolarChart_OnUpdateGeometry((QPolarChart*)self, (intptr_t)slot);
}

QVariant* q_polarchart_item_change(void* self, int64_t change, void* value) {
    return QPolarChart_ItemChange((QPolarChart*)self, change, (QVariant*)value);
}

QVariant* q_polarchart_qbase_item_change(void* self, int64_t change, void* value) {
    return QPolarChart_QBaseItemChange((QPolarChart*)self, change, (QVariant*)value);
}

void q_polarchart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnItemChange((QPolarChart*)self, (intptr_t)slot);
}

QVariant* q_polarchart_property_change(void* self, const char* propertyName, void* value) {
    return QPolarChart_PropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

QVariant* q_polarchart_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QPolarChart_QBasePropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

void q_polarchart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QPolarChart_OnPropertyChange((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_scene_event(void* self, void* event) {
    return QPolarChart_SceneEvent((QPolarChart*)self, (QEvent*)event);
}

bool q_polarchart_qbase_scene_event(void* self, void* event) {
    return QPolarChart_QBaseSceneEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnSceneEvent((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_window_frame_event(void* self, void* e) {
    return QPolarChart_WindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

bool q_polarchart_qbase_window_frame_event(void* self, void* e) {
    return QPolarChart_QBaseWindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

void q_polarchart_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnWindowFrameEvent((QPolarChart*)self, (intptr_t)slot);
}

int64_t q_polarchart_window_frame_section_at(void* self, void* pos) {
    return QPolarChart_WindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

int64_t q_polarchart_qbase_window_frame_section_at(void* self, void* pos) {
    return QPolarChart_QBaseWindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

void q_polarchart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QPolarChart_OnWindowFrameSectionAt((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_event(void* self, void* event) {
    return QPolarChart_Event((QPolarChart*)self, (QEvent*)event);
}

bool q_polarchart_qbase_event(void* self, void* event) {
    return QPolarChart_QBaseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_change_event(void* self, void* event) {
    QPolarChart_ChangeEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_change_event(void* self, void* event) {
    QPolarChart_QBaseChangeEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnChangeEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_close_event(void* self, void* event) {
    QPolarChart_CloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

void q_polarchart_qbase_close_event(void* self, void* event) {
    QPolarChart_QBaseCloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

void q_polarchart_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnCloseEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_focus_in_event(void* self, void* event) {
    QPolarChart_FocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_qbase_focus_in_event(void* self, void* event) {
    QPolarChart_QBaseFocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnFocusInEvent((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_FocusNextPrevChild((QPolarChart*)self, next);
}

bool q_polarchart_qbase_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_QBaseFocusNextPrevChild((QPolarChart*)self, next);
}

void q_polarchart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPolarChart_OnFocusNextPrevChild((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_focus_out_event(void* self, void* event) {
    QPolarChart_FocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_qbase_focus_out_event(void* self, void* event) {
    QPolarChart_QBaseFocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

void q_polarchart_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnFocusOutEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_hide_event(void* self, void* event) {
    QPolarChart_HideEvent((QPolarChart*)self, (QHideEvent*)event);
}

void q_polarchart_qbase_hide_event(void* self, void* event) {
    QPolarChart_QBaseHideEvent((QPolarChart*)self, (QHideEvent*)event);
}

void q_polarchart_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHideEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_move_event(void* self, void* event) {
    QPolarChart_MoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_polarchart_qbase_move_event(void* self, void* event) {
    QPolarChart_QBaseMoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_polarchart_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_polish_event(void* self) {
    QPolarChart_PolishEvent((QPolarChart*)self);
}

void q_polarchart_qbase_polish_event(void* self) {
    QPolarChart_QBasePolishEvent((QPolarChart*)self);
}

void q_polarchart_on_polish_event(void* self, void (*slot)()) {
    QPolarChart_OnPolishEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_resize_event(void* self, void* event) {
    QPolarChart_ResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_polarchart_qbase_resize_event(void* self, void* event) {
    QPolarChart_QBaseResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_polarchart_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnResizeEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_show_event(void* self, void* event) {
    QPolarChart_ShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

void q_polarchart_qbase_show_event(void* self, void* event) {
    QPolarChart_QBaseShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

void q_polarchart_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnShowEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_hover_move_event(void* self, void* event) {
    QPolarChart_HoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_qbase_hover_move_event(void* self, void* event) {
    QPolarChart_QBaseHoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_hover_leave_event(void* self, void* event) {
    QPolarChart_HoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_qbase_hover_leave_event(void* self, void* event) {
    QPolarChart_QBaseHoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverLeaveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_grab_mouse_event(void* self, void* event) {
    QPolarChart_GrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_grab_mouse_event(void* self, void* event) {
    QPolarChart_QBaseGrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnGrabMouseEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_UngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_QBaseUngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnUngrabMouseEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_grab_keyboard_event(void* self, void* event) {
    QPolarChart_GrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_grab_keyboard_event(void* self, void* event) {
    QPolarChart_QBaseGrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnGrabKeyboardEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_UngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_QBaseUngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnUngrabKeyboardEvent((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_EventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

bool q_polarchart_qbase_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_QBaseEventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

void q_polarchart_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPolarChart_OnEventFilter((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_timer_event(void* self, void* event) {
    QPolarChart_TimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

void q_polarchart_qbase_timer_event(void* self, void* event) {
    QPolarChart_QBaseTimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

void q_polarchart_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnTimerEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_child_event(void* self, void* event) {
    QPolarChart_ChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

void q_polarchart_qbase_child_event(void* self, void* event) {
    QPolarChart_QBaseChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

void q_polarchart_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnChildEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_custom_event(void* self, void* event) {
    QPolarChart_CustomEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_qbase_custom_event(void* self, void* event) {
    QPolarChart_QBaseCustomEvent((QPolarChart*)self, (QEvent*)event);
}

void q_polarchart_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnCustomEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_connect_notify(void* self, void* signal) {
    QPolarChart_ConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_qbase_connect_notify(void* self, void* signal) {
    QPolarChart_QBaseConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnConnectNotify((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_disconnect_notify(void* self, void* signal) {
    QPolarChart_DisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_qbase_disconnect_notify(void* self, void* signal) {
    QPolarChart_QBaseDisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDisconnectNotify((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_advance(void* self, int phase) {
    QPolarChart_Advance((QPolarChart*)self, phase);
}

void q_polarchart_qbase_advance(void* self, int phase) {
    QPolarChart_QBaseAdvance((QPolarChart*)self, phase);
}

void q_polarchart_on_advance(void* self, void (*slot)(void*, int)) {
    QPolarChart_OnAdvance((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_contains(void* self, void* point) {
    return QPolarChart_Contains((QPolarChart*)self, (QPointF*)point);
}

bool q_polarchart_qbase_contains(void* self, void* point) {
    return QPolarChart_QBaseContains((QPolarChart*)self, (QPointF*)point);
}

void q_polarchart_on_contains(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnContains((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_collides_with_item(void* self, void* other, int64_t mode) {
    return QPolarChart_CollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

bool q_polarchart_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QPolarChart_QBaseCollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

void q_polarchart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPolarChart_OnCollidesWithItem((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_collides_with_path(void* self, void* path, int64_t mode) {
    return QPolarChart_CollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

bool q_polarchart_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QPolarChart_QBaseCollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

void q_polarchart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPolarChart_OnCollidesWithPath((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_is_obscured_by(void* self, void* item) {
    return QPolarChart_IsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

bool q_polarchart_qbase_is_obscured_by(void* self, void* item) {
    return QPolarChart_QBaseIsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

void q_polarchart_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnIsObscuredBy((QPolarChart*)self, (intptr_t)slot);
}

QPainterPath* q_polarchart_opaque_area(void* self) {
    return QPolarChart_OpaqueArea((QPolarChart*)self);
}

QPainterPath* q_polarchart_qbase_opaque_area(void* self) {
    return QPolarChart_QBaseOpaqueArea((QPolarChart*)self);
}

void q_polarchart_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QPolarChart_OnOpaqueArea((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_SceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_polarchart_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_QBaseSceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_polarchart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPolarChart_OnSceneEventFilter((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_context_menu_event(void* self, void* event) {
    QPolarChart_ContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_polarchart_qbase_context_menu_event(void* self, void* event) {
    QPolarChart_QBaseContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_polarchart_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnContextMenuEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_drag_enter_event(void* self, void* event) {
    QPolarChart_DragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_qbase_drag_enter_event(void* self, void* event) {
    QPolarChart_QBaseDragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragEnterEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_drag_leave_event(void* self, void* event) {
    QPolarChart_DragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_qbase_drag_leave_event(void* self, void* event) {
    QPolarChart_QBaseDragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragLeaveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_drag_move_event(void* self, void* event) {
    QPolarChart_DragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_qbase_drag_move_event(void* self, void* event) {
    QPolarChart_QBaseDragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_drop_event(void* self, void* event) {
    QPolarChart_DropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_qbase_drop_event(void* self, void* event) {
    QPolarChart_QBaseDropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_polarchart_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDropEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_hover_enter_event(void* self, void* event) {
    QPolarChart_HoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_qbase_hover_enter_event(void* self, void* event) {
    QPolarChart_QBaseHoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_polarchart_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverEnterEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_key_press_event(void* self, void* event) {
    QPolarChart_KeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_qbase_key_press_event(void* self, void* event) {
    QPolarChart_QBaseKeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnKeyPressEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_key_release_event(void* self, void* event) {
    QPolarChart_KeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_qbase_key_release_event(void* self, void* event) {
    QPolarChart_QBaseKeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

void q_polarchart_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnKeyReleaseEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_mouse_press_event(void* self, void* event) {
    QPolarChart_MousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_qbase_mouse_press_event(void* self, void* event) {
    QPolarChart_QBaseMousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMousePressEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_mouse_move_event(void* self, void* event) {
    QPolarChart_MouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_qbase_mouse_move_event(void* self, void* event) {
    QPolarChart_QBaseMouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_mouse_release_event(void* self, void* event) {
    QPolarChart_MouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_qbase_mouse_release_event(void* self, void* event) {
    QPolarChart_QBaseMouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseReleaseEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_mouse_double_click_event(void* self, void* event) {
    QPolarChart_MouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_qbase_mouse_double_click_event(void* self, void* event) {
    QPolarChart_QBaseMouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_polarchart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseDoubleClickEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_wheel_event(void* self, void* event) {
    QPolarChart_WheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_polarchart_qbase_wheel_event(void* self, void* event) {
    QPolarChart_QBaseWheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_polarchart_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnWheelEvent((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_input_method_event(void* self, void* event) {
    QPolarChart_InputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

void q_polarchart_qbase_input_method_event(void* self, void* event) {
    QPolarChart_QBaseInputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

void q_polarchart_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnInputMethodEvent((QPolarChart*)self, (intptr_t)slot);
}

QVariant* q_polarchart_input_method_query(void* self, int64_t query) {
    return QPolarChart_InputMethodQuery((QPolarChart*)self, query);
}

QVariant* q_polarchart_qbase_input_method_query(void* self, int64_t query) {
    return QPolarChart_QBaseInputMethodQuery((QPolarChart*)self, query);
}

void q_polarchart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPolarChart_OnInputMethodQuery((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_supports_extension(void* self, int64_t extension) {
    return QPolarChart_SupportsExtension((QPolarChart*)self, extension);
}

bool q_polarchart_qbase_supports_extension(void* self, int64_t extension) {
    return QPolarChart_QBaseSupportsExtension((QPolarChart*)self, extension);
}

void q_polarchart_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QPolarChart_OnSupportsExtension((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_set_extension(void* self, int64_t extension, void* variant) {
    QPolarChart_SetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

void q_polarchart_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QPolarChart_QBaseSetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

void q_polarchart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnSetExtension((QPolarChart*)self, (intptr_t)slot);
}

QVariant* q_polarchart_extension(void* self, void* variant) {
    return QPolarChart_Extension((QPolarChart*)self, (QVariant*)variant);
}

QVariant* q_polarchart_qbase_extension(void* self, void* variant) {
    return QPolarChart_QBaseExtension((QPolarChart*)self, (QVariant*)variant);
}

void q_polarchart_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QPolarChart_OnExtension((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_is_empty(void* self) {
    return QPolarChart_IsEmpty((QPolarChart*)self);
}

bool q_polarchart_qbase_is_empty(void* self) {
    return QPolarChart_QBaseIsEmpty((QPolarChart*)self);
}

void q_polarchart_on_is_empty(void* self, bool (*slot)()) {
    QPolarChart_OnIsEmpty((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_update_micro_focus(void* self) {
    QPolarChart_UpdateMicroFocus((QPolarChart*)self);
}

void q_polarchart_qbase_update_micro_focus(void* self) {
    QPolarChart_QBaseUpdateMicroFocus((QPolarChart*)self);
}

void q_polarchart_on_update_micro_focus(void* self, void (*slot)()) {
    QPolarChart_OnUpdateMicroFocus((QPolarChart*)self, (intptr_t)slot);
}

QObject* q_polarchart_sender(void* self) {
    return QPolarChart_Sender((QPolarChart*)self);
}

QObject* q_polarchart_qbase_sender(void* self) {
    return QPolarChart_QBaseSender((QPolarChart*)self);
}

void q_polarchart_on_sender(void* self, QObject* (*slot)()) {
    QPolarChart_OnSender((QPolarChart*)self, (intptr_t)slot);
}

int32_t q_polarchart_sender_signal_index(void* self) {
    return QPolarChart_SenderSignalIndex((QPolarChart*)self);
}

int32_t q_polarchart_qbase_sender_signal_index(void* self) {
    return QPolarChart_QBaseSenderSignalIndex((QPolarChart*)self);
}

void q_polarchart_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPolarChart_OnSenderSignalIndex((QPolarChart*)self, (intptr_t)slot);
}

int32_t q_polarchart_receivers(void* self, const char* signal) {
    return QPolarChart_Receivers((QPolarChart*)self, signal);
}

int32_t q_polarchart_qbase_receivers(void* self, const char* signal) {
    return QPolarChart_QBaseReceivers((QPolarChart*)self, signal);
}

void q_polarchart_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPolarChart_OnReceivers((QPolarChart*)self, (intptr_t)slot);
}

bool q_polarchart_is_signal_connected(void* self, void* signal) {
    return QPolarChart_IsSignalConnected((QPolarChart*)self, (QMetaMethod*)signal);
}

bool q_polarchart_qbase_is_signal_connected(void* self, void* signal) {
    return QPolarChart_QBaseIsSignalConnected((QPolarChart*)self, (QMetaMethod*)signal);
}

void q_polarchart_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnIsSignalConnected((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_add_to_index(void* self) {
    QPolarChart_AddToIndex((QPolarChart*)self);
}

void q_polarchart_qbase_add_to_index(void* self) {
    QPolarChart_QBaseAddToIndex((QPolarChart*)self);
}

void q_polarchart_on_add_to_index(void* self, void (*slot)()) {
    QPolarChart_OnAddToIndex((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_remove_from_index(void* self) {
    QPolarChart_RemoveFromIndex((QPolarChart*)self);
}

void q_polarchart_qbase_remove_from_index(void* self) {
    QPolarChart_QBaseRemoveFromIndex((QPolarChart*)self);
}

void q_polarchart_on_remove_from_index(void* self, void (*slot)()) {
    QPolarChart_OnRemoveFromIndex((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_prepare_geometry_change(void* self) {
    QPolarChart_PrepareGeometryChange((QPolarChart*)self);
}

void q_polarchart_qbase_prepare_geometry_change(void* self) {
    QPolarChart_QBasePrepareGeometryChange((QPolarChart*)self);
}

void q_polarchart_on_prepare_geometry_change(void* self, void (*slot)()) {
    QPolarChart_OnPrepareGeometryChange((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_set_graphics_item(void* self, void* item) {
    QPolarChart_SetGraphicsItem((QPolarChart*)self, (QGraphicsItem*)item);
}

void q_polarchart_qbase_set_graphics_item(void* self, void* item) {
    QPolarChart_QBaseSetGraphicsItem((QPolarChart*)self, (QGraphicsItem*)item);
}

void q_polarchart_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnSetGraphicsItem((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_set_owned_by_layout(void* self, bool ownedByLayout) {
    QPolarChart_SetOwnedByLayout((QPolarChart*)self, ownedByLayout);
}

void q_polarchart_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QPolarChart_QBaseSetOwnedByLayout((QPolarChart*)self, ownedByLayout);
}

void q_polarchart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QPolarChart_OnSetOwnedByLayout((QPolarChart*)self, (intptr_t)slot);
}

void q_polarchart_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_polarchart_delete(void* self) {
    QPolarChart_Delete((QPolarChart*)(self));
}
