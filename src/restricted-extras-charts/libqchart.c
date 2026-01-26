#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqbrush.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqeasingcurve.hpp"
#include "../libqfont.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicslayoutitem.hpp"
#include "../libqgraphicssceneevent.hpp"
#include "../libqgraphicswidget.hpp"
#include "libqlegend.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqchart.hpp"
#include "libqchart.h"

QChart* q_chart_new() {
    return QChart_new();
}

QChart* q_chart_new2(void* parent) {
    return QChart_new2((QGraphicsItem*)parent);
}

QChart* q_chart_new3(void* parent, int32_t wFlags) {
    return QChart_new3((QGraphicsItem*)parent, wFlags);
}

const QMetaObject* q_chart_meta_object(void* self) {
    return QChart_MetaObject((QChart*)self);
}

void q_chart_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QChart_OnMetaObject((QChart*)self, (intptr_t)callback);
}

const QMetaObject* q_chart_qbase_meta_object(void* self) {
    return QChart_QBaseMetaObject((QChart*)self);
}

void* q_chart_metacast(void* self, const char* param1) {
    return QChart_Metacast((QChart*)self, param1);
}

void q_chart_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QChart_OnMetacast((QChart*)self, (intptr_t)callback);
}

void* q_chart_qbase_metacast(void* self, const char* param1) {
    return QChart_QBaseMetacast((QChart*)self, param1);
}

int32_t q_chart_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QChart_Metacall((QChart*)self, param1, param2, param3);
}

void q_chart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QChart_OnMetacall((QChart*)self, (intptr_t)callback);
}

int32_t q_chart_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QChart_QBaseMetacall((QChart*)self, param1, param2, param3);
}

const char* q_chart_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chart_add_series(void* self, void* series) {
    QChart_AddSeries((QChart*)self, (QAbstractSeries*)series);
}

void q_chart_remove_series(void* self, void* series) {
    QChart_RemoveSeries((QChart*)self, (QAbstractSeries*)series);
}

void q_chart_remove_all_series(void* self) {
    QChart_RemoveAllSeries((QChart*)self);
}

libqt_list /* of QAbstractSeries* */ q_chart_series(void* self) {
    libqt_list _arr = QChart_Series((QChart*)self);
    return _arr;
}

void q_chart_set_axis_x(void* self, void* axis) {
    QChart_SetAxisX((QChart*)self, (QAbstractAxis*)axis);
}

void q_chart_set_axis_y(void* self, void* axis) {
    QChart_SetAxisY((QChart*)self, (QAbstractAxis*)axis);
}

QAbstractAxis* q_chart_axis_x(void* self) {
    return QChart_AxisX((QChart*)self);
}

QAbstractAxis* q_chart_axis_y(void* self) {
    return QChart_AxisY((QChart*)self);
}

void q_chart_add_axis(void* self, void* axis, int32_t alignment) {
    QChart_AddAxis((QChart*)self, (QAbstractAxis*)axis, alignment);
}

void q_chart_remove_axis(void* self, void* axis) {
    QChart_RemoveAxis((QChart*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_chart_axes(void* self) {
    libqt_list _arr = QChart_Axes((QChart*)self);
    return _arr;
}

void q_chart_create_default_axes(void* self) {
    QChart_CreateDefaultAxes((QChart*)self);
}

void q_chart_set_theme(void* self, int32_t theme) {
    QChart_SetTheme((QChart*)self, theme);
}

int32_t q_chart_theme(void* self) {
    return QChart_Theme((QChart*)self);
}

void q_chart_set_title(void* self, const char* title) {
    QChart_SetTitle((QChart*)self, qstring(title));
}

const char* q_chart_title(void* self) {
    libqt_string _str = QChart_Title((QChart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chart_set_title_font(void* self, void* font) {
    QChart_SetTitleFont((QChart*)self, (QFont*)font);
}

QFont* q_chart_title_font(void* self) {
    return QChart_TitleFont((QChart*)self);
}

void q_chart_set_title_brush(void* self, void* brush) {
    QChart_SetTitleBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_chart_title_brush(void* self) {
    return QChart_TitleBrush((QChart*)self);
}

void q_chart_set_background_brush(void* self, void* brush) {
    QChart_SetBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_chart_background_brush(void* self) {
    return QChart_BackgroundBrush((QChart*)self);
}

void q_chart_set_background_pen(void* self, void* pen) {
    QChart_SetBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_chart_background_pen(void* self) {
    return QChart_BackgroundPen((QChart*)self);
}

void q_chart_set_background_visible(void* self) {
    QChart_SetBackgroundVisible((QChart*)self);
}

bool q_chart_is_background_visible(void* self) {
    return QChart_IsBackgroundVisible((QChart*)self);
}

void q_chart_set_drop_shadow_enabled(void* self) {
    QChart_SetDropShadowEnabled((QChart*)self);
}

bool q_chart_is_drop_shadow_enabled(void* self) {
    return QChart_IsDropShadowEnabled((QChart*)self);
}

void q_chart_set_background_roundness(void* self, double diameter) {
    QChart_SetBackgroundRoundness((QChart*)self, diameter);
}

double q_chart_background_roundness(void* self) {
    return QChart_BackgroundRoundness((QChart*)self);
}

void q_chart_set_animation_options(void* self, int32_t options) {
    QChart_SetAnimationOptions((QChart*)self, options);
}

int32_t q_chart_animation_options(void* self) {
    return QChart_AnimationOptions((QChart*)self);
}

void q_chart_set_animation_duration(void* self, int msecs) {
    QChart_SetAnimationDuration((QChart*)self, msecs);
}

int32_t q_chart_animation_duration(void* self) {
    return QChart_AnimationDuration((QChart*)self);
}

void q_chart_set_animation_easing_curve(void* self, void* curve) {
    QChart_SetAnimationEasingCurve((QChart*)self, (QEasingCurve*)curve);
}

QEasingCurve* q_chart_animation_easing_curve(void* self) {
    return QChart_AnimationEasingCurve((QChart*)self);
}

void q_chart_zoom_in(void* self) {
    QChart_ZoomIn((QChart*)self);
}

void q_chart_zoom_out(void* self) {
    QChart_ZoomOut((QChart*)self);
}

void q_chart_zoom_in2(void* self, void* rect) {
    QChart_ZoomIn2((QChart*)self, (QRectF*)rect);
}

void q_chart_zoom(void* self, double factor) {
    QChart_Zoom((QChart*)self, factor);
}

void q_chart_zoom_reset(void* self) {
    QChart_ZoomReset((QChart*)self);
}

bool q_chart_is_zoomed(void* self) {
    return QChart_IsZoomed((QChart*)self);
}

void q_chart_scroll(void* self, double dx, double dy) {
    QChart_Scroll((QChart*)self, dx, dy);
}

QLegend* q_chart_legend(void* self) {
    return QChart_Legend((QChart*)self);
}

void q_chart_set_margins(void* self, void* margins) {
    QChart_SetMargins((QChart*)self, (QMargins*)margins);
}

QMargins* q_chart_margins(void* self) {
    return QChart_Margins((QChart*)self);
}

QRectF* q_chart_plot_area(void* self) {
    return QChart_PlotArea((QChart*)self);
}

void q_chart_set_plot_area(void* self, void* rect) {
    QChart_SetPlotArea((QChart*)self, (QRectF*)rect);
}

void q_chart_set_plot_area_background_brush(void* self, void* brush) {
    QChart_SetPlotAreaBackgroundBrush((QChart*)self, (QBrush*)brush);
}

QBrush* q_chart_plot_area_background_brush(void* self) {
    return QChart_PlotAreaBackgroundBrush((QChart*)self);
}

void q_chart_set_plot_area_background_pen(void* self, void* pen) {
    QChart_SetPlotAreaBackgroundPen((QChart*)self, (QPen*)pen);
}

QPen* q_chart_plot_area_background_pen(void* self) {
    return QChart_PlotAreaBackgroundPen((QChart*)self);
}

void q_chart_set_plot_area_background_visible(void* self) {
    QChart_SetPlotAreaBackgroundVisible((QChart*)self);
}

bool q_chart_is_plot_area_background_visible(void* self) {
    return QChart_IsPlotAreaBackgroundVisible((QChart*)self);
}

void q_chart_set_localize_numbers(void* self, bool localize) {
    QChart_SetLocalizeNumbers((QChart*)self, localize);
}

bool q_chart_localize_numbers(void* self) {
    return QChart_LocalizeNumbers((QChart*)self);
}

void q_chart_set_locale(void* self, void* locale) {
    QChart_SetLocale((QChart*)self, (QLocale*)locale);
}

QLocale* q_chart_locale(void* self) {
    return QChart_Locale((QChart*)self);
}

QPointF* q_chart_map_to_value(void* self, void* position) {
    return QChart_MapToValue((QChart*)self, (QPointF*)position);
}

QPointF* q_chart_map_to_position(void* self, void* value) {
    return QChart_MapToPosition((QChart*)self, (QPointF*)value);
}

int32_t q_chart_chart_type(void* self) {
    return QChart_ChartType((QChart*)self);
}

void q_chart_plot_area_changed(void* self, void* plotArea) {
    QChart_PlotAreaChanged((QChart*)self, (QRectF*)plotArea);
}

void q_chart_on_plot_area_changed(void* self, void (*callback)(void*, void*)) {
    QChart_Connect_PlotAreaChanged((QChart*)self, (intptr_t)callback);
}

const char* q_chart_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_chart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chart_set_axis_x2(void* self, void* axis, void* series) {
    QChart_SetAxisX2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

void q_chart_set_axis_y2(void* self, void* axis, void* series) {
    QChart_SetAxisY2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

QAbstractAxis* q_chart_axis_x1(void* self, void* series) {
    return QChart_AxisX1((QChart*)self, (QAbstractSeries*)series);
}

QAbstractAxis* q_chart_axis_y1(void* self, void* series) {
    return QChart_AxisY1((QChart*)self, (QAbstractSeries*)series);
}

libqt_list /* of QAbstractAxis* */ q_chart_axes1(void* self, int32_t orientation) {
    libqt_list _arr = QChart_Axes1((QChart*)self, orientation);
    return _arr;
}

libqt_list /* of QAbstractAxis* */ q_chart_axes2(void* self, int32_t orientation, void* series) {
    libqt_list _arr = QChart_Axes2((QChart*)self, orientation, (QAbstractSeries*)series);
    return _arr;
}

void q_chart_set_background_visible1(void* self, bool visible) {
    QChart_SetBackgroundVisible1((QChart*)self, visible);
}

void q_chart_set_drop_shadow_enabled1(void* self, bool enabled) {
    QChart_SetDropShadowEnabled1((QChart*)self, enabled);
}

void q_chart_set_plot_area_background_visible1(void* self, bool visible) {
    QChart_SetPlotAreaBackgroundVisible1((QChart*)self, visible);
}

QPointF* q_chart_map_to_value2(void* self, void* position, void* series) {
    return QChart_MapToValue2((QChart*)self, (QPointF*)position, (QAbstractSeries*)series);
}

QPointF* q_chart_map_to_position2(void* self, void* value, void* series) {
    return QChart_MapToPosition2((QChart*)self, (QPointF*)value, (QAbstractSeries*)series);
}

QGraphicsLayout* q_chart_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_chart_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_chart_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int32_t q_chart_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_chart_set_layout_direction(void* self, int32_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_chart_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_chart_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_chart_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_chart_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_chart_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_chart_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_chart_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_chart_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_chart_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_chart_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_chart_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_chart_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_chart_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_chart_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_chart_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_chart_set_contents_margins2(void* self, void* margins) {
    QGraphicsWidget_SetContentsMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_chart_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_chart_set_window_frame_margins2(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_chart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_chart_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_chart_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_chart_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int32_t q_chart_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int32_t q_chart_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_chart_set_window_flags(void* self, int32_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_chart_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_chart_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_chart_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_chart_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_chart_set_focus_policy(void* self, int32_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_chart_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_chart_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_chart_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

void q_chart_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

void q_chart_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

void q_chart_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

void q_chart_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

void q_chart_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_chart_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_chart_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_chart_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_chart_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_chart_set_attribute(void* self, int32_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_chart_test_attribute(void* self, int32_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

void q_chart_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_chart_on_geometry_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

void q_chart_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_chart_on_layout_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

bool q_chart_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_chart_grab_shortcut2(void* self, void* sequence, int32_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_chart_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_chart_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_chart_set_attribute2(void* self, int32_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

void q_chart_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_chart_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_chart_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_chart_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_chart_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_chart_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_chart_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_chart_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_chart_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_chart_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_chart_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_chart_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_chart_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_chart_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_chart_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_chart_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_chart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chart_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_chart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_chart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_chart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_chart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_chart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_chart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_chart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_chart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_chart_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_chart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_chart_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_chart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_chart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_chart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_chart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_chart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_chart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_chart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_chart_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_chart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_chart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_chart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_chart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_chart_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_chart_dynamic_property_names\n");
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

QBindingStorage* q_chart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_chart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_chart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_chart_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_chart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_chart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_chart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_chart_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_chart_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_chart_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_chart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_chart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_chart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_chart_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_chart_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_chart_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_chart_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_chart_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_chart_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_chart_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_chart_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_chart_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_chart_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_chart_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_chart_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_chart_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_chart_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_chart_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_chart_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_chart_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_chart_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_chart_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_chart_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_chart_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_chart_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_chart_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_chart_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_chart_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_chart_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_chart_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chart_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_chart_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_chart_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_chart_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_chart_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_chart_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_chart_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_chart_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_chart_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_chart_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_chart_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_chart_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_chart_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_chart_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_chart_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_chart_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_chart_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_chart_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_chart_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_chart_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_chart_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_chart_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_chart_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_chart_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_chart_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_chart_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_chart_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_chart_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_chart_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_chart_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_chart_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_chart_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_chart_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_chart_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_chart_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_chart_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_chart_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_chart_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_chart_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_chart_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_chart_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_chart_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_chart_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_chart_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_chart_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_chart_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_chart_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_chart_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_chart_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_chart_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_chart_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_chart_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_chart_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_chart_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_chart_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_chart_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_chart_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_chart_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_chart_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_chart_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_chart_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_chart_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_chart_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_chart_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_chart_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_chart_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_chart_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_chart_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_chart_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_chart_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_chart_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_chart_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_chart_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_chart_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_chart_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_chart_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_chart_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_chart_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_chart_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_chart_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_chart_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_chart_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_chart_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_chart_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_chart_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

QPointF* q_chart_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_chart_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_chart_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_chart_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_chart_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_chart_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_chart_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_chart_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_chart_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_chart_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_chart_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_chart_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_chart_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_chart_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_chart_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_chart_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_chart_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_chart_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_chart_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_chart_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_chart_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_chart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_chart_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_chart_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_chart_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_chart_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_chart_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_chart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_chart_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_chart_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_chart_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_chart_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_chart_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_chart_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_chart_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_chart_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_chart_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_chart_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_chart_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_chart_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_chart_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_chart_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_chart_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_chart_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_chart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_chart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_chart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_chart_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_chart_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_chart_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_chart_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_chart_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_chart_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_chart_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_chart_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_chart_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_chart_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_chart_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_chart_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_chart_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_chart_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_chart_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_chart_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_chart_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_chart_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_chart_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_chart_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_chart_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_chart_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_chart_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_chart_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_chart_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_chart_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_chart_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_chart_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_chart_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_chart_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_chart_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_chart_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_chart_effective_size_hint(void* self, int32_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_chart_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_chart_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_chart_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_chart_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_chart_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_chart_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_chart_effective_size_hint2(void* self, int32_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_chart_set_geometry(void* self, void* rect) {
    QChart_SetGeometry((QChart*)self, (QRectF*)rect);
}

void q_chart_qbase_set_geometry(void* self, void* rect) {
    QChart_QBaseSetGeometry((QChart*)self, (QRectF*)rect);
}

void q_chart_on_set_geometry(void* self, void (*callback)(void*, void*)) {
    QChart_OnSetGeometry((QChart*)self, (intptr_t)callback);
}

void q_chart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QChart_GetContentsMargins((QChart*)self, left, top, right, bottom);
}

void q_chart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QChart_QBaseGetContentsMargins((QChart*)self, left, top, right, bottom);
}

void q_chart_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*)) {
    QChart_OnGetContentsMargins((QChart*)self, (intptr_t)callback);
}

int32_t q_chart_type(void* self) {
    return QChart_Type((QChart*)self);
}

int32_t q_chart_qbase_type(void* self) {
    return QChart_QBaseType((QChart*)self);
}

void q_chart_on_type(void* self, int32_t (*callback)()) {
    QChart_OnType((QChart*)self, (intptr_t)callback);
}

void q_chart_paint(void* self, void* painter, void* option, void* widget) {
    QChart_Paint((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_chart_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QChart_QBasePaint((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_chart_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QChart_OnPaint((QChart*)self, (intptr_t)callback);
}

void q_chart_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QChart_PaintWindowFrame((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_chart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QChart_QBasePaintWindowFrame((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_chart_on_paint_window_frame(void* self, void (*callback)(void*, void*, void*, void*)) {
    QChart_OnPaintWindowFrame((QChart*)self, (intptr_t)callback);
}

QRectF* q_chart_bounding_rect(void* self) {
    return QChart_BoundingRect((QChart*)self);
}

QRectF* q_chart_qbase_bounding_rect(void* self) {
    return QChart_QBaseBoundingRect((QChart*)self);
}

void q_chart_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QChart_OnBoundingRect((QChart*)self, (intptr_t)callback);
}

QPainterPath* q_chart_shape(void* self) {
    return QChart_Shape((QChart*)self);
}

QPainterPath* q_chart_qbase_shape(void* self) {
    return QChart_QBaseShape((QChart*)self);
}

void q_chart_on_shape(void* self, QPainterPath* (*callback)()) {
    QChart_OnShape((QChart*)self, (intptr_t)callback);
}

void q_chart_init_style_option(void* self, void* option) {
    QChart_InitStyleOption((QChart*)self, (QStyleOption*)option);
}

void q_chart_qbase_init_style_option(void* self, void* option) {
    QChart_QBaseInitStyleOption((QChart*)self, (QStyleOption*)option);
}

void q_chart_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QChart_OnInitStyleOption((QChart*)self, (intptr_t)callback);
}

QSizeF* q_chart_size_hint(void* self, int32_t which, void* constraint) {
    return QChart_SizeHint((QChart*)self, which, (QSizeF*)constraint);
}

QSizeF* q_chart_qbase_size_hint(void* self, int32_t which, void* constraint) {
    return QChart_QBaseSizeHint((QChart*)self, which, (QSizeF*)constraint);
}

void q_chart_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*)) {
    QChart_OnSizeHint((QChart*)self, (intptr_t)callback);
}

void q_chart_update_geometry(void* self) {
    QChart_UpdateGeometry((QChart*)self);
}

void q_chart_qbase_update_geometry(void* self) {
    QChart_QBaseUpdateGeometry((QChart*)self);
}

void q_chart_on_update_geometry(void* self, void (*callback)()) {
    QChart_OnUpdateGeometry((QChart*)self, (intptr_t)callback);
}

QVariant* q_chart_item_change(void* self, int32_t change, void* value) {
    return QChart_ItemChange((QChart*)self, change, (QVariant*)value);
}

QVariant* q_chart_qbase_item_change(void* self, int32_t change, void* value) {
    return QChart_QBaseItemChange((QChart*)self, change, (QVariant*)value);
}

void q_chart_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QChart_OnItemChange((QChart*)self, (intptr_t)callback);
}

QVariant* q_chart_property_change(void* self, const char* propertyName, void* value) {
    return QChart_PropertyChange((QChart*)self, qstring(propertyName), (QVariant*)value);
}

QVariant* q_chart_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QChart_QBasePropertyChange((QChart*)self, qstring(propertyName), (QVariant*)value);
}

void q_chart_on_property_change(void* self, QVariant* (*callback)(void*, const char*, void*)) {
    QChart_OnPropertyChange((QChart*)self, (intptr_t)callback);
}

bool q_chart_scene_event(void* self, void* event) {
    return QChart_SceneEvent((QChart*)self, (QEvent*)event);
}

bool q_chart_qbase_scene_event(void* self, void* event) {
    return QChart_QBaseSceneEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QChart_OnSceneEvent((QChart*)self, (intptr_t)callback);
}

bool q_chart_window_frame_event(void* self, void* e) {
    return QChart_WindowFrameEvent((QChart*)self, (QEvent*)e);
}

bool q_chart_qbase_window_frame_event(void* self, void* e) {
    return QChart_QBaseWindowFrameEvent((QChart*)self, (QEvent*)e);
}

void q_chart_on_window_frame_event(void* self, bool (*callback)(void*, void*)) {
    QChart_OnWindowFrameEvent((QChart*)self, (intptr_t)callback);
}

int32_t q_chart_window_frame_section_at(void* self, void* pos) {
    return QChart_WindowFrameSectionAt((QChart*)self, (QPointF*)pos);
}

int32_t q_chart_qbase_window_frame_section_at(void* self, void* pos) {
    return QChart_QBaseWindowFrameSectionAt((QChart*)self, (QPointF*)pos);
}

void q_chart_on_window_frame_section_at(void* self, int32_t (*callback)(void*, void*)) {
    QChart_OnWindowFrameSectionAt((QChart*)self, (intptr_t)callback);
}

bool q_chart_event(void* self, void* event) {
    return QChart_Event((QChart*)self, (QEvent*)event);
}

bool q_chart_qbase_event(void* self, void* event) {
    return QChart_QBaseEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_event(void* self, bool (*callback)(void*, void*)) {
    QChart_OnEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_change_event(void* self, void* event) {
    QChart_ChangeEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_change_event(void* self, void* event) {
    QChart_QBaseChangeEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_change_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnChangeEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_close_event(void* self, void* event) {
    QChart_CloseEvent((QChart*)self, (QCloseEvent*)event);
}

void q_chart_qbase_close_event(void* self, void* event) {
    QChart_QBaseCloseEvent((QChart*)self, (QCloseEvent*)event);
}

void q_chart_on_close_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnCloseEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_focus_in_event(void* self, void* event) {
    QChart_FocusInEvent((QChart*)self, (QFocusEvent*)event);
}

void q_chart_qbase_focus_in_event(void* self, void* event) {
    QChart_QBaseFocusInEvent((QChart*)self, (QFocusEvent*)event);
}

void q_chart_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnFocusInEvent((QChart*)self, (intptr_t)callback);
}

bool q_chart_focus_next_prev_child(void* self, bool next) {
    return QChart_FocusNextPrevChild((QChart*)self, next);
}

bool q_chart_qbase_focus_next_prev_child(void* self, bool next) {
    return QChart_QBaseFocusNextPrevChild((QChart*)self, next);
}

void q_chart_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QChart_OnFocusNextPrevChild((QChart*)self, (intptr_t)callback);
}

void q_chart_focus_out_event(void* self, void* event) {
    QChart_FocusOutEvent((QChart*)self, (QFocusEvent*)event);
}

void q_chart_qbase_focus_out_event(void* self, void* event) {
    QChart_QBaseFocusOutEvent((QChart*)self, (QFocusEvent*)event);
}

void q_chart_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnFocusOutEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_hide_event(void* self, void* event) {
    QChart_HideEvent((QChart*)self, (QHideEvent*)event);
}

void q_chart_qbase_hide_event(void* self, void* event) {
    QChart_QBaseHideEvent((QChart*)self, (QHideEvent*)event);
}

void q_chart_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnHideEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_move_event(void* self, void* event) {
    QChart_MoveEvent((QChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_chart_qbase_move_event(void* self, void* event) {
    QChart_QBaseMoveEvent((QChart*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_chart_on_move_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnMoveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_polish_event(void* self) {
    QChart_PolishEvent((QChart*)self);
}

void q_chart_qbase_polish_event(void* self) {
    QChart_QBasePolishEvent((QChart*)self);
}

void q_chart_on_polish_event(void* self, void (*callback)()) {
    QChart_OnPolishEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_resize_event(void* self, void* event) {
    QChart_ResizeEvent((QChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_chart_qbase_resize_event(void* self, void* event) {
    QChart_QBaseResizeEvent((QChart*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_chart_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnResizeEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_show_event(void* self, void* event) {
    QChart_ShowEvent((QChart*)self, (QShowEvent*)event);
}

void q_chart_qbase_show_event(void* self, void* event) {
    QChart_QBaseShowEvent((QChart*)self, (QShowEvent*)event);
}

void q_chart_on_show_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnShowEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_hover_move_event(void* self, void* event) {
    QChart_HoverMoveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_qbase_hover_move_event(void* self, void* event) {
    QChart_QBaseHoverMoveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnHoverMoveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_hover_leave_event(void* self, void* event) {
    QChart_HoverLeaveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_qbase_hover_leave_event(void* self, void* event) {
    QChart_QBaseHoverLeaveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnHoverLeaveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_grab_mouse_event(void* self, void* event) {
    QChart_GrabMouseEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_grab_mouse_event(void* self, void* event) {
    QChart_QBaseGrabMouseEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_grab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnGrabMouseEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_ungrab_mouse_event(void* self, void* event) {
    QChart_UngrabMouseEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_ungrab_mouse_event(void* self, void* event) {
    QChart_QBaseUngrabMouseEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnUngrabMouseEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_grab_keyboard_event(void* self, void* event) {
    QChart_GrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_grab_keyboard_event(void* self, void* event) {
    QChart_QBaseGrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_grab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnGrabKeyboardEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_ungrab_keyboard_event(void* self, void* event) {
    QChart_UngrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_ungrab_keyboard_event(void* self, void* event) {
    QChart_QBaseUngrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnUngrabKeyboardEvent((QChart*)self, (intptr_t)callback);
}

bool q_chart_event_filter(void* self, void* watched, void* event) {
    return QChart_EventFilter((QChart*)self, (QObject*)watched, (QEvent*)event);
}

bool q_chart_qbase_event_filter(void* self, void* watched, void* event) {
    return QChart_QBaseEventFilter((QChart*)self, (QObject*)watched, (QEvent*)event);
}

void q_chart_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QChart_OnEventFilter((QChart*)self, (intptr_t)callback);
}

void q_chart_timer_event(void* self, void* event) {
    QChart_TimerEvent((QChart*)self, (QTimerEvent*)event);
}

void q_chart_qbase_timer_event(void* self, void* event) {
    QChart_QBaseTimerEvent((QChart*)self, (QTimerEvent*)event);
}

void q_chart_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnTimerEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_child_event(void* self, void* event) {
    QChart_ChildEvent((QChart*)self, (QChildEvent*)event);
}

void q_chart_qbase_child_event(void* self, void* event) {
    QChart_QBaseChildEvent((QChart*)self, (QChildEvent*)event);
}

void q_chart_on_child_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnChildEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_custom_event(void* self, void* event) {
    QChart_CustomEvent((QChart*)self, (QEvent*)event);
}

void q_chart_qbase_custom_event(void* self, void* event) {
    QChart_QBaseCustomEvent((QChart*)self, (QEvent*)event);
}

void q_chart_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnCustomEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_connect_notify(void* self, void* signal) {
    QChart_ConnectNotify((QChart*)self, (QMetaMethod*)signal);
}

void q_chart_qbase_connect_notify(void* self, void* signal) {
    QChart_QBaseConnectNotify((QChart*)self, (QMetaMethod*)signal);
}

void q_chart_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QChart_OnConnectNotify((QChart*)self, (intptr_t)callback);
}

void q_chart_disconnect_notify(void* self, void* signal) {
    QChart_DisconnectNotify((QChart*)self, (QMetaMethod*)signal);
}

void q_chart_qbase_disconnect_notify(void* self, void* signal) {
    QChart_QBaseDisconnectNotify((QChart*)self, (QMetaMethod*)signal);
}

void q_chart_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QChart_OnDisconnectNotify((QChart*)self, (intptr_t)callback);
}

void q_chart_advance(void* self, int phase) {
    QChart_Advance((QChart*)self, phase);
}

void q_chart_qbase_advance(void* self, int phase) {
    QChart_QBaseAdvance((QChart*)self, phase);
}

void q_chart_on_advance(void* self, void (*callback)(void*, int)) {
    QChart_OnAdvance((QChart*)self, (intptr_t)callback);
}

bool q_chart_contains(void* self, void* point) {
    return QChart_Contains((QChart*)self, (QPointF*)point);
}

bool q_chart_qbase_contains(void* self, void* point) {
    return QChart_QBaseContains((QChart*)self, (QPointF*)point);
}

void q_chart_on_contains(void* self, bool (*callback)(void*, void*)) {
    QChart_OnContains((QChart*)self, (intptr_t)callback);
}

bool q_chart_collides_with_item(void* self, void* other, int32_t mode) {
    return QChart_CollidesWithItem((QChart*)self, (QGraphicsItem*)other, mode);
}

bool q_chart_qbase_collides_with_item(void* self, void* other, int32_t mode) {
    return QChart_QBaseCollidesWithItem((QChart*)self, (QGraphicsItem*)other, mode);
}

void q_chart_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QChart_OnCollidesWithItem((QChart*)self, (intptr_t)callback);
}

bool q_chart_collides_with_path(void* self, void* path, int32_t mode) {
    return QChart_CollidesWithPath((QChart*)self, (QPainterPath*)path, mode);
}

bool q_chart_qbase_collides_with_path(void* self, void* path, int32_t mode) {
    return QChart_QBaseCollidesWithPath((QChart*)self, (QPainterPath*)path, mode);
}

void q_chart_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QChart_OnCollidesWithPath((QChart*)self, (intptr_t)callback);
}

bool q_chart_is_obscured_by(void* self, void* item) {
    return QChart_IsObscuredBy((QChart*)self, (QGraphicsItem*)item);
}

bool q_chart_qbase_is_obscured_by(void* self, void* item) {
    return QChart_QBaseIsObscuredBy((QChart*)self, (QGraphicsItem*)item);
}

void q_chart_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QChart_OnIsObscuredBy((QChart*)self, (intptr_t)callback);
}

QPainterPath* q_chart_opaque_area(void* self) {
    return QChart_OpaqueArea((QChart*)self);
}

QPainterPath* q_chart_qbase_opaque_area(void* self) {
    return QChart_QBaseOpaqueArea((QChart*)self);
}

void q_chart_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QChart_OnOpaqueArea((QChart*)self, (intptr_t)callback);
}

bool q_chart_scene_event_filter(void* self, void* watched, void* event) {
    return QChart_SceneEventFilter((QChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_chart_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QChart_QBaseSceneEventFilter((QChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_chart_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QChart_OnSceneEventFilter((QChart*)self, (intptr_t)callback);
}

void q_chart_context_menu_event(void* self, void* event) {
    QChart_ContextMenuEvent((QChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_chart_qbase_context_menu_event(void* self, void* event) {
    QChart_QBaseContextMenuEvent((QChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_chart_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnContextMenuEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_drag_enter_event(void* self, void* event) {
    QChart_DragEnterEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_qbase_drag_enter_event(void* self, void* event) {
    QChart_QBaseDragEnterEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnDragEnterEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_drag_leave_event(void* self, void* event) {
    QChart_DragLeaveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_qbase_drag_leave_event(void* self, void* event) {
    QChart_QBaseDragLeaveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnDragLeaveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_drag_move_event(void* self, void* event) {
    QChart_DragMoveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_qbase_drag_move_event(void* self, void* event) {
    QChart_QBaseDragMoveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnDragMoveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_drop_event(void* self, void* event) {
    QChart_DropEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_qbase_drop_event(void* self, void* event) {
    QChart_QBaseDropEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_chart_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnDropEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_hover_enter_event(void* self, void* event) {
    QChart_HoverEnterEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_qbase_hover_enter_event(void* self, void* event) {
    QChart_QBaseHoverEnterEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_chart_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnHoverEnterEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_key_press_event(void* self, void* event) {
    QChart_KeyPressEvent((QChart*)self, (QKeyEvent*)event);
}

void q_chart_qbase_key_press_event(void* self, void* event) {
    QChart_QBaseKeyPressEvent((QChart*)self, (QKeyEvent*)event);
}

void q_chart_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnKeyPressEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_key_release_event(void* self, void* event) {
    QChart_KeyReleaseEvent((QChart*)self, (QKeyEvent*)event);
}

void q_chart_qbase_key_release_event(void* self, void* event) {
    QChart_QBaseKeyReleaseEvent((QChart*)self, (QKeyEvent*)event);
}

void q_chart_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnKeyReleaseEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_mouse_press_event(void* self, void* event) {
    QChart_MousePressEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_qbase_mouse_press_event(void* self, void* event) {
    QChart_QBaseMousePressEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnMousePressEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_mouse_move_event(void* self, void* event) {
    QChart_MouseMoveEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_qbase_mouse_move_event(void* self, void* event) {
    QChart_QBaseMouseMoveEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnMouseMoveEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_mouse_release_event(void* self, void* event) {
    QChart_MouseReleaseEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_qbase_mouse_release_event(void* self, void* event) {
    QChart_QBaseMouseReleaseEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnMouseReleaseEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_mouse_double_click_event(void* self, void* event) {
    QChart_MouseDoubleClickEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_qbase_mouse_double_click_event(void* self, void* event) {
    QChart_QBaseMouseDoubleClickEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_chart_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnMouseDoubleClickEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_wheel_event(void* self, void* event) {
    QChart_WheelEvent((QChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_chart_qbase_wheel_event(void* self, void* event) {
    QChart_QBaseWheelEvent((QChart*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_chart_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnWheelEvent((QChart*)self, (intptr_t)callback);
}

void q_chart_input_method_event(void* self, void* event) {
    QChart_InputMethodEvent((QChart*)self, (QInputMethodEvent*)event);
}

void q_chart_qbase_input_method_event(void* self, void* event) {
    QChart_QBaseInputMethodEvent((QChart*)self, (QInputMethodEvent*)event);
}

void q_chart_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QChart_OnInputMethodEvent((QChart*)self, (intptr_t)callback);
}

QVariant* q_chart_input_method_query(void* self, int32_t query) {
    return QChart_InputMethodQuery((QChart*)self, query);
}

QVariant* q_chart_qbase_input_method_query(void* self, int32_t query) {
    return QChart_QBaseInputMethodQuery((QChart*)self, query);
}

void q_chart_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QChart_OnInputMethodQuery((QChart*)self, (intptr_t)callback);
}

bool q_chart_supports_extension(void* self, int32_t extension) {
    return QChart_SupportsExtension((QChart*)self, extension);
}

bool q_chart_qbase_supports_extension(void* self, int32_t extension) {
    return QChart_QBaseSupportsExtension((QChart*)self, extension);
}

void q_chart_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QChart_OnSupportsExtension((QChart*)self, (intptr_t)callback);
}

void q_chart_set_extension(void* self, int32_t extension, void* variant) {
    QChart_SetExtension((QChart*)self, extension, (QVariant*)variant);
}

void q_chart_qbase_set_extension(void* self, int32_t extension, void* variant) {
    QChart_QBaseSetExtension((QChart*)self, extension, (QVariant*)variant);
}

void q_chart_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QChart_OnSetExtension((QChart*)self, (intptr_t)callback);
}

QVariant* q_chart_extension(void* self, void* variant) {
    return QChart_Extension((QChart*)self, (QVariant*)variant);
}

QVariant* q_chart_qbase_extension(void* self, void* variant) {
    return QChart_QBaseExtension((QChart*)self, (QVariant*)variant);
}

void q_chart_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QChart_OnExtension((QChart*)self, (intptr_t)callback);
}

bool q_chart_is_empty(void* self) {
    return QChart_IsEmpty((QChart*)self);
}

bool q_chart_qbase_is_empty(void* self) {
    return QChart_QBaseIsEmpty((QChart*)self);
}

void q_chart_on_is_empty(void* self, bool (*callback)()) {
    QChart_OnIsEmpty((QChart*)self, (intptr_t)callback);
}

void q_chart_update_micro_focus(void* self) {
    QChart_UpdateMicroFocus((QChart*)self);
}

void q_chart_qbase_update_micro_focus(void* self) {
    QChart_QBaseUpdateMicroFocus((QChart*)self);
}

void q_chart_on_update_micro_focus(void* self, void (*callback)()) {
    QChart_OnUpdateMicroFocus((QChart*)self, (intptr_t)callback);
}

QObject* q_chart_sender(void* self) {
    return QChart_Sender((QChart*)self);
}

QObject* q_chart_qbase_sender(void* self) {
    return QChart_QBaseSender((QChart*)self);
}

void q_chart_on_sender(void* self, QObject* (*callback)()) {
    QChart_OnSender((QChart*)self, (intptr_t)callback);
}

int32_t q_chart_sender_signal_index(void* self) {
    return QChart_SenderSignalIndex((QChart*)self);
}

int32_t q_chart_qbase_sender_signal_index(void* self) {
    return QChart_QBaseSenderSignalIndex((QChart*)self);
}

void q_chart_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QChart_OnSenderSignalIndex((QChart*)self, (intptr_t)callback);
}

int32_t q_chart_receivers(void* self, const char* signal) {
    return QChart_Receivers((QChart*)self, signal);
}

int32_t q_chart_qbase_receivers(void* self, const char* signal) {
    return QChart_QBaseReceivers((QChart*)self, signal);
}

void q_chart_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QChart_OnReceivers((QChart*)self, (intptr_t)callback);
}

bool q_chart_is_signal_connected(void* self, void* signal) {
    return QChart_IsSignalConnected((QChart*)self, (QMetaMethod*)signal);
}

bool q_chart_qbase_is_signal_connected(void* self, void* signal) {
    return QChart_QBaseIsSignalConnected((QChart*)self, (QMetaMethod*)signal);
}

void q_chart_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QChart_OnIsSignalConnected((QChart*)self, (intptr_t)callback);
}

void q_chart_add_to_index(void* self) {
    QChart_AddToIndex((QChart*)self);
}

void q_chart_qbase_add_to_index(void* self) {
    QChart_QBaseAddToIndex((QChart*)self);
}

void q_chart_on_add_to_index(void* self, void (*callback)()) {
    QChart_OnAddToIndex((QChart*)self, (intptr_t)callback);
}

void q_chart_remove_from_index(void* self) {
    QChart_RemoveFromIndex((QChart*)self);
}

void q_chart_qbase_remove_from_index(void* self) {
    QChart_QBaseRemoveFromIndex((QChart*)self);
}

void q_chart_on_remove_from_index(void* self, void (*callback)()) {
    QChart_OnRemoveFromIndex((QChart*)self, (intptr_t)callback);
}

void q_chart_prepare_geometry_change(void* self) {
    QChart_PrepareGeometryChange((QChart*)self);
}

void q_chart_qbase_prepare_geometry_change(void* self) {
    QChart_QBasePrepareGeometryChange((QChart*)self);
}

void q_chart_on_prepare_geometry_change(void* self, void (*callback)()) {
    QChart_OnPrepareGeometryChange((QChart*)self, (intptr_t)callback);
}

void q_chart_set_graphics_item(void* self, void* item) {
    QChart_SetGraphicsItem((QChart*)self, (QGraphicsItem*)item);
}

void q_chart_qbase_set_graphics_item(void* self, void* item) {
    QChart_QBaseSetGraphicsItem((QChart*)self, (QGraphicsItem*)item);
}

void q_chart_on_set_graphics_item(void* self, void (*callback)(void*, void*)) {
    QChart_OnSetGraphicsItem((QChart*)self, (intptr_t)callback);
}

void q_chart_set_owned_by_layout(void* self, bool ownedByLayout) {
    QChart_SetOwnedByLayout((QChart*)self, ownedByLayout);
}

void q_chart_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QChart_QBaseSetOwnedByLayout((QChart*)self, ownedByLayout);
}

void q_chart_on_set_owned_by_layout(void* self, void (*callback)(void*, bool)) {
    QChart_OnSetOwnedByLayout((QChart*)self, (intptr_t)callback);
}

void q_chart_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_chart_delete(void* self) {
    QChart_Delete((QChart*)(self));
}
