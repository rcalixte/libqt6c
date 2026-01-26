#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKPREVIEWWIDGETBASE_H
#define SRC_EXTRAS_KIO_QT6C_LIBKPREVIEWWIDGETBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html)

/// k_previewwidgetbase_new constructs a new KPreviewWidgetBase object.
///
/// @param parent QWidget*
///
KPreviewWidgetBase* k_previewwidgetbase_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPreviewWidgetBase*
///
const QMetaObject* k_previewwidgetbase_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback const QMetaObject* func()
///
void k_previewwidgetbase_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
///
const QMetaObject* k_previewwidgetbase_qbase_meta_object(void* self);

/// @param self KPreviewWidgetBase*
/// @param param1 const char*
///
void* k_previewwidgetbase_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback void* func(KPreviewWidgetBase* self, const char* param1)
///
void k_previewwidgetbase_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
/// @param param1 const char*
///
void* k_previewwidgetbase_qbase_metacast(void* self, const char* param1);

/// @param self KPreviewWidgetBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_previewwidgetbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func(KPreviewWidgetBase* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_previewwidgetbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_previewwidgetbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_previewwidgetbase_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#supportedMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPreviewWidgetBase*
///
const char** k_previewwidgetbase_supported_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#showPreview)
///
/// @param self KPreviewWidgetBase*
/// @param url QUrl*
///
void k_previewwidgetbase_show_preview(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QUrl* url)
///
void k_previewwidgetbase_on_show_preview(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#showPreview)
///
/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
/// @param url QUrl*
///
void k_previewwidgetbase_qbase_show_preview(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#clearPreview)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_clear_preview(void* self);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#clearPreview)
///
/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func()
///
void k_previewwidgetbase_on_clear_preview(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#clearPreview)
///
/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_qbase_clear_preview(void* self);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// @param self KPreviewWidgetBase*
/// @param mimeTypes const char**
///
void k_previewwidgetbase_set_supported_mime_types(void* self, const char* mimeTypes[static 1]);

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, const char** mimeTypes)
///
void k_previewwidgetbase_on_set_supported_mime_types(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#setSupportedMimeTypes)
///
/// Base class method implementation
///
/// @param self KPreviewWidgetBase*
/// @param mimeTypes const char**
///
void k_previewwidgetbase_qbase_set_supported_mime_types(void* self, const char* mimeTypes[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_previewwidgetbase_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_previewwidgetbase_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KPreviewWidgetBase*
///
uintptr_t k_previewwidgetbase_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KPreviewWidgetBase*
///
uintptr_t k_previewwidgetbase_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KPreviewWidgetBase*
///
uintptr_t k_previewwidgetbase_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KPreviewWidgetBase*
///
QStyle* k_previewwidgetbase_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KPreviewWidgetBase*
/// @param style QStyle*
///
void k_previewwidgetbase_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum Qt__WindowModality
///
int32_t k_previewwidgetbase_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KPreviewWidgetBase*
/// @param windowModality enum Qt__WindowModality
///
void k_previewwidgetbase_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
///
bool k_previewwidgetbase_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KPreviewWidgetBase*
/// @param enabled bool
///
void k_previewwidgetbase_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KPreviewWidgetBase*
/// @param disabled bool
///
void k_previewwidgetbase_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KPreviewWidgetBase*
/// @param windowModified bool
///
void k_previewwidgetbase_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KPreviewWidgetBase*
///
QRect* k_previewwidgetbase_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KPreviewWidgetBase*
///
const QRect* k_previewwidgetbase_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KPreviewWidgetBase*
///
QRect* k_previewwidgetbase_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KPreviewWidgetBase*
///
QPoint* k_previewwidgetbase_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KPreviewWidgetBase*
///
QRect* k_previewwidgetbase_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KPreviewWidgetBase*
///
QRect* k_previewwidgetbase_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KPreviewWidgetBase*
///
QRegion* k_previewwidgetbase_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPreviewWidgetBase*
/// @param minimumSize QSize*
///
void k_previewwidgetbase_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPreviewWidgetBase*
/// @param minw int
/// @param minh int
///
void k_previewwidgetbase_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPreviewWidgetBase*
/// @param maximumSize QSize*
///
void k_previewwidgetbase_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPreviewWidgetBase*
/// @param maxw int
/// @param maxh int
///
void k_previewwidgetbase_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KPreviewWidgetBase*
/// @param minw int
///
void k_previewwidgetbase_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KPreviewWidgetBase*
/// @param minh int
///
void k_previewwidgetbase_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KPreviewWidgetBase*
/// @param maxw int
///
void k_previewwidgetbase_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KPreviewWidgetBase*
/// @param maxh int
///
void k_previewwidgetbase_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPreviewWidgetBase*
/// @param sizeIncrement QSize*
///
void k_previewwidgetbase_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPreviewWidgetBase*
/// @param w int
/// @param h int
///
void k_previewwidgetbase_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPreviewWidgetBase*
/// @param baseSize QSize*
///
void k_previewwidgetbase_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPreviewWidgetBase*
/// @param basew int
/// @param baseh int
///
void k_previewwidgetbase_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPreviewWidgetBase*
/// @param fixedSize QSize*
///
void k_previewwidgetbase_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPreviewWidgetBase*
/// @param w int
/// @param h int
///
void k_previewwidgetbase_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KPreviewWidgetBase*
/// @param w int
///
void k_previewwidgetbase_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KPreviewWidgetBase*
/// @param h int
///
void k_previewwidgetbase_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPointF*
///
QPointF* k_previewwidgetbase_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPoint*
///
QPoint* k_previewwidgetbase_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPointF*
///
QPointF* k_previewwidgetbase_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPoint*
///
QPoint* k_previewwidgetbase_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPointF*
///
QPointF* k_previewwidgetbase_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPoint*
///
QPoint* k_previewwidgetbase_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPointF*
///
QPointF* k_previewwidgetbase_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPoint*
///
QPoint* k_previewwidgetbase_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_previewwidgetbase_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_previewwidgetbase_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_previewwidgetbase_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_previewwidgetbase_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KPreviewWidgetBase*
///
const QPalette* k_previewwidgetbase_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPreviewWidgetBase*
/// @param palette QPalette*
///
void k_previewwidgetbase_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KPreviewWidgetBase*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_previewwidgetbase_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum QPalette__ColorRole
///
int32_t k_previewwidgetbase_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KPreviewWidgetBase*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_previewwidgetbase_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum QPalette__ColorRole
///
int32_t k_previewwidgetbase_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KPreviewWidgetBase*
///
const QFont* k_previewwidgetbase_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPreviewWidgetBase*
/// @param font QFont*
///
void k_previewwidgetbase_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KPreviewWidgetBase*
///
QFontMetrics* k_previewwidgetbase_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KPreviewWidgetBase*
///
QFontInfo* k_previewwidgetbase_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KPreviewWidgetBase*
///
QCursor* k_previewwidgetbase_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPreviewWidgetBase*
/// @param cursor QCursor*
///
void k_previewwidgetbase_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KPreviewWidgetBase*
/// @param enable bool
///
void k_previewwidgetbase_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KPreviewWidgetBase*
/// @param enable bool
///
void k_previewwidgetbase_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPreviewWidgetBase*
/// @param mask QBitmap*
///
void k_previewwidgetbase_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPreviewWidgetBase*
/// @param mask QRegion*
///
void k_previewwidgetbase_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KPreviewWidgetBase*
///
QRegion* k_previewwidgetbase_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param target QPaintDevice*
///
void k_previewwidgetbase_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
///
void k_previewwidgetbase_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPreviewWidgetBase*
///
QPixmap* k_previewwidgetbase_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KPreviewWidgetBase*
///
QGraphicsEffect* k_previewwidgetbase_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KPreviewWidgetBase*
/// @param effect QGraphicsEffect*
///
void k_previewwidgetbase_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPreviewWidgetBase*
/// @param type enum Qt__GestureType
///
void k_previewwidgetbase_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KPreviewWidgetBase*
/// @param type enum Qt__GestureType
///
void k_previewwidgetbase_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KPreviewWidgetBase*
/// @param windowTitle const char*
///
void k_previewwidgetbase_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KPreviewWidgetBase*
/// @param styleSheet const char*
///
void k_previewwidgetbase_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPreviewWidgetBase*
/// @param icon QIcon*
///
void k_previewwidgetbase_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KPreviewWidgetBase*
///
QIcon* k_previewwidgetbase_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KPreviewWidgetBase*
/// @param windowIconText const char*
///
void k_previewwidgetbase_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KPreviewWidgetBase*
/// @param windowRole const char*
///
void k_previewwidgetbase_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KPreviewWidgetBase*
/// @param filePath const char*
///
void k_previewwidgetbase_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KPreviewWidgetBase*
/// @param level double
///
void k_previewwidgetbase_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KPreviewWidgetBase*
///
double k_previewwidgetbase_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KPreviewWidgetBase*
/// @param toolTip const char*
///
void k_previewwidgetbase_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KPreviewWidgetBase*
/// @param msec int
///
void k_previewwidgetbase_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KPreviewWidgetBase*
/// @param statusTip const char*
///
void k_previewwidgetbase_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KPreviewWidgetBase*
/// @param whatsThis const char*
///
void k_previewwidgetbase_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KPreviewWidgetBase*
/// @param name const char*
///
void k_previewwidgetbase_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KPreviewWidgetBase*
/// @param description const char*
///
void k_previewwidgetbase_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KPreviewWidgetBase*
/// @param direction enum Qt__LayoutDirection
///
void k_previewwidgetbase_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_previewwidgetbase_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KPreviewWidgetBase*
/// @param locale QLocale*
///
void k_previewwidgetbase_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KPreviewWidgetBase*
///
QLocale* k_previewwidgetbase_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPreviewWidgetBase*
/// @param reason enum Qt__FocusReason
///
void k_previewwidgetbase_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_previewwidgetbase_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KPreviewWidgetBase*
/// @param policy enum Qt__FocusPolicy
///
void k_previewwidgetbase_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_previewwidgetbase_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KPreviewWidgetBase*
/// @param focusProxy QWidget*
///
void k_previewwidgetbase_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_previewwidgetbase_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KPreviewWidgetBase*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_previewwidgetbase_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QCursor*
///
void k_previewwidgetbase_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPreviewWidgetBase*
/// @param key QKeySequence*
///
int32_t k_previewwidgetbase_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KPreviewWidgetBase*
/// @param id int
///
void k_previewwidgetbase_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPreviewWidgetBase*
/// @param id int
///
void k_previewwidgetbase_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPreviewWidgetBase*
/// @param id int
///
void k_previewwidgetbase_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_previewwidgetbase_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_previewwidgetbase_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KPreviewWidgetBase*
/// @param enable bool
///
void k_previewwidgetbase_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KPreviewWidgetBase*
///
QGraphicsProxyWidget* k_previewwidgetbase_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPreviewWidgetBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_previewwidgetbase_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QRect*
///
void k_previewwidgetbase_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QRegion*
///
void k_previewwidgetbase_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPreviewWidgetBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_previewwidgetbase_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QRect*
///
void k_previewwidgetbase_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QRegion*
///
void k_previewwidgetbase_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KPreviewWidgetBase*
/// @param hidden bool
///
void k_previewwidgetbase_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
///
void k_previewwidgetbase_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPreviewWidgetBase*
/// @param x int
/// @param y int
///
void k_previewwidgetbase_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QPoint*
///
void k_previewwidgetbase_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPreviewWidgetBase*
/// @param w int
/// @param h int
///
void k_previewwidgetbase_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QSize*
///
void k_previewwidgetbase_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPreviewWidgetBase*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_previewwidgetbase_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPreviewWidgetBase*
/// @param geometry QRect*
///
void k_previewwidgetbase_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPreviewWidgetBase*
///
char* k_previewwidgetbase_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPreviewWidgetBase*
/// @param geometry const char*
///
bool k_previewwidgetbase_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QWidget*
///
bool k_previewwidgetbase_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KPreviewWidgetBase*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_previewwidgetbase_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KPreviewWidgetBase*
/// @param state flag of enum Qt__WindowState
///
void k_previewwidgetbase_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KPreviewWidgetBase*
/// @param state flag of enum Qt__WindowState
///
void k_previewwidgetbase_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KPreviewWidgetBase*
///
QSizePolicy* k_previewwidgetbase_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPreviewWidgetBase*
/// @param sizePolicy QSizePolicy*
///
void k_previewwidgetbase_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPreviewWidgetBase*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_previewwidgetbase_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KPreviewWidgetBase*
///
QRegion* k_previewwidgetbase_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPreviewWidgetBase*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_previewwidgetbase_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPreviewWidgetBase*
/// @param margins QMargins*
///
void k_previewwidgetbase_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KPreviewWidgetBase*
///
QMargins* k_previewwidgetbase_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KPreviewWidgetBase*
///
QRect* k_previewwidgetbase_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KPreviewWidgetBase*
///
QLayout* k_previewwidgetbase_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KPreviewWidgetBase*
/// @param layout QLayout*
///
void k_previewwidgetbase_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPreviewWidgetBase*
/// @param parent QWidget*
///
void k_previewwidgetbase_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPreviewWidgetBase*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_previewwidgetbase_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPreviewWidgetBase*
/// @param dx int
/// @param dy int
///
void k_previewwidgetbase_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPreviewWidgetBase*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_previewwidgetbase_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KPreviewWidgetBase*
/// @param on bool
///
void k_previewwidgetbase_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPreviewWidgetBase*
/// @param action QAction*
///
void k_previewwidgetbase_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KPreviewWidgetBase*
/// @param actions libqt_list of QAction*
///
void k_previewwidgetbase_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KPreviewWidgetBase*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_previewwidgetbase_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KPreviewWidgetBase*
/// @param before QAction*
/// @param action QAction*
///
void k_previewwidgetbase_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KPreviewWidgetBase*
/// @param action QAction*
///
void k_previewwidgetbase_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KPreviewWidgetBase*
///
/// @return libqt_list of QAction*
///
libqt_list k_previewwidgetbase_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPreviewWidgetBase*
/// @param text const char*
///
QAction* k_previewwidgetbase_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPreviewWidgetBase*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_previewwidgetbase_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPreviewWidgetBase*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_previewwidgetbase_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPreviewWidgetBase*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_previewwidgetbase_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KPreviewWidgetBase*
///
QWidget* k_previewwidgetbase_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KPreviewWidgetBase*
/// @param type flag of enum Qt__WindowType
///
void k_previewwidgetbase_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KPreviewWidgetBase*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_previewwidgetbase_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__WindowType
///
void k_previewwidgetbase_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KPreviewWidgetBase*
/// @param type flag of enum Qt__WindowType
///
void k_previewwidgetbase_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KPreviewWidgetBase*
///
/// @return enum Qt__WindowType
///
int32_t k_previewwidgetbase_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_previewwidgetbase_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPreviewWidgetBase*
/// @param x int
/// @param y int
///
QWidget* k_previewwidgetbase_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPreviewWidgetBase*
/// @param p QPoint*
///
QWidget* k_previewwidgetbase_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPreviewWidgetBase*
/// @param p QPointF*
///
QWidget* k_previewwidgetbase_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__WidgetAttribute
///
void k_previewwidgetbase_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_previewwidgetbase_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KPreviewWidgetBase*
/// @param child QWidget*
///
bool k_previewwidgetbase_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KPreviewWidgetBase*
/// @param enabled bool
///
void k_previewwidgetbase_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KPreviewWidgetBase*
///
QBackingStore* k_previewwidgetbase_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KPreviewWidgetBase*
///
QWindow* k_previewwidgetbase_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KPreviewWidgetBase*
///
QScreen* k_previewwidgetbase_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KPreviewWidgetBase*
/// @param screen QScreen*
///
void k_previewwidgetbase_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_previewwidgetbase_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPreviewWidgetBase*
/// @param title const char*
///
void k_previewwidgetbase_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, const char* title)
///
void k_previewwidgetbase_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPreviewWidgetBase*
/// @param icon QIcon*
///
void k_previewwidgetbase_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QIcon* icon)
///
void k_previewwidgetbase_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPreviewWidgetBase*
/// @param iconText const char*
///
void k_previewwidgetbase_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, const char* iconText)
///
void k_previewwidgetbase_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPreviewWidgetBase*
/// @param pos QPoint*
///
void k_previewwidgetbase_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QPoint* pos)
///
void k_previewwidgetbase_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KPreviewWidgetBase*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_previewwidgetbase_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KPreviewWidgetBase*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_previewwidgetbase_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_previewwidgetbase_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_previewwidgetbase_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_previewwidgetbase_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_previewwidgetbase_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_previewwidgetbase_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_previewwidgetbase_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPreviewWidgetBase*
/// @param rectangle QRect*
///
QPixmap* k_previewwidgetbase_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPreviewWidgetBase*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_previewwidgetbase_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPreviewWidgetBase*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_previewwidgetbase_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPreviewWidgetBase*
/// @param id int
/// @param enable bool
///
void k_previewwidgetbase_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPreviewWidgetBase*
/// @param id int
/// @param enable bool
///
void k_previewwidgetbase_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_previewwidgetbase_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_previewwidgetbase_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_previewwidgetbase_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_previewwidgetbase_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPreviewWidgetBase*
///
const char* k_previewwidgetbase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPreviewWidgetBase*
/// @param name char*
///
void k_previewwidgetbase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPreviewWidgetBase*
/// @param b bool
///
bool k_previewwidgetbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPreviewWidgetBase*
///
QThread* k_previewwidgetbase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPreviewWidgetBase*
/// @param thread QThread*
///
bool k_previewwidgetbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPreviewWidgetBase*
/// @param interval int
///
int32_t k_previewwidgetbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPreviewWidgetBase*
/// @param time int64_t of nanoseconds
///
int32_t k_previewwidgetbase_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPreviewWidgetBase*
/// @param id int
///
void k_previewwidgetbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPreviewWidgetBase*
/// @param id enum Qt__TimerId
///
void k_previewwidgetbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPreviewWidgetBase*
///
/// @return libqt_list of QObject*
///
libqt_list k_previewwidgetbase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPreviewWidgetBase*
/// @param filterObj QObject*
///
void k_previewwidgetbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPreviewWidgetBase*
/// @param obj QObject*
///
void k_previewwidgetbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_previewwidgetbase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPreviewWidgetBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_previewwidgetbase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_previewwidgetbase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_previewwidgetbase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPreviewWidgetBase*
/// @param name const char*
/// @param value QVariant*
///
bool k_previewwidgetbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPreviewWidgetBase*
/// @param name const char*
///
QVariant* k_previewwidgetbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPreviewWidgetBase*
///
const char** k_previewwidgetbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPreviewWidgetBase*
///
QBindingStorage* k_previewwidgetbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPreviewWidgetBase*
///
const QBindingStorage* k_previewwidgetbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self)
///
void k_previewwidgetbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPreviewWidgetBase*
///
QObject* k_previewwidgetbase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPreviewWidgetBase*
/// @param classname const char*
///
bool k_previewwidgetbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPreviewWidgetBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_previewwidgetbase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPreviewWidgetBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_previewwidgetbase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPreviewWidgetBase*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_previewwidgetbase_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_previewwidgetbase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPreviewWidgetBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_previewwidgetbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPreviewWidgetBase*
/// @param param1 QObject*
///
void k_previewwidgetbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QObject* param1)
///
void k_previewwidgetbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KPreviewWidgetBase*
///
double k_previewwidgetbase_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KPreviewWidgetBase*
///
double k_previewwidgetbase_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_previewwidgetbase_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_previewwidgetbase_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func()
///
void k_previewwidgetbase_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param visible bool
///
void k_previewwidgetbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param visible bool
///
void k_previewwidgetbase_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, bool visible)
///
void k_previewwidgetbase_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QSize* func()
///
void k_previewwidgetbase_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QSize* k_previewwidgetbase_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QSize* func()
///
void k_previewwidgetbase_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 int
///
int32_t k_previewwidgetbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 int
///
int32_t k_previewwidgetbase_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func(KPreviewWidgetBase* self, int param1)
///
void k_previewwidgetbase_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func()
///
void k_previewwidgetbase_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QPaintEngine* k_previewwidgetbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QPaintEngine* k_previewwidgetbase_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QPaintEngine* func()
///
void k_previewwidgetbase_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
bool k_previewwidgetbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
bool k_previewwidgetbase_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func(KPreviewWidgetBase* self, QEvent* event)
///
void k_previewwidgetbase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMouseEvent* event)
///
void k_previewwidgetbase_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMouseEvent* event)
///
void k_previewwidgetbase_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMouseEvent* event)
///
void k_previewwidgetbase_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMouseEvent*
///
void k_previewwidgetbase_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMouseEvent* event)
///
void k_previewwidgetbase_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QWheelEvent*
///
void k_previewwidgetbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QWheelEvent*
///
void k_previewwidgetbase_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QWheelEvent* event)
///
void k_previewwidgetbase_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QKeyEvent*
///
void k_previewwidgetbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QKeyEvent*
///
void k_previewwidgetbase_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QKeyEvent* event)
///
void k_previewwidgetbase_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QKeyEvent*
///
void k_previewwidgetbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QKeyEvent*
///
void k_previewwidgetbase_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QKeyEvent* event)
///
void k_previewwidgetbase_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QFocusEvent*
///
void k_previewwidgetbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QFocusEvent*
///
void k_previewwidgetbase_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QFocusEvent* event)
///
void k_previewwidgetbase_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QFocusEvent*
///
void k_previewwidgetbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QFocusEvent*
///
void k_previewwidgetbase_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QFocusEvent* event)
///
void k_previewwidgetbase_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEnterEvent*
///
void k_previewwidgetbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEnterEvent*
///
void k_previewwidgetbase_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QEnterEvent* event)
///
void k_previewwidgetbase_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
void k_previewwidgetbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
void k_previewwidgetbase_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QEvent* event)
///
void k_previewwidgetbase_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QPaintEvent*
///
void k_previewwidgetbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QPaintEvent*
///
void k_previewwidgetbase_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QPaintEvent* event)
///
void k_previewwidgetbase_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMoveEvent*
///
void k_previewwidgetbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QMoveEvent*
///
void k_previewwidgetbase_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMoveEvent* event)
///
void k_previewwidgetbase_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QResizeEvent*
///
void k_previewwidgetbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QResizeEvent*
///
void k_previewwidgetbase_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QResizeEvent* event)
///
void k_previewwidgetbase_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QCloseEvent*
///
void k_previewwidgetbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QCloseEvent*
///
void k_previewwidgetbase_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QCloseEvent* event)
///
void k_previewwidgetbase_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QContextMenuEvent*
///
void k_previewwidgetbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QContextMenuEvent*
///
void k_previewwidgetbase_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QContextMenuEvent* event)
///
void k_previewwidgetbase_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QTabletEvent*
///
void k_previewwidgetbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QTabletEvent*
///
void k_previewwidgetbase_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QTabletEvent* event)
///
void k_previewwidgetbase_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QActionEvent*
///
void k_previewwidgetbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QActionEvent*
///
void k_previewwidgetbase_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QActionEvent* event)
///
void k_previewwidgetbase_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragEnterEvent*
///
void k_previewwidgetbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragEnterEvent*
///
void k_previewwidgetbase_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QDragEnterEvent* event)
///
void k_previewwidgetbase_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragMoveEvent*
///
void k_previewwidgetbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragMoveEvent*
///
void k_previewwidgetbase_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QDragMoveEvent* event)
///
void k_previewwidgetbase_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragLeaveEvent*
///
void k_previewwidgetbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDragLeaveEvent*
///
void k_previewwidgetbase_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QDragLeaveEvent* event)
///
void k_previewwidgetbase_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDropEvent*
///
void k_previewwidgetbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QDropEvent*
///
void k_previewwidgetbase_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QDropEvent* event)
///
void k_previewwidgetbase_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QShowEvent*
///
void k_previewwidgetbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QShowEvent*
///
void k_previewwidgetbase_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QShowEvent* event)
///
void k_previewwidgetbase_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QHideEvent*
///
void k_previewwidgetbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QHideEvent*
///
void k_previewwidgetbase_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QHideEvent* event)
///
void k_previewwidgetbase_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_previewwidgetbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_previewwidgetbase_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func(KPreviewWidgetBase* self, const char* eventType, void* message, intptr_t* result)
///
void k_previewwidgetbase_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 QEvent*
///
void k_previewwidgetbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 QEvent*
///
void k_previewwidgetbase_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QEvent* param1)
///
void k_previewwidgetbase_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_previewwidgetbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_previewwidgetbase_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func(KPreviewWidgetBase* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_previewwidgetbase_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
///
void k_previewwidgetbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param painter QPainter*
///
void k_previewwidgetbase_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QPainter* painter)
///
void k_previewwidgetbase_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param offset QPoint*
///
QPaintDevice* k_previewwidgetbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param offset QPoint*
///
QPaintDevice* k_previewwidgetbase_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QPaintDevice* func(KPreviewWidgetBase* self, QPoint* offset)
///
void k_previewwidgetbase_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QPainter* k_previewwidgetbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QPainter* k_previewwidgetbase_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QPainter* func()
///
void k_previewwidgetbase_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 QInputMethodEvent*
///
void k_previewwidgetbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 QInputMethodEvent*
///
void k_previewwidgetbase_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QInputMethodEvent* param1)
///
void k_previewwidgetbase_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_previewwidgetbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_previewwidgetbase_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QVariant* func(KPreviewWidgetBase* self, enum Qt__InputMethodQuery param1)
///
void k_previewwidgetbase_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param next bool
///
bool k_previewwidgetbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param next bool
///
bool k_previewwidgetbase_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func(KPreviewWidgetBase* self, bool next)
///
void k_previewwidgetbase_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_previewwidgetbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_previewwidgetbase_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func(KPreviewWidgetBase* self, QObject* watched, QEvent* event)
///
void k_previewwidgetbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QTimerEvent*
///
void k_previewwidgetbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QTimerEvent*
///
void k_previewwidgetbase_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QTimerEvent* event)
///
void k_previewwidgetbase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QChildEvent*
///
void k_previewwidgetbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QChildEvent*
///
void k_previewwidgetbase_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QChildEvent* event)
///
void k_previewwidgetbase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
void k_previewwidgetbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param event QEvent*
///
void k_previewwidgetbase_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QEvent* event)
///
void k_previewwidgetbase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
void k_previewwidgetbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
void k_previewwidgetbase_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMetaMethod* signal)
///
void k_previewwidgetbase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
void k_previewwidgetbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
void k_previewwidgetbase_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, QMetaMethod* signal)
///
void k_previewwidgetbase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func()
///
void k_previewwidgetbase_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func()
///
void k_previewwidgetbase_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback void func()
///
void k_previewwidgetbase_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func()
///
void k_previewwidgetbase_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
bool k_previewwidgetbase_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func()
///
void k_previewwidgetbase_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QObject* k_previewwidgetbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
QObject* k_previewwidgetbase_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback QObject* func()
///
void k_previewwidgetbase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
///
int32_t k_previewwidgetbase_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func()
///
void k_previewwidgetbase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal const char*
///
int32_t k_previewwidgetbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal const char*
///
int32_t k_previewwidgetbase_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback int32_t func(KPreviewWidgetBase* self, const char* signal)
///
void k_previewwidgetbase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
bool k_previewwidgetbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param signal QMetaMethod*
///
bool k_previewwidgetbase_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback bool func(KPreviewWidgetBase* self, QMetaMethod* signal)
///
void k_previewwidgetbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_previewwidgetbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_previewwidgetbase_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPreviewWidgetBase*
/// @param callback double func(KPreviewWidgetBase* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_previewwidgetbase_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPreviewWidgetBase*
/// @param callback void func(KPreviewWidgetBase* self, const char* objectName)
///
void k_previewwidgetbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpreviewwidgetbase.html#dtor.KPreviewWidgetBase)
///
/// Delete this object from C++ memory.
///
/// @param self KPreviewWidgetBase*
///
void k_previewwidgetbase_delete(void* self);

#endif
