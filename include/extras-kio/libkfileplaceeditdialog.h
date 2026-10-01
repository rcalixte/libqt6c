#pragma once
#ifndef EXTRAS_KIO_LIBKFILEPLACEEDITDIALOG_H
#define EXTRAS_KIO_LIBKFILEPLACEEDITDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html)

/// k_fileplaceeditdialog_new constructs a new KFilePlaceEditDialog object.
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
///
KFilePlaceEditDialog* k_fileplaceeditdialog_new(bool allowGlobal, const void* url, const char* label, const char* icon, bool isAddingNewPlace);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html)

/// k_fileplaceeditdialog_new2 constructs a new KFilePlaceEditDialog object.
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
/// @param appLocal bool
///
KFilePlaceEditDialog* k_fileplaceeditdialog_new2(bool allowGlobal, const void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html)

/// k_fileplaceeditdialog_new3 constructs a new KFilePlaceEditDialog object.
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
/// @param appLocal bool
/// @param iconSize int
///
KFilePlaceEditDialog* k_fileplaceeditdialog_new3(bool allowGlobal, const void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal, int iconSize);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html)

/// k_fileplaceeditdialog_new4 constructs a new KFilePlaceEditDialog object.
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
/// @param appLocal bool
/// @param iconSize int
/// @param parent QWidget*
///
KFilePlaceEditDialog* k_fileplaceeditdialog_new4(bool allowGlobal, const void* url, const char* label, const char* icon, bool isAddingNewPlace, bool appLocal, int iconSize, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KFilePlaceEditDialog*
///
const QMetaObject* k_fileplaceeditdialog_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlaceEditDialog*
/// @param callback const QMetaObject* func(const KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KFilePlaceEditDialog*
///
const QMetaObject* k_fileplaceeditdialog_super_meta_object(const void* self);

/// @param self KFilePlaceEditDialog*
/// @param param1 const char*
///
void* k_fileplaceeditdialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void* func(KFilePlaceEditDialog* self, const char* param1)
///
void k_fileplaceeditdialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFilePlaceEditDialog*
/// @param param1 const char*
///
void* k_fileplaceeditdialog_super_metacast(void* self, const char* param1);

/// @param self KFilePlaceEditDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplaceeditdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_fileplaceeditdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFilePlaceEditDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplaceeditdialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_fileplaceeditdialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#getInformation)
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
/// @param appLocal bool*
/// @param iconSize int
///
bool k_fileplaceeditdialog_get_information(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool* appLocal, int iconSize);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#url)
///
/// @param self const KFilePlaceEditDialog*
///
QUrl* k_fileplaceeditdialog_url(const void* self);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_label(const void* self);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#applicationLocal)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_application_local(const void* self);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#urlChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 const char*
///
void k_fileplaceeditdialog_url_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_fileplaceeditdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_fileplaceeditdialog_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#getInformation)
///
/// @param allowGlobal bool
/// @param url QUrl*
/// @param label const char*
/// @param icon const char*
/// @param isAddingNewPlace bool
/// @param appLocal bool*
/// @param iconSize int
/// @param parent QWidget*
///
bool k_fileplaceeditdialog_get_information8(bool allowGlobal, void* url, const char* label, const char* icon, bool isAddingNewPlace, bool* appLocal, int iconSize, void* parent);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_result(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KFilePlaceEditDialog*
/// @param sizeGripEnabled bool
///
void k_fileplaceeditdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_size_grip_enabled(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KFilePlaceEditDialog*
/// @param modal bool
///
void k_fileplaceeditdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KFilePlaceEditDialog*
/// @param r int
///
void k_fileplaceeditdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KFilePlaceEditDialog*
/// @param result int
///
void k_fileplaceeditdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, int result)
///
void k_fileplaceeditdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KFilePlaceEditDialog*
///
QPaintDevice* k_fileplaceeditdialog_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KFilePlaceEditDialog object
///
/// @param _qpaintdevice QPaintDevice*
///
KFilePlaceEditDialog* k_fileplaceeditdialog_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KFilePlaceEditDialog*
///
uintptr_t k_fileplaceeditdialog_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KFilePlaceEditDialog*
///
uintptr_t k_fileplaceeditdialog_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KFilePlaceEditDialog*
///
uintptr_t k_fileplaceeditdialog_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KFilePlaceEditDialog*
///
QStyle* k_fileplaceeditdialog_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KFilePlaceEditDialog*
/// @param style QStyle*
///
void k_fileplaceeditdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_fileplaceeditdialog_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KFilePlaceEditDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_fileplaceeditdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
///
bool k_fileplaceeditdialog_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KFilePlaceEditDialog*
/// @param enabled bool
///
void k_fileplaceeditdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KFilePlaceEditDialog*
/// @param disabled bool
///
void k_fileplaceeditdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KFilePlaceEditDialog*
/// @param windowModified bool
///
void k_fileplaceeditdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KFilePlaceEditDialog*
///
QRect* k_fileplaceeditdialog_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KFilePlaceEditDialog*
///
const QRect* k_fileplaceeditdialog_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KFilePlaceEditDialog*
///
QRect* k_fileplaceeditdialog_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KFilePlaceEditDialog*
///
QPoint* k_fileplaceeditdialog_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KFilePlaceEditDialog*
///
QRect* k_fileplaceeditdialog_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KFilePlaceEditDialog*
///
QRect* k_fileplaceeditdialog_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KFilePlaceEditDialog*
///
QRegion* k_fileplaceeditdialog_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFilePlaceEditDialog*
/// @param minimumSize QSize*
///
void k_fileplaceeditdialog_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFilePlaceEditDialog*
/// @param minw int
/// @param minh int
///
void k_fileplaceeditdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFilePlaceEditDialog*
/// @param maximumSize QSize*
///
void k_fileplaceeditdialog_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFilePlaceEditDialog*
/// @param maxw int
/// @param maxh int
///
void k_fileplaceeditdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KFilePlaceEditDialog*
/// @param minw int
///
void k_fileplaceeditdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KFilePlaceEditDialog*
/// @param minh int
///
void k_fileplaceeditdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KFilePlaceEditDialog*
/// @param maxw int
///
void k_fileplaceeditdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KFilePlaceEditDialog*
/// @param maxh int
///
void k_fileplaceeditdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFilePlaceEditDialog*
/// @param sizeIncrement QSize*
///
void k_fileplaceeditdialog_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFilePlaceEditDialog*
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFilePlaceEditDialog*
/// @param baseSize QSize*
///
void k_fileplaceeditdialog_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFilePlaceEditDialog*
/// @param basew int
/// @param baseh int
///
void k_fileplaceeditdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFilePlaceEditDialog*
/// @param fixedSize QSize*
///
void k_fileplaceeditdialog_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFilePlaceEditDialog*
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KFilePlaceEditDialog*
/// @param w int
///
void k_fileplaceeditdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KFilePlaceEditDialog*
/// @param h int
///
void k_fileplaceeditdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPointF*
///
QPointF* k_fileplaceeditdialog_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPoint*
///
QPoint* k_fileplaceeditdialog_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPointF*
///
QPointF* k_fileplaceeditdialog_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPoint*
///
QPoint* k_fileplaceeditdialog_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPointF*
///
QPointF* k_fileplaceeditdialog_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPoint*
///
QPoint* k_fileplaceeditdialog_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPointF*
///
QPointF* k_fileplaceeditdialog_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QPoint*
///
QPoint* k_fileplaceeditdialog_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_fileplaceeditdialog_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_fileplaceeditdialog_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_fileplaceeditdialog_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_fileplaceeditdialog_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KFilePlaceEditDialog*
///
const QPalette* k_fileplaceeditdialog_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KFilePlaceEditDialog*
/// @param palette QPalette*
///
void k_fileplaceeditdialog_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KFilePlaceEditDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_fileplaceeditdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_fileplaceeditdialog_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KFilePlaceEditDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_fileplaceeditdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_fileplaceeditdialog_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KFilePlaceEditDialog*
///
const QFont* k_fileplaceeditdialog_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KFilePlaceEditDialog*
/// @param font QFont*
///
void k_fileplaceeditdialog_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KFilePlaceEditDialog*
///
QFontMetrics* k_fileplaceeditdialog_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KFilePlaceEditDialog*
///
QFontInfo* k_fileplaceeditdialog_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KFilePlaceEditDialog*
///
QCursor* k_fileplaceeditdialog_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KFilePlaceEditDialog*
/// @param cursor QCursor*
///
void k_fileplaceeditdialog_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KFilePlaceEditDialog*
/// @param enable bool
///
void k_fileplaceeditdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KFilePlaceEditDialog*
/// @param enable bool
///
void k_fileplaceeditdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFilePlaceEditDialog*
/// @param mask QBitmap*
///
void k_fileplaceeditdialog_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFilePlaceEditDialog*
/// @param mask QRegion*
///
void k_fileplaceeditdialog_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KFilePlaceEditDialog*
///
QRegion* k_fileplaceeditdialog_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param target QPaintDevice*
///
void k_fileplaceeditdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param painter QPainter*
///
void k_fileplaceeditdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFilePlaceEditDialog*
///
QPixmap* k_fileplaceeditdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KFilePlaceEditDialog*
///
QGraphicsEffect* k_fileplaceeditdialog_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KFilePlaceEditDialog*
/// @param effect QGraphicsEffect*
///
void k_fileplaceeditdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFilePlaceEditDialog*
/// @param type enum Qt__GestureType
///
void k_fileplaceeditdialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KFilePlaceEditDialog*
/// @param type enum Qt__GestureType
///
void k_fileplaceeditdialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KFilePlaceEditDialog*
/// @param windowTitle const char*
///
void k_fileplaceeditdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KFilePlaceEditDialog*
/// @param styleSheet const char*
///
void k_fileplaceeditdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KFilePlaceEditDialog*
/// @param icon QIcon*
///
void k_fileplaceeditdialog_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KFilePlaceEditDialog*
///
QIcon* k_fileplaceeditdialog_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KFilePlaceEditDialog*
/// @param windowIconText const char*
///
void k_fileplaceeditdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KFilePlaceEditDialog*
/// @param windowRole const char*
///
void k_fileplaceeditdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KFilePlaceEditDialog*
/// @param filePath const char*
///
void k_fileplaceeditdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KFilePlaceEditDialog*
/// @param level double
///
void k_fileplaceeditdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KFilePlaceEditDialog*
///
double k_fileplaceeditdialog_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KFilePlaceEditDialog*
/// @param toolTip const char*
///
void k_fileplaceeditdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KFilePlaceEditDialog*
/// @param msec int
///
void k_fileplaceeditdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KFilePlaceEditDialog*
/// @param statusTip const char*
///
void k_fileplaceeditdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KFilePlaceEditDialog*
/// @param whatsThis const char*
///
void k_fileplaceeditdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KFilePlaceEditDialog*
/// @param name const char*
///
void k_fileplaceeditdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KFilePlaceEditDialog*
/// @param description const char*
///
void k_fileplaceeditdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KFilePlaceEditDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_fileplaceeditdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_fileplaceeditdialog_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KFilePlaceEditDialog*
/// @param locale QLocale*
///
void k_fileplaceeditdialog_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KFilePlaceEditDialog*
///
QLocale* k_fileplaceeditdialog_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFilePlaceEditDialog*
/// @param reason enum Qt__FocusReason
///
void k_fileplaceeditdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_fileplaceeditdialog_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KFilePlaceEditDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_fileplaceeditdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_fileplaceeditdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KFilePlaceEditDialog*
/// @param focusProxy QWidget*
///
void k_fileplaceeditdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_fileplaceeditdialog_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KFilePlaceEditDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_fileplaceeditdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QCursor*
///
void k_fileplaceeditdialog_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFilePlaceEditDialog*
/// @param key QKeySequence*
///
int32_t k_fileplaceeditdialog_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
///
void k_fileplaceeditdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
///
void k_fileplaceeditdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
///
void k_fileplaceeditdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_fileplaceeditdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_fileplaceeditdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KFilePlaceEditDialog*
/// @param enable bool
///
void k_fileplaceeditdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KFilePlaceEditDialog*
///
QGraphicsProxyWidget* k_fileplaceeditdialog_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlaceEditDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QRect*
///
void k_fileplaceeditdialog_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QRegion*
///
void k_fileplaceeditdialog_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlaceEditDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QRect*
///
void k_fileplaceeditdialog_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QRegion*
///
void k_fileplaceeditdialog_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KFilePlaceEditDialog*
/// @param hidden bool
///
void k_fileplaceeditdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QWidget*
///
void k_fileplaceeditdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFilePlaceEditDialog*
/// @param x int
/// @param y int
///
void k_fileplaceeditdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QPoint*
///
void k_fileplaceeditdialog_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFilePlaceEditDialog*
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QSize*
///
void k_fileplaceeditdialog_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFilePlaceEditDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplaceeditdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFilePlaceEditDialog*
/// @param geometry QRect*
///
void k_fileplaceeditdialog_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFilePlaceEditDialog*
///
char* k_fileplaceeditdialog_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KFilePlaceEditDialog*
/// @param geometry char*
///
bool k_fileplaceeditdialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 QWidget*
///
bool k_fileplaceeditdialog_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_fileplaceeditdialog_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KFilePlaceEditDialog*
/// @param state flag of enum Qt__WindowState
///
void k_fileplaceeditdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KFilePlaceEditDialog*
/// @param state flag of enum Qt__WindowState
///
void k_fileplaceeditdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KFilePlaceEditDialog*
///
QSizePolicy* k_fileplaceeditdialog_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFilePlaceEditDialog*
/// @param sizePolicy QSizePolicy*
///
void k_fileplaceeditdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFilePlaceEditDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_fileplaceeditdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KFilePlaceEditDialog*
///
QRegion* k_fileplaceeditdialog_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFilePlaceEditDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_fileplaceeditdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFilePlaceEditDialog*
/// @param margins QMargins*
///
void k_fileplaceeditdialog_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KFilePlaceEditDialog*
///
QMargins* k_fileplaceeditdialog_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KFilePlaceEditDialog*
///
QRect* k_fileplaceeditdialog_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KFilePlaceEditDialog*
///
QLayout* k_fileplaceeditdialog_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KFilePlaceEditDialog*
/// @param layout QLayout*
///
void k_fileplaceeditdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFilePlaceEditDialog*
/// @param parent QWidget*
///
void k_fileplaceeditdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFilePlaceEditDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_fileplaceeditdialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFilePlaceEditDialog*
/// @param dx int
/// @param dy int
///
void k_fileplaceeditdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFilePlaceEditDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_fileplaceeditdialog_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KFilePlaceEditDialog*
/// @param on bool
///
void k_fileplaceeditdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlaceEditDialog*
/// @param action QAction*
///
void k_fileplaceeditdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KFilePlaceEditDialog*
/// @param actions libqt_list of QAction*
///
void k_fileplaceeditdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KFilePlaceEditDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_fileplaceeditdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KFilePlaceEditDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_fileplaceeditdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KFilePlaceEditDialog*
/// @param action QAction*
///
void k_fileplaceeditdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_fileplaceeditdialog_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlaceEditDialog*
/// @param text const char*
///
QAction* k_fileplaceeditdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlaceEditDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_fileplaceeditdialog_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlaceEditDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_fileplaceeditdialog_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlaceEditDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_fileplaceeditdialog_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KFilePlaceEditDialog*
///
QWidget* k_fileplaceeditdialog_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KFilePlaceEditDialog*
/// @param type flag of enum Qt__WindowType
///
void k_fileplaceeditdialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_fileplaceeditdialog_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 enum Qt__WindowType
///
void k_fileplaceeditdialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KFilePlaceEditDialog*
/// @param type flag of enum Qt__WindowType
///
void k_fileplaceeditdialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return enum Qt__WindowType
///
int32_t k_fileplaceeditdialog_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_fileplaceeditdialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KFilePlaceEditDialog*
/// @param x int
/// @param y int
///
QWidget* k_fileplaceeditdialog_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KFilePlaceEditDialog*
/// @param p QPoint*
///
QWidget* k_fileplaceeditdialog_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KFilePlaceEditDialog*
/// @param p QPointF*
///
QWidget* k_fileplaceeditdialog_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_fileplaceeditdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_fileplaceeditdialog_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KFilePlaceEditDialog*
/// @param child QWidget*
///
bool k_fileplaceeditdialog_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KFilePlaceEditDialog*
/// @param enabled bool
///
void k_fileplaceeditdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KFilePlaceEditDialog*
///
QBackingStore* k_fileplaceeditdialog_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KFilePlaceEditDialog*
///
QWindow* k_fileplaceeditdialog_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KFilePlaceEditDialog*
///
QScreen* k_fileplaceeditdialog_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KFilePlaceEditDialog*
/// @param screen QScreen*
///
void k_fileplaceeditdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_fileplaceeditdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param title const char*
///
void k_fileplaceeditdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, const char* title)
///
void k_fileplaceeditdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param icon QIcon*
///
void k_fileplaceeditdialog_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QIcon* icon)
///
void k_fileplaceeditdialog_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param iconText const char*
///
void k_fileplaceeditdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, const char* iconText)
///
void k_fileplaceeditdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFilePlaceEditDialog*
/// @param pos QPoint*
///
void k_fileplaceeditdialog_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QPoint* pos)
///
void k_fileplaceeditdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_fileplaceeditdialog_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KFilePlaceEditDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_fileplaceeditdialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_fileplaceeditdialog_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_fileplaceeditdialog_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_fileplaceeditdialog_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_fileplaceeditdialog_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_fileplaceeditdialog_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlaceEditDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_fileplaceeditdialog_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFilePlaceEditDialog*
/// @param rectangle QRect*
///
QPixmap* k_fileplaceeditdialog_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFilePlaceEditDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_fileplaceeditdialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFilePlaceEditDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_fileplaceeditdialog_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
/// @param enable bool
///
void k_fileplaceeditdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
/// @param enable bool
///
void k_fileplaceeditdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_fileplaceeditdialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_fileplaceeditdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_fileplaceeditdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_fileplaceeditdialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char* k_fileplaceeditdialog_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFilePlaceEditDialog*
/// @param name const char*
///
void k_fileplaceeditdialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFilePlaceEditDialog*
/// @param b bool
///
bool k_fileplaceeditdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KFilePlaceEditDialog*
///
QThread* k_fileplaceeditdialog_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFilePlaceEditDialog*
/// @param thread QThread*
///
bool k_fileplaceeditdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param interval int
///
int32_t k_fileplaceeditdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param time int64_t of nanoseconds
///
int32_t k_fileplaceeditdialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param id int
///
void k_fileplaceeditdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param id enum Qt__TimerId
///
void k_fileplaceeditdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KFilePlaceEditDialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_fileplaceeditdialog_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFilePlaceEditDialog*
/// @param filterObj QObject*
///
void k_fileplaceeditdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFilePlaceEditDialog*
/// @param obj QObject*
///
void k_fileplaceeditdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_fileplaceeditdialog_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_fileplaceeditdialog_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFilePlaceEditDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_fileplaceeditdialog_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileplaceeditdialog_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_fileplaceeditdialog_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
/// @param receiver QObject*
///
bool k_fileplaceeditdialog_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_fileplaceeditdialog_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFilePlaceEditDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_fileplaceeditdialog_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KFilePlaceEditDialog*
/// @param name const char*
///
QVariant* k_fileplaceeditdialog_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFilePlaceEditDialog*
///
const char** k_fileplaceeditdialog_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePlaceEditDialog*
///
QBindingStorage* k_fileplaceeditdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KFilePlaceEditDialog*
///
const QBindingStorage* k_fileplaceeditdialog_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KFilePlaceEditDialog*
///
QObject* k_fileplaceeditdialog_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KFilePlaceEditDialog*
/// @param classname const char*
///
bool k_fileplaceeditdialog_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_fileplaceeditdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlaceEditDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_fileplaceeditdialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_fileplaceeditdialog_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_fileplaceeditdialog_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFilePlaceEditDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_fileplaceeditdialog_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
/// @param signal const char*
///
bool k_fileplaceeditdialog_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_fileplaceeditdialog_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileplaceeditdialog_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFilePlaceEditDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileplaceeditdialog_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QObject*
///
void k_fileplaceeditdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QObject* param1)
///
void k_fileplaceeditdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KFilePlaceEditDialog*
///
double k_fileplaceeditdialog_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KFilePlaceEditDialog*
///
double k_fileplaceeditdialog_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_fileplaceeditdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_fileplaceeditdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param visible bool
///
void k_fileplaceeditdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param visible bool
///
void k_fileplaceeditdialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, bool visible)
///
void k_fileplaceeditdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_super_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QSize* func(KFilePlaceEditDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_fileplaceeditdialog_on_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QSize* k_fileplaceeditdialog_super_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QSize* func(KFilePlaceEditDialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_fileplaceeditdialog_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_open(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_super_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_exec(void* self, int32_t (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 int
///
void k_fileplaceeditdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 int
///
void k_fileplaceeditdialog_super_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, int param1)
///
void k_fileplaceeditdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_accept(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_reject(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QKeyEvent*
///
void k_fileplaceeditdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QKeyEvent*
///
void k_fileplaceeditdialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QKeyEvent* param1)
///
void k_fileplaceeditdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QCloseEvent*
///
void k_fileplaceeditdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QCloseEvent*
///
void k_fileplaceeditdialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QCloseEvent* param1)
///
void k_fileplaceeditdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QShowEvent*
///
void k_fileplaceeditdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QShowEvent*
///
void k_fileplaceeditdialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QShowEvent* param1)
///
void k_fileplaceeditdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QResizeEvent*
///
void k_fileplaceeditdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QResizeEvent*
///
void k_fileplaceeditdialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QResizeEvent* param1)
///
void k_fileplaceeditdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QContextMenuEvent*
///
void k_fileplaceeditdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QContextMenuEvent*
///
void k_fileplaceeditdialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QContextMenuEvent* param1)
///
void k_fileplaceeditdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_fileplaceeditdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_fileplaceeditdialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2)
///
void k_fileplaceeditdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 int
///
int32_t k_fileplaceeditdialog_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 int
///
int32_t k_fileplaceeditdialog_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self, int param1)
///
void k_fileplaceeditdialog_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QPaintEngine* k_fileplaceeditdialog_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QPaintEngine* k_fileplaceeditdialog_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QPaintEngine* func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
bool k_fileplaceeditdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
bool k_fileplaceeditdialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self, QEvent* event)
///
void k_fileplaceeditdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMouseEvent* event)
///
void k_fileplaceeditdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMouseEvent* event)
///
void k_fileplaceeditdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMouseEvent* event)
///
void k_fileplaceeditdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMouseEvent*
///
void k_fileplaceeditdialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMouseEvent* event)
///
void k_fileplaceeditdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QWheelEvent*
///
void k_fileplaceeditdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QWheelEvent*
///
void k_fileplaceeditdialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QWheelEvent* event)
///
void k_fileplaceeditdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QKeyEvent*
///
void k_fileplaceeditdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QKeyEvent*
///
void k_fileplaceeditdialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QKeyEvent* event)
///
void k_fileplaceeditdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QFocusEvent*
///
void k_fileplaceeditdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QFocusEvent*
///
void k_fileplaceeditdialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QFocusEvent* event)
///
void k_fileplaceeditdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QFocusEvent*
///
void k_fileplaceeditdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QFocusEvent*
///
void k_fileplaceeditdialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QFocusEvent* event)
///
void k_fileplaceeditdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEnterEvent*
///
void k_fileplaceeditdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEnterEvent*
///
void k_fileplaceeditdialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QEnterEvent* event)
///
void k_fileplaceeditdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
void k_fileplaceeditdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
void k_fileplaceeditdialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QEvent* event)
///
void k_fileplaceeditdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QPaintEvent*
///
void k_fileplaceeditdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QPaintEvent*
///
void k_fileplaceeditdialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QPaintEvent* event)
///
void k_fileplaceeditdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMoveEvent*
///
void k_fileplaceeditdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QMoveEvent*
///
void k_fileplaceeditdialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMoveEvent* event)
///
void k_fileplaceeditdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QTabletEvent*
///
void k_fileplaceeditdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QTabletEvent*
///
void k_fileplaceeditdialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QTabletEvent* event)
///
void k_fileplaceeditdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QActionEvent*
///
void k_fileplaceeditdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QActionEvent*
///
void k_fileplaceeditdialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QActionEvent* event)
///
void k_fileplaceeditdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragEnterEvent*
///
void k_fileplaceeditdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragEnterEvent*
///
void k_fileplaceeditdialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QDragEnterEvent* event)
///
void k_fileplaceeditdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragMoveEvent*
///
void k_fileplaceeditdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragMoveEvent*
///
void k_fileplaceeditdialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QDragMoveEvent* event)
///
void k_fileplaceeditdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragLeaveEvent*
///
void k_fileplaceeditdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDragLeaveEvent*
///
void k_fileplaceeditdialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QDragLeaveEvent* event)
///
void k_fileplaceeditdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDropEvent*
///
void k_fileplaceeditdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QDropEvent*
///
void k_fileplaceeditdialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QDropEvent* event)
///
void k_fileplaceeditdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QHideEvent*
///
void k_fileplaceeditdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QHideEvent*
///
void k_fileplaceeditdialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QHideEvent* event)
///
void k_fileplaceeditdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_fileplaceeditdialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_fileplaceeditdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_fileplaceeditdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QEvent*
///
void k_fileplaceeditdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QEvent*
///
void k_fileplaceeditdialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QEvent* param1)
///
void k_fileplaceeditdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_fileplaceeditdialog_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_fileplaceeditdialog_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_fileplaceeditdialog_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param painter QPainter*
///
void k_fileplaceeditdialog_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param painter QPainter*
///
void k_fileplaceeditdialog_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QPainter* painter)
///
void k_fileplaceeditdialog_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param offset QPoint*
///
QPaintDevice* k_fileplaceeditdialog_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param offset QPoint*
///
QPaintDevice* k_fileplaceeditdialog_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QPaintDevice* func(KFilePlaceEditDialog* self, QPoint* offset)
///
void k_fileplaceeditdialog_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QPainter* k_fileplaceeditdialog_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QPainter* k_fileplaceeditdialog_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QPainter* func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QInputMethodEvent*
///
void k_fileplaceeditdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QInputMethodEvent*
///
void k_fileplaceeditdialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QInputMethodEvent* param1)
///
void k_fileplaceeditdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_fileplaceeditdialog_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_fileplaceeditdialog_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QVariant* func(KFilePlaceEditDialog* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_fileplaceeditdialog_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param next bool
///
bool k_fileplaceeditdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param next bool
///
bool k_fileplaceeditdialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self, bool next)
///
void k_fileplaceeditdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QTimerEvent*
///
void k_fileplaceeditdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QTimerEvent*
///
void k_fileplaceeditdialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QTimerEvent* event)
///
void k_fileplaceeditdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QChildEvent*
///
void k_fileplaceeditdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QChildEvent*
///
void k_fileplaceeditdialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QChildEvent* event)
///
void k_fileplaceeditdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
void k_fileplaceeditdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param event QEvent*
///
void k_fileplaceeditdialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QEvent* event)
///
void k_fileplaceeditdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
void k_fileplaceeditdialog_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
void k_fileplaceeditdialog_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMetaMethod* signal)
///
void k_fileplaceeditdialog_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
void k_fileplaceeditdialog_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
void k_fileplaceeditdialog_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QMetaMethod* signal)
///
void k_fileplaceeditdialog_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QWidget*
///
void k_fileplaceeditdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param param1 QWidget*
///
void k_fileplaceeditdialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, QWidget* param1)
///
void k_fileplaceeditdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
///
bool k_fileplaceeditdialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QObject* k_fileplaceeditdialog_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
QObject* k_fileplaceeditdialog_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback QObject* func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
///
int32_t k_fileplaceeditdialog_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self)
///
void k_fileplaceeditdialog_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param signal const char*
///
int32_t k_fileplaceeditdialog_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param signal const char*
///
int32_t k_fileplaceeditdialog_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback int32_t func(KFilePlaceEditDialog* self, const char* signal)
///
void k_fileplaceeditdialog_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
bool k_fileplaceeditdialog_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param signal QMetaMethod*
///
bool k_fileplaceeditdialog_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback bool func(KFilePlaceEditDialog* self, QMetaMethod* signal)
///
void k_fileplaceeditdialog_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_fileplaceeditdialog_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFilePlaceEditDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_fileplaceeditdialog_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlaceEditDialog*
/// @param callback double func(KFilePlaceEditDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_fileplaceeditdialog_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlaceEditDialog*
/// @param callback void func(KFilePlaceEditDialog* self, const char* objectName)
///
void k_fileplaceeditdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfileplaceeditdialog.html#dtor.KFilePlaceEditDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KFilePlaceEditDialog*
///
void k_fileplaceeditdialog_delete(void* self);

#endif
