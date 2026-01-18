#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLEGEND_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLEGEND_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLegend*
///
const QMetaObject* q_legend_meta_object(void* self);

/// @param self QLegend*
/// @param param1 const char*
///
void* q_legend_metacast(void* self, const char* param1);

/// @param self QLegend*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_legend_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_legend_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#paint)
///
/// @param self QLegend*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_legend_paint(void* self, void* painter, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBrush)
///
/// @param self QLegend*
/// @param brush QBrush*
///
void q_legend_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#brush)
///
/// @param self QLegend*
///
QBrush* q_legend_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setColor)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#color)
///
/// @param self QLegend*
///
QColor* q_legend_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setPen)
///
/// @param self QLegend*
/// @param pen QPen*
///
void q_legend_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#pen)
///
/// @param self QLegend*
///
QPen* q_legend_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBorderColor)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_set_border_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColor)
///
/// @param self QLegend*
///
QColor* q_legend_border_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setFont)
///
/// @param self QLegend*
/// @param font QFont*
///
void q_legend_set_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#font)
///
/// @param self QLegend*
///
QFont* q_legend_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelBrush)
///
/// @param self QLegend*
/// @param brush QBrush*
///
void q_legend_set_label_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelBrush)
///
/// @param self QLegend*
///
QBrush* q_legend_label_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelColor)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_set_label_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColor)
///
/// @param self QLegend*
///
QColor* q_legend_label_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setAlignment)
///
/// @param self QLegend*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_legend_set_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#alignment)
///
/// @param self QLegend*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_legend_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#detachFromChart)
///
/// @param self QLegend*
///
void q_legend_detach_from_chart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachToChart)
///
/// @param self QLegend*
///
void q_legend_attach_to_chart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isAttachedToChart)
///
/// @param self QLegend*
///
bool q_legend_is_attached_to_chart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
///
/// @param self QLegend*
///
void q_legend_set_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isBackgroundVisible)
///
/// @param self QLegend*
///
bool q_legend_is_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
///
/// @param self QLegend*
///
/// @return libqt_list of QLegendMarker*
///
libqt_list q_legend_markers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkers)
///
/// @param self QLegend*
///
bool q_legend_reverse_markers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
///
/// @param self QLegend*
///
void q_legend_set_reverse_markers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTips)
///
/// @param self QLegend*
///
bool q_legend_show_tool_tips(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setShowToolTips)
///
/// @param self QLegend*
/// @param show bool
///
void q_legend_set_show_tool_tips(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isInteractive)
///
/// @param self QLegend*
///
bool q_legend_is_interactive(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setInteractive)
///
/// @param self QLegend*
/// @param interactive bool
///
void q_legend_set_interactive(void* self, bool interactive);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShape)
///
/// @param self QLegend*
///
/// @return enum QLegend__MarkerShape
///
int32_t q_legend_marker_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setMarkerShape)
///
/// @param self QLegend*
/// @param shape enum QLegend__MarkerShape
///
void q_legend_set_marker_shape(void* self, int32_t shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
///
/// @param self QLegend*
/// @param visible bool
///
void q_legend_background_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, bool visible)
///
void q_legend_on_background_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, QColor* color)
///
void q_legend_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_border_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, QColor* color)
///
void q_legend_on_border_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
///
/// @param self QLegend*
/// @param font QFont*
///
void q_legend_font_changed(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, QFont* font)
///
void q_legend_on_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
///
/// @param self QLegend*
/// @param color QColor*
///
void q_legend_label_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, QColor* color)
///
void q_legend_on_label_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
///
/// @param self QLegend*
/// @param reverseMarkers bool
///
void q_legend_reverse_markers_changed(void* self, bool reverseMarkers);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, bool reverseMarkers)
///
void q_legend_on_reverse_markers_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
///
/// @param self QLegend*
/// @param showToolTips bool
///
void q_legend_show_tool_tips_changed(void* self, bool showToolTips);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, bool showToolTips)
///
void q_legend_on_show_tool_tips_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
///
/// @param self QLegend*
/// @param shape enum QLegend__MarkerShape
///
void q_legend_marker_shape_changed(void* self, int32_t shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, enum QLegend__MarkerShape shape)
///
void q_legend_on_marker_shape_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
///
/// @param self QLegend*
/// @param attachedToChart bool
///
void q_legend_attached_to_chart_changed(void* self, bool attachedToChart);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, bool attachedToChart)
///
void q_legend_on_attached_to_chart_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
///
/// @param self QLegend*
/// @param interactive bool
///
void q_legend_interactive_changed(void* self, bool interactive);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, bool interactive)
///
void q_legend_on_interactive_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_legend_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_legend_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
///
/// @param self QLegend*
/// @param visible bool
///
void q_legend_set_background_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
///
/// @param self QLegend*
/// @param series QAbstractSeries*
///
/// @return libqt_list of QLegendMarker*
///
libqt_list q_legend_markers1(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
///
/// @param self QLegend*
/// @param reverseMarkers bool
///
void q_legend_set_reverse_markers1(void* self, bool reverseMarkers);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self QLegend*
///
QGraphicsLayout* q_legend_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// @param self QLegend*
/// @param layout QGraphicsLayout*
///
void q_legend_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// @param self QLegend*
///
void q_legend_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// @param self QLegend*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_legend_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// @param self QLegend*
/// @param direction enum Qt__LayoutDirection
///
void q_legend_set_layout_direction(void* self, int32_t direction);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// @param self QLegend*
///
void q_legend_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// @param self QLegend*
///
QStyle* q_legend_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// @param self QLegend*
/// @param style QStyle*
///
void q_legend_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self QLegend*
///
QPalette* q_legend_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QLegend*
/// @param palette QPalette*
///
void q_legend_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self QLegend*
///
bool q_legend_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QLegend*
/// @param size QSizeF*
///
void q_legend_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QLegend*
/// @param w double
/// @param h double
///
void q_legend_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// @param self QLegend*
///
QSizeF* q_legend_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QLegend*
/// @param rect QRectF*
///
void q_legend_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_legend_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// @param self QLegend*
///
QRectF* q_legend_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QLegend*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_legend_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QLegend*
/// @param margins QMarginsF*
///
void q_legend_set_contents_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// @param self QLegend*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_legend_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QLegend*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_legend_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QLegend*
/// @param margins QMarginsF*
///
void q_legend_set_window_frame_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// @param self QLegend*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_legend_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// @param self QLegend*
///
void q_legend_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// @param self QLegend*
///
QRectF* q_legend_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self QLegend*
///
QRectF* q_legend_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self QLegend*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_legend_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self QLegend*
///
/// @return enum Qt__WindowType
///
int32_t q_legend_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QLegend*
/// @param wFlags flag of enum Qt__WindowType
///
void q_legend_set_window_flags(void* self, int32_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self QLegend*
///
bool q_legend_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// @param self QLegend*
/// @param title const char*
///
void q_legend_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLegend*
///
const char* q_legend_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self QLegend*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_legend_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// @param self QLegend*
/// @param policy enum Qt__FocusPolicy
///
void q_legend_set_focus_policy(void* self, int32_t policy);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// @param first QGraphicsWidget*
/// @param second QGraphicsWidget*
///
void q_legend_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// @param self QLegend*
///
QGraphicsWidget* q_legend_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QLegend*
/// @param sequence QKeySequence*
///
int32_t q_legend_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// @param self QLegend*
/// @param id int
///
void q_legend_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QLegend*
/// @param id int
///
void q_legend_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QLegend*
/// @param id int
///
void q_legend_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// @param self QLegend*
/// @param action QAction*
///
void q_legend_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// @param self QLegend*
/// @param actions libqt_list of QAction*
///
void q_legend_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QLegend*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_legend_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// @param self QLegend*
/// @param before QAction*
/// @param action QAction*
///
void q_legend_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// @param self QLegend*
/// @param action QAction*
///
void q_legend_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// @param self QLegend*
///
/// @return libqt_list of QAction*
///
libqt_list q_legend_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QLegend*
/// @param attribute enum Qt__WidgetAttribute
///
void q_legend_set_attribute(void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// @param self QLegend*
/// @param attribute enum Qt__WidgetAttribute
///
bool q_legend_test_attribute(void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// @param self QLegend*
///
int32_t q_legend_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// @param self QLegend*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_legend_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// @param self QLegend*
///
QRectF* q_legend_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// @param self QLegend*
///
QPainterPath* q_legend_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QLegend*
///
void q_legend_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_geometry_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QLegend*
///
void q_legend_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// @param self QLegend*
///
bool q_legend_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QLegend*
/// @param sequence QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_legend_grab_shortcut2(void* self, void* sequence, int32_t context);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QLegend*
/// @param id int
/// @param enabled bool
///
void q_legend_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QLegend*
/// @param id int
/// @param enabled bool
///
void q_legend_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QLegend*
/// @param attribute enum Qt__WidgetAttribute
/// @param on bool
///
void q_legend_set_attribute2(void* self, int32_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QLegend*
/// @param type enum Qt__GestureType
///
void q_legend_grab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QLegend*
/// @param type enum Qt__GestureType
///
void q_legend_ungrab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QLegend*
///
void q_legend_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QLegend*
///
void q_legend_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QLegend*
///
void q_legend_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QLegend*
///
void q_legend_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QLegend*
///
void q_legend_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QLegend*
///
void q_legend_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QLegend*
///
void q_legend_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QLegend*
///
void q_legend_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QLegend*
///
void q_legend_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QLegend*
///
void q_legend_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QLegend*
///
void q_legend_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QLegend*
///
void q_legend_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QLegend*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_legend_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QLegend*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_legend_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLegend*
///
const char* q_legend_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLegend*
/// @param name char*
///
void q_legend_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLegend*
///
bool q_legend_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLegend*
///
bool q_legend_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLegend*
///
bool q_legend_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLegend*
///
bool q_legend_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLegend*
/// @param b bool
///
bool q_legend_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLegend*
///
QThread* q_legend_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLegend*
/// @param thread QThread*
///
bool q_legend_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLegend*
/// @param interval int
///
int32_t q_legend_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLegend*
/// @param id int
///
void q_legend_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLegend*
/// @param id enum Qt__TimerId
///
void q_legend_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLegend*
///
/// @return libqt_list of QObject*
///
libqt_list q_legend_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLegend*
/// @param parent QObject*
///
void q_legend_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLegend*
/// @param filterObj QObject*
///
void q_legend_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLegend*
/// @param obj QObject*
///
void q_legend_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_legend_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLegend*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_legend_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_legend_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_legend_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLegend*
///
void q_legend_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLegend*
///
void q_legend_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLegend*
/// @param name const char*
/// @param value QVariant*
///
bool q_legend_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLegend*
/// @param name const char*
///
QVariant* q_legend_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLegend*
///
const char** q_legend_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLegend*
///
QBindingStorage* q_legend_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLegend*
///
const QBindingStorage* q_legend_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegend*
///
void q_legend_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self)
///
void q_legend_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLegend*
///
QObject* q_legend_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLegend*
/// @param classname const char*
///
bool q_legend_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLegend*
///
void q_legend_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLegend*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_legend_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLegend*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_legend_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_legend_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLegend*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_legend_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegend*
/// @param param1 QObject*
///
void q_legend_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, QObject* param1)
///
void q_legend_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self QLegend*
///
QGraphicsScene* q_legend_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QLegend*
///
QGraphicsObject* q_legend_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QLegend*
///
QGraphicsWidget* q_legend_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QLegend*
///
QGraphicsWidget* q_legend_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QLegend*
///
QGraphicsWidget* q_legend_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QLegend*
/// @param parent QGraphicsItem*
///
void q_legend_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self QLegend*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_legend_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QLegend*
///
bool q_legend_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QLegend*
///
bool q_legend_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QLegend*
///
bool q_legend_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QLegend*
///
QGraphicsObject* q_legend_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QLegend*
///
const QGraphicsObject* q_legend_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QLegend*
///
QGraphicsItemGroup* q_legend_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QLegend*
/// @param group QGraphicsItemGroup*
///
void q_legend_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self QLegend*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_legend_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QLegend*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
///
void q_legend_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QLegend*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
///
void q_legend_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self QLegend*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_legend_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QLegend*
/// @param mode enum QGraphicsItem__CacheMode
///
void q_legend_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self QLegend*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_legend_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QLegend*
/// @param panelModality enum QGraphicsItem__PanelModality
///
void q_legend_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self QLegend*
///
bool q_legend_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLegend*
///
const char* q_legend_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QLegend*
/// @param toolTip const char*
///
void q_legend_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self QLegend*
///
QCursor* q_legend_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QLegend*
/// @param cursor QCursor*
///
void q_legend_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QLegend*
///
bool q_legend_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QLegend*
///
void q_legend_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self QLegend*
///
bool q_legend_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QLegend*
/// @param parent QGraphicsItem*
///
bool q_legend_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QLegend*
/// @param visible bool
///
void q_legend_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QLegend*
///
void q_legend_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QLegend*
///
void q_legend_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self QLegend*
///
bool q_legend_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self QLegend*
///
bool q_legend_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QLegend*
/// @param selected bool
///
void q_legend_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self QLegend*
///
bool q_legend_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QLegend*
/// @param on bool
///
void q_legend_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self QLegend*
///
double q_legend_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QLegend*
///
double q_legend_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QLegend*
/// @param opacity double
///
void q_legend_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self QLegend*
///
QGraphicsEffect* q_legend_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QLegend*
/// @param effect QGraphicsEffect*
///
void q_legend_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self QLegend*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_legend_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QLegend*
/// @param buttons flag of enum Qt__MouseButton
///
void q_legend_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QLegend*
///
bool q_legend_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self QLegend*
///
bool q_legend_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self QLegend*
///
bool q_legend_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self QLegend*
///
bool q_legend_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QLegend*
/// @param enabled bool
///
void q_legend_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self QLegend*
///
bool q_legend_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QLegend*
/// @param active bool
///
void q_legend_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self QLegend*
///
bool q_legend_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QLegend*
///
void q_legend_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QLegend*
///
void q_legend_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
///
void q_legend_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QLegend*
///
void q_legend_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QLegend*
///
void q_legend_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QLegend*
///
void q_legend_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QLegend*
///
void q_legend_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self QLegend*
///
QPointF* q_legend_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QLegend*
///
double q_legend_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QLegend*
/// @param x double
///
void q_legend_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self QLegend*
///
double q_legend_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QLegend*
/// @param y double
///
void q_legend_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self QLegend*
///
QPointF* q_legend_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QLegend*
/// @param pos QPointF*
///
void q_legend_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QLegend*
/// @param x double
/// @param y double
///
void q_legend_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QLegend*
/// @param dx double
/// @param dy double
///
void q_legend_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
///
void q_legend_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_legend_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self QLegend*
///
QTransform* q_legend_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QLegend*
///
QTransform* q_legend_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QLegend*
/// @param viewportTransform QTransform*
///
QTransform* q_legend_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QLegend*
/// @param other QGraphicsItem*
///
QTransform* q_legend_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QLegend*
/// @param matrix QTransform*
///
void q_legend_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QLegend*
///
void q_legend_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QLegend*
/// @param angle double
///
void q_legend_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self QLegend*
///
double q_legend_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QLegend*
/// @param scale double
///
void q_legend_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self QLegend*
///
double q_legend_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QLegend*
///
/// @return libqt_list of QGraphicsTransform*
///
libqt_list q_legend_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QLegend*
/// @param transformations libqt_list of QGraphicsTransform*
///
void q_legend_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QLegend*
///
QPointF* q_legend_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QLegend*
/// @param origin QPointF*
///
void q_legend_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QLegend*
/// @param ax double
/// @param ay double
///
void q_legend_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// @param self QLegend*
/// @param phase int
///
void q_legend_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self QLegend*
///
double q_legend_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QLegend*
/// @param z double
///
void q_legend_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QLegend*
/// @param sibling QGraphicsItem*
///
void q_legend_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QLegend*
///
QRectF* q_legend_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QLegend*
///
QRectF* q_legend_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QLegend*
///
bool q_legend_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QLegend*
///
QPainterPath* q_legend_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// @param self QLegend*
/// @param point QPointF*
///
bool q_legend_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// @param self QLegend*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_legend_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// @param self QLegend*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_legend_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QLegend*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_legend_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QLegend*
///
bool q_legend_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_legend_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
///
bool q_legend_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// @param self QLegend*
///
QPainterPath* q_legend_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QLegend*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_legend_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QLegend*
///
double q_legend_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QLegend*
/// @param granularity double
///
void q_legend_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QLegend*
///
void q_legend_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
void q_legend_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QLegend*
/// @param dx double
/// @param dy double
///
void q_legend_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_legend_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QLegend*
/// @param point QPointF*
///
QPointF* q_legend_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QLegend*
/// @param point QPointF*
///
QPointF* q_legend_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QLegend*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QLegend*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QLegend*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QLegend*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_legend_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QLegend*
/// @param point QPointF*
///
QPointF* q_legend_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QLegend*
/// @param point QPointF*
///
QPointF* q_legend_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QLegend*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QLegend*
/// @param rect QRectF*
///
QRectF* q_legend_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QLegend*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QLegend*
/// @param path QPainterPath*
///
QPainterPath* q_legend_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QLegend*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QLegend*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QLegend*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QLegend*
/// @param x double
/// @param y double
///
QPointF* q_legend_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QLegend*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_legend_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QLegend*
/// @param child QGraphicsItem*
///
bool q_legend_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QLegend*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_legend_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QLegend*
///
bool q_legend_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QLegend*
/// @param key int
///
QVariant* q_legend_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QLegend*
/// @param key int
/// @param value QVariant*
///
void q_legend_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QLegend*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_legend_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QLegend*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_legend_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QLegend*
/// @param filterItem QGraphicsItem*
///
void q_legend_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QLegend*
/// @param filterItem QGraphicsItem*
///
void q_legend_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QLegend*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
///
void q_legend_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QLegend*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
///
void q_legend_set_cache_mode2(void* self, int32_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QLegend*
/// @param focusReason enum Qt__FocusReason
///
void q_legend_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param rect QRectF*
///
void q_legend_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param rect QRectF*
/// @param xmargin int
///
void q_legend_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_legend_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_legend_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QLegend*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_legend_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QLegend*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_legend_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QLegend*
/// @param matrix QTransform*
/// @param combine bool
///
void q_legend_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QLegend*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_legend_colliding_items1(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QLegend*
/// @param rect QRectF*
///
bool q_legend_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QLegend*
/// @param rect QRectF*
///
void q_legend_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QLegend*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_legend_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QLegend*
/// @param policy QSizePolicy*
///
void q_legend_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QLegend*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_legend_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QLegend*
///
QSizePolicy* q_legend_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QLegend*
/// @param size QSizeF*
///
void q_legend_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QLegend*
/// @param w double
/// @param h double
///
void q_legend_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QLegend*
///
QSizeF* q_legend_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QLegend*
/// @param width double
///
void q_legend_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QLegend*
///
double q_legend_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QLegend*
/// @param height double
///
void q_legend_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QLegend*
///
double q_legend_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QLegend*
/// @param size QSizeF*
///
void q_legend_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QLegend*
/// @param w double
/// @param h double
///
void q_legend_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QLegend*
///
QSizeF* q_legend_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QLegend*
/// @param width double
///
void q_legend_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QLegend*
///
double q_legend_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QLegend*
/// @param height double
///
void q_legend_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QLegend*
///
double q_legend_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QLegend*
/// @param size QSizeF*
///
void q_legend_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QLegend*
/// @param w double
/// @param h double
///
void q_legend_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QLegend*
///
QSizeF* q_legend_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QLegend*
/// @param width double
///
void q_legend_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QLegend*
///
double q_legend_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QLegend*
/// @param height double
///
void q_legend_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QLegend*
///
double q_legend_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QLegend*
///
QRectF* q_legend_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QLegend*
///
QRectF* q_legend_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QLegend*
/// @param which enum Qt__SizeHint
///
QSizeF* q_legend_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// @param self QLegend*
///
bool q_legend_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QLegend*
///
QGraphicsLayoutItem* q_legend_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QLegend*
/// @param parent QGraphicsLayoutItem*
///
void q_legend_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QLegend*
///
bool q_legend_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QLegend*
///
QGraphicsItem* q_legend_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QLegend*
///
bool q_legend_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QLegend*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_legend_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QLegend*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_legend_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLegend*
/// @param callback void func(QLegend* self, const char* objectName)
///
void q_legend_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#dtor.QLegend)
///
/// Delete this object from C++ memory.
///
/// @param self QLegend*
///
void q_legend_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#public-types)

typedef enum {
    QLEGEND_MARKERSHAPE_MARKERSHAPEDEFAULT = 0,
    QLEGEND_MARKERSHAPE_MARKERSHAPERECTANGLE = 1,
    QLEGEND_MARKERSHAPE_MARKERSHAPECIRCLE = 2,
    QLEGEND_MARKERSHAPE_MARKERSHAPEFROMSERIES = 3,
    QLEGEND_MARKERSHAPE_MARKERSHAPEROTATEDRECTANGLE = 4,
    QLEGEND_MARKERSHAPE_MARKERSHAPETRIANGLE = 5,
    QLEGEND_MARKERSHAPE_MARKERSHAPESTAR = 6,
    QLEGEND_MARKERSHAPE_MARKERSHAPEPENTAGON = 7
} QLegend__MarkerShape;

#endif
