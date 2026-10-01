#pragma once
#ifndef EXTRAS_KPLOTTING_LIBKPLOTWIDGET_H
#define EXTRAS_KPLOTTING_LIBKPLOTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kplotwidget.html)

/// k_plotwidget_new constructs a new KPlotWidget object.
///
/// @param parent QWidget*
///
KPlotWidget* k_plotwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/kplotwidget.html)

/// k_plotwidget_new2 constructs a new KPlotWidget object.
///
KPlotWidget* k_plotwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KPlotWidget*
///
const QMetaObject* k_plotwidget_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KPlotWidget*
/// @param callback const QMetaObject* func(const KPlotWidget* self)
///
void k_plotwidget_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KPlotWidget*
///
const QMetaObject* k_plotwidget_super_meta_object(const void* self);

/// @param self KPlotWidget*
/// @param param1 const char*
///
void* k_plotwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback void* func(KPlotWidget* self, const char* param1)
///
void k_plotwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param param1 const char*
///
void* k_plotwidget_super_metacast(void* self, const char* param1);

/// @param self KPlotWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_plotwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_plotwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_plotwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_plotwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#minimumSizeHint)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const KPlotWidget*
/// @param callback QSize* func(const KPlotWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_plotwidget_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#sizeHint)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const KPlotWidget*
/// @param callback QSize* func(const KPlotWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_plotwidget_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_super_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setLimits)
///
/// @param self KPlotWidget*
/// @param x1 double
/// @param x2 double
/// @param y1 double
/// @param y2 double
///
void k_plotwidget_set_limits(void* self, double x1, double x2, double y1, double y2);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setSecondaryLimits)
///
/// @param self KPlotWidget*
/// @param x1 double
/// @param x2 double
/// @param y1 double
/// @param y2 double
///
void k_plotwidget_set_secondary_limits(void* self, double x1, double x2, double y1, double y2);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#clearSecondaryLimits)
///
/// @param self KPlotWidget*
///
void k_plotwidget_clear_secondary_limits(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#dataRect)
///
/// @param self const KPlotWidget*
///
QRectF* k_plotwidget_data_rect(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#secondaryDataRect)
///
/// @param self const KPlotWidget*
///
QRectF* k_plotwidget_secondary_data_rect(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#pixRect)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_pix_rect(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#addPlotObject)
///
/// @param self KPlotWidget*
/// @param object KPlotObject*
///
void k_plotwidget_add_plot_object(void* self, void* object);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#addPlotObjects)
///
/// @param self KPlotWidget*
/// @param objects libqt_list of KPlotObject*
///
void k_plotwidget_add_plot_objects(void* self, libqt_list objects);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#plotObjects)
///
/// @param self const KPlotWidget*
///
/// @return libqt_list of KPlotObject*
///
libqt_list k_plotwidget_plot_objects(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setAutoDeletePlotObjects)
///
/// @param self KPlotWidget*
/// @param autoDelete bool
///
void k_plotwidget_set_auto_delete_plot_objects(void* self, bool autoDelete);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#removeAllPlotObjects)
///
/// @param self KPlotWidget*
///
void k_plotwidget_remove_all_plot_objects(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#resetPlotMask)
///
/// @param self KPlotWidget*
///
void k_plotwidget_reset_plot_mask(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#resetPlot)
///
/// @param self KPlotWidget*
///
void k_plotwidget_reset_plot(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#replacePlotObject)
///
/// @param self KPlotWidget*
/// @param i int
/// @param o KPlotObject*
///
void k_plotwidget_replace_plot_object(void* self, int i, void* o);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#backgroundColor)
///
/// @param self const KPlotWidget*
///
QColor* k_plotwidget_background_color(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#foregroundColor)
///
/// @param self const KPlotWidget*
///
QColor* k_plotwidget_foreground_color(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#gridColor)
///
/// @param self const KPlotWidget*
///
QColor* k_plotwidget_grid_color(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setBackgroundColor)
///
/// @param self KPlotWidget*
/// @param bg QColor*
///
void k_plotwidget_set_background_color(void* self, const void* bg);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setForegroundColor)
///
/// @param self KPlotWidget*
/// @param fg QColor*
///
void k_plotwidget_set_foreground_color(void* self, const void* fg);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setGridColor)
///
/// @param self KPlotWidget*
/// @param gc QColor*
///
void k_plotwidget_set_grid_color(void* self, const void* gc);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#isGridShown)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_grid_shown(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#isObjectToolTipShown)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_object_tool_tip_shown(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#antialiasing)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_antialiasing(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setAntialiasing)
///
/// @param self KPlotWidget*
/// @param b bool
///
void k_plotwidget_set_antialiasing(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#leftPadding)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_left_padding(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#rightPadding)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_right_padding(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#topPadding)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_top_padding(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#bottomPadding)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_bottom_padding(const void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setLeftPadding)
///
/// @param self KPlotWidget*
/// @param padding int
///
void k_plotwidget_set_left_padding(void* self, int padding);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setRightPadding)
///
/// @param self KPlotWidget*
/// @param padding int
///
void k_plotwidget_set_right_padding(void* self, int padding);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setTopPadding)
///
/// @param self KPlotWidget*
/// @param padding int
///
void k_plotwidget_set_top_padding(void* self, int padding);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setBottomPadding)
///
/// @param self KPlotWidget*
/// @param padding int
///
void k_plotwidget_set_bottom_padding(void* self, int padding);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setDefaultPaddings)
///
/// @param self KPlotWidget*
///
void k_plotwidget_set_default_paddings(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#mapToWidget)
///
/// @param self const KPlotWidget*
/// @param p QPointF*
///
QPointF* k_plotwidget_map_to_widget(const void* self, const void* p);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#maskRect)
///
/// @param self KPlotWidget*
/// @param r QRectF*
///
void k_plotwidget_mask_rect(void* self, const void* r);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#maskAlongLine)
///
/// @param self KPlotWidget*
/// @param p1 QPointF*
/// @param p2 QPointF*
///
void k_plotwidget_mask_along_line(void* self, const void* p1, const void* p2);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#placeLabel)
///
/// @param self KPlotWidget*
/// @param painter QPainter*
/// @param pp KPlotPoint*
///
void k_plotwidget_place_label(void* self, void* painter, void* pp);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#axis)
///
/// @param self KPlotWidget*
/// @param type enum KPlotWidget__Axis
///
KPlotAxis* k_plotwidget_axis(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#axis)
///
/// @param self const KPlotWidget*
/// @param type enum KPlotWidget__Axis
///
const KPlotAxis* k_plotwidget_axis2(const void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setShowGrid)
///
/// @param self KPlotWidget*
/// @param show bool
///
void k_plotwidget_set_show_grid(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setObjectToolTipShown)
///
/// @param self KPlotWidget*
/// @param show bool
///
void k_plotwidget_set_object_tool_tip_shown(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#event)
///
/// @param self KPlotWidget*
/// @param param1 QEvent*
///
bool k_plotwidget_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self, QEvent* param1)
///
void k_plotwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#event)
///
/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param param1 QEvent*
///
bool k_plotwidget_super_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#paintEvent)
///
/// @param self KPlotWidget*
/// @param param1 QPaintEvent*
///
void k_plotwidget_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QPaintEvent* param1)
///
void k_plotwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param param1 QPaintEvent*
///
void k_plotwidget_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#resizeEvent)
///
/// @param self KPlotWidget*
/// @param param1 QResizeEvent*
///
void k_plotwidget_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QResizeEvent* param1)
///
void k_plotwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param param1 QResizeEvent*
///
void k_plotwidget_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#drawAxes)
///
/// @param self KPlotWidget*
/// @param p QPainter*
///
void k_plotwidget_draw_axes(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#drawAxes)
///
/// Allows for overriding the related default method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QPainter* p)
///
void k_plotwidget_on_draw_axes(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#drawAxes)
///
/// Base class method implementation
///
/// @param self KPlotWidget*
/// @param p QPainter*
///
void k_plotwidget_super_draw_axes(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#setPixRect)
///
/// @param self KPlotWidget*
///
void k_plotwidget_set_pix_rect(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#pointsUnderPoint)
///
/// @param self const KPlotWidget*
/// @param p QPoint*
///
/// @return libqt_list of KPlotPoint*
///
libqt_list k_plotwidget_points_under_point(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_plotwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_plotwidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#maskRect)
///
/// @param self KPlotWidget*
/// @param r QRectF*
/// @param value float
///
void k_plotwidget_mask_rect2(void* self, const void* r, float value);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#maskAlongLine)
///
/// @param self KPlotWidget*
/// @param p1 QPointF*
/// @param p2 QPointF*
/// @param value float
///
void k_plotwidget_mask_along_line3(void* self, const void* p1, const void* p2, float value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KPlotWidget*
/// @param frameStyle int
///
void k_plotwidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const KPlotWidget*
///
/// @return enum QFrame__Shape
///
int32_t k_plotwidget_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KPlotWidget*
/// @param frameShape enum QFrame__Shape
///
void k_plotwidget_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const KPlotWidget*
///
/// @return enum QFrame__Shadow
///
int32_t k_plotwidget_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KPlotWidget*
/// @param frameShadow enum QFrame__Shadow
///
void k_plotwidget_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KPlotWidget*
/// @param lineWidth int
///
void k_plotwidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KPlotWidget*
/// @param midLineWidth int
///
void k_plotwidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KPlotWidget*
/// @param frameRect QRect*
///
void k_plotwidget_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self KPlotWidget*
///
QPaintDevice* k_plotwidget_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a KPlotWidget object
///
/// @param _qpaintdevice QPaintDevice*
///
KPlotWidget* k_plotwidget_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KPlotWidget*
///
uintptr_t k_plotwidget_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KPlotWidget*
///
void k_plotwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KPlotWidget*
///
uintptr_t k_plotwidget_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KPlotWidget*
///
uintptr_t k_plotwidget_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KPlotWidget*
///
QStyle* k_plotwidget_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KPlotWidget*
/// @param style QStyle*
///
void k_plotwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KPlotWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_plotwidget_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KPlotWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_plotwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
///
bool k_plotwidget_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KPlotWidget*
/// @param enabled bool
///
void k_plotwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KPlotWidget*
/// @param disabled bool
///
void k_plotwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KPlotWidget*
/// @param windowModified bool
///
void k_plotwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KPlotWidget*
///
const QRect* k_plotwidget_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KPlotWidget*
///
QPoint* k_plotwidget_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KPlotWidget*
///
QRegion* k_plotwidget_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPlotWidget*
/// @param minimumSize QSize*
///
void k_plotwidget_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPlotWidget*
/// @param minw int
/// @param minh int
///
void k_plotwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPlotWidget*
/// @param maximumSize QSize*
///
void k_plotwidget_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPlotWidget*
/// @param maxw int
/// @param maxh int
///
void k_plotwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KPlotWidget*
/// @param minw int
///
void k_plotwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KPlotWidget*
/// @param minh int
///
void k_plotwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KPlotWidget*
/// @param maxw int
///
void k_plotwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KPlotWidget*
/// @param maxh int
///
void k_plotwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPlotWidget*
/// @param sizeIncrement QSize*
///
void k_plotwidget_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPlotWidget*
/// @param w int
/// @param h int
///
void k_plotwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KPlotWidget*
///
QSize* k_plotwidget_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPlotWidget*
/// @param baseSize QSize*
///
void k_plotwidget_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPlotWidget*
/// @param basew int
/// @param baseh int
///
void k_plotwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPlotWidget*
/// @param fixedSize QSize*
///
void k_plotwidget_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPlotWidget*
/// @param w int
/// @param h int
///
void k_plotwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KPlotWidget*
/// @param w int
///
void k_plotwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KPlotWidget*
/// @param h int
///
void k_plotwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KPlotWidget*
/// @param param1 QPointF*
///
QPointF* k_plotwidget_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KPlotWidget*
/// @param param1 QPoint*
///
QPoint* k_plotwidget_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KPlotWidget*
/// @param param1 QPointF*
///
QPointF* k_plotwidget_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KPlotWidget*
/// @param param1 QPoint*
///
QPoint* k_plotwidget_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KPlotWidget*
/// @param param1 QPointF*
///
QPointF* k_plotwidget_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KPlotWidget*
/// @param param1 QPoint*
///
QPoint* k_plotwidget_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KPlotWidget*
/// @param param1 QPointF*
///
QPointF* k_plotwidget_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KPlotWidget*
/// @param param1 QPoint*
///
QPoint* k_plotwidget_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_plotwidget_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_plotwidget_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_plotwidget_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_plotwidget_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KPlotWidget*
///
const QPalette* k_plotwidget_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPlotWidget*
/// @param palette QPalette*
///
void k_plotwidget_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KPlotWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_plotwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KPlotWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_plotwidget_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KPlotWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_plotwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KPlotWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_plotwidget_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KPlotWidget*
///
const QFont* k_plotwidget_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPlotWidget*
/// @param font QFont*
///
void k_plotwidget_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KPlotWidget*
///
QFontMetrics* k_plotwidget_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KPlotWidget*
///
QFontInfo* k_plotwidget_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KPlotWidget*
///
QCursor* k_plotwidget_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPlotWidget*
/// @param cursor QCursor*
///
void k_plotwidget_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KPlotWidget*
///
void k_plotwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KPlotWidget*
/// @param enable bool
///
void k_plotwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KPlotWidget*
/// @param enable bool
///
void k_plotwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPlotWidget*
/// @param mask QBitmap*
///
void k_plotwidget_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPlotWidget*
/// @param mask QRegion*
///
void k_plotwidget_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KPlotWidget*
///
QRegion* k_plotwidget_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KPlotWidget*
///
void k_plotwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param target QPaintDevice*
///
void k_plotwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param painter QPainter*
///
void k_plotwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPlotWidget*
///
QPixmap* k_plotwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KPlotWidget*
///
QGraphicsEffect* k_plotwidget_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KPlotWidget*
/// @param effect QGraphicsEffect*
///
void k_plotwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPlotWidget*
/// @param type enum Qt__GestureType
///
void k_plotwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KPlotWidget*
/// @param type enum Qt__GestureType
///
void k_plotwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KPlotWidget*
/// @param windowTitle const char*
///
void k_plotwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KPlotWidget*
/// @param styleSheet const char*
///
void k_plotwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPlotWidget*
/// @param icon QIcon*
///
void k_plotwidget_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KPlotWidget*
///
QIcon* k_plotwidget_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KPlotWidget*
/// @param windowIconText const char*
///
void k_plotwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KPlotWidget*
/// @param windowRole const char*
///
void k_plotwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KPlotWidget*
/// @param filePath const char*
///
void k_plotwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KPlotWidget*
/// @param level double
///
void k_plotwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KPlotWidget*
///
double k_plotwidget_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KPlotWidget*
/// @param toolTip const char*
///
void k_plotwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KPlotWidget*
/// @param msec int
///
void k_plotwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KPlotWidget*
/// @param statusTip const char*
///
void k_plotwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KPlotWidget*
/// @param whatsThis const char*
///
void k_plotwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KPlotWidget*
/// @param name const char*
///
void k_plotwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KPlotWidget*
/// @param description const char*
///
void k_plotwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KPlotWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_plotwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KPlotWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_plotwidget_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KPlotWidget*
///
void k_plotwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KPlotWidget*
/// @param locale QLocale*
///
void k_plotwidget_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KPlotWidget*
///
QLocale* k_plotwidget_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KPlotWidget*
///
void k_plotwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPlotWidget*
///
void k_plotwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KPlotWidget*
///
void k_plotwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KPlotWidget*
///
void k_plotwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPlotWidget*
/// @param reason enum Qt__FocusReason
///
void k_plotwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KPlotWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_plotwidget_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KPlotWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_plotwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_plotwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KPlotWidget*
/// @param focusProxy QWidget*
///
void k_plotwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KPlotWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_plotwidget_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KPlotWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_plotwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPlotWidget*
///
void k_plotwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPlotWidget*
/// @param param1 QCursor*
///
void k_plotwidget_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KPlotWidget*
///
void k_plotwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KPlotWidget*
///
void k_plotwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KPlotWidget*
///
void k_plotwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPlotWidget*
/// @param key QKeySequence*
///
int32_t k_plotwidget_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KPlotWidget*
/// @param id int
///
void k_plotwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPlotWidget*
/// @param id int
///
void k_plotwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPlotWidget*
/// @param id int
///
void k_plotwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_plotwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_plotwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KPlotWidget*
/// @param enable bool
///
void k_plotwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KPlotWidget*
///
QGraphicsProxyWidget* k_plotwidget_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPlotWidget*
///
void k_plotwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPlotWidget*
///
void k_plotwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPlotWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_plotwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPlotWidget*
/// @param param1 QRect*
///
void k_plotwidget_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPlotWidget*
/// @param param1 QRegion*
///
void k_plotwidget_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPlotWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_plotwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPlotWidget*
/// @param param1 QRect*
///
void k_plotwidget_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPlotWidget*
/// @param param1 QRegion*
///
void k_plotwidget_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KPlotWidget*
/// @param hidden bool
///
void k_plotwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KPlotWidget*
///
void k_plotwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KPlotWidget*
///
void k_plotwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KPlotWidget*
///
void k_plotwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KPlotWidget*
///
void k_plotwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KPlotWidget*
///
void k_plotwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KPlotWidget*
///
void k_plotwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KPlotWidget*
///
bool k_plotwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KPlotWidget*
///
void k_plotwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KPlotWidget*
///
void k_plotwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KPlotWidget*
/// @param param1 QWidget*
///
void k_plotwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPlotWidget*
/// @param x int
/// @param y int
///
void k_plotwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPlotWidget*
/// @param param1 QPoint*
///
void k_plotwidget_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPlotWidget*
/// @param w int
/// @param h int
///
void k_plotwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPlotWidget*
/// @param param1 QSize*
///
void k_plotwidget_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPlotWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_plotwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPlotWidget*
/// @param geometry QRect*
///
void k_plotwidget_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KPlotWidget*
///
char* k_plotwidget_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPlotWidget*
/// @param geometry char*
///
bool k_plotwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KPlotWidget*
///
void k_plotwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KPlotWidget*
/// @param param1 QWidget*
///
bool k_plotwidget_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KPlotWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_plotwidget_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KPlotWidget*
/// @param state flag of enum Qt__WindowState
///
void k_plotwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KPlotWidget*
/// @param state flag of enum Qt__WindowState
///
void k_plotwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KPlotWidget*
///
QSizePolicy* k_plotwidget_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPlotWidget*
/// @param sizePolicy QSizePolicy*
///
void k_plotwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPlotWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_plotwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KPlotWidget*
///
QRegion* k_plotwidget_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPlotWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_plotwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPlotWidget*
/// @param margins QMargins*
///
void k_plotwidget_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KPlotWidget*
///
QMargins* k_plotwidget_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KPlotWidget*
///
QRect* k_plotwidget_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KPlotWidget*
///
QLayout* k_plotwidget_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KPlotWidget*
/// @param layout QLayout*
///
void k_plotwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KPlotWidget*
///
void k_plotwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPlotWidget*
/// @param parent QWidget*
///
void k_plotwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPlotWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_plotwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPlotWidget*
/// @param dx int
/// @param dy int
///
void k_plotwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPlotWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_plotwidget_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KPlotWidget*
/// @param on bool
///
void k_plotwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPlotWidget*
/// @param action QAction*
///
void k_plotwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KPlotWidget*
/// @param actions libqt_list of QAction*
///
void k_plotwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KPlotWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_plotwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KPlotWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_plotwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KPlotWidget*
/// @param action QAction*
///
void k_plotwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KPlotWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_plotwidget_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPlotWidget*
/// @param text const char*
///
QAction* k_plotwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPlotWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_plotwidget_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPlotWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_plotwidget_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPlotWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_plotwidget_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KPlotWidget*
///
QWidget* k_plotwidget_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KPlotWidget*
/// @param type flag of enum Qt__WindowType
///
void k_plotwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KPlotWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_plotwidget_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPlotWidget*
/// @param param1 enum Qt__WindowType
///
void k_plotwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KPlotWidget*
/// @param type flag of enum Qt__WindowType
///
void k_plotwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KPlotWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_plotwidget_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_plotwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPlotWidget*
/// @param x int
/// @param y int
///
QWidget* k_plotwidget_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPlotWidget*
/// @param p QPoint*
///
QWidget* k_plotwidget_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPlotWidget*
/// @param p QPointF*
///
QWidget* k_plotwidget_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPlotWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_plotwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KPlotWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_plotwidget_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KPlotWidget*
///
void k_plotwidget_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KPlotWidget*
/// @param child QWidget*
///
bool k_plotwidget_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KPlotWidget*
/// @param enabled bool
///
void k_plotwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KPlotWidget*
///
QBackingStore* k_plotwidget_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KPlotWidget*
///
QWindow* k_plotwidget_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KPlotWidget*
///
QScreen* k_plotwidget_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KPlotWidget*
/// @param screen QScreen*
///
void k_plotwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_plotwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPlotWidget*
/// @param title const char*
///
void k_plotwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, const char* title)
///
void k_plotwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPlotWidget*
/// @param icon QIcon*
///
void k_plotwidget_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QIcon* icon)
///
void k_plotwidget_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPlotWidget*
/// @param iconText const char*
///
void k_plotwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, const char* iconText)
///
void k_plotwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPlotWidget*
/// @param pos QPoint*
///
void k_plotwidget_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QPoint* pos)
///
void k_plotwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KPlotWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_plotwidget_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KPlotWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_plotwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_plotwidget_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_plotwidget_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_plotwidget_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_plotwidget_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_plotwidget_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPlotWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_plotwidget_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPlotWidget*
/// @param rectangle QRect*
///
QPixmap* k_plotwidget_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPlotWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_plotwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPlotWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_plotwidget_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPlotWidget*
/// @param id int
/// @param enable bool
///
void k_plotwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPlotWidget*
/// @param id int
/// @param enable bool
///
void k_plotwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPlotWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_plotwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPlotWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_plotwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_plotwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_plotwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPlotWidget*
///
const char* k_plotwidget_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPlotWidget*
/// @param name const char*
///
void k_plotwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPlotWidget*
/// @param b bool
///
bool k_plotwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KPlotWidget*
///
QThread* k_plotwidget_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPlotWidget*
/// @param thread QThread*
///
bool k_plotwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPlotWidget*
/// @param interval int
///
int32_t k_plotwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPlotWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_plotwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPlotWidget*
/// @param id int
///
void k_plotwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPlotWidget*
/// @param id enum Qt__TimerId
///
void k_plotwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KPlotWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_plotwidget_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPlotWidget*
/// @param filterObj QObject*
///
void k_plotwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPlotWidget*
/// @param obj QObject*
///
void k_plotwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_plotwidget_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_plotwidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KPlotWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_plotwidget_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_plotwidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_plotwidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
/// @param receiver QObject*
///
bool k_plotwidget_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_plotwidget_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KPlotWidget*
///
void k_plotwidget_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KPlotWidget*
///
void k_plotwidget_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPlotWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_plotwidget_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KPlotWidget*
/// @param name const char*
///
QVariant* k_plotwidget_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KPlotWidget*
///
const char** k_plotwidget_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPlotWidget*
///
QBindingStorage* k_plotwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KPlotWidget*
///
const QBindingStorage* k_plotwidget_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPlotWidget*
///
void k_plotwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self)
///
void k_plotwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KPlotWidget*
///
QObject* k_plotwidget_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KPlotWidget*
/// @param classname const char*
///
bool k_plotwidget_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPlotWidget*
///
void k_plotwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPlotWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_plotwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPlotWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_plotwidget_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_plotwidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_plotwidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KPlotWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_plotwidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
/// @param signal const char*
///
bool k_plotwidget_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_plotwidget_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_plotwidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPlotWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_plotwidget_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPlotWidget*
/// @param param1 QObject*
///
void k_plotwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QObject* param1)
///
void k_plotwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KPlotWidget*
///
double k_plotwidget_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KPlotWidget*
///
double k_plotwidget_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_plotwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_plotwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QEvent*
///
void k_plotwidget_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QEvent*
///
void k_plotwidget_super_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QEvent* param1)
///
void k_plotwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param option QStyleOptionFrame*
///
void k_plotwidget_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param option QStyleOptionFrame*
///
void k_plotwidget_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback void func(KPlotWidget* self, QStyleOptionFrame* option)
///
void k_plotwidget_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self)
///
void k_plotwidget_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param visible bool
///
void k_plotwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param visible bool
///
void k_plotwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, bool visible)
///
void k_plotwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 int
///
int32_t k_plotwidget_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 int
///
int32_t k_plotwidget_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self, int param1)
///
void k_plotwidget_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
bool k_plotwidget_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback bool func(KPlotWidget* self)
///
void k_plotwidget_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
QPaintEngine* k_plotwidget_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
QPaintEngine* k_plotwidget_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback QPaintEngine* func(KPlotWidget* self)
///
void k_plotwidget_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMouseEvent* event)
///
void k_plotwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMouseEvent* event)
///
void k_plotwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMouseEvent* event)
///
void k_plotwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMouseEvent*
///
void k_plotwidget_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMouseEvent* event)
///
void k_plotwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QWheelEvent*
///
void k_plotwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QWheelEvent*
///
void k_plotwidget_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QWheelEvent* event)
///
void k_plotwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QKeyEvent*
///
void k_plotwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QKeyEvent*
///
void k_plotwidget_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QKeyEvent* event)
///
void k_plotwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QKeyEvent*
///
void k_plotwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QKeyEvent*
///
void k_plotwidget_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QKeyEvent* event)
///
void k_plotwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QFocusEvent*
///
void k_plotwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QFocusEvent*
///
void k_plotwidget_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QFocusEvent* event)
///
void k_plotwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QFocusEvent*
///
void k_plotwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QFocusEvent*
///
void k_plotwidget_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QFocusEvent* event)
///
void k_plotwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEnterEvent*
///
void k_plotwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEnterEvent*
///
void k_plotwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QEnterEvent* event)
///
void k_plotwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEvent*
///
void k_plotwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEvent*
///
void k_plotwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QEvent* event)
///
void k_plotwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMoveEvent*
///
void k_plotwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QMoveEvent*
///
void k_plotwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMoveEvent* event)
///
void k_plotwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QCloseEvent*
///
void k_plotwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QCloseEvent*
///
void k_plotwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QCloseEvent* event)
///
void k_plotwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QContextMenuEvent*
///
void k_plotwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QContextMenuEvent*
///
void k_plotwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QContextMenuEvent* event)
///
void k_plotwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QTabletEvent*
///
void k_plotwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QTabletEvent*
///
void k_plotwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QTabletEvent* event)
///
void k_plotwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QActionEvent*
///
void k_plotwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QActionEvent*
///
void k_plotwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QActionEvent* event)
///
void k_plotwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragEnterEvent*
///
void k_plotwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragEnterEvent*
///
void k_plotwidget_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QDragEnterEvent* event)
///
void k_plotwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragMoveEvent*
///
void k_plotwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragMoveEvent*
///
void k_plotwidget_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QDragMoveEvent* event)
///
void k_plotwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragLeaveEvent*
///
void k_plotwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDragLeaveEvent*
///
void k_plotwidget_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QDragLeaveEvent* event)
///
void k_plotwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDropEvent*
///
void k_plotwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QDropEvent*
///
void k_plotwidget_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QDropEvent* event)
///
void k_plotwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QShowEvent*
///
void k_plotwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QShowEvent*
///
void k_plotwidget_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QShowEvent* event)
///
void k_plotwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QHideEvent*
///
void k_plotwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QHideEvent*
///
void k_plotwidget_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QHideEvent* event)
///
void k_plotwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_plotwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_plotwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_plotwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_plotwidget_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_plotwidget_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_plotwidget_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param painter QPainter*
///
void k_plotwidget_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param painter QPainter*
///
void k_plotwidget_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback void func(KPlotWidget* self, QPainter* painter)
///
void k_plotwidget_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param offset QPoint*
///
QPaintDevice* k_plotwidget_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param offset QPoint*
///
QPaintDevice* k_plotwidget_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback QPaintDevice* func(KPlotWidget* self, QPoint* offset)
///
void k_plotwidget_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
QPainter* k_plotwidget_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
QPainter* k_plotwidget_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback QPainter* func(KPlotWidget* self)
///
void k_plotwidget_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QInputMethodEvent*
///
void k_plotwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QInputMethodEvent*
///
void k_plotwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QInputMethodEvent* param1)
///
void k_plotwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_plotwidget_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_plotwidget_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback QVariant* func(KPlotWidget* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_plotwidget_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param next bool
///
bool k_plotwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param next bool
///
bool k_plotwidget_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self, bool next)
///
void k_plotwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_plotwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_plotwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self, QObject* watched, QEvent* event)
///
void k_plotwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QTimerEvent*
///
void k_plotwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QTimerEvent*
///
void k_plotwidget_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QTimerEvent* event)
///
void k_plotwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QChildEvent*
///
void k_plotwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QChildEvent*
///
void k_plotwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QChildEvent* event)
///
void k_plotwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEvent*
///
void k_plotwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param event QEvent*
///
void k_plotwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QEvent* event)
///
void k_plotwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param signal QMetaMethod*
///
void k_plotwidget_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param signal QMetaMethod*
///
void k_plotwidget_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMetaMethod* signal)
///
void k_plotwidget_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param signal QMetaMethod*
///
void k_plotwidget_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param signal QMetaMethod*
///
void k_plotwidget_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QMetaMethod* signal)
///
void k_plotwidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QPainter*
///
void k_plotwidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param param1 QPainter*
///
void k_plotwidget_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, QPainter* param1)
///
void k_plotwidget_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self)
///
void k_plotwidget_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self)
///
void k_plotwidget_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
///
void k_plotwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self)
///
void k_plotwidget_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
///
bool k_plotwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
///
bool k_plotwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self)
///
void k_plotwidget_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPlotWidget*
///
bool k_plotwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPlotWidget*
///
bool k_plotwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPlotWidget*
/// @param callback bool func(KPlotWidget* self)
///
void k_plotwidget_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
QObject* k_plotwidget_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
QObject* k_plotwidget_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback QObject* func(KPlotWidget* self)
///
void k_plotwidget_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
///
int32_t k_plotwidget_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self)
///
void k_plotwidget_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param signal const char*
///
int32_t k_plotwidget_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param signal const char*
///
int32_t k_plotwidget_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback int32_t func(KPlotWidget* self, const char* signal)
///
void k_plotwidget_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param signal QMetaMethod*
///
bool k_plotwidget_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param signal QMetaMethod*
///
bool k_plotwidget_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback bool func(KPlotWidget* self, QMetaMethod* signal)
///
void k_plotwidget_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPlotWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_plotwidget_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_plotwidget_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KPlotWidget*
/// @param callback double func(KPlotWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_plotwidget_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPlotWidget*
/// @param callback void func(KPlotWidget* self, const char* objectName)
///
void k_plotwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kplotwidget.html#dtor.KPlotWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KPlotWidget*
///
void k_plotwidget_delete(void* self);

/// [Upstream resources](https://api.kde.org/kplotwidget.html#public-types)

typedef enum {
    KPLOTWIDGET_AXIS_LEFTAXIS = 0,
    KPLOTWIDGET_AXIS_BOTTOMAXIS = 1,
    KPLOTWIDGET_AXIS_RIGHTAXIS = 2,
    KPLOTWIDGET_AXIS_TOPAXIS = 3
} KPlotWidget__Axis;

#endif
