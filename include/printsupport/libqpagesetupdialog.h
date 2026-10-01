#pragma once
#ifndef PRINTSUPPORT_LIBQPAGESETUPDIALOG_H
#define PRINTSUPPORT_LIBQPAGESETUPDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html)

/// q_pagesetupdialog_new constructs a new QPageSetupDialog object.
///
/// @param parent QWidget*
///
QPageSetupDialog* q_pagesetupdialog_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html)

/// q_pagesetupdialog_new2 constructs a new QPageSetupDialog object.
///
/// @param printer QPrinter*
///
QPageSetupDialog* q_pagesetupdialog_new2(void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html)

/// q_pagesetupdialog_new3 constructs a new QPageSetupDialog object.
///
QPageSetupDialog* q_pagesetupdialog_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html)

/// q_pagesetupdialog_new4 constructs a new QPageSetupDialog object.
///
/// @param printer QPrinter*
/// @param parent QWidget*
///
QPageSetupDialog* q_pagesetupdialog_new4(void* printer, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPageSetupDialog*
///
const QMetaObject* q_pagesetupdialog_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPageSetupDialog*
/// @param callback const QMetaObject* func(const QPageSetupDialog* self)
///
void q_pagesetupdialog_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPageSetupDialog*
///
const QMetaObject* q_pagesetupdialog_super_meta_object(const void* self);

/// @param self QPageSetupDialog*
/// @param param1 const char*
///
void* q_pagesetupdialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPageSetupDialog*
/// @param callback void* func(QPageSetupDialog* self, const char* param1)
///
void q_pagesetupdialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPageSetupDialog*
/// @param param1 const char*
///
void* q_pagesetupdialog_super_metacast(void* self, const char* param1);

/// @param self QPageSetupDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pagesetupdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pagesetupdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPageSetupDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pagesetupdialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pagesetupdialog_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#exec)
///
/// @param self QPageSetupDialog*
///
int32_t q_pagesetupdialog_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#exec)
///
/// Allows for overriding the related default method
///
/// @param self QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_exec(void* self, int32_t (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#exec)
///
/// Base class method implementation
///
/// @param self QPageSetupDialog*
///
int32_t q_pagesetupdialog_super_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#done)
///
/// @param self QPageSetupDialog*
/// @param result int
///
void q_pagesetupdialog_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#done)
///
/// Allows for overriding the related default method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, int result)
///
void q_pagesetupdialog_on_done(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#done)
///
/// Base class method implementation
///
/// @param self QPageSetupDialog*
/// @param result int
///
void q_pagesetupdialog_super_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#printer)
///
/// @param self QPageSetupDialog*
///
QPrinter* q_pagesetupdialog_printer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pagesetupdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pagesetupdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_result(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QPageSetupDialog*
/// @param sizeGripEnabled bool
///
void q_pagesetupdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_size_grip_enabled(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QPageSetupDialog*
/// @param modal bool
///
void q_pagesetupdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QPageSetupDialog*
/// @param r int
///
void q_pagesetupdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QPageSetupDialog*
/// @param result int
///
void q_pagesetupdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, int result)
///
void q_pagesetupdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QPageSetupDialog*
///
QPaintDevice* q_pagesetupdialog_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QPageSetupDialog object
///
/// @param _qpaintdevice QPaintDevice*
///
QPageSetupDialog* q_pagesetupdialog_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QPageSetupDialog*
///
uintptr_t q_pagesetupdialog_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QPageSetupDialog*
///
uintptr_t q_pagesetupdialog_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QPageSetupDialog*
///
uintptr_t q_pagesetupdialog_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QPageSetupDialog*
///
QStyle* q_pagesetupdialog_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPageSetupDialog*
/// @param style QStyle*
///
void q_pagesetupdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QPageSetupDialog*
///
/// @return enum Qt__WindowModality
///
int32_t q_pagesetupdialog_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPageSetupDialog*
/// @param windowModality enum Qt__WindowModality
///
void q_pagesetupdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
///
bool q_pagesetupdialog_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPageSetupDialog*
/// @param enabled bool
///
void q_pagesetupdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPageSetupDialog*
/// @param disabled bool
///
void q_pagesetupdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPageSetupDialog*
/// @param windowModified bool
///
void q_pagesetupdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QPageSetupDialog*
///
QRect* q_pagesetupdialog_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QPageSetupDialog*
///
const QRect* q_pagesetupdialog_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QPageSetupDialog*
///
QRect* q_pagesetupdialog_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QPageSetupDialog*
///
QPoint* q_pagesetupdialog_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QPageSetupDialog*
///
QRect* q_pagesetupdialog_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QPageSetupDialog*
///
QRect* q_pagesetupdialog_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QPageSetupDialog*
///
QRegion* q_pagesetupdialog_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPageSetupDialog*
/// @param minimumSize QSize*
///
void q_pagesetupdialog_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPageSetupDialog*
/// @param minw int
/// @param minh int
///
void q_pagesetupdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPageSetupDialog*
/// @param maximumSize QSize*
///
void q_pagesetupdialog_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPageSetupDialog*
/// @param maxw int
/// @param maxh int
///
void q_pagesetupdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPageSetupDialog*
/// @param minw int
///
void q_pagesetupdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPageSetupDialog*
/// @param minh int
///
void q_pagesetupdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPageSetupDialog*
/// @param maxw int
///
void q_pagesetupdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPageSetupDialog*
/// @param maxh int
///
void q_pagesetupdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPageSetupDialog*
/// @param sizeIncrement QSize*
///
void q_pagesetupdialog_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPageSetupDialog*
/// @param w int
/// @param h int
///
void q_pagesetupdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPageSetupDialog*
/// @param baseSize QSize*
///
void q_pagesetupdialog_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPageSetupDialog*
/// @param basew int
/// @param baseh int
///
void q_pagesetupdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPageSetupDialog*
/// @param fixedSize QSize*
///
void q_pagesetupdialog_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPageSetupDialog*
/// @param w int
/// @param h int
///
void q_pagesetupdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPageSetupDialog*
/// @param w int
///
void q_pagesetupdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPageSetupDialog*
/// @param h int
///
void q_pagesetupdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPointF*
///
QPointF* q_pagesetupdialog_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPoint*
///
QPoint* q_pagesetupdialog_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPointF*
///
QPointF* q_pagesetupdialog_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPoint*
///
QPoint* q_pagesetupdialog_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPointF*
///
QPointF* q_pagesetupdialog_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPoint*
///
QPoint* q_pagesetupdialog_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPointF*
///
QPointF* q_pagesetupdialog_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPageSetupDialog*
/// @param param1 QPoint*
///
QPoint* q_pagesetupdialog_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_pagesetupdialog_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_pagesetupdialog_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_pagesetupdialog_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_pagesetupdialog_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QPageSetupDialog*
///
const QPalette* q_pagesetupdialog_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPageSetupDialog*
/// @param palette QPalette*
///
void q_pagesetupdialog_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPageSetupDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_pagesetupdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QPageSetupDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t q_pagesetupdialog_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPageSetupDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_pagesetupdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QPageSetupDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t q_pagesetupdialog_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QPageSetupDialog*
///
const QFont* q_pagesetupdialog_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPageSetupDialog*
/// @param font QFont*
///
void q_pagesetupdialog_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QPageSetupDialog*
///
QFontMetrics* q_pagesetupdialog_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QPageSetupDialog*
///
QFontInfo* q_pagesetupdialog_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QPageSetupDialog*
///
QCursor* q_pagesetupdialog_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPageSetupDialog*
/// @param cursor QCursor*
///
void q_pagesetupdialog_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPageSetupDialog*
/// @param enable bool
///
void q_pagesetupdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPageSetupDialog*
/// @param enable bool
///
void q_pagesetupdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPageSetupDialog*
/// @param mask QBitmap*
///
void q_pagesetupdialog_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPageSetupDialog*
/// @param mask QRegion*
///
void q_pagesetupdialog_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QPageSetupDialog*
///
QRegion* q_pagesetupdialog_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param target QPaintDevice*
///
void q_pagesetupdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param painter QPainter*
///
void q_pagesetupdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPageSetupDialog*
///
QPixmap* q_pagesetupdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QPageSetupDialog*
///
QGraphicsEffect* q_pagesetupdialog_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPageSetupDialog*
/// @param effect QGraphicsEffect*
///
void q_pagesetupdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPageSetupDialog*
/// @param type enum Qt__GestureType
///
void q_pagesetupdialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPageSetupDialog*
/// @param type enum Qt__GestureType
///
void q_pagesetupdialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPageSetupDialog*
/// @param windowTitle const char*
///
void q_pagesetupdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPageSetupDialog*
/// @param styleSheet const char*
///
void q_pagesetupdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPageSetupDialog*
/// @param icon QIcon*
///
void q_pagesetupdialog_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QPageSetupDialog*
///
QIcon* q_pagesetupdialog_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPageSetupDialog*
/// @param windowIconText const char*
///
void q_pagesetupdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPageSetupDialog*
/// @param windowRole const char*
///
void q_pagesetupdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPageSetupDialog*
/// @param filePath const char*
///
void q_pagesetupdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPageSetupDialog*
/// @param level double
///
void q_pagesetupdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QPageSetupDialog*
///
double q_pagesetupdialog_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPageSetupDialog*
/// @param toolTip const char*
///
void q_pagesetupdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPageSetupDialog*
/// @param msec int
///
void q_pagesetupdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPageSetupDialog*
/// @param statusTip const char*
///
void q_pagesetupdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPageSetupDialog*
/// @param whatsThis const char*
///
void q_pagesetupdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPageSetupDialog*
/// @param name const char*
///
void q_pagesetupdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPageSetupDialog*
/// @param description const char*
///
void q_pagesetupdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPageSetupDialog*
/// @param direction enum Qt__LayoutDirection
///
void q_pagesetupdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QPageSetupDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_pagesetupdialog_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPageSetupDialog*
/// @param locale QLocale*
///
void q_pagesetupdialog_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QPageSetupDialog*
///
QLocale* q_pagesetupdialog_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPageSetupDialog*
/// @param reason enum Qt__FocusReason
///
void q_pagesetupdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QPageSetupDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_pagesetupdialog_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPageSetupDialog*
/// @param policy enum Qt__FocusPolicy
///
void q_pagesetupdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_pagesetupdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPageSetupDialog*
/// @param focusProxy QWidget*
///
void q_pagesetupdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QPageSetupDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_pagesetupdialog_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPageSetupDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_pagesetupdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPageSetupDialog*
/// @param param1 QCursor*
///
void q_pagesetupdialog_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPageSetupDialog*
/// @param key QKeySequence*
///
int32_t q_pagesetupdialog_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPageSetupDialog*
/// @param id int
///
void q_pagesetupdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPageSetupDialog*
/// @param id int
///
void q_pagesetupdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPageSetupDialog*
/// @param id int
///
void q_pagesetupdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_pagesetupdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_pagesetupdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPageSetupDialog*
/// @param enable bool
///
void q_pagesetupdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QPageSetupDialog*
///
QGraphicsProxyWidget* q_pagesetupdialog_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPageSetupDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pagesetupdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPageSetupDialog*
/// @param param1 QRect*
///
void q_pagesetupdialog_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPageSetupDialog*
/// @param param1 QRegion*
///
void q_pagesetupdialog_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPageSetupDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pagesetupdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPageSetupDialog*
/// @param param1 QRect*
///
void q_pagesetupdialog_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPageSetupDialog*
/// @param param1 QRegion*
///
void q_pagesetupdialog_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPageSetupDialog*
/// @param hidden bool
///
void q_pagesetupdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPageSetupDialog*
///
bool q_pagesetupdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPageSetupDialog*
/// @param param1 QWidget*
///
void q_pagesetupdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPageSetupDialog*
/// @param x int
/// @param y int
///
void q_pagesetupdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPageSetupDialog*
/// @param param1 QPoint*
///
void q_pagesetupdialog_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPageSetupDialog*
/// @param w int
/// @param h int
///
void q_pagesetupdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPageSetupDialog*
/// @param param1 QSize*
///
void q_pagesetupdialog_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPageSetupDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pagesetupdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPageSetupDialog*
/// @param geometry QRect*
///
void q_pagesetupdialog_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPageSetupDialog*
///
char* q_pagesetupdialog_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPageSetupDialog*
/// @param geometry char*
///
bool q_pagesetupdialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QPageSetupDialog*
/// @param param1 QWidget*
///
bool q_pagesetupdialog_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QPageSetupDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_pagesetupdialog_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPageSetupDialog*
/// @param state flag of enum Qt__WindowState
///
void q_pagesetupdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPageSetupDialog*
/// @param state flag of enum Qt__WindowState
///
void q_pagesetupdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QPageSetupDialog*
///
QSizePolicy* q_pagesetupdialog_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPageSetupDialog*
/// @param sizePolicy QSizePolicy*
///
void q_pagesetupdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPageSetupDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_pagesetupdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QPageSetupDialog*
///
QRegion* q_pagesetupdialog_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPageSetupDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_pagesetupdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPageSetupDialog*
/// @param margins QMargins*
///
void q_pagesetupdialog_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QPageSetupDialog*
///
QMargins* q_pagesetupdialog_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QPageSetupDialog*
///
QRect* q_pagesetupdialog_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QPageSetupDialog*
///
QLayout* q_pagesetupdialog_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPageSetupDialog*
/// @param layout QLayout*
///
void q_pagesetupdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPageSetupDialog*
/// @param parent QWidget*
///
void q_pagesetupdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPageSetupDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_pagesetupdialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPageSetupDialog*
/// @param dx int
/// @param dy int
///
void q_pagesetupdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPageSetupDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_pagesetupdialog_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPageSetupDialog*
/// @param on bool
///
void q_pagesetupdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPageSetupDialog*
/// @param action QAction*
///
void q_pagesetupdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPageSetupDialog*
/// @param actions libqt_list of QAction*
///
void q_pagesetupdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPageSetupDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_pagesetupdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPageSetupDialog*
/// @param before QAction*
/// @param action QAction*
///
void q_pagesetupdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPageSetupDialog*
/// @param action QAction*
///
void q_pagesetupdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QPageSetupDialog*
///
/// @return libqt_list of QAction*
///
libqt_list q_pagesetupdialog_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPageSetupDialog*
/// @param text const char*
///
QAction* q_pagesetupdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPageSetupDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_pagesetupdialog_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPageSetupDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_pagesetupdialog_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPageSetupDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_pagesetupdialog_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QPageSetupDialog*
///
QWidget* q_pagesetupdialog_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPageSetupDialog*
/// @param type flag of enum Qt__WindowType
///
void q_pagesetupdialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QPageSetupDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_pagesetupdialog_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPageSetupDialog*
/// @param param1 enum Qt__WindowType
///
void q_pagesetupdialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPageSetupDialog*
/// @param type flag of enum Qt__WindowType
///
void q_pagesetupdialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QPageSetupDialog*
///
/// @return enum Qt__WindowType
///
int32_t q_pagesetupdialog_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_pagesetupdialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPageSetupDialog*
/// @param x int
/// @param y int
///
QWidget* q_pagesetupdialog_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPageSetupDialog*
/// @param p QPoint*
///
QWidget* q_pagesetupdialog_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPageSetupDialog*
/// @param p QPointF*
///
QWidget* q_pagesetupdialog_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPageSetupDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void q_pagesetupdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QPageSetupDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_pagesetupdialog_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QPageSetupDialog*
///
void q_pagesetupdialog_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QPageSetupDialog*
/// @param child QWidget*
///
bool q_pagesetupdialog_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPageSetupDialog*
/// @param enabled bool
///
void q_pagesetupdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QPageSetupDialog*
///
QBackingStore* q_pagesetupdialog_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QPageSetupDialog*
///
QWindow* q_pagesetupdialog_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QPageSetupDialog*
///
QScreen* q_pagesetupdialog_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPageSetupDialog*
/// @param screen QScreen*
///
void q_pagesetupdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_pagesetupdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPageSetupDialog*
/// @param title const char*
///
void q_pagesetupdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, const char* title)
///
void q_pagesetupdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPageSetupDialog*
/// @param icon QIcon*
///
void q_pagesetupdialog_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QIcon* icon)
///
void q_pagesetupdialog_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPageSetupDialog*
/// @param iconText const char*
///
void q_pagesetupdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, const char* iconText)
///
void q_pagesetupdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPageSetupDialog*
/// @param pos QPoint*
///
void q_pagesetupdialog_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QPoint* pos)
///
void q_pagesetupdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QPageSetupDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_pagesetupdialog_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPageSetupDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_pagesetupdialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_pagesetupdialog_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_pagesetupdialog_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_pagesetupdialog_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_pagesetupdialog_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_pagesetupdialog_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPageSetupDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_pagesetupdialog_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPageSetupDialog*
/// @param rectangle QRect*
///
QPixmap* q_pagesetupdialog_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPageSetupDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_pagesetupdialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPageSetupDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_pagesetupdialog_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPageSetupDialog*
/// @param id int
/// @param enable bool
///
void q_pagesetupdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPageSetupDialog*
/// @param id int
/// @param enable bool
///
void q_pagesetupdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPageSetupDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_pagesetupdialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPageSetupDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_pagesetupdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_pagesetupdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_pagesetupdialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPageSetupDialog*
///
const char* q_pagesetupdialog_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPageSetupDialog*
/// @param name const char*
///
void q_pagesetupdialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPageSetupDialog*
/// @param b bool
///
bool q_pagesetupdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPageSetupDialog*
///
QThread* q_pagesetupdialog_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPageSetupDialog*
/// @param thread QThread*
///
bool q_pagesetupdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPageSetupDialog*
/// @param interval int
///
int32_t q_pagesetupdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPageSetupDialog*
/// @param time int64_t of nanoseconds
///
int32_t q_pagesetupdialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPageSetupDialog*
/// @param id int
///
void q_pagesetupdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPageSetupDialog*
/// @param id enum Qt__TimerId
///
void q_pagesetupdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPageSetupDialog*
///
/// @return libqt_list of QObject*
///
libqt_list q_pagesetupdialog_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPageSetupDialog*
/// @param filterObj QObject*
///
void q_pagesetupdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPageSetupDialog*
/// @param obj QObject*
///
void q_pagesetupdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pagesetupdialog_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pagesetupdialog_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPageSetupDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pagesetupdialog_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pagesetupdialog_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pagesetupdialog_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
/// @param receiver QObject*
///
bool q_pagesetupdialog_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pagesetupdialog_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPageSetupDialog*
///
void q_pagesetupdialog_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPageSetupDialog*
///
void q_pagesetupdialog_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPageSetupDialog*
/// @param name const char*
/// @param value QVariant*
///
bool q_pagesetupdialog_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPageSetupDialog*
/// @param name const char*
///
QVariant* q_pagesetupdialog_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPageSetupDialog*
///
const char** q_pagesetupdialog_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPageSetupDialog*
///
QBindingStorage* q_pagesetupdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPageSetupDialog*
///
const QBindingStorage* q_pagesetupdialog_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPageSetupDialog*
///
QObject* q_pagesetupdialog_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPageSetupDialog*
/// @param classname const char*
///
bool q_pagesetupdialog_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPageSetupDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pagesetupdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPageSetupDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pagesetupdialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_pagesetupdialog_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pagesetupdialog_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPageSetupDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pagesetupdialog_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
/// @param signal const char*
///
bool q_pagesetupdialog_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pagesetupdialog_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pagesetupdialog_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPageSetupDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pagesetupdialog_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPageSetupDialog*
/// @param param1 QObject*
///
void q_pagesetupdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QObject* param1)
///
void q_pagesetupdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QPageSetupDialog*
///
double q_pagesetupdialog_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPageSetupDialog*
///
double q_pagesetupdialog_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pagesetupdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_pagesetupdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param visible bool
///
void q_pagesetupdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param visible bool
///
void q_pagesetupdialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, bool visible)
///
void q_pagesetupdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_super_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QSize* func(QPageSetupDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pagesetupdialog_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QSize* q_pagesetupdialog_super_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QSize* func(QPageSetupDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pagesetupdialog_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_open(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_accept(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_reject(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QKeyEvent*
///
void q_pagesetupdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QKeyEvent*
///
void q_pagesetupdialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QKeyEvent* param1)
///
void q_pagesetupdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QCloseEvent*
///
void q_pagesetupdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QCloseEvent*
///
void q_pagesetupdialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QCloseEvent* param1)
///
void q_pagesetupdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QShowEvent*
///
void q_pagesetupdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QShowEvent*
///
void q_pagesetupdialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QShowEvent* param1)
///
void q_pagesetupdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QResizeEvent*
///
void q_pagesetupdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QResizeEvent*
///
void q_pagesetupdialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QResizeEvent* param1)
///
void q_pagesetupdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QContextMenuEvent*
///
void q_pagesetupdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QContextMenuEvent*
///
void q_pagesetupdialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QContextMenuEvent* param1)
///
void q_pagesetupdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_pagesetupdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_pagesetupdialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self, QObject* param1, QEvent* param2)
///
void q_pagesetupdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 int
///
int32_t q_pagesetupdialog_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 int
///
int32_t q_pagesetupdialog_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self, int param1)
///
void q_pagesetupdialog_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
bool q_pagesetupdialog_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QPaintEngine* q_pagesetupdialog_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QPaintEngine* q_pagesetupdialog_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QPaintEngine* func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
bool q_pagesetupdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
bool q_pagesetupdialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self, QEvent* event)
///
void q_pagesetupdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMouseEvent* event)
///
void q_pagesetupdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMouseEvent* event)
///
void q_pagesetupdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMouseEvent* event)
///
void q_pagesetupdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMouseEvent*
///
void q_pagesetupdialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMouseEvent* event)
///
void q_pagesetupdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QWheelEvent*
///
void q_pagesetupdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QWheelEvent*
///
void q_pagesetupdialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QWheelEvent* event)
///
void q_pagesetupdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QKeyEvent*
///
void q_pagesetupdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QKeyEvent*
///
void q_pagesetupdialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QKeyEvent* event)
///
void q_pagesetupdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QFocusEvent*
///
void q_pagesetupdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QFocusEvent*
///
void q_pagesetupdialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QFocusEvent* event)
///
void q_pagesetupdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QFocusEvent*
///
void q_pagesetupdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QFocusEvent*
///
void q_pagesetupdialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QFocusEvent* event)
///
void q_pagesetupdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEnterEvent*
///
void q_pagesetupdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEnterEvent*
///
void q_pagesetupdialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QEnterEvent* event)
///
void q_pagesetupdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
void q_pagesetupdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
void q_pagesetupdialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QEvent* event)
///
void q_pagesetupdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QPaintEvent*
///
void q_pagesetupdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QPaintEvent*
///
void q_pagesetupdialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QPaintEvent* event)
///
void q_pagesetupdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMoveEvent*
///
void q_pagesetupdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QMoveEvent*
///
void q_pagesetupdialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMoveEvent* event)
///
void q_pagesetupdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QTabletEvent*
///
void q_pagesetupdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QTabletEvent*
///
void q_pagesetupdialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QTabletEvent* event)
///
void q_pagesetupdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QActionEvent*
///
void q_pagesetupdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QActionEvent*
///
void q_pagesetupdialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QActionEvent* event)
///
void q_pagesetupdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragEnterEvent*
///
void q_pagesetupdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragEnterEvent*
///
void q_pagesetupdialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QDragEnterEvent* event)
///
void q_pagesetupdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragMoveEvent*
///
void q_pagesetupdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragMoveEvent*
///
void q_pagesetupdialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QDragMoveEvent* event)
///
void q_pagesetupdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragLeaveEvent*
///
void q_pagesetupdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDragLeaveEvent*
///
void q_pagesetupdialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QDragLeaveEvent* event)
///
void q_pagesetupdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDropEvent*
///
void q_pagesetupdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QDropEvent*
///
void q_pagesetupdialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QDropEvent* event)
///
void q_pagesetupdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QHideEvent*
///
void q_pagesetupdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QHideEvent*
///
void q_pagesetupdialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QHideEvent* event)
///
void q_pagesetupdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_pagesetupdialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_pagesetupdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_pagesetupdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QEvent*
///
void q_pagesetupdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QEvent*
///
void q_pagesetupdialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QEvent* param1)
///
void q_pagesetupdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pagesetupdialog_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pagesetupdialog_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_pagesetupdialog_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param painter QPainter*
///
void q_pagesetupdialog_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param painter QPainter*
///
void q_pagesetupdialog_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QPainter* painter)
///
void q_pagesetupdialog_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param offset QPoint*
///
QPaintDevice* q_pagesetupdialog_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param offset QPoint*
///
QPaintDevice* q_pagesetupdialog_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QPaintDevice* func(QPageSetupDialog* self, QPoint* offset)
///
void q_pagesetupdialog_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QPainter* q_pagesetupdialog_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QPainter* q_pagesetupdialog_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QPainter* func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QInputMethodEvent*
///
void q_pagesetupdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QInputMethodEvent*
///
void q_pagesetupdialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QInputMethodEvent* param1)
///
void q_pagesetupdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_pagesetupdialog_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_pagesetupdialog_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QVariant* func(QPageSetupDialog* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pagesetupdialog_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param next bool
///
bool q_pagesetupdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param next bool
///
bool q_pagesetupdialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self, bool next)
///
void q_pagesetupdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QTimerEvent*
///
void q_pagesetupdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QTimerEvent*
///
void q_pagesetupdialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QTimerEvent* event)
///
void q_pagesetupdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QChildEvent*
///
void q_pagesetupdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QChildEvent*
///
void q_pagesetupdialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QChildEvent* event)
///
void q_pagesetupdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
void q_pagesetupdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param event QEvent*
///
void q_pagesetupdialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QEvent* event)
///
void q_pagesetupdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param signal QMetaMethod*
///
void q_pagesetupdialog_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param signal QMetaMethod*
///
void q_pagesetupdialog_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMetaMethod* signal)
///
void q_pagesetupdialog_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param signal QMetaMethod*
///
void q_pagesetupdialog_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param signal QMetaMethod*
///
void q_pagesetupdialog_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QMetaMethod* signal)
///
void q_pagesetupdialog_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QWidget*
///
void q_pagesetupdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param param1 QWidget*
///
void q_pagesetupdialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, QWidget* param1)
///
void q_pagesetupdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
bool q_pagesetupdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
bool q_pagesetupdialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPageSetupDialog*
///
bool q_pagesetupdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPageSetupDialog*
///
bool q_pagesetupdialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QObject* q_pagesetupdialog_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
QObject* q_pagesetupdialog_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback QObject* func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
///
int32_t q_pagesetupdialog_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self)
///
void q_pagesetupdialog_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param signal const char*
///
int32_t q_pagesetupdialog_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param signal const char*
///
int32_t q_pagesetupdialog_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback int32_t func(QPageSetupDialog* self, const char* signal)
///
void q_pagesetupdialog_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param signal QMetaMethod*
///
bool q_pagesetupdialog_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param signal QMetaMethod*
///
bool q_pagesetupdialog_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback bool func(QPageSetupDialog* self, QMetaMethod* signal)
///
void q_pagesetupdialog_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pagesetupdialog_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pagesetupdialog_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPageSetupDialog*
/// @param callback double func(QPageSetupDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_pagesetupdialog_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPageSetupDialog*
/// @param callback void func(QPageSetupDialog* self, const char* objectName)
///
void q_pagesetupdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpagesetupdialog.html#dtor.QPageSetupDialog)
///
/// Delete this object from C++ memory.
///
/// @param self QPageSetupDialog*
///
void q_pagesetupdialog_delete(void* self);

#endif
