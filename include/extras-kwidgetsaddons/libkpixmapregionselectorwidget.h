#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPIXMAPREGIONSELECTORWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPIXMAPREGIONSELECTORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html)

/// k_pixmapregionselectorwidget_new constructs a new KPixmapRegionSelectorWidget object.
///
/// @param parent QWidget*
///
KPixmapRegionSelectorWidget* k_pixmapregionselectorwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html)

/// k_pixmapregionselectorwidget_new2 constructs a new KPixmapRegionSelectorWidget object.
///
KPixmapRegionSelectorWidget* k_pixmapregionselectorwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPixmapRegionSelectorWidget*
///
const QMetaObject* k_pixmapregionselectorwidget_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback const QMetaObject* func()
///
void k_pixmapregionselectorwidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPixmapRegionSelectorWidget*
///
const QMetaObject* k_pixmapregionselectorwidget_qbase_meta_object(void* self);

/// @param self KPixmapRegionSelectorWidget*
/// @param param1 const char*
///
void* k_pixmapregionselectorwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void* func(KPixmapRegionSelectorWidget* self, const char* param1)
///
void k_pixmapregionselectorwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 const char*
///
void* k_pixmapregionselectorwidget_qbase_metacast(void* self, const char* param1);

/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pixmapregionselectorwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func(KPixmapRegionSelectorWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_pixmapregionselectorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pixmapregionselectorwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_pixmapregionselectorwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#setPixmap)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param pixmap QPixmap*
///
void k_pixmapregionselectorwidget_set_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#pixmap)
///
/// @param self KPixmapRegionSelectorWidget*
///
QPixmap* k_pixmapregionselectorwidget_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#setSelectedRegion)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param rect QRect*
///
void k_pixmapregionselectorwidget_set_selected_region(void* self, void* rect);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#selectedRegion)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_selected_region(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#unzoomedSelectedRegion)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_unzoomed_selected_region(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#resetSelection)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_reset_selection(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#selectedImage)
///
/// @param self KPixmapRegionSelectorWidget*
///
QImage* k_pixmapregionselectorwidget_selected_image(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#setSelectionAspectRatio)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param width int
/// @param height int
///
void k_pixmapregionselectorwidget_set_selection_aspect_ratio(void* self, int width, int height);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#setFreeSelectionAspectRatio)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_set_free_selection_aspect_ratio(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#setMaximumWidgetSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param width int
/// @param height int
///
void k_pixmapregionselectorwidget_set_maximum_widget_size(void* self, int width, int height);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#rotate)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param direction enum KPixmapRegionSelectorWidget__RotateDirection
///
void k_pixmapregionselectorwidget_rotate(void* self, int32_t direction);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#rotateClockwise)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_rotate_clockwise(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#rotateCounterclockwise)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_rotate_counterclockwise(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#pixmapRotated)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_pixmap_rotated(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#pixmapRotated)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self)
///
void k_pixmapregionselectorwidget_on_pixmap_rotated(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#createPopupMenu)
///
/// @param self KPixmapRegionSelectorWidget*
///
QMenu* k_pixmapregionselectorwidget_create_popup_menu(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#createPopupMenu)
///
/// Allows for overriding the related default method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QMenu* func()
///
void k_pixmapregionselectorwidget_on_create_popup_menu(void* self, QMenu* (*callback)());

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#createPopupMenu)
///
/// Base class method implementation
///
/// @param self KPixmapRegionSelectorWidget*
///
QMenu* k_pixmapregionselectorwidget_qbase_create_popup_menu(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#eventFilter)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_pixmapregionselectorwidget_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev)
///
void k_pixmapregionselectorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KPixmapRegionSelectorWidget*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_pixmapregionselectorwidget_qbase_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_pixmapregionselectorwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_pixmapregionselectorwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KPixmapRegionSelectorWidget*
///
uintptr_t k_pixmapregionselectorwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KPixmapRegionSelectorWidget*
///
uintptr_t k_pixmapregionselectorwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KPixmapRegionSelectorWidget*
///
uintptr_t k_pixmapregionselectorwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KPixmapRegionSelectorWidget*
///
QStyle* k_pixmapregionselectorwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param style QStyle*
///
void k_pixmapregionselectorwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_pixmapregionselectorwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_pixmapregionselectorwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
///
bool k_pixmapregionselectorwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param enabled bool
///
void k_pixmapregionselectorwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param disabled bool
///
void k_pixmapregionselectorwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param windowModified bool
///
void k_pixmapregionselectorwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KPixmapRegionSelectorWidget*
///
const QRect* k_pixmapregionselectorwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KPixmapRegionSelectorWidget*
///
QPoint* k_pixmapregionselectorwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRegion* k_pixmapregionselectorwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param minimumSize QSize*
///
void k_pixmapregionselectorwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param minw int
/// @param minh int
///
void k_pixmapregionselectorwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param maximumSize QSize*
///
void k_pixmapregionselectorwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param maxw int
/// @param maxh int
///
void k_pixmapregionselectorwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param minw int
///
void k_pixmapregionselectorwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param minh int
///
void k_pixmapregionselectorwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param maxw int
///
void k_pixmapregionselectorwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param maxh int
///
void k_pixmapregionselectorwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param sizeIncrement QSize*
///
void k_pixmapregionselectorwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param baseSize QSize*
///
void k_pixmapregionselectorwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param basew int
/// @param baseh int
///
void k_pixmapregionselectorwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param fixedSize QSize*
///
void k_pixmapregionselectorwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param w int
///
void k_pixmapregionselectorwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param h int
///
void k_pixmapregionselectorwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pixmapregionselectorwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pixmapregionselectorwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KPixmapRegionSelectorWidget*
///
const QPalette* k_pixmapregionselectorwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param palette QPalette*
///
void k_pixmapregionselectorwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_pixmapregionselectorwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pixmapregionselectorwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_pixmapregionselectorwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pixmapregionselectorwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KPixmapRegionSelectorWidget*
///
const QFont* k_pixmapregionselectorwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param font QFont*
///
void k_pixmapregionselectorwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KPixmapRegionSelectorWidget*
///
QFontMetrics* k_pixmapregionselectorwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KPixmapRegionSelectorWidget*
///
QFontInfo* k_pixmapregionselectorwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KPixmapRegionSelectorWidget*
///
QCursor* k_pixmapregionselectorwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param cursor QCursor*
///
void k_pixmapregionselectorwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param enable bool
///
void k_pixmapregionselectorwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param enable bool
///
void k_pixmapregionselectorwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param mask QBitmap*
///
void k_pixmapregionselectorwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param mask QRegion*
///
void k_pixmapregionselectorwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRegion* k_pixmapregionselectorwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param target QPaintDevice*
///
void k_pixmapregionselectorwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
///
void k_pixmapregionselectorwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPixmapRegionSelectorWidget*
///
QPixmap* k_pixmapregionselectorwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KPixmapRegionSelectorWidget*
///
QGraphicsEffect* k_pixmapregionselectorwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param effect QGraphicsEffect*
///
void k_pixmapregionselectorwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param type enum Qt__GestureType
///
void k_pixmapregionselectorwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param type enum Qt__GestureType
///
void k_pixmapregionselectorwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param windowTitle const char*
///
void k_pixmapregionselectorwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param styleSheet const char*
///
void k_pixmapregionselectorwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param icon QIcon*
///
void k_pixmapregionselectorwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KPixmapRegionSelectorWidget*
///
QIcon* k_pixmapregionselectorwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param windowIconText const char*
///
void k_pixmapregionselectorwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param windowRole const char*
///
void k_pixmapregionselectorwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param filePath const char*
///
void k_pixmapregionselectorwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param level double
///
void k_pixmapregionselectorwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KPixmapRegionSelectorWidget*
///
double k_pixmapregionselectorwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param toolTip const char*
///
void k_pixmapregionselectorwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param msec int
///
void k_pixmapregionselectorwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param statusTip const char*
///
void k_pixmapregionselectorwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param whatsThis const char*
///
void k_pixmapregionselectorwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param name const char*
///
void k_pixmapregionselectorwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param description const char*
///
void k_pixmapregionselectorwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_pixmapregionselectorwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_pixmapregionselectorwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param locale QLocale*
///
void k_pixmapregionselectorwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KPixmapRegionSelectorWidget*
///
QLocale* k_pixmapregionselectorwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param reason enum Qt__FocusReason
///
void k_pixmapregionselectorwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_pixmapregionselectorwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_pixmapregionselectorwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_pixmapregionselectorwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param focusProxy QWidget*
///
void k_pixmapregionselectorwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_pixmapregionselectorwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_pixmapregionselectorwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QCursor*
///
void k_pixmapregionselectorwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param key QKeySequence*
///
int32_t k_pixmapregionselectorwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
///
void k_pixmapregionselectorwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
///
void k_pixmapregionselectorwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
///
void k_pixmapregionselectorwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_pixmapregionselectorwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_pixmapregionselectorwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param enable bool
///
void k_pixmapregionselectorwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KPixmapRegionSelectorWidget*
///
QGraphicsProxyWidget* k_pixmapregionselectorwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QRect*
///
void k_pixmapregionselectorwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QRegion*
///
void k_pixmapregionselectorwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QRect*
///
void k_pixmapregionselectorwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QRegion*
///
void k_pixmapregionselectorwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param hidden bool
///
void k_pixmapregionselectorwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
///
void k_pixmapregionselectorwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param x int
/// @param y int
///
void k_pixmapregionselectorwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QPoint*
///
void k_pixmapregionselectorwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QSize*
///
void k_pixmapregionselectorwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pixmapregionselectorwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param geometry QRect*
///
void k_pixmapregionselectorwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
char* k_pixmapregionselectorwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param geometry const char*
///
bool k_pixmapregionselectorwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QWidget*
///
bool k_pixmapregionselectorwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_pixmapregionselectorwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_pixmapregionselectorwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_pixmapregionselectorwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KPixmapRegionSelectorWidget*
///
QSizePolicy* k_pixmapregionselectorwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param sizePolicy QSizePolicy*
///
void k_pixmapregionselectorwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_pixmapregionselectorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRegion* k_pixmapregionselectorwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_pixmapregionselectorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param margins QMargins*
///
void k_pixmapregionselectorwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KPixmapRegionSelectorWidget*
///
QMargins* k_pixmapregionselectorwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KPixmapRegionSelectorWidget*
///
QRect* k_pixmapregionselectorwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KPixmapRegionSelectorWidget*
///
QLayout* k_pixmapregionselectorwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param layout QLayout*
///
void k_pixmapregionselectorwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param parent QWidget*
///
void k_pixmapregionselectorwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_pixmapregionselectorwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param dx int
/// @param dy int
///
void k_pixmapregionselectorwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_pixmapregionselectorwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param on bool
///
void k_pixmapregionselectorwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param action QAction*
///
void k_pixmapregionselectorwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param actions libqt_list of QAction*
///
void k_pixmapregionselectorwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_pixmapregionselectorwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_pixmapregionselectorwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param action QAction*
///
void k_pixmapregionselectorwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_pixmapregionselectorwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param text const char*
///
QAction* k_pixmapregionselectorwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_pixmapregionselectorwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pixmapregionselectorwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pixmapregionselectorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWidget* k_pixmapregionselectorwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_pixmapregionselectorwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_pixmapregionselectorwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__WindowType
///
void k_pixmapregionselectorwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_pixmapregionselectorwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_pixmapregionselectorwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_pixmapregionselectorwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param x int
/// @param y int
///
QWidget* k_pixmapregionselectorwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param p QPoint*
///
QWidget* k_pixmapregionselectorwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param p QPointF*
///
QWidget* k_pixmapregionselectorwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_pixmapregionselectorwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_pixmapregionselectorwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param child QWidget*
///
bool k_pixmapregionselectorwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param enabled bool
///
void k_pixmapregionselectorwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KPixmapRegionSelectorWidget*
///
QBackingStore* k_pixmapregionselectorwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KPixmapRegionSelectorWidget*
///
QWindow* k_pixmapregionselectorwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KPixmapRegionSelectorWidget*
///
QScreen* k_pixmapregionselectorwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param screen QScreen*
///
void k_pixmapregionselectorwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_pixmapregionselectorwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param title const char*
///
void k_pixmapregionselectorwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, const char* title)
///
void k_pixmapregionselectorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param icon QIcon*
///
void k_pixmapregionselectorwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QIcon* icon)
///
void k_pixmapregionselectorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param iconText const char*
///
void k_pixmapregionselectorwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, const char* iconText)
///
void k_pixmapregionselectorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param pos QPoint*
///
void k_pixmapregionselectorwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QPoint* pos)
///
void k_pixmapregionselectorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_pixmapregionselectorwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_pixmapregionselectorwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_pixmapregionselectorwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pixmapregionselectorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_pixmapregionselectorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_pixmapregionselectorwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pixmapregionselectorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_pixmapregionselectorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param rectangle QRect*
///
QPixmap* k_pixmapregionselectorwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_pixmapregionselectorwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_pixmapregionselectorwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
/// @param enable bool
///
void k_pixmapregionselectorwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
/// @param enable bool
///
void k_pixmapregionselectorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_pixmapregionselectorwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_pixmapregionselectorwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_pixmapregionselectorwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_pixmapregionselectorwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char* k_pixmapregionselectorwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param name char*
///
void k_pixmapregionselectorwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param b bool
///
bool k_pixmapregionselectorwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPixmapRegionSelectorWidget*
///
QThread* k_pixmapregionselectorwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param thread QThread*
///
bool k_pixmapregionselectorwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param interval int
///
int32_t k_pixmapregionselectorwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_pixmapregionselectorwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id int
///
void k_pixmapregionselectorwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param id enum Qt__TimerId
///
void k_pixmapregionselectorwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPixmapRegionSelectorWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_pixmapregionselectorwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param filterObj QObject*
///
void k_pixmapregionselectorwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param obj QObject*
///
void k_pixmapregionselectorwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_pixmapregionselectorwidget_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_pixmapregionselectorwidget_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_pixmapregionselectorwidget_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pixmapregionselectorwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_pixmapregionselectorwidget_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param receiver QObject*
///
bool k_pixmapregionselectorwidget_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_pixmapregionselectorwidget_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_pixmapregionselectorwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param name const char*
///
QVariant* k_pixmapregionselectorwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPixmapRegionSelectorWidget*
///
const char** k_pixmapregionselectorwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPixmapRegionSelectorWidget*
///
QBindingStorage* k_pixmapregionselectorwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPixmapRegionSelectorWidget*
///
const QBindingStorage* k_pixmapregionselectorwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self)
///
void k_pixmapregionselectorwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPixmapRegionSelectorWidget*
///
QObject* k_pixmapregionselectorwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param classname const char*
///
bool k_pixmapregionselectorwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_pixmapregionselectorwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_pixmapregionselectorwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_pixmapregionselectorwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_pixmapregionselectorwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_pixmapregionselectorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal const char*
///
bool k_pixmapregionselectorwidget_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_pixmapregionselectorwidget_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pixmapregionselectorwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pixmapregionselectorwidget_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QObject*
///
void k_pixmapregionselectorwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QObject* param1)
///
void k_pixmapregionselectorwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KPixmapRegionSelectorWidget*
///
double k_pixmapregionselectorwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KPixmapRegionSelectorWidget*
///
double k_pixmapregionselectorwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_pixmapregionselectorwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_pixmapregionselectorwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func()
///
void k_pixmapregionselectorwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param visible bool
///
void k_pixmapregionselectorwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param visible bool
///
void k_pixmapregionselectorwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, bool visible)
///
void k_pixmapregionselectorwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QSize* func()
///
void k_pixmapregionselectorwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QSize* k_pixmapregionselectorwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QSize* func()
///
void k_pixmapregionselectorwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 int
///
int32_t k_pixmapregionselectorwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 int
///
int32_t k_pixmapregionselectorwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func(KPixmapRegionSelectorWidget* self, int param1)
///
void k_pixmapregionselectorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func()
///
void k_pixmapregionselectorwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QPaintEngine* k_pixmapregionselectorwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QPaintEngine* k_pixmapregionselectorwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QPaintEngine* func()
///
void k_pixmapregionselectorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
bool k_pixmapregionselectorwidget_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
bool k_pixmapregionselectorwidget_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func(KPixmapRegionSelectorWidget* self, QEvent* event)
///
void k_pixmapregionselectorwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMouseEvent* event)
///
void k_pixmapregionselectorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMouseEvent* event)
///
void k_pixmapregionselectorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMouseEvent* event)
///
void k_pixmapregionselectorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMouseEvent*
///
void k_pixmapregionselectorwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMouseEvent* event)
///
void k_pixmapregionselectorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QWheelEvent*
///
void k_pixmapregionselectorwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QWheelEvent*
///
void k_pixmapregionselectorwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QWheelEvent* event)
///
void k_pixmapregionselectorwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QKeyEvent*
///
void k_pixmapregionselectorwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QKeyEvent*
///
void k_pixmapregionselectorwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QKeyEvent* event)
///
void k_pixmapregionselectorwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QKeyEvent*
///
void k_pixmapregionselectorwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QKeyEvent*
///
void k_pixmapregionselectorwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QKeyEvent* event)
///
void k_pixmapregionselectorwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QFocusEvent*
///
void k_pixmapregionselectorwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QFocusEvent*
///
void k_pixmapregionselectorwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QFocusEvent* event)
///
void k_pixmapregionselectorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QFocusEvent*
///
void k_pixmapregionselectorwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QFocusEvent*
///
void k_pixmapregionselectorwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QFocusEvent* event)
///
void k_pixmapregionselectorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEnterEvent*
///
void k_pixmapregionselectorwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEnterEvent*
///
void k_pixmapregionselectorwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QEnterEvent* event)
///
void k_pixmapregionselectorwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
void k_pixmapregionselectorwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
void k_pixmapregionselectorwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QEvent* event)
///
void k_pixmapregionselectorwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QPaintEvent*
///
void k_pixmapregionselectorwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QPaintEvent*
///
void k_pixmapregionselectorwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QPaintEvent* event)
///
void k_pixmapregionselectorwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMoveEvent*
///
void k_pixmapregionselectorwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QMoveEvent*
///
void k_pixmapregionselectorwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMoveEvent* event)
///
void k_pixmapregionselectorwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QResizeEvent*
///
void k_pixmapregionselectorwidget_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QResizeEvent*
///
void k_pixmapregionselectorwidget_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QResizeEvent* event)
///
void k_pixmapregionselectorwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QCloseEvent*
///
void k_pixmapregionselectorwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QCloseEvent*
///
void k_pixmapregionselectorwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QCloseEvent* event)
///
void k_pixmapregionselectorwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QContextMenuEvent*
///
void k_pixmapregionselectorwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QContextMenuEvent*
///
void k_pixmapregionselectorwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event)
///
void k_pixmapregionselectorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QTabletEvent*
///
void k_pixmapregionselectorwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QTabletEvent*
///
void k_pixmapregionselectorwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QTabletEvent* event)
///
void k_pixmapregionselectorwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QActionEvent*
///
void k_pixmapregionselectorwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QActionEvent*
///
void k_pixmapregionselectorwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QActionEvent* event)
///
void k_pixmapregionselectorwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragEnterEvent*
///
void k_pixmapregionselectorwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragEnterEvent*
///
void k_pixmapregionselectorwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event)
///
void k_pixmapregionselectorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragMoveEvent*
///
void k_pixmapregionselectorwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragMoveEvent*
///
void k_pixmapregionselectorwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event)
///
void k_pixmapregionselectorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragLeaveEvent*
///
void k_pixmapregionselectorwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDragLeaveEvent*
///
void k_pixmapregionselectorwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event)
///
void k_pixmapregionselectorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDropEvent*
///
void k_pixmapregionselectorwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QDropEvent*
///
void k_pixmapregionselectorwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QDropEvent* event)
///
void k_pixmapregionselectorwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QShowEvent*
///
void k_pixmapregionselectorwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QShowEvent*
///
void k_pixmapregionselectorwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QShowEvent* event)
///
void k_pixmapregionselectorwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QHideEvent*
///
void k_pixmapregionselectorwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QHideEvent*
///
void k_pixmapregionselectorwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QHideEvent* event)
///
void k_pixmapregionselectorwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pixmapregionselectorwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pixmapregionselectorwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func(KPixmapRegionSelectorWidget* self, const char* eventType, void* message, intptr_t* result)
///
void k_pixmapregionselectorwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QEvent*
///
void k_pixmapregionselectorwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QEvent*
///
void k_pixmapregionselectorwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QEvent* param1)
///
void k_pixmapregionselectorwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pixmapregionselectorwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pixmapregionselectorwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func(KPixmapRegionSelectorWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_pixmapregionselectorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
///
void k_pixmapregionselectorwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param painter QPainter*
///
void k_pixmapregionselectorwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QPainter* painter)
///
void k_pixmapregionselectorwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_pixmapregionselectorwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_pixmapregionselectorwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QPaintDevice* func(KPixmapRegionSelectorWidget* self, QPoint* offset)
///
void k_pixmapregionselectorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QPainter* k_pixmapregionselectorwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QPainter* k_pixmapregionselectorwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QPainter* func()
///
void k_pixmapregionselectorwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QInputMethodEvent*
///
void k_pixmapregionselectorwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 QInputMethodEvent*
///
void k_pixmapregionselectorwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1)
///
void k_pixmapregionselectorwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pixmapregionselectorwidget_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pixmapregionselectorwidget_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QVariant* func(KPixmapRegionSelectorWidget* self, enum Qt__InputMethodQuery param1)
///
void k_pixmapregionselectorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param next bool
///
bool k_pixmapregionselectorwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param next bool
///
bool k_pixmapregionselectorwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func(KPixmapRegionSelectorWidget* self, bool next)
///
void k_pixmapregionselectorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QTimerEvent*
///
void k_pixmapregionselectorwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QTimerEvent*
///
void k_pixmapregionselectorwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QTimerEvent* event)
///
void k_pixmapregionselectorwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QChildEvent*
///
void k_pixmapregionselectorwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QChildEvent*
///
void k_pixmapregionselectorwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QChildEvent* event)
///
void k_pixmapregionselectorwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
void k_pixmapregionselectorwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param event QEvent*
///
void k_pixmapregionselectorwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QEvent* event)
///
void k_pixmapregionselectorwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
void k_pixmapregionselectorwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
void k_pixmapregionselectorwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMetaMethod* signal)
///
void k_pixmapregionselectorwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
void k_pixmapregionselectorwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
void k_pixmapregionselectorwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, QMetaMethod* signal)
///
void k_pixmapregionselectorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func()
///
void k_pixmapregionselectorwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func()
///
void k_pixmapregionselectorwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func()
///
void k_pixmapregionselectorwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func()
///
void k_pixmapregionselectorwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
bool k_pixmapregionselectorwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func()
///
void k_pixmapregionselectorwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QObject* k_pixmapregionselectorwidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
QObject* k_pixmapregionselectorwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback QObject* func()
///
void k_pixmapregionselectorwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
///
int32_t k_pixmapregionselectorwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func()
///
void k_pixmapregionselectorwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal const char*
///
int32_t k_pixmapregionselectorwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal const char*
///
int32_t k_pixmapregionselectorwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback int32_t func(KPixmapRegionSelectorWidget* self, const char* signal)
///
void k_pixmapregionselectorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
bool k_pixmapregionselectorwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param signal QMetaMethod*
///
bool k_pixmapregionselectorwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback bool func(KPixmapRegionSelectorWidget* self, QMetaMethod* signal)
///
void k_pixmapregionselectorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pixmapregionselectorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pixmapregionselectorwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback double func(KPixmapRegionSelectorWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_pixmapregionselectorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPixmapRegionSelectorWidget*
/// @param callback void func(KPixmapRegionSelectorWidget* self, const char* objectName)
///
void k_pixmapregionselectorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#dtor.KPixmapRegionSelectorWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KPixmapRegionSelectorWidget*
///
void k_pixmapregionselectorwidget_delete(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapregionselectorwidget.html#public-types)

typedef enum {
    KPIXMAPREGIONSELECTORWIDGET_ROTATEDIRECTION_ROTATE90 = 0,
    KPIXMAPREGIONSELECTORWIDGET_ROTATEDIRECTION_ROTATE180 = 1,
    KPIXMAPREGIONSELECTORWIDGET_ROTATEDIRECTION_ROTATE270 = 2
} KPixmapRegionSelectorWidget__RotateDirection;

#endif
