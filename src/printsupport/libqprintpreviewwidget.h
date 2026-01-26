#pragma once
#ifndef SRC_PRINTSUPPORT_QT6C_LIBQPRINTPREVIEWWIDGET_H
#define SRC_PRINTSUPPORT_QT6C_LIBQPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new constructs a new QPrintPreviewWidget object.
///
/// @param parent QWidget*
///
QPrintPreviewWidget* q_printpreviewwidget_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new2 constructs a new QPrintPreviewWidget object.
///
/// @param printer QPrinter*
///
QPrintPreviewWidget* q_printpreviewwidget_new2(void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new3 constructs a new QPrintPreviewWidget object.
///
QPrintPreviewWidget* q_printpreviewwidget_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new4 constructs a new QPrintPreviewWidget object.
///
/// @param printer QPrinter*
/// @param parent QWidget*
///
QPrintPreviewWidget* q_printpreviewwidget_new4(void* printer, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new5 constructs a new QPrintPreviewWidget object.
///
/// @param printer QPrinter*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QPrintPreviewWidget* q_printpreviewwidget_new5(void* printer, void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html)

/// q_printpreviewwidget_new6 constructs a new QPrintPreviewWidget object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QPrintPreviewWidget* q_printpreviewwidget_new6(void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPrintPreviewWidget*
///
const QMetaObject* q_printpreviewwidget_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPrintPreviewWidget*
/// @param callback const QMetaObject* func()
///
void q_printpreviewwidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPrintPreviewWidget*
///
const QMetaObject* q_printpreviewwidget_qbase_meta_object(void* self);

/// @param self QPrintPreviewWidget*
/// @param param1 const char*
///
void* q_printpreviewwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPrintPreviewWidget*
/// @param callback void* func(QPrintPreviewWidget* self, const char* param1)
///
void q_printpreviewwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPrintPreviewWidget*
/// @param param1 const char*
///
void* q_printpreviewwidget_qbase_metacast(void* self, const char* param1);

/// @param self QPrintPreviewWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_printpreviewwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func(QPrintPreviewWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_printpreviewwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_printpreviewwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_printpreviewwidget_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomFactor)
///
/// @param self QPrintPreviewWidget*
///
double q_printpreviewwidget_zoom_factor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#orientation)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum QPageLayout__Orientation
///
int32_t q_printpreviewwidget_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#viewMode)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum QPrintPreviewWidget__ViewMode
///
int32_t q_printpreviewwidget_view_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomMode)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum QPrintPreviewWidget__ZoomMode
///
int32_t q_printpreviewwidget_zoom_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#currentPage)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_current_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#pageCount)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_page_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// @param self QPrintPreviewWidget*
/// @param visible bool
///
void q_printpreviewwidget_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, bool visible)
///
void q_printpreviewwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// Base class method implementation
///
/// @param self QPrintPreviewWidget*
/// @param visible bool
///
void q_printpreviewwidget_qbase_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#print)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_print(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_zoom_in(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_zoom_out(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomFactor)
///
/// @param self QPrintPreviewWidget*
/// @param zoomFactor double
///
void q_printpreviewwidget_set_zoom_factor(void* self, double zoomFactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setOrientation)
///
/// @param self QPrintPreviewWidget*
/// @param orientation enum QPageLayout__Orientation
///
void q_printpreviewwidget_set_orientation(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setViewMode)
///
/// @param self QPrintPreviewWidget*
/// @param viewMode enum QPrintPreviewWidget__ViewMode
///
void q_printpreviewwidget_set_view_mode(void* self, int32_t viewMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomMode)
///
/// @param self QPrintPreviewWidget*
/// @param zoomMode enum QPrintPreviewWidget__ZoomMode
///
void q_printpreviewwidget_set_zoom_mode(void* self, int32_t zoomMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setCurrentPage)
///
/// @param self QPrintPreviewWidget*
/// @param pageNumber int
///
void q_printpreviewwidget_set_current_page(void* self, int pageNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitToWidth)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_fit_to_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitInView)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_fit_in_view(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setLandscapeOrientation)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_landscape_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setPortraitOrientation)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_portrait_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setSinglePageViewMode)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_single_page_view_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setFacingPagesViewMode)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_facing_pages_view_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setAllPagesViewMode)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_all_pages_view_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#updatePreview)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_update_preview(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#paintRequested)
///
/// @param self QPrintPreviewWidget*
/// @param printer QPrinter*
///
void q_printpreviewwidget_paint_requested(void* self, void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#paintRequested)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QPrinter* printer)
///
void q_printpreviewwidget_on_paint_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#previewChanged)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_preview_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#previewChanged)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self)
///
void q_printpreviewwidget_on_preview_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_printpreviewwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_printpreviewwidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// @param self QPrintPreviewWidget*
/// @param zoom double
///
void q_printpreviewwidget_zoom_in1(void* self, double zoom);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// @param self QPrintPreviewWidget*
/// @param zoom double
///
void q_printpreviewwidget_zoom_out1(void* self, double zoom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QPrintPreviewWidget*
///
uintptr_t q_printpreviewwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QPrintPreviewWidget*
///
uintptr_t q_printpreviewwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QPrintPreviewWidget*
///
uintptr_t q_printpreviewwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QPrintPreviewWidget*
///
QStyle* q_printpreviewwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPrintPreviewWidget*
/// @param style QStyle*
///
void q_printpreviewwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum Qt__WindowModality
///
int32_t q_printpreviewwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPrintPreviewWidget*
/// @param windowModality enum Qt__WindowModality
///
void q_printpreviewwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
///
bool q_printpreviewwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPrintPreviewWidget*
/// @param enabled bool
///
void q_printpreviewwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPrintPreviewWidget*
/// @param disabled bool
///
void q_printpreviewwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPrintPreviewWidget*
/// @param windowModified bool
///
void q_printpreviewwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QPrintPreviewWidget*
///
QRect* q_printpreviewwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QPrintPreviewWidget*
///
const QRect* q_printpreviewwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QPrintPreviewWidget*
///
QRect* q_printpreviewwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QPrintPreviewWidget*
///
QPoint* q_printpreviewwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QPrintPreviewWidget*
///
QRect* q_printpreviewwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QPrintPreviewWidget*
///
QRect* q_printpreviewwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QPrintPreviewWidget*
///
QRegion* q_printpreviewwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPrintPreviewWidget*
/// @param minimumSize QSize*
///
void q_printpreviewwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPrintPreviewWidget*
/// @param minw int
/// @param minh int
///
void q_printpreviewwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPrintPreviewWidget*
/// @param maximumSize QSize*
///
void q_printpreviewwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPrintPreviewWidget*
/// @param maxw int
/// @param maxh int
///
void q_printpreviewwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPrintPreviewWidget*
/// @param minw int
///
void q_printpreviewwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPrintPreviewWidget*
/// @param minh int
///
void q_printpreviewwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPrintPreviewWidget*
/// @param maxw int
///
void q_printpreviewwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPrintPreviewWidget*
/// @param maxh int
///
void q_printpreviewwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPrintPreviewWidget*
/// @param sizeIncrement QSize*
///
void q_printpreviewwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPrintPreviewWidget*
/// @param w int
/// @param h int
///
void q_printpreviewwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPrintPreviewWidget*
/// @param baseSize QSize*
///
void q_printpreviewwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPrintPreviewWidget*
/// @param basew int
/// @param baseh int
///
void q_printpreviewwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPrintPreviewWidget*
/// @param fixedSize QSize*
///
void q_printpreviewwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPrintPreviewWidget*
/// @param w int
/// @param h int
///
void q_printpreviewwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPrintPreviewWidget*
/// @param w int
///
void q_printpreviewwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPrintPreviewWidget*
/// @param h int
///
void q_printpreviewwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPointF*
///
QPointF* q_printpreviewwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPoint*
///
QPoint* q_printpreviewwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPointF*
///
QPointF* q_printpreviewwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPoint*
///
QPoint* q_printpreviewwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPointF*
///
QPointF* q_printpreviewwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPoint*
///
QPoint* q_printpreviewwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPointF*
///
QPointF* q_printpreviewwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPoint*
///
QPoint* q_printpreviewwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_printpreviewwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_printpreviewwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_printpreviewwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_printpreviewwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QPrintPreviewWidget*
///
const QPalette* q_printpreviewwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPrintPreviewWidget*
/// @param palette QPalette*
///
void q_printpreviewwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPrintPreviewWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_printpreviewwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_printpreviewwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPrintPreviewWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_printpreviewwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_printpreviewwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QPrintPreviewWidget*
///
const QFont* q_printpreviewwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPrintPreviewWidget*
/// @param font QFont*
///
void q_printpreviewwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QPrintPreviewWidget*
///
QFontMetrics* q_printpreviewwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QPrintPreviewWidget*
///
QFontInfo* q_printpreviewwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QPrintPreviewWidget*
///
QCursor* q_printpreviewwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPrintPreviewWidget*
/// @param cursor QCursor*
///
void q_printpreviewwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPrintPreviewWidget*
/// @param enable bool
///
void q_printpreviewwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPrintPreviewWidget*
/// @param enable bool
///
void q_printpreviewwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPrintPreviewWidget*
/// @param mask QBitmap*
///
void q_printpreviewwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPrintPreviewWidget*
/// @param mask QRegion*
///
void q_printpreviewwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QPrintPreviewWidget*
///
QRegion* q_printpreviewwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param target QPaintDevice*
///
void q_printpreviewwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
///
void q_printpreviewwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPrintPreviewWidget*
///
QPixmap* q_printpreviewwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QPrintPreviewWidget*
///
QGraphicsEffect* q_printpreviewwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPrintPreviewWidget*
/// @param effect QGraphicsEffect*
///
void q_printpreviewwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPrintPreviewWidget*
/// @param type enum Qt__GestureType
///
void q_printpreviewwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPrintPreviewWidget*
/// @param type enum Qt__GestureType
///
void q_printpreviewwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPrintPreviewWidget*
/// @param windowTitle const char*
///
void q_printpreviewwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPrintPreviewWidget*
/// @param styleSheet const char*
///
void q_printpreviewwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPrintPreviewWidget*
/// @param icon QIcon*
///
void q_printpreviewwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QPrintPreviewWidget*
///
QIcon* q_printpreviewwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPrintPreviewWidget*
/// @param windowIconText const char*
///
void q_printpreviewwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPrintPreviewWidget*
/// @param windowRole const char*
///
void q_printpreviewwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPrintPreviewWidget*
/// @param filePath const char*
///
void q_printpreviewwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPrintPreviewWidget*
/// @param level double
///
void q_printpreviewwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QPrintPreviewWidget*
///
double q_printpreviewwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPrintPreviewWidget*
/// @param toolTip const char*
///
void q_printpreviewwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPrintPreviewWidget*
/// @param msec int
///
void q_printpreviewwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPrintPreviewWidget*
/// @param statusTip const char*
///
void q_printpreviewwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPrintPreviewWidget*
/// @param whatsThis const char*
///
void q_printpreviewwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPrintPreviewWidget*
/// @param name const char*
///
void q_printpreviewwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPrintPreviewWidget*
/// @param description const char*
///
void q_printpreviewwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPrintPreviewWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_printpreviewwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_printpreviewwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPrintPreviewWidget*
/// @param locale QLocale*
///
void q_printpreviewwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QPrintPreviewWidget*
///
QLocale* q_printpreviewwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPrintPreviewWidget*
/// @param reason enum Qt__FocusReason
///
void q_printpreviewwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_printpreviewwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPrintPreviewWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_printpreviewwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_printpreviewwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPrintPreviewWidget*
/// @param focusProxy QWidget*
///
void q_printpreviewwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_printpreviewwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPrintPreviewWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_printpreviewwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QCursor*
///
void q_printpreviewwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPrintPreviewWidget*
/// @param key QKeySequence*
///
int32_t q_printpreviewwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPrintPreviewWidget*
/// @param id int
///
void q_printpreviewwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPrintPreviewWidget*
/// @param id int
///
void q_printpreviewwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPrintPreviewWidget*
/// @param id int
///
void q_printpreviewwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_printpreviewwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_printpreviewwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPrintPreviewWidget*
/// @param enable bool
///
void q_printpreviewwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QPrintPreviewWidget*
///
QGraphicsProxyWidget* q_printpreviewwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintPreviewWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_printpreviewwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QRect*
///
void q_printpreviewwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QRegion*
///
void q_printpreviewwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintPreviewWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_printpreviewwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QRect*
///
void q_printpreviewwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QRegion*
///
void q_printpreviewwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPrintPreviewWidget*
/// @param hidden bool
///
void q_printpreviewwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
///
void q_printpreviewwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPrintPreviewWidget*
/// @param x int
/// @param y int
///
void q_printpreviewwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QPoint*
///
void q_printpreviewwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPrintPreviewWidget*
/// @param w int
/// @param h int
///
void q_printpreviewwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QSize*
///
void q_printpreviewwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPrintPreviewWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_printpreviewwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPrintPreviewWidget*
/// @param geometry QRect*
///
void q_printpreviewwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPrintPreviewWidget*
///
char* q_printpreviewwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPrintPreviewWidget*
/// @param geometry const char*
///
bool q_printpreviewwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QWidget*
///
bool q_printpreviewwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QPrintPreviewWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_printpreviewwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPrintPreviewWidget*
/// @param state flag of enum Qt__WindowState
///
void q_printpreviewwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPrintPreviewWidget*
/// @param state flag of enum Qt__WindowState
///
void q_printpreviewwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QPrintPreviewWidget*
///
QSizePolicy* q_printpreviewwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPrintPreviewWidget*
/// @param sizePolicy QSizePolicy*
///
void q_printpreviewwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPrintPreviewWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_printpreviewwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QPrintPreviewWidget*
///
QRegion* q_printpreviewwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPrintPreviewWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_printpreviewwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPrintPreviewWidget*
/// @param margins QMargins*
///
void q_printpreviewwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QPrintPreviewWidget*
///
QMargins* q_printpreviewwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QPrintPreviewWidget*
///
QRect* q_printpreviewwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QPrintPreviewWidget*
///
QLayout* q_printpreviewwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPrintPreviewWidget*
/// @param layout QLayout*
///
void q_printpreviewwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPrintPreviewWidget*
/// @param parent QWidget*
///
void q_printpreviewwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPrintPreviewWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_printpreviewwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPrintPreviewWidget*
/// @param dx int
/// @param dy int
///
void q_printpreviewwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPrintPreviewWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_printpreviewwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPrintPreviewWidget*
/// @param on bool
///
void q_printpreviewwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintPreviewWidget*
/// @param action QAction*
///
void q_printpreviewwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPrintPreviewWidget*
/// @param actions libqt_list of QAction*
///
void q_printpreviewwidget_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPrintPreviewWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_printpreviewwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPrintPreviewWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_printpreviewwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPrintPreviewWidget*
/// @param action QAction*
///
void q_printpreviewwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QPrintPreviewWidget*
///
/// @return libqt_list of QAction*
///
libqt_list q_printpreviewwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintPreviewWidget*
/// @param text const char*
///
QAction* q_printpreviewwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintPreviewWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_printpreviewwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintPreviewWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_printpreviewwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintPreviewWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_printpreviewwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QPrintPreviewWidget*
///
QWidget* q_printpreviewwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPrintPreviewWidget*
/// @param type flag of enum Qt__WindowType
///
void q_printpreviewwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QPrintPreviewWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_printpreviewwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__WindowType
///
void q_printpreviewwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPrintPreviewWidget*
/// @param type flag of enum Qt__WindowType
///
void q_printpreviewwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QPrintPreviewWidget*
///
/// @return enum Qt__WindowType
///
int32_t q_printpreviewwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_printpreviewwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintPreviewWidget*
/// @param x int
/// @param y int
///
QWidget* q_printpreviewwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintPreviewWidget*
/// @param p QPoint*
///
QWidget* q_printpreviewwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintPreviewWidget*
/// @param p QPointF*
///
QWidget* q_printpreviewwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void q_printpreviewwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_printpreviewwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QPrintPreviewWidget*
/// @param child QWidget*
///
bool q_printpreviewwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPrintPreviewWidget*
/// @param enabled bool
///
void q_printpreviewwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QPrintPreviewWidget*
///
QBackingStore* q_printpreviewwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QPrintPreviewWidget*
///
QWindow* q_printpreviewwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QPrintPreviewWidget*
///
QScreen* q_printpreviewwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPrintPreviewWidget*
/// @param screen QScreen*
///
void q_printpreviewwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_printpreviewwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPrintPreviewWidget*
/// @param title const char*
///
void q_printpreviewwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, const char* title)
///
void q_printpreviewwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPrintPreviewWidget*
/// @param icon QIcon*
///
void q_printpreviewwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QIcon* icon)
///
void q_printpreviewwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPrintPreviewWidget*
/// @param iconText const char*
///
void q_printpreviewwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, const char* iconText)
///
void q_printpreviewwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPrintPreviewWidget*
/// @param pos QPoint*
///
void q_printpreviewwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QPoint* pos)
///
void q_printpreviewwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QPrintPreviewWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_printpreviewwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPrintPreviewWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_printpreviewwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_printpreviewwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_printpreviewwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_printpreviewwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_printpreviewwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_printpreviewwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_printpreviewwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPrintPreviewWidget*
/// @param rectangle QRect*
///
QPixmap* q_printpreviewwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPrintPreviewWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_printpreviewwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPrintPreviewWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_printpreviewwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPrintPreviewWidget*
/// @param id int
/// @param enable bool
///
void q_printpreviewwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPrintPreviewWidget*
/// @param id int
/// @param enable bool
///
void q_printpreviewwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_printpreviewwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_printpreviewwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_printpreviewwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_printpreviewwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPrintPreviewWidget*
///
const char* q_printpreviewwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPrintPreviewWidget*
/// @param name char*
///
void q_printpreviewwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPrintPreviewWidget*
/// @param b bool
///
bool q_printpreviewwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPrintPreviewWidget*
///
QThread* q_printpreviewwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPrintPreviewWidget*
/// @param thread QThread*
///
bool q_printpreviewwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintPreviewWidget*
/// @param interval int
///
int32_t q_printpreviewwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintPreviewWidget*
/// @param time int64_t of nanoseconds
///
int32_t q_printpreviewwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPrintPreviewWidget*
/// @param id int
///
void q_printpreviewwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPrintPreviewWidget*
/// @param id enum Qt__TimerId
///
void q_printpreviewwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPrintPreviewWidget*
///
/// @return libqt_list of QObject*
///
libqt_list q_printpreviewwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPrintPreviewWidget*
/// @param filterObj QObject*
///
void q_printpreviewwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPrintPreviewWidget*
/// @param obj QObject*
///
void q_printpreviewwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_printpreviewwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPrintPreviewWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_printpreviewwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_printpreviewwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_printpreviewwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPrintPreviewWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_printpreviewwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPrintPreviewWidget*
/// @param name const char*
///
QVariant* q_printpreviewwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPrintPreviewWidget*
///
const char** q_printpreviewwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPrintPreviewWidget*
///
QBindingStorage* q_printpreviewwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPrintPreviewWidget*
///
const QBindingStorage* q_printpreviewwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self)
///
void q_printpreviewwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPrintPreviewWidget*
///
QObject* q_printpreviewwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPrintPreviewWidget*
/// @param classname const char*
///
bool q_printpreviewwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPrintPreviewWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_printpreviewwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintPreviewWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_printpreviewwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintPreviewWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_printpreviewwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_printpreviewwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPrintPreviewWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_printpreviewwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintPreviewWidget*
/// @param param1 QObject*
///
void q_printpreviewwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QObject* param1)
///
void q_printpreviewwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPrintPreviewWidget*
///
double q_printpreviewwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPrintPreviewWidget*
///
double q_printpreviewwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_printpreviewwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_printpreviewwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func()
///
void q_printpreviewwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QSize* func()
///
void q_printpreviewwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QSize* q_printpreviewwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QSize* func()
///
void q_printpreviewwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 int
///
int32_t q_printpreviewwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 int
///
int32_t q_printpreviewwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func(QPrintPreviewWidget* self, int param1)
///
void q_printpreviewwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func()
///
void q_printpreviewwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QPaintEngine* q_printpreviewwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QPaintEngine* q_printpreviewwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QPaintEngine* func()
///
void q_printpreviewwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
bool q_printpreviewwidget_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
bool q_printpreviewwidget_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func(QPrintPreviewWidget* self, QEvent* event)
///
void q_printpreviewwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMouseEvent* event)
///
void q_printpreviewwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMouseEvent* event)
///
void q_printpreviewwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMouseEvent* event)
///
void q_printpreviewwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMouseEvent*
///
void q_printpreviewwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMouseEvent* event)
///
void q_printpreviewwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QWheelEvent*
///
void q_printpreviewwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QWheelEvent*
///
void q_printpreviewwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QWheelEvent* event)
///
void q_printpreviewwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QKeyEvent*
///
void q_printpreviewwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QKeyEvent*
///
void q_printpreviewwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QKeyEvent* event)
///
void q_printpreviewwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QKeyEvent*
///
void q_printpreviewwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QKeyEvent*
///
void q_printpreviewwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QKeyEvent* event)
///
void q_printpreviewwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QFocusEvent*
///
void q_printpreviewwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QFocusEvent*
///
void q_printpreviewwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QFocusEvent* event)
///
void q_printpreviewwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QFocusEvent*
///
void q_printpreviewwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QFocusEvent*
///
void q_printpreviewwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QFocusEvent* event)
///
void q_printpreviewwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEnterEvent*
///
void q_printpreviewwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEnterEvent*
///
void q_printpreviewwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QEnterEvent* event)
///
void q_printpreviewwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
void q_printpreviewwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
void q_printpreviewwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QEvent* event)
///
void q_printpreviewwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QPaintEvent*
///
void q_printpreviewwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QPaintEvent*
///
void q_printpreviewwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QPaintEvent* event)
///
void q_printpreviewwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMoveEvent*
///
void q_printpreviewwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QMoveEvent*
///
void q_printpreviewwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMoveEvent* event)
///
void q_printpreviewwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QResizeEvent*
///
void q_printpreviewwidget_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QResizeEvent*
///
void q_printpreviewwidget_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QResizeEvent* event)
///
void q_printpreviewwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QCloseEvent*
///
void q_printpreviewwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QCloseEvent*
///
void q_printpreviewwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QCloseEvent* event)
///
void q_printpreviewwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QContextMenuEvent*
///
void q_printpreviewwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QContextMenuEvent*
///
void q_printpreviewwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QContextMenuEvent* event)
///
void q_printpreviewwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QTabletEvent*
///
void q_printpreviewwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QTabletEvent*
///
void q_printpreviewwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QTabletEvent* event)
///
void q_printpreviewwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QActionEvent*
///
void q_printpreviewwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QActionEvent*
///
void q_printpreviewwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QActionEvent* event)
///
void q_printpreviewwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragEnterEvent*
///
void q_printpreviewwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragEnterEvent*
///
void q_printpreviewwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QDragEnterEvent* event)
///
void q_printpreviewwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragMoveEvent*
///
void q_printpreviewwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragMoveEvent*
///
void q_printpreviewwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QDragMoveEvent* event)
///
void q_printpreviewwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragLeaveEvent*
///
void q_printpreviewwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDragLeaveEvent*
///
void q_printpreviewwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QDragLeaveEvent* event)
///
void q_printpreviewwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDropEvent*
///
void q_printpreviewwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QDropEvent*
///
void q_printpreviewwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QDropEvent* event)
///
void q_printpreviewwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QShowEvent*
///
void q_printpreviewwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QShowEvent*
///
void q_printpreviewwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QShowEvent* event)
///
void q_printpreviewwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QHideEvent*
///
void q_printpreviewwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QHideEvent*
///
void q_printpreviewwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QHideEvent* event)
///
void q_printpreviewwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_printpreviewwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_printpreviewwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func(QPrintPreviewWidget* self, const char* eventType, void* message, intptr_t* result)
///
void q_printpreviewwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 QEvent*
///
void q_printpreviewwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 QEvent*
///
void q_printpreviewwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QEvent* param1)
///
void q_printpreviewwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_printpreviewwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_printpreviewwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func(QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_printpreviewwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
///
void q_printpreviewwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param painter QPainter*
///
void q_printpreviewwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QPainter* painter)
///
void q_printpreviewwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param offset QPoint*
///
QPaintDevice* q_printpreviewwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param offset QPoint*
///
QPaintDevice* q_printpreviewwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QPaintDevice* func(QPrintPreviewWidget* self, QPoint* offset)
///
void q_printpreviewwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QPainter* q_printpreviewwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QPainter* q_printpreviewwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QPainter* func()
///
void q_printpreviewwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 QInputMethodEvent*
///
void q_printpreviewwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 QInputMethodEvent*
///
void q_printpreviewwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QInputMethodEvent* param1)
///
void q_printpreviewwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_printpreviewwidget_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_printpreviewwidget_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QVariant* func(QPrintPreviewWidget* self, enum Qt__InputMethodQuery param1)
///
void q_printpreviewwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param next bool
///
bool q_printpreviewwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param next bool
///
bool q_printpreviewwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func(QPrintPreviewWidget* self, bool next)
///
void q_printpreviewwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_printpreviewwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_printpreviewwidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func(QPrintPreviewWidget* self, QObject* watched, QEvent* event)
///
void q_printpreviewwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QTimerEvent*
///
void q_printpreviewwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QTimerEvent*
///
void q_printpreviewwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QTimerEvent* event)
///
void q_printpreviewwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QChildEvent*
///
void q_printpreviewwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QChildEvent*
///
void q_printpreviewwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QChildEvent* event)
///
void q_printpreviewwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
void q_printpreviewwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param event QEvent*
///
void q_printpreviewwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QEvent* event)
///
void q_printpreviewwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
void q_printpreviewwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
void q_printpreviewwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMetaMethod* signal)
///
void q_printpreviewwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
void q_printpreviewwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
void q_printpreviewwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, QMetaMethod* signal)
///
void q_printpreviewwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func()
///
void q_printpreviewwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func()
///
void q_printpreviewwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback void func()
///
void q_printpreviewwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func()
///
void q_printpreviewwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
bool q_printpreviewwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func()
///
void q_printpreviewwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QObject* q_printpreviewwidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
QObject* q_printpreviewwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback QObject* func()
///
void q_printpreviewwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
///
int32_t q_printpreviewwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func()
///
void q_printpreviewwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal const char*
///
int32_t q_printpreviewwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal const char*
///
int32_t q_printpreviewwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback int32_t func(QPrintPreviewWidget* self, const char* signal)
///
void q_printpreviewwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
bool q_printpreviewwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param signal QMetaMethod*
///
bool q_printpreviewwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback bool func(QPrintPreviewWidget* self, QMetaMethod* signal)
///
void q_printpreviewwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_printpreviewwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_printpreviewwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintPreviewWidget*
/// @param callback double func(QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_printpreviewwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPrintPreviewWidget*
/// @param callback void func(QPrintPreviewWidget* self, const char* objectName)
///
void q_printpreviewwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#dtor.QPrintPreviewWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QPrintPreviewWidget*
///
void q_printpreviewwidget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#public-types)

typedef enum {
    QPRINTPREVIEWWIDGET_VIEWMODE_SINGLEPAGEVIEW = 0,
    QPRINTPREVIEWWIDGET_VIEWMODE_FACINGPAGESVIEW = 1,
    QPRINTPREVIEWWIDGET_VIEWMODE_ALLPAGESVIEW = 2
} QPrintPreviewWidget__ViewMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qprintpreviewwidget.html#public-types)

typedef enum {
    QPRINTPREVIEWWIDGET_ZOOMMODE_CUSTOMZOOM = 0,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITTOWIDTH = 1,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITINVIEW = 2
} QPrintPreviewWidget__ZoomMode;

#endif
