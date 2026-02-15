#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTRESOURCEBROWSER_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTRESOURCEBROWSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html)

/// q_designerresourcebrowserinterface_new constructs a new QDesignerResourceBrowserInterface object.
///
/// @param parent QWidget*
///
QDesignerResourceBrowserInterface* q_designerresourcebrowserinterface_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html)

/// q_designerresourcebrowserinterface_new2 constructs a new QDesignerResourceBrowserInterface object.
///
QDesignerResourceBrowserInterface* q_designerresourcebrowserinterface_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerResourceBrowserInterface*
///
const QMetaObject* q_designerresourcebrowserinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback const QMetaObject* func()
///
void q_designerresourcebrowserinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerResourceBrowserInterface*
///
const QMetaObject* q_designerresourcebrowserinterface_qbase_meta_object(void* self);

/// @param self QDesignerResourceBrowserInterface*
/// @param param1 const char*
///
void* q_designerresourcebrowserinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void* func(QDesignerResourceBrowserInterface* self, const char* param1)
///
void q_designerresourcebrowserinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 const char*
///
void* q_designerresourcebrowserinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerresourcebrowserinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func(QDesignerResourceBrowserInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerresourcebrowserinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerresourcebrowserinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerresourcebrowserinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#setCurrentPath)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filePath const char*
///
void q_designerresourcebrowserinterface_set_current_path(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#setCurrentPath)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* filePath)
///
void q_designerresourcebrowserinterface_on_set_current_path(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#setCurrentPath)
///
/// Base class method implementation
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filePath const char*
///
void q_designerresourcebrowserinterface_qbase_set_current_path(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#currentPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_current_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#currentPath)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback const char* func()
///
void q_designerresourcebrowserinterface_on_current_path(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#currentPath)
///
/// Base class method implementation
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_qbase_current_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#currentPathChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filePath const char*
///
void q_designerresourcebrowserinterface_current_path_changed(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#currentPathChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* filePath)
///
void q_designerresourcebrowserinterface_on_current_path_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#pathActivated)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filePath const char*
///
void q_designerresourcebrowserinterface_path_activated(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#pathActivated)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* filePath)
///
void q_designerresourcebrowserinterface_on_path_activated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerresourcebrowserinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerresourcebrowserinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDesignerResourceBrowserInterface*
///
uintptr_t q_designerresourcebrowserinterface_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDesignerResourceBrowserInterface*
///
uintptr_t q_designerresourcebrowserinterface_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDesignerResourceBrowserInterface*
///
uintptr_t q_designerresourcebrowserinterface_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDesignerResourceBrowserInterface*
///
QStyle* q_designerresourcebrowserinterface_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param style QStyle*
///
void q_designerresourcebrowserinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designerresourcebrowserinterface_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designerresourcebrowserinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
///
bool q_designerresourcebrowserinterface_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param enabled bool
///
void q_designerresourcebrowserinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param disabled bool
///
void q_designerresourcebrowserinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param windowModified bool
///
void q_designerresourcebrowserinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRect* q_designerresourcebrowserinterface_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDesignerResourceBrowserInterface*
///
const QRect* q_designerresourcebrowserinterface_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRect* q_designerresourcebrowserinterface_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDesignerResourceBrowserInterface*
///
QPoint* q_designerresourcebrowserinterface_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRect* q_designerresourcebrowserinterface_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRect* q_designerresourcebrowserinterface_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRegion* q_designerresourcebrowserinterface_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param minimumSize QSize*
///
void q_designerresourcebrowserinterface_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param minw int
/// @param minh int
///
void q_designerresourcebrowserinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param maximumSize QSize*
///
void q_designerresourcebrowserinterface_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param maxw int
/// @param maxh int
///
void q_designerresourcebrowserinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param minw int
///
void q_designerresourcebrowserinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param minh int
///
void q_designerresourcebrowserinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param maxw int
///
void q_designerresourcebrowserinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param maxh int
///
void q_designerresourcebrowserinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param sizeIncrement QSize*
///
void q_designerresourcebrowserinterface_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param baseSize QSize*
///
void q_designerresourcebrowserinterface_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param basew int
/// @param baseh int
///
void q_designerresourcebrowserinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param fixedSize QSize*
///
void q_designerresourcebrowserinterface_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param w int
///
void q_designerresourcebrowserinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param h int
///
void q_designerresourcebrowserinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerresourcebrowserinterface_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerresourcebrowserinterface_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDesignerResourceBrowserInterface*
///
const QPalette* q_designerresourcebrowserinterface_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param palette QPalette*
///
void q_designerresourcebrowserinterface_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designerresourcebrowserinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerresourcebrowserinterface_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designerresourcebrowserinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerresourcebrowserinterface_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDesignerResourceBrowserInterface*
///
const QFont* q_designerresourcebrowserinterface_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param font QFont*
///
void q_designerresourcebrowserinterface_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDesignerResourceBrowserInterface*
///
QFontMetrics* q_designerresourcebrowserinterface_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDesignerResourceBrowserInterface*
///
QFontInfo* q_designerresourcebrowserinterface_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDesignerResourceBrowserInterface*
///
QCursor* q_designerresourcebrowserinterface_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param cursor QCursor*
///
void q_designerresourcebrowserinterface_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param enable bool
///
void q_designerresourcebrowserinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param enable bool
///
void q_designerresourcebrowserinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param mask QBitmap*
///
void q_designerresourcebrowserinterface_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param mask QRegion*
///
void q_designerresourcebrowserinterface_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRegion* q_designerresourcebrowserinterface_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param target QPaintDevice*
///
void q_designerresourcebrowserinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
///
void q_designerresourcebrowserinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerResourceBrowserInterface*
///
QPixmap* q_designerresourcebrowserinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDesignerResourceBrowserInterface*
///
QGraphicsEffect* q_designerresourcebrowserinterface_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param effect QGraphicsEffect*
///
void q_designerresourcebrowserinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param type enum Qt__GestureType
///
void q_designerresourcebrowserinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param type enum Qt__GestureType
///
void q_designerresourcebrowserinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param windowTitle const char*
///
void q_designerresourcebrowserinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param styleSheet const char*
///
void q_designerresourcebrowserinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param icon QIcon*
///
void q_designerresourcebrowserinterface_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDesignerResourceBrowserInterface*
///
QIcon* q_designerresourcebrowserinterface_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param windowIconText const char*
///
void q_designerresourcebrowserinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param windowRole const char*
///
void q_designerresourcebrowserinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filePath const char*
///
void q_designerresourcebrowserinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param level double
///
void q_designerresourcebrowserinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDesignerResourceBrowserInterface*
///
double q_designerresourcebrowserinterface_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param toolTip const char*
///
void q_designerresourcebrowserinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param msec int
///
void q_designerresourcebrowserinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param statusTip const char*
///
void q_designerresourcebrowserinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param whatsThis const char*
///
void q_designerresourcebrowserinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param name const char*
///
void q_designerresourcebrowserinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param description const char*
///
void q_designerresourcebrowserinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designerresourcebrowserinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designerresourcebrowserinterface_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param locale QLocale*
///
void q_designerresourcebrowserinterface_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDesignerResourceBrowserInterface*
///
QLocale* q_designerresourcebrowserinterface_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param reason enum Qt__FocusReason
///
void q_designerresourcebrowserinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designerresourcebrowserinterface_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designerresourcebrowserinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designerresourcebrowserinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param focusProxy QWidget*
///
void q_designerresourcebrowserinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designerresourcebrowserinterface_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designerresourcebrowserinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QCursor*
///
void q_designerresourcebrowserinterface_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param key QKeySequence*
///
int32_t q_designerresourcebrowserinterface_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
///
void q_designerresourcebrowserinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
///
void q_designerresourcebrowserinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
///
void q_designerresourcebrowserinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designerresourcebrowserinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designerresourcebrowserinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param enable bool
///
void q_designerresourcebrowserinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDesignerResourceBrowserInterface*
///
QGraphicsProxyWidget* q_designerresourcebrowserinterface_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QRect*
///
void q_designerresourcebrowserinterface_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QRegion*
///
void q_designerresourcebrowserinterface_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QRect*
///
void q_designerresourcebrowserinterface_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QRegion*
///
void q_designerresourcebrowserinterface_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param hidden bool
///
void q_designerresourcebrowserinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
///
void q_designerresourcebrowserinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param x int
/// @param y int
///
void q_designerresourcebrowserinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QPoint*
///
void q_designerresourcebrowserinterface_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QSize*
///
void q_designerresourcebrowserinterface_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerresourcebrowserinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param geometry QRect*
///
void q_designerresourcebrowserinterface_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
char* q_designerresourcebrowserinterface_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param geometry char*
///
bool q_designerresourcebrowserinterface_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QWidget*
///
bool q_designerresourcebrowserinterface_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designerresourcebrowserinterface_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerresourcebrowserinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerresourcebrowserinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDesignerResourceBrowserInterface*
///
QSizePolicy* q_designerresourcebrowserinterface_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designerresourcebrowserinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designerresourcebrowserinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRegion* q_designerresourcebrowserinterface_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designerresourcebrowserinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param margins QMargins*
///
void q_designerresourcebrowserinterface_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDesignerResourceBrowserInterface*
///
QMargins* q_designerresourcebrowserinterface_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDesignerResourceBrowserInterface*
///
QRect* q_designerresourcebrowserinterface_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDesignerResourceBrowserInterface*
///
QLayout* q_designerresourcebrowserinterface_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param layout QLayout*
///
void q_designerresourcebrowserinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param parent QWidget*
///
void q_designerresourcebrowserinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designerresourcebrowserinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param dx int
/// @param dy int
///
void q_designerresourcebrowserinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designerresourcebrowserinterface_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param on bool
///
void q_designerresourcebrowserinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param action QAction*
///
void q_designerresourcebrowserinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param actions libqt_list of QAction*
///
void q_designerresourcebrowserinterface_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designerresourcebrowserinterface_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designerresourcebrowserinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param action QAction*
///
void q_designerresourcebrowserinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designerresourcebrowserinterface_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param text const char*
///
QAction* q_designerresourcebrowserinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designerresourcebrowserinterface_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerresourcebrowserinterface_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerresourcebrowserinterface_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWidget* q_designerresourcebrowserinterface_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerresourcebrowserinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designerresourcebrowserinterface_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__WindowType
///
void q_designerresourcebrowserinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerresourcebrowserinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designerresourcebrowserinterface_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_designerresourcebrowserinterface_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param x int
/// @param y int
///
QWidget* q_designerresourcebrowserinterface_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param p QPoint*
///
QWidget* q_designerresourcebrowserinterface_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param p QPointF*
///
QWidget* q_designerresourcebrowserinterface_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designerresourcebrowserinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designerresourcebrowserinterface_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param child QWidget*
///
bool q_designerresourcebrowserinterface_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param enabled bool
///
void q_designerresourcebrowserinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDesignerResourceBrowserInterface*
///
QBackingStore* q_designerresourcebrowserinterface_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDesignerResourceBrowserInterface*
///
QWindow* q_designerresourcebrowserinterface_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDesignerResourceBrowserInterface*
///
QScreen* q_designerresourcebrowserinterface_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param screen QScreen*
///
void q_designerresourcebrowserinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designerresourcebrowserinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param title const char*
///
void q_designerresourcebrowserinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* title)
///
void q_designerresourcebrowserinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param icon QIcon*
///
void q_designerresourcebrowserinterface_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QIcon* icon)
///
void q_designerresourcebrowserinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param iconText const char*
///
void q_designerresourcebrowserinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* iconText)
///
void q_designerresourcebrowserinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param pos QPoint*
///
void q_designerresourcebrowserinterface_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QPoint* pos)
///
void q_designerresourcebrowserinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designerresourcebrowserinterface_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designerresourcebrowserinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designerresourcebrowserinterface_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerresourcebrowserinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerresourcebrowserinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designerresourcebrowserinterface_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerresourcebrowserinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerresourcebrowserinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param rectangle QRect*
///
QPixmap* q_designerresourcebrowserinterface_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designerresourcebrowserinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designerresourcebrowserinterface_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
/// @param enable bool
///
void q_designerresourcebrowserinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
/// @param enable bool
///
void q_designerresourcebrowserinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designerresourcebrowserinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designerresourcebrowserinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designerresourcebrowserinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designerresourcebrowserinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char* q_designerresourcebrowserinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param name const char*
///
void q_designerresourcebrowserinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param b bool
///
bool q_designerresourcebrowserinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerResourceBrowserInterface*
///
QThread* q_designerresourcebrowserinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param thread QThread*
///
bool q_designerresourcebrowserinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param interval int
///
int32_t q_designerresourcebrowserinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerresourcebrowserinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id int
///
void q_designerresourcebrowserinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param id enum Qt__TimerId
///
void q_designerresourcebrowserinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerResourceBrowserInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerresourcebrowserinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param filterObj QObject*
///
void q_designerresourcebrowserinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param obj QObject*
///
void q_designerresourcebrowserinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerresourcebrowserinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerresourcebrowserinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerresourcebrowserinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerresourcebrowserinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerresourcebrowserinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param receiver QObject*
///
bool q_designerresourcebrowserinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerresourcebrowserinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerresourcebrowserinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param name const char*
///
QVariant* q_designerresourcebrowserinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerResourceBrowserInterface*
///
const char** q_designerresourcebrowserinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerResourceBrowserInterface*
///
QBindingStorage* q_designerresourcebrowserinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerResourceBrowserInterface*
///
const QBindingStorage* q_designerresourcebrowserinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self)
///
void q_designerresourcebrowserinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerResourceBrowserInterface*
///
QObject* q_designerresourcebrowserinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param classname const char*
///
bool q_designerresourcebrowserinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerresourcebrowserinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerresourcebrowserinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designerresourcebrowserinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerresourcebrowserinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerresourcebrowserinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal const char*
///
bool q_designerresourcebrowserinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerresourcebrowserinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerresourcebrowserinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerresourcebrowserinterface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QObject*
///
void q_designerresourcebrowserinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QObject* param1)
///
void q_designerresourcebrowserinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDesignerResourceBrowserInterface*
///
double q_designerresourcebrowserinterface_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDesignerResourceBrowserInterface*
///
double q_designerresourcebrowserinterface_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designerresourcebrowserinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designerresourcebrowserinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func()
///
void q_designerresourcebrowserinterface_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param visible bool
///
void q_designerresourcebrowserinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param visible bool
///
void q_designerresourcebrowserinterface_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, bool visible)
///
void q_designerresourcebrowserinterface_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QSize* func()
///
void q_designerresourcebrowserinterface_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QSize* q_designerresourcebrowserinterface_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QSize* func()
///
void q_designerresourcebrowserinterface_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 int
///
int32_t q_designerresourcebrowserinterface_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 int
///
int32_t q_designerresourcebrowserinterface_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func(QDesignerResourceBrowserInterface* self, int param1)
///
void q_designerresourcebrowserinterface_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func()
///
void q_designerresourcebrowserinterface_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QPaintEngine* q_designerresourcebrowserinterface_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QPaintEngine* q_designerresourcebrowserinterface_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QPaintEngine* func()
///
void q_designerresourcebrowserinterface_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
bool q_designerresourcebrowserinterface_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
bool q_designerresourcebrowserinterface_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func(QDesignerResourceBrowserInterface* self, QEvent* event)
///
void q_designerresourcebrowserinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMouseEvent* event)
///
void q_designerresourcebrowserinterface_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMouseEvent* event)
///
void q_designerresourcebrowserinterface_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMouseEvent* event)
///
void q_designerresourcebrowserinterface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMouseEvent*
///
void q_designerresourcebrowserinterface_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMouseEvent* event)
///
void q_designerresourcebrowserinterface_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QWheelEvent*
///
void q_designerresourcebrowserinterface_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QWheelEvent*
///
void q_designerresourcebrowserinterface_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QWheelEvent* event)
///
void q_designerresourcebrowserinterface_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QKeyEvent*
///
void q_designerresourcebrowserinterface_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QKeyEvent*
///
void q_designerresourcebrowserinterface_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QKeyEvent* event)
///
void q_designerresourcebrowserinterface_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QKeyEvent*
///
void q_designerresourcebrowserinterface_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QKeyEvent*
///
void q_designerresourcebrowserinterface_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QKeyEvent* event)
///
void q_designerresourcebrowserinterface_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QFocusEvent*
///
void q_designerresourcebrowserinterface_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QFocusEvent*
///
void q_designerresourcebrowserinterface_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QFocusEvent* event)
///
void q_designerresourcebrowserinterface_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QFocusEvent*
///
void q_designerresourcebrowserinterface_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QFocusEvent*
///
void q_designerresourcebrowserinterface_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QFocusEvent* event)
///
void q_designerresourcebrowserinterface_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEnterEvent*
///
void q_designerresourcebrowserinterface_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEnterEvent*
///
void q_designerresourcebrowserinterface_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QEnterEvent* event)
///
void q_designerresourcebrowserinterface_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
void q_designerresourcebrowserinterface_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
void q_designerresourcebrowserinterface_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QEvent* event)
///
void q_designerresourcebrowserinterface_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QPaintEvent*
///
void q_designerresourcebrowserinterface_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QPaintEvent*
///
void q_designerresourcebrowserinterface_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QPaintEvent* event)
///
void q_designerresourcebrowserinterface_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMoveEvent*
///
void q_designerresourcebrowserinterface_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QMoveEvent*
///
void q_designerresourcebrowserinterface_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMoveEvent* event)
///
void q_designerresourcebrowserinterface_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QResizeEvent*
///
void q_designerresourcebrowserinterface_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QResizeEvent*
///
void q_designerresourcebrowserinterface_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QResizeEvent* event)
///
void q_designerresourcebrowserinterface_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QCloseEvent*
///
void q_designerresourcebrowserinterface_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QCloseEvent*
///
void q_designerresourcebrowserinterface_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QCloseEvent* event)
///
void q_designerresourcebrowserinterface_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QContextMenuEvent*
///
void q_designerresourcebrowserinterface_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QContextMenuEvent*
///
void q_designerresourcebrowserinterface_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event)
///
void q_designerresourcebrowserinterface_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QTabletEvent*
///
void q_designerresourcebrowserinterface_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QTabletEvent*
///
void q_designerresourcebrowserinterface_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QTabletEvent* event)
///
void q_designerresourcebrowserinterface_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QActionEvent*
///
void q_designerresourcebrowserinterface_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QActionEvent*
///
void q_designerresourcebrowserinterface_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QActionEvent* event)
///
void q_designerresourcebrowserinterface_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragEnterEvent*
///
void q_designerresourcebrowserinterface_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragEnterEvent*
///
void q_designerresourcebrowserinterface_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event)
///
void q_designerresourcebrowserinterface_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragMoveEvent*
///
void q_designerresourcebrowserinterface_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragMoveEvent*
///
void q_designerresourcebrowserinterface_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event)
///
void q_designerresourcebrowserinterface_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragLeaveEvent*
///
void q_designerresourcebrowserinterface_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDragLeaveEvent*
///
void q_designerresourcebrowserinterface_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event)
///
void q_designerresourcebrowserinterface_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDropEvent*
///
void q_designerresourcebrowserinterface_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QDropEvent*
///
void q_designerresourcebrowserinterface_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QDropEvent* event)
///
void q_designerresourcebrowserinterface_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QShowEvent*
///
void q_designerresourcebrowserinterface_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QShowEvent*
///
void q_designerresourcebrowserinterface_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QShowEvent* event)
///
void q_designerresourcebrowserinterface_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QHideEvent*
///
void q_designerresourcebrowserinterface_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QHideEvent*
///
void q_designerresourcebrowserinterface_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QHideEvent* event)
///
void q_designerresourcebrowserinterface_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerresourcebrowserinterface_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerresourcebrowserinterface_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func(QDesignerResourceBrowserInterface* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_designerresourcebrowserinterface_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QEvent*
///
void q_designerresourcebrowserinterface_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QEvent*
///
void q_designerresourcebrowserinterface_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QEvent* param1)
///
void q_designerresourcebrowserinterface_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerresourcebrowserinterface_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerresourcebrowserinterface_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func(QDesignerResourceBrowserInterface* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_designerresourcebrowserinterface_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
///
void q_designerresourcebrowserinterface_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param painter QPainter*
///
void q_designerresourcebrowserinterface_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QPainter* painter)
///
void q_designerresourcebrowserinterface_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerresourcebrowserinterface_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerresourcebrowserinterface_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QPaintDevice* func(QDesignerResourceBrowserInterface* self, QPoint* offset)
///
void q_designerresourcebrowserinterface_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QPainter* q_designerresourcebrowserinterface_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QPainter* q_designerresourcebrowserinterface_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QPainter* func()
///
void q_designerresourcebrowserinterface_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerresourcebrowserinterface_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerresourcebrowserinterface_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1)
///
void q_designerresourcebrowserinterface_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerresourcebrowserinterface_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerresourcebrowserinterface_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QVariant* func(QDesignerResourceBrowserInterface* self, enum Qt__InputMethodQuery param1)
///
void q_designerresourcebrowserinterface_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param next bool
///
bool q_designerresourcebrowserinterface_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param next bool
///
bool q_designerresourcebrowserinterface_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func(QDesignerResourceBrowserInterface* self, bool next)
///
void q_designerresourcebrowserinterface_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerresourcebrowserinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerresourcebrowserinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func(QDesignerResourceBrowserInterface* self, QObject* watched, QEvent* event)
///
void q_designerresourcebrowserinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QTimerEvent*
///
void q_designerresourcebrowserinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QTimerEvent*
///
void q_designerresourcebrowserinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QTimerEvent* event)
///
void q_designerresourcebrowserinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QChildEvent*
///
void q_designerresourcebrowserinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QChildEvent*
///
void q_designerresourcebrowserinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QChildEvent* event)
///
void q_designerresourcebrowserinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
void q_designerresourcebrowserinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param event QEvent*
///
void q_designerresourcebrowserinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QEvent* event)
///
void q_designerresourcebrowserinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
void q_designerresourcebrowserinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
void q_designerresourcebrowserinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMetaMethod* signal)
///
void q_designerresourcebrowserinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
void q_designerresourcebrowserinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
void q_designerresourcebrowserinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, QMetaMethod* signal)
///
void q_designerresourcebrowserinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func()
///
void q_designerresourcebrowserinterface_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func()
///
void q_designerresourcebrowserinterface_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func()
///
void q_designerresourcebrowserinterface_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func()
///
void q_designerresourcebrowserinterface_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
bool q_designerresourcebrowserinterface_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func()
///
void q_designerresourcebrowserinterface_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QObject* q_designerresourcebrowserinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
QObject* q_designerresourcebrowserinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback QObject* func()
///
void q_designerresourcebrowserinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
///
int32_t q_designerresourcebrowserinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func()
///
void q_designerresourcebrowserinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal const char*
///
int32_t q_designerresourcebrowserinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal const char*
///
int32_t q_designerresourcebrowserinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback int32_t func(QDesignerResourceBrowserInterface* self, const char* signal)
///
void q_designerresourcebrowserinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
bool q_designerresourcebrowserinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param signal QMetaMethod*
///
bool q_designerresourcebrowserinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback bool func(QDesignerResourceBrowserInterface* self, QMetaMethod* signal)
///
void q_designerresourcebrowserinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerresourcebrowserinterface_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerresourcebrowserinterface_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback double func(QDesignerResourceBrowserInterface* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_designerresourcebrowserinterface_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerResourceBrowserInterface*
/// @param callback void func(QDesignerResourceBrowserInterface* self, const char* objectName)
///
void q_designerresourcebrowserinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerresourcebrowserinterface.html#dtor.QDesignerResourceBrowserInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerResourceBrowserInterface*
///
void q_designerresourcebrowserinterface_delete(void* self);

#endif
