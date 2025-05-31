#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTPREVIEWWIDGET_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpoint.h"
#include "libqprinter.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqvariant.h"
#include "../libqwidget.h"

/// https://doc.qt.io/qt-6/qprintpreviewwidget.html

/// q_printpreviewwidget_new constructs a new QPrintPreviewWidget object.
///
/// ``` QWidget* parent ```
QPrintPreviewWidget* q_printpreviewwidget_new(void* parent);

/// q_printpreviewwidget_new2 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer ```
QPrintPreviewWidget* q_printpreviewwidget_new2(void* printer);

/// q_printpreviewwidget_new3 constructs a new QPrintPreviewWidget object.
///
///
QPrintPreviewWidget* q_printpreviewwidget_new3();

/// q_printpreviewwidget_new4 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QPrintPreviewWidget* q_printpreviewwidget_new4(void* printer, void* parent);

/// q_printpreviewwidget_new5 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer, QWidget* parent, int flags ```
QPrintPreviewWidget* q_printpreviewwidget_new5(void* printer, void* parent, int64_t flags);

/// q_printpreviewwidget_new6 constructs a new QPrintPreviewWidget object.
///
/// ``` QWidget* parent, int flags ```
QPrintPreviewWidget* q_printpreviewwidget_new6(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPrintPreviewWidget* self ```
const QMetaObject* q_printpreviewwidget_meta_object(void* self);

/// ``` QPrintPreviewWidget* self, const char* param1 ```
void* q_printpreviewwidget_metacast(void* self, const char* param1);

/// ``` QPrintPreviewWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewwidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, enum QMetaObject__Call, int, void*) ```
void q_printpreviewwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPrintPreviewWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_printpreviewwidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomFactor)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#orientation)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#viewMode)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomMode)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_zoom_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#currentPage)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_current_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#pageCount)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// ``` QPrintPreviewWidget* self, bool visible ```
void q_printpreviewwidget_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// Allows for overriding the related default method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, bool) ```
void q_printpreviewwidget_on_set_visible(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// Base class method implementation
///
/// ``` QPrintPreviewWidget* self, bool visible ```
void q_printpreviewwidget_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#print)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_print(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_zoom_in(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_zoom_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomFactor)
///
/// ``` QPrintPreviewWidget* self, double zoomFactor ```
void q_printpreviewwidget_set_zoom_factor(void* self, double zoomFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setOrientation)
///
/// ``` QPrintPreviewWidget* self, enum QPageLayout__Orientation orientation ```
void q_printpreviewwidget_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setViewMode)
///
/// ``` QPrintPreviewWidget* self, enum QPrintPreviewWidget__ViewMode viewMode ```
void q_printpreviewwidget_set_view_mode(void* self, int64_t viewMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomMode)
///
/// ``` QPrintPreviewWidget* self, enum QPrintPreviewWidget__ZoomMode zoomMode ```
void q_printpreviewwidget_set_zoom_mode(void* self, int64_t zoomMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setCurrentPage)
///
/// ``` QPrintPreviewWidget* self, int pageNumber ```
void q_printpreviewwidget_set_current_page(void* self, int pageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitToWidth)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_fit_to_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitInView)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_fit_in_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setLandscapeOrientation)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_landscape_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setPortraitOrientation)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_portrait_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setSinglePageViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_single_page_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setFacingPagesViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_facing_pages_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setAllPagesViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_all_pages_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#updatePreview)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_preview(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#paintRequested)
///
/// ``` QPrintPreviewWidget* self, QPrinter* printer ```
void q_printpreviewwidget_paint_requested(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#paintRequested)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPrinter*) ```
void q_printpreviewwidget_on_paint_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#previewChanged)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_preview_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#previewChanged)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*) ```
void q_printpreviewwidget_on_preview_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_printpreviewwidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_printpreviewwidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// ``` QPrintPreviewWidget* self, double zoom ```
void q_printpreviewwidget_zoom_in1(void* self, double zoom);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// ``` QPrintPreviewWidget* self, double zoom ```
void q_printpreviewwidget_zoom_out1(void* self, double zoom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPrintPreviewWidget* self ```
QStyle* q_printpreviewwidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPrintPreviewWidget* self, QStyle* style ```
void q_printpreviewwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowModality windowModality ```
void q_printpreviewwidget_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
bool q_printpreviewwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPrintPreviewWidget* self, bool enabled ```
void q_printpreviewwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPrintPreviewWidget* self, bool disabled ```
void q_printpreviewwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPrintPreviewWidget* self, bool windowModified ```
void q_printpreviewwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPrintPreviewWidget* self ```
const QRect* q_printpreviewwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPrintPreviewWidget* self ```
QPoint* q_printpreviewwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewWidget* self, QSize* minimumSize ```
void q_printpreviewwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewWidget* self, int minw, int minh ```
void q_printpreviewwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewWidget* self, QSize* maximumSize ```
void q_printpreviewwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewWidget* self, int maxw, int maxh ```
void q_printpreviewwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPrintPreviewWidget* self, int minw ```
void q_printpreviewwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPrintPreviewWidget* self, int minh ```
void q_printpreviewwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPrintPreviewWidget* self, int maxw ```
void q_printpreviewwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPrintPreviewWidget* self, int maxh ```
void q_printpreviewwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewWidget* self, QSize* sizeIncrement ```
void q_printpreviewwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewWidget* self, QSize* baseSize ```
void q_printpreviewwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewWidget* self, int basew, int baseh ```
void q_printpreviewwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewWidget* self, QSize* fixedSize ```
void q_printpreviewwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPrintPreviewWidget* self, int w ```
void q_printpreviewwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPrintPreviewWidget* self, int h ```
void q_printpreviewwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPrintPreviewWidget* self ```
const QPalette* q_printpreviewwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPrintPreviewWidget* self, QPalette* palette ```
void q_printpreviewwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPrintPreviewWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_printpreviewwidget_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPrintPreviewWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_printpreviewwidget_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPrintPreviewWidget* self ```
const QFont* q_printpreviewwidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPrintPreviewWidget* self, QFont* font ```
void q_printpreviewwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPrintPreviewWidget* self ```
QFontMetrics* q_printpreviewwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPrintPreviewWidget* self ```
QFontInfo* q_printpreviewwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPrintPreviewWidget* self ```
QCursor* q_printpreviewwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPrintPreviewWidget* self, QCursor* cursor ```
void q_printpreviewwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewWidget* self, QBitmap* mask ```
void q_printpreviewwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewWidget* self, QRegion* mask ```
void q_printpreviewwidget_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target ```
void q_printpreviewwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewWidget* self ```
QPixmap* q_printpreviewwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPrintPreviewWidget* self ```
QGraphicsEffect* q_printpreviewwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPrintPreviewWidget* self, QGraphicsEffect* effect ```
void q_printpreviewwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal ```
void q_printpreviewwidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal ```
void q_printpreviewwidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPrintPreviewWidget* self, const char* windowTitle ```
void q_printpreviewwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPrintPreviewWidget* self, const char* styleSheet ```
void q_printpreviewwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon ```
void q_printpreviewwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPrintPreviewWidget* self ```
QIcon* q_printpreviewwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPrintPreviewWidget* self, const char* windowIconText ```
void q_printpreviewwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPrintPreviewWidget* self, const char* windowRole ```
void q_printpreviewwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPrintPreviewWidget* self, const char* filePath ```
void q_printpreviewwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPrintPreviewWidget* self, double level ```
void q_printpreviewwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPrintPreviewWidget* self, const char* toolTip ```
void q_printpreviewwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPrintPreviewWidget* self, int msec ```
void q_printpreviewwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPrintPreviewWidget* self, const char* statusTip ```
void q_printpreviewwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPrintPreviewWidget* self, const char* whatsThis ```
void q_printpreviewwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPrintPreviewWidget* self, const char* name ```
void q_printpreviewwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPrintPreviewWidget* self, const char* description ```
void q_printpreviewwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPrintPreviewWidget* self, enum Qt__LayoutDirection direction ```
void q_printpreviewwidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPrintPreviewWidget* self, QLocale* locale ```
void q_printpreviewwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPrintPreviewWidget* self ```
QLocale* q_printpreviewwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewWidget* self, enum Qt__FocusReason reason ```
void q_printpreviewwidget_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPrintPreviewWidget* self, enum Qt__FocusPolicy policy ```
void q_printpreviewwidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_printpreviewwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPrintPreviewWidget* self, QWidget* focusProxy ```
void q_printpreviewwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPrintPreviewWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_printpreviewwidget_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewWidget* self, QCursor* param1 ```
void q_printpreviewwidget_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewWidget* self, QKeySequence* key ```
int32_t q_printpreviewwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_printpreviewwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_printpreviewwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPrintPreviewWidget* self ```
QGraphicsProxyWidget* q_printpreviewwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, QRect* param1 ```
void q_printpreviewwidget_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, QRegion* param1 ```
void q_printpreviewwidget_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, QRect* param1 ```
void q_printpreviewwidget_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, QRegion* param1 ```
void q_printpreviewwidget_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPrintPreviewWidget* self, bool hidden ```
void q_printpreviewwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
void q_printpreviewwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewWidget* self, int x, int y ```
void q_printpreviewwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
void q_printpreviewwidget_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewWidget* self, QSize* param1 ```
void q_printpreviewwidget_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewWidget* self, QRect* geometry ```
void q_printpreviewwidget_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPrintPreviewWidget* self ```
char* q_printpreviewwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPrintPreviewWidget* self, const char* geometry ```
bool q_printpreviewwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
bool q_printpreviewwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPrintPreviewWidget* self, int state ```
void q_printpreviewwidget_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPrintPreviewWidget* self, int state ```
void q_printpreviewwidget_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPrintPreviewWidget* self ```
QSizePolicy* q_printpreviewwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewWidget* self, QSizePolicy* sizePolicy ```
void q_printpreviewwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_printpreviewwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewWidget* self, int left, int top, int right, int bottom ```
void q_printpreviewwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewWidget* self, QMargins* margins ```
void q_printpreviewwidget_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPrintPreviewWidget* self ```
QMargins* q_printpreviewwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPrintPreviewWidget* self ```
QLayout* q_printpreviewwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPrintPreviewWidget* self, QLayout* layout ```
void q_printpreviewwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewWidget* self, QWidget* parent ```
void q_printpreviewwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewWidget* self, QWidget* parent, int f ```
void q_printpreviewwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewWidget* self, int dx, int dy ```
void q_printpreviewwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewWidget* self, int dx, int dy, QRect* param3 ```
void q_printpreviewwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPrintPreviewWidget* self, bool on ```
void q_printpreviewwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QAction* action ```
void q_printpreviewwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPrintPreviewWidget* self, libqt_list /* of QAction* */ actions ```
void q_printpreviewwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QPrintPreviewWidget* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_printpreviewwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QPrintPreviewWidget* self, QAction* before, QAction* action ```
void q_printpreviewwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPrintPreviewWidget* self, QAction* action ```
void q_printpreviewwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPrintPreviewWidget* self ```
libqt_list /* of QAction* */ q_printpreviewwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, const char* text ```
QAction* q_printpreviewwidget_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon, const char* text ```
QAction* q_printpreviewwidget_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewwidget_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewwidget_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPrintPreviewWidget* self, int typeVal ```
void q_printpreviewwidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowType param1 ```
void q_printpreviewwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPrintPreviewWidget* self, int typeVal ```
void q_printpreviewwidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_printpreviewwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewWidget* self, int x, int y ```
QWidget* q_printpreviewwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewWidget* self, QPoint* p ```
QWidget* q_printpreviewwidget_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1 ```
void q_printpreviewwidget_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_printpreviewwidget_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPrintPreviewWidget* self, QWidget* child ```
bool q_printpreviewwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPrintPreviewWidget* self, bool enabled ```
void q_printpreviewwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPrintPreviewWidget* self ```
QBackingStore* q_printpreviewwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPrintPreviewWidget* self ```
QWindow* q_printpreviewwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPrintPreviewWidget* self ```
QScreen* q_printpreviewwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPrintPreviewWidget* self, QScreen* screen ```
void q_printpreviewwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_printpreviewwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPrintPreviewWidget* self, const char* title ```
void q_printpreviewwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon ```
void q_printpreviewwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_printpreviewwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPrintPreviewWidget* self, const char* iconText ```
void q_printpreviewwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPrintPreviewWidget* self, QPoint* pos ```
void q_printpreviewwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_printpreviewwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPrintPreviewWidget* self, int hints ```
void q_printpreviewwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_printpreviewwidget_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_printpreviewwidget_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewWidget* self, QRect* rectangle ```
QPixmap* q_printpreviewwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_printpreviewwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_printpreviewwidget_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewWidget* self, int id, bool enable ```
void q_printpreviewwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewWidget* self, int id, bool enable ```
void q_printpreviewwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowType param1, bool on ```
void q_printpreviewwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_printpreviewwidget_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_printpreviewwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_printpreviewwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPrintPreviewWidget* self, char* name ```
void q_printpreviewwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPrintPreviewWidget* self, bool b ```
bool q_printpreviewwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPrintPreviewWidget* self ```
QThread* q_printpreviewwidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPrintPreviewWidget* self, QThread* thread ```
void q_printpreviewwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewWidget* self, int interval ```
int32_t q_printpreviewwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPrintPreviewWidget* self ```
const libqt_list /* of QObject* */ q_printpreviewwidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPrintPreviewWidget* self, QObject* filterObj ```
void q_printpreviewwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPrintPreviewWidget* self, QObject* obj ```
void q_printpreviewwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_printpreviewwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_printpreviewwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_printpreviewwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_printpreviewwidget_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPrintPreviewWidget* self, const char* name, QVariant* value ```
bool q_printpreviewwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPrintPreviewWidget* self, const char* name ```
QVariant* q_printpreviewwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPrintPreviewWidget* self ```
const char** q_printpreviewwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPrintPreviewWidget* self ```
QBindingStorage* q_printpreviewwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPrintPreviewWidget* self ```
const QBindingStorage* q_printpreviewwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QObject*) ```
void q_printpreviewwidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPrintPreviewWidget* self, const char* classname ```
bool q_printpreviewwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_printpreviewwidget_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self, QObject* param1 ```
void q_printpreviewwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QObject*, QObject*) ```
void q_printpreviewwidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printpreviewwidget_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)() ```
void q_printpreviewwidget_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QSize* (*slot)() ```
void q_printpreviewwidget_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QSize* (*slot)() ```
void q_printpreviewwidget_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int param1 ```
int32_t q_printpreviewwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int param1 ```
int32_t q_printpreviewwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, int) ```
void q_printpreviewwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPaintEngine* q_printpreviewwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPaintEngine* q_printpreviewwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEngine* (*slot)() ```
void q_printpreviewwidget_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
bool q_printpreviewwidget_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
bool q_printpreviewwidget_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QWheelEvent* event ```
void q_printpreviewwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QWheelEvent* event ```
void q_printpreviewwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QWheelEvent*) ```
void q_printpreviewwidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QKeyEvent*) ```
void q_printpreviewwidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QKeyEvent*) ```
void q_printpreviewwidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QFocusEvent*) ```
void q_printpreviewwidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QFocusEvent*) ```
void q_printpreviewwidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEnterEvent* event ```
void q_printpreviewwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEnterEvent* event ```
void q_printpreviewwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEnterEvent*) ```
void q_printpreviewwidget_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEvent* event ```
void q_printpreviewwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEvent* event ```
void q_printpreviewwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPaintEvent*) ```
void q_printpreviewwidget_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMoveEvent* event ```
void q_printpreviewwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMoveEvent* event ```
void q_printpreviewwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMoveEvent*) ```
void q_printpreviewwidget_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QResizeEvent* event ```
void q_printpreviewwidget_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QResizeEvent* event ```
void q_printpreviewwidget_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QResizeEvent*) ```
void q_printpreviewwidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QCloseEvent* event ```
void q_printpreviewwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QCloseEvent* event ```
void q_printpreviewwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QCloseEvent*) ```
void q_printpreviewwidget_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QContextMenuEvent* event ```
void q_printpreviewwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QContextMenuEvent* event ```
void q_printpreviewwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QContextMenuEvent*) ```
void q_printpreviewwidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTabletEvent* event ```
void q_printpreviewwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTabletEvent* event ```
void q_printpreviewwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QTabletEvent*) ```
void q_printpreviewwidget_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QActionEvent* event ```
void q_printpreviewwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QActionEvent* event ```
void q_printpreviewwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QActionEvent*) ```
void q_printpreviewwidget_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragEnterEvent* event ```
void q_printpreviewwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragEnterEvent* event ```
void q_printpreviewwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragEnterEvent*) ```
void q_printpreviewwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragMoveEvent* event ```
void q_printpreviewwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragMoveEvent* event ```
void q_printpreviewwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragMoveEvent*) ```
void q_printpreviewwidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragLeaveEvent* event ```
void q_printpreviewwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragLeaveEvent* event ```
void q_printpreviewwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragLeaveEvent*) ```
void q_printpreviewwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDropEvent* event ```
void q_printpreviewwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDropEvent* event ```
void q_printpreviewwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDropEvent*) ```
void q_printpreviewwidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QShowEvent* event ```
void q_printpreviewwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QShowEvent* event ```
void q_printpreviewwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QShowEvent*) ```
void q_printpreviewwidget_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QHideEvent* event ```
void q_printpreviewwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QHideEvent* event ```
void q_printpreviewwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QHideEvent*) ```
void q_printpreviewwidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, const char*, void*, intptr_t*) ```
void q_printpreviewwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* param1 ```
void q_printpreviewwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* param1 ```
void q_printpreviewwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewwidget_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewwidget_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printpreviewwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPainter*) ```
void q_printpreviewwidget_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPoint* offset ```
QPaintDevice* q_printpreviewwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPoint* offset ```
QPaintDevice* q_printpreviewwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* (*slot)(QPrintPreviewWidget*, QPoint*) ```
void q_printpreviewwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPainter* q_printpreviewwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPainter* q_printpreviewwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* (*slot)() ```
void q_printpreviewwidget_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QInputMethodEvent* param1 ```
void q_printpreviewwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QInputMethodEvent* param1 ```
void q_printpreviewwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QInputMethodEvent*) ```
void q_printpreviewwidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewwidget_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewwidget_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QVariant* (*slot)(QPrintPreviewWidget*, enum Qt__InputMethodQuery) ```
void q_printpreviewwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool next ```
bool q_printpreviewwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool next ```
bool q_printpreviewwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, bool) ```
void q_printpreviewwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* watched, QEvent* event ```
bool q_printpreviewwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* watched, QEvent* event ```
bool q_printpreviewwidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QObject*, QEvent*) ```
void q_printpreviewwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTimerEvent* event ```
void q_printpreviewwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTimerEvent* event ```
void q_printpreviewwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QTimerEvent*) ```
void q_printpreviewwidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QChildEvent* event ```
void q_printpreviewwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QChildEvent* event ```
void q_printpreviewwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QChildEvent*) ```
void q_printpreviewwidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* (*slot)() ```
void q_printpreviewwidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)() ```
void q_printpreviewwidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* signal ```
int32_t q_printpreviewwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* signal ```
int32_t q_printpreviewwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, const char*) ```
void q_printpreviewwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
bool q_printpreviewwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
bool q_printpreviewwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QObject*, const char*) ```
void q_printpreviewwidget_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#dtor.QPrintPreviewWidget)
///
/// Delete this object from C++ memory.
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qprintpreviewwidget.html#types

typedef enum {
    QPRINTPREVIEWWIDGET_VIEWMODE_SINGLEPAGEVIEW = 0,
    QPRINTPREVIEWWIDGET_VIEWMODE_FACINGPAGESVIEW = 1,
    QPRINTPREVIEWWIDGET_VIEWMODE_ALLPAGESVIEW = 2
} QPrintPreviewWidget__ViewMode;

typedef enum {
    QPRINTPREVIEWWIDGET_ZOOMMODE_CUSTOMZOOM = 0,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITTOWIDTH = 1,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITINVIEW = 2
} QPrintPreviewWidget__ZoomMode;

#endif
