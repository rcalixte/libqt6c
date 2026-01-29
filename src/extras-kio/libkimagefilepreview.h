#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKIMAGEFILEPREVIEW_H
#define SRC_EXTRAS_KIO_QT6C_LIBKIMAGEFILEPREVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html)

/// k_imagefilepreview_new constructs a new KImageFilePreview object.
///
/// @param parent QWidget*
///
KImageFilePreview* k_imagefilepreview_new(void* parent);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html)

/// k_imagefilepreview_new2 constructs a new KImageFilePreview object.
///
KImageFilePreview* k_imagefilepreview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KImageFilePreview*
///
const QMetaObject* k_imagefilepreview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback const QMetaObject* func()
///
void k_imagefilepreview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
///
const QMetaObject* k_imagefilepreview_qbase_meta_object(void* self);

/// @param self KImageFilePreview*
/// @param param1 const char*
///
void* k_imagefilepreview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void* func(KImageFilePreview* self, const char* param1)
///
void k_imagefilepreview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param param1 const char*
///
void* k_imagefilepreview_qbase_metacast(void* self, const char* param1);

/// @param self KImageFilePreview*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_imagefilepreview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func(KImageFilePreview* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_imagefilepreview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_imagefilepreview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_imagefilepreview_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#sizeHint)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback QSize* func()
///
void k_imagefilepreview_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_qbase_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// @param self KImageFilePreview*
/// @param url QUrl*
///
void k_imagefilepreview_show_preview(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QUrl* url)
///
void k_imagefilepreview_on_show_preview(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param url QUrl*
///
void k_imagefilepreview_qbase_show_preview(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#clearPreview)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_clear_preview(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#clearPreview)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func()
///
void k_imagefilepreview_on_clear_preview(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#clearPreview)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_qbase_clear_preview(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show_preview2(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func()
///
void k_imagefilepreview_on_show_preview2(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_qbase_show_preview2(void* self);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// @param self KImageFilePreview*
/// @param url QUrl*
/// @param force bool
///
void k_imagefilepreview_show_preview3(void* self, void* url, bool force);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QUrl* url, bool force)
///
void k_imagefilepreview_on_show_preview3(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#showPreview)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param url QUrl*
/// @param force bool
///
void k_imagefilepreview_qbase_show_preview3(void* self, void* url, bool force);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#gotPreview)
///
/// @param self KImageFilePreview*
/// @param param1 KFileItem*
/// @param param2 QPixmap*
///
void k_imagefilepreview_got_preview(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#gotPreview)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, KFileItem* param1, QPixmap* param2)
///
void k_imagefilepreview_on_got_preview(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#gotPreview)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param param1 KFileItem*
/// @param param2 QPixmap*
///
void k_imagefilepreview_qbase_got_preview(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#resizeEvent)
///
/// @param self KImageFilePreview*
/// @param event QResizeEvent*
///
void k_imagefilepreview_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QResizeEvent* event)
///
void k_imagefilepreview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param event QResizeEvent*
///
void k_imagefilepreview_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#createJob)
///
/// @param self KImageFilePreview*
/// @param url QUrl*
/// @param width int
/// @param height int
///
KIO__PreviewJob* k_imagefilepreview_create_job(void* self, void* url, int width, int height);

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#createJob)
///
/// Allows for overriding the related default method
///
/// @param self KImageFilePreview*
/// @param callback KIO__PreviewJob* func(KImageFilePreview* self, QUrl* url, int width, int height)
///
void k_imagefilepreview_on_create_job(void* self, KIO__PreviewJob* (*callback)(void*, void*, int, int));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#createJob)
///
/// Base class method implementation
///
/// @param self KImageFilePreview*
/// @param url QUrl*
/// @param width int
/// @param height int
///
KIO__PreviewJob* k_imagefilepreview_qbase_create_job(void* self, void* url, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_imagefilepreview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_imagefilepreview_tr3(const char* s, const char* c, int n);

/// Inherited from KPreviewWidgetBase
///
/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#supportedMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KImageFilePreview*
///
const char** k_imagefilepreview_supported_mime_types(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KImageFilePreview*
///
uintptr_t k_imagefilepreview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KImageFilePreview*
///
uintptr_t k_imagefilepreview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KImageFilePreview*
///
uintptr_t k_imagefilepreview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KImageFilePreview*
///
QStyle* k_imagefilepreview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KImageFilePreview*
/// @param style QStyle*
///
void k_imagefilepreview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KImageFilePreview*
///
/// @return enum Qt__WindowModality
///
int32_t k_imagefilepreview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KImageFilePreview*
/// @param windowModality enum Qt__WindowModality
///
void k_imagefilepreview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
///
bool k_imagefilepreview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KImageFilePreview*
/// @param enabled bool
///
void k_imagefilepreview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KImageFilePreview*
/// @param disabled bool
///
void k_imagefilepreview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KImageFilePreview*
/// @param windowModified bool
///
void k_imagefilepreview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KImageFilePreview*
///
QRect* k_imagefilepreview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KImageFilePreview*
///
const QRect* k_imagefilepreview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KImageFilePreview*
///
QRect* k_imagefilepreview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KImageFilePreview*
///
QPoint* k_imagefilepreview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KImageFilePreview*
///
QRect* k_imagefilepreview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KImageFilePreview*
///
QRect* k_imagefilepreview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KImageFilePreview*
///
QRegion* k_imagefilepreview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KImageFilePreview*
/// @param minimumSize QSize*
///
void k_imagefilepreview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KImageFilePreview*
/// @param minw int
/// @param minh int
///
void k_imagefilepreview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KImageFilePreview*
/// @param maximumSize QSize*
///
void k_imagefilepreview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KImageFilePreview*
/// @param maxw int
/// @param maxh int
///
void k_imagefilepreview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KImageFilePreview*
/// @param minw int
///
void k_imagefilepreview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KImageFilePreview*
/// @param minh int
///
void k_imagefilepreview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KImageFilePreview*
/// @param maxw int
///
void k_imagefilepreview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KImageFilePreview*
/// @param maxh int
///
void k_imagefilepreview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KImageFilePreview*
/// @param sizeIncrement QSize*
///
void k_imagefilepreview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KImageFilePreview*
/// @param w int
/// @param h int
///
void k_imagefilepreview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KImageFilePreview*
/// @param baseSize QSize*
///
void k_imagefilepreview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KImageFilePreview*
/// @param basew int
/// @param baseh int
///
void k_imagefilepreview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KImageFilePreview*
/// @param fixedSize QSize*
///
void k_imagefilepreview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KImageFilePreview*
/// @param w int
/// @param h int
///
void k_imagefilepreview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KImageFilePreview*
/// @param w int
///
void k_imagefilepreview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KImageFilePreview*
/// @param h int
///
void k_imagefilepreview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KImageFilePreview*
/// @param param1 QPointF*
///
QPointF* k_imagefilepreview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KImageFilePreview*
/// @param param1 QPoint*
///
QPoint* k_imagefilepreview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KImageFilePreview*
/// @param param1 QPointF*
///
QPointF* k_imagefilepreview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KImageFilePreview*
/// @param param1 QPoint*
///
QPoint* k_imagefilepreview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KImageFilePreview*
/// @param param1 QPointF*
///
QPointF* k_imagefilepreview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KImageFilePreview*
/// @param param1 QPoint*
///
QPoint* k_imagefilepreview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KImageFilePreview*
/// @param param1 QPointF*
///
QPointF* k_imagefilepreview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KImageFilePreview*
/// @param param1 QPoint*
///
QPoint* k_imagefilepreview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_imagefilepreview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_imagefilepreview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_imagefilepreview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_imagefilepreview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KImageFilePreview*
///
const QPalette* k_imagefilepreview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KImageFilePreview*
/// @param palette QPalette*
///
void k_imagefilepreview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KImageFilePreview*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_imagefilepreview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KImageFilePreview*
///
/// @return enum QPalette__ColorRole
///
int32_t k_imagefilepreview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KImageFilePreview*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_imagefilepreview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KImageFilePreview*
///
/// @return enum QPalette__ColorRole
///
int32_t k_imagefilepreview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KImageFilePreview*
///
const QFont* k_imagefilepreview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KImageFilePreview*
/// @param font QFont*
///
void k_imagefilepreview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KImageFilePreview*
///
QFontMetrics* k_imagefilepreview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KImageFilePreview*
///
QFontInfo* k_imagefilepreview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KImageFilePreview*
///
QCursor* k_imagefilepreview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KImageFilePreview*
/// @param cursor QCursor*
///
void k_imagefilepreview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KImageFilePreview*
/// @param enable bool
///
void k_imagefilepreview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KImageFilePreview*
/// @param enable bool
///
void k_imagefilepreview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KImageFilePreview*
/// @param mask QBitmap*
///
void k_imagefilepreview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KImageFilePreview*
/// @param mask QRegion*
///
void k_imagefilepreview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KImageFilePreview*
///
QRegion* k_imagefilepreview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param target QPaintDevice*
///
void k_imagefilepreview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
///
void k_imagefilepreview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KImageFilePreview*
///
QPixmap* k_imagefilepreview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KImageFilePreview*
///
QGraphicsEffect* k_imagefilepreview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KImageFilePreview*
/// @param effect QGraphicsEffect*
///
void k_imagefilepreview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KImageFilePreview*
/// @param type enum Qt__GestureType
///
void k_imagefilepreview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KImageFilePreview*
/// @param type enum Qt__GestureType
///
void k_imagefilepreview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KImageFilePreview*
/// @param windowTitle const char*
///
void k_imagefilepreview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KImageFilePreview*
/// @param styleSheet const char*
///
void k_imagefilepreview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KImageFilePreview*
/// @param icon QIcon*
///
void k_imagefilepreview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KImageFilePreview*
///
QIcon* k_imagefilepreview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KImageFilePreview*
/// @param windowIconText const char*
///
void k_imagefilepreview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KImageFilePreview*
/// @param windowRole const char*
///
void k_imagefilepreview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KImageFilePreview*
/// @param filePath const char*
///
void k_imagefilepreview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KImageFilePreview*
/// @param level double
///
void k_imagefilepreview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KImageFilePreview*
///
double k_imagefilepreview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KImageFilePreview*
/// @param toolTip const char*
///
void k_imagefilepreview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KImageFilePreview*
/// @param msec int
///
void k_imagefilepreview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KImageFilePreview*
/// @param statusTip const char*
///
void k_imagefilepreview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KImageFilePreview*
/// @param whatsThis const char*
///
void k_imagefilepreview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KImageFilePreview*
/// @param name const char*
///
void k_imagefilepreview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KImageFilePreview*
/// @param description const char*
///
void k_imagefilepreview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KImageFilePreview*
/// @param direction enum Qt__LayoutDirection
///
void k_imagefilepreview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KImageFilePreview*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_imagefilepreview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KImageFilePreview*
/// @param locale QLocale*
///
void k_imagefilepreview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KImageFilePreview*
///
QLocale* k_imagefilepreview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KImageFilePreview*
/// @param reason enum Qt__FocusReason
///
void k_imagefilepreview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KImageFilePreview*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_imagefilepreview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KImageFilePreview*
/// @param policy enum Qt__FocusPolicy
///
void k_imagefilepreview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_imagefilepreview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KImageFilePreview*
/// @param focusProxy QWidget*
///
void k_imagefilepreview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KImageFilePreview*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_imagefilepreview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KImageFilePreview*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_imagefilepreview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KImageFilePreview*
/// @param param1 QCursor*
///
void k_imagefilepreview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KImageFilePreview*
/// @param key QKeySequence*
///
int32_t k_imagefilepreview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KImageFilePreview*
/// @param id int
///
void k_imagefilepreview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KImageFilePreview*
/// @param id int
///
void k_imagefilepreview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KImageFilePreview*
/// @param id int
///
void k_imagefilepreview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_imagefilepreview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_imagefilepreview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KImageFilePreview*
/// @param enable bool
///
void k_imagefilepreview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KImageFilePreview*
///
QGraphicsProxyWidget* k_imagefilepreview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KImageFilePreview*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_imagefilepreview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KImageFilePreview*
/// @param param1 QRect*
///
void k_imagefilepreview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KImageFilePreview*
/// @param param1 QRegion*
///
void k_imagefilepreview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KImageFilePreview*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_imagefilepreview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KImageFilePreview*
/// @param param1 QRect*
///
void k_imagefilepreview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KImageFilePreview*
/// @param param1 QRegion*
///
void k_imagefilepreview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KImageFilePreview*
/// @param hidden bool
///
void k_imagefilepreview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
///
void k_imagefilepreview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KImageFilePreview*
/// @param x int
/// @param y int
///
void k_imagefilepreview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KImageFilePreview*
/// @param param1 QPoint*
///
void k_imagefilepreview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KImageFilePreview*
/// @param w int
/// @param h int
///
void k_imagefilepreview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KImageFilePreview*
/// @param param1 QSize*
///
void k_imagefilepreview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KImageFilePreview*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_imagefilepreview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KImageFilePreview*
/// @param geometry QRect*
///
void k_imagefilepreview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KImageFilePreview*
///
char* k_imagefilepreview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KImageFilePreview*
/// @param geometry const char*
///
bool k_imagefilepreview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KImageFilePreview*
/// @param param1 QWidget*
///
bool k_imagefilepreview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KImageFilePreview*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_imagefilepreview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KImageFilePreview*
/// @param state flag of enum Qt__WindowState
///
void k_imagefilepreview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KImageFilePreview*
/// @param state flag of enum Qt__WindowState
///
void k_imagefilepreview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KImageFilePreview*
///
QSizePolicy* k_imagefilepreview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KImageFilePreview*
/// @param sizePolicy QSizePolicy*
///
void k_imagefilepreview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KImageFilePreview*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_imagefilepreview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KImageFilePreview*
///
QRegion* k_imagefilepreview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KImageFilePreview*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_imagefilepreview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KImageFilePreview*
/// @param margins QMargins*
///
void k_imagefilepreview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KImageFilePreview*
///
QMargins* k_imagefilepreview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KImageFilePreview*
///
QRect* k_imagefilepreview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KImageFilePreview*
///
QLayout* k_imagefilepreview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KImageFilePreview*
/// @param layout QLayout*
///
void k_imagefilepreview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KImageFilePreview*
/// @param parent QWidget*
///
void k_imagefilepreview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KImageFilePreview*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_imagefilepreview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KImageFilePreview*
/// @param dx int
/// @param dy int
///
void k_imagefilepreview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KImageFilePreview*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_imagefilepreview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KImageFilePreview*
/// @param on bool
///
void k_imagefilepreview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KImageFilePreview*
/// @param action QAction*
///
void k_imagefilepreview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KImageFilePreview*
/// @param actions libqt_list of QAction*
///
void k_imagefilepreview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KImageFilePreview*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_imagefilepreview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KImageFilePreview*
/// @param before QAction*
/// @param action QAction*
///
void k_imagefilepreview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KImageFilePreview*
/// @param action QAction*
///
void k_imagefilepreview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KImageFilePreview*
///
/// @return libqt_list of QAction*
///
libqt_list k_imagefilepreview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KImageFilePreview*
/// @param text const char*
///
QAction* k_imagefilepreview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KImageFilePreview*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_imagefilepreview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KImageFilePreview*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_imagefilepreview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KImageFilePreview*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_imagefilepreview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KImageFilePreview*
///
QWidget* k_imagefilepreview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KImageFilePreview*
/// @param type flag of enum Qt__WindowType
///
void k_imagefilepreview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KImageFilePreview*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_imagefilepreview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__WindowType
///
void k_imagefilepreview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KImageFilePreview*
/// @param type flag of enum Qt__WindowType
///
void k_imagefilepreview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KImageFilePreview*
///
/// @return enum Qt__WindowType
///
int32_t k_imagefilepreview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_imagefilepreview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KImageFilePreview*
/// @param x int
/// @param y int
///
QWidget* k_imagefilepreview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KImageFilePreview*
/// @param p QPoint*
///
QWidget* k_imagefilepreview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KImageFilePreview*
/// @param p QPointF*
///
QWidget* k_imagefilepreview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__WidgetAttribute
///
void k_imagefilepreview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_imagefilepreview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KImageFilePreview*
/// @param child QWidget*
///
bool k_imagefilepreview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KImageFilePreview*
/// @param enabled bool
///
void k_imagefilepreview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KImageFilePreview*
///
QBackingStore* k_imagefilepreview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KImageFilePreview*
///
QWindow* k_imagefilepreview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KImageFilePreview*
///
QScreen* k_imagefilepreview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KImageFilePreview*
/// @param screen QScreen*
///
void k_imagefilepreview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_imagefilepreview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KImageFilePreview*
/// @param title const char*
///
void k_imagefilepreview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, const char* title)
///
void k_imagefilepreview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KImageFilePreview*
/// @param icon QIcon*
///
void k_imagefilepreview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QIcon* icon)
///
void k_imagefilepreview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KImageFilePreview*
/// @param iconText const char*
///
void k_imagefilepreview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, const char* iconText)
///
void k_imagefilepreview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KImageFilePreview*
/// @param pos QPoint*
///
void k_imagefilepreview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QPoint* pos)
///
void k_imagefilepreview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KImageFilePreview*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_imagefilepreview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KImageFilePreview*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_imagefilepreview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_imagefilepreview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_imagefilepreview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_imagefilepreview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_imagefilepreview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_imagefilepreview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_imagefilepreview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KImageFilePreview*
/// @param rectangle QRect*
///
QPixmap* k_imagefilepreview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KImageFilePreview*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_imagefilepreview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KImageFilePreview*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_imagefilepreview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KImageFilePreview*
/// @param id int
/// @param enable bool
///
void k_imagefilepreview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KImageFilePreview*
/// @param id int
/// @param enable bool
///
void k_imagefilepreview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_imagefilepreview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_imagefilepreview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_imagefilepreview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_imagefilepreview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KImageFilePreview*
///
const char* k_imagefilepreview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KImageFilePreview*
/// @param name char*
///
void k_imagefilepreview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KImageFilePreview*
/// @param b bool
///
bool k_imagefilepreview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KImageFilePreview*
///
QThread* k_imagefilepreview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KImageFilePreview*
/// @param thread QThread*
///
bool k_imagefilepreview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KImageFilePreview*
/// @param interval int
///
int32_t k_imagefilepreview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KImageFilePreview*
/// @param time int64_t of nanoseconds
///
int32_t k_imagefilepreview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KImageFilePreview*
/// @param id int
///
void k_imagefilepreview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KImageFilePreview*
/// @param id enum Qt__TimerId
///
void k_imagefilepreview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KImageFilePreview*
///
/// @return libqt_list of QObject*
///
libqt_list k_imagefilepreview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KImageFilePreview*
/// @param filterObj QObject*
///
void k_imagefilepreview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KImageFilePreview*
/// @param obj QObject*
///
void k_imagefilepreview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_imagefilepreview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KImageFilePreview*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_imagefilepreview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_imagefilepreview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_imagefilepreview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KImageFilePreview*
/// @param name const char*
/// @param value QVariant*
///
bool k_imagefilepreview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KImageFilePreview*
/// @param name const char*
///
QVariant* k_imagefilepreview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KImageFilePreview*
///
const char** k_imagefilepreview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KImageFilePreview*
///
QBindingStorage* k_imagefilepreview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KImageFilePreview*
///
const QBindingStorage* k_imagefilepreview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self)
///
void k_imagefilepreview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KImageFilePreview*
///
QObject* k_imagefilepreview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KImageFilePreview*
/// @param classname const char*
///
bool k_imagefilepreview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KImageFilePreview*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_imagefilepreview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KImageFilePreview*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_imagefilepreview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_imagefilepreview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KImageFilePreview*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_imagefilepreview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KImageFilePreview*
/// @param param1 QObject*
///
void k_imagefilepreview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QObject* param1)
///
void k_imagefilepreview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KImageFilePreview*
///
double k_imagefilepreview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KImageFilePreview*
///
double k_imagefilepreview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_imagefilepreview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_imagefilepreview_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func()
///
void k_imagefilepreview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param visible bool
///
void k_imagefilepreview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param visible bool
///
void k_imagefilepreview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, bool visible)
///
void k_imagefilepreview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
QSize* k_imagefilepreview_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QSize* func()
///
void k_imagefilepreview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 int
///
int32_t k_imagefilepreview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 int
///
int32_t k_imagefilepreview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func(KImageFilePreview* self, int param1)
///
void k_imagefilepreview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func()
///
void k_imagefilepreview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
QPaintEngine* k_imagefilepreview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
QPaintEngine* k_imagefilepreview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QPaintEngine* func()
///
void k_imagefilepreview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
bool k_imagefilepreview_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
bool k_imagefilepreview_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func(KImageFilePreview* self, QEvent* event)
///
void k_imagefilepreview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMouseEvent* event)
///
void k_imagefilepreview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMouseEvent* event)
///
void k_imagefilepreview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMouseEvent* event)
///
void k_imagefilepreview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMouseEvent*
///
void k_imagefilepreview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMouseEvent* event)
///
void k_imagefilepreview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QWheelEvent*
///
void k_imagefilepreview_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QWheelEvent*
///
void k_imagefilepreview_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QWheelEvent* event)
///
void k_imagefilepreview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QKeyEvent*
///
void k_imagefilepreview_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QKeyEvent*
///
void k_imagefilepreview_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QKeyEvent* event)
///
void k_imagefilepreview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QKeyEvent*
///
void k_imagefilepreview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QKeyEvent*
///
void k_imagefilepreview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QKeyEvent* event)
///
void k_imagefilepreview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QFocusEvent*
///
void k_imagefilepreview_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QFocusEvent*
///
void k_imagefilepreview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QFocusEvent* event)
///
void k_imagefilepreview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QFocusEvent*
///
void k_imagefilepreview_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QFocusEvent*
///
void k_imagefilepreview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QFocusEvent* event)
///
void k_imagefilepreview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEnterEvent*
///
void k_imagefilepreview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEnterEvent*
///
void k_imagefilepreview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QEnterEvent* event)
///
void k_imagefilepreview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
void k_imagefilepreview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
void k_imagefilepreview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QEvent* event)
///
void k_imagefilepreview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QPaintEvent*
///
void k_imagefilepreview_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QPaintEvent*
///
void k_imagefilepreview_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QPaintEvent* event)
///
void k_imagefilepreview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMoveEvent*
///
void k_imagefilepreview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QMoveEvent*
///
void k_imagefilepreview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMoveEvent* event)
///
void k_imagefilepreview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QCloseEvent*
///
void k_imagefilepreview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QCloseEvent*
///
void k_imagefilepreview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QCloseEvent* event)
///
void k_imagefilepreview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QContextMenuEvent*
///
void k_imagefilepreview_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QContextMenuEvent*
///
void k_imagefilepreview_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QContextMenuEvent* event)
///
void k_imagefilepreview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QTabletEvent*
///
void k_imagefilepreview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QTabletEvent*
///
void k_imagefilepreview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QTabletEvent* event)
///
void k_imagefilepreview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QActionEvent*
///
void k_imagefilepreview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QActionEvent*
///
void k_imagefilepreview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QActionEvent* event)
///
void k_imagefilepreview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragEnterEvent*
///
void k_imagefilepreview_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragEnterEvent*
///
void k_imagefilepreview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QDragEnterEvent* event)
///
void k_imagefilepreview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragMoveEvent*
///
void k_imagefilepreview_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragMoveEvent*
///
void k_imagefilepreview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QDragMoveEvent* event)
///
void k_imagefilepreview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragLeaveEvent*
///
void k_imagefilepreview_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDragLeaveEvent*
///
void k_imagefilepreview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QDragLeaveEvent* event)
///
void k_imagefilepreview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDropEvent*
///
void k_imagefilepreview_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QDropEvent*
///
void k_imagefilepreview_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QDropEvent* event)
///
void k_imagefilepreview_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QShowEvent*
///
void k_imagefilepreview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QShowEvent*
///
void k_imagefilepreview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QShowEvent* event)
///
void k_imagefilepreview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QHideEvent*
///
void k_imagefilepreview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QHideEvent*
///
void k_imagefilepreview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QHideEvent* event)
///
void k_imagefilepreview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_imagefilepreview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_imagefilepreview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func(KImageFilePreview* self, const char* eventType, void* message, intptr_t* result)
///
void k_imagefilepreview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 QEvent*
///
void k_imagefilepreview_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 QEvent*
///
void k_imagefilepreview_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QEvent* param1)
///
void k_imagefilepreview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_imagefilepreview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_imagefilepreview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func(KImageFilePreview* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_imagefilepreview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
///
void k_imagefilepreview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param painter QPainter*
///
void k_imagefilepreview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QPainter* painter)
///
void k_imagefilepreview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param offset QPoint*
///
QPaintDevice* k_imagefilepreview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param offset QPoint*
///
QPaintDevice* k_imagefilepreview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QPaintDevice* func(KImageFilePreview* self, QPoint* offset)
///
void k_imagefilepreview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
QPainter* k_imagefilepreview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
QPainter* k_imagefilepreview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QPainter* func()
///
void k_imagefilepreview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 QInputMethodEvent*
///
void k_imagefilepreview_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 QInputMethodEvent*
///
void k_imagefilepreview_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QInputMethodEvent* param1)
///
void k_imagefilepreview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_imagefilepreview_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_imagefilepreview_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QVariant* func(KImageFilePreview* self, enum Qt__InputMethodQuery param1)
///
void k_imagefilepreview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param next bool
///
bool k_imagefilepreview_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param next bool
///
bool k_imagefilepreview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func(KImageFilePreview* self, bool next)
///
void k_imagefilepreview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_imagefilepreview_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_imagefilepreview_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func(KImageFilePreview* self, QObject* watched, QEvent* event)
///
void k_imagefilepreview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QTimerEvent*
///
void k_imagefilepreview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QTimerEvent*
///
void k_imagefilepreview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QTimerEvent* event)
///
void k_imagefilepreview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QChildEvent*
///
void k_imagefilepreview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QChildEvent*
///
void k_imagefilepreview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QChildEvent* event)
///
void k_imagefilepreview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
void k_imagefilepreview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param event QEvent*
///
void k_imagefilepreview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QEvent* event)
///
void k_imagefilepreview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
void k_imagefilepreview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
void k_imagefilepreview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMetaMethod* signal)
///
void k_imagefilepreview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
void k_imagefilepreview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
void k_imagefilepreview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, QMetaMethod* signal)
///
void k_imagefilepreview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KPreviewWidgetBase
///
/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param mimeTypes const char**
///
void k_imagefilepreview_set_supported_mime_types(void* self, const char* mimeTypes[static 1]);

/// Inherited from KPreviewWidgetBase
///
/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param mimeTypes const char**
///
void k_imagefilepreview_qbase_set_supported_mime_types(void* self, const char* mimeTypes[static 1]);

/// Inherited from KPreviewWidgetBase
///
/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, const char** mimeTypes)
///
void k_imagefilepreview_on_set_supported_mime_types(void* self, void (*callback)(void*, const char**));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func()
///
void k_imagefilepreview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func()
///
void k_imagefilepreview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback void func()
///
void k_imagefilepreview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func()
///
void k_imagefilepreview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
bool k_imagefilepreview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func()
///
void k_imagefilepreview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
QObject* k_imagefilepreview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
QObject* k_imagefilepreview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback QObject* func()
///
void k_imagefilepreview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
///
int32_t k_imagefilepreview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func()
///
void k_imagefilepreview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal const char*
///
int32_t k_imagefilepreview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal const char*
///
int32_t k_imagefilepreview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback int32_t func(KImageFilePreview* self, const char* signal)
///
void k_imagefilepreview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
bool k_imagefilepreview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param signal QMetaMethod*
///
bool k_imagefilepreview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback bool func(KImageFilePreview* self, QMetaMethod* signal)
///
void k_imagefilepreview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KImageFilePreview*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_imagefilepreview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_imagefilepreview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KImageFilePreview*
/// @param callback double func(KImageFilePreview* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_imagefilepreview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KImageFilePreview*
/// @param callback void func(KImageFilePreview* self, const char* objectName)
///
void k_imagefilepreview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kimagefilepreview.html#dtor.KImageFilePreview)
///
/// Delete this object from C++ memory.
///
/// @param self KImageFilePreview*
///
void k_imagefilepreview_delete(void* self);

#endif
