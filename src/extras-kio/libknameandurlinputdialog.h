#pragma once
#ifndef EXTRAS_KIO_LIBKNAMEANDURLINPUTDIALOG_H
#define EXTRAS_KIO_LIBKNAMEANDURLINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html)

/// k_nameandurlinputdialog_new constructs a new KNameAndUrlInputDialog object.
///
/// @param nameLabel const char*
/// @param urlLabel const char*
/// @param startDir QUrl*
/// @param parent QWidget*
///
KNameAndUrlInputDialog* k_nameandurlinputdialog_new(const char* nameLabel, const char* urlLabel, const void* startDir, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KNameAndUrlInputDialog*
///
const QMetaObject* k_nameandurlinputdialog_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback const QMetaObject* func(const KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KNameAndUrlInputDialog*
///
const QMetaObject* k_nameandurlinputdialog_super_meta_object(const void* self);

/// @param self KNameAndUrlInputDialog*
/// @param param1 const char*
///
void* k_nameandurlinputdialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void* func(KNameAndUrlInputDialog* self, const char* param1)
///
void k_nameandurlinputdialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 const char*
///
void* k_nameandurlinputdialog_super_metacast(void* self, const char* param1);

/// @param self KNameAndUrlInputDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nameandurlinputdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_nameandurlinputdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nameandurlinputdialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nameandurlinputdialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#setSuggestedName)
///
/// @param self KNameAndUrlInputDialog*
/// @param name const char*
///
void k_nameandurlinputdialog_set_suggested_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#setSuggestedUrl)
///
/// @param self KNameAndUrlInputDialog*
/// @param url QUrl*
///
void k_nameandurlinputdialog_set_suggested_url(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_name(const void* self);

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#url)
///
/// @param self const KNameAndUrlInputDialog*
///
QUrl* k_nameandurlinputdialog_url(const void* self);

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#urlText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_url_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nameandurlinputdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nameandurlinputdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_result(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param sizeGripEnabled bool
///
void k_nameandurlinputdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_size_grip_enabled(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KNameAndUrlInputDialog*
/// @param modal bool
///
void k_nameandurlinputdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KNameAndUrlInputDialog*
/// @param r int
///
void k_nameandurlinputdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KNameAndUrlInputDialog*
/// @param result int
///
void k_nameandurlinputdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, int result)
///
void k_nameandurlinputdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self KNameAndUrlInputDialog*
///
QPaintDevice* k_nameandurlinputdialog_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a KNameAndUrlInputDialog object
///
/// @param _qpaintdevice QPaintDevice*
///
KNameAndUrlInputDialog* k_nameandurlinputdialog_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KNameAndUrlInputDialog*
///
uintptr_t k_nameandurlinputdialog_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KNameAndUrlInputDialog*
///
uintptr_t k_nameandurlinputdialog_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KNameAndUrlInputDialog*
///
uintptr_t k_nameandurlinputdialog_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KNameAndUrlInputDialog*
///
QStyle* k_nameandurlinputdialog_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KNameAndUrlInputDialog*
/// @param style QStyle*
///
void k_nameandurlinputdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_nameandurlinputdialog_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KNameAndUrlInputDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_nameandurlinputdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
///
bool k_nameandurlinputdialog_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param enabled bool
///
void k_nameandurlinputdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param disabled bool
///
void k_nameandurlinputdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KNameAndUrlInputDialog*
/// @param windowModified bool
///
void k_nameandurlinputdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KNameAndUrlInputDialog*
///
QRect* k_nameandurlinputdialog_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KNameAndUrlInputDialog*
///
const QRect* k_nameandurlinputdialog_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KNameAndUrlInputDialog*
///
QRect* k_nameandurlinputdialog_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KNameAndUrlInputDialog*
///
QPoint* k_nameandurlinputdialog_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KNameAndUrlInputDialog*
///
QRect* k_nameandurlinputdialog_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KNameAndUrlInputDialog*
///
QRect* k_nameandurlinputdialog_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KNameAndUrlInputDialog*
///
QRegion* k_nameandurlinputdialog_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param minimumSize QSize*
///
void k_nameandurlinputdialog_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param minw int
/// @param minh int
///
void k_nameandurlinputdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param maximumSize QSize*
///
void k_nameandurlinputdialog_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param maxw int
/// @param maxh int
///
void k_nameandurlinputdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KNameAndUrlInputDialog*
/// @param minw int
///
void k_nameandurlinputdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KNameAndUrlInputDialog*
/// @param minh int
///
void k_nameandurlinputdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KNameAndUrlInputDialog*
/// @param maxw int
///
void k_nameandurlinputdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KNameAndUrlInputDialog*
/// @param maxh int
///
void k_nameandurlinputdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KNameAndUrlInputDialog*
/// @param sizeIncrement QSize*
///
void k_nameandurlinputdialog_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KNameAndUrlInputDialog*
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param baseSize QSize*
///
void k_nameandurlinputdialog_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param basew int
/// @param baseh int
///
void k_nameandurlinputdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param fixedSize QSize*
///
void k_nameandurlinputdialog_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KNameAndUrlInputDialog*
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KNameAndUrlInputDialog*
/// @param w int
///
void k_nameandurlinputdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KNameAndUrlInputDialog*
/// @param h int
///
void k_nameandurlinputdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPointF*
///
QPointF* k_nameandurlinputdialog_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPoint*
///
QPoint* k_nameandurlinputdialog_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPointF*
///
QPointF* k_nameandurlinputdialog_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPoint*
///
QPoint* k_nameandurlinputdialog_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPointF*
///
QPointF* k_nameandurlinputdialog_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPoint*
///
QPoint* k_nameandurlinputdialog_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPointF*
///
QPointF* k_nameandurlinputdialog_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QPoint*
///
QPoint* k_nameandurlinputdialog_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_nameandurlinputdialog_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_nameandurlinputdialog_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_nameandurlinputdialog_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_nameandurlinputdialog_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KNameAndUrlInputDialog*
///
const QPalette* k_nameandurlinputdialog_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KNameAndUrlInputDialog*
/// @param palette QPalette*
///
void k_nameandurlinputdialog_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KNameAndUrlInputDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_nameandurlinputdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_nameandurlinputdialog_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KNameAndUrlInputDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_nameandurlinputdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_nameandurlinputdialog_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KNameAndUrlInputDialog*
///
const QFont* k_nameandurlinputdialog_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KNameAndUrlInputDialog*
/// @param font QFont*
///
void k_nameandurlinputdialog_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KNameAndUrlInputDialog*
///
QFontMetrics* k_nameandurlinputdialog_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KNameAndUrlInputDialog*
///
QFontInfo* k_nameandurlinputdialog_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KNameAndUrlInputDialog*
///
QCursor* k_nameandurlinputdialog_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KNameAndUrlInputDialog*
/// @param cursor QCursor*
///
void k_nameandurlinputdialog_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KNameAndUrlInputDialog*
/// @param enable bool
///
void k_nameandurlinputdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KNameAndUrlInputDialog*
/// @param enable bool
///
void k_nameandurlinputdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KNameAndUrlInputDialog*
/// @param mask QBitmap*
///
void k_nameandurlinputdialog_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KNameAndUrlInputDialog*
/// @param mask QRegion*
///
void k_nameandurlinputdialog_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KNameAndUrlInputDialog*
///
QRegion* k_nameandurlinputdialog_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param target QPaintDevice*
///
void k_nameandurlinputdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param painter QPainter*
///
void k_nameandurlinputdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KNameAndUrlInputDialog*
///
QPixmap* k_nameandurlinputdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KNameAndUrlInputDialog*
///
QGraphicsEffect* k_nameandurlinputdialog_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KNameAndUrlInputDialog*
/// @param effect QGraphicsEffect*
///
void k_nameandurlinputdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KNameAndUrlInputDialog*
/// @param type enum Qt__GestureType
///
void k_nameandurlinputdialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KNameAndUrlInputDialog*
/// @param type enum Qt__GestureType
///
void k_nameandurlinputdialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KNameAndUrlInputDialog*
/// @param windowTitle const char*
///
void k_nameandurlinputdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KNameAndUrlInputDialog*
/// @param styleSheet const char*
///
void k_nameandurlinputdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KNameAndUrlInputDialog*
/// @param icon QIcon*
///
void k_nameandurlinputdialog_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KNameAndUrlInputDialog*
///
QIcon* k_nameandurlinputdialog_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KNameAndUrlInputDialog*
/// @param windowIconText const char*
///
void k_nameandurlinputdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KNameAndUrlInputDialog*
/// @param windowRole const char*
///
void k_nameandurlinputdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KNameAndUrlInputDialog*
/// @param filePath const char*
///
void k_nameandurlinputdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KNameAndUrlInputDialog*
/// @param level double
///
void k_nameandurlinputdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KNameAndUrlInputDialog*
///
double k_nameandurlinputdialog_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KNameAndUrlInputDialog*
/// @param toolTip const char*
///
void k_nameandurlinputdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KNameAndUrlInputDialog*
/// @param msec int
///
void k_nameandurlinputdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KNameAndUrlInputDialog*
/// @param statusTip const char*
///
void k_nameandurlinputdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KNameAndUrlInputDialog*
/// @param whatsThis const char*
///
void k_nameandurlinputdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KNameAndUrlInputDialog*
/// @param name const char*
///
void k_nameandurlinputdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KNameAndUrlInputDialog*
/// @param description const char*
///
void k_nameandurlinputdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KNameAndUrlInputDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_nameandurlinputdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_nameandurlinputdialog_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KNameAndUrlInputDialog*
/// @param locale QLocale*
///
void k_nameandurlinputdialog_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KNameAndUrlInputDialog*
///
QLocale* k_nameandurlinputdialog_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KNameAndUrlInputDialog*
/// @param reason enum Qt__FocusReason
///
void k_nameandurlinputdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_nameandurlinputdialog_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KNameAndUrlInputDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_nameandurlinputdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_nameandurlinputdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KNameAndUrlInputDialog*
/// @param focusProxy QWidget*
///
void k_nameandurlinputdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_nameandurlinputdialog_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KNameAndUrlInputDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_nameandurlinputdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QCursor*
///
void k_nameandurlinputdialog_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KNameAndUrlInputDialog*
/// @param key QKeySequence*
///
int32_t k_nameandurlinputdialog_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
///
void k_nameandurlinputdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
///
void k_nameandurlinputdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
///
void k_nameandurlinputdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_nameandurlinputdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_nameandurlinputdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param enable bool
///
void k_nameandurlinputdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KNameAndUrlInputDialog*
///
QGraphicsProxyWidget* k_nameandurlinputdialog_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KNameAndUrlInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QRect*
///
void k_nameandurlinputdialog_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QRegion*
///
void k_nameandurlinputdialog_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KNameAndUrlInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QRect*
///
void k_nameandurlinputdialog_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QRegion*
///
void k_nameandurlinputdialog_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KNameAndUrlInputDialog*
/// @param hidden bool
///
void k_nameandurlinputdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QWidget*
///
void k_nameandurlinputdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KNameAndUrlInputDialog*
/// @param x int
/// @param y int
///
void k_nameandurlinputdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QPoint*
///
void k_nameandurlinputdialog_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KNameAndUrlInputDialog*
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QSize*
///
void k_nameandurlinputdialog_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KNameAndUrlInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_nameandurlinputdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KNameAndUrlInputDialog*
/// @param geometry QRect*
///
void k_nameandurlinputdialog_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KNameAndUrlInputDialog*
///
char* k_nameandurlinputdialog_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KNameAndUrlInputDialog*
/// @param geometry char*
///
bool k_nameandurlinputdialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 QWidget*
///
bool k_nameandurlinputdialog_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_nameandurlinputdialog_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KNameAndUrlInputDialog*
/// @param state flag of enum Qt__WindowState
///
void k_nameandurlinputdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KNameAndUrlInputDialog*
/// @param state flag of enum Qt__WindowState
///
void k_nameandurlinputdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KNameAndUrlInputDialog*
///
QSizePolicy* k_nameandurlinputdialog_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KNameAndUrlInputDialog*
/// @param sizePolicy QSizePolicy*
///
void k_nameandurlinputdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KNameAndUrlInputDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_nameandurlinputdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KNameAndUrlInputDialog*
///
QRegion* k_nameandurlinputdialog_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KNameAndUrlInputDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_nameandurlinputdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KNameAndUrlInputDialog*
/// @param margins QMargins*
///
void k_nameandurlinputdialog_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KNameAndUrlInputDialog*
///
QMargins* k_nameandurlinputdialog_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KNameAndUrlInputDialog*
///
QRect* k_nameandurlinputdialog_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KNameAndUrlInputDialog*
///
QLayout* k_nameandurlinputdialog_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KNameAndUrlInputDialog*
/// @param layout QLayout*
///
void k_nameandurlinputdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KNameAndUrlInputDialog*
/// @param parent QWidget*
///
void k_nameandurlinputdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KNameAndUrlInputDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_nameandurlinputdialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KNameAndUrlInputDialog*
/// @param dx int
/// @param dy int
///
void k_nameandurlinputdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KNameAndUrlInputDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_nameandurlinputdialog_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KNameAndUrlInputDialog*
/// @param on bool
///
void k_nameandurlinputdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param action QAction*
///
void k_nameandurlinputdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KNameAndUrlInputDialog*
/// @param actions libqt_list of QAction*
///
void k_nameandurlinputdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KNameAndUrlInputDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_nameandurlinputdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_nameandurlinputdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param action QAction*
///
void k_nameandurlinputdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_nameandurlinputdialog_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param text const char*
///
QAction* k_nameandurlinputdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_nameandurlinputdialog_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_nameandurlinputdialog_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KNameAndUrlInputDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_nameandurlinputdialog_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KNameAndUrlInputDialog*
///
QWidget* k_nameandurlinputdialog_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KNameAndUrlInputDialog*
/// @param type flag of enum Qt__WindowType
///
void k_nameandurlinputdialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_nameandurlinputdialog_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 enum Qt__WindowType
///
void k_nameandurlinputdialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KNameAndUrlInputDialog*
/// @param type flag of enum Qt__WindowType
///
void k_nameandurlinputdialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return enum Qt__WindowType
///
int32_t k_nameandurlinputdialog_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_nameandurlinputdialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KNameAndUrlInputDialog*
/// @param x int
/// @param y int
///
QWidget* k_nameandurlinputdialog_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KNameAndUrlInputDialog*
/// @param p QPoint*
///
QWidget* k_nameandurlinputdialog_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KNameAndUrlInputDialog*
/// @param p QPointF*
///
QWidget* k_nameandurlinputdialog_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_nameandurlinputdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_nameandurlinputdialog_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KNameAndUrlInputDialog*
/// @param child QWidget*
///
bool k_nameandurlinputdialog_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KNameAndUrlInputDialog*
/// @param enabled bool
///
void k_nameandurlinputdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KNameAndUrlInputDialog*
///
QBackingStore* k_nameandurlinputdialog_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KNameAndUrlInputDialog*
///
QWindow* k_nameandurlinputdialog_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KNameAndUrlInputDialog*
///
QScreen* k_nameandurlinputdialog_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KNameAndUrlInputDialog*
/// @param screen QScreen*
///
void k_nameandurlinputdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_nameandurlinputdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param title const char*
///
void k_nameandurlinputdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, const char* title)
///
void k_nameandurlinputdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param icon QIcon*
///
void k_nameandurlinputdialog_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QIcon* icon)
///
void k_nameandurlinputdialog_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param iconText const char*
///
void k_nameandurlinputdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, const char* iconText)
///
void k_nameandurlinputdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KNameAndUrlInputDialog*
/// @param pos QPoint*
///
void k_nameandurlinputdialog_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QPoint* pos)
///
void k_nameandurlinputdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_nameandurlinputdialog_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KNameAndUrlInputDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_nameandurlinputdialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_nameandurlinputdialog_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_nameandurlinputdialog_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_nameandurlinputdialog_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_nameandurlinputdialog_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_nameandurlinputdialog_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KNameAndUrlInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_nameandurlinputdialog_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KNameAndUrlInputDialog*
/// @param rectangle QRect*
///
QPixmap* k_nameandurlinputdialog_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KNameAndUrlInputDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_nameandurlinputdialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KNameAndUrlInputDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_nameandurlinputdialog_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
/// @param enable bool
///
void k_nameandurlinputdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
/// @param enable bool
///
void k_nameandurlinputdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_nameandurlinputdialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_nameandurlinputdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_nameandurlinputdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_nameandurlinputdialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char* k_nameandurlinputdialog_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNameAndUrlInputDialog*
/// @param name const char*
///
void k_nameandurlinputdialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNameAndUrlInputDialog*
/// @param b bool
///
bool k_nameandurlinputdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KNameAndUrlInputDialog*
///
QThread* k_nameandurlinputdialog_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNameAndUrlInputDialog*
/// @param thread QThread*
///
bool k_nameandurlinputdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param interval int
///
int32_t k_nameandurlinputdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param time int64_t of nanoseconds
///
int32_t k_nameandurlinputdialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param id int
///
void k_nameandurlinputdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param id enum Qt__TimerId
///
void k_nameandurlinputdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KNameAndUrlInputDialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_nameandurlinputdialog_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNameAndUrlInputDialog*
/// @param filterObj QObject*
///
void k_nameandurlinputdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNameAndUrlInputDialog*
/// @param obj QObject*
///
void k_nameandurlinputdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_nameandurlinputdialog_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nameandurlinputdialog_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nameandurlinputdialog_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nameandurlinputdialog_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nameandurlinputdialog_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param receiver QObject*
///
bool k_nameandurlinputdialog_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nameandurlinputdialog_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNameAndUrlInputDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_nameandurlinputdialog_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KNameAndUrlInputDialog*
/// @param name const char*
///
QVariant* k_nameandurlinputdialog_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KNameAndUrlInputDialog*
///
const char** k_nameandurlinputdialog_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNameAndUrlInputDialog*
///
QBindingStorage* k_nameandurlinputdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KNameAndUrlInputDialog*
///
const QBindingStorage* k_nameandurlinputdialog_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KNameAndUrlInputDialog*
///
QObject* k_nameandurlinputdialog_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KNameAndUrlInputDialog*
/// @param classname const char*
///
bool k_nameandurlinputdialog_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nameandurlinputdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNameAndUrlInputDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_nameandurlinputdialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_nameandurlinputdialog_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_nameandurlinputdialog_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nameandurlinputdialog_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal const char*
///
bool k_nameandurlinputdialog_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_nameandurlinputdialog_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nameandurlinputdialog_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNameAndUrlInputDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nameandurlinputdialog_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QObject*
///
void k_nameandurlinputdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QObject* param1)
///
void k_nameandurlinputdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KNameAndUrlInputDialog*
///
double k_nameandurlinputdialog_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KNameAndUrlInputDialog*
///
double k_nameandurlinputdialog_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_nameandurlinputdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_nameandurlinputdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param visible bool
///
void k_nameandurlinputdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param visible bool
///
void k_nameandurlinputdialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, bool visible)
///
void k_nameandurlinputdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_super_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QSize* func(KNameAndUrlInputDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nameandurlinputdialog_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QSize* k_nameandurlinputdialog_super_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QSize* func(KNameAndUrlInputDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nameandurlinputdialog_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_open(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_super_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_exec(void* self, int32_t (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 int
///
void k_nameandurlinputdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 int
///
void k_nameandurlinputdialog_super_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, int param1)
///
void k_nameandurlinputdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_accept(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_reject(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QKeyEvent*
///
void k_nameandurlinputdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QKeyEvent*
///
void k_nameandurlinputdialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QKeyEvent* param1)
///
void k_nameandurlinputdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QCloseEvent*
///
void k_nameandurlinputdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QCloseEvent*
///
void k_nameandurlinputdialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QCloseEvent* param1)
///
void k_nameandurlinputdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QShowEvent*
///
void k_nameandurlinputdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QShowEvent*
///
void k_nameandurlinputdialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QShowEvent* param1)
///
void k_nameandurlinputdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QResizeEvent*
///
void k_nameandurlinputdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QResizeEvent*
///
void k_nameandurlinputdialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QResizeEvent* param1)
///
void k_nameandurlinputdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QContextMenuEvent*
///
void k_nameandurlinputdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QContextMenuEvent*
///
void k_nameandurlinputdialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QContextMenuEvent* param1)
///
void k_nameandurlinputdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_nameandurlinputdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_nameandurlinputdialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2)
///
void k_nameandurlinputdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 int
///
int32_t k_nameandurlinputdialog_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 int
///
int32_t k_nameandurlinputdialog_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self, int param1)
///
void k_nameandurlinputdialog_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QPaintEngine* k_nameandurlinputdialog_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QPaintEngine* k_nameandurlinputdialog_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QPaintEngine* func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
bool k_nameandurlinputdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
bool k_nameandurlinputdialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self, QEvent* event)
///
void k_nameandurlinputdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMouseEvent* event)
///
void k_nameandurlinputdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMouseEvent* event)
///
void k_nameandurlinputdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMouseEvent* event)
///
void k_nameandurlinputdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMouseEvent*
///
void k_nameandurlinputdialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMouseEvent* event)
///
void k_nameandurlinputdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QWheelEvent*
///
void k_nameandurlinputdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QWheelEvent*
///
void k_nameandurlinputdialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QWheelEvent* event)
///
void k_nameandurlinputdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QKeyEvent*
///
void k_nameandurlinputdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QKeyEvent*
///
void k_nameandurlinputdialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QKeyEvent* event)
///
void k_nameandurlinputdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QFocusEvent*
///
void k_nameandurlinputdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QFocusEvent*
///
void k_nameandurlinputdialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QFocusEvent* event)
///
void k_nameandurlinputdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QFocusEvent*
///
void k_nameandurlinputdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QFocusEvent*
///
void k_nameandurlinputdialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QFocusEvent* event)
///
void k_nameandurlinputdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEnterEvent*
///
void k_nameandurlinputdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEnterEvent*
///
void k_nameandurlinputdialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QEnterEvent* event)
///
void k_nameandurlinputdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
void k_nameandurlinputdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
void k_nameandurlinputdialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QEvent* event)
///
void k_nameandurlinputdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QPaintEvent*
///
void k_nameandurlinputdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QPaintEvent*
///
void k_nameandurlinputdialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QPaintEvent* event)
///
void k_nameandurlinputdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMoveEvent*
///
void k_nameandurlinputdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QMoveEvent*
///
void k_nameandurlinputdialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMoveEvent* event)
///
void k_nameandurlinputdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QTabletEvent*
///
void k_nameandurlinputdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QTabletEvent*
///
void k_nameandurlinputdialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QTabletEvent* event)
///
void k_nameandurlinputdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QActionEvent*
///
void k_nameandurlinputdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QActionEvent*
///
void k_nameandurlinputdialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QActionEvent* event)
///
void k_nameandurlinputdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragEnterEvent*
///
void k_nameandurlinputdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragEnterEvent*
///
void k_nameandurlinputdialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QDragEnterEvent* event)
///
void k_nameandurlinputdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragMoveEvent*
///
void k_nameandurlinputdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragMoveEvent*
///
void k_nameandurlinputdialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QDragMoveEvent* event)
///
void k_nameandurlinputdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragLeaveEvent*
///
void k_nameandurlinputdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDragLeaveEvent*
///
void k_nameandurlinputdialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QDragLeaveEvent* event)
///
void k_nameandurlinputdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDropEvent*
///
void k_nameandurlinputdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QDropEvent*
///
void k_nameandurlinputdialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QDropEvent* event)
///
void k_nameandurlinputdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QHideEvent*
///
void k_nameandurlinputdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QHideEvent*
///
void k_nameandurlinputdialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QHideEvent* event)
///
void k_nameandurlinputdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_nameandurlinputdialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_nameandurlinputdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_nameandurlinputdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QEvent*
///
void k_nameandurlinputdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QEvent*
///
void k_nameandurlinputdialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QEvent* param1)
///
void k_nameandurlinputdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_nameandurlinputdialog_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_nameandurlinputdialog_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_nameandurlinputdialog_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param painter QPainter*
///
void k_nameandurlinputdialog_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param painter QPainter*
///
void k_nameandurlinputdialog_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QPainter* painter)
///
void k_nameandurlinputdialog_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param offset QPoint*
///
QPaintDevice* k_nameandurlinputdialog_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param offset QPoint*
///
QPaintDevice* k_nameandurlinputdialog_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QPaintDevice* func(KNameAndUrlInputDialog* self, QPoint* offset)
///
void k_nameandurlinputdialog_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QPainter* k_nameandurlinputdialog_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QPainter* k_nameandurlinputdialog_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QPainter* func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QInputMethodEvent*
///
void k_nameandurlinputdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QInputMethodEvent*
///
void k_nameandurlinputdialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QInputMethodEvent* param1)
///
void k_nameandurlinputdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_nameandurlinputdialog_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_nameandurlinputdialog_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QVariant* func(KNameAndUrlInputDialog* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nameandurlinputdialog_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param next bool
///
bool k_nameandurlinputdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param next bool
///
bool k_nameandurlinputdialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self, bool next)
///
void k_nameandurlinputdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QTimerEvent*
///
void k_nameandurlinputdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QTimerEvent*
///
void k_nameandurlinputdialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QTimerEvent* event)
///
void k_nameandurlinputdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QChildEvent*
///
void k_nameandurlinputdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QChildEvent*
///
void k_nameandurlinputdialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QChildEvent* event)
///
void k_nameandurlinputdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
void k_nameandurlinputdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param event QEvent*
///
void k_nameandurlinputdialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QEvent* event)
///
void k_nameandurlinputdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
void k_nameandurlinputdialog_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
void k_nameandurlinputdialog_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMetaMethod* signal)
///
void k_nameandurlinputdialog_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
void k_nameandurlinputdialog_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
void k_nameandurlinputdialog_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QMetaMethod* signal)
///
void k_nameandurlinputdialog_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QWidget*
///
void k_nameandurlinputdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param param1 QWidget*
///
void k_nameandurlinputdialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, QWidget* param1)
///
void k_nameandurlinputdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
///
bool k_nameandurlinputdialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QObject* k_nameandurlinputdialog_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
QObject* k_nameandurlinputdialog_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback QObject* func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
///
int32_t k_nameandurlinputdialog_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self)
///
void k_nameandurlinputdialog_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal const char*
///
int32_t k_nameandurlinputdialog_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal const char*
///
int32_t k_nameandurlinputdialog_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback int32_t func(KNameAndUrlInputDialog* self, const char* signal)
///
void k_nameandurlinputdialog_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
bool k_nameandurlinputdialog_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param signal QMetaMethod*
///
bool k_nameandurlinputdialog_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback bool func(KNameAndUrlInputDialog* self, QMetaMethod* signal)
///
void k_nameandurlinputdialog_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_nameandurlinputdialog_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_nameandurlinputdialog_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNameAndUrlInputDialog*
/// @param callback double func(KNameAndUrlInputDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_nameandurlinputdialog_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNameAndUrlInputDialog*
/// @param callback void func(KNameAndUrlInputDialog* self, const char* objectName)
///
void k_nameandurlinputdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knameandurlinputdialog.html#dtor.KNameAndUrlInputDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KNameAndUrlInputDialog*
///
void k_nameandurlinputdialog_delete(void* self);

#endif
