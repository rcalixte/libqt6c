#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGEND_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGEND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qlegend-qtcharts.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLegend* self ```
const QMetaObject* q_legend_meta_object(void* self);

/// ``` QLegend* self, const char* param1 ```
void* q_legend_metacast(void* self, const char* param1);

/// ``` QLegend* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_legend_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_legend_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#paint)
///
/// ``` QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_legend_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBrush)
///
/// ``` QLegend* self, QBrush* brush ```
void q_legend_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#brush)
///
/// ``` QLegend* self ```
QBrush* q_legend_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setColor)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#color)
///
/// ``` QLegend* self ```
QColor* q_legend_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setPen)
///
/// ``` QLegend* self, QPen* pen ```
void q_legend_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#pen)
///
/// ``` QLegend* self ```
QPen* q_legend_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBorderColor)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColor)
///
/// ``` QLegend* self ```
QColor* q_legend_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setFont)
///
/// ``` QLegend* self, QFont* font ```
void q_legend_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#font)
///
/// ``` QLegend* self ```
QFont* q_legend_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelBrush)
///
/// ``` QLegend* self, QBrush* brush ```
void q_legend_set_label_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelBrush)
///
/// ``` QLegend* self ```
QBrush* q_legend_label_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelColor)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_set_label_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColor)
///
/// ``` QLegend* self ```
QColor* q_legend_label_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setAlignment)
///
/// ``` QLegend* self, int alignment ```
void q_legend_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#alignment)
///
/// ``` QLegend* self ```
int64_t q_legend_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#detachFromChart)
///
/// ``` QLegend* self ```
void q_legend_detach_from_chart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachToChart)
///
/// ``` QLegend* self ```
void q_legend_attach_to_chart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isAttachedToChart)
///
/// ``` QLegend* self ```
bool q_legend_is_attached_to_chart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
///
/// ``` QLegend* self ```
void q_legend_set_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isBackgroundVisible)
///
/// ``` QLegend* self ```
bool q_legend_is_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
///
/// ``` QLegend* self ```
libqt_list /* of QLegendMarker* */ q_legend_markers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkers)
///
/// ``` QLegend* self ```
bool q_legend_reverse_markers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
///
/// ``` QLegend* self ```
void q_legend_set_reverse_markers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTips)
///
/// ``` QLegend* self ```
bool q_legend_show_tool_tips(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setShowToolTips)
///
/// ``` QLegend* self, bool show ```
void q_legend_set_show_tool_tips(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isInteractive)
///
/// ``` QLegend* self ```
bool q_legend_is_interactive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setInteractive)
///
/// ``` QLegend* self, bool interactive ```
void q_legend_set_interactive(void* self, bool interactive);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShape)
///
/// ``` QLegend* self ```
int64_t q_legend_marker_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setMarkerShape)
///
/// ``` QLegend* self, enum QLegend__MarkerShape shape ```
void q_legend_set_marker_shape(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
///
/// ``` QLegend* self, bool visible ```
void q_legend_background_visible_changed(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, bool) ```
void q_legend_on_background_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, QColor*) ```
void q_legend_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_border_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, QColor*) ```
void q_legend_on_border_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
///
/// ``` QLegend* self, QFont* font ```
void q_legend_font_changed(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, QFont*) ```
void q_legend_on_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
///
/// ``` QLegend* self, QColor* color ```
void q_legend_label_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, QColor*) ```
void q_legend_on_label_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
///
/// ``` QLegend* self, bool reverseMarkers ```
void q_legend_reverse_markers_changed(void* self, bool reverseMarkers);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, bool) ```
void q_legend_on_reverse_markers_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
///
/// ``` QLegend* self, bool showToolTips ```
void q_legend_show_tool_tips_changed(void* self, bool showToolTips);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, bool) ```
void q_legend_on_show_tool_tips_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
///
/// ``` QLegend* self, enum QLegend__MarkerShape shape ```
void q_legend_marker_shape_changed(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, enum QLegend__MarkerShape) ```
void q_legend_on_marker_shape_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
///
/// ``` QLegend* self, bool attachedToChart ```
void q_legend_attached_to_chart_changed(void* self, bool attachedToChart);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, bool) ```
void q_legend_on_attached_to_chart_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
///
/// ``` QLegend* self, bool interactive ```
void q_legend_interactive_changed(void* self, bool interactive);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
///
/// ``` QLegend* self, void (*slot)(QLegend*, bool) ```
void q_legend_on_interactive_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_legend_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_legend_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
///
/// ``` QLegend* self, bool visible ```
void q_legend_set_background_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
///
/// ``` QLegend* self, QAbstractSeries* series ```
libqt_list /* of QLegendMarker* */ q_legend_markers1(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
///
/// ``` QLegend* self, bool reverseMarkers ```
void q_legend_set_reverse_markers1(void* self, bool reverseMarkers);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QLegend* self ```
QGraphicsLayout* q_legend_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QLegend* self, QGraphicsLayout* layout ```
void q_legend_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QLegend* self ```
void q_legend_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QLegend* self ```
int64_t q_legend_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QLegend* self, enum Qt__LayoutDirection direction ```
void q_legend_set_layout_direction(void* self, int64_t direction);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QLegend* self ```
void q_legend_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QLegend* self ```
QStyle* q_legend_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QLegend* self, QStyle* style ```
void q_legend_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QLegend* self ```
QPalette* q_legend_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QLegend* self, QPalette* palette ```
void q_legend_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QLegend* self ```
bool q_legend_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QLegend* self, QSizeF* size ```
void q_legend_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QLegend* self, double w, double h ```
void q_legend_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QLegend* self ```
QSizeF* q_legend_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QLegend* self, QRectF* rect ```
void q_legend_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
void q_legend_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QLegend* self ```
QRectF* q_legend_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QLegend* self, double left, double top, double right, double bottom ```
void q_legend_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QLegend* self, QMarginsF* margins ```
void q_legend_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// ``` QLegend* self, double* left, double* top, double* right, double* bottom ```
void q_legend_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QLegend* self, double left, double top, double right, double bottom ```
void q_legend_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QLegend* self, QMarginsF* margins ```
void q_legend_set_window_frame_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QLegend* self, double* left, double* top, double* right, double* bottom ```
void q_legend_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QLegend* self ```
void q_legend_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QLegend* self ```
QRectF* q_legend_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QLegend* self ```
QRectF* q_legend_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QLegend* self ```
int64_t q_legend_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QLegend* self ```
int64_t q_legend_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QLegend* self, int wFlags ```
void q_legend_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QLegend* self ```
bool q_legend_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QLegend* self, const char* title ```
void q_legend_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QLegend* self ```
const char* q_legend_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QLegend* self ```
int64_t q_legend_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QLegend* self, enum Qt__FocusPolicy policy ```
void q_legend_set_focus_policy(void* self, int64_t policy);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_legend_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QLegend* self ```
QGraphicsWidget* q_legend_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QLegend* self, QKeySequence* sequence ```
int32_t q_legend_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QLegend* self, int id ```
void q_legend_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QLegend* self, int id ```
void q_legend_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QLegend* self, int id ```
void q_legend_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QLegend* self, QAction* action ```
void q_legend_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QLegend* self, libqt_list /* of QAction* */ actions ```
void q_legend_add_actions(void* self, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QLegend* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_legend_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QLegend* self, QAction* before, QAction* action ```
void q_legend_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QLegend* self, QAction* action ```
void q_legend_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QLegend* self ```
libqt_list /* of QAction* */ q_legend_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QLegend* self, enum Qt__WidgetAttribute attribute ```
void q_legend_set_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QLegend* self, enum Qt__WidgetAttribute attribute ```
bool q_legend_test_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// ``` QLegend* self ```
int32_t q_legend_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// ``` QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_legend_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// ``` QLegend* self ```
QRectF* q_legend_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// ``` QLegend* self ```
QPainterPath* q_legend_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QLegend* self ```
void q_legend_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsWidget*) ```
void q_legend_on_geometry_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QLegend* self ```
void q_legend_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsWidget*) ```
void q_legend_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QLegend* self ```
bool q_legend_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QLegend* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_legend_grab_shortcut2(void* self, void* sequence, int64_t context);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QLegend* self, int id, bool enabled ```
void q_legend_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QLegend* self, int id, bool enabled ```
void q_legend_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QLegend* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_legend_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QLegend* self, enum Qt__GestureType typeVal ```
void q_legend_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QLegend* self, enum Qt__GestureType typeVal ```
void q_legend_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QLegend* self ```
void q_legend_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QLegend* self ```
void q_legend_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QLegend* self ```
void q_legend_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QLegend* self ```
void q_legend_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QLegend* self ```
void q_legend_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QLegend* self ```
void q_legend_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QLegend* self ```
void q_legend_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QLegend* self ```
void q_legend_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QLegend* self ```
void q_legend_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QLegend* self ```
void q_legend_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QLegend* self ```
void q_legend_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QLegend* self ```
void q_legend_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QLegend* self, void (*slot)(QGraphicsObject*) ```
void q_legend_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QLegend* self, enum Qt__GestureType typeVal, int flags ```
void q_legend_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QLegend* self, QObject* watched, QEvent* event ```
bool q_legend_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLegend* self ```
const char* q_legend_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLegend* self, char* name ```
void q_legend_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLegend* self ```
bool q_legend_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLegend* self ```
bool q_legend_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLegend* self ```
bool q_legend_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLegend* self ```
bool q_legend_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLegend* self, bool b ```
bool q_legend_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLegend* self ```
QThread* q_legend_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLegend* self, QThread* thread ```
bool q_legend_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLegend* self, int interval ```
int32_t q_legend_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLegend* self, int id ```
void q_legend_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLegend* self, enum Qt__TimerId id ```
void q_legend_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLegend* self ```
libqt_list /* of QObject* */ q_legend_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLegend* self, QObject* parent ```
void q_legend_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLegend* self, QObject* filterObj ```
void q_legend_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLegend* self, QObject* obj ```
void q_legend_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_legend_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLegend* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_legend_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_legend_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_legend_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLegend* self ```
void q_legend_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLegend* self ```
void q_legend_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLegend* self, const char* name, QVariant* value ```
bool q_legend_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLegend* self, const char* name ```
QVariant* q_legend_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLegend* self ```
const char** q_legend_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLegend* self ```
QBindingStorage* q_legend_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLegend* self ```
const QBindingStorage* q_legend_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegend* self ```
void q_legend_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegend* self, void (*slot)(QObject*) ```
void q_legend_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLegend* self ```
QObject* q_legend_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLegend* self, const char* classname ```
bool q_legend_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLegend* self ```
void q_legend_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLegend* self, QThread* thread, Disambiguated_t* param2 ```
bool q_legend_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLegend* self, int interval, enum Qt__TimerType timerType ```
int32_t q_legend_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_legend_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLegend* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_legend_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegend* self, QObject* param1 ```
void q_legend_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLegend* self, void (*slot)(QObject*, QObject*) ```
void q_legend_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QLegend* self ```
QGraphicsScene* q_legend_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QLegend* self ```
QGraphicsObject* q_legend_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QLegend* self ```
QGraphicsWidget* q_legend_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QLegend* self ```
QGraphicsWidget* q_legend_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QLegend* self ```
QGraphicsWidget* q_legend_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QLegend* self, QGraphicsItem* parent ```
void q_legend_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QLegend* self ```
libqt_list /* of QGraphicsItem* */ q_legend_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QLegend* self ```
bool q_legend_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QLegend* self ```
bool q_legend_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QLegend* self ```
bool q_legend_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QLegend* self ```
QGraphicsObject* q_legend_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QLegend* self ```
const QGraphicsObject* q_legend_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QLegend* self ```
QGraphicsItemGroup* q_legend_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QLegend* self, QGraphicsItemGroup* group ```
void q_legend_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QLegend* self ```
int64_t q_legend_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QLegend* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_legend_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QLegend* self, int flags ```
void q_legend_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QLegend* self ```
int64_t q_legend_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QLegend* self, enum QGraphicsItem__CacheMode mode ```
void q_legend_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QLegend* self ```
int64_t q_legend_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QLegend* self, enum QGraphicsItem__PanelModality panelModality ```
void q_legend_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QLegend* self ```
bool q_legend_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QLegend* self ```
const char* q_legend_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QLegend* self, const char* toolTip ```
void q_legend_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QLegend* self ```
QCursor* q_legend_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QLegend* self, QCursor* cursor ```
void q_legend_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QLegend* self ```
bool q_legend_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QLegend* self ```
void q_legend_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QLegend* self ```
bool q_legend_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QLegend* self, QGraphicsItem* parent ```
bool q_legend_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QLegend* self, bool visible ```
void q_legend_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QLegend* self ```
void q_legend_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QLegend* self ```
void q_legend_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QLegend* self ```
bool q_legend_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QLegend* self ```
bool q_legend_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QLegend* self, bool selected ```
void q_legend_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QLegend* self ```
bool q_legend_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QLegend* self, bool on ```
void q_legend_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QLegend* self ```
double q_legend_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QLegend* self ```
double q_legend_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QLegend* self, double opacity ```
void q_legend_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QLegend* self ```
QGraphicsEffect* q_legend_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QLegend* self, QGraphicsEffect* effect ```
void q_legend_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QLegend* self ```
int64_t q_legend_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QLegend* self, int buttons ```
void q_legend_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QLegend* self ```
bool q_legend_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QLegend* self ```
bool q_legend_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QLegend* self ```
bool q_legend_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QLegend* self ```
bool q_legend_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QLegend* self, bool enabled ```
void q_legend_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QLegend* self ```
bool q_legend_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QLegend* self, bool active ```
void q_legend_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QLegend* self ```
bool q_legend_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QLegend* self ```
void q_legend_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QLegend* self ```
void q_legend_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QLegend* self, QGraphicsItem* item ```
void q_legend_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QLegend* self ```
void q_legend_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QLegend* self ```
void q_legend_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QLegend* self ```
void q_legend_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QLegend* self ```
void q_legend_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QLegend* self ```
QPointF* q_legend_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QLegend* self ```
double q_legend_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QLegend* self, double x ```
void q_legend_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QLegend* self ```
double q_legend_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QLegend* self, double y ```
void q_legend_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QLegend* self ```
QPointF* q_legend_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QLegend* self, QPointF* pos ```
void q_legend_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QLegend* self, double x, double y ```
void q_legend_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QLegend* self, double dx, double dy ```
void q_legend_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self ```
void q_legend_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
void q_legend_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QLegend* self ```
QTransform* q_legend_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QLegend* self ```
QTransform* q_legend_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QLegend* self, QTransform* viewportTransform ```
QTransform* q_legend_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QLegend* self, QGraphicsItem* other ```
QTransform* q_legend_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QLegend* self, QTransform* matrix ```
void q_legend_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QLegend* self ```
void q_legend_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QLegend* self, double angle ```
void q_legend_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QLegend* self ```
double q_legend_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QLegend* self, double scale ```
void q_legend_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QLegend* self ```
double q_legend_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QLegend* self ```
libqt_list /* of QGraphicsTransform* */ q_legend_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QLegend* self, libqt_list /* of QGraphicsTransform* */ transformations ```
void q_legend_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QLegend* self ```
QPointF* q_legend_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QLegend* self, QPointF* origin ```
void q_legend_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QLegend* self, double ax, double ay ```
void q_legend_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// ``` QLegend* self, int phase ```
void q_legend_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QLegend* self ```
double q_legend_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QLegend* self, double z ```
void q_legend_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QLegend* self, QGraphicsItem* sibling ```
void q_legend_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QLegend* self ```
QRectF* q_legend_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QLegend* self ```
QRectF* q_legend_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QLegend* self ```
bool q_legend_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QLegend* self ```
QPainterPath* q_legend_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// ``` QLegend* self, QPointF* point ```
bool q_legend_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// ``` QLegend* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_legend_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// ``` QLegend* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_legend_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QLegend* self ```
libqt_list /* of QGraphicsItem* */ q_legend_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QLegend* self ```
bool q_legend_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
bool q_legend_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// ``` QLegend* self, QGraphicsItem* item ```
bool q_legend_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// ``` QLegend* self ```
QPainterPath* q_legend_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QLegend* self, QTransform* itemToDeviceTransform ```
QRegion* q_legend_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QLegend* self ```
double q_legend_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QLegend* self, double granularity ```
void q_legend_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QLegend* self ```
void q_legend_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QLegend* self, double x, double y, double width, double height ```
void q_legend_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QLegend* self, double dx, double dy ```
void q_legend_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_legend_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QLegend* self, QPointF* point ```
QPointF* q_legend_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QLegend* self, QPointF* point ```
QPointF* q_legend_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_legend_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QLegend* self, QRectF* rect ```
QRectF* q_legend_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QLegend* self, QRectF* rect ```
QRectF* q_legend_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_legend_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QLegend* self, QPainterPath* path ```
QPainterPath* q_legend_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QLegend* self, QPainterPath* path ```
QPainterPath* q_legend_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_legend_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QLegend* self, QPointF* point ```
QPointF* q_legend_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QLegend* self, QPointF* point ```
QPointF* q_legend_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_legend_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QLegend* self, QRectF* rect ```
QRectF* q_legend_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QLegend* self, QRectF* rect ```
QRectF* q_legend_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QLegend* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_legend_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QLegend* self, QPainterPath* path ```
QPainterPath* q_legend_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QLegend* self, QPainterPath* path ```
QPainterPath* q_legend_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QLegend* self, QGraphicsItem* item, double x, double y ```
QPointF* q_legend_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QLegend* self, double x, double y ```
QPointF* q_legend_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QLegend* self, double x, double y ```
QPointF* q_legend_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QLegend* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QLegend* self, QGraphicsItem* item, double x, double y ```
QPointF* q_legend_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QLegend* self, double x, double y ```
QPointF* q_legend_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QLegend* self, double x, double y ```
QPointF* q_legend_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QLegend* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QLegend* self, double x, double y, double w, double h ```
QRectF* q_legend_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QLegend* self, QGraphicsItem* child ```
bool q_legend_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QLegend* self, QGraphicsItem* other ```
QGraphicsItem* q_legend_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QLegend* self ```
bool q_legend_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QLegend* self, int key ```
QVariant* q_legend_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QLegend* self, int key, QVariant* value ```
void q_legend_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QLegend* self ```
int64_t q_legend_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QLegend* self, int hints ```
void q_legend_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QLegend* self, QGraphicsItem* filterItem ```
void q_legend_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QLegend* self, QGraphicsItem* filterItem ```
void q_legend_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QLegend* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_legend_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QLegend* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_legend_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QLegend* self, enum Qt__FocusReason focusReason ```
void q_legend_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, QRectF* rect ```
void q_legend_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, QRectF* rect, int xmargin ```
void q_legend_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, QRectF* rect, int xmargin, int ymargin ```
void q_legend_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, double x, double y, double w, double h, int xmargin ```
void q_legend_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QLegend* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_legend_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QLegend* self, QGraphicsItem* other, bool* ok ```
QTransform* q_legend_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QLegend* self, QTransform* matrix, bool combine ```
void q_legend_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QLegend* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_legend_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QLegend* self, QRectF* rect ```
bool q_legend_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QLegend* self, QRectF* rect ```
void q_legend_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QLegend* self, double dx, double dy, QRectF* rect ```
void q_legend_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QLegend* self, QSizePolicy* policy ```
void q_legend_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QLegend* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_legend_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QLegend* self ```
QSizePolicy* q_legend_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QLegend* self, QSizeF* size ```
void q_legend_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QLegend* self, double w, double h ```
void q_legend_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QLegend* self ```
QSizeF* q_legend_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QLegend* self, double width ```
void q_legend_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QLegend* self ```
double q_legend_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QLegend* self, double height ```
void q_legend_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QLegend* self ```
double q_legend_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QLegend* self, QSizeF* size ```
void q_legend_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QLegend* self, double w, double h ```
void q_legend_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QLegend* self ```
QSizeF* q_legend_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QLegend* self, double width ```
void q_legend_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QLegend* self ```
double q_legend_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QLegend* self, double height ```
void q_legend_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QLegend* self ```
double q_legend_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QLegend* self, QSizeF* size ```
void q_legend_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QLegend* self, double w, double h ```
void q_legend_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QLegend* self ```
QSizeF* q_legend_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QLegend* self, double width ```
void q_legend_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QLegend* self ```
double q_legend_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QLegend* self, double height ```
void q_legend_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QLegend* self ```
double q_legend_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QLegend* self ```
QRectF* q_legend_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QLegend* self ```
QRectF* q_legend_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QLegend* self, enum Qt__SizeHint which ```
QSizeF* q_legend_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// ``` QLegend* self ```
bool q_legend_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QLegend* self ```
QGraphicsLayoutItem* q_legend_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QLegend* self, QGraphicsLayoutItem* parent ```
void q_legend_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QLegend* self ```
bool q_legend_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QLegend* self ```
QGraphicsItem* q_legend_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QLegend* self ```
bool q_legend_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QLegend* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_legend_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QLegend* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_legend_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLegend* self, void (*slot)(QObject*, const char*) ```
void q_legend_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlegend-qtcharts.html#dtor.QLegend)
///
/// Delete this object from C++ memory.
///
/// ``` QLegend* self ```
void q_legend_delete(void* self);

/// https://doc.qt.io/qt-6/qlegend-qtcharts.html#types

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
